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
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
const LevelScript level_bob_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE,      bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM,  bob_geo_000458),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS,      bob_geo_000470),
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
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x19001700),
TERRAIN(col_bob_1_0xe02df20),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(TERRAIN_GRASS),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT(0,5285,-749,-515,0,270,0,0xa0000, bhvSpinAirborneWarp),
OBJECT(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp),
OBJECT(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp),
OBJECT(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp),
OBJECT(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp),
OBJECT(0,551,-749,-4852,0,0,0,0x0, bhvGoombaTripletSpawner),
OBJECT(188,-4498,-749,1767,0,0,0,0x0, bhvBobomb),
OBJECT(0,-4382,-384,536,0,0,0,0x3000000, bhvHiddenRedCoinStar),
OBJECT(215,3832,1140,1347,0,0,0,0x0, bhvRedCoin),
OBJECT(215,8471,-151,-8105,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-2217,-730,-4317,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-1428,312,-2278,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-681,-1041,645,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-3240,-749,4200,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-4884,-749,-3208,0,0,0,0x0, bhvRedCoin),
OBJECT(215,3081,-749,-4491,0,0,0,0x0, bhvRedCoin),
OBJECT(86,-3094,1455,-3325,0,90,0,0x0, bhvKingBobomb),
OBJECT(122,-3220,2783,2560,0,0,0,0x1000000, bhvStar),
OBJECT(122,1711,-489,2808,0,0,0,0x2000000, bhvStar),
OBJECT(122,9456,726,6946,0,0,0,0x4000000, bhvStar),
OBJECT(0,-2553,-437,-4869,0,0,0,0x5000000, bhvHiddenStar),
OBJECT(0,5832,-749,4892,0,0,0,0x0, bhvGoombaTripletSpawner),
OBJECT(188,5990,-749,2381,0,0,0,0x0, bhvBobomb),
OBJECT(188,-1856,-749,5373,0,0,0,0x0, bhvBobomb),
OBJECT(188,1932,-749,5298,0,0,0,0x0, bhvBobomb),
OBJECT(188,-344,-749,3083,0,0,0,0x0, bhvBobomb),
OBJECT(100,5097,-749,-1999,0,90,0,0x0, bhvPiranhaPlant),
OBJECT(100,4623,-749,-3691,0,0,0,0x0, bhvPiranhaPlant),
OBJECT(MODEL_PURPLE_MARBLE,2957,104,3130,0,0,0,0x0, bhvHiddenStarTrigger),
OBJECT(MODEL_PURPLE_MARBLE,-3299,-749,-2327,0,0,0,0x0, bhvHiddenStarTrigger),
OBJECT(MODEL_PURPLE_MARBLE,-3679,-749,-1910,0,0,0,0x0, bhvHiddenStarTrigger),
OBJECT(MODEL_PURPLE_MARBLE,-2388,-749,3423,0,0,0,0x0, bhvHiddenStarTrigger),
OBJECT(MODEL_PURPLE_MARBLE,-4364,1350,-3297,0,0,0,0x0, bhvHiddenStarTrigger),
OBJECT(0,2205,1190,2493,90,0,0,0x130000, bhvCoinFormation),
OBJECT(0,-5314,-746,-3166,0,0,0,0x0, bhvCoinFormation),
OBJECT(140,2742,-749,4629,0,0,0,0x0, bhvBlueCoinSwitch),
OBJECT(118,1228,-749,3877,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,2017,-749,4390,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,987,-749,1863,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,775,-749,2863,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,1572,-749,609,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(0,-3220,-749,2500,0,90,0,0x0, bhvCoinFormation),
OBJECT(137,-5966,-380,-6879,0,0,0,0x60000, bhvExclamationBox),
OBJECT(118,1462,-749,-802,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(0,-2678,-749,-647,0,0,0,0x0, bhvGoombaTripletSpawner),
OBJECT(137,4077,417,2069,0,0,0,0x50000, bhvExclamationBox),
OBJECT(100,2085,-749,-4211,0,180,0,0x0, bhvPiranhaPlant),
OBJECT(207,3018,1140,1287,0,0,0,0x0, bhvFloorSwitchHiddenObjects),
OBJECT(129,3011,940,694,0,0,0,0x0, bhvHiddenObject),
OBJECT(195,4834,-749,87,0,180,0,0x100000, bhvBobombBuddy),
OBJECT(129,3011,940,494,0,0,0,0x0, bhvHiddenObject),
OBJECT(129,3011,940,94,0,0,0,0x0, bhvHiddenObject),
OBJECT(129,3011,940,294,0,0,0,0x0, bhvHiddenObject),
OBJECT(0,1475,-749,2800,0,270,0,0x0, bhvOpenableGrill),
OBJECT(207,3011,1350,-2711,0,0,0,0x0, bhvFloorSwitchGrills),
OBJECT(129,3011,940,-106,0,0,0,0x0, bhvHiddenObject),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,81,0),
WARP_NODE(241,16,1,82,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};