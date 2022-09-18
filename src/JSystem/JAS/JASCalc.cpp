#include "JSystem/JAS/JASCalc.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void JASCalc::mixcopy(const short*, const short*, short*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5EBC
 * Size:	0000D4
 */
void JASCalc::imixcopy(const short*, const short*, short*, unsigned long)
{
	/*
	cmplwi   r6, 0
	beqlr
	rlwinm.  r0, r6, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_800A5F68

lbl_800A5ED0:
	lha      r7, 0(r3)
	lha      r0, 0(r4)
	sth      r7, 0(r5)
	lha      r7, 2(r3)
	sth      r0, 2(r5)
	lha      r0, 2(r4)
	sth      r7, 4(r5)
	lha      r7, 4(r3)
	sth      r0, 6(r5)
	lha      r0, 4(r4)
	sth      r7, 8(r5)
	lha      r7, 6(r3)
	sth      r0, 0xa(r5)
	lha      r0, 6(r4)
	sth      r7, 0xc(r5)
	lha      r7, 8(r3)
	sth      r0, 0xe(r5)
	lha      r0, 8(r4)
	sth      r7, 0x10(r5)
	lha      r7, 0xa(r3)
	sth      r0, 0x12(r5)
	lha      r0, 0xa(r4)
	sth      r7, 0x14(r5)
	lha      r7, 0xc(r3)
	sth      r0, 0x16(r5)
	lha      r0, 0xc(r4)
	sth      r7, 0x18(r5)
	lha      r7, 0xe(r3)
	addi     r3, r3, 0x10
	sth      r0, 0x1a(r5)
	lha      r0, 0xe(r4)
	addi     r4, r4, 0x10
	sth      r7, 0x1c(r5)
	sth      r0, 0x1e(r5)
	addi     r5, r5, 0x20
	bdnz     lbl_800A5ED0
	andi.    r6, r6, 7
	beqlr

lbl_800A5F68:
	mtctr    r6

lbl_800A5F6C:
	lha      r7, 0(r3)
	addi     r3, r3, 2
	lha      r0, 0(r4)
	addi     r4, r4, 2
	sth      r7, 0(r5)
	sth      r0, 2(r5)
	addi     r5, r5, 4
	bdnz     lbl_800A5F6C
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void JASCalc::bcopyfast(const void*, void*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5F90
 * Size:	0002D4
 */
void JASCalc::bcopy(const void*, void*, unsigned long)
{
	/*
	clrlwi   r7, r3, 0x1e
	clrlwi   r6, r4, 0x1e
	cmplw    r7, r6
	bne      lbl_800A6084
	clrlwi.  r0, r5, 0x1c
	bne      lbl_800A6084
	rlwinm.  r8, r5, 0x1c, 4, 0x1f
	beqlr
	rlwinm.  r0, r8, 0x1e, 2, 0x1f
	mtctr    r0
	beq      lbl_800A6050

lbl_800A5FBC:
	lwz      r7, 0(r3)
	lwz      r6, 4(r3)
	lwz      r5, 8(r3)
	lwz      r0, 0xc(r3)
	stw      r7, 0(r4)
	stw      r6, 4(r4)
	stw      r5, 8(r4)
	stw      r0, 0xc(r4)
	lwz      r7, 0x10(r3)
	lwz      r6, 0x14(r3)
	lwz      r5, 0x18(r3)
	lwz      r0, 0x1c(r3)
	stw      r7, 0x10(r4)
	stw      r6, 0x14(r4)
	stw      r5, 0x18(r4)
	stw      r0, 0x1c(r4)
	lwz      r7, 0x20(r3)
	lwz      r6, 0x24(r3)
	lwz      r5, 0x28(r3)
	lwz      r0, 0x2c(r3)
	stw      r7, 0x20(r4)
	stw      r6, 0x24(r4)
	stw      r5, 0x28(r4)
	stw      r0, 0x2c(r4)
	lwz      r7, 0x30(r3)
	lwz      r6, 0x34(r3)
	lwz      r5, 0x38(r3)
	lwz      r0, 0x3c(r3)
	addi     r3, r3, 0x40
	stw      r7, 0x30(r4)
	stw      r6, 0x34(r4)
	stw      r5, 0x38(r4)
	stw      r0, 0x3c(r4)
	addi     r4, r4, 0x40
	bdnz     lbl_800A5FBC
	andi.    r8, r8, 3
	beqlr

lbl_800A6050:
	mtctr    r8

lbl_800A6054:
	lwz      r7, 0(r3)
	lwz      r6, 4(r3)
	lwz      r5, 8(r3)
	lwz      r0, 0xc(r3)
	addi     r3, r3, 0x10
	stw      r7, 0(r4)
	stw      r6, 4(r4)
	stw      r5, 8(r4)
	stw      r0, 0xc(r4)
	addi     r4, r4, 0x10
	bdnz     lbl_800A6054
	blr

lbl_800A6084:
	cmplw    r7, r6
	bne      lbl_800A61E0
	cmplwi   r5, 0x10
	blt      lbl_800A61E0
	cmplwi   r7, 0
	beq      lbl_800A60C8
	subfic   r0, r7, 4
	clrlwi   r6, r0, 0x18
	b        lbl_800A60C0

lbl_800A60A8:
	lbz      r0, 0(r3)
	addi     r5, r5, -1
	addi     r6, r6, -1
	addi     r3, r3, 1
	stb      r0, 0(r4)
	addi     r4, r4, 1

lbl_800A60C0:
	clrlwi.  r0, r6, 0x18
	bne      lbl_800A60A8

lbl_800A60C8:
	cmplwi   r5, 4
	srwi     r7, r5, 2
	blt      lbl_800A6158
	rlwinm.  r6, r7, 0x1d, 3, 0x1f
	slwi     r0, r7, 2
	neg      r0, r0
	mtctr    r6
	beq      lbl_800A613C

lbl_800A60E8:
	lwz      r6, 0(r3)
	stw      r6, 0(r4)
	lwz      r6, 4(r3)
	stw      r6, 4(r4)
	lwz      r6, 8(r3)
	stw      r6, 8(r4)
	lwz      r6, 0xc(r3)
	stw      r6, 0xc(r4)
	lwz      r6, 0x10(r3)
	stw      r6, 0x10(r4)
	lwz      r6, 0x14(r3)
	stw      r6, 0x14(r4)
	lwz      r6, 0x18(r3)
	stw      r6, 0x18(r4)
	lwz      r6, 0x1c(r3)
	addi     r3, r3, 0x20
	stw      r6, 0x1c(r4)
	addi     r4, r4, 0x20
	bdnz     lbl_800A60E8
	andi.    r7, r7, 7
	beq      lbl_800A6154

lbl_800A613C:
	mtctr    r7

lbl_800A6140:
	lwz      r6, 0(r3)
	addi     r3, r3, 4
	stw      r6, 0(r4)
	addi     r4, r4, 4
	bdnz     lbl_800A6140

lbl_800A6154:
	add      r5, r5, r0

lbl_800A6158:
	cmplwi   r5, 0
	beqlr
	beqlr
	rlwinm.  r0, r5, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_800A61C4

lbl_800A6170:
	lbz      r0, 0(r3)
	stb      r0, 0(r4)
	lbz      r0, 1(r3)
	stb      r0, 1(r4)
	lbz      r0, 2(r3)
	stb      r0, 2(r4)
	lbz      r0, 3(r3)
	stb      r0, 3(r4)
	lbz      r0, 4(r3)
	stb      r0, 4(r4)
	lbz      r0, 5(r3)
	stb      r0, 5(r4)
	lbz      r0, 6(r3)
	stb      r0, 6(r4)
	lbz      r0, 7(r3)
	addi     r3, r3, 8
	stb      r0, 7(r4)
	addi     r4, r4, 8
	bdnz     lbl_800A6170
	andi.    r5, r5, 7
	beqlr

lbl_800A61C4:
	mtctr    r5

lbl_800A61C8:
	lbz      r0, 0(r3)
	addi     r3, r3, 1
	stb      r0, 0(r4)
	addi     r4, r4, 1
	bdnz     lbl_800A61C8
	blr

lbl_800A61E0:
	cmplwi   r5, 0
	beqlr
	rlwinm.  r0, r5, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_800A6248

lbl_800A61F4:
	lbz      r0, 0(r3)
	stb      r0, 0(r4)
	lbz      r0, 1(r3)
	stb      r0, 1(r4)
	lbz      r0, 2(r3)
	stb      r0, 2(r4)
	lbz      r0, 3(r3)
	stb      r0, 3(r4)
	lbz      r0, 4(r3)
	stb      r0, 4(r4)
	lbz      r0, 5(r3)
	stb      r0, 5(r4)
	lbz      r0, 6(r3)
	stb      r0, 6(r4)
	lbz      r0, 7(r3)
	addi     r3, r3, 8
	stb      r0, 7(r4)
	addi     r4, r4, 8
	bdnz     lbl_800A61F4
	andi.    r5, r5, 7
	beqlr

lbl_800A6248:
	mtctr    r5

lbl_800A624C:
	lbz      r0, 0(r3)
	addi     r3, r3, 1
	stb      r0, 0(r4)
	addi     r4, r4, 1
	bdnz     lbl_800A624C
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void JASCalc::bzerofast(void*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A6264
 * Size:	000274
 */
void JASCalc::bzero(void*, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x1b
	bne      lbl_800A628C
	clrlwi.  r0, r3, 0x1b
	bne      lbl_800A628C
	bl       DCZeroRange
	b        lbl_800A64C8

lbl_800A628C:
	clrlwi.  r0, r4, 0x1c
	clrlwi   r5, r6, 0x1e
	bne      lbl_800A6368
	cmplwi   r5, 0
	bne      lbl_800A6368
	rlwinm.  r5, r4, 0x1c, 4, 0x1f
	li       r4, 0
	beq      lbl_800A64C8
	rlwinm.  r0, r5, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_800A6348

lbl_800A62B8:
	stw      r4, 0(r3)
	stw      r4, 4(r3)
	stw      r4, 8(r3)
	stw      r4, 0xc(r3)
	stw      r4, 0x10(r3)
	stw      r4, 0x14(r3)
	stw      r4, 0x18(r3)
	stw      r4, 0x1c(r3)
	stw      r4, 0x20(r3)
	stw      r4, 0x24(r3)
	stw      r4, 0x28(r3)
	stw      r4, 0x2c(r3)
	stw      r4, 0x30(r3)
	stw      r4, 0x34(r3)
	stw      r4, 0x38(r3)
	stw      r4, 0x3c(r3)
	stw      r4, 0x40(r3)
	stw      r4, 0x44(r3)
	stw      r4, 0x48(r3)
	stw      r4, 0x4c(r3)
	stw      r4, 0x50(r3)
	stw      r4, 0x54(r3)
	stw      r4, 0x58(r3)
	stw      r4, 0x5c(r3)
	stw      r4, 0x60(r3)
	stw      r4, 0x64(r3)
	stw      r4, 0x68(r3)
	stw      r4, 0x6c(r3)
	stw      r4, 0x70(r3)
	stw      r4, 0x74(r3)
	stw      r4, 0x78(r3)
	stw      r4, 0x7c(r3)
	addi     r3, r3, 0x80
	bdnz     lbl_800A62B8
	andi.    r5, r5, 7
	beq      lbl_800A64C8

lbl_800A6348:
	mtctr    r5

lbl_800A634C:
	stw      r4, 0(r3)
	stw      r4, 4(r3)
	stw      r4, 8(r3)
	stw      r4, 0xc(r3)
	addi     r3, r3, 0x10
	bdnz     lbl_800A634C
	b        lbl_800A64C8

lbl_800A6368:
	cmplwi   r4, 0x10
	blt      lbl_800A6470
	cmplwi   r5, 0
	beq      lbl_800A63A0
	subfic   r0, r5, 4
	li       r3, 0
	clrlwi   r5, r0, 0x18
	b        lbl_800A6398

lbl_800A6388:
	stb      r3, 0(r6)
	addi     r6, r6, 1
	addi     r4, r4, -1
	addi     r5, r5, -1

lbl_800A6398:
	clrlwi.  r0, r5, 0x18
	bne      lbl_800A6388

lbl_800A63A0:
	cmplwi   r4, 4
	mr       r7, r6
	srwi     r5, r4, 2
	li       r6, 0
	blt      lbl_800A640C
	rlwinm.  r3, r5, 0x1d, 3, 0x1f
	slwi     r0, r5, 2
	neg      r0, r0
	mtctr    r3
	beq      lbl_800A63F8

lbl_800A63C8:
	stw      r6, 0(r7)
	stw      r6, 4(r7)
	stw      r6, 8(r7)
	stw      r6, 0xc(r7)
	stw      r6, 0x10(r7)
	stw      r6, 0x14(r7)
	stw      r6, 0x18(r7)
	stw      r6, 0x1c(r7)
	addi     r7, r7, 0x20
	bdnz     lbl_800A63C8
	andi.    r5, r5, 7
	beq      lbl_800A6408

lbl_800A63F8:
	mtctr    r5

lbl_800A63FC:
	stw      r6, 0(r7)
	addi     r7, r7, 4
	bdnz     lbl_800A63FC

lbl_800A6408:
	add      r4, r4, r0

lbl_800A640C:
	cmplwi   r4, 0
	beq      lbl_800A64C8
	mr       r5, r7
	li       r3, 0
	beq      lbl_800A64C8
	rlwinm.  r0, r4, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_800A645C

lbl_800A642C:
	stb      r3, 0(r5)
	stb      r3, 1(r5)
	stb      r3, 2(r5)
	stb      r3, 3(r5)
	stb      r3, 4(r5)
	stb      r3, 5(r5)
	stb      r3, 6(r5)
	stb      r3, 7(r5)
	addi     r5, r5, 8
	bdnz     lbl_800A642C
	andi.    r4, r4, 7
	beq      lbl_800A64C8

lbl_800A645C:
	mtctr    r4

lbl_800A6460:
	stb      r3, 0(r5)
	addi     r5, r5, 1
	bdnz     lbl_800A6460
	b        lbl_800A64C8

lbl_800A6470:
	cmplwi   r4, 0
	li       r3, 0
	beq      lbl_800A64C8
	rlwinm.  r0, r4, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_800A64B8

lbl_800A6488:
	stb      r3, 0(r6)
	stb      r3, 1(r6)
	stb      r3, 2(r6)
	stb      r3, 3(r6)
	stb      r3, 4(r6)
	stb      r3, 5(r6)
	stb      r3, 6(r6)
	stb      r3, 7(r6)
	addi     r6, r6, 8
	bdnz     lbl_800A6488
	andi.    r4, r4, 7
	beq      lbl_800A64C8

lbl_800A64B8:
	mtctr    r4

lbl_800A64BC:
	stb      r3, 0(r6)
	addi     r6, r6, 1
	bdnz     lbl_800A64BC

lbl_800A64C8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void JASCalc::hannWindow(short*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void JASCalc::hammWindow(short*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0004CC
 */
void JASCalc::fft(float*, float*, unsigned long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A64D8
 * Size:	000028
 */
// short JASCalc::clamp<short, long>(long p1)
// {
// 	/*
// 	cmpwi    r3, -32768
// 	bgt      lbl_800A64E8
// 	li       r3, -32768
// 	blr

// lbl_800A64E8:
// 	cmpwi    r3, 0x7fff
// 	li       r0, 0x7fff
// 	bge      lbl_800A64F8
// 	extsh    r0, r3

// lbl_800A64F8:
// 	mr       r3, r0
// 	blr
// 	*/
// }
