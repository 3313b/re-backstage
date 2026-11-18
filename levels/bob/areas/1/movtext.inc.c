static Movtex bob_movtex_water_data[] = {
    MOV_TEX_INIT_LOAD(    2),
    MOV_TEX_ROT_SPEED(   30), // area 1 general water
    MOV_TEX_ROT_SCALE(   20),
    MOV_TEX_4_BOX_TRIS(-4096, -5276),
    MOV_TEX_4_BOX_TRIS(-4096,  7202),
    MOV_TEX_4_BOX_TRIS( 1984,  7202),
    MOV_TEX_4_BOX_TRIS( 1984, -5276),
    MOV_TEX_ROT(     ROTATE_COUNTER_CLOCKWISE),
    MOV_TEX_ALPHA(    0x78),
    MOV_TEX_DEFINE(  TEXTURE_WATER),
    MOV_TEX_END(),
};

const struct MovtexQuadCollection bob_movtex_water[] = {
    {0, bob_movtex_water_data},
    {-1, NULL},
};
