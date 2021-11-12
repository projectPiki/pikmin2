#include "types.h"

/*
    Generated from dpostproc
*/

namespace P2JME {

/*
 * --INFO--
 * Address:	8043D32C
 * Size:	000048
 */
void convertU64ToMessageID(unsigned long long, unsigned long*, unsigned long*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	slwi     r7, r4, 8
	stw      r0, 0x14(r1)
	slwi     r0, r3, 8
	rlwimi   r0, r4, 8, 0x18, 0x1f
	stw      r3, 8(r1)
	addi     r3, r1, 8
	stw      r4, 0xc(r1)
	mr       r4, r5
	mr       r5, r6
	stw      r7, 0xc(r1)
	stw      r0, 8(r1)
	bl       convertCharToMessageID__5P2JMEFPcPUlPUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043D374
 * Size:	000128
 */
void convertCharToMessageID(char*, unsigned long*, unsigned long*)
{
	/*
	li       r0, 0
	lis      r6, __ctype_map@ha
	stw      r0, 0(r5)
	addi     r7, r6, __ctype_map@l
	stw      r0, 0(r4)
	lbz      r8, 0(r3)
	extsb    r8, r8
	clrlwi   r0, r8, 0x18
	lbzx     r0, r7, r0
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8043D3B4
	lwz      r0, 0(r4)
	mulli    r6, r0, 0xa
	addi     r0, r6, -48
	add      r0, r8, r0
	stw      r0, 0(r4)

lbl_8043D3B4:
	lbz      r8, 1(r3)
	extsb    r8, r8
	clrlwi   r0, r8, 0x18
	lbzx     r0, r7, r0
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8043D3E0
	lwz      r0, 0(r4)
	mulli    r6, r0, 0xa
	addi     r0, r6, -48
	add      r0, r8, r0
	stw      r0, 0(r4)

lbl_8043D3E0:
	lbz      r8, 2(r3)
	extsb    r8, r8
	clrlwi   r0, r8, 0x18
	lbzx     r0, r7, r0
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8043D40C
	lwz      r0, 0(r4)
	mulli    r6, r0, 0xa
	addi     r0, r6, -48
	add      r0, r8, r0
	stw      r0, 0(r4)

lbl_8043D40C:
	lbz      r8, 3(r3)
	extsb    r8, r8
	clrlwi   r0, r8, 0x18
	lbzx     r0, r7, r0
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8043D438
	lwz      r0, 0(r4)
	mulli    r6, r0, 0xa
	addi     r0, r6, -48
	add      r0, r8, r0
	stw      r0, 0(r4)

lbl_8043D438:
	lbz      r7, 5(r3)
	lis      r4, __ctype_map@ha
	addi     r6, r4, __ctype_map@l
	extsb    r7, r7
	clrlwi   r0, r7, 0x18
	lbzx     r0, r6, r0
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8043D46C
	lwz      r0, 0(r5)
	mulli    r4, r0, 0xa
	addi     r0, r4, -48
	add      r0, r7, r0
	stw      r0, 0(r5)

lbl_8043D46C:
	lbz      r7, 6(r3)
	extsb    r7, r7
	clrlwi   r0, r7, 0x18
	lbzx     r0, r6, r0
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beqlr
	lwz      r0, 0(r5)
	mulli    r4, r0, 0xa
	addi     r0, r4, -48
	add      r0, r7, r0
	stw      r0, 0(r5)
	blr
	*/
}
} // namespace P2JME
