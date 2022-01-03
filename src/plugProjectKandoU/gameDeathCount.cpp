#include "Game/BirthMgr.h"
#include "Game/DeathMgr.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_gameDeathCount_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804838F0
    lbl_804838F0:
        .4byte 0x42697274
        .4byte 0x68436F75
        .4byte 0x746E6572
        .4byte 0x00000000
    .global lbl_80483900
    lbl_80483900:
        .4byte 0x67616D65
        .4byte 0x44656174
        .4byte 0x68436F75
        .4byte 0x6E742E63
        .4byte 0x70700000
    .global lbl_80483914
    lbl_80483914:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80483920
    lbl_80483920:
        .4byte 0x44656174
        .4byte 0x68436F75
        .4byte 0x746E6572
        .4byte 0x00000000

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global mToday__Q24Game8BirthMgr
    mToday__Q24Game8BirthMgr:
        .skip 0xC0
    .global mCave__Q24Game8BirthMgr
    mCave__Q24Game8BirthMgr:
        .skip 0x1C
    .global mTotal__Q24Game8BirthMgr
    mTotal__Q24Game8BirthMgr:
        .skip 0x1C
    .global mToday__Q24Game8DeathMgr
    mToday__Q24Game8DeathMgr:
        .skip 0x24
    .global mCave__Q24Game8DeathMgr
    mCave__Q24Game8DeathMgr:
        .skip 0x24
    .global mTotal__Q24Game8DeathMgr
    mTotal__Q24Game8DeathMgr:
        .skip 0x24

    .section .sbss # 0x80514D80 - 0x80516360
    .global mSoundDeathCount__Q24Game8DeathMgr
    mSoundDeathCount__Q24Game8DeathMgr:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A368
    lbl_8051A368:
        .4byte 0x0D0A0000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
