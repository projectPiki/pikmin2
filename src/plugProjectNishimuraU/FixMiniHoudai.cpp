#include "Game/Entities/MiniHoudai.h"

namespace Game {
namespace FixMiniHoudai {
/*
 * --INFO--
 * Address:	8030195C
 * Size:	000090
 */
Obj::Obj()
    : MiniHoudai::Obj()
{
	// Matches except for variable offsets

	// CURRENT:
	/*
	    bl        __ct__Q34Game10MiniHoudai3ObjFv
	    lis       r3, __vt__Q34Game13FixMiniHoudai3Obj@ha
	    addi      r0, r31, 0x2BC
	    addi      r5, r3, __vt__Q34Game13FixMiniHoudai3Obj@l
	*/

	// TARGET:
	/*
	    bl        __ct__Q34Game10MiniHoudai3ObjFv
	    lis       r3, __vt__Q34Game13FixMiniHoudai3Obj@ha
	    addi      r0, r31, 0x308
	    addi      r5, r3, __vt__Q34Game13FixMiniHoudai3Obj@l
	*/
}
} // namespace FixMiniHoudai
} // namespace Game
