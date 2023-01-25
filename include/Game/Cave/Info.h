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

	Type mSpawnType;    // _18
	Vector3f mPosition; // _1C
	f32 mAngle;         // _28
	f32 mRadius;        // _2C
	int mMinimum;       // _30
	int mMaximum;       // _34
};

/**
 * @size{0x28}
 */
struct TekiInfo : CNode {
	// need to make this a define list eventually
	// enum DropMode { NoDrop = 0, DropOnPikminOrLeader, DropOnPikmin, DropOnLeader, DropOnCarryingPikmin,
	// DropFromPurpleEarthquake };

	virtual ~TekiInfo() { }     // _08 (weak)
	virtual void read(Stream&); // _10

	EnemyTypeID::EEnemyTypeID mEnemyID; // _18
	int mWeight;                        // _1C
	BaseGen::Type mType;                // _20
	u8 mDropMode;                       // _24
	u8 : 0;
	Game::PelletMgr::OtakaraItemCode mOtakaraItemCode; // _26
};

/**
 * @size{0x20}
 */
struct ItemInfo : CNode {
	virtual ~ItemInfo() { }     // _08 (weak)
	virtual void read(Stream&); // _10

	int mCaveID; // _18
	int mWeight; // _1C
};

/**
 * @size{0x24}
 */
struct GateInfo : CNode {
	virtual ~GateInfo() { }     // _08 (weak)
	virtual void read(Stream&); // _10

	int mCaveID; // _18
	f32 mLife;   // _1C
	int mWeight; // _20
};

/**
 * @size{0x20}
 */
struct CapInfo : CNode {
	virtual ~CapInfo() { }      // _08 (weak)
	virtual void read(Stream&); // _10

	TekiInfo* getTekiInfo();

	bool mTekiEmpty;     // _18, AKA does not have a teki
	TekiInfo* mTekiInfo; // _1C
};

/**
 * @size{0x388}
 */
struct FloorInfo : CNode {
	struct Parms : Parameters {
		Parms();

		Parm<int> mFloorIndex1;       // _00C  /* f000 */
		Parm<int> mFloorIndex2;       // _034  /* f001 */
		Parm<int> mTekiMax;           // _05C  /* f002 */
		Parm<int> mItemMax;           // _084  /* f003 */
		Parm<int> mGateMax;           // _0AC  /* f004 */
		Parm<int> mCapMax;            // _0D4  /* f014 */
		Parm<int> mRoomCount;         // _0FC  /* f005 */
		Parm<f32> mRouteRatio;        // _124  /* f006 */
		Parm<int> mHasEscapeFountain; // _14C  /* f007 */
		ParmString mCaveUnitFile;     // _174  /* f008 */
		ParmString mLightingFile;     // _194  /* f009 */
		ParmString mVrBox;            // _1B4  /* f00A */
		Parm<int> mIsHoleClogged;     // _1D4  /* f010 */
		ParmEnum mFloorAlphaType;     // _1FC  /* f011 */

		ParmEnum mFloorBetaType; // _220  /* f012 */

		ParmEnum mFloorHidden; // _244  /* f013 */

		Parm<int> mVersion;          // _268  /* f015 */
		Parm<f32> mWaterwraithTimer; // _290  /* f016 */
		Parm<int> mGlitchySeesaw;    // _2B8  /* f017 */
		void* mEnd;                  // _2E0
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

	Parms mParms;       // _018
	TekiInfo mTekiInfo; // _2FC
	ItemInfo mItemInfo; // _324
	GateInfo mGateInfo; // _344
	CapInfo mCapInfo;   // _368
};

/**
 * @size{0x3D8}
 */
struct CaveInfo : CNode {
	/* Erased? */
	struct Parms : Parameters {
		inline Parms();

		Parm<int> mFloorMax; // _0C
		void* mEnd;          // _34
	};

	CaveInfo();

	virtual ~CaveInfo();        // _08 (weak)
	virtual void read(Stream&); // _10

	void disablePelplant();
	int getFloorMax();
	FloorInfo* getFloorInfo(int);
	void load(char*);

	Parms mParms;         // _18
	FloorInfo mFloorInfo; // _50
};
} // namespace Cave
} // namespace Game

#endif
