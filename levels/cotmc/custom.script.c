#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/cotmc/header.h"
extern u8 _cotmc_segment_ESegmentRomStart[]; 
extern u8 _cotmc_segment_ESegmentRomEnd[];
#include "levels/ccm/header.h"
const LevelScript level_cotmc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _ccmSegmentRomStart, _ccmSegmentRomEnd),
LOAD_RAW(0x0E, _cotmc_segment_ESegmentRomStart, _cotmc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom41647808_skybox_mio0SegmentRomStart,_SkyboxCustom41647808_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group16_mio0SegmentRomStart,_group16_mio0SegmentRomEnd),
LOAD_RAW(13,_group16_geoSegmentRomStart,_group16_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4),
LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR,    cabin_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE,     snow_tree_geo),
LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT,  ccm_geo_0003D0),
LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE,  ccm_geo_0003F0),
LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD,  ccm_geo_00040C),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
LOAD_MODEL_FROM_GEO(39, cabin_door_geo),
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_GEO(100,0x06003754),
// LOAD_MODEL_FROM_GEO(101,0x06003874),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_17),
JUMP_LINK(local_area_cotmc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_cotmc_1_[] = {
AREA(1,Geo_cotmc_1_0x19001700),
TERRAIN(col_cotmc_1_0xe02b488),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(TERRAIN_SNOW),
JUMP_LINK(local_objects_cotmc_1_),
JUMP_LINK(local_warps_cotmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_cotmc_1_[] = {
OBJECT(0,1257,-1156,187,0,0,0,0xa0000, bhvSpinAirborneWarp),
OBJECT(22,11874,-602,-2254,0,279,0,0xb0000, bhvWarpPipe),
OBJECT(22,10137,-3815,-1903,0,270,0,0xc0000, bhvWarpPipe),
OBJECT(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp),
OBJECT(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp),
OBJECT(0,-5281,-245,-5060,0,0,0,0x0, bhvHiddenRedCoinStar),
OBJECT(122,2548,-3646,10916,0,0,0,0x1000000, bhvStar),
OBJECT(122,5134,3021,-8184,0,0,0,0x2000000, bhvStar),
OBJECT(85,-7337,1784,5731,0,0,0,0x10000, bhvCapSwitch),
OBJECT(215,-241,-1278,-875,0,0,0,0x0, bhvRedCoin),
OBJECT(215,972,-2608,-3496,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-2749,261,-4030,4,0,1,0x0, bhvRedCoin),
OBJECT(215,392,-1253,9826,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-8100,2729,7575,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-5680,552,-2998,0,0,0,0x0, bhvRedCoin),
OBJECT(215,5693,-3750,-3060,0,0,0,0x0, bhvRedCoin),
OBJECT(215,4497,-602,-8663,0,0,0,0x0, bhvRedCoin),
OBJECT(137,-8615,-941,13487,0,0,0,0x10000, bhvExclamationBox),
OBJECT(137,-5661,2089,5731,0,0,0,0x10000, bhvExclamationBox),
OBJECT(137,7594,-260,-4060,0,0,0,0x10000, bhvExclamationBox),
OBJECT(137,413,-729,1313,0,0,0,0x10000, bhvExclamationBox),
OBJECT(137,8437,-4010,11043,0,0,0,0x10000, bhvExclamationBox),
OBJECT(137,8340,-938,5986,0,0,0,0x10000, bhvExclamationBox),
OBJECT(120,5464,-4234,12927,0,0,0,0x0, bhvRecoveryHeart),
OBJECT(116,3430,-602,-7279,0,0,0,0x0, bhvMoneybagHidden),
OBJECT(0,4188,-602,-2551,0,0,0,0x0, bhvGoombaTripletSpawner),
OBJECT(0,1592,-602,-3106,0,0,0,0x0, bhvGoombaTripletSpawner),
OBJECT(195,2105,-1156,826,0,0,0,0x3f0000, bhvBobombBuddy),
OBJECT(0,7282,-4545,7621,0,0,0,0x40000, bhvFlamethrower),
OBJECT(0,7420,-4545,12592,0,0,0,0x40000, bhvFlamethrower),
OBJECT(0,3219,-4545,8826,0,0,0,0x40000, bhvFlamethrower),
OBJECT(0,4151,-4545,9680,0,0,0,0x40000, bhvFlamethrower),
OBJECT(0,3205,-4546,11841,0,0,0,0x40000, bhvFlamethrower),
OBJECT(207,647,-1610,-6444,0,0,0,0x0, bhvFloorSwitchHiddenObjects),
OBJECT(129,-2549,-602,-4030,0,0,0,0x0, bhvHiddenObject),
OBJECT(129,-2749,-410,-4030,0,0,0,0x0, bhvHiddenObject),
OBJECT(120,3853,-531,-3928,0,0,0,0x0, bhvRecoveryHeart),
OBJECT(0,6961,-4286,10018,0,0,0,0x0, bhvGoombaTripletSpawner),
OBJECT(194,-5273,-1253,5869,0,0,0,0x0, bhvHomingAmp),
OBJECT(212,5839,-3802,-714,0,0,0,0x0, bhv1Up),
OBJECT(124,6408,-602,-4846,0,0,0,0x660000, bhvMessagePanel),
OBJECT(194,-8997,625,5143,0,0,0,0x0, bhvHomingAmp),
RETURN()
};
const LevelScript local_warps_cotmc_1_[] = {
WARP_NODE(10,28,1,10,0),
WARP_NODE(11,28,1,12,0),
WARP_NODE(12,28,1,11,0),
WARP_NODE(13,28,1,14,0),
WARP_NODE(14,28,1,13,0),
WARP_NODE(240,16,1,240,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
