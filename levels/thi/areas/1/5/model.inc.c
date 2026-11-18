Vtx big_world_5_dl_mesh_vtx_0[4] = {
	{{ {4690, -511, 2131}, 0, {0, 0}, {0, 0, 0, 180} }},
	{{ {4690, -511, 2377}, 0, {0, 990}, {0, 0, 0, 180} }},
	{{ {4936, -511, 2377}, 0, {990, 990}, {0, 0, 0, 180} }},
	{{ {4936, -511, 2131}, 0, {990, 0}, {0, 0, 0, 180} }},
};

Gfx big_world_5_dl_mesh_tri_0[] = {
	gsSPVertex(big_world_5_dl_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx big_world_5_dl_mesh[] = {
	gsSPDisplayList(mat_big_world_ShadowMaterial),
	gsSPDisplayList(big_world_5_dl_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};
