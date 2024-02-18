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
#include "levels/ttc/header.h"
extern u8 _ttc_segment_ESegmentRomStart[]; 
extern u8 _ttc_segment_ESegmentRomEnd[];
#include "levels/wf/header.h"
const LevelScript level_ttc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wfSegmentRomStart, _wfSegmentRomEnd),
LOAD_RAW(0x0E, _ttc_segment_ESegmentRomStart, _ttc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                wf_geo_0007E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                wf_geo_000820),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                wf_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                wf_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                wf_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                wf_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,                wf_geo_0008E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                wf_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                wf_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE,                    wf_geo_000AE0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                wf_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,                wf_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM,             wf_geo_0009B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,                wf_geo_0009D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,                wf_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP,                    wf_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP,                    wf_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM,      wf_geo_000A58),
    LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM,              wf_geo_000A98),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART,          wf_geo_000AB0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE,               wf_geo_000AC8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM,       wf_geo_000AF8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM,          wf_geo_000B10),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED,   wf_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT,          wf_geo_000B78),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT,           wf_geo_000B90),
    LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD,                wf_geo_000BA8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR,                    wf_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED,         wf_geo_000BC8),
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
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_ttc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ttc_1_[] = {
AREA(1,Geo_ttc_1_0x19001700),
TERRAIN(col_ttc_1_0xe057068),
SET_BACKGROUND_MUSIC(0,2),
TERRAIN_TYPE(TERRAIN_STONE),
JUMP_LINK(local_objects_ttc_1_),
JUMP_LINK(local_warps_ttc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttc_1_[] = {
OBJECT(0,-5485,-1196,-2723,0,90,0,0xa0000, bhvSpinAirborneWarp),
OBJECT(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp),
OBJECT(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp),
OBJECT(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp),
OBJECT(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp),
OBJECT(122,3329,5996,2582,0,0,0,0x0, bhvStar),
OBJECT(104,4831,-2075,-2873,0,0,0,0x2030000, bhvKoopa),
OBJECT(0,4931,-1025,-4431,0,0,0,0x0, bhvKoopaRaceEndpoint),
OBJECT(0,-5508,-1783,851,0,0,0,0x3000000, bhvHiddenRedCoinStar),
OBJECT(137,-4558,-365,5271,0,0,0,0x4080000, bhvExclamationBox),
OBJECT(122,-122,6328,-4999,0,0,0,0x1000000, bhvStar),
OBJECT(122,6617,-2894,-2490,0,0,0,0x5000000, bhvStar),
OBJECT(215,5529,-885,-6109,0,0,0,0x0, bhvRedCoin),
OBJECT(215,1239,-2075,-5686,0,0,0,0x0, bhvRedCoin),
OBJECT(215,6520,-1198,841,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-4253,-2180,1962,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-5723,-500,4125,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-3850,-2075,5278,0,0,0,0x0, bhvRedCoin),
OBJECT(215,2360,2061,5190,0,0,0,0x0, bhvRedCoin),
OBJECT(215,-2215,2766,2595,0,0,0,0x0, bhvRedCoin),
OBJECT(88,3100,4596,2065,0,270,0,0x0, bhvThwomp),
OBJECT(88,6617,-3125,-2490,0,90,0,0x0, bhvThwomp),
OBJECT(0,333,-573,3962,0,0,0,0x0, bhvCheckerboardElevatorGroup),
OBJECT(202,-4163,-1719,-5282,0,180,0,0xa00000, bhvPlatformOnTrack),
OBJECT(84,-93,3800,-4932,0,0,0,0x0, bhvBulletBill),
OBJECT(0,1755,367,2918,0,0,0,0xb50000, bhvPoleGrabbing),
OBJECT(0,3100,2700,2065,0,0,0,0xb50000, bhvPoleGrabbing),
OBJECT(0,3310,4100,2645,0,0,0,0x870000, bhvPoleGrabbing),
OBJECT(34,-4958,-500,4138,0,270,0,0x0, bhvDoor),
OBJECT(34,-2472,-2075,1941,0,90,0,0x0, bhvDoor),
OBJECT(220,-4434,625,-86,0,0,0,0x10000, bhvFlyGuy),
OBJECT(220,0,-1228,0,0,0,0,0x10000, bhvFlyGuy),
OBJECT(220,-1060,3073,1024,0,0,0,0x0, bhvFlyGuy),
OBJECT(0,-299,3477,-2986,0,180,0,0x0, bhvCloud),
OBJECT(0,1775,2656,1200,0,0,0,0x0, bhvCloud),
OBJECT(23,3701,367,5668,0,0,0,0x0, bhvTree),
OBJECT(187,-3979,-1865,-2899,0,0,0,0x0, bhvTripletButterfly),
OBJECT(187,1309,-1919,-212,0,0,0,0x0, bhvButterfly),
OBJECT(187,1419,-1867,-4568,0,0,0,0x0, bhvButterfly),
OBJECT(192,2025,-2075,-6371,0,0,0,0x10000, bhvGoomba),
OBJECT(0,-3694,-2075,3726,0,0,0,0x10000, bhvGoombaTripletSpawner),
OBJECT(192,4969,-2075,-403,0,0,0,0x10000, bhvGoomba),
OBJECT(192,1931,367,4186,0,0,0,0x10000, bhvGoomba),
OBJECT(192,2181,-2075,-1584,0,0,0,0x10000, bhvGoomba),
OBJECT(0,-759,2766,2400,0,0,0,0x10000, bhvGoombaTripletSpawner),
OBJECT(0,-1411,-2075,-2720,0,90,0,0x0, bhvCoinFormation),
OBJECT(0,6194,-469,-5334,0,90,0,0x0, bhvCoinFormation),
OBJECT(0,-2281,864,5364,0,90,0,0x0, bhvCoinFormation),
OBJECT(0,-1482,-368,1943,0,0,0,0x0, bhvCoinFormation),
OBJECT(0,3154,367,5500,0,0,0,0x0, bhvCoinFormation),
OBJECT(0,-4262,1635,-1700,0,0,0,0x110000, bhvCoinFormation),
OBJECT(0,-2533,6130,-5030,0,90,0,0x0, bhvCoinFormation),
OBJECT(0,6209,-1665,-1410,0,90,0,0x0, bhvCoinFormation),
OBJECT(137,7081,52,-6082,0,0,0,0x50000, bhvExclamationBox),
OBJECT(137,-5746,-1658,3245,0,0,0,0x40000, bhvExclamationBox),
OBJECT(0,-1908,-2075,2533,90,0,0,0x130000, bhvCoinFormation),
OBJECT(0,6175,549,-2772,90,0,0,0x130000, bhvCoinFormation),
OBJECT(0,-759,2922,2400,90,0,0,0x130000, bhvCoinFormation),
OBJECT(223,2776,367,4228,0,0,0,0x0, bhvChuckya),
OBJECT(223,5993,549,-522,0,0,0,0x0, bhvChuckya),
OBJECT(0,6176,549,-4720,0,0,0,0x10000, bhvGoombaTripletSpawner),
OBJECT(102,2949,-2075,1145,0,0,0,0x0, bhvChainChomp),
OBJECT(129,4206,-2075,-6401,0,0,0,0x0, bhvJumpingBox),
OBJECT(107,-3050,-2075,2956,0,0,0,0x0, bhvWoodenPost),
OBJECT(107,5224,-2075,1179,0,0,0,0x0, bhvWoodenPost),
OBJECT(116,-4225,-1697,-5984,0,0,0,0x0, bhvOneCoin),
OBJECT(116,7369,-1865,-891,0,0,0,0x0, bhvOneCoin),
OBJECT(129,2039,-2075,-3466,0,0,0,0x0, bhvBreakableBox),
OBJECT(129,2312,-2075,-2572,0,0,0,0x0, bhvBreakableBox),
OBJECT(129,2086,-2075,-2369,0,0,0,0x0, bhvBreakableBox),
OBJECT(180,4446,-2075,-280,0,0,0,0x0, bhvFireSpitter),
OBJECT(180,2604,-2075,-313,0,0,0,0x0, bhvFireSpitter),
OBJECT(180,2083,-1676,-5833,0,0,0,0x0, bhvFireSpitter),
OBJECT(180,3698,-1315,-5417,0,0,0,0x0, bhvFireSpitter),
RETURN()
};
const LevelScript local_warps_ttc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,98,0),
WARP_NODE(241,6,1,114,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};