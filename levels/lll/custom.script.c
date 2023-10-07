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
#include "levels/lll/header.h"
extern u8 _lll_segment_ESegmentRomStart[]; 
extern u8 _lll_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_lll_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _lll_segment_ESegmentRomStart, _lll_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_lll_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_lll_1_[] = {
AREA(1,Geo_lll_1_0x19001700),
TERRAIN(col_lll_1_0xe0432a0),
SET_BACKGROUND_MUSIC(0,38),
TERRAIN_TYPE(TERRAIN_GRASS),
JUMP_LINK(local_objects_lll_1_),
JUMP_LINK(local_warps_lll_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_lll_1_[] = {
OBJECT(0,5074,-301,-3998,0,333,0,0xa0000, bhvSpinAirborneWarp),
OBJECT(195,-1959,1210,7236,0,-154,0,0x0, bhvBobombBuddyOpensCannon),
OBJECT(201,-2300,870,-1618,0,0,0,0x0, bhvCannonClosed),
OBJECT(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp),
OBJECT(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp),
OBJECT(122,-3647,1761,6485,1,0,2,0x1000000, bhvStar),
OBJECT(122,-1051,-3177,-8700,0,0,0,0x2000000, bhvStar),
OBJECT(122,-4819,2320,-196,0,0,0,0x3000000, bhvStar),
OBJECT(0,-5278,-260,3991,0,0,0,0x4000000, bhvHiddenRedCoinStar),
OBJECT(122,8907,1475,907,0,0,0,0x5000000, bhvStar),
OBJECT(100,-2613,-581,7066,0,0,0,0x10000, bhvFirePiranhaPlant),
OBJECT(100,5011,-581,2661,0,0,0,0x10000, bhvFirePiranhaPlant),
OBJECT(100,3107,-581,-5263,0,0,0,0x10000, bhvFirePiranhaPlant),
OBJECT(100,-1408,-931,-1434,0,0,0,0x10000, bhvFirePiranhaPlant),
OBJECT(100,1026,-581,6080,0,0,0,0x10000, bhvFirePiranhaPlant),
OBJECT(22,-4175,-581,150,0,0,0,0xc0000, bhvWarpPipe),
OBJECT(22,-2600,-2275,-1133,0,180,0,0xb0000, bhvWarpPipe),
OBJECT(215,4936,-581,-5651,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-152,1429,-3768,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-5748,790,2187,0,0,0,0x0, bhvRedCoin),
OBJECT(215,3130,776,6133,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-5723,-791,5298,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-5877,-2275,-9433,0,0,0,0x0, bhvRedCoin),
OBJECT(215,7029,1525,-2715,0,0,0,0x0, bhvRedCoin),
OBJECT(215,1320,-2275,-8726,0,0,0,0x0, bhvRedCoin),
OBJECT(207,-5859,-581,6539,0,90,0,0x0, bhvFloorSwitchHiddenObjects),
OBJECT(129,-2301,417,5356,0,15,0,0x0, bhvHiddenObject),
OBJECT(0,3564,-357,5657,0,0,0,0x10000, bhvGoombaTripletSpawner),
OBJECT(103,-2278,-581,4073,0,90,0,0x0, bhvSmallWhomp),
OBJECT(0,3559,-581,-1039,0,0,0,0x10000, bhvGoombaTripletSpawner),
OBJECT(0,225,-931,-4068,0,0,0,0x10000, bhvGoombaTripletSpawner),
OBJECT(100,-1220,790,-5708,0,0,0,0x0, bhvPiranhaPlant),
OBJECT(100,-4221,-581,-610,0,0,0,0x0, bhvPiranhaPlant),
OBJECT(118,7410,1525,3523,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,8340,1525,3098,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,9291,1525,2317,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,9879,1525,1282,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(118,10024,1525,267,0,0,0,0x0, bhvHiddenBlueCoin),
OBJECT(140,6203,1525,3442,0,0,0,0x0, bhvBlueCoinSwitch),
OBJECT(130,1433,-931,-5063,0,10,0,0x0, bhvBreakableBoxSmall),
OBJECT(129,1087,-931,-4991,0,10,0,0x0, bhvBreakableBox),
OBJECT(0,2173,-693,2413,0,161,0,0x0, bhvCoinFormation),
OBJECT(0,-6533,-2275,-6229,0,0,0,0x0, bhvCoinFormation),
OBJECT(0,-4547,894,-2075,90,0,0,0x130000, bhvCoinFormation),
OBJECT(0,-3072,790,-4073,0,0,0,0x10000, bhvGoombaTripletSpawner),
OBJECT(0,7298,1525,70,0,0,0,0x10000, bhvGoombaTripletSpawner),
OBJECT(129,-2350,417,5170,0,15,0,0x0, bhvHiddenObject),
RETURN()
};
const LevelScript local_warps_lll_1_[] = {
WARP_NODE(10,22,1,10,0),
WARP_NODE(11,22,1,12,0),
WARP_NODE(12,22,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,101,0),
WARP_NODE(241,26,1,117,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
