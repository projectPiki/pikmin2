#include "types.h"
#include "PSM/Director.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80490180
    lbl_80490180:
        .4byte 0x50534469
        .4byte 0x72656374
        .4byte 0x6F722E63
        .4byte 0x70700000
    .global lbl_80490190
    lbl_80490190:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8049019C
    lbl_8049019C:
        .4byte 0x0A4E6F74
        .4byte 0x2043616C
        .4byte 0x6C656420
        .4byte 0x46726F6D
        .4byte 0x204D6169
        .4byte 0x6E205468
        .4byte 0x72656164
        .4byte 0x0A000000
        .4byte 0x83668342
        .4byte 0x838C834E
        .4byte 0x835E815B
        .4byte 0x837D836C
        .4byte 0x815B8357
        .4byte 0x83830000
    .global lbl_804901D4
    lbl_804901D4:
        .4byte 0x50534469
        .4byte 0x72656374
        .4byte 0x6F722E68
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28PSSystem17DirectorCopyActor
    __vt__Q28PSSystem17DirectorCopyActor:
        .4byte 0
        .4byte 0
        .4byte exec__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBase
        .4byte onUpdateFromMasterD__Q28PSSystem17DirectorCopyActorFv
        .4byte onUpdateFromSlaveD__Q28PSSystem17DirectorCopyActorFv
    .global __vt__Q28PSSystem17DirectorActorBase
    __vt__Q28PSSystem17DirectorActorBase:
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q28PSSystem15DirectorMgrBase
    __vt__Q28PSSystem15DirectorMgrBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28PSSystem15DirectorMgrBaseFv
        .4byte 0
    .global __vt__Q28PSSystem16SwitcherDirector
    __vt__Q28PSSystem16SwitcherDirector:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28PSSystem16SwitcherDirectorFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q28PSSystem12DirectorBaseFv
        .4byte 0
        .4byte 0
        .4byte doUpdateRequest__Q28PSSystem16SwitcherDirectorFv
        .4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
        .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
        .4byte onDirectOff__Q28PSSystem12DirectorBaseFv
    .global __vt__Q28PSSystem15OneShotDirector
    __vt__Q28PSSystem15OneShotDirector:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28PSSystem15OneShotDirectorFv
        .4byte exec__Q28PSSystem15OneShotDirectorFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q28PSSystem12DirectorBaseFv
        .4byte 0
        .4byte
   directOffTrack__Q28PSSystem15OneShotDirectorFRQ28PSSystem12SeqTrackBase
        .4byte doUpdateRequest__Q28PSSystem12DirectorBaseFv
        .4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
        .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
        .4byte onDirectOff__Q28PSSystem12DirectorBaseFv
    .global __vt__Q28PSSystem12DirectorBase
    __vt__Q28PSSystem12DirectorBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28PSSystem12DirectorBaseFv
        .4byte exec__Q28PSSystem12DirectorBaseFv
        .4byte directOn__Q28PSSystem12DirectorBaseFv
        .4byte directOff__Q28PSSystem12DirectorBaseFv
        .4byte underDirection__Q28PSSystem12DirectorBaseFv
        .4byte execInner__Q28PSSystem12DirectorBaseFv
        .4byte 0
        .4byte 0
        .4byte doUpdateRequest__Q28PSSystem12DirectorBaseFv
        .4byte onPlayInit__Q28PSSystem12DirectorBaseFP8JASTrack
        .4byte onDirectOn__Q28PSSystem12DirectorBaseFv
        .4byte onDirectOff__Q28PSSystem12DirectorBaseFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global sToolMode__Q28PSSystem12DirectorBase
    sToolMode__Q28PSSystem12DirectorBase:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E1F0
    lbl_8051E1F0:
        .4byte 0x50535365
        .4byte 0x712E6800
*/

