// 0x0E000240
const GeoLayout ttc_rotating_cube_geo[] = {
    GEO_CULLING_RADIUS(410),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_rotating_cube_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