BirthCounter::BirthCounter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void BirthCounter::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void BirthCounter::operator()(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void BirthCounter::read(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void BirthCounter::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
BirthMgr::BirthMgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022F9FC
 * Size:	000068
 */
void BirthMgr::clear(void)
{
	/*
	li       r0, 0
	lis      r5, mToday__Q24Game8BirthMgr@ha
	stwu     r0, mToday__Q24Game8BirthMgr@l(r5)
	lis      r4, mCave__Q24Game8BirthMgr@ha
	lis      r3, mTotal__Q24Game8BirthMgr@ha
	stwu     r0, mCave__Q24Game8BirthMgr@l(r4)
	stwu     r0, mTotal__Q24Game8BirthMgr@l(r3)
	stw      r0, 4(r5)
	stw      r0, 8(r5)
	stw      r0, 0xc(r5)
	stw      r0, 0x10(r5)
	stw      r0, 0x14(r5)
	stw      r0, 0x18(r5)
	stw      r0, 4(r4)
	stw      r0, 8(r4)
	stw      r0, 0xc(r4)
	stw      r0, 0x10(r4)
	stw      r0, 0x14(r4)
	stw      r0, 0x18(r4)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022FA64
 * Size:	000048
 */
void BirthMgr::inc(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, 0
	stw      r0, 0x14(r1)
	blt      lbl_8022FA9C
	cmpwi    r3, 4
	bgt      lbl_8022FA9C
	lwz      r4, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x48(r4)
	cmplwi   r0, 0
	beq      lbl_8022FA98
	bl       inc_cave__Q24Game8BirthMgrFi
	b        lbl_8022FA9C

lbl_8022FA98:
	bl       inc_today__Q24Game8BirthMgrFi

lbl_8022FA9C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022FAAC
 * Size:	000048
 */
void BirthMgr::dec(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, 0
	stw      r0, 0x14(r1)
	blt      lbl_8022FAE4
	cmpwi    r3, 4
	bgt      lbl_8022FAE4
	lwz      r4, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x48(r4)
	cmplwi   r0, 0
	beq      lbl_8022FAE0
	bl       dec_cave__Q24Game8BirthMgrFi
	b        lbl_8022FAE4

lbl_8022FAE0:
	bl       dec_today__Q24Game8BirthMgrFi

lbl_8022FAE4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022FAF4
 * Size:	0000D0
 */
void BirthMgr::inc_today(int)
{
	/*
	cmpwi    r3, 5
	bne      lbl_8022FB4C
	lis      r4, mToday__Q24Game8BirthMgr@ha
	li       r0, 0
	addi     r5, r4, mToday__Q24Game8BirthMgr@l
	stw      r0, 0x18(r5)
	addi     r6, r5, 0x18
	lwz      r4, 0(r5)
	lwz      r0, 4(r5)
	stw      r4, 0x18(r5)
	add      r4, r4, r0
	lwz      r0, 8(r5)
	stw      r4, 0x18(r5)
	add      r4, r4, r0
	lwz      r0, 0xc(r5)
	stw      r4, 0x18(r5)
	add      r4, r4, r0
	lwz      r0, 0x10(r5)
	stw      r4, 0x18(r5)
	add      r0, r4, r0
	stw      r0, 0x18(r5)
	b        lbl_8022FB5C

lbl_8022FB4C:
	lis      r4, mToday__Q24Game8BirthMgr@ha
	slwi     r5, r3, 2
	addi     r0, r4, mToday__Q24Game8BirthMgr@l
	add      r6, r0, r5

lbl_8022FB5C:
	lwz      r4, 0(r6)
	cmpwi    r3, 5
	addi     r0, r4, 1
	stw      r0, 0(r6)
	beqlr
	lis      r3, mToday__Q24Game8BirthMgr@ha
	li       r0, 0
	addi     r4, r3, mToday__Q24Game8BirthMgr@l
	stw      r0, 0x18(r4)
	lwz      r3, 0(r4)
	lwz      r0, 4(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	stw      r3, 0x18(r4)
	addi     r0, r3, 1
	stw      r0, 0x18(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022FBC4
 * Size:	0000D0
 */
void BirthMgr::inc_cave(int)
{
	/*
	cmpwi    r3, 5
	bne      lbl_8022FC1C
	lis      r4, mCave__Q24Game8BirthMgr@ha
	li       r0, 0
	addi     r5, r4, mCave__Q24Game8BirthMgr@l
	stw      r0, 0x18(r5)
	addi     r6, r5, 0x18
	lwz      r4, 0(r5)
	lwz      r0, 4(r5)
	stw      r4, 0x18(r5)
	add      r4, r4, r0
	lwz      r0, 8(r5)
	stw      r4, 0x18(r5)
	add      r4, r4, r0
	lwz      r0, 0xc(r5)
	stw      r4, 0x18(r5)
	add      r4, r4, r0
	lwz      r0, 0x10(r5)
	stw      r4, 0x18(r5)
	add      r0, r4, r0
	stw      r0, 0x18(r5)
	b        lbl_8022FC2C

lbl_8022FC1C:
	lis      r4, mCave__Q24Game8BirthMgr@ha
	slwi     r5, r3, 2
	addi     r0, r4, mCave__Q24Game8BirthMgr@l
	add      r6, r0, r5

lbl_8022FC2C:
	lwz      r4, 0(r6)
	cmpwi    r3, 5
	addi     r0, r4, 1
	stw      r0, 0(r6)
	beqlr
	lis      r3, mCave__Q24Game8BirthMgr@ha
	li       r0, 0
	addi     r4, r3, mCave__Q24Game8BirthMgr@l
	stw      r0, 0x18(r4)
	lwz      r3, 0(r4)
	lwz      r0, 4(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	stw      r3, 0x18(r4)
	addi     r0, r3, 1
	stw      r0, 0x18(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022FC94
 * Size:	0000D0
 */
void BirthMgr::dec_today(int)
{
	/*
	cmpwi    r3, 5
	bne      lbl_8022FCEC
	lis      r4, mToday__Q24Game8BirthMgr@ha
	li       r0, 0
	addi     r5, r4, mToday__Q24Game8BirthMgr@l
	stw      r0, 0x18(r5)
	addi     r6, r5, 0x18
	lwz      r4, 0(r5)
	lwz      r0, 4(r5)
	stw      r4, 0x18(r5)
	add      r4, r4, r0
	lwz      r0, 8(r5)
	stw      r4, 0x18(r5)
	add      r4, r4, r0
	lwz      r0, 0xc(r5)
	stw      r4, 0x18(r5)
	add      r4, r4, r0
	lwz      r0, 0x10(r5)
	stw      r4, 0x18(r5)
	add      r0, r4, r0
	stw      r0, 0x18(r5)
	b        lbl_8022FCFC

lbl_8022FCEC:
	lis      r4, mToday__Q24Game8BirthMgr@ha
	slwi     r5, r3, 2
	addi     r0, r4, mToday__Q24Game8BirthMgr@l
	add      r6, r0, r5

lbl_8022FCFC:
	lwz      r4, 0(r6)
	cmpwi    r3, 5
	addi     r0, r4, -1
	stw      r0, 0(r6)
	beqlr
	lis      r3, mToday__Q24Game8BirthMgr@ha
	li       r0, 0
	addi     r4, r3, mToday__Q24Game8BirthMgr@l
	stw      r0, 0x18(r4)
	lwz      r3, 0(r4)
	lwz      r0, 4(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	stw      r3, 0x18(r4)
	addi     r0, r3, -1
	stw      r0, 0x18(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022FD64
 * Size:	0000D0
 */
void BirthMgr::dec_cave(int)
{
	/*
	cmpwi    r3, 5
	bne      lbl_8022FDBC
	lis      r4, mCave__Q24Game8BirthMgr@ha
	li       r0, 0
	addi     r5, r4, mCave__Q24Game8BirthMgr@l
	stw      r0, 0x18(r5)
	addi     r6, r5, 0x18
	lwz      r4, 0(r5)
	lwz      r0, 4(r5)
	stw      r4, 0x18(r5)
	add      r4, r4, r0
	lwz      r0, 8(r5)
	stw      r4, 0x18(r5)
	add      r4, r4, r0
	lwz      r0, 0xc(r5)
	stw      r4, 0x18(r5)
	add      r4, r4, r0
	lwz      r0, 0x10(r5)
	stw      r4, 0x18(r5)
	add      r0, r4, r0
	stw      r0, 0x18(r5)
	b        lbl_8022FDCC

lbl_8022FDBC:
	lis      r4, mCave__Q24Game8BirthMgr@ha
	slwi     r5, r3, 2
	addi     r0, r4, mCave__Q24Game8BirthMgr@l
	add      r6, r0, r5

lbl_8022FDCC:
	lwz      r4, 0(r6)
	cmpwi    r3, 5
	addi     r0, r4, -1
	stw      r0, 0(r6)
	beqlr
	lis      r3, mCave__Q24Game8BirthMgr@ha
	li       r0, 0
	addi     r4, r3, mCave__Q24Game8BirthMgr@l
	stw      r0, 0x18(r4)
	lwz      r3, 0(r4)
	lwz      r0, 4(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	stw      r3, 0x18(r4)
	addi     r0, r3, -1
	stw      r0, 0x18(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022FE34
 * Size:	000140
 */
void BirthMgr::account_cave(void)
{
	/*
	stwu     r1, -0x10(r1)
	lis      r3, mCave__Q24Game8BirthMgr@ha
	addi     r3, r3, mCave__Q24Game8BirthMgr@l
	lis      r4, mToday__Q24Game8BirthMgr@ha
	addi     r4, r4, mToday__Q24Game8BirthMgr@l
	li       r0, 6
	stw      r31, 0xc(r1)
	li       r10, 0
	addi     r9, r3, 0x18
	mr       r7, r3
	mr       r6, r4
	addi     r8, r4, 0x18
	mtctr    r0

lbl_8022FE68:
	cmpwi    r10, 5
	bne      lbl_8022FEC0
	li       r0, 0
	lis      r5, mToday__Q24Game8BirthMgr@ha
	addi     r12, r5, mToday__Q24Game8BirthMgr@l
	stw      r0, 0(r8)
	lwz      r11, 0(r4)
	mr       r5, r8
	lwz      r0, 4(r12)
	stw      r11, 0(r8)
	add      r11, r11, r0
	lwz      r0, 8(r12)
	stw      r11, 0(r8)
	add      r11, r11, r0
	lwz      r0, 0xc(r12)
	stw      r11, 0(r8)
	add      r11, r11, r0
	lwz      r0, 0x10(r12)
	stw      r11, 0(r8)
	add      r0, r11, r0
	stw      r0, 0(r8)
	b        lbl_8022FEC4

lbl_8022FEC0:
	mr       r5, r6

lbl_8022FEC4:
	cmpwi    r10, 5
	bne      lbl_8022FF1C
	li       r0, 0
	lis      r11, mCave__Q24Game8BirthMgr@ha
	addi     r12, r11, mCave__Q24Game8BirthMgr@l
	stw      r0, 0(r9)
	lwz      r11, 0(r3)
	mr       r31, r9
	lwz      r0, 4(r12)
	stw      r11, 0(r9)
	add      r11, r11, r0
	lwz      r0, 8(r12)
	stw      r11, 0(r9)
	add      r11, r11, r0
	lwz      r0, 0xc(r12)
	stw      r11, 0(r9)
	add      r11, r11, r0
	lwz      r0, 0x10(r12)
	stw      r11, 0(r9)
	add      r0, r11, r0
	stw      r0, 0(r9)
	b        lbl_8022FF20

lbl_8022FF1C:
	mr       r31, r7

lbl_8022FF20:
	lwz      r11, 0(r5)
	addi     r6, r6, 4
	lwz      r0, 0(r31)
	addi     r7, r7, 4
	addi     r10, r10, 1
	add      r0, r11, r0
	stw      r0, 0(r5)
	bdnz     lbl_8022FE68
	lis      r4, mCave__Q24Game8BirthMgr@ha
	li       r0, 0
	addi     r4, r4, mCave__Q24Game8BirthMgr@l
	stw      r0, 0(r3)
	stw      r0, 4(r4)
	stw      r0, 8(r4)
	stw      r0, 0xc(r4)
	stw      r0, 0x10(r4)
	stw      r0, 0x14(r4)
	stw      r0, 0(r9)
	lwz      r31, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022FF74
 * Size:	0002B4
 */
void BirthMgr::account_today_adjust(void)
{
	/*
	stwu     r1, -0x10(r1)
	lis      r4, mToday__Q24Game8BirthMgr@ha
	addi     r8, r4, mToday__Q24Game8BirthMgr@l
	lis      r3, mTotal__Q24Game8BirthMgr@ha
	addi     r3, r3, mTotal__Q24Game8BirthMgr@l
	li       r0, 5
	stw      r31, 0xc(r1)
	li       r10, 0
	addi     r9, r8, 0x18
	mr       r5, r8
	mr       r6, r3
	addi     r7, r3, 0x18
	mtctr    r0

lbl_8022FFA8:
	cmpwi    r10, 5
	bne      lbl_80230000
	li       r0, 0
	lis      r4, mToday__Q24Game8BirthMgr@ha
	addi     r11, r4, mToday__Q24Game8BirthMgr@l
	stw      r0, 0(r9)
	lwz      r4, 0(r8)
	mr       r12, r9
	lwz      r0, 4(r11)
	stw      r4, 0(r9)
	add      r4, r4, r0
	lwz      r0, 8(r11)
	stw      r4, 0(r9)
	add      r4, r4, r0
	lwz      r0, 0xc(r11)
	stw      r4, 0(r9)
	add      r4, r4, r0
	lwz      r0, 0x10(r11)
	stw      r4, 0(r9)
	add      r0, r4, r0
	stw      r0, 0(r9)
	b        lbl_80230004

lbl_80230000:
	mr       r12, r5

lbl_80230004:
	lwz      r0, 0(r12)
	cmpwi    r0, 0
	bge      lbl_8023013C
	cmpwi    r10, 5
	bne      lbl_80230068
	li       r0, 0
	lis      r4, mTotal__Q24Game8BirthMgr@ha
	addi     r12, r4, mTotal__Q24Game8BirthMgr@l
	stw      r0, 0(r7)
	lwz      r11, 0(r3)
	mr       r4, r7
	lwz      r0, 4(r12)
	stw      r11, 0(r7)
	add      r11, r11, r0
	lwz      r0, 8(r12)
	stw      r11, 0(r7)
	add      r11, r11, r0
	lwz      r0, 0xc(r12)
	stw      r11, 0(r7)
	add      r11, r11, r0
	lwz      r0, 0x10(r12)
	stw      r11, 0(r7)
	add      r0, r11, r0
	stw      r0, 0(r7)
	b        lbl_8023006C

lbl_80230068:
	mr       r4, r6

lbl_8023006C:
	cmpwi    r10, 5
	bne      lbl_802300C4
	li       r0, 0
	lis      r11, mToday__Q24Game8BirthMgr@ha
	addi     r12, r11, mToday__Q24Game8BirthMgr@l
	stw      r0, 0(r9)
	lwz      r11, 0(r8)
	mr       r31, r9
	lwz      r0, 4(r12)
	stw      r11, 0(r9)
	add      r11, r11, r0
	lwz      r0, 8(r12)
	stw      r11, 0(r9)
	add      r11, r11, r0
	lwz      r0, 0xc(r12)
	stw      r11, 0(r9)
	add      r11, r11, r0
	lwz      r0, 0x10(r12)
	stw      r11, 0(r9)
	add      r0, r11, r0
	stw      r0, 0(r9)
	b        lbl_802300C8

lbl_802300C4:
	mr       r31, r5

lbl_802300C8:
	lwz      r11, 0(r4)
	cmpwi    r10, 5
	lwz      r0, 0(r31)
	add      r0, r11, r0
	stw      r0, 0(r4)
	bne      lbl_80230130
	li       r0, 0
	lis      r4, mToday__Q24Game8BirthMgr@ha
	addi     r11, r4, mToday__Q24Game8BirthMgr@l
	stw      r0, 0(r9)
	lwz      r4, 0(r8)
	mr       r12, r9
	lwz      r0, 4(r11)
	stw      r4, 0(r9)
	add      r4, r4, r0
	lwz      r0, 8(r11)
	stw      r4, 0(r9)
	add      r4, r4, r0
	lwz      r0, 0xc(r11)
	stw      r4, 0(r9)
	add      r4, r4, r0
	lwz      r0, 0x10(r11)
	stw      r4, 0(r9)
	add      r0, r4, r0
	stw      r0, 0(r9)
	b        lbl_80230134

lbl_80230130:
	mr       r12, r5

lbl_80230134:
	li       r0, 0
	stw      r0, 0(r12)

lbl_8023013C:
	addi     r5, r5, 4
	addi     r6, r6, 4
	addi     r10, r10, 1
	bdnz     lbl_8022FFA8
	li       r3, 5
	mr       r7, r8
	li       r0, 0
	li       r10, 0
	mtctr    r3

lbl_80230160:
	cmpwi    r10, 5
	bne      lbl_802301B8
	li       r4, 0
	lis      r3, mToday__Q24Game8BirthMgr@ha
	addi     r5, r3, mToday__Q24Game8BirthMgr@l
	stw      r4, 0(r9)
	lwz      r4, 0(r8)
	mr       r6, r9
	lwz      r3, 4(r5)
	stw      r4, 0(r9)
	add      r4, r4, r3
	lwz      r3, 8(r5)
	stw      r4, 0(r9)
	add      r4, r4, r3
	lwz      r3, 0xc(r5)
	stw      r4, 0(r9)
	add      r4, r4, r3
	lwz      r3, 0x10(r5)
	stw      r4, 0(r9)
	add      r3, r4, r3
	stw      r3, 0(r9)
	b        lbl_802301BC

lbl_802301B8:
	mr       r6, r7

lbl_802301BC:
	lwz      r3, 0(r6)
	addi     r7, r7, 4
	addi     r10, r10, 1
	add      r0, r0, r3
	bdnz     lbl_80230160
	li       r4, 0
	lis      r3, mToday__Q24Game8BirthMgr@ha
	addi     r5, r3, mToday__Q24Game8BirthMgr@l
	stw      r4, 0(r9)
	lwz      r4, 0(r8)
	lwz      r3, 4(r5)
	stw      r4, 0(r9)
	add      r4, r4, r3
	lwz      r3, 8(r5)
	stw      r4, 0(r9)
	add      r4, r4, r3
	lwz      r3, 0xc(r5)
	stw      r4, 0(r9)
	add      r4, r4, r3
	lwz      r3, 0x10(r5)
	stw      r4, 0(r9)
	add      r3, r4, r3
	stw      r3, 0(r9)
	stw      r0, 0(r9)
	lwz      r31, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80230228
 * Size:	000204
 */
void BirthMgr::account_today(void)
{
	/*
	stwu     r1, -0x10(r1)
	lis      r4, mTotal__Q24Game8BirthMgr@ha
	addi     r7, r4, mTotal__Q24Game8BirthMgr@l
	lis      r3, mToday__Q24Game8BirthMgr@ha
	addi     r3, r3, mToday__Q24Game8BirthMgr@l
	li       r0, 6
	stw      r31, 0xc(r1)
	li       r10, 0
	addi     r8, r7, 0x18
	addi     r9, r3, 0x18
	mr       r5, r7
	mr       r6, r3
	mtctr    r0

lbl_8023025C:
	cmpwi    r10, 5
	bne      lbl_802302B4
	li       r0, 0
	lis      r4, mTotal__Q24Game8BirthMgr@ha
	addi     r12, r4, mTotal__Q24Game8BirthMgr@l
	stw      r0, 0(r8)
	lwz      r11, 0(r7)
	mr       r4, r8
	lwz      r0, 4(r12)
	stw      r11, 0(r8)
	add      r11, r11, r0
	lwz      r0, 8(r12)
	stw      r11, 0(r8)
	add      r11, r11, r0
	lwz      r0, 0xc(r12)
	stw      r11, 0(r8)
	add      r11, r11, r0
	lwz      r0, 0x10(r12)
	stw      r11, 0(r8)
	add      r0, r11, r0
	stw      r0, 0(r8)
	b        lbl_802302B8

lbl_802302B4:
	mr       r4, r5

lbl_802302B8:
	cmpwi    r10, 5
	bne      lbl_80230310
	li       r0, 0
	lis      r11, mToday__Q24Game8BirthMgr@ha
	addi     r12, r11, mToday__Q24Game8BirthMgr@l
	stw      r0, 0(r9)
	lwz      r11, 0(r3)
	mr       r31, r9
	lwz      r0, 4(r12)
	stw      r11, 0(r9)
	add      r11, r11, r0
	lwz      r0, 8(r12)
	stw      r11, 0(r9)
	add      r11, r11, r0
	lwz      r0, 0xc(r12)
	stw      r11, 0(r9)
	add      r11, r11, r0
	lwz      r0, 0x10(r12)
	stw      r11, 0(r9)
	add      r0, r11, r0
	stw      r0, 0(r9)
	b        lbl_80230314

lbl_80230310:
	mr       r31, r6

lbl_80230314:
	lwz      r11, 0(r4)
	addi     r5, r5, 4
	lwz      r0, 0(r31)
	addi     r6, r6, 4
	addi     r10, r10, 1
	add      r0, r11, r0
	stw      r0, 0(r4)
	bdnz     lbl_8023025C
	li       r4, 5
	mr       r11, r7
	li       r0, 0
	li       r12, 0
	mtctr    r4

lbl_80230348:
	cmpwi    r12, 5
	bne      lbl_802303A0
	li       r5, 0
	lis      r4, mTotal__Q24Game8BirthMgr@ha
	addi     r6, r4, mTotal__Q24Game8BirthMgr@l
	stw      r5, 0(r8)
	lwz      r5, 0(r7)
	mr       r10, r8
	lwz      r4, 4(r6)
	stw      r5, 0(r8)
	add      r5, r5, r4
	lwz      r4, 8(r6)
	stw      r5, 0(r8)
	add      r5, r5, r4
	lwz      r4, 0xc(r6)
	stw      r5, 0(r8)
	add      r5, r5, r4
	lwz      r4, 0x10(r6)
	stw      r5, 0(r8)
	add      r4, r5, r4
	stw      r4, 0(r8)
	b        lbl_802303A4

lbl_802303A0:
	mr       r10, r11

lbl_802303A4:
	lwz      r4, 0(r10)
	addi     r11, r11, 4
	addi     r12, r12, 1
	add      r0, r0, r4
	bdnz     lbl_80230348
	li       r10, 0
	lis      r4, mToday__Q24Game8BirthMgr@ha
	addi     r8, r4, mToday__Q24Game8BirthMgr@l
	lwz      r6, 0(r3)
	lwz      r5, 4(r8)
	stw      r10, 0(r9)
	lwz      r4, 8(r8)
	add      r7, r6, r5
	stw      r6, 0(r9)
	lwz      r5, 0xc(r8)
	add      r6, r7, r4
	stw      r7, 0(r9)
	lwz      r4, 0x10(r8)
	add      r5, r6, r5
	stw      r6, 0(r9)
	add      r4, r5, r4
	stw      r5, 0(r9)
	stw      r4, 0(r9)
	stw      r0, 0(r9)
	stw      r10, 0(r3)
	stw      r10, 4(r8)
	stw      r10, 8(r8)
	stw      r10, 0xc(r8)
	stw      r10, 0x10(r8)
	stw      r10, 0x14(r8)
	stw      r10, 0(r9)
	lwz      r31, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void BirthMgr::get_cave(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void BirthMgr::get_today(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023042C
 * Size:	000070
 */
void BirthMgr::get_total(int)
{
	/*
	cmpwi    r3, 5
	bne      lbl_80230484
	lis      r3, mTotal__Q24Game8BirthMgr@ha
	li       r0, 0
	addi     r4, r3, mTotal__Q24Game8BirthMgr@l
	stw      r0, 0x18(r4)
	addi     r5, r4, 0x18
	lwz      r3, 0(r4)
	lwz      r0, 4(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0x18(r4)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0x18(r4)
	add      r0, r3, r0
	stw      r0, 0x18(r4)
	b        lbl_80230494

lbl_80230484:
	lis      r4, mTotal__Q24Game8BirthMgr@ha
	slwi     r3, r3, 2
	addi     r0, r4, mTotal__Q24Game8BirthMgr@l
	add      r5, r0, r3

lbl_80230494:
	lwz      r3, 0(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023049C
 * Size:	0000B0
 */
void BirthMgr::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, mCave__Q24Game8BirthMgr@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	addi     r30, r4, mCave__Q24Game8BirthMgr@l
	stw      r29, 0x14(r1)
	mr       r29, r3

lbl_802304C4:
	mr       r3, r29
	bl       readInt__6StreamFv
	addi     r31, r31, 1
	stw      r3, 0(r30)
	cmpwi    r31, 6
	addi     r30, r30, 4
	blt      lbl_802304C4
	lis      r3, mToday__Q24Game8BirthMgr@ha
	li       r31, 0
	addi     r30, r3, mToday__Q24Game8BirthMgr@l

lbl_802304EC:
	mr       r3, r29
	bl       readInt__6StreamFv
	addi     r31, r31, 1
	stw      r3, 0(r30)
	cmpwi    r31, 6
	addi     r30, r30, 4
	blt      lbl_802304EC
	lis      r3, mTotal__Q24Game8BirthMgr@ha
	li       r31, 0
	addi     r30, r3, mTotal__Q24Game8BirthMgr@l

lbl_80230514:
	mr       r3, r29
	bl       readInt__6StreamFv
	addi     r31, r31, 1
	stw      r3, 0(r30)
	cmpwi    r31, 6
	addi     r30, r30, 4
	blt      lbl_80230514
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023054C
 * Size:	000148
 */
void BirthMgr::write(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_804838F0@ha
	stw      r0, 0x24(r1)
	addi     r4, r4, lbl_804838F0@l
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	bl       textBeginGroup__6StreamFPc
	lis      r3, mCave__Q24Game8BirthMgr@ha
	li       r30, 0
	addi     r29, r3, mCave__Q24Game8BirthMgr@l

lbl_80230580:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0(r29)
	mr       r3, r31
	bl       writeInt__6StreamFi
	mr       r3, r31
	addi     r4, r2, lbl_8051A368@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r30, r30, 1
	addi     r29, r29, 4
	cmpwi    r30, 6
	blt      lbl_80230580
	mr       r3, r31
	bl       textEndGroup__6StreamFv
	lis      r4, lbl_804838F0@ha
	mr       r3, r31
	addi     r4, r4, lbl_804838F0@l
	bl       textBeginGroup__6StreamFPc
	lis      r3, mToday__Q24Game8BirthMgr@ha
	li       r30, 0
	addi     r29, r3, mToday__Q24Game8BirthMgr@l

lbl_802305DC:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0(r29)
	mr       r3, r31
	bl       writeInt__6StreamFi
	mr       r3, r31
	addi     r4, r2, lbl_8051A368@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r30, r30, 1
	addi     r29, r29, 4
	cmpwi    r30, 6
	blt      lbl_802305DC
	mr       r3, r31
	bl       textEndGroup__6StreamFv
	lis      r4, lbl_804838F0@ha
	mr       r3, r31
	addi     r4, r4, lbl_804838F0@l
	bl       textBeginGroup__6StreamFPc
	lis      r3, mTotal__Q24Game8BirthMgr@ha
	li       r30, 0
	addi     r29, r3, mTotal__Q24Game8BirthMgr@l

lbl_80230638:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0(r29)
	mr       r3, r31
	bl       writeInt__6StreamFi
	mr       r3, r31
	addi     r4, r2, lbl_8051A368@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r30, r30, 1
	addi     r29, r29, 4
	cmpwi    r30, 6
	blt      lbl_80230638
	mr       r3, r31
	bl       textEndGroup__6StreamFv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
DeathCounter::DeathCounter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void DeathCounter::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void DeathCounter::operator()(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void DeathCounter::read(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void DeathCounter::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
DeathMgr::DeathMgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80230694
 * Size:	000084
 */
void DeathMgr::clear(void)
{
	/*
	li       r0, 0
	lis      r5, mToday__Q24Game8DeathMgr@ha
	stwu     r0, mToday__Q24Game8DeathMgr@l(r5)
	lis      r4, mCave__Q24Game8DeathMgr@ha
	lis      r3, mTotal__Q24Game8DeathMgr@ha
	stwu     r0, mCave__Q24Game8DeathMgr@l(r4)
	stwu     r0, mTotal__Q24Game8DeathMgr@l(r3)
	stw      r0, 4(r5)
	stw      r0, 8(r5)
	stw      r0, 0xc(r5)
	stw      r0, 0x10(r5)
	stw      r0, 0x14(r5)
	stw      r0, 0x18(r5)
	stw      r0, 0x1c(r5)
	stw      r0, 0x20(r5)
	stw      r0, 4(r4)
	stw      r0, 8(r4)
	stw      r0, 0xc(r4)
	stw      r0, 0x10(r4)
	stw      r0, 0x14(r4)
	stw      r0, 0x18(r4)
	stw      r0, 0x1c(r4)
	stw      r0, 0x20(r4)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0x20(r3)
	stw      r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80230718
 * Size:	00005C
 */
void DeathMgr::inc(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8023074C
	lbz      r0, 0x3c(r4)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8023074C
	cmpwi    r3, 1
	beq      lbl_8023074C
	cmpwi    r3, 7
	bne      lbl_80230764

lbl_8023074C:
	lbz      r0, 0x48(r4)
	cmplwi   r0, 0
	beq      lbl_80230760
	bl       inc_cave__Q24Game8DeathMgrFi
	b        lbl_80230764

lbl_80230760:
	bl       inc_today__Q24Game8DeathMgrFi

lbl_80230764:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80230774
 * Size:	0000FC
 */
void DeathMgr::inc_today(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	cmpwi    r31, 7
	bne      lbl_802307F8
	lis      r3, mToday__Q24Game8DeathMgr@ha
	li       r0, 0
	addi     r4, r3, mToday__Q24Game8DeathMgr@l
	stw      r0, 0x20(r4)
	addi     r5, r4, 0x20
	lwz      r3, 0(r4)
	lwz      r0, 4(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x14(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x18(r4)
	stw      r3, 0x20(r4)
	add      r0, r3, r0
	stw      r0, 0x20(r4)
	b        lbl_80230844

lbl_802307F8:
	cmpwi    r31, 0
	li       r0, 0
	blt      lbl_80230810
	cmpwi    r31, 7
	bgt      lbl_80230810
	li       r0, 1

lbl_80230810:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80230834
	lis      r3, lbl_80483900@ha
	lis      r5, lbl_80483914@ha
	addi     r3, r3, lbl_80483900@l
	li       r4, 0x152
	addi     r5, r5, lbl_80483914@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80230834:
	lis      r3, mToday__Q24Game8DeathMgr@ha
	slwi     r4, r31, 2
	addi     r0, r3, mToday__Q24Game8DeathMgr@l
	add      r5, r0, r4

lbl_80230844:
	lwz      r4, 0(r5)
	lwz      r3, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
	addi     r4, r4, 1
	addi     r0, r3, 1
	stw      r4, 0(r5)
	stw      r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80230870
 * Size:	0000FC
 */
void DeathMgr::inc_cave(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	cmpwi    r31, 7
	bne      lbl_802308F4
	lis      r3, mCave__Q24Game8DeathMgr@ha
	li       r0, 0
	addi     r4, r3, mCave__Q24Game8DeathMgr@l
	stw      r0, 0x20(r4)
	addi     r5, r4, 0x20
	lwz      r3, 0(r4)
	lwz      r0, 4(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x14(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x18(r4)
	stw      r3, 0x20(r4)
	add      r0, r3, r0
	stw      r0, 0x20(r4)
	b        lbl_80230940

lbl_802308F4:
	cmpwi    r31, 0
	li       r0, 0
	blt      lbl_8023090C
	cmpwi    r31, 7
	bgt      lbl_8023090C
	li       r0, 1

lbl_8023090C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80230930
	lis      r3, lbl_80483900@ha
	lis      r5, lbl_80483914@ha
	addi     r3, r3, lbl_80483900@l
	li       r4, 0x152
	addi     r5, r5, lbl_80483914@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80230930:
	lis      r3, mCave__Q24Game8DeathMgr@ha
	slwi     r4, r31, 2
	addi     r0, r3, mCave__Q24Game8DeathMgr@l
	add      r5, r0, r4

lbl_80230940:
	lwz      r4, 0(r5)
	lwz      r3, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
	addi     r4, r4, 1
	addi     r0, r3, 1
	stw      r4, 0(r5)
	stw      r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023096C
 * Size:	0001FC
 */
void DeathMgr::account_cave(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r3, mCave__Q24Game8DeathMgr@ha
	lis      r4, mToday__Q24Game8DeathMgr@ha
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	addi     r31, r3, mCave__Q24Game8DeathMgr@l
	addi     r30, r4, mToday__Q24Game8DeathMgr@l
	li       r24, 0
	addi     r25, r31, 0x20
	mr       r27, r31
	mr       r28, r30
	addi     r26, r30, 0x20

lbl_802309A0:
	cmpwi    r24, 7
	bne      lbl_80230A10
	li       r0, 0
	lis      r3, mToday__Q24Game8DeathMgr@ha
	addi     r4, r3, mToday__Q24Game8DeathMgr@l
	stw      r0, 0(r26)
	lwz      r3, 0(r30)
	mr       r29, r26
	lwz      r0, 4(r4)
	stw      r3, 0(r26)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0(r26)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0(r26)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0(r26)
	add      r3, r3, r0
	lwz      r0, 0x14(r4)
	stw      r3, 0(r26)
	add      r3, r3, r0
	lwz      r0, 0x18(r4)
	stw      r3, 0(r26)
	add      r0, r3, r0
	stw      r0, 0(r26)
	b        lbl_80230A50

lbl_80230A10:
	cmpwi    r24, 0
	li       r0, 0
	blt      lbl_80230A28
	cmpwi    r24, 7
	bgt      lbl_80230A28
	li       r0, 1

lbl_80230A28:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80230A4C
	lis      r3, lbl_80483900@ha
	lis      r5, lbl_80483914@ha
	addi     r3, r3, lbl_80483900@l
	li       r4, 0x152
	addi     r5, r5, lbl_80483914@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80230A4C:
	mr       r29, r28

lbl_80230A50:
	cmpwi    r24, 7
	bne      lbl_80230AC0
	li       r0, 0
	lis      r3, mCave__Q24Game8DeathMgr@ha
	addi     r4, r3, mCave__Q24Game8DeathMgr@l
	stw      r0, 0(r25)
	lwz      r3, 0(r31)
	mr       r5, r25
	lwz      r0, 4(r4)
	stw      r3, 0(r25)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0(r25)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0(r25)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0(r25)
	add      r3, r3, r0
	lwz      r0, 0x14(r4)
	stw      r3, 0(r25)
	add      r3, r3, r0
	lwz      r0, 0x18(r4)
	stw      r3, 0(r25)
	add      r0, r3, r0
	stw      r0, 0(r25)
	b        lbl_80230B00

lbl_80230AC0:
	cmpwi    r24, 0
	li       r0, 0
	blt      lbl_80230AD8
	cmpwi    r24, 7
	bgt      lbl_80230AD8
	li       r0, 1

lbl_80230AD8:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80230AFC
	lis      r3, lbl_80483900@ha
	lis      r5, lbl_80483914@ha
	addi     r3, r3, lbl_80483900@l
	li       r4, 0x152
	addi     r5, r5, lbl_80483914@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80230AFC:
	mr       r5, r27

lbl_80230B00:
	lwz      r3, 0(r29)
	addi     r24, r24, 1
	lwz      r0, 0(r5)
	cmpwi    r24, 8
	addi     r28, r28, 4
	addi     r27, r27, 4
	add      r0, r3, r0
	stw      r0, 0(r29)
	blt      lbl_802309A0
	lis      r3, mCave__Q24Game8DeathMgr@ha
	li       r0, 0
	addi     r3, r3, mCave__Q24Game8DeathMgr@l
	stw      r0, 0(r31)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0(r25)
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80230B68
 * Size:	0001FC
 */
void DeathMgr::account_today(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r3, mToday__Q24Game8DeathMgr@ha
	lis      r4, mTotal__Q24Game8DeathMgr@ha
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	addi     r31, r3, mToday__Q24Game8DeathMgr@l
	addi     r30, r4, mTotal__Q24Game8DeathMgr@l
	li       r24, 0
	addi     r25, r31, 0x20
	mr       r27, r31
	mr       r28, r30
	addi     r26, r30, 0x20

lbl_80230B9C:
	cmpwi    r24, 7
	bne      lbl_80230C0C
	li       r0, 0
	lis      r3, mTotal__Q24Game8DeathMgr@ha
	addi     r4, r3, mTotal__Q24Game8DeathMgr@l
	stw      r0, 0(r26)
	lwz      r3, 0(r30)
	mr       r29, r26
	lwz      r0, 4(r4)
	stw      r3, 0(r26)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0(r26)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0(r26)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0(r26)
	add      r3, r3, r0
	lwz      r0, 0x14(r4)
	stw      r3, 0(r26)
	add      r3, r3, r0
	lwz      r0, 0x18(r4)
	stw      r3, 0(r26)
	add      r0, r3, r0
	stw      r0, 0(r26)
	b        lbl_80230C4C

lbl_80230C0C:
	cmpwi    r24, 0
	li       r0, 0
	blt      lbl_80230C24
	cmpwi    r24, 7
	bgt      lbl_80230C24
	li       r0, 1

lbl_80230C24:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80230C48
	lis      r3, lbl_80483900@ha
	lis      r5, lbl_80483914@ha
	addi     r3, r3, lbl_80483900@l
	li       r4, 0x152
	addi     r5, r5, lbl_80483914@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80230C48:
	mr       r29, r28

lbl_80230C4C:
	cmpwi    r24, 7
	bne      lbl_80230CBC
	li       r0, 0
	lis      r3, mToday__Q24Game8DeathMgr@ha
	addi     r4, r3, mToday__Q24Game8DeathMgr@l
	stw      r0, 0(r25)
	lwz      r3, 0(r31)
	mr       r5, r25
	lwz      r0, 4(r4)
	stw      r3, 0(r25)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0(r25)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0(r25)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0(r25)
	add      r3, r3, r0
	lwz      r0, 0x14(r4)
	stw      r3, 0(r25)
	add      r3, r3, r0
	lwz      r0, 0x18(r4)
	stw      r3, 0(r25)
	add      r0, r3, r0
	stw      r0, 0(r25)
	b        lbl_80230CFC

lbl_80230CBC:
	cmpwi    r24, 0
	li       r0, 0
	blt      lbl_80230CD4
	cmpwi    r24, 7
	bgt      lbl_80230CD4
	li       r0, 1

lbl_80230CD4:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80230CF8
	lis      r3, lbl_80483900@ha
	lis      r5, lbl_80483914@ha
	addi     r3, r3, lbl_80483900@l
	li       r4, 0x152
	addi     r5, r5, lbl_80483914@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80230CF8:
	mr       r5, r27

lbl_80230CFC:
	lwz      r3, 0(r29)
	addi     r24, r24, 1
	lwz      r0, 0(r5)
	cmpwi    r24, 8
	addi     r28, r28, 4
	addi     r27, r27, 4
	add      r0, r3, r0
	stw      r0, 0(r29)
	blt      lbl_80230B9C
	lis      r3, mToday__Q24Game8DeathMgr@ha
	li       r0, 0
	addi     r3, r3, mToday__Q24Game8DeathMgr@l
	stw      r0, 0(r31)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0(r25)
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80230D64
 * Size:	0000E8
 */
void DeathMgr::get_cave(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	cmpwi    r31, 7
	bne      lbl_80230DE8
	lis      r3, mCave__Q24Game8DeathMgr@ha
	li       r0, 0
	addi     r4, r3, mCave__Q24Game8DeathMgr@l
	stw      r0, 0x20(r4)
	addi     r5, r4, 0x20
	lwz      r3, 0(r4)
	lwz      r0, 4(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x14(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x18(r4)
	stw      r3, 0x20(r4)
	add      r0, r3, r0
	stw      r0, 0x20(r4)
	b        lbl_80230E34

lbl_80230DE8:
	cmpwi    r31, 0
	li       r0, 0
	blt      lbl_80230E00
	cmpwi    r31, 7
	bgt      lbl_80230E00
	li       r0, 1

lbl_80230E00:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80230E24
	lis      r3, lbl_80483900@ha
	lis      r5, lbl_80483914@ha
	addi     r3, r3, lbl_80483900@l
	li       r4, 0x152
	addi     r5, r5, lbl_80483914@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80230E24:
	lis      r3, mCave__Q24Game8DeathMgr@ha
	slwi     r4, r31, 2
	addi     r0, r3, mCave__Q24Game8DeathMgr@l
	add      r5, r0, r4

lbl_80230E34:
	lwz      r0, 0x14(r1)
	lwz      r3, 0(r5)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80230E4C
 * Size:	0000E8
 */
void DeathMgr::get_today(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	cmpwi    r31, 7
	bne      lbl_80230ED0
	lis      r3, mToday__Q24Game8DeathMgr@ha
	li       r0, 0
	addi     r4, r3, mToday__Q24Game8DeathMgr@l
	stw      r0, 0x20(r4)
	addi     r5, r4, 0x20
	lwz      r3, 0(r4)
	lwz      r0, 4(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x14(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x18(r4)
	stw      r3, 0x20(r4)
	add      r0, r3, r0
	stw      r0, 0x20(r4)
	b        lbl_80230F1C

lbl_80230ED0:
	cmpwi    r31, 0
	li       r0, 0
	blt      lbl_80230EE8
	cmpwi    r31, 7
	bgt      lbl_80230EE8
	li       r0, 1

lbl_80230EE8:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80230F0C
	lis      r3, lbl_80483900@ha
	lis      r5, lbl_80483914@ha
	addi     r3, r3, lbl_80483900@l
	li       r4, 0x152
	addi     r5, r5, lbl_80483914@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80230F0C:
	lis      r3, mToday__Q24Game8DeathMgr@ha
	slwi     r4, r31, 2
	addi     r0, r3, mToday__Q24Game8DeathMgr@l
	add      r5, r0, r4

lbl_80230F1C:
	lwz      r0, 0x14(r1)
	lwz      r3, 0(r5)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80230F34
 * Size:	0000E8
 */
void DeathMgr::get_total(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	cmpwi    r31, 7
	bne      lbl_80230FB8
	lis      r3, mTotal__Q24Game8DeathMgr@ha
	li       r0, 0
	addi     r4, r3, mTotal__Q24Game8DeathMgr@l
	stw      r0, 0x20(r4)
	addi     r5, r4, 0x20
	lwz      r3, 0(r4)
	lwz      r0, 4(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 8(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0xc(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x10(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x14(r4)
	stw      r3, 0x20(r4)
	add      r3, r3, r0
	lwz      r0, 0x18(r4)
	stw      r3, 0x20(r4)
	add      r0, r3, r0
	stw      r0, 0x20(r4)
	b        lbl_80231004

lbl_80230FB8:
	cmpwi    r31, 0
	li       r0, 0
	blt      lbl_80230FD0
	cmpwi    r31, 7
	bgt      lbl_80230FD0
	li       r0, 1

lbl_80230FD0:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80230FF4
	lis      r3, lbl_80483900@ha
	lis      r5, lbl_80483914@ha
	addi     r3, r3, lbl_80483900@l
	li       r4, 0x152
	addi     r5, r5, lbl_80483914@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80230FF4:
	lis      r3, mTotal__Q24Game8DeathMgr@ha
	slwi     r4, r31, 2
	addi     r0, r3, mTotal__Q24Game8DeathMgr@l
	add      r5, r0, r4

lbl_80231004:
	lwz      r0, 0x14(r1)
	lwz      r3, 0(r5)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023101C
 * Size:	0000B0
 */
void DeathMgr::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, mCave__Q24Game8DeathMgr@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	addi     r30, r4, mCave__Q24Game8DeathMgr@l
	stw      r29, 0x14(r1)
	mr       r29, r3

lbl_80231044:
	mr       r3, r29
	bl       readInt__6StreamFv
	addi     r31, r31, 1
	stw      r3, 0(r30)
	cmpwi    r31, 8
	addi     r30, r30, 4
	blt      lbl_80231044
	lis      r3, mToday__Q24Game8DeathMgr@ha
	li       r31, 0
	addi     r30, r3, mToday__Q24Game8DeathMgr@l

lbl_8023106C:
	mr       r3, r29
	bl       readInt__6StreamFv
	addi     r31, r31, 1
	stw      r3, 0(r30)
	cmpwi    r31, 8
	addi     r30, r30, 4
	blt      lbl_8023106C
	lis      r3, mTotal__Q24Game8DeathMgr@ha
	li       r31, 0
	addi     r30, r3, mTotal__Q24Game8DeathMgr@l

lbl_80231094:
	mr       r3, r29
	bl       readInt__6StreamFv
	addi     r31, r31, 1
	stw      r3, 0(r30)
	cmpwi    r31, 8
	addi     r30, r30, 4
	blt      lbl_80231094
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802310CC
 * Size:	000148
 */
void DeathMgr::write(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80483920@ha
	stw      r0, 0x24(r1)
	addi     r4, r4, lbl_80483920@l
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	bl       textBeginGroup__6StreamFPc
	lis      r3, mCave__Q24Game8DeathMgr@ha
	li       r30, 0
	addi     r29, r3, mCave__Q24Game8DeathMgr@l

lbl_80231100:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0(r29)
	mr       r3, r31
	bl       writeInt__6StreamFi
	mr       r3, r31
	addi     r4, r2, lbl_8051A368@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r30, r30, 1
	addi     r29, r29, 4
	cmpwi    r30, 8
	blt      lbl_80231100
	mr       r3, r31
	bl       textEndGroup__6StreamFv
	lis      r4, lbl_80483920@ha
	mr       r3, r31
	addi     r4, r4, lbl_80483920@l
	bl       textBeginGroup__6StreamFPc
	lis      r3, mToday__Q24Game8DeathMgr@ha
	li       r30, 0
	addi     r29, r3, mToday__Q24Game8DeathMgr@l

lbl_8023115C:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0(r29)
	mr       r3, r31
	bl       writeInt__6StreamFi
	mr       r3, r31
	addi     r4, r2, lbl_8051A368@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r30, r30, 1
	addi     r29, r29, 4
	cmpwi    r30, 8
	blt      lbl_8023115C
	mr       r3, r31
	bl       textEndGroup__6StreamFv
	lis      r4, lbl_80483920@ha
	mr       r3, r31
	addi     r4, r4, lbl_80483920@l
	bl       textBeginGroup__6StreamFPc
	lis      r3, mTotal__Q24Game8DeathMgr@ha
	li       r30, 0
	addi     r29, r3, mTotal__Q24Game8DeathMgr@l

lbl_802311B8:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0(r29)
	mr       r3, r31
	bl       writeInt__6StreamFi
	mr       r3, r31
	addi     r4, r2, lbl_8051A368@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r30, r30, 1
	addi     r29, r29, 4
	cmpwi    r30, 8
	blt      lbl_802311B8
	mr       r3, r31
	bl       textEndGroup__6StreamFv
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
 * Address:	80231214
 * Size:	0000E0
 */
void __sinit_gameDeathCount_cpp(void)
{
	/*
	li       r0, 0
	lis      r8, mToday__Q24Game8BirthMgr@ha
	stwu     r0, mToday__Q24Game8BirthMgr@l(r8)
	lis      r7, mCave__Q24Game8BirthMgr@ha
	lis      r6, mTotal__Q24Game8BirthMgr@ha
	lis      r5, mToday__Q24Game8DeathMgr@ha
	stwu     r0, mToday__Q24Game8DeathMgr@l(r5)
	lis      r4, mCave__Q24Game8DeathMgr@ha
	lis      r3, mTotal__Q24Game8DeathMgr@ha
	stwu     r0, mCave__Q24Game8DeathMgr@l(r4)
	stwu     r0, mTotal__Q24Game8DeathMgr@l(r3)
	stwu     r0, mCave__Q24Game8BirthMgr@l(r7)
	stwu     r0, mTotal__Q24Game8BirthMgr@l(r6)
	stw      r0, 4(r8)
	stw      r0, 8(r8)
	stw      r0, 0xc(r8)
	stw      r0, 0x10(r8)
	stw      r0, 0x14(r8)
	stw      r0, 0x18(r8)
	stw      r0, 4(r7)
	stw      r0, 8(r7)
	stw      r0, 0xc(r7)
	stw      r0, 0x10(r7)
	stw      r0, 0x14(r7)
	stw      r0, 0x18(r7)
	stw      r0, 4(r6)
	stw      r0, 8(r6)
	stw      r0, 0xc(r6)
	stw      r0, 0x10(r6)
	stw      r0, 0x14(r6)
	stw      r0, 0x18(r6)
	stw      r0, 4(r5)
	stw      r0, 8(r5)
	stw      r0, 0xc(r5)
	stw      r0, 0x10(r5)
	stw      r0, 0x14(r5)
	stw      r0, 0x18(r5)
	stw      r0, 0x1c(r5)
	stw      r0, 0x20(r5)
	stw      r0, 4(r4)
	stw      r0, 8(r4)
	stw      r0, 0xc(r4)
	stw      r0, 0x10(r4)
	stw      r0, 0x14(r4)
	stw      r0, 0x18(r4)
	stw      r0, 0x1c(r4)
	stw      r0, 0x20(r4)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0x20(r3)
	blr
	*/
}
