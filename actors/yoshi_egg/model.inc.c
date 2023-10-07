#include "data/smgs.data.custom.h"

ALIGNED8 const u8 texture_yoshi_egg_geo_0x50057b8_custom[] = {
#include "actors/yoshi_egg/yoshi_egg_geo_0x50057b8_custom.rgba16.inc.c"
};

const Vtx VB_yoshi_egg_geo_0x5005778[] = {
{{{ -128, 0, 0 }, 0, { 0, 1984 }, { 0, 0, 127, 0}}},
{{{ 128, 0, 0 }, 0, { 1984, 1984 }, { 0, 0, 127, 0}}},
{{{ 128, 256, 0 }, 0, { 1984, 0 }, { 0, 0, 127, 0}}},
{{{ -128, 256, 0 }, 0, { 0, 0 }, { 0, 0, 127, 0}}},
};

const Gfx DL_yoshi_egg_geo_0x50098c8[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_yoshi_egg_geo_0x50057b8_custom),
gsSPBranchList(DL_yoshi_egg_geo_0x50097b8),
};

const Gfx DL_yoshi_egg_geo_0x50097b8[] = {
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPTexture(32768, 32768, 0, 0, 1),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_yoshi_egg_geo_0x5005778, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(1, 1, 0, 0, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

const Gfx DL_yoshi_egg_geo_0x50098b0[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_yoshi_egg_geo_0x50057b8_custom),
gsSPBranchList(DL_yoshi_egg_geo_0x50097b8),
};

const Gfx DL_yoshi_egg_geo_0x5009898[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_yoshi_egg_geo_0x50057b8_custom),
gsSPBranchList(DL_yoshi_egg_geo_0x50097b8),
};

const Gfx DL_yoshi_egg_geo_0x5009880[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_yoshi_egg_geo_0x50057b8_custom),
gsSPBranchList(DL_yoshi_egg_geo_0x50097b8),
};

const Gfx DL_yoshi_egg_geo_0x5009868[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_yoshi_egg_geo_0x50057b8_custom),
gsSPBranchList(DL_yoshi_egg_geo_0x50097b8),
};

const Gfx DL_yoshi_egg_geo_0x5009850[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_yoshi_egg_geo_0x50057b8_custom),
gsSPBranchList(DL_yoshi_egg_geo_0x50097b8),
};

const Gfx DL_yoshi_egg_geo_0x5009838[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_yoshi_egg_geo_0x50057b8_custom),
gsSPBranchList(DL_yoshi_egg_geo_0x50097b8),
};

const Gfx DL_yoshi_egg_geo_0x5009820[] = {
gsDPPipeSync(),
gsDPSetTextureImage(0, 2, 1, texture_yoshi_egg_geo_0x50057b8_custom),
gsSPBranchList(DL_yoshi_egg_geo_0x50097b8),
};

