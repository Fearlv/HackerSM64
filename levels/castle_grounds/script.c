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

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group10_yay0SegmentRomStart, _group10_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, -90, 8439, -7223, -6977),
		OBJECT(0, 6975, -6245, -9299, 0, 0, 0, 0x1000000, bhvBowserCourseRedCoinStar),
		OBJECT(122, 443, -8946, 2026, 0, 164, 0, 0x0, bhvChuckya),
		OBJECT(223, -2450, -6489, 2082, 0, -180, 0, 0x0, bhvChuckya),
		OBJECT(223, 9254, -7355, -108, 0, 36, 0, 0x0, bhvChuckya),
		OBJECT(122, 7588, -6584, 7564, 0, 0, 0, 0x10000, bhvCirclingAmp),
		OBJECT(122, 6600, -7103, 7792, 0, 0, 0, 0x10000, bhvCirclingAmp),
		OBJECT(0, -1932, -5675, 1405, 0, -180, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 417, -8849, 3568, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 8450, -7223, -6977, 0, -90, 0, 0x30000, bhvDeathWarp),
		OBJECT(0, -2100, -6647, -10452, 0, 0, 0, 0x280000, bhvFadingWarp),
		OBJECT(0, 2720, -7647, 6539, 0, 0, 0, 0x1e0000, bhvFadingWarp),
		OBJECT(122, 444, -8270, -2447, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(207, 450, -8085, 5029, 0, 0, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(122, 7448, -5533, -175, 0, 54, 0, 0x0, bhvGoomba),
		OBJECT(122, 8104, -7899, -1557, 0, 0, 0, 0x0, bhvGoomba),
		OBJECT(122, 8104, -5533, 545, 0, -38, 0, 0x0, bhvGoomba),
		OBJECT(192, -2545, -7449, -384, 0, -180, 0, 0x10000, bhvGoomba),
		OBJECT(192, -2623, -7449, 2, 0, -180, 0, 0x10000, bhvGoomba),
		OBJECT(192, -882, -4929, 567, 0, -180, 0, 0x10000, bhvGoomba),
		OBJECT(192, -4428, -7738, 7802, 0, -180, 0, 0x10000, bhvGoomba),
		OBJECT(192, -2933, -6489, 2049, 0, -180, 0, 0x10000, bhvGoomba),
		OBJECT(192, 1965, -8868, 6094, 0, -142, 0, 0x10000, bhvGoomba),
		OBJECT(192, 3228, -7672, 6810, 0, -95, 0, 0x10000, bhvGoomba),
		OBJECT(192, 2120, -8498, 7126, 0, -58, 0, 0x10000, bhvGoomba),
		OBJECT(192, 5853, -8344, -971, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(192, 6979, -8100, -1558, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(192, 6725, -5533, 545, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(220, 7983, -8075, -7898, 0, 0, 0, 0x0, bhvGoomba),
		OBJECT(220, 7583, -8075, -7490, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(220, 8392, -8075, -7407, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(220, 7638, -8075, -6051, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(220, 8440, -8075, -6566, 0, 0, 0, 0x0, bhvGoomba),
		OBJECT(220, -4645, -7963, -2658, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(220, -5498, -8786, -1421, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(220, -4642, -7438, 1506, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(220, -5190, -7438, 4674, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(220, -1730, -7213, 9588, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(220, 670, -7588, 11405, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(220, 3493, -8263, 10780, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(220, 442, -8846, 6600, 0, 0, 0, 0x10000, bhvGoomba),
		OBJECT(0, 427, -8913, -3950, 0, 93, 0, 0x10000, bhvGoombaTripletSpawner),
		OBJECT(0, 417, -8809, 3568, 0, -180, 0, 0x10000, bhvGoombaTripletSpawner),
		OBJECT(129, 451, -8842, 755, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 445, -8961, 2032, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 451, -8842, -1169, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(0, 8450, -7223, -6984, 0, -90, 0, 0x10000, bhvPaintingStarCollectWarp),
		OBJECT(0, -750, -7165, -10578, 0, 0, 0, 0x5a0000, bhvPoleGrabbing),
		OBJECT(0, 453, -7891, -10191, 0, 0, 0, 0x5a0000, bhvPoleGrabbing),
		OBJECT(0, 1334, -7015, -10859, 0, 0, 0, 0x5a0000, bhvPoleGrabbing),
		OBJECT(215, -235, -3855, 261, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 2961, -7313, -2427, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 6191, -5539, 375, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -8630, -8067, 1899, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -3354, -7970, 9004, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -8093, -4233, -6537, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 9203, -7959, -5832, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(122, 217, -8349, -5459, 0, 93, 0, 0x0, bhvSnufit),
		OBJECT(122, -1552, -7576, 206, 0, -180, 0, 0x0, bhvSnufit),
		OBJECT(122, -174, -3746, 1972, 0, -132, 0, 0x0, bhvSnufit),
		OBJECT(122, -1125, -3770, 3852, 0, 135, 0, 0x0, bhvSnufit),
		OBJECT(122, 955, -8091, 3831, 0, -142, 0, 0x10000, bhvSnufit),
		OBJECT(122, 56, -8091, 3870, 0, 152, 0, 0x10000, bhvSnufit),
		OBJECT(0, 8450, -7223, -6977, 0, -90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, 7500, -6081, 10714, 0, 0, 0, 0x20000, bhvWarp),
		OBJECT(22, 7463, -5534, 485, 0, 0, 0, 0x0, bhvWarpPipe),
		OBJECT(22, 7534, -6418, 6510, 0, 50, 0, 0x50000, bhvWarpPipe),
		OBJECT(22, -8622, -4588, 934, 0, 0, 0, 0x10000, bhvWarpPipe),
		OBJECT(22, -7958, -5148, -5897, 0, 0, 0, 0x80000, bhvWarpPipe),
		OBJECT(22, -181, -4218, 3844, 0, 0, 0, 0x60000, bhvWarpPipe),
		OBJECT(22, 3000, -5701, -10458, 0, 0, 0, 0x90000, bhvWarpPipe),
		OBJECT(22, 6546, -7213, 11548, 0, 0, 0, 0x70000, bhvWarpPipe),
		OBJECT(215, 1270, -7117, -10245, 0, 33, 0, 0x00000000, bhvRedCoin),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_OVERWORLD1),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -90, 8439, -7223, -6977),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
