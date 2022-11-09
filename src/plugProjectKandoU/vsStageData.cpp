#include "types.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_vsStageData_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483788
    lbl_80483788:
        .4byte 0x63617665
        .4byte 0x696E666F
        .4byte 0x2E747874
        .4byte 0x00000000
    .global lbl_80483798
    lbl_80483798:
        .4byte 0x83608383
        .4byte 0x838C8393
        .4byte 0x83578358
        .4byte 0x8365815B
        .4byte 0x83570000
    .global lbl_804837AC
    lbl_804837AC:
        .4byte 0x76735374
        .4byte 0x61676544
        .4byte 0x6174612E
        .4byte 0x63707000
    .global lbl_804837BC
    lbl_804837BC:
        .4byte 0x696C6C65
        .4byte 0x67616C20
        .4byte 0x73746167
        .4byte 0x6520696E
        .4byte 0x64657820
        .4byte 0x25640A00
    .global lbl_804837D4
    lbl_804837D4:
        .4byte 0x91CE90ED
        .4byte 0x97708358
        .4byte 0x8365815B
        .4byte 0x83570000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C10F0
    lbl_804C10F0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game6VsGame9StageList
    __vt__Q34Game6VsGame9StageList:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game6VsGame9StageListFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q34Game6VsGame9StageData
    __vt__Q34Game6VsGame9StageData:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game6VsGame9StageDataFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q34Game13ChallengeGame9StageList
    __vt__Q34Game13ChallengeGame9StageList:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game13ChallengeGame9StageListFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q34Game13ChallengeGame9StageData
    __vt__Q34Game13ChallengeGame9StageData:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game13ChallengeGame9StageDataFv
        .4byte getChildCount__5CNodeFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515C80
    lbl_80515C80:
        .skip 0x4
    .global lbl_80515C84
    lbl_80515C84:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A2E0
    lbl_8051A2E0:
        .4byte 0x43480000
    .global lbl_8051A2E4
    lbl_8051A2E4:
        .4byte 0x42C80000
    .global lbl_8051A2E8
    lbl_8051A2E8:
        .4byte 0x72616E64
        .4byte 0x6F6D0000
*/

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
ChallengeGame::StageData::StageData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022D68C
 * Size:	000238
 */
void ChallengeGame::StageData::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r4
	mr       r3, r28
	bl       readInt__6StreamFv
	mr       r30, r3
	mr       r3, r28
	li       r4, 0
	li       r5, 0
	bl       readString__6StreamFPci
	li       r0, 8
	li       r5, 0
	mtctr    r0

lbl_8022D6D8:
	lbz      r4, 0(r3)
	addi     r0, r5, 0x20
	stbx     r4, r31, r0
	lbz      r0, 0(r3)
	extsb.   r0, r0
	beq      lbl_8022D7A4
	lbz      r4, 1(r3)
	addi     r0, r5, 0x21
	stbx     r4, r31, r0
	lbz      r0, 1(r3)
	extsb.   r0, r0
	beq      lbl_8022D7A4
	lbz      r4, 2(r3)
	addi     r0, r5, 0x22
	stbx     r4, r31, r0
	lbz      r0, 2(r3)
	extsb.   r0, r0
	beq      lbl_8022D7A4
	lbz      r4, 3(r3)
	addi     r0, r5, 0x23
	stbx     r4, r31, r0
	lbz      r0, 3(r3)
	extsb.   r0, r0
	beq      lbl_8022D7A4
	lbz      r4, 4(r3)
	addi     r0, r5, 0x24
	stbx     r4, r31, r0
	lbz      r0, 4(r3)
	extsb.   r0, r0
	beq      lbl_8022D7A4
	lbz      r4, 5(r3)
	addi     r0, r5, 0x25
	stbx     r4, r31, r0
	lbz      r0, 5(r3)
	extsb.   r0, r0
	beq      lbl_8022D7A4
	lbz      r4, 6(r3)
	addi     r0, r5, 0x26
	stbx     r4, r31, r0
	lbz      r0, 6(r3)
	extsb.   r0, r0
	beq      lbl_8022D7A4
	lbz      r4, 7(r3)
	addi     r0, r5, 0x27
	stbx     r4, r31, r0
	lbz      r0, 7(r3)
	extsb.   r0, r0
	beq      lbl_8022D7A4
	addi     r5, r5, 8
	addi     r3, r3, 8
	bdnz     lbl_8022D6D8

