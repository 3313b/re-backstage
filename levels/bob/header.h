#ifndef BOB_HEADER_H
#define BOB_HEADER_H

#include "types.h"
#include "game/moving_texture.h"
#include "game/areamap.h"

// geo
extern const GeoLayout bob_geo[];
extern const GeoLayout bob_seesaw_platform_geo[];

// leveldata
extern const Gfx battle_field_1_dl_mesh[];
extern const Gfx battle_field_2_dl_mesh[];
extern const Gfx battle_field_3_dl_mesh[];
extern const Gfx battle_field_dl_04_mesh[];
extern const Gfx bob_seesaw_dl[];

extern const Collision bob_collision[];
extern const MacroObject battle_field_macro[];
extern const Collision bob_seesaw_collision[];

extern const struct MovtexQuadCollection bob_movtex_water[];
extern struct AreaMapData battle_field_areamap;

// script
extern const LevelScript level_bob_entry[];

#endif
