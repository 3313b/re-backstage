// 0x0E0002C8
const GeoLayout ttc_push_block_geo[] = {
    GEO_CULLING_RADIUS(500),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_push_block_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
