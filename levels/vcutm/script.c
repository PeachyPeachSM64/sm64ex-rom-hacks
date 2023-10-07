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
#include "levels/vcutm/header.h"
#include "levels/bbh/header.h"

extern const GeoLayout Geo_vcutm_1_0x13ead70[];
extern const Collision col_vcutm_1_0xe0476c0[];

const LevelScript local_objects_vcutm_1_[] = {
    OBJECT(0,-1593,6540,-1263,0,180,0,0xa0000, bhvSpinAirborneWarp),
    OBJECT(124,-1587,6440,-2023,0,0,0,0x10000, bhvMessagePanel),
    OBJECT(124,-3,17305,-1983,0,180,0,0x20000, bhvMessagePanel),
    OBJECT(124,7,2863,-3065,0,180,0,0x4b0000, bhvMessagePanel),
    OBJECT(0,2,6480,-1706,0,0,0,0x9f0000, bhvPoleGrabbing),
    OBJECT(0,2,8070,-1706,0,0,0,0xc30000, bhvPoleGrabbing),
    OBJECT(0,2,10020,-1706,0,0,0,0xb10000, bhvPoleGrabbing),
    OBJECT(0,3,11790,-1706,0,0,0,0x8a0000, bhvPoleGrabbing),
    OBJECT(122,-5598,4650,4342,0,0,0,0x0A000000, bhvStar),
    OBJECT(122,7030,2850,4042,0,0,0,0x0B000000, bhvStar),
    OBJECT(137,7093,3360,1788,0,0,0,0x20000, bhvExclamationBox),
    OBJECT(0,-7,10890,-2354,0,0,0,0x0C000000, bhvHiddenStar),
    OBJECT(MODEL_1UP,-3206,9720,-1274,0,90,180,0x0, bhvHiddenStarTrigger),
    OBJECT(MODEL_1UP,-1498,9330,-1675,0,0,180,0x0, bhvHiddenStarTrigger),
    OBJECT(MODEL_1UP,6,10230,-1134,0,0,180,0x0, bhvHiddenStarTrigger),
    OBJECT(MODEL_1UP,1499,9930,-1643,0,0,180,0x0, bhvHiddenStarTrigger),
    OBJECT(MODEL_1UP,3199,9930,-2140,0,270,180,0x0, bhvHiddenStarTrigger),
    OBJECT(122,-5787,9120,485,0,0,0,0x0D000000, bhvStar),
    OBJECT(122,4593,14550,1511,0,0,0,0x0E000000, bhvStar),
    OBJECT(0,-4940,17400,402,0,0,0,0x0F000000, bhvHiddenRedCoinStar),
    OBJECT(215,-2678,2040,2745,0,0,0,0x0, bhvRedCoin),
    OBJECT(215,6607,6600,3041,0,0,0,0x0, bhvRedCoin),
    OBJECT(215,-5120,7950,1482,0,0,0,0x0, bhvRedCoin),
    OBJECT(215,13,5280,2045,0,0,0,0x0, bhvRedCoin),
    OBJECT(215,-4146,12180,1016,0,0,0,0x0, bhvRedCoin),
    OBJECT(215,2609,15990,-1615,0,0,0,0x0, bhvRedCoin),
    OBJECT(215,-4379,14430,1458,0,0,0,0x0, bhvRedCoin),
    OBJECT(215,3858,16080,2118,0,0,0,0x0, bhvRedCoin),
    OBJECT(207,2812,5237,1276,0,0,0,0x0, bhvFloorSwitchHiddenObjects),
    OBJECT(129,-5,4836,1400,0,0,0,0x0, bhvHiddenObject),
    OBJECT(129,-5,4836,1600,0,0,0,0x0, bhvHiddenObject),
    OBJECT(129,-5,4836,2400,0,0,0,0x0, bhvHiddenObject),
    OBJECT(129,-30,1416,-679,0,0,0,0x0, bhvHiddenObject),
    OBJECT(129,-30,1416,-879,0,0,0,0x0, bhvHiddenObject),
    OBJECT(217,-30,1356,-1755,0,0,0,0x0, bhvPushableMetalBox),
    OBJECT(129,-30,1462,-1502,0,0,0,0x0, bhvHiddenObject),
    OBJECT(140,6600,11873,-1706,0,0,0,0x0, bhvBlueCoinSwitch),
    OBJECT(118,6596,11940,-1000,0,0,0,0x0, bhvHiddenBlueCoin),
    OBJECT(118,6596,11940,-200,0,0,0,0x0, bhvHiddenBlueCoin),
    OBJECT(118,6596,11940,600,0,0,0,0x0, bhvHiddenBlueCoin),
    OBJECT(118,6596,12360,1391,0,0,0,0x0, bhvHiddenBlueCoin),
    OBJECT(118,6596,11520,2200,0,0,0,0x0, bhvHiddenBlueCoin),
    OBJECT(118,6596,11520,2700,0,0,0,0x0, bhvHiddenBlueCoin),
    OBJECT(137,-6989,17280,2503,0,0,0,0x30000, bhvExclamationBox),
    OBJECT(137,2804,3000,3128,0,0,0,0x50000, bhvExclamationBox),
    OBJECT(137,5555,4470,4311,0,0,0,0x50000, bhvExclamationBox),
    OBJECT(137,6159,4470,4311,0,0,0,0x40000, bhvExclamationBox),
    OBJECT(137,4961,4470,4311,0,0,0,0x60000, bhvExclamationBox),
    OBJECT(137,0,13500,332,0,0,0,0x50000, bhvExclamationBox),
    OBJECT(137,1011,14910,-1851,0,0,0,0x60000, bhvExclamationBox),
    OBJECT(116,-5613,7260,1813,0,0,0,0x0, bhvOneCoin),
    OBJECT(116,-5893,6780,2077,0,0,0,0x0, bhvOneCoin),
    OBJECT(116,-6125,6780,2316,0,0,0,0x0, bhvOneCoin),
    OBJECT(0,-5587,5242,1200,0,0,0,0x0, bhvCoinFormation),
    OBJECT(0,2680,1943,1274,0,0,0,0x0, bhvCoinFormation),
    OBJECT(0,-1,2578,38,0,90,0,0x0, bhvCoinFormation),
    OBJECT(0,-5802,12278,-1966,0,0,0,0x0, bhvCoinFormation),
    OBJECT(0,6028,15677,1756,0,0,0,0x0, bhvCoinFormation),
    OBJECT(212,7524,16590,1789,0,0,0,0x0, bhv1Up),
    OBJECT(137,4,16620,-2764,0,0,0,0x70000, bhvExclamationBox),
    OBJECT(0,3486,16350,-5839,0,0,0,0x110000, bhvCoinFormation),
    OBJECT(0,3512,16260,2658,0,0,0,0x110000, bhvCoinFormation),
    OBJECT(0,-4591,14850,6317,0,0,0,0x110000, bhvCoinFormation),
    OBJECT(130,2798,5237,-3898,0,0,0,0x0, bhvBreakableBoxSmall),
    OBJECT(130,-3159,15818,-1901,0,0,0,0x0, bhvBreakableBoxSmall),
    OBJECT(220,-3748,6330,2130,0,0,0,0x10000, bhvFlyGuy),
    OBJECT(220,-3331,17580,-1237,0,0,0,0x10000, bhvFlyGuy),
    OBJECT(89,5194,3023,2243,0,0,0,0x0, bhvHeaveHo),
    OBJECT(89,4990,3023,3229,0,0,0,0x0, bhvHeaveHo),
    OBJECT(89,6349,3023,4096,0,0,0,0x0, bhvHeaveHo),
    OBJECT(89,-5687,14609,2021,0,0,0,0x0, bhvHeaveHo),
    OBJECT(89,-4384,15818,2115,0,0,0,0x0, bhvHeaveHo),
    OBJECT(129,6603,5840,4517,0,0,0,0x0, bhvJumpingBox),
    OBJECT(129,-6967,17025,-1845,0,0,0,0x0, bhvJumpingBox),
    OBJECT(223,-2875,13684,-258,0,0,0,0x0, bhvChuckya),
    OBJECT(223,-6173,13404,202,0,0,0,0x0, bhvChuckya),
    OBJECT(206,5469,16727,2008,0,0,0,0x0, bhvSnufit),
    OBJECT(206,4733,16847,1483,0,0,0,0x0, bhvSnufit),
    OBJECT(206,-5440,16097,-1030,0,0,0,0x0, bhvSnufit),
    OBJECT(206,-5899,16097,1504,0,0,0,0x0, bhvSnufit),
    OBJECT(212,7003,10350,1396,0,0,0,0x0, bhv1Up),
    OBJECT(212,7696,9540,2180,0,0,0,0x0, bhv1Up),
    OBJECT(212,7225,8160,2798,0,0,0,0x0, bhv1Up),
    OBJECT(0,-5057,4530,3824,0,0,0,0x0, bhvFlamethrower),
    OBJECT(0,-5057,4740,3824,0,0,0,0x0, bhvFlamethrower),
    OBJECT(0,-6100,4530,3824,0,0,0,0x0, bhvFlamethrower),
    OBJECT(0,-6100,4740,3824,0,0,0,0x0, bhvFlamethrower),
    OBJECT(137,-3245,4886,2428,0,0,0,0xf0000, bhvExclamationBox),
    OBJECT(137,6536,8254,1266,0,0,0,0xf0000, bhvExclamationBox),
    OBJECT(137,723,13484,-2645,0,0,0,0xf0000, bhvExclamationBox),
    OBJECT(137,3426,14091,1519,0,0,0,0xf0000, bhvExclamationBox),
    OBJECT(137,-2649,15897,-1671,0,0,0,0xf0000, bhvExclamationBox),
    OBJECT(MODEL_CAP_SWITCH,-30,1661,-1752,0,0,0,0x20000, bhvCapSwitch),
    RETURN()
};

