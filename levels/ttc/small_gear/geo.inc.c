// 0x0E000388
const GeoLayout ttc_small_gear_geo[] = {
    GEO_CULLING_RADIUS(200),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_ALPHA, ttc_small_gear_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
