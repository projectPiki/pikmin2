#ifndef _GAME_CURRTRIINFO_H
#define _GAME_CURRTRIINFO_H

#include "Vector3.h"

namespace Sys {
struct Triangle;
struct TriangleTable;
} // namespace Sys

namespace Game {
struct CurrTriInfo {
	CurrTriInfo()
	{
		m_triangle = nullptr;

		_18.x   = FLOAT_DIST_MAX;
		_18.y   = FLOAT_DIST_MIN;
		m_table = nullptr;
		_18.z   = 0.0f;

		_24 = 1.0f;
		_28 = 0.0f;

		_0C = true;
		_0D = false;
	}

	Vector3f m_position;         // _00
	bool _0C;                    // _0C
	bool _0D;                    // _0D
	u8 _0E;                      // _0E
	u8 _0F;                      // _0F
	Sys::TriangleTable* m_table; // _10
	Sys::Triangle* m_triangle;   // _14
	Vector3f _18;                // _18
	float _24;                   // _24
	float _28;                   // _28
};
} // namespace Game

#endif
