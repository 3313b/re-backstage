// 0x0E000370
const GeoLayout ttc_spinner_geo[] = {
    GEO_CULLING_RADIUS(500),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_spinner_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
