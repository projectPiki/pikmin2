#ifndef _GAME_ENEMYPELLETINFO_H
#define _GAME_ENEMYPELLETINFO_H

#include "types.h"
#include "stream.h"

namespace Game {
struct EnemyPelletInfo {
	EnemyPelletInfo();

	EnemyPelletInfo& operator=(EnemyPelletInfo other)
	{
		mColor       = other.mColor;
		mSize        = other.mSize;
		mMinPellets  = other.mMinPellets;
		mMaxPellets  = other.mMaxPellets;
		mSpawnChance = other.mSpawnChance;
		return *this;
	}

	u8 mColor;        // _00,	Pellet Color, use PELCOLOR_BLUE define
	u8 mSize;         // _01,	Size of Pellet 1,5,10,20
	u8 mMinPellets;   // _02,	Minimum number of pellets
	u8 mMaxPellets;   // _03,	Maximum number of pellets
	f32 mSpawnChance; // _04,	Chance to drop pellet
	                  // _08 vtbl

	virtual void write(Stream&);
	virtual void read(Stream&);
};
} // namespace Game

#endif
