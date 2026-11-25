// 0x0E0002A8
const GeoLayout ttc_small_treadmill_geo[] = {
    GEO_CULLING_RADIUS(520),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_small_treadmill_dl),
        GEO_ASM(0x1401, geo_movtex_draw_colored_no_update),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
