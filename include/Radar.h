#ifndef _RADAR_H
#define _RADAR_H

#include "types.h"
#include "Vector3.h"
#include "Game/cellPyramid.h"
#include "CNode.h"

#define RADAR_MAX_OBJECTS 160

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

	struct Point : public CNode {
		Point()
		{
			m_objType = MAP_NULL_ICON;
			m_object  = nullptr;
			_20       = nullptr;
		}

		virtual ~Point() { } // _08 (weak)

		Vector2f getPosition();

		static void entry(Game::TPositionObject*, Radar::cRadarType, u32); // unused? or inline
		inline void clear();

		// _00     = VTBL
		// _00-_18 = CNode
		cRadarType m_objType;            // _18
		Game::TPositionObject* m_object; // _1c
		u32 _20;                         // _20
	};

	struct Mgr {
		Mgr();

		static void entry(Game::TPositionObject*, Radar::cRadarType, u32);
		static bool exit(Game::TPositionObject*);

		void attach(Game::TPositionObject*, Radar::cRadarType, unsigned long);
		void bornFuefuki();
		int calcNearestTreasure(Vector3f&, float, Vector3f&, float&);
		void clear();
		bool detach(Game::TPositionObject*);
		void dieFuefuki();

		void fuefuki();
		static int getNumOtakaraItems();
		void ogDummpyInit();

		Point m_pointNode1; // _00
		Point m_pointNode2; // _24
		Point* m_pointList; // _48
		int m_objCount;     // _4C
		int m_otakaraNum;   // _50
		int m_fuefukiCount; // _54
		int m_fuefukiTimer; // _58
	};

	static Mgr* mgr;
};

struct OgDummy : public Game::TPositionObject {
	inline OgDummy() { m_position = Vector3f(0.0f); }

	virtual Vector3f getPosition() { return m_position; } // _08 (weak)

	// _00 = VTBL
	Vector3f m_position; // _04
};

#endif