namespace PSSystem {

/*
 * --INFO--
 * Address:	80342EB4
 * Size:	000214
 */
DirectorBase::DirectorBase(int, const char*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	mr       r31, r4
	mr       r30, r3
	li       r4, 0
	bl       __ct__10JADHioNodeFPCc
	lis      r3, __vt__Q28PSSystem12DirectorBase@ha
	li       r4, 0
	addi     r3, r3, __vt__Q28PSSystem12DirectorBase@l
	li       r0, 2
	stw      r3, 0(r30)
	addi     r3, r30, 0xc
	stw      r4, 4(r30)
	stw      r0, 8(r30)
	bl       OSInitMutex
	addi     r3, r30, 0x24
	bl       OSInitMutex
	li       r0, 0
	cmpwi    r31, 0
	stb      r0, 0x3c(r30)
	stb      r0, 0x40(r30)
	stb      r31, 0x41(r30)
	bgt      lbl_80342F34
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_80490190@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0x18
	addi     r5, r5, lbl_80490190@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80342F34:
	slwi     r3, r31, 2
	bl       __nwa__FUl
	stw      r3, 4(r30)
	mr       r3, r31
	bl       __nwa__FUl
	stw      r3, 0x44(r30)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80342F74
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_80490190@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0x1d
	addi     r5, r5, lbl_80490190@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80342F74:
	cmpwi    r31, 0
	li       r5, 0
	ble      lbl_803430B0
	cmpwi    r31, 8
	addi     r3, r31, -8
	ble      lbl_80343080
	b        lbl_80343074

lbl_80342F90:
	lwz      r6, 4(r30)
	rlwinm   r4, r5, 2, 0x16, 0x1d
	li       r0, 0
	addi     r12, r5, 1
	stwx     r0, r6, r4
	addi     r11, r5, 2
	addi     r10, r5, 3
	clrlwi   r23, r5, 0x18
	lwz      r6, 0x44(r30)
	clrlwi   r26, r11, 0x18
	clrlwi   r24, r12, 0x18
	addi     r9, r5, 4
	stbx     r0, r6, r23
	addi     r23, r4, 4
	addi     r8, r5, 5
	clrlwi   r28, r10, 0x18
	lwz      r12, 4(r30)
	addi     r7, r5, 6
	addi     r6, r5, 7
	clrlwi   r10, r8, 0x18
	stwx     r0, r12, r23
	clrlwi   r12, r9, 0x18
	clrlwi   r8, r7, 0x18
	addi     r25, r4, 8
	lwz      r23, 0x44(r30)
	addi     r27, r4, 0xc
	addi     r29, r4, 0x10
	addi     r11, r4, 0x14
	stbx     r0, r23, r24
	addi     r9, r4, 0x18
	addi     r7, r4, 0x1c
	clrlwi   r4, r6, 0x18
	lwz      r6, 4(r30)
	addi     r5, r5, 8
	stwx     r0, r6, r25
	lwz      r6, 0x44(r30)
	stbx     r0, r6, r26
	lwz      r6, 4(r30)
	stwx     r0, r6, r27
	lwz      r6, 0x44(r30)
	stbx     r0, r6, r28
	lwz      r6, 4(r30)
	stwx     r0, r6, r29
	lwz      r6, 0x44(r30)
	stbx     r0, r6, r12
	lwz      r6, 4(r30)
	stwx     r0, r6, r11
	lwz      r6, 0x44(r30)
	stbx     r0, r6, r10
	lwz      r6, 4(r30)
	stwx     r0, r6, r9
	lwz      r6, 0x44(r30)
	stbx     r0, r6, r8
	lwz      r6, 4(r30)
	stwx     r0, r6, r7
	lwz      r6, 0x44(r30)
	stbx     r0, r6, r4

lbl_80343074:
	clrlwi   r0, r5, 0x18
	cmpw     r0, r3
	blt      lbl_80342F90

lbl_80343080:
	li       r4, 0
	b        lbl_803430A4

lbl_80343088:
	lwz      r3, 4(r30)
	rlwinm   r0, r5, 2, 0x16, 0x1d
	clrlwi   r6, r5, 0x18
	addi     r5, r5, 1
	stwx     r4, r3, r0
	lwz      r3, 0x44(r30)
	stbx     r4, r3, r6

lbl_803430A4:
	clrlwi   r0, r5, 0x18
	cmpw     r0, r31
	blt      lbl_80343088

lbl_803430B0:
	mr       r3, r30
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803430C8
 * Size:	000010
 */
void DirectorBase::isUnderDirection()
{
	/*
	lwz      r0, 8(r3)
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	803430D8
 * Size:	0000A4
 */
void DirectorBase::setTrack(unsigned char, PSSystem::SeqTrackBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r3
	lbz      r0, 0x41(r3)
	clrlwi   r3, r4, 0x18
	cmplw    r3, r0
	blt      lbl_80343128
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_80490190@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0x3e
	addi     r5, r5, lbl_80490190@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343128:
	lwz      r3, 4(r29)
	rlwinm   r31, r31, 2, 0x16, 0x1d
	lwzx     r0, r3, r31
	cmplwi   r0, 0
	beq      lbl_80343158
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_80490190@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0x3f
	addi     r5, r5, lbl_80490190@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343158:
	lwz      r3, 4(r29)
	stwx     r30, r3, r31
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
 * Address:	8034317C
 * Size:	00014C
 */
void DirectorBase::exec()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       OSGetCurrentThread
	bl       OSGetThreadPriority
	cmpwi    r3, 0x10
	beq      lbl_803431C0
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_8049019C@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0x65
	addi     r5, r5, lbl_8049019C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803431C0:
	lbz      r0, 0x3c(r31)
	cmplwi   r0, 1
	bne      lbl_80343200
	mr       r3, r31
	bl       powerOn__Q28PSSystem12DirectorBaseFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x24
	bl       OSLockMutex
	li       r0, 0
	addi     r3, r31, 0x24
	stb      r0, 0x3c(r31)
	bl       OSUnlockMutex

lbl_80343200:
	lbz      r0, 0x40(r31)
	cmplwi   r0, 0
	beq      lbl_803432B0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 8(r31)
	cmpwi    r0, 2
	beq      lbl_80343290
	li       r30, 0
	b        lbl_80343260

lbl_80343234:
	lwz      r3, 4(r31)
	rlwinm   r0, r30, 2, 0x16, 0x1d
	lwzx     r3, r3, r0
	bl       getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
	mr       r4, r31
	bl
isUnderTask_byDirector__Q28PSSystem12TaskEntryMgrFPQ28PSSystem12DirectorBase
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034325C
	li       r0, 1
	b        lbl_80343274

lbl_8034325C:
	addi     r30, r30, 1

lbl_80343260:
	lbz      r0, 0x41(r31)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_80343234
	li       r0, 0

lbl_80343274:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80343290
	lwz      r0, 8(r31)
	cmpwi    r0, 1
	bne      lbl_80343290
	li       r0, 2
	stw      r0, 8(r31)

lbl_80343290:
	lwz      r0, 8(r31)
	cmpwi    r0, 0
	bne      lbl_803432B0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_803432B0:
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
 * Address:	803432C8
 * Size:	000074
 */
void DirectorBase::directOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       OSGetCurrentThread
	bl       OSGetThreadPriority
	cmpwi    r3, 0x10
	beq      lbl_80343308
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_8049019C@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0xb8
	addi     r5, r5, lbl_8049019C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343308:
	lbz      r0, sToolMode__Q28PSSystem12DirectorBase@sda21(r13)
	cmplwi   r0, 1
	beq      lbl_80343328
	lwz      r0, 8(r31)
	cmpwi    r0, 0
	beq      lbl_80343328
	mr       r3, r31
	bl       directOnInner__Q28PSSystem12DirectorBaseFv

lbl_80343328:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034333C
 * Size:	0000B0
 */
void DirectorBase::directOnInner()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0xc
	bl       OSLockMutex
	lbz      r0, 0x40(r30)
	cmplwi   r0, 0
	bne      lbl_80343374
	addi     r3, r30, 0xc
	bl       OSUnlockMutex
	b        lbl_803433D4

lbl_80343374:
	li       r31, 0
	b        lbl_803433A0

lbl_8034337C:
	lwz      r12, 0(r30)
	rlwinm   r0, r31, 2, 0x16, 0x1d
	lwz      r4, 4(r30)
	mr       r3, r30
	lwz      r12, 0x20(r12)
	lwzx     r4, r4, r0
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_803433A0:
	lbz      r0, 0x41(r30)
	clrlwi   r3, r31, 0x18
	cmplw    r3, r0
	blt      lbl_8034337C
	addi     r3, r30, 0xc
	bl       OSUnlockMutex
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 8(r30)

lbl_803433D4:
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
 * Address:	803433EC
 * Size:	000080
 */
void DirectorBase::directOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, sToolMode__Q28PSSystem12DirectorBase@sda21(r13)
	cmplwi   r0, 1
	beq      lbl_80343458
	bl       OSGetCurrentThread
	bl       OSGetThreadPriority
	cmpwi    r3, 0x10
	beq      lbl_80343438
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_8049019C@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0xdb
	addi     r5, r5, lbl_8049019C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343438:
	lwz      r0, 8(r31)
	cmpwi    r0, 1
	beq      lbl_80343458
	cmpwi    r0, 2
	bne      lbl_80343450
	b        lbl_80343458

lbl_80343450:
	mr       r3, r31
	bl       directOffInner__Q28PSSystem12DirectorBaseFv

lbl_80343458:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034346C
 * Size:	0000B0
 */
void DirectorBase::directOffInner()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0xc
	bl       OSLockMutex
	lbz      r0, 0x40(r30)
	cmplwi   r0, 0
	bne      lbl_803434A4
	addi     r3, r30, 0xc
	bl       OSUnlockMutex
	b        lbl_80343504

lbl_803434A4:
	li       r31, 0
	b        lbl_803434D0

lbl_803434AC:
	lwz      r12, 0(r30)
	rlwinm   r0, r31, 2, 0x16, 0x1d
	lwz      r4, 4(r30)
	mr       r3, r30
	lwz      r12, 0x24(r12)
	lwzx     r4, r4, r0
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_803434D0:
	lbz      r0, 0x41(r30)
	clrlwi   r3, r31, 0x18
	cmplw    r3, r0
	blt      lbl_803434AC
	addi     r3, r30, 0xc
	bl       OSUnlockMutex
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stw      r0, 8(r30)

lbl_80343504:
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
 * Address:	8034351C
 * Size:	000004
 */
void DirectorBase::doUpdateRequest() { }

/*
 * --INFO--
 * Address:	80343520
 * Size:	000040
 */
void DirectorBase::powerOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0xc
	bl       OSLockMutex
	li       r0, 1
	addi     r3, r31, 0xc
	stb      r0, 0x40(r31)
	bl       OSUnlockMutex
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80343560
 * Size:	000150
 */
void OneShotDirector::exec()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       OSGetCurrentThread
	bl       OSGetThreadPriority
	cmpwi    r3, 0x10
	beq      lbl_803435A4
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_8049019C@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0x150
	addi     r5, r5, lbl_8049019C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803435A4:
	lbz      r0, 0x3c(r31)
	cmplwi   r0, 1
	bne      lbl_803435F4
	addi     r3, r31, 0xc
	bl       OSLockMutex
	li       r0, 1
	addi     r3, r31, 0xc
	stb      r0, 0x40(r31)
	bl       OSUnlockMutex
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x24
	bl       OSLockMutex
	li       r0, 0
	addi     r3, r31, 0x24
	stb      r0, 0x3c(r31)
	bl       OSUnlockMutex

lbl_803435F4:
	lbz      r0, 0x40(r31)
	cmplwi   r0, 0
	beq      lbl_80343698
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 8(r31)
	cmpwi    r0, 2
	beq      lbl_80343678
	li       r30, 0
	b        lbl_80343654

lbl_80343628:
	lwz      r3, 4(r31)
	rlwinm   r0, r30, 2, 0x16, 0x1d
	lwzx     r3, r3, r0
	bl       getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
	mr       r4, r31
	bl
isUnderTask_byDirector__Q28PSSystem12TaskEntryMgrFPQ28PSSystem12DirectorBase
	clrlwi.  r0, r3, 0x18
	beq      lbl_80343650
	li       r0, 1
	b        lbl_80343668

lbl_80343650:
	addi     r30, r30, 1

lbl_80343654:
	lbz      r0, 0x41(r31)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_80343628
	li       r0, 0

lbl_80343668:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80343678
	li       r0, 2
	stw      r0, 8(r31)

lbl_80343678:
	lwz      r0, 8(r31)
	cmpwi    r0, 0
	bne      lbl_80343698
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_80343698:
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
 * Address:	803436B0
 * Size:	000198
 */
void SwitcherDirector::doUpdateRequest()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lwz      r0, 8(r3)
	cmpwi    r0, 0
	bne      lbl_80343758
	addi     r3, r31, 0xc
	bl       OSLockMutex
	lbz      r0, 0x40(r31)
	cmplwi   r0, 0
	bne      lbl_803436F4
	addi     r3, r31, 0xc
	bl       OSUnlockMutex
	b        lbl_80343830

lbl_803436F4:
	li       r30, 0
	b        lbl_80343720

lbl_803436FC:
	lwz      r12, 0(r31)
	rlwinm   r0, r30, 2, 0x16, 0x1d
	lwz      r4, 4(r31)
	mr       r3, r31
	lwz      r12, 0x20(r12)
	lwzx     r4, r4, r0
	mtctr    r12
	bctrl
	addi     r30, r30, 1

lbl_80343720:
	lbz      r0, 0x41(r31)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_803436FC
	addi     r3, r31, 0xc
	bl       OSUnlockMutex
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 8(r31)
	b        lbl_80343830

lbl_80343758:
	cmpwi    r0, 1
	bne      lbl_80343830
	li       r30, 0
	b        lbl_80343794

lbl_80343768:
	lwz      r3, 4(r31)
	rlwinm   r0, r30, 2, 0x16, 0x1d
	lwzx     r3, r3, r0
	bl       getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
	mr       r4, r31
	bl
isUnderTask_byDirector__Q28PSSystem12TaskEntryMgrFPQ28PSSystem12DirectorBase
	clrlwi.  r0, r3, 0x18
	beq      lbl_80343790
	li       r0, 1
	b        lbl_803437A8

lbl_80343790:
	addi     r30, r30, 1

lbl_80343794:
	lbz      r0, 0x41(r31)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_80343768
	li       r0, 0

lbl_803437A8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80343830
	addi     r3, r31, 0xc
	bl       OSLockMutex
	lbz      r0, 0x40(r31)
	cmplwi   r0, 0
	bne      lbl_803437D0
	addi     r3, r31, 0xc
	bl       OSUnlockMutex
	b        lbl_80343830

lbl_803437D0:
	li       r30, 0
	b        lbl_803437FC

lbl_803437D8:
	lwz      r12, 0(r31)
	rlwinm   r0, r30, 2, 0x16, 0x1d
	lwz      r4, 4(r31)
	mr       r3, r31
	lwz      r12, 0x24(r12)
	lwzx     r4, r4, r0
	mtctr    r12
	bctrl
	addi     r30, r30, 1

lbl_803437FC:
	lbz      r0, 0x41(r31)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_803437D8
	addi     r3, r31, 0xc
	bl       OSUnlockMutex
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stw      r0, 8(r31)

lbl_80343830:
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
 * Address:	80343848
 * Size:	000088
 */
DirectorMgrBase::DirectorMgrBase(unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_80490180@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_80490180@l
	stw      r30, 0x18(r1)
	mr       r30, r4
	addi     r4, r31, 0x3c
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       __ct__10JADHioNodeFPCc
	lis      r3, __vt__Q28PSSystem15DirectorMgrBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q28PSSystem15DirectorMgrBase@l
	stw      r3, 0(r29)
	stw      r0, 4(r29)
	stb      r30, 8(r29)
	lbz      r0, 8(r29)
	cmplwi   r0, 0
	bne      lbl_803438B0
	addi     r3, r31, 0
	addi     r5, r31, 0x10
	li       r4, 0x18a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803438B0:
	lwz      r0, 0x24(r1)
	mr       r3, r29
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
 * Address:	803438D0
 * Size:	00012C
 */
void DirectorMgrBase::initAndAdaptToBgm(PSSystem::DirectedBgm&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80343910
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_80490190@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0x191
	addi     r5, r5, lbl_80490190@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343910:
	lbz      r0, 8(r30)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 4(r30)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80343948
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_80490190@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0x193
	addi     r5, r5, lbl_80490190@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343948:
	lis      r4, lbl_80490180@ha
	lis      r3, lbl_80490190@ha
	addi     r28, r4, lbl_80490180@l
	li       r25, 0
	addi     r29, r3, lbl_80490190@l
	b        lbl_803439D8

lbl_80343960:
	mr       r3, r30
	mr       r4, r25
	lwz      r12, 0(r30)
	mr       r5, r31
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r30)
	rlwinm   r0, r25, 2, 0x16, 0x1d
	li       r27, 0
	stwx     r3, r4, r0
	lwz      r3, 4(r30)
	lwzx     r26, r3, r0
	b        lbl_803439C4

lbl_80343998:
	lwz      r3, 4(r26)
	rlwinm   r0, r27, 2, 0x16, 0x1d
	lwzx     r0, r3, r0
	cmplwi   r0, 0
	bne      lbl_803439C0
	mr       r3, r28
	mr       r5, r29
	li       r4, 0x49
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803439C0:
	addi     r27, r27, 1

lbl_803439C4:
	lbz      r0, 0x41(r26)
	clrlwi   r3, r27, 0x18
	cmplw    r3, r0
	blt      lbl_80343998
	addi     r25, r25, 1

lbl_803439D8:
	lbz      r0, 8(r30)
	clrlwi   r3, r25, 0x18
	cmplw    r3, r0
	blt      lbl_80343960
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803439FC
 * Size:	000164
 */
void DirectorMgrBase::playInit(JASTrack*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	li       r30, 0
	b        lbl_80343B3C

lbl_80343A1C:
	rlwinm   r31, r30, 2, 0x16, 0x1d
	li       r29, 0
	b        lbl_80343B20

lbl_80343A28:
	lbz      r0, 0x41(r24)
	clrlwi   r3, r29, 0x18
	cmplw    r3, r0
	blt      lbl_80343A54
	lis      r3, lbl_804901D4@ha
	lis      r5, lbl_80490190@ha
	addi     r3, r3, lbl_804901D4@l
	li       r4, 0x33
	addi     r5, r5, lbl_80490190@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343A54:
	lwz      r3, 4(r24)
	rlwinm   r0, r29, 2, 0x16, 0x1d
	lwzx     r3, r3, r0
	bl       getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
	lwz      r0, 0x24(r3)
	cmplw    r0, r28
	bne      lbl_80343B1C
	lwz      r0, 4(r27)
	mr       r4, r28
	lwzx     r24, r31, r0
	mr       r3, r24
	lwz      r12, 0(r24)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r3, r24, 0xc
	bl       OSLockMutex
	li       r25, 0
	li       r26, 1
	b        lbl_80343AEC

lbl_80343AA4:
	lwz      r3, 4(r24)
	rlwinm   r0, r25, 2, 0x16, 0x1d
	clrlwi   r23, r25, 0x18
	lwzx     r3, r3, r0
	bl       getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
	lwz      r0, 0x24(r3)
	cmplw    r0, r28
	bne      lbl_80343ACC
	lwz      r3, 0x44(r24)
	stbx     r26, r3, r23

lbl_80343ACC:
	lwz      r3, 0x44(r24)
	lbzx     r0, r3, r23
	cmplwi   r0, 0
	bne      lbl_80343AE8
	addi     r3, r24, 0xc
	bl       OSUnlockMutex
	b        lbl_80343B1C

lbl_80343AE8:
	addi     r25, r25, 1

lbl_80343AEC:
	lbz      r0, 0x41(r24)
	clrlwi   r3, r25, 0x18
	cmplw    r3, r0
	blt      lbl_80343AA4
	addi     r3, r24, 0xc
	bl       OSUnlockMutex
	addi     r3, r24, 0x24
	bl       OSLockMutex
	li       r0, 1
	addi     r3, r24, 0x24
	stb      r0, 0x3c(r24)
	bl       OSUnlockMutex

lbl_80343B1C:
	addi     r29, r29, 1

lbl_80343B20:
	lwz      r3, 4(r27)
	clrlwi   r0, r29, 0x18
	lwzx     r24, r31, r3
	lbz      r3, 0x41(r24)
	cmplw    r0, r3
	blt      lbl_80343A28
	addi     r30, r30, 1

lbl_80343B3C:
	lbz      r0, 8(r27)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_80343A1C
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80343B60
 * Size:	000068
 */
void DirectorMgrBase::exec()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_80343BA0

lbl_80343B80:
	lwz      r3, 4(r30)
	rlwinm   r0, r31, 2, 0x16, 0x1d
	lwzx     r3, r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_80343BA0:
	lbz      r0, 8(r30)
	clrlwi   r3, r31, 0x18
	cmplw    r3, r0
	blt      lbl_80343B80
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
 * Address:	80343BC8
 * Size:	0001BC
 */
void DirectorMgrBase::off(PSSystem::DirectedBgm*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	or.      r31, r4, r4
	mr       r30, r3
	bne      lbl_80343C00
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_80490190@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0x1ca
	addi     r5, r5, lbl_80490190@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343C00:
	li       r29, 0
	b        lbl_80343C20

lbl_80343C08:
	lwz      r3, 4(r30)
	rlwinm   r0, r29, 2, 0x16, 0x1d
	lwzx     r3, r3, r0
	addi     r3, r3, 0xc
	bl       OSLockMutex
	addi     r29, r29, 1

lbl_80343C20:
	lbz      r0, 8(r30)
	clrlwi   r3, r29, 0x18
	cmplw    r3, r0
	blt      lbl_80343C08
	lbz      r0, 0xb4(r31)
	li       r3, 0
	cmplwi   r0, 1
	bne      lbl_80343C50
	lwz      r0, 0x70(r31)
	cmplwi   r0, 0
	beq      lbl_80343C50
	li       r3, 1

lbl_80343C50:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80343C70
	lis      r4, lbl_80490190@ha
	addi     r3, r2, lbl_8051E1F0@sda21
	addi     r5, r4, lbl_80490190@l
	li       r4, 0x19f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343C70:
	lwz      r3, 0x70(r31)
	bl       getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
	bl       removeAllEntry__Q28PSSystem12TaskEntryMgrFv
	lis      r3, lbl_80490190@ha
	li       r27, 0
	addi     r29, r3, lbl_80490190@l
	b        lbl_80343CCC

lbl_80343C8C:
	clrlwi   r28, r27, 0x18
	cmpwi    r28, 0x10
	blt      lbl_80343CAC
	mr       r5, r29
	addi     r3, r2, lbl_8051E1F0@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343CAC:
	slwi     r3, r28, 2
	addi     r0, r3, 0x74
	lwzx     r3, r31, r0
	cmplwi   r3, 0
	beq      lbl_80343CC8
	bl       getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
	bl       removeAllEntry__Q28PSSystem12TaskEntryMgrFv

lbl_80343CC8:
	addi     r27, r27, 1

lbl_80343CCC:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 0x10
	blt      lbl_80343C8C
	li       r27, 0
	b        lbl_80343D30

lbl_80343CE0:
	lwz      r3, 4(r30)
	rlwinm   r0, r27, 2, 0x16, 0x1d
	lwzx     r29, r3, r0
	addi     r3, r29, 0xc
	bl       OSLockMutex
	li       r4, 0
	stb      r4, 0x40(r29)
	mr       r5, r4
	b        lbl_80343D14

lbl_80343D04:
	lwz      r3, 0x44(r29)
	clrlwi   r0, r5, 0x18
	addi     r5, r5, 1
	stbx     r4, r3, r0

lbl_80343D14:
	lbz      r0, 0x41(r29)
	clrlwi   r3, r5, 0x18
	cmplw    r3, r0
	blt      lbl_80343D04
	addi     r3, r29, 0xc
	bl       OSUnlockMutex
	addi     r27, r27, 1

lbl_80343D30:
	lbz      r0, 8(r30)
	clrlwi   r3, r27, 0x18
	cmplw    r3, r0
	blt      lbl_80343CE0
	li       r29, 0
	b        lbl_80343D60

lbl_80343D48:
	lwz      r3, 4(r30)
	rlwinm   r0, r29, 2, 0x16, 0x1d
	lwzx     r3, r3, r0
	addi     r3, r3, 0xc
	bl       OSUnlockMutex
	addi     r29, r29, 1

lbl_80343D60:
	lbz      r0, 8(r30)
	clrlwi   r3, r29, 0x18
	cmplw    r3, r0
	blt      lbl_80343D48
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80343D84
 * Size:	000024
 */
DirectorCopyActor::DirectorCopyActor(PSSystem::DirectorBase*, PSSystem::DirectorBase*)
{
	/*
	.loc_0x0:
	  lis       r7, 0x804E
	  lis       r6, 0x804E
	  subi      r0, r7, 0x504C
	  stw       r0, 0x0(r3)
	  subi      r0, r6, 0x5060
	  stw       r0, 0x0(r3)
	  stw       r4, 0x4(r3)
	  stw       r5, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80343DA8
 * Size:	000120
 */
void DirectorCopyActor::exec(PSSystem::DirectorBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_80343DEC
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_80490190@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0x201
	addi     r5, r5, lbl_80490190@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343DEC:
	lwz      r0, 4(r30)
	cmplw    r31, r0
	bne      lbl_80343E10
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_80343EB0

lbl_80343E10:
	lwz      r0, 8(r30)
	cmplw    r0, r31
	bne      lbl_80343EB0
	cmplwi   r0, 0
	bne      lbl_80343E40
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_80490190@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0x20d
	addi     r5, r5, lbl_80490190@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343E40:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	lwz      r5, 8(r3)
	cmpwi    r5, 0
	bne      lbl_80343E88
	lwz      r4, 4(r30)
	lwz      r0, 8(r4)
	cmpwi    r0, 0
	beq      lbl_80343E88
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80343EB0

lbl_80343E88:
	cmpwi    r5, 0
	beq      lbl_80343EB0
	lwz      r4, 4(r30)
	lwz      r0, 8(r4)
	cmpwi    r0, 0
	bne      lbl_80343EB0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80343EB0:
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
 * Address:	80343EC8
 * Size:	000004
 */
void DirectorBase::underDirection() { }

/*
 * --INFO--
 * Address:	80343ECC
 * Size:	000004
 */
void DirectorBase::execInner() { }

/*
 * --INFO--
 * Address:	80343ED0
 * Size:	000004
 */
void DirectorBase::onPlayInit(JASTrack*) { }

/*
 * --INFO--
 * Address:	80343ED4
 * Size:	000004
 */
void DirectorBase::onDirectOn() { }

/*
 * --INFO--
 * Address:	80343ED8
 * Size:	000004
 */
void DirectorBase::onDirectOff() { }

/*
 * --INFO--
 * Address:	80343EDC
 * Size:	000004
 */
void DirectorCopyActor::onUpdateFromSlaveD() { }

/*
 * --INFO--
 * Address:	80343EE0
 * Size:	000004
 */
void DirectorCopyActor::onUpdateFromMasterD() { }

/*
 * --INFO--
 * Address:	80343EE4
 * Size:	000060
 */
DirectorMgrBase::~DirectorMgrBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80343F28
	lis      r5, __vt__Q28PSSystem15DirectorMgrBase@ha
	li       r4, 0
	addi     r0, r5, __vt__Q28PSSystem15DirectorMgrBase@l
	stw      r0, 0(r30)
	bl       __dt__10JADHioNodeFv
	extsh.   r0, r31
	ble      lbl_80343F28
	mr       r3, r30
	bl       __dl__FPv

lbl_80343F28:
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
 * Address:	80343F44
 * Size:	000070
 */
SwitcherDirector::~SwitcherDirector()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80343F98
	lis      r4, __vt__Q28PSSystem16SwitcherDirector@ha
	addi     r0, r4, __vt__Q28PSSystem16SwitcherDirector@l
	stw      r0, 0(r30)
	beq      lbl_80343F88
	lis      r5, __vt__Q28PSSystem12DirectorBase@ha
	li       r4, 0
	addi     r0, r5, __vt__Q28PSSystem12DirectorBase@l
	stw      r0, 0(r30)
	bl       __dt__10JADHioNodeFv

lbl_80343F88:
	extsh.   r0, r31
	ble      lbl_80343F98
	mr       r3, r30
	bl       __dl__FPv

lbl_80343F98:
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
 * Address:	80343FB4
 * Size:	000070
 */
OneShotDirector::~OneShotDirector()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80344008
	lis      r4, __vt__Q28PSSystem15OneShotDirector@ha
	addi     r0, r4, __vt__Q28PSSystem15OneShotDirector@l
	stw      r0, 0(r30)
	beq      lbl_80343FF8
	lis      r5, __vt__Q28PSSystem12DirectorBase@ha
	li       r4, 0
	addi     r0, r5, __vt__Q28PSSystem12DirectorBase@l
	stw      r0, 0(r30)
	bl       __dt__10JADHioNodeFv

lbl_80343FF8:
	extsh.   r0, r31
	ble      lbl_80344008
	mr       r3, r30
	bl       __dl__FPv

lbl_80344008:
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
 * Address:	80344024
 * Size:	000004
 */
void OneShotDirector::directOffTrack(PSSystem::SeqTrackBase&) { }

/*
 * --INFO--
 * Address:	80344028
 * Size:	000060
 */
DirectorBase::~DirectorBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8034406C
	lis      r5, __vt__Q28PSSystem12DirectorBase@ha
	li       r4, 0
	addi     r0, r5, __vt__Q28PSSystem12DirectorBase@l
	stw      r0, 0(r30)
	bl       __dt__10JADHioNodeFv
	extsh.   r0, r31
	ble      lbl_8034406C
	mr       r3, r30
	bl       __dl__FPv

lbl_8034406C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace PSSystem
