#ifndef _GAME_ENEMYPELLETINFO_H
#define _GAME_ENEMYPELLETINFO_H

#include "types.h"
#include "stream.h"

namespace Game {
struct EnemyPelletInfo {
	EnemyPelletInfo();

	u8 m_color;          // _00,	Pellet Color 0 - Blue, 1 - Red, 2 - Yellow
	u8 m_size;           // _01,	Size of Pellet 1,5,10,20
	u8 m_minPellets;     // _02,	Minimum number of pellets
	u8 m_maxPellets;     // _03,	Maximum number of pellets
	float m_spawnChance; // _04,	Chance to drop pellet
	                     // _08 vtbl

	virtual void write(Stream&);
	virtual void read(Stream&);
};
} // namespace Game

#endif