const LevelScript local_warps_vcutm_1_[] = {
    WARP_NODE(10,9,1,0,0),
    WARP_NODE(11,17,1,10,0),
    WARP_NODE(240,16,1,240,0),
    WARP_NODE(241,16,1,241,0),
    RETURN()
};

const LevelScript local_area_vcutm_1_[] = {
    AREA(1,Geo_vcutm_1_0x13ead70),
    TERRAIN(col_vcutm_1_0xe0476c0),
    SET_BACKGROUND_MUSIC(0,0x32),
    TERRAIN_TYPE(0),
    JUMP_LINK(local_objects_vcutm_1_),
    JUMP_LINK(local_warps_vcutm_1_),
    END_AREA(),
    RETURN()
};

const LevelScript level_vcutm_entry[] = {
    INIT_LEVEL(),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
    LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
    LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
    LOAD_MODEL_FROM_GEO(31, metal_door_geo),
    LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
    LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
    LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
    LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
    LOAD_MODEL_FROM_GEO(37, key_door_geo),
    LOAD_MODEL_FROM_GEO(38, castle_door_geo),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_2),
    JUMP_LINK(script_func_global_9),
    JUMP_LINK(script_func_global_18),
    JUMP_LINK(local_area_vcutm_1_),
    FREE_LEVEL_POOL(),
    MARIO_POS(1,0,0,0,0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
