#ifndef COMMON0_H
#define COMMON0_H

#include "types.h"
#include "headers.h"

// slide_exit_podium
extern Hierarchy RCP_HmsEndoor[];
extern const Collision endoor_info[];

// cannon_barrel
extern Hierarchy RCP_HmsCannonBody[];

// cannon_base
extern Hierarchy RCP_HmsCannonBase[];

// carryboy
extern Hierarchy RCP_HmsEnemycarryboy[];
extern Gfx RCP_carry_boy_carry9[];
extern Gfx RCP_carry_boy_carry0[];
extern Gfx RCP_carry_boy_carry1[];
extern Gfx RCP_carry_boy_carry8[];
extern Gfx RCP_carry_boy_carry7[];
extern Gfx RCP_carry_boy_carry5[];
extern Gfx RCP_carry_boy_carry2[];
extern Gfx RCP_carry_boy_carry6[];
extern Gfx RCP_carry_boy_carry3[];
extern Gfx RCP_carry_boy_carry4[];
extern AnimePtr carryboy_anime[];

// bobomb
extern const Hierarchy RCP_HmsEnemybom_basedata[];
extern const Gfx RCP_bom_basedata0[];
extern const Gfx RCP_bom_basedata1[];
extern const Gfx RCP_bom_basedata2[];
extern const Gfx gfx_bom[];
extern AnimePtr bom_anime[];

// bowling_ball
extern const GeoLayout bowling_ball_geo[];
extern const GeoLayout bowling_ball_track_geo[];

// goomba
extern const GeoLayout goomba_geo[];
extern const Gfx goomba_seg8_dl_0801B2E8[];
extern const Gfx goomba_seg8_dl_0801B560[];
extern const Gfx goomba_seg8_dl_0801B5A0[];
extern const Gfx goomba_seg8_dl_0801B5C8[];
extern const Gfx goomba_seg8_dl_0801B5F0[];
extern const Gfx goomba_seg8_dl_0801B658[];
extern const Gfx goomba_seg8_dl_0801B690[];
extern const Gfx goomba_seg8_dl_0801CE20[];
extern const Gfx goomba_seg8_dl_0801CF78[];
extern const Gfx goomba_seg8_dl_0801D0D0[];
extern const Gfx goomba_seg8_dl_0801D360[];
extern const Gfx goomba_seg8_dl_0801D760[];
extern const struct Animation *const goomba_seg8_anims_0801DA4C[];

// test_platform
extern const GeoLayout test_platform_geo[];
extern const Gfx unknown_seg8_dl_08026260[];
extern const Collision unknown_seg8_collision_080262F8[];

// koopa_shell
extern Hierarchy RCP_HmsRedNoko[];
extern Hierarchy RCP_HmsGreenNoko[];

#endif
