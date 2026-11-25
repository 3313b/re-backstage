// 0x0E000270
const GeoLayout ttc_pendulum_geo[] = {
    GEO_CULLING_RADIUS(1100),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_pendulum_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
