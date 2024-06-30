#ifndef _GAME_GAMEMESSAGE_H
#define _GAME_GAMEMESSAGE_H

#include "types.h"
#include "Vector3.h"
#include "Game/enemyInfo.h"

namespace Game {
struct BaseGameSection;
struct SingleGameSection;
struct VsGameSection;
struct Pellet;

struct GameMessage {
	virtual bool actCommon(BaseGameSection*) { return true; }   // _08 (weak)
	virtual bool actSingle(SingleGameSection*) { return true; } // _0C (weak)
	virtual bool actVs(VsGameSection*) { return true; }         // _10 (weak)

	// _00 = VTBL
};

struct GameMessagePelletBorn : public GameMessage {
	inline GameMessagePelletBorn(Pellet* pellet)
	    : mPellet(pellet)
	{
	}

	virtual bool actVs(VsGameSection*); // _10

	// _00 = VTBL
	Pellet* mPellet; // _04
};

struct GameMessagePelletDead : public GameMessage {
	inline GameMessagePelletDead(Pellet* pellet)
	    : mPellet(pellet)
	{
	}

	virtual bool actVs(VsGameSection*); // _10

	// _00 = VTBL
	Pellet* mPellet; // _04
};

struct GameMessageVsAddEnemy : public GameMessage {
	GameMessageVsAddEnemy(EnemyTypeID::EEnemyTypeID id, int count)
	{
		mEnemyID = id;
		mCount   = count;
	}

	virtual bool actVs(VsGameSection*); // _10

	// _00 = VTBL
	EnemyTypeID::EEnemyTypeID mEnemyID; // _04 (enemy ID)
	int mCount;                         // _08 (spawn num)
};

struct GameMessageVsBattleFinished : public GameMessage {
	virtual bool actVs(VsGameSection*); // _10

	// _00      = VTABLE
	int mWinningSide; // _04
};

struct GameMessageVsBirthTekiTreasure : public GameMessage {
	virtual bool actVs(VsGameSection*); // _10

	// _00 = VTBL
	Vector3f mPosition;   // _04
	int mTekiBirthNum;    // _10
	bool mDoSetExitTimer; // _14
};

struct GameMessageVsGetDoping : public GameMessage {
	GameMessageVsGetDoping(int naviIndex, int sprayType)
	    : mNaviIndex(naviIndex)
	    , mSprayType(sprayType)
	{
	}

	virtual bool actVs(VsGameSection*); // _10

	// _00 = VTBL
	int mNaviIndex; // _04
	int mSprayType; // _08
};

struct GameMessageVsGetOtakara : public GameMessage {
	inline GameMessageVsGetOtakara(u32 onyonType)
	    : mOnionType(onyonType)
	    , mUnused08(1)
	{
	}

	virtual bool actVs(VsGameSection*); // _10

	// _00 = VTBL
	u32 mOnionType; // _04, onyon type according to ghidra, but that enum is meant to be a short
	int mUnused08;  // _08
};

struct GameMessageVsGotCard : public GameMessage {
	inline GameMessageVsGotCard(u32 userIndex)
	    : mUserIndex(userIndex)
	{
	}

	virtual bool actVs(VsGameSection*); // _10

	// _00 = VTBL
	u32 mUserIndex; // _04
};

struct GameMessageVsPikminDead : public GameMessage {
	virtual bool actVs(VsGameSection*); // _10
};

struct GameMessageVsRedOrSuckStart : public GameMessage {
	GameMessageVsRedOrSuckStart(int type) { mColor = type; }
	virtual bool actVs(VsGameSection*); // _10

	// _00 = VTBL
	int mColor;     // _04 0 = blue 1 = red
	bool mIsYellow; // _08 - unknown
};

struct GameMessageVsUseCard : public GameMessage {
	GameMessageVsUseCard(int id) { mSlotIndex = id; }
	virtual bool actVs(VsGameSection*); // _10

	// _00 = VTBL
	int mSlotIndex; // _04
};

} // namespace Game

#endif
