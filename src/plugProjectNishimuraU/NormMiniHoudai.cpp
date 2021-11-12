#include "types.h"

/*
    Generated from dpostproc
*/

namespace Game {

/*
 * --INFO--
 * Address:	803015F8
 * Size:	000090
 */
NormMiniHoudai::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_80301634
	addi     r0, r31, 0x308
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x308(r31)
	stw      r0, 0x30c(r31)
	stw      r0, 0x310(r31)

lbl_80301634:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q34Game10MiniHoudai3ObjFv
	lis      r3, __vt__Q34Game14NormMiniHoudai3Obj@ha
	addi     r0, r31, 0x308
	addi     r5, r3, __vt__Q34Game14NormMiniHoudai3Obj@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x2fc
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game
