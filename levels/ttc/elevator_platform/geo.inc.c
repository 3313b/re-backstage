// 0x0E000340
const GeoLayout ttc_elevator_platform_geo[] = {
    GEO_CULLING_RADIUS(380),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_elevator_platform_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
