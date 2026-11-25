#ifndef MOVING_TEXTURE_H
#define MOVING_TEXTURE_H

#include <PR/ultratypes.h>

#include "macros.h"
#include "types.h"

#define ROTATE_CLOCKWISE         0
#define ROTATE_COUNTER_CLOCKWISE 1

/// Ids for textures used for moving textures
enum MovtexRectTextureId {
    TEXTURE_WATER,
    TEXTURE_CYAN_WATER,
    TEX_YELLOW_TRI_TTC
};

/**
 * Contains an id and an array of MovtexQuad structs.
 */
struct MovtexQuadCollection {
    /// identifier for geo nodes to refer to this MovtexQuad collection
    s16 id;
    /// points to a short 'n' followed by an array of n MovtexQuad structs
    Movtex *quadArraySegmented;
};

// Moving texture mesh ids have for bits 8-16 a course identifier.
// This corresponds to the numbers used in debug level select, except they are
// re-interpreted as hexadecimal numbers. TTM is course 36, so the id is 0x36
// and the first water quad collection in TTM has id 0x3601.
#define MOVTEX_AREA_CASTLE_GROUNDS   (0x16 << 8)
#define MOVTEX_AREA_DDD              (0x23 << 8)
#define MOVTEX_AREA_WF               (0x24 << 8)
#define MOVTEX_AREA_CASTLE_COURTYARD (0x26 << 8)
#define MOVTEX_AREA_THI              (0x13 << 8)
#define MOVTEX_AREA_TTC              (0x14 << 8)
#define MOVTEX_AREA_BOB              (0x15 << 8)

// Quad collections
#define CASTLE_GROUNDS_MOVTEX_WATER                 (   1 | MOVTEX_AREA_CASTLE_GROUNDS)
#define DDD_MOVTEX_AREA1_WATER                      (   1 | MOVTEX_AREA_DDD)
#define DDD_MOVTEX_AREA2_WATER                      (   2 | MOVTEX_AREA_DDD)
#define WF_MOVTEX_WATER                             (   1 | MOVTEX_AREA_WF)
#define CASTLE_COURTYARD_MOVTEX_STAR_STATUE_WATER   (   1 | MOVTEX_AREA_CASTLE_COURTYARD)
#define TTM_MOVTEX_PUDDLE                           (   1 | MOVTEX_AREA_TTM)
#define THI_MOVTEX_AREA1_WATER                      (   1 | MOVTEX_AREA_THI)
#define BOB_MOVTEX_WATER                            (   1 | MOVTEX_AREA_BOB)

// Non-colored, unique movtex meshes (drawn in level geo)
#define MOVTEX_CASTLE_WATERFALL           (1 | MOVTEX_AREA_CASTLE_GROUNDS)

// Shared movtex meshes (drawn in object geo)
#define MOVTEX_TREADMILL_BIG         (0 | MOVTEX_AREA_TTC)
#define MOVTEX_TREADMILL_SMALL       (1 | MOVTEX_AREA_TTC)

Gfx *geo_movtex_draw_water_regions(s32 callContext, struct GraphNode *node, UNUSED Mat4 mtx);
Gfx *geo_movtex_draw_nocolor(s32 callContext, struct GraphNode *node, UNUSED Mat4 mtx);
Gfx *geo_movtex_draw_colored(s32 callContext, struct GraphNode *node, UNUSED Mat4 mtx);
Gfx *geo_movtex_draw_colored_no_update(s32 callContext, struct GraphNode *node, UNUSED Mat4 mtx);
Gfx *geo_movtex_draw_colored_2_no_update(s32 callContext, struct GraphNode *node, UNUSED Mat4 mtx);
Gfx *geo_movtex_update_horizontal(s32 callContext, struct GraphNode *node, UNUSED Mat4 mtx);

#endif // MOVING_TEXTURE_H
