#ifndef _GAME_CAVE_INFO_H
#define _GAME_CAVE_INFO_H

#include "CNode.h"
#include "Game/enemyInfo.h"
#include "BaseParm.h"
#include "stream.h"
#include "Graphics.h"
#include "Matrixf.h"
#include "Vector3.h"
#include "types.h"
#include "Game/pelletMgr.h"

namespace Game {
namespace Cave {

/**
 * @size{0x38}
 */
struct BaseGen : public CNode {
	/**
	 * Spawn type used by BaseGen (caves).
	 * UNUSED_3 is player 1 spawn in vs mode? (see
	 * Game::Cave::RandMapMgr::getStartPosition)
	 */
	enum Type { TekiA__Easy = 0, TekiB__Hard, Treasure__Item, Unused3, HoleOrGeyser, Seam__Door, Plant, Start, TekiF__Special, Alcove };

	BaseGen();

	virtual ~BaseGen() { }                  // _08 (weak)
	virtual void read(Stream&);             // _10
	virtual void draw(Graphics&, Matrixf*); // _14

	Type m_spawnType;    // _18
	Vector3f m_position; // _1C
	f32 m_angle;         // _28
	f32 m_radius;        // _2C
	int m_minimum;       // _30
	int m_maximum;       // _34
};

/**
 * @size{0x28}
 */
struct TekiInfo : CNode {
	// need to make this a define list eventually
	// enum DropMode { NoDrop = 0, DropOnPikminOrLeader, DropOnPikmin, DropOnLeader, DropOnCarryingPikmin, DropFromPurpleEarthquake };

	virtual ~TekiInfo() { }     // _08 (weak)
	virtual void read(Stream&); // _10

	EnemyTypeID::EEnemyTypeID m_enemyID;                // _18
	int m_weight;                                       // _1C
	BaseGen::Type m_type;                               // _20
	u8 m_dropMode;                                      // _24
	u8 _25;                                             // _25
	Game::PelletMgr::OtakaraItemCode m_otakaraItemCode; // _26
};

/**
 * @size{0x20}
 */
struct ItemInfo : CNode {
	virtual ~ItemInfo() { }     // _08 (weak)
	virtual void read(Stream&); // _10

	int m_caveID; // _18
	int m_weight; // _1C
};

/**
 * @size{0x24}
 */
struct GateInfo : CNode {
	virtual ~GateInfo() { }     // _08 (weak)
	virtual void read(Stream&); // _10

	int m_caveID; // _18
	f32 m_life;   // _1C
	int m_weight; // _20
};

/**
 * @size{0x20}
 */
struct CapInfo : CNode {
	virtual ~CapInfo() { }      // _08 (weak)
	virtual void read(Stream&); // _10

	TekiInfo* getTekiInfo();

	bool m_tekiEmpty;     // _18, AKA does not have a teki
	TekiInfo* m_tekiInfo; // _1C
};

/**
 * @size{0x388}
 */
struct FloorInfo : CNode {
	struct Parms : Parameters {
		Parms();

		Parm<int> m_floorIndex1;       // _00C  /* f000 */
		Parm<int> m_floorIndex2;       // _034  /* f001 */
		Parm<int> m_tekiMax;           // _05C  /* f002 */
		Parm<int> m_itemMax;           // _084  /* f003 */
		Parm<int> m_gateMax;           // _0AC  /* f004 */
		Parm<int> m_capMax;            // _0D4  /* f014 */
		Parm<int> m_roomCount;         // _0FC  /* f005 */
		Parm<f32> m_routeRatio;        // _124  /* f006 */
		Parm<int> m_hasEscapeFountain; // _14C  /* f007 */
		ParmString m_caveUnitFile;     // _174  /* f008 */
		ParmString m_lightingFile;     // _194  /* f009 */
		ParmString m_vrBox;            // _1B4  /* f00A */
		Parm<int> m_isHoleClogged;     // _1D4  /* f010 */
		ParmEnum m_floorAlphaType;     // _1FC  /* f011 */

		ParmEnum m_floorBetaType; // _220  /* f012 */

		ParmEnum m_floorHidden; // _244  /* f013 */

		Parm<int> m_version;          // _268  /* f015 */
		Parm<f32> m_waterwraithTimer; // _290  /* f016 */
		Parm<int> m_glitchySeesaw;    // _2B8  /* f017 */
		void* m_end;                  // _2E0
	};

	FloorInfo();

	virtual ~FloorInfo();       // _08 (weak)
	virtual void read(Stream&); // _10

	int getTekiMax();
	int getTekiInfoNum();
	TekiInfo* getTekiInfo(int);
	int getTekiWeightSum();

	int getItemMax();
	int getItemInfoNum();
	ItemInfo* getItemInfo(int);
	int getItemWeightSum();

	int getGateMax();
	int getGateInfoNum();
	GateInfo* getGateInfo(int);
	int getGateWeightSum();

	int getCapMax();
	int getCapInfoNum();
	CapInfo* getCapInfo(int);

	int getRoomNum();
	f32 getRouteRatio();
	bool hasEscapeFountain(int);
	bool hasHiddenCollision();
	bool useKaidanBarrel();

	Parms m_parms;       // _018
	TekiInfo m_tekiInfo; // _2FC
	ItemInfo m_itemInfo; // _324
	GateInfo m_gateInfo; // _344
	CapInfo m_capInfo;   // _368
};

/**
 * @size{0x3D8}
 */
struct CaveInfo : CNode {
	/* Erased? */
	struct Parms : Parameters {
		inline Parms();

		Parm<int> m_floorMax; // _0C
		void* m_end;          // _34
	};

	CaveInfo();

	virtual ~CaveInfo();        // _08 (weak)
	virtual void read(Stream&); // _10

	void disablePelplant();
	int getFloorMax();
	FloorInfo* getFloorInfo(int);
	void load(char*);

	Parms m_parms;         // _18
	FloorInfo m_floorInfo; // _50
};
} // namespace Cave
} // namespace Game

#endif
