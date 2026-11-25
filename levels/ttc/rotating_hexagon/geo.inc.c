// 0x0E0002E0
const GeoLayout ttc_rotating_hexagon_geo[] = {
    GEO_CULLING_RADIUS(400),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_rotating_hexagon_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
