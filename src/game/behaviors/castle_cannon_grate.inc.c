// castle_cannon_grate.inc.c

void bhv_castle_cannon_grate_init(void) {
    if (save_file_get_total_star_count(gCurrSaveFileNum - 1, COURSE_MIN - 1, COURSE_MAX - 1) >= 65) { // STAR ROAD change
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}

void bhv_custom_smsr_30_star_door_wall_init(void) {
    // STAR ROAD custom code, copy of bhv_castle_cannon_grate_init
    // Used along with the 30 Star Door behavior
    if (save_file_get_total_star_count(gCurrSaveFileNum - 1, COURSE_MIN - 1, COURSE_MAX - 1) >= 30) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
}
