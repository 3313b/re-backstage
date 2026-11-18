#ifndef BBH_HEADER_H
#define BBH_HEADER_H

#include "types.h"

// geo
extern const GeoLayout bbh_geo[];
extern const GeoLayout tumbling_platform_far_geo[];
extern const GeoLayout tumbling_platform_near_geo[];
extern const GeoLayout haunted_bookshelf_geo[];

// leveldata
extern const Gfx teresa_obake_01_dl_mesh[];
extern const Gfx teresa_obake_02_dl_mesh[];
extern const Gfx teresa_obake_03_dl_mesh[];
extern const Gfx teresa_obake_04_dl_mesh[];
extern const Gfx teresa_obake_dl_05_mesh[];
extern const Gfx teresa_obake_06_dl_mesh[];
extern const Gfx teresa_obake_07_dl_mesh[];
extern const Gfx teresa_obake_08_dl_mesh[];
extern const Gfx teresa_obake_09_dl_mesh[];
extern const Gfx teresa_obake_10_dl_mesh[];
extern const Gfx teresa_obake_11_dl_mesh[];
extern const Gfx tumbling_platform_far_dl[];
extern const Gfx tumbling_platform_near_dl[];
extern const Gfx bbh_haunted_bookshelf_dl[];

extern const Collision bbh_collision[];
extern const u8 bbh_collision_rooms[];
extern const MacroObject bbh_macro[];
extern const Collision bbh_collision_tumbling_bridge[];
extern const Collision bbh_collision_haunted_bookshelf[];

// script
extern const LevelScript level_bbh_entry[];

#endif
