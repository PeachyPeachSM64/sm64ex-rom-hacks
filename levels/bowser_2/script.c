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
#include "levels/bowser_2/header.h"

const LevelScript level_bowser_2_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x0A, _bitfs_skybox_mio0SegmentRomStart, _bitfs_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _fire_mio0SegmentRomStart, _fire_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x07, _bowser_2_segment_7SegmentRomStart, _bowser_2_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group12_mio0SegmentRomStart, _group12_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group12_geoSegmentRomStart, _group12_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_13),
    LOAD_MODEL_FROM_GEO(MODEL_BOWSER_2_TILTING_ARENA, bowser_2_geo_000170),

    AREA(/*index*/ 1, bowser_2_geo_000188),
        WARP_NODE(0xF1, 19, 1, 0x01, 0),
        WARP_NODE(0xF0, 26, 1, 0xF0, 0),
        WARP_NODE(0x0A, 33, 1, 0x0A, 0),
        OBJECT(MODEL_NONE,                     0, 1829,    0, 0, 180, 0, 0x000A0000, bhvSpinAirborneCircleWarp),
        OBJECT(MODEL_NONE,                  -750, 1279, 2698, 0, 135, 0, 0x00000000, bhvFlamethrower),
        OBJECT(MODEL_NONE,                   750, 1279, 2698, 0, 225, 0, 0x00000000, bhvFlamethrower),
        OBJECT(MODEL_NONE,                     0, 1279, 2755, 0, 180, 0, 0x00000000, bhvFlamethrower),
        OBJECT(MODEL_BOWSER_BOMB,              0, 2129, 3598, 0,  90, 0, 0x00000000, bhvBowserBomb),
        OBJECT(MODEL_BOWSER_2_TILTING_ARENA,   0,    0,    0, 0,  90, 0, 0x00000000, bhvTiltingBowserLavaPlatform),
        TERRAIN(/*terrainData*/ bowser_2_seg7_collision_lava),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0002, /*seq*/ SEQ_LEVEL_BOSS_KOOPA),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ 0, 1229, 0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
