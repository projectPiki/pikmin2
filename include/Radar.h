#ifndef _RADAR_H
#define _RADAR_H

#include "types.h"
#include "Vector3.h"

namespace Game {
struct TPositionObject;
}

struct Radar {
	typedef enum {
		RED_ONION 					= 0x0,
		BLUE_ONION 					= 0x1,
		YELLOW_ONION 				= 0x2,
		RED_PIKMIN 					= 0x3,
		BLUE_PIKMIN 				= 0x4,
		YELLOW_PIKMIN 				= 0x5,
		PURPLE_PIKMIN 				= 0x6,
		WHITE_PIKMIN 				= 0x7,
		BULBMIN 					= 0x8,
		PIKIHEAD 					= 0x9,
		BIG_FOUNTAIN				= 0xa,
		UNENTERED_CAVE 				= 0xb,
		UNKNOWN_ONION_x4__POT 		= 0xc,
		LOUIE_OR_PRESIDENT 			= 0xd,
		OLIMAR 						= 0xe,
		UNKNOWN_0xf__UFO 			= 0xf,
		ALREADY_COLLECTED_PELLET 	= 0x10,
		UNCOLLECTED_PELLET 			= 0x11,
		PELLET_ITEM 				= 0x12,
		INCOMPLETE_CAVE 			= 0x13,
		COMPLETED_CAVE 				= 0x14,
		HOLE 						= 0x15,
		UNKNOWN_0x16				= 0x16,
		UNKNOWN_0x17 				= 0x17
	} cRadarType;

	struct Mgr {
		Mgr();

		static void entry(Game::TPositionObject*, Radar::cRadarType, unsigned long);

		void attach(Game::TPositionObject*, Radar::cRadarType, unsigned long);
		void bornFuefuki();
		void calcNearestTreasure(Vector3f&, float, Vector3f&, float&);
		void clear();
		void detach(Game::TPositionObject*);
		void dieFuefuki();

		void exit(Game::TPositionObject*);
		void fuefuki();
		void getNumOtakaraItems();
		void ogDummpyInit();
	};

	struct Point {
		Point();
		~Point();

		void getPosition();
	};
};

#endif
