#ifndef _RADAR_H
#define _RADAR_H

#include "types.h"
#include "Vector3.h"

namespace Game {
struct TPositionObject;
}

struct Radar {
	enum cRadarType {
		MAP_RED_ONION = 0x0,    // 0x0
		MAP_BLUE_ONION,         // 0x1
		MAP_YELLOW_ONION,       // 0x2
		MAP_RED_PIKMIN,         // 0x3
		MAP_BLUE_PIKMIN,        // 0x4
		MAP_YELLOW_PIKMIN,      // 0x5
		MAP_PURPLE_PIKMIN,      // 0x6
		MAP_WHITE_PIKMIN,       // 0x7
		MAP_BULBMIN,            // 0x8
		MAP_BURIED_PIKMIN,      // 0x9
		MAP_GEYSER,             // 0xA
		MAP_UNENTERED_CAVE,     // 0xB
		MAP_CAVE_POD,           // 0xC
		MAP_LOUIE_PRESIDENT,    // 0xD
		MAP_OLIMAR,             // 0xE
		MAP_SHIP,               // 0xF
		MAP_TREASURE,           // 0x10	- possibly already collected treasure
		MAP_SWALLOWED_TREASURE, // 0x11 - possibly just regular treasure
		MAP_UPGRADE,            // 0x12
		MAP_INCOMPLETE_CAVE,    // 0x13
		MAP_COMPLETED_CAVE,     // 0x14
		MAP_HOLE,               // 0x15
		MAP_INVALID,            // 0x16
		MAP_NULL_ICON,          // 0x17
	};

	struct Mgr {
		Mgr();

		static void entry(Game::TPositionObject*, Radar::cRadarType, u32);
		static void exit(Game::TPositionObject*);

		void attach(Game::TPositionObject*, Radar::cRadarType, unsigned long);
		void bornFuefuki();
		void calcNearestTreasure(Vector3f&, float, Vector3f&, float&);
		void clear();
		void detach(Game::TPositionObject*);
		void dieFuefuki();

		void fuefuki();
		void getNumOtakaraItems();
		void ogDummpyInit();
	};

	static Mgr* mgr;

	struct Point : public CNode {
		Point();

		virtual ~Point(); // _08 (weak)

		void getPosition();
	};
};

#endif
