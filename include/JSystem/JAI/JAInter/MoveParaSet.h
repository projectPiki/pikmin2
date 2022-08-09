#ifndef _JSYSTEM_JAI_JAINTER_MOVEPARASET_H
#define _JSYSTEM_JAI_JAINTER_MOVEPARASET_H

#include "types.h"

namespace JAInter {

/**
 * @size = 0x10
 */
struct MoveParaSet {
	float _00; // _00
	float _04; // _04
	u32 _08;   // _08 - unknown
	u32 _0C;   // _0C - unknown
};

/**
 * @size = 0x10
 */
struct MoveParaSetInitHalf {
	MoveParaSetInitHalf();

	float _00;   // _00
	float _04;   // _04
	u8 _08[0x4]; // _08 - unknown, could be u32 like above
	u32 _0C;     // _0C - unknown
};

/**
 * @size = 0x10
 */
struct MoveParaSetInitZero {
	MoveParaSetInitZero();

	float _00;   // _00
	float _04;   // _04
	u8 _08[0x4]; // _08 - unknown, could be u32 like above
	u32 _0C;     // _0C - unknown
};

} // namespace JAInter
#endif
