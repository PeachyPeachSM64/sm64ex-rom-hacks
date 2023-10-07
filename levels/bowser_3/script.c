#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bowser_3/header.h"

const LevelScript level_bowser_3_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(/*seg*/ 0x07, _bowser_3_segment_7SegmentRomStart, _bowser_3_segment_7SegmentRomEnd),
    LOAD_MIO0(/*seg*/ 0x06, _group12_mio0SegmentRomStart, _group12_mio0SegmentRomEnd),
    LOAD_RAW( /*seg*/ 0x0D, _group12_geoSegmentRomStart,  _group12_geoSegmentRomEnd),
    LOAD_MIO0(/*seg*/ 0x0A, _bits_skybox_mio0SegmentRomStart, _bits_skybox_mio0SegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_13),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_1,  bowser_3_geo_000290),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_2,  bowser_3_geo_0002A8),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_3,  bowser_3_geo_0002C0),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_4,  bowser_3_geo_0002D8),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_5,  bowser_3_geo_0002F0),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_6,  bowser_3_geo_000308),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_7,  bowser_3_geo_000320),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_8,  bowser_3_geo_000338),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_9,  bowser_3_geo_000350),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_3_FALLING_PLATFORM_10, bowser_3_geo_000368),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,            bowser_3_geo_000380),

    AREA(/*index*/ 1, bowser_3_geo_000398),
        WARP_NODE(0xF1, 21, 1, 0x01, 0),
        WARP_NODE(0x0A, 34, 1, 0x0A, 0),
        WARP_NODE(0x00, 31, 1, 0x0A, 0),
        OBJECT(MODEL_NONE,            0, 1307,     0, 0, 180, 0, 0x000A0000, bhvSpinAirborneCircleWarp),
        OBJECT(MODEL_BOWSER_BOMB,     0,  512,  3600, 0,   0, 0, 0x00000000, bhvBowserBomb),
        OBJECT(MODEL_BOWSER_BOMB,  3423,  512,  1112, 0,   0, 0, 0x00000000, bhvBowserBomb),
        OBJECT(MODEL_BOWSER_BOMB,  2116,  512, -2913, 0,   0, 0, 0x00000000, bhvBowserBomb),
        OBJECT(MODEL_BOWSER_BOMB, -2117,  512, -2913, 0,   0, 0, 0x00000000, bhvBowserBomb),
        OBJECT(MODEL_BOWSER_BOMB, -3424,  512,  1112, 0,   0, 0, 0x00000000, bhvBowserBomb),
        OBJECT(MODEL_RED_FLAME,       0,  359, -1800, 0,   0, 0, 0x00000000, bhvFlame),
        OBJECT(MODEL_RED_FLAME,   -1712,  359,  -557, 0,   0, 0, 0x00000000, bhvFlame),
        OBJECT(MODEL_RED_FLAME,   -1059,  359,  1456, 0,   0, 0, 0x00000000, bhvFlame),
        OBJECT(MODEL_RED_FLAME,    1058,  359,  1456, 0,   0, 0, 0x00000000, bhvFlame),
        OBJECT(MODEL_RED_FLAME,    1711,  359,  -557, 0,   0, 0, 0x00000000, bhvFlame),
        OBJECT(MODEL_RED_FLAME,       0,  359, -1800, 0,   0, 0, 0x00000000, bhvFlamethrower),
        OBJECT(MODEL_RED_FLAME,   -1712,  359,  -557, 0,  72, 0, 0x00000000, bhvFlamethrower),
        OBJECT(MODEL_RED_FLAME,   -1059,  359,  1456, 0, 144, 0, 0x00000000, bhvFlamethrower),
        OBJECT(MODEL_RED_FLAME,    1058,  359,  1456, 0, 216, 0, 0x00000000, bhvFlamethrower),
        OBJECT(MODEL_RED_FLAME,    1711,  359,  -557, 0, 288, 0, 0x00000000, bhvFlamethrower),
        TERRAIN(/*terrainData*/ bowser_3_seg7_collision_level),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0002, /*seq*/ SEQ_LEVEL_BOSS_KOOPA_FINAL),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 183, /*pos*/ 0, 307, 0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
