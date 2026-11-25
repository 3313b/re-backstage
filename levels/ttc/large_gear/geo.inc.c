// 0x0E0003A0
const GeoLayout ttc_large_gear_geo[] = {
    GEO_CULLING_RADIUS(300),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_ALPHA, ttc_large_gear_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
