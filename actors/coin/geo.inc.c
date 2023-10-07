#include "data/smgs.data.custom.h"

extern void *geo_rotate_coin(s32 callContext, void *node, UNUSED void *c);

const GeoLayout yellow_coin_geo[]= {
GEO_SHADOW(0,180,50),
GEO_OPEN_NODE(),
GEO_ASM(0, geo_rotate_coin),
GEO_ROTATION_NODE(0, 0, 0, 0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_yellow_coin_geo_0x8026f54),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};

const GeoLayout yellow_coin_no_shadow_geo[]= {
GEO_SHADOW(0,180,50),
GEO_OPEN_NODE(),
GEO_ASM(0, geo_rotate_coin),
GEO_ROTATION_NODE(0, 0, 0, 0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_yellow_coin_geo_0x8026f54),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};

const GeoLayout blue_coin_geo[]= {
GEO_SHADOW(0,180,80),
GEO_OPEN_NODE(),
GEO_ASM(0, geo_rotate_coin),
GEO_ROTATION_NODE(0, 0, 0, 0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_blue_coin_geo_0x8026fa4),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};

const GeoLayout blue_coin_no_shadow_geo[]= {
GEO_SHADOW(0,180,80),
GEO_OPEN_NODE(),
GEO_ASM(0, geo_rotate_coin),
GEO_ROTATION_NODE(0, 0, 0, 0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_blue_coin_geo_0x8026fa4),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};

const GeoLayout red_coin_geo[]= {
GEO_SHADOW(0,180,50),
GEO_OPEN_NODE(),
GEO_ASM(0, geo_rotate_coin),
GEO_ROTATION_NODE(0, 0, 0, 0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_red_coin_geo_0x80263e8),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};

const GeoLayout red_coin_no_shadow_geo[]= {
GEO_NODE_START(),
GEO_OPEN_NODE(),
GEO_ASM(0, geo_rotate_coin),
GEO_ROTATION_NODE(0, 0, 0, 0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,50,0,DL_red_coin_geo_0x80263e8),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
