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
#include "Game/PelletMgr.h"

namespace Game {
namespace Cave {

struct BaseGen : public CNode {
	/**
	 * Spawn type used by BaseGen (caves).
	 * UNUSED_3 is player 1 spawn in vs mode? (see
	 * Game::Cave::RandMapMgr::getStartPosition)
	 */
	enum Type { TekiA__Easy = 0, TekiB__Hard, Treasure__Item, Unused3, HoleOrGeyser, Seam__Door, Plant, Start, TekiF__Special, Alcove };
	BaseGen();
	virtual ~BaseGen();
	virtual void read(Stream&);
	void draw(Graphics&, Matrixf*);

	Type m_spawnType;    // _18
	Vector3f m_position; // _1C
	float m_angle;       // _28
	float m_radius;      // _2C
	int m_minimum;       // _30
	int m_maximum;       // _34
};

struct TekiInfo : CNode {
	enum DropMode { NoDrop = 0, DropOnPikminOrLeader, DropOnPikmin, DropOnLeader, DropOnCarryingPikmin, DropFromPurpleEarthquake };
	virtual ~TekiInfo();
	virtual void read(Stream&);

	EnemyTypeID m_enemyID;                              // _18
	int m_weight;                                       // _1C
	BaseGen::Type m_type;                               // _20
	DropMode m_dropMode;                                // _24
	u8 _25;                                             // _25
	Game::PelletMgr::OtakaraItemCode m_otakaraItemCode; // _26
};

struct ItemInfo : CNode {
	virtual ~ItemInfo();
	virtual void read(Stream&);

	int m_caveID; // _18
	int m_weight; // _1C
};

struct GateInfo : CNode {
	virtual ~GateInfo();
	virtual void read(Stream&);

	int m_caveID; // _18
	float m_life; // _1C
	int m_weight; // _20
};

struct CapInfo : CNode {
	TekiInfo* getTekiInfo();
	virtual ~CapInfo();
	virtual void read(Stream&);

	bool m_doesNotHaveTeki; // _18  /* Always false? */
	u8 _19[3];              // _19
	TekiInfo* m_tekiInfo;   // _1C
};

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
		Parm<float> m_routeRatio;      // _124  /* f006 */
		Parm<int> m_hasEscapeFountain; // _14C  /* f007 */
		ParmString m_caveUnitFile;     // _174  /* f008 */
		ParmString m_lightingFile;     // _194  /* f009 */
		ParmString m_vrBox;            // _1B4  /* f00A */
		Parm<int> m_isHoleClogged;     // _1D4  /* f010 */
		ParmEnum m_floorAlphaType;     // _1FC  /* f011 */

		ParmEnum m_floorBetaType; // _220  /* f012 */

		ParmEnum m_floorHidden; // _244  /* f013 */

		Parm<int> m_version;            // _268  /* f015 */
		Parm<float> m_waterwraithTimer; // _290  /* f016 */
		Parm<int> m_glitchySeesaw;      // _2B8  /* f017 */
		void* m_end;                    // _2E0
	};

	FloorInfo();
	virtual ~FloorInfo();
	virtual void read(Stream&);

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
	float getRouteRatio();
	bool hasEscapeFountain(int);
	bool hasHiddenCollision();
	bool useKaidanBarrel();

	Parms m_parms;       // _018
	TekiInfo m_tekiInfo; // _2FC
	ItemInfo m_itemInfo; // _324
	GateInfo m_gateInfo; // _344
	CapInfo m_capInfo;   // _368
};

struct CaveInfo : CNode {
	/* Erased? */
	struct Parms : Parameters {
		inline Parms();
		Parm<int> m_floorMax; // _0C
		void* m_end;          // _34
	};

	CaveInfo();
	virtual ~CaveInfo();
	virtual void read(Stream&);

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
