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
		MAP_INCOMPLETE_CAVE,    // 0xB
		MAP_CAVE_POD,           // 0xC
		MAP_LOUIE_PRESIDENT,    // 0xD
		MAP_OLIMAR,             // 0xE
		MAP_SHIP,               // 0xF
		MAP_TREASURE,           // 0x10	- possibly already collected treasure
		MAP_SWALLOWED_TREASURE, // 0x11 - possibly just regular treasure
		MAP_UPGRADE,            // 0x12
		MAP_UNENTERED_CAVE,     // 0x13
		MAP_COMPLETED_CAVE,     // 0x14
		MAP_HOLE,               // 0x15
		MAP_INVALID,            // 0x16
		MAP_NULL_ICON,          // 0x17
	};

	struct Point : public CNode {
		Point()
		{
			mObjType = MAP_NULL_ICON;
			mObject  = nullptr;
			mCaveID  = nullptr;
		}

		virtual ~Point() { } // _08 (weak)

		Vector2f getPosition();

		static void entry(Game::TPositionObject*, Radar::cRadarType, u32); // unused? or inline
		inline void clear();

		// _00     = VTBL
		// _00-_18 = CNode
		cRadarType mObjType;            // _18
		Game::TPositionObject* mObject; // _1C
		u32 mCaveID;                    // _20
	};

	struct Mgr {
		Mgr();

		static void entry(Game::TPositionObject*, Radar::cRadarType, u32);
		static bool exit(Game::TPositionObject*);

		void attach(Game::TPositionObject*, Radar::cRadarType, u32);
		void bornFuefuki();
		int calcNearestTreasure(Vector3f&, f32, Vector3f&, f32&);
		void clear();
		bool detach(Game::TPositionObject*);
		void dieFuefuki();

		void fuefuki();
		static int getNumOtakaraItems();
		void ogDummpyInit();

		Point mPointNode1; // _00
		Point mPointNode2; // _24
		Point* mPointList; // _48
		int mNumObjects;   // _4C
		int mOtakaraNum;   // _50
		int mFuefukiCount; // _54
		int mFuefukiTimer; // _58
	};

	static Mgr* mgr;
};

struct OgDummy : public Game::TPositionObject {
	inline OgDummy() { mPosition = Vector3f(0.0f); }

	virtual Vector3f getPosition() { return mPosition; } // _08 (weak)

	// _00 = VTBL
	Vector3f mPosition; // _04
};

#endif
