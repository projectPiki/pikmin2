#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_pelletBirthBuffer_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483F28
    lbl_80483F28:
        .4byte 0x70656C6C
        .4byte 0x65744269
        .4byte 0x72746842
        .4byte 0x75666665
        .4byte 0x722E6370
        .4byte 0x70000000
    .global lbl_80483F40
    lbl_80483F40:
        .4byte 0x746F6F20
        .4byte 0x6D616E79
        .4byte 0x20626972
        .4byte 0x74686275
        .4byte 0x66666572
        .4byte 0x0A000000

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sArgs__Q24Game17PelletBirthBuffer
    sArgs__Q24Game17PelletBirthBuffer:
        .skip 0x1400

    .section .sbss # 0x80514D80 - 0x80516360
    .global sNum__Q24Game17PelletBirthBuffer
    sNum__Q24Game17PelletBirthBuffer:
        .skip 0x8
*/

namespace Game {

/*
 * --INFO--
 * Address:	8023D41C
 * Size:	00000C
 */
void PelletBirthBuffer::clear(void)
{
	/*
	li       r0, 0
	stw      r0, sNum__Q24Game17PelletBirthBuffer@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023D428
 * Size:	0000F0
 */
void PelletBirthBuffer::entry(Game::PelletInitArg&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, sFromTekiEnable__Q24Game6Pellet@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8023D508
	lbz      r0, 0x16(r3)
	cmplwi   r0, 3
	beq      lbl_8023D454
	cmplwi   r0, 4
	bne      lbl_8023D508

lbl_8023D454:
	lwz      r5, sNum__Q24Game17PelletBirthBuffer@sda21(r13)
	cmpwi    r5, 0x80
	bge      lbl_8023D4EC
	addi     r0, r5, 1
	lis      r4, sArgs__Q24Game17PelletBirthBuffer@ha
	stw      r0, sNum__Q24Game17PelletBirthBuffer@sda21(r13)
	mulli    r5, r5, 0x28
	addi     r4, r4, sArgs__Q24Game17PelletBirthBuffer@l
	lbz      r0, 4(r3)
	add      r4, r4, r5
	stb      r0, 4(r4)
	lwz      r0, 8(r3)
	stw      r0, 8(r4)
	lwz      r0, 0xc(r3)
	stw      r0, 0xc(r4)
	lwz      r0, 0x10(r3)
	stw      r0, 0x10(r4)
	lhz      r0, 0x14(r3)
	sth      r0, 0x14(r4)
	lbz      r0, 0x16(r3)
	stb      r0, 0x16(r4)
	lbz      r0, 0x17(r3)
	stb      r0, 0x17(r4)
	lwz      r0, 0x18(r3)
	stw      r0, 0x18(r4)
	lbz      r0, 0x1c(r3)
	stb      r0, 0x1c(r4)
	lbz      r0, 0x1d(r3)
	stb      r0, 0x1d(r4)
	lbz      r0, 0x1e(r3)
	stb      r0, 0x1e(r4)
	lbz      r0, 0x1f(r3)
	stb      r0, 0x1f(r4)
	lwz      r0, 0x20(r3)
	stw      r0, 0x20(r4)
	lwz      r0, 0x24(r3)
	stw      r0, 0x24(r4)
	b        lbl_8023D508

lbl_8023D4EC:
	lis      r3, lbl_80483F28@ha
	lis      r5, lbl_80483F40@ha
	addi     r3, r3, lbl_80483F28@l
	li       r4, 0x1f
	addi     r5, r5, lbl_80483F40@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023D508:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023D518
 * Size:	0000A0
 */
void PelletBirthBuffer::birthAll(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lbz      r0, sFromTekiEnable__Q24Game6Pellet@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8023D59C
	lis      r3, sArgs__Q24Game17PelletBirthBuffer@ha
	li       r30, 0
	addi     r31, r3, sArgs__Q24Game17PelletBirthBuffer@l
	b        lbl_8023D588

lbl_8023D54C:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	or.      r29, r3, r3
	beq      lbl_8023D580
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	lwz      r3, 0x454(r29)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl

lbl_8023D580:
	addi     r31, r31, 0x28
	addi     r30, r30, 1

lbl_8023D588:
	lwz      r0, sNum__Q24Game17PelletBirthBuffer@sda21(r13)
	cmpw     r30, r0
	blt      lbl_8023D54C
	li       r0, 0
	stw      r0, sNum__Q24Game17PelletBirthBuffer@sda21(r13)

lbl_8023D59C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8023D5B8
 * Size:	00003C
 */
void __sinit_pelletBirthBuffer_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, sArgs__Q24Game17PelletBirthBuffer@ha
	lis      r4, __ct__Q24Game13PelletInitArgFv@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, sArgs__Q24Game17PelletBirthBuffer@l
	li       r5, 0
	addi     r4, r4, __ct__Q24Game13PelletInitArgFv@l
	li       r6, 0x28
	li       r7, 0x80
	bl       __construct_array
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8023D5F4
 * Size:	000058
 */
PelletInitArg::PelletInitArg(void)
{
	/*
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lis      r4, __vt__Q24Game13PelletInitArg@ha
	addi     r0, r5, __vt__Q24Game15CreatureInitArg@l
	li       r6, 0
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q24Game13PelletInitArg@l
	li       r5, 0xff
	li       r4, 1
	stw      r0, 0(r3)
	li       r0, -1
	stb      r6, 0x1c(r3)
	sth      r6, 0x14(r3)
	stb      r5, 0x16(r3)
	stw      r6, 0x18(r3)
	stb      r6, 0x17(r3)
	stb      r4, 4(r3)
	stb      r6, 0x1d(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x20(r3)
	stb      r6, 0x1e(r3)
	stb      r6, 0x1f(r3)
	blr
	*/
}
} // namespace Game
