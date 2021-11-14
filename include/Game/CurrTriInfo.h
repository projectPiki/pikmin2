#ifndef _GAME_CURRTRIINFO_H
#define _GAME_CURRTRIINFO_H

#include "Vector3.h"

namespace Sys {
struct Triangle;
struct TriangleTable;
} // namespace Sys

namespace Game {
struct CurrTriInfo {
	Vector3f _00;                // _00
	u8 _0C;                      // _0C
	u8 _0D;                      // _0D
	u8 _0E;                      // _0E
	u8 _0F;                      // _0F
	Sys::TriangleTable* m_table; // _10
	Sys::Triangle* m_triangle;   // _14
	float _18;                   // _18
	float _1C;                   // _1C
	float _20;                   // _20
	float _24;                   // _24
	float _28;                   // _28
};
} // namespace Game

#endif
