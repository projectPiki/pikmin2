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

		m_maxY = FLOAT_DIST_MAX;
		m_minY = FLOAT_DIST_MIN;

		m_table = nullptr;

		m_normalVec = Vector3f(0.0f, 1.0f, 0.0f);

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
	f32 m_maxY;                  // _18
	f32 m_minY;                  // _1C
	Vector3f m_normalVec;        // _20
};
} // namespace Game

#endif