lbl_8022D7A4:
	addi     r3, r31, 0x18
	mr       r4, r28
	lwz      r12, 0x18(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmplwi   r30, 1
	blt      lbl_8022D7E8
	mr       r3, r28
	bl       readFloat__6StreamFv
	stfs     f1, 0x60(r31)
	mr       r3, r28
	bl       readInt__6StreamFv
	stw      r3, 0x64(r31)
	mr       r3, r28
	bl       readInt__6StreamFv
	stw      r3, 0x68(r31)

lbl_8022D7E8:
	cmplwi   r30, 2
	blt      lbl_8022D808
	mr       r3, r28
	bl       readInt__6StreamFv
	stw      r3, 0x6c(r31)
	mr       r3, r28
	bl       readInt__6StreamFv
	stw      r3, 0x70(r31)

lbl_8022D808:
	cmplwi   r30, 3
	blt      lbl_8022D81C
	mr       r3, r28
	bl       readInt__6StreamFv
	stw      r3, 0x74(r31)

lbl_8022D81C:
	cmplwi   r30, 4
	blt      lbl_8022D868
	lwz      r0, 0x6c(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x78(r31)
	li       r29, 0
	li       r30, 0
	b        lbl_8022D858

lbl_8022D840:
	mr       r3, r28
	bl       readFloat__6StreamFv
	lwz      r3, 0x78(r31)
	addi     r29, r29, 1
	stfsx    f1, r3, r30
	addi     r30, r30, 4

lbl_8022D858:
	lwz      r0, 0x6c(r31)
	cmpw     r29, r0
	blt      lbl_8022D840
	b        lbl_8022D8A4

lbl_8022D868:
	lwz      r0, 0x6c(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x78(r31)
	li       r5, 0
	lfs      f0, lbl_8051A2E4@sda21(r2)
	li       r4, 0
	b        lbl_8022D898

lbl_8022D888:
	lwz      r3, 0x78(r31)
	addi     r5, r5, 1
	stfsx    f0, r3, r4
	addi     r4, r4, 4

lbl_8022D898:
	lwz      r0, 0x6c(r31)
	cmpw     r5, r0
	blt      lbl_8022D888

lbl_8022D8A4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001DC
 */
void ChallengeGame::StageData::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022D8C4
 * Size:	0000B4
 */
ChallengeGame::StageList::StageList(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q34Game13ChallengeGame9StageList@ha
	addi     r30, r31, 0x18
	addi     r0, r3, __vt__Q34Game13ChallengeGame9StageList@l
	stw      r0, 0(r31)
	mr       r3, r30
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q34Game13ChallengeGame9StageData@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__Q34Game13ChallengeGame9StageData@l
	stw      r0, 0(r30)
	bl       __ct__Q24Game13PikiContainerFv
	addi     r3, r30, 0x18
	bl       clear__Q24Game13PikiContainerFv
	lis      r4, lbl_80483788@ha
	addi     r3, r30, 0x20
	addi     r4, r4, lbl_80483788@l
	crclr    6
	bl       sprintf
	lfs      f0, lbl_8051A2E0@sda21(r2)
	lis      r3, lbl_80483798@ha
	li       r5, 0
	li       r4, 1
	stfs     f0, 0x60(r30)
	addi     r0, r3, lbl_80483798@l
	mr       r3, r31
	stw      r5, 0x68(r30)
	stw      r5, 0x64(r30)
	stw      r4, 0x6c(r30)
	stw      r5, 0x70(r30)
	stw      r5, 0x74(r30)
	stw      r5, 0x78(r30)
	stw      r0, 0x14(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022D978
 * Size:	000060
 */
ChallengeGame::StageData::~StageData(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8022D9BC
	lis      r5, __vt__Q34Game13ChallengeGame9StageData@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game13ChallengeGame9StageData@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8022D9BC
	mr       r3, r30
	bl       __dl__FPv

lbl_8022D9BC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022D9D8
 * Size:	00010C
 */
void ChallengeGame::StageList::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	lwz      r5, gameSystem__4Game@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_8022DA0C
	lwz      r3, 0x58(r5)
	bl       disableAllocHalt__Q24Game15BaseGameSectionFv
	mr       r30, r3
	b        lbl_8022DA10

lbl_8022DA0C:
	li       r30, 1

lbl_8022DA10:
	mr       r3, r27
	bl       readInt__6StreamFv
	mr       r31, r3
	li       r28, 0
	b        lbl_8022DAAC

lbl_8022DA24:
	li       r3, 0x7c
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8022DA90
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q34Game13ChallengeGame9StageData@ha
	addi     r3, r29, 0x18
	addi     r0, r4, __vt__Q34Game13ChallengeGame9StageData@l
	stw      r0, 0(r29)
	bl       __ct__Q24Game13PikiContainerFv
	addi     r3, r29, 0x18
	bl       clear__Q24Game13PikiContainerFv
	lis      r4, lbl_80483788@ha
	addi     r3, r29, 0x20
	addi     r4, r4, lbl_80483788@l
	crclr    6
	bl       sprintf
	lfs      f0, lbl_8051A2E0@sda21(r2)
	li       r3, 0
	li       r0, 1
	stfs     f0, 0x60(r29)
	stw      r3, 0x68(r29)
	stw      r3, 0x64(r29)
	stw      r0, 0x6c(r29)
	stw      r3, 0x70(r29)
	stw      r3, 0x74(r29)
	stw      r3, 0x78(r29)

lbl_8022DA90:
	mr       r3, r29
	mr       r4, r27
	bl       read__Q34Game13ChallengeGame9StageDataFR6Stream
	mr       r4, r29
	addi     r3, r26, 0x18
	bl       add__5CNodeFP5CNode
	addi     r28, r28, 1

lbl_8022DAAC:
	cmpw     r28, r31
	blt      lbl_8022DA24
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8022DAD0
	clrlwi.  r0, r30, 0x18
	beq      lbl_8022DAD0
	lwz      r3, 0x58(r3)
	bl       enableAllocHalt__Q24Game15BaseGameSectionFv

lbl_8022DAD0:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void ChallengeGame::StageList::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022DAE4
 * Size:	000084
 */
void ChallengeGame::StageList::getStageData(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0x18
	lwz      r12, 0x18(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r31, 0
	blt      lbl_8022DB24
	cmpw     r31, r3
	blt      lbl_8022DB44

lbl_8022DB24:
	lis      r3, lbl_804837AC@ha
	lis      r4, lbl_804837BC@ha
	addi     r5, r4, lbl_804837BC@l
	mr       r6, r31
	addi     r3, r3, lbl_804837AC@l
	li       r4, 0xd5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022DB44:
	mr       r4, r31
	addi     r3, r30, 0x18
	bl       getChildAt__5CNodeFi
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
VsGame::StageData::StageData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000284
 */
void VsGame::StageData::read(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void VsGame::StageData::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022DB68
 * Size:	0000BC
 */
VsGame::StageList::StageList(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q34Game6VsGame9StageList@ha
	addi     r30, r31, 0x18
	addi     r0, r3, __vt__Q34Game6VsGame9StageList@l
	stw      r0, 0(r31)
	mr       r3, r30
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q34Game6VsGame9StageData@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__Q34Game6VsGame9StageData@l
	stw      r0, 0(r30)
	bl       __ct__Q24Game13PikiContainerFv
	addi     r3, r30, 0x18
	bl       clear__Q24Game13PikiContainerFv
	lis      r4, lbl_80483788@ha
	addi     r3, r30, 0x20
	addi     r4, r4, lbl_80483788@l
	crclr    6
	bl       sprintf
	lfs      f0, lbl_8051A2E0@sda21(r2)
	li       r0, 0
	addi     r3, r30, 0x70
	addi     r4, r2, lbl_8051A2E8@sda21
	stfs     f0, 0x60(r30)
	stw      r0, 0x68(r30)
	stw      r0, 0x64(r30)
	stw      r0, 0x6c(r30)
	crclr    6
	bl       sprintf
	li       r0, 7
	lis      r3, lbl_804837D4@ha
	stw      r0, 0xb0(r30)
	addi     r0, r3, lbl_804837D4@l
	mr       r3, r31
	stw      r0, 0x14(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022DC24
 * Size:	000060
 */
VsGame::StageData::~StageData(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8022DC68
	lis      r5, __vt__Q34Game6VsGame9StageData@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game6VsGame9StageData@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8022DC68
	mr       r3, r30
	bl       __dl__FPv

lbl_8022DC68:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022DC84
 * Size:	000350
 */
void VsGame::StageList::read(Stream&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r25, r3
	mr       r26, r4
	lwz      r5, gameSystem__4Game@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_8022DCB8
	lwz      r3, 0x58(r5)
	bl       disableAllocHalt__Q24Game15BaseGameSectionFv
	mr       r29, r3
	b        lbl_8022DCBC

lbl_8022DCB8:
	li       r29, 1

lbl_8022DCBC:
	mr       r3, r26
	bl       readInt__6StreamFv
	mr       r30, r3
	li       r27, 0
	b        lbl_8022DF9C

lbl_8022DCD0:
	li       r3, 0xb4
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8022DD44
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q34Game6VsGame9StageData@ha
	addi     r3, r28, 0x18
	addi     r0, r4, __vt__Q34Game6VsGame9StageData@l
	stw      r0, 0(r28)
	bl       __ct__Q24Game13PikiContainerFv
	addi     r3, r28, 0x18
	bl       clear__Q24Game13PikiContainerFv
	lis      r4, lbl_80483788@ha
	addi     r3, r28, 0x20
	addi     r4, r4, lbl_80483788@l
	crclr    6
	bl       sprintf
	lfs      f0, lbl_8051A2E0@sda21(r2)
	li       r0, 0
	addi     r3, r28, 0x70
	addi     r4, r2, lbl_8051A2E8@sda21
	stfs     f0, 0x60(r28)
	stw      r0, 0x68(r28)
	stw      r0, 0x64(r28)
	stw      r0, 0x6c(r28)
	crclr    6
	bl       sprintf
	li       r0, 7
	stw      r0, 0xb0(r28)

lbl_8022DD44:
	mr       r3, r26
	bl       readInt__6StreamFv
	mr       r31, r3
	mr       r3, r26
	li       r4, 0
	li       r5, 0
	bl       readString__6StreamFPci
	li       r0, 8
	li       r5, 0
	mtctr    r0

lbl_8022DD6C:
	lbz      r4, 0(r3)
	addi     r0, r5, 0x20
	stbx     r4, r28, r0
	lbz      r0, 0(r3)
	extsb.   r0, r0
	beq      lbl_8022DE38
	lbz      r4, 1(r3)
	addi     r0, r5, 0x21
	stbx     r4, r28, r0
	lbz      r0, 1(r3)
	extsb.   r0, r0
	beq      lbl_8022DE38
	lbz      r4, 2(r3)
	addi     r0, r5, 0x22
	stbx     r4, r28, r0
	lbz      r0, 2(r3)
	extsb.   r0, r0
	beq      lbl_8022DE38
	lbz      r4, 3(r3)
	addi     r0, r5, 0x23
	stbx     r4, r28, r0
	lbz      r0, 3(r3)
	extsb.   r0, r0
	beq      lbl_8022DE38
	lbz      r4, 4(r3)
	addi     r0, r5, 0x24
	stbx     r4, r28, r0
	lbz      r0, 4(r3)
	extsb.   r0, r0
	beq      lbl_8022DE38
	lbz      r4, 5(r3)
	addi     r0, r5, 0x25
	stbx     r4, r28, r0
	lbz      r0, 5(r3)
	extsb.   r0, r0
	beq      lbl_8022DE38
	lbz      r4, 6(r3)
	addi     r0, r5, 0x26
	stbx     r4, r28, r0
	lbz      r0, 6(r3)
	extsb.   r0, r0
	beq      lbl_8022DE38
	lbz      r4, 7(r3)
	addi     r0, r5, 0x27
	stbx     r4, r28, r0
	lbz      r0, 7(r3)
	extsb.   r0, r0
	beq      lbl_8022DE38
	addi     r5, r5, 8
	addi     r3, r3, 8
	bdnz     lbl_8022DD6C

lbl_8022DE38:
	addi     r3, r28, 0x18
	mr       r4, r26
	lwz      r12, 0x18(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r26
	bl       readFloat__6StreamFv
	stfs     f1, 0x60(r28)
	mr       r3, r26
	bl       readInt__6StreamFv
	stw      r3, 0x64(r28)
	mr       r3, r26
	bl       readInt__6StreamFv
	cmplwi   r31, 2
	stw      r3, 0x68(r28)
	blt      lbl_8022DE88
	mr       r3, r26
	bl       readInt__6StreamFv
	stw      r3, 0x6c(r28)

lbl_8022DE88:
	cmplwi   r31, 3
	blt      lbl_8022DF78
	mr       r3, r26
	li       r4, 0
	li       r5, 0
	bl       readString__6StreamFPci
	li       r0, 8
	li       r5, 0
	mtctr    r0

lbl_8022DEAC:
	lbz      r4, 0(r3)
	addi     r0, r5, 0x70
	stbx     r4, r28, r0
	lbz      r0, 0(r3)
	extsb.   r0, r0
	beq      lbl_8022DF78
	lbz      r4, 1(r3)
	addi     r0, r5, 0x71
	stbx     r4, r28, r0
	lbz      r0, 1(r3)
	extsb.   r0, r0
	beq      lbl_8022DF78
	lbz      r4, 2(r3)
	addi     r0, r5, 0x72
	stbx     r4, r28, r0
	lbz      r0, 2(r3)
	extsb.   r0, r0
	beq      lbl_8022DF78
	lbz      r4, 3(r3)
	addi     r0, r5, 0x73
	stbx     r4, r28, r0
	lbz      r0, 3(r3)
	extsb.   r0, r0
	beq      lbl_8022DF78
	lbz      r4, 4(r3)
	addi     r0, r5, 0x74
	stbx     r4, r28, r0
	lbz      r0, 4(r3)
	extsb.   r0, r0
	beq      lbl_8022DF78
	lbz      r4, 5(r3)
	addi     r0, r5, 0x75
	stbx     r4, r28, r0
	lbz      r0, 5(r3)
	extsb.   r0, r0
	beq      lbl_8022DF78
	lbz      r4, 6(r3)
	addi     r0, r5, 0x76
	stbx     r4, r28, r0
	lbz      r0, 6(r3)
	extsb.   r0, r0
	beq      lbl_8022DF78
	lbz      r4, 7(r3)
	addi     r0, r5, 0x77
	stbx     r4, r28, r0
	lbz      r0, 7(r3)
	extsb.   r0, r0
	beq      lbl_8022DF78
	addi     r5, r5, 8
	addi     r3, r3, 8
	bdnz     lbl_8022DEAC

lbl_8022DF78:
	cmplwi   r31, 4
	blt      lbl_8022DF8C
	mr       r3, r26
	bl       readInt__6StreamFv
	stw      r3, 0xb0(r28)

lbl_8022DF8C:
	mr       r4, r28
	addi     r3, r25, 0x18
	bl       add__5CNodeFP5CNode
	addi     r27, r27, 1

lbl_8022DF9C:
	cmpw     r27, r30
	blt      lbl_8022DCD0
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8022DFC0
	clrlwi.  r0, r29, 0x18
	beq      lbl_8022DFC0
	lwz      r3, 0x58(r3)
	bl       enableAllocHalt__Q24Game15BaseGameSectionFv

lbl_8022DFC0:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001F8
 */
void VsGame::StageList::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022DFD4
 * Size:	000084
 */
void VsGame::StageList::getStageData(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0x18
	lwz      r12, 0x18(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r31, 0
	blt      lbl_8022E014
	cmpw     r31, r3
	blt      lbl_8022E034

lbl_8022E014:
	lis      r3, lbl_804837AC@ha
	lis      r4, lbl_804837BC@ha
	addi     r5, r4, lbl_804837BC@l
	mr       r6, r31
	addi     r3, r3, lbl_804837AC@l
	li       r4, 0x1ab
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022E034:
	mr       r4, r31
	addi     r3, r30, 0x18
	bl       getChildAt__5CNodeFi
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022E058
 * Size:	000084
 */
VsGame::StageList::~StageList(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8022E0C0
	lis      r3, __vt__Q34Game6VsGame9StageList@ha
	addic.   r0, r30, 0x18
	addi     r0, r3, __vt__Q34Game6VsGame9StageList@l
	stw      r0, 0(r30)
	beq      lbl_8022E0A4
	lis      r4, __vt__Q34Game6VsGame9StageData@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__Q34Game6VsGame9StageData@l
	li       r4, 0
	stw      r0, 0x18(r30)
	bl       __dt__5CNodeFv

lbl_8022E0A4:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8022E0C0
	mr       r3, r30
	bl       __dl__FPv

lbl_8022E0C0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022E0DC
 * Size:	000084
 */
ChallengeGame::StageList::~StageList(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8022E144
	lis      r3, __vt__Q34Game13ChallengeGame9StageList@ha
	addic.   r0, r30, 0x18
	addi     r0, r3, __vt__Q34Game13ChallengeGame9StageList@l
	stw      r0, 0(r30)
	beq      lbl_8022E128
	lis      r4, __vt__Q34Game13ChallengeGame9StageData@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__Q34Game13ChallengeGame9StageData@l
	li       r4, 0
	stw      r0, 0x18(r30)
	bl       __dt__5CNodeFv

lbl_8022E128:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8022E144
	mr       r3, r30
	bl       __dl__FPv

lbl_8022E144:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8022E160
 * Size:	000028
 */
void __sinit_vsStageData_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C10F0@ha
	stw      r0, lbl_80515C80@sda21(r13)
	stfsu    f0, lbl_804C10F0@l(r3)
	stfs     f0, lbl_80515C84@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
