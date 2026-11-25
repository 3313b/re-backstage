#ifndef TTC_HEADER_H
#define TTC_HEADER_H

#include "types.h"

// geo
extern const GeoLayout ttc_geo[];

// leveldata
extern const Gfx clock_tower_1_dl_mesh[];
extern const Gfx clock_tower_2_dl_mesh[];
extern const Gfx ttc_rotating_cube_dl[];
extern const Gfx ttc_rotating_prism_dl[];
extern const Gfx ttc_pendulum_dl[];
extern const Gfx ttc_large_treadmill_dl[];
extern const Gfx ttc_small_treadmill_dl[];
extern const Gfx ttc_push_block_dl[];
extern const Gfx ttc_rotating_hexagon_dl[];
extern const Gfx ttc_rotating_triangle_dl[];
extern const Gfx ttc_pit_block_dl[];
extern const Gfx ttc_pit_block_2_dl[];
extern const Gfx ttc_elevator_platform_dl[];
extern const Gfx ttc_clock_hand_dl[];
extern const Gfx ttc_spinner_dl[];
extern const Gfx ttc_small_gear_dl[];
extern const Gfx ttc_large_gear_dl[];

extern const GeoLayout ttc_rotating_cube_geo[];
extern const GeoLayout ttc_rotating_prism_geo[];
extern const GeoLayout ttc_pendulum_geo[];
extern const GeoLayout ttc_large_treadmill_geo[];
extern const GeoLayout ttc_small_treadmill_geo[];
extern const GeoLayout ttc_push_block_geo[];
extern const GeoLayout ttc_rotating_hexagon_geo[];
extern const GeoLayout ttc_rotating_triangle_geo[];
extern const GeoLayout ttc_pit_block_geo[];
extern const GeoLayout ttc_pit_block_2_geo[];
extern const GeoLayout ttc_elevator_platform_geo[];
extern const GeoLayout ttc_clock_hand_geo[];
extern const GeoLayout ttc_spinner_geo[];
extern const GeoLayout ttc_small_gear_geo[];
extern const GeoLayout ttc_large_gear_geo[];

extern const Collision clock_tower_collision[];
extern const MacroObject clock_tower_macro[];
extern const Collision ttc_rotating_cube_collision[];
extern const Collision ttc_rotating_prism_collision[];
extern const Collision ttc_clock_pendulum_collision[];
extern const Collision ttc_large_treadmill_collision[];
extern const Collision ttc_small_treadmill_collision[];
extern const Collision ttc_push_block_collision[];
extern const Collision ttc_rotating_hexagon_collision[];
extern const Collision ttc_rotating_triangle_collision[];
extern const Collision ttc_pit_block_collision[];
extern const Collision ttc_pit_block_2_collision[];
extern const Collision ttc_clock_platform_collision[];
extern const Collision ttc_clock_main_rotation_collision[];
extern const Collision ttc_rotating_clock_platform_2_collision[];

// Movetex
extern const u8 ttc_yellow_triangle[];
extern const Gfx ttc_dl_surface_treadmill_begin[];
extern const Gfx ttc_dl_surface_treadmill_end[];
extern Movtex ttc_movtex_tris_big_surface_treadmill[];
extern Movtex ttc_movtex_tris_small_surface_treadmill[];
extern const Gfx ttc_dl_surface_treadmill[];

// script
extern const LevelScript level_ttc_entry[];

#endif
