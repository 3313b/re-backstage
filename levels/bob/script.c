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

#include "make_const_nonconst.h"
#include "levels/bob/header.h"


static const LevelScript script_func_local_1 [] = { // Stars
    OBJECT(/*model*/ MODEL_BOB_SEESAW_PLATFORM,   /*pos*/ -2303,   717,  1024, /*angle*/ 0, 45, 0,   /*bhvParam*/ 0, /*bhv*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_STAR,  /*pos*/     1550,  1200, 300, /*angle*/ 0, 0, 0, /*bhvParam*/ 0x01000000, /*bhv*/ bhvStar),
    OBJECT(/*model*/ MODEL_STAR,  /*pos*/     -600,  4400, 600, /*angle*/ 0, 0, 0, /*bhvParam*/ 0x02000000, /*bhv*/ bhvStar),
    RETURN(),
};

const LevelScript level_bob_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(/*seg*/ 0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _grass_mio0SegmentRomStart, _grass_mio0SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*bhvParam*/ BPARAM4(0x01), /*bhv*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    LOAD_MODEL_FROM_GEO(MODEL_BUBBLY_TREE,       RCP_HmsMainTree),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM,  bob_seesaw_platform_geo),

    AREA(/*index*/ 1, bob_geo),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5695,  1000,  5600, /*angle*/ 0, 135, 0,  /*bhvParam*/ BPARAM2(WARP_NODE_0A), /*bhv*/ bhvSpinAirborneCircleWarp),
        WARP_NODE(/*id*/ WARP_NODE_0A,      /*destLevel*/ LEVEL_BOB, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A,  /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_SUCCESS, /*destLevel*/ LEVEL_CASTLE,   /*destArea*/ 1, /*destNode*/ WARP_NODE_24,  /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_DEATH,   /*destLevel*/ LEVEL_CASTLE,   /*destArea*/ 1, /*destNode*/ WARP_NODE_25,  /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_1),
        TERRAIN(/*terrainData*/ bob_collision),
        MACRO_OBJECTS(/*objList*/ battle_field_macro),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0005, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 135, /*pos*/ -5695, 484, 5600),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
