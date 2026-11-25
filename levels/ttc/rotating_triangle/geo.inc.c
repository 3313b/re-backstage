// 0x0E0002F8
const GeoLayout ttc_rotating_triangle_geo[] = {
    GEO_CULLING_RADIUS(520),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_rotating_triangle_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
