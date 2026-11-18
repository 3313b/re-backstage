// 0x0E000458
const GeoLayout bob_seesaw_platform_geo[] = {
    GEO_CULLING_RADIUS(1200),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bob_seesaw_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
