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

extern const GeoLayout custom_shyguy_geo[]; // STAR ROAD CHANGE

#include "areas/1/custom.model.inc.h"
#include "levels/jrb/header.h"
extern u8 _jrb_segment_ESegmentRomStart[]; 
extern u8 _jrb_segment_ESegmentRomEnd[];
#include "levels/wf/header.h"
const LevelScript level_jrb_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd),
LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _grass_mio0SegmentRomStart, _grass_mio0SegmentRomEnd),
LOAD_RAW(0x1A, _wfSegmentRomStart, _wfSegmentRomEnd),
LOAD_RAW(0x0E, _jrb_segment_ESegmentRomStart, _jrb_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(32, custom_shyguy_geo), // STAR ROAD CHANGE
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
JUMP_LINK(local_area_jrb_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,337,2347,713,-5188),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_jrb_1_[] = {
AREA(1,Geo_jrb_1_0x1901700),
TERRAIN(col_jrb_1_0xe04c700),
SET_BACKGROUND_MUSIC(0,24),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_jrb_1_),
JUMP_LINK(local_warps_jrb_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_jrb_1_[] = {
OBJECT_WITH_ACTS(0,2347,713,-5188,0,337,0,0x10000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-4657,3801,-3621,0,0,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(22,-6159,975,-5867,0,90,0,0xe0000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(22,6093,257,419,0,270,0,0xd0000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(217,6476,-826,2835,0,0,0,0x0, bhvPushableMetalBox,63),
OBJECT_WITH_ACTS(201,-808,-151,-103,0,270,0,0x0, bhvCannonClosed,63),
OBJECT_WITH_ACTS(207,-5038,-2491,2277,0,90,0,0x0, bhvFloorSwitchHiddenObjects,63),
OBJECT_WITH_ACTS(195,5350,543,-6746,0,0,0,0x0, bhvBobombBuddyOpensCannon,63),
OBJECT_WITH_ACTS(24,-6653,975,-6069,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(137,-4518,-514,1634,0,337,0,0x10000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(129,-6230,-216,3700,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(129,-5852,-8,3550,0,0,0,0x0, bhvHiddenObject,63),
OBJECT_WITH_ACTS(137,-4969,722,3381,0,31,0,0xd0000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(86,-6609,1420,-6078,0,180,0,0x0, bhvHoot,48),
OBJECT_WITH_ACTS(122,5723,3847,4792,0,0,0,0x5000000, bhvStar,63),
OBJECT_WITH_ACTS(0,-4736,-1857,2710,0,0,0,0x0, bhvLargeFishGroup,63),
OBJECT_WITH_ACTS(180,5912,-722,2352,0,0,0,0x0, bhvFireSpitter,63),
OBJECT_WITH_ACTS(140,3751,774,5124,0,0,0,0x0, bhvBlueCoinSwitch,63),
OBJECT_WITH_ACTS(100,4406,257,6160,0,180,0,0x0, bhvPiranhaPlant,63),
OBJECT_WITH_ACTS(122,5723,3014,4785,0,269,0,0x3000000, bhvStar,127),
OBJECT_WITH_ACTS(137,3690,-328,5124,0,180,0,0xa0000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,-2615,-354,6282,0,0,0,0x2000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(215,-4871,-1988,3427,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-5723,1103,-2027,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,6221,-1594,-57,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,1316,1053,5925,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-2149,-67,-2608,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,2684,-1207,-1575,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-6070,-244,7694,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,6707,771,-152,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(212,-331,700,-6640,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(180,6924,-633,3235,0,0,0,0x0, bhvFireSpitter,63),
OBJECT_WITH_ACTS(0,-3010,-1310,2570,0,0,0,0x0, bhvLargeFishGroup,63),
OBJECT_WITH_ACTS(0,-2593,257,-4898,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(116,-1181,-492,-2604,0,341,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(100,6557,53,-3325,0,0,0,0x0, bhvPiranhaPlant,63),
OBJECT_WITH_ACTS(0,-4494,653,-3198,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(24,-6797,975,-4981,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(220,-1519,-53,-3524,0,0,0,0x0, bhvFlyGuy,63),
OBJECT_WITH_ACTS(192,-3056,-826,-546,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(116,-586,-327,-3926,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(192,-6759,-16,5787,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(24,-6611,-16,6629,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(100,5035,-826,1514,0,180,0,0x0, bhvPiranhaPlant,63),
OBJECT_WITH_ACTS(0,4085,-1518,3500,90,0,0,0x130000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,6213,544,-5889,0,35,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,808,377,4741,0,90,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(129,1383,257,6970,0,88,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(100,-2773,-647,6405,0,180,0,0x0, bhvPiranhaPlant,63),
OBJECT_WITH_ACTS(137,-6601,298,6170,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,3390,253,3079,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(118,3774,774,6859,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,5394,774,6881,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,5285,257,5591,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,6156,723,5591,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(116,-4513,-1052,4467,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(116,-3715,-1474,3689,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(24,4216,-929,-4959,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(0,-959,-824,4108,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-1578,-8,-290,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(192,2666,-826,-1551,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(0,-683,-383,6306,0,308,0,0x20000, bhvCoinFormation,127),
OBJECT_WITH_ACTS(24,-5825,973,-6755,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(24,-683,-610,6306,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(0,6487,257,4785,0,0,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-5611,973,-6741,270,90,0,0x130000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(24,-2861,211,-2931,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(24,1643,256,2395,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(32,2559,253,5451,0,0,0,0x0, bhvCustomSMSRShyGuy,127),
OBJECT_WITH_ACTS(32,4614,-753,-5937,0,0,0,0x0, bhvCustomSMSRShyGuy,191),
OBJECT_WITH_ACTS(32,1174,-363,4014,0,0,0,0x0, bhvCustomSMSRShyGuy,127),
OBJECT_WITH_ACTS(32,-5312,969,-5996,0,0,0,0x0, bhvCustomSMSRShyGuy,255),
OBJECT_WITH_ACTS(137,5953,-522,-4011,0,35,0,0x50000, bhvExclamationBox,81),
OBJECT_WITH_ACTS(100,-6688,653,-3128,0,90,0,0x0, bhvPiranhaPlant,9),
OBJECT_WITH_ACTS(24,1826,-903,-6691,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(24,885,-829,-561,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(24,4842,-829,-3070,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(24,-6378,751,-809,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(24,551,-929,-5144,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(32,406,-829,-2076,0,0,0,0x0, bhvCustomSMSRShyGuy,63),
RETURN()
};
const LevelScript local_warps_jrb_1_[] = {
WARP_NODE(1,12,1,10,0),
WARP_NODE(13,12,1,14,0),
WARP_NODE(14,12,1,13,0),
WARP_NODE(90,9,1,14,0),
WARP_NODE(91,9,1,13,0),
WARP_NODE(240,16,1,29,0),
WARP_NODE(241,16,1,30,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};