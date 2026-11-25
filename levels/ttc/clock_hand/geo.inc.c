// 0x0E000358
const GeoLayout ttc_clock_hand_geo[] = {
    GEO_CULLING_RADIUS(1700),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_clock_hand_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
