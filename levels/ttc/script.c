#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "actors/group12.h"

#include "make_const_nonconst.h"
#include "levels/ttc/header.h"

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/ -1080,  -840,  1573, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM2(86), /*bhv*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_STAR, /*pos*/ -1260, -2280, -1260, /*angle*/ 0,   0, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvStar),
    OBJECT(/*model*/ MODEL_STAR, /*pos*/ -1140, 6200, -780,   /*angle*/ 0,   0, 0, /*bhvParam*/ 0x01000000, /*bhv*/ bhvStar),
    RETURN(),
};

const LevelScript level_ttc_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(/*seg*/ 0x07, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _machine_mio0SegmentRomStart, _machine_mio0SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x05, _group1_mio0SegmentRomStart, _group1_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0C, _group1_geoSegmentRomStart,  _group1_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*bhvParam*/ BPARAM4(0x01), /*bhv*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_2),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_CUBE,     ttc_rotating_cube_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_PRISM,    ttc_rotating_prism_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_PENDULUM,          ttc_pendulum_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_TREADMILL,   ttc_large_treadmill_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_TREADMILL,   ttc_small_treadmill_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_PUSH_BLOCK,        ttc_push_block_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_HEXAGON,  ttc_rotating_hexagon_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_TRIANGLE, ttc_rotating_triangle_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK,         ttc_pit_block_2_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK_UNUSED,  ttc_pit_block_2_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ELEVATOR_PLATFORM, ttc_elevator_platform_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_CLOCK_HAND,        ttc_clock_hand_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_SPINNER,           ttc_spinner_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_GEAR,        ttc_small_gear_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_GEAR,        ttc_large_gear_geo),

    AREA(/*index*/ 1, ttc_geo),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 1046, -4822, -266, /*angle*/ 0, 192, 0, /*bhvParam*/ BPARAM2(WARP_NODE_0A), /*bhv*/ bhvSpinAirborneCircleWarp),
        WARP_NODE(/*id*/ WARP_NODE_0A,      /*destLevel*/ LEVEL_TTC, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A,  /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_SUCCESS, /*destLevel*/ LEVEL_CASTLE,   /*destArea*/ 1, /*destNode*/ WARP_NODE_24,  /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_DEATH,   /*destLevel*/ LEVEL_CASTLE,   /*destArea*/ 1, /*destNode*/ WARP_NODE_25,  /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_1),
        TERRAIN(/*terrainData*/ clock_tower_collision),
        MACRO_OBJECTS(/*objList*/ clock_tower_macro),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0005, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 192, /*pos*/ 1046, -4822, -548),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
