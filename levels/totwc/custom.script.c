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
#include "levels/totwc/header.h"
extern u8 _totwc_segment_ESegmentRomStart[]; 
extern u8 _totwc_segment_ESegmentRomEnd[];
const LevelScript level_totwc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _totwcSegmentRomStart, _totwcSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160),
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
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_totwc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x19001700),
TERRAIN(col_totwc_1_0xe016868),
SET_BACKGROUND_MUSIC(0,48),
TERRAIN_TYPE(TERRAIN_GRASS),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT(0,1520,-3003,-4379,0,0,0,0xa0000, bhvSpinAirborneWarp),
OBJECT(0,-323,2808,436,0,-154,0,0x0, bhvGoombaTripletSpawner),
OBJECT(0,-563,-1400,148,0,-153,0,0x0, bhvGoombaTripletSpawner),
OBJECT(223,1476,-1890,-54,0,107,0,0x0, bhvChuckya),
OBJECT(223,-564,1504,-2132,0,-151,0,0x0, bhvChuckya),
OBJECT(137,-627,2198,4038,0,0,0,0x0, bhvExclamationBox),
OBJECT(116,-1787,1820,3654,0,0,0,0x0, bhvYellowCoin),
OBJECT(116,-4260,1150,2303,0,0,0,0x0, bhvYellowCoin),
OBJECT(116,-5132,865,1664,0,0,0,0x0, bhvYellowCoin),
OBJECT(116,-5732,706,499,0,0,0,0x0, bhvYellowCoin),
OBJECT(0,-683,507,4580,0,0,0,0x0, bhvHiddenRedCoinStar),
OBJECT(122,-4640,5053,534,0,0,0,0x1000000, bhvStar),
OBJECT(215,2276,-3003,-3947,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-2573,-1888,-4103,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-1199,1452,-2695,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-1217,-1400,-602,0,0,0,0x0, bhvRedCoin),
OBJECT(215,3759,-609,3518,0,0,0,0x0, bhvRedCoin),
OBJECT(215,100,3130,-340,0,0,0,0x0, bhvRedCoin),
OBJECT(215,3920,1931,4140,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-3057,1521,3223,0,0,0,0x0, bhvRedCoin),
OBJECT(0,435,90,4547,0,0,0,0x0, bhvGoombaTripletSpawner),
OBJECT(85,1499,1833,3490,0,0,0,0x0, bhvCapSwitch),
OBJECT(0,1412,-609,2860,0,0,0,0x0, bhvGoombaTripletSpawner),
OBJECT(0,3520,313,4462,0,90,0,0x0, bhvCheckerboardElevatorGroup),
OBJECT(23,-1120,-1400,610,0,0,0,0x0, bhvTree),
OBJECT(23,-304,-609,3016,0,0,0,0x0, bhvTree),
OBJECT(23,2162,-3003,-3306,0,0,0,0x0, bhvTree),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,29,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,118,0),
WARP_NODE(241,16,1,102,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
