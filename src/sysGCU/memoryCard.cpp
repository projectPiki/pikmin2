#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049AD08
    lbl_8049AD08:
        .4byte 0x6D656D6F
        .4byte 0x72794361
        .4byte 0x72642E63
        .4byte 0x70700000
        .4byte 0x636F6D6D
        .4byte 0x616E6420
        .4byte 0x71756575
        .4byte 0x65206973
        .4byte 0x2062726F
        .4byte 0x6B656E2E
        .4byte 0x666C6167
        .4byte 0x3A256420
        .4byte 0x6E756D3A
        .4byte 0x25640000
    .global lbl_8049AD40
    lbl_8049AD40:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x636F6D6D
        .4byte 0x616E6420
        .4byte 0x51756575
        .4byte 0x65206973
        .4byte 0x2066756C
        .4byte 0x6C2E0000
        .4byte 0x696D706F
        .4byte 0x73736962
        .4byte 0x6C652063
        .4byte 0x6173650A
        .4byte 0x00000000
    .global lbl_8049AD78
    lbl_8049AD78:
        .4byte 0x8373834E
        .4byte 0x837E8393
        .4byte 0x82518140
        .4byte 0x835A815B
        .4byte 0x83758366
        .4byte 0x815B835E
        .4byte 0x20000000
    .global lbl_8049AD94
    lbl_8049AD94:
        .4byte 0x25303464
        .4byte 0x2F253032
        .4byte 0x642F2530
        .4byte 0x32642025
        .4byte 0x3032643A
        .4byte 0x25303264
        .4byte 0x3A253032
        .4byte 0x64000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804ECDC0
    lbl_804ECDC0:
        .4byte lbl_80441028
        .4byte lbl_80441020
        .4byte lbl_80441020
        .4byte lbl_80441018
        .4byte lbl_80441030
        .4byte lbl_80441038
        .4byte lbl_80441040
        .4byte lbl_80441048
        .4byte lbl_80441050
        .4byte lbl_80441058
        .4byte lbl_80441060
        .4byte lbl_80441068
    .global lbl_804ECDF0
    lbl_804ECDF0:
        .4byte lbl_80441384
        .4byte lbl_8044137C
        .4byte lbl_8044137C
        .4byte lbl_80441374
        .4byte lbl_8044138C
        .4byte lbl_80441394
        .4byte lbl_8044139C
        .4byte lbl_804413A4
        .4byte lbl_804413AC
        .4byte lbl_804413B4
        .4byte lbl_804413BC
        .4byte lbl_804413C4
    .global lbl_804ECE20
    lbl_804ECE20:
        .4byte lbl_804414D8
        .4byte lbl_804414D0
        .4byte lbl_804414D0
        .4byte lbl_804414C8
        .4byte lbl_804414E0
        .4byte lbl_804414E8
        .4byte lbl_804414F0
        .4byte lbl_804414F8
        .4byte lbl_80441500
        .4byte lbl_80441508
        .4byte lbl_80441510
        .4byte lbl_80441518
    .global lbl_804ECE50
    lbl_804ECE50:
        .4byte lbl_80441678
        .4byte lbl_80441670
        .4byte lbl_80441670
        .4byte lbl_80441668
        .4byte lbl_80441680
        .4byte lbl_80441688
        .4byte lbl_80441690
        .4byte lbl_80441698
        .4byte lbl_804416A0
        .4byte lbl_804416A8
        .4byte lbl_804416B0
        .4byte lbl_804416B8
    .global lbl_804ECE80
    lbl_804ECE80:
        .4byte lbl_804418F8
        .4byte lbl_804418F0
        .4byte lbl_804418F0
        .4byte lbl_804418E8
        .4byte lbl_80441900
        .4byte lbl_80441908
        .4byte lbl_80441910
        .4byte lbl_80441918
        .4byte lbl_80441920
        .4byte lbl_80441928
        .4byte lbl_80441930
        .4byte lbl_80441938
    .global lbl_804ECEB0
    lbl_804ECEB0:
        .4byte lbl_80441B58
        .4byte lbl_80441B50
        .4byte lbl_80441B50
        .4byte lbl_80441B48
        .4byte lbl_80441B60
        .4byte lbl_80441B68
        .4byte lbl_80441B70
        .4byte lbl_80441B78
        .4byte lbl_80441B80
        .4byte lbl_80441B88
        .4byte lbl_80441B90
        .4byte lbl_80441B98
    .global lbl_804ECEE0
    lbl_804ECEE0:
        .4byte lbl_80441E20
        .4byte lbl_80441E18
        .4byte lbl_80441E18
        .4byte lbl_80441E10
        .4byte lbl_80441E28
        .4byte lbl_80441E30
        .4byte lbl_80441E38
        .4byte lbl_80441E40
        .4byte lbl_80441E48
        .4byte lbl_80441E50
        .4byte lbl_80441E58
        .4byte lbl_80441E60
    .global __vt__13MemoryCardMgr
    __vt__13MemoryCardMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__13MemoryCardMgrFv
        .4byte update__13MemoryCardMgrFv
        .4byte doInit__13MemoryCardMgrFv
        .4byte doCardProc__13MemoryCardMgrFPvP20MemoryCardMgrCommand
        .4byte getHeaderSize__13MemoryCardMgrFv
        .4byte doMakeHeader__13MemoryCardMgrFPUc
        .4byte doSetCardStat__13MemoryCardMgrFP8CARDStat
        .4byte doCheckCardStat__13MemoryCardMgrFP8CARDStat
        .4byte isErrorOccured__13MemoryCardMgrFv
    .global __vt__20MemoryCardMgrCommand
    __vt__20MemoryCardMgrCommand:
        .4byte 0
        .4byte 0
        .4byte getClassSize__20MemoryCardMgrCommandFv
    .global __vt__24MemoryCardMgrCommandBase
    __vt__24MemoryCardMgrCommandBase:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
*/

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void MemoryCardMgr::setTmpHeap(JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804405F0
 * Size:	00007C
 */
MemoryCardMgr::MemoryCardMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__13MemoryCardMgr@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__13MemoryCardMgr@l
	li       r6, 0x20
	li       r7, 5
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __defctor__20MemoryCardMgrCommandFv@ha
	stw      r0, 0(r31)
	addi     r4, r3, __defctor__20MemoryCardMgrCommandFv@l
	addi     r3, r31, 4
	bl       __construct_array
	li       r0, 0
	mr       r3, r31
	stw      r0, 0xa4(r31)
	stw      r0, 0xa8(r31)
	stw      r0, 0xcc(r31)
	stb      r0, 0xd0(r31)
	stw      r0, 0xd4(r31)
	lwz      r0, sSystemHeap__7JKRHeap@sda21(r13)
	stw      r0, 0xcc(r31)
	bl       resetCommandFlagQueue__13MemoryCardMgrFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8044066C
 * Size:	000024
 */
void MemoryCardMgrCommand::__defctor()
{
	/*
	lis      r5, __vt__24MemoryCardMgrCommandBase@ha
	lis      r4, __vt__20MemoryCardMgrCommand@ha
	addi     r0, r5, __vt__24MemoryCardMgrCommandBase@l
	li       r5, 0
	stw      r0, 4(r3)
	addi     r0, r4, __vt__20MemoryCardMgrCommand@l
	stw      r5, 0(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80440690
 * Size:	000024
 */
void MemoryCardMgr::resetCommandFlagQueue()
{
	/*
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x44(r3)
	stw      r0, 0x64(r3)
	stw      r0, 0x84(r3)
	stw      r0, 0xa4(r3)
	stw      r0, 0xa8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void MemoryCardMgr::getCurrentCommand()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804406B4
 * Size:	000040
 */
void MemoryCardMgr::setCommand(int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, __vt__24MemoryCardMgrCommandBase@ha
	lis      r5, __vt__20MemoryCardMgrCommand@ha
	stw      r0, 0x34(r1)
	addi     r6, r6, __vt__24MemoryCardMgrCommandBase@l
	addi     r0, r5, __vt__20MemoryCardMgrCommand@l
	stw      r6, 0xc(r1)
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stw      r0, 0xc(r1)
	bl       setCommand__13MemoryCardMgrFP24MemoryCardMgrCommandBase
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	804406F4
 * Size:	000138
 */
void MemoryCardMgr::setCommand(MemoryCardMgrCommandBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r4
	lis      r4, lbl_8049AD08@ha
	mr       r26, r3
	mr       r3, r27
	li       r29, 1
	addi     r31, r4, lbl_8049AD08@l
	lwz      r12, 4(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x20
	ble      lbl_80440748
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xe1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80440748:
	addi     r3, r26, 0xac
	bl       OSLockMutex
	li       r28, 0
	mr       r30, r26

lbl_80440758:
	lwz      r0, 4(r30)
	cmpwi    r0, 0
	beq      lbl_80440790
	addi     r28, r28, 1
	addi     r30, r30, 0x20
	cmplwi   r28, 5
	bne      lbl_80440758
	addi     r3, r31, 0
	addi     r5, r31, 0x44
	li       r29, 0
	li       r4, 0xf0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80440758

lbl_80440790:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80440804
	lwz      r4, 0xa4(r26)

lbl_8044079C:
	slwi     r0, r4, 5
	add      r3, r26, r0
	lwz      r0, 4(r3)
	cmpwi    r0, 0
	bne      lbl_804407F0
	mr       r4, r27
	addi     r3, r3, 4
	li       r5, 0x20
	bl       memcpy
	lwz      r3, 0xa8(r26)
	addi     r0, r3, 1
	stw      r0, 0xa8(r26)
	lwz      r0, 0xa8(r26)
	cmplwi   r0, 5
	ble      lbl_80440804
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xfe
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80440804

lbl_804407F0:
	addi     r4, r4, 1
	cmplwi   r4, 5
	bne      lbl_8044079C
	li       r4, 0
	b        lbl_8044079C

lbl_80440804:
	addi     r3, r26, 0xac
	bl       OSUnlockMutex
	addi     r3, r26, 0xc4
	bl       OSSignalCond
	mr       r3, r29
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
 * Size:	0000A8
 */
void MemoryCardMgr::releaseCurrentCommand()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044082C
 * Size:	0002A0
 */
void MemoryCardMgr::cardFormat(MemoryCardMgr::ECardSlot)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stmw     r26, 0x48(r1)
	mr       r29, r3
	lis      r3, lbl_8049AD08@ha
	mr       r26, r4
	addi     r31, r3, lbl_8049AD08@l
	li       r30, 0
	addi     r3, r29, 0xac
	bl       OSTryLockMutex
	cmpwi    r3, 0
	beq      lbl_80440AB4
	cmpwi    r26, 0
	li       r30, 1
	bne      lbl_80440988
	lis      r3, __vt__24MemoryCardMgrCommandBase@ha
	li       r27, 1
	addi     r0, r3, __vt__24MemoryCardMgrCommandBase@l
	stw      r27, 0x28(r1)
	lis      r3, __vt__20MemoryCardMgrCommand@ha
	addi     r12, r3, __vt__20MemoryCardMgrCommand@l
	stw      r0, 0x2c(r1)
	addi     r3, r1, 0x28
	stw      r12, 0x2c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x20
	ble      lbl_804408B8
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xe1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804408B8:
	addi     r3, r29, 0xac
	bl       OSLockMutex
	li       r28, 0
	mr       r26, r29

lbl_804408C8:
	lwz      r0, 4(r26)
	cmpwi    r0, 0
	beq      lbl_80440900
	addi     r28, r28, 1
	addi     r26, r26, 0x20
	cmplwi   r28, 5
	bne      lbl_804408C8
	addi     r3, r31, 0
	addi     r5, r31, 0x44
	li       r27, 0
	li       r4, 0xf0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_804408C8

lbl_80440900:
	clrlwi.  r0, r27, 0x18
	beq      lbl_80440974
	lwz      r4, 0xa4(r29)

lbl_8044090C:
	slwi     r0, r4, 5
	add      r3, r29, r0
	lwz      r0, 4(r3)
	cmpwi    r0, 0
	bne      lbl_80440960
	addi     r3, r3, 4
	addi     r4, r1, 0x28
	li       r5, 0x20
	bl       memcpy
	lwz      r3, 0xa8(r29)
	addi     r0, r3, 1
	stw      r0, 0xa8(r29)
	lwz      r0, 0xa8(r29)
	cmplwi   r0, 5
	ble      lbl_80440974
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xfe
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80440974

lbl_80440960:
	addi     r4, r4, 1
	cmplwi   r4, 5
	bne      lbl_8044090C
	li       r4, 0
	b        lbl_8044090C

lbl_80440974:
	addi     r3, r29, 0xac
	bl       OSUnlockMutex
	addi     r3, r29, 0xc4
	bl       OSSignalCond
	b        lbl_80440AA4

lbl_80440988:
	lis      r4, __vt__24MemoryCardMgrCommandBase@ha
	lis      r3, __vt__20MemoryCardMgrCommand@ha
	addi     r4, r4, __vt__24MemoryCardMgrCommandBase@l
	li       r0, 2
	stw      r4, 0xc(r1)
	addi     r12, r3, __vt__20MemoryCardMgrCommand@l
	addi     r3, r1, 8
	li       r28, 1
	stw      r0, 8(r1)
	stw      r12, 0xc(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x20
	ble      lbl_804409D8
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xe1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804409D8:
	addi     r3, r29, 0xac
	bl       OSLockMutex
	li       r27, 0
	mr       r26, r29

lbl_804409E8:
	lwz      r0, 4(r26)
	cmpwi    r0, 0
	beq      lbl_80440A20
	addi     r27, r27, 1
	addi     r26, r26, 0x20
	cmplwi   r27, 5
	bne      lbl_804409E8
	addi     r3, r31, 0
	addi     r5, r31, 0x44
	li       r28, 0
	li       r4, 0xf0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_804409E8

lbl_80440A20:
	clrlwi.  r0, r28, 0x18
	beq      lbl_80440A94
	lwz      r4, 0xa4(r29)

lbl_80440A2C:
	slwi     r0, r4, 5
	add      r3, r29, r0
	lwz      r0, 4(r3)
	cmpwi    r0, 0
	bne      lbl_80440A80
	addi     r3, r3, 4
	addi     r4, r1, 8
	li       r5, 0x20
	bl       memcpy
	lwz      r3, 0xa8(r29)
	addi     r0, r3, 1
	stw      r0, 0xa8(r29)
	lwz      r0, 0xa8(r29)
	cmplwi   r0, 5
	ble      lbl_80440A94
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xfe
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80440A94

lbl_80440A80:
	addi     r4, r4, 1
	cmplwi   r4, 5
	bne      lbl_80440A2C
	li       r4, 0
	b        lbl_80440A2C

lbl_80440A94:
	addi     r3, r29, 0xac
	bl       OSUnlockMutex
	addi     r3, r29, 0xc4
	bl       OSSignalCond

lbl_80440AA4:
	addi     r3, r29, 0xac
	bl       OSUnlockMutex
	addi     r3, r29, 0xc4
	bl       OSSignalCond

lbl_80440AB4:
	mr       r3, r30
	lmw      r26, 0x48(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80440ACC
 * Size:	00007C
 */
void MemoryCardMgr::init()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       CARDInit
	li       r0, 0
	mr       r3, r31
	stw      r0, 4(r31)
	li       r4, 0
	stw      r0, 0x24(r31)
	stw      r0, 0x44(r31)
	stw      r0, 0x64(r31)
	stw      r0, 0x84(r31)
	stw      r0, 0xa4(r31)
	stw      r0, 0xa8(r31)
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	addi     r3, r31, 0xac
	bl       OSInitMutex
	addi     r3, r31, 0xc4
	bl       OSInitCond
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80440B48
 * Size:	000004
 */
void MemoryCardMgr::doInit() { }

/*
 * --INFO--
 * Address:	80440B4C
 * Size:	000320
 */
void MemoryCardMgr::update()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, lbl_8049AD08@ha
	stw      r0, 0x64(r1)
	stmw     r27, 0x4c(r1)
	mr       r30, r3
	addi     r31, r4, lbl_8049AD08@l
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0xb
	beq      lbl_80440E58
	lwz      r3, sys@sda21(r13)
	bl       isResetActive__6SystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80440E58
	li       r3, 0
	bl       CARDProbe
	cmpwi    r3, 0
	beq      lbl_80440CF0
	mr       r3, r30
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0
	bne      lbl_80440CF0
	lwz      r0, 0xa8(r30)
	li       r29, 0
	cmpwi    r0, 0
	bne      lbl_80440BC8
	mr       r3, r30
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0xb
	beq      lbl_80440BC8
	li       r29, 1

lbl_80440BC8:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80440E58
	lis      r4, __vt__24MemoryCardMgrCommandBase@ha
	lis      r3, __vt__20MemoryCardMgrCommand@ha
	addi     r4, r4, __vt__24MemoryCardMgrCommandBase@l
	li       r0, 3
	stw      r4, 0x2c(r1)
	addi     r12, r3, __vt__20MemoryCardMgrCommand@l
	addi     r3, r1, 0x28
	li       r28, 1
	stw      r0, 0x28(r1)
	stw      r12, 0x2c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x20
	ble      lbl_80440C20
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xe1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80440C20:
	addi     r3, r30, 0xac
	bl       OSLockMutex
	li       r29, 0
	mr       r27, r30

lbl_80440C30:
	lwz      r0, 4(r27)
	cmpwi    r0, 0
	beq      lbl_80440C68
	addi     r29, r29, 1
	addi     r27, r27, 0x20
	cmplwi   r29, 5
	bne      lbl_80440C30
	addi     r3, r31, 0
	addi     r5, r31, 0x44
	li       r28, 0
	li       r4, 0xf0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80440C30

lbl_80440C68:
	clrlwi.  r0, r28, 0x18
	beq      lbl_80440CDC
	lwz      r4, 0xa4(r30)

lbl_80440C74:
	slwi     r0, r4, 5
	add      r3, r30, r0
	lwz      r0, 4(r3)
	cmpwi    r0, 0
	bne      lbl_80440CC8
	addi     r3, r3, 4
	addi     r4, r1, 0x28
	li       r5, 0x20
	bl       memcpy
	lwz      r3, 0xa8(r30)
	addi     r0, r3, 1
	stw      r0, 0xa8(r30)
	lwz      r0, 0xa8(r30)
	cmplwi   r0, 5
	ble      lbl_80440CDC
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xfe
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80440CDC

lbl_80440CC8:
	addi     r4, r4, 1
	cmplwi   r4, 5
	bne      lbl_80440C74
	li       r4, 0
	b        lbl_80440C74

lbl_80440CDC:
	addi     r3, r30, 0xac
	bl       OSUnlockMutex
	addi     r3, r30, 0xc4
	bl       OSSignalCond
	b        lbl_80440E58

lbl_80440CF0:
	li       r3, 0
	bl       CARDProbe
	cmpwi    r3, 0
	bne      lbl_80440E58
	mr       r3, r30
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0
	beq      lbl_80440E58
	lwz      r0, 0xa8(r30)
	li       r29, 0
	cmpwi    r0, 0
	bne      lbl_80440D34
	mr       r3, r30
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0xb
	beq      lbl_80440D34
	li       r29, 1

lbl_80440D34:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80440E58
	lis      r4, __vt__24MemoryCardMgrCommandBase@ha
	lis      r3, __vt__20MemoryCardMgrCommand@ha
	addi     r4, r4, __vt__24MemoryCardMgrCommandBase@l
	li       r0, 4
	stw      r4, 0xc(r1)
	addi     r12, r3, __vt__20MemoryCardMgrCommand@l
	addi     r3, r1, 8
	li       r29, 1
	stw      r0, 8(r1)
	stw      r12, 0xc(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x20
	ble      lbl_80440D8C
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xe1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80440D8C:
	addi     r3, r30, 0xac
	bl       OSLockMutex
	li       r28, 0
	mr       r27, r30

lbl_80440D9C:
	lwz      r0, 4(r27)
	cmpwi    r0, 0
	beq      lbl_80440DD4
	addi     r28, r28, 1
	addi     r27, r27, 0x20
	cmplwi   r28, 5
	bne      lbl_80440D9C
	addi     r3, r31, 0
	addi     r5, r31, 0x44
	li       r29, 0
	li       r4, 0xf0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80440D9C

lbl_80440DD4:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80440E48
	lwz      r4, 0xa4(r30)

lbl_80440DE0:
	slwi     r0, r4, 5
	add      r3, r30, r0
	lwz      r0, 4(r3)
	cmpwi    r0, 0
	bne      lbl_80440E34
	addi     r3, r3, 4
	addi     r4, r1, 8
	li       r5, 0x20
	bl       memcpy
	lwz      r3, 0xa8(r30)
	addi     r0, r3, 1
	stw      r0, 0xa8(r30)
	lwz      r0, 0xa8(r30)
	cmplwi   r0, 5
	ble      lbl_80440E48
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xfe
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80440E48

lbl_80440E34:
	addi     r4, r4, 1
	cmplwi   r4, 5
	bne      lbl_80440DE0
	li       r4, 0
	b        lbl_80440DE0

lbl_80440E48:
	addi     r3, r30, 0xac
	bl       OSUnlockMutex
	addi     r3, r30, 0xc4
	bl       OSSignalCond

lbl_80440E58:
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80440E6C
 * Size:	000150
 */
void MemoryCardMgr::cardMount()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r5, __vt__24MemoryCardMgrCommandBase@ha
	lis      r4, __vt__20MemoryCardMgrCommand@ha
	stw      r0, 0x44(r1)
	addi     r12, r4, __vt__20MemoryCardMgrCommand@l
	addi     r5, r5, __vt__24MemoryCardMgrCommandBase@l
	li       r0, 3
	stmw     r27, 0x2c(r1)
	lis      r4, lbl_8049AD08@ha
	mr       r27, r3
	addi     r3, r1, 8
	addi     r31, r4, lbl_8049AD08@l
	li       r29, 1
	stw      r5, 0xc(r1)
	stw      r0, 8(r1)
	stw      r12, 0xc(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x20
	ble      lbl_80440ED8
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xe1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80440ED8:
	addi     r3, r27, 0xac
	bl       OSLockMutex
	li       r30, 0
	mr       r28, r27

lbl_80440EE8:
	lwz      r0, 4(r28)
	cmpwi    r0, 0
	beq      lbl_80440F20
	addi     r30, r30, 1
	addi     r28, r28, 0x20
	cmplwi   r30, 5
	bne      lbl_80440EE8
	addi     r3, r31, 0
	addi     r5, r31, 0x44
	li       r29, 0
	li       r4, 0xf0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80440EE8

lbl_80440F20:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80440F94
	lwz      r4, 0xa4(r27)

lbl_80440F2C:
	slwi     r0, r4, 5
	add      r3, r27, r0
	lwz      r0, 4(r3)
	cmpwi    r0, 0
	bne      lbl_80440F80
	addi     r3, r3, 4
	addi     r4, r1, 8
	li       r5, 0x20
	bl       memcpy
	lwz      r3, 0xa8(r27)
	addi     r0, r3, 1
	stw      r0, 0xa8(r27)
	lwz      r0, 0xa8(r27)
	cmplwi   r0, 5
	ble      lbl_80440F94
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0xfe
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80440F94

lbl_80440F80:
	addi     r4, r4, 1
	cmplwi   r4, 5
	bne      lbl_80440F2C
	li       r4, 0
	b        lbl_80440F2C

lbl_80440F94:
	addi     r3, r27, 0xac
	bl       OSUnlockMutex
	addi     r3, r27, 0xc4
	bl       OSSignalCond
	mr       r3, r29
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80440FBC
 * Size:	000104
 */
void MemoryCardMgr::checkStatus()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0xb
	stw      r29, 0x14(r1)
	mr       r29, r3
	lis      r3, lbl_8049AD08@ha
	addi     r31, r3, lbl_8049AD08@l
	addi     r3, r29, 0xac
	bl       OSTryLockMutex
	cmpwi    r3, 0
	beq      lbl_804410A0
	lwz      r0, 0xd4(r29)
	cmplwi   r0, 0xb
	bgt      lbl_80441084
	lis      r3, lbl_804ECDC0@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804ECDC0@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_80441018:
	li       r30, 1
	b        lbl_80441098

lbl_80441020:

lbl_80441020:
	li       r30, 2
	b        lbl_80441098

lbl_80441028:
	li       r30, 0
	b        lbl_80441098

lbl_80441030:
	li       r30, 4
	b        lbl_80441098

lbl_80441038:
	li       r30, 3
	b        lbl_80441098

lbl_80441040:
	li       r30, 8
	b        lbl_80441098

lbl_80441048:
	li       r30, 9
	b        lbl_80441098

lbl_80441050:
	li       r30, 6
	b        lbl_80441098

lbl_80441058:
	li       r30, 7
	b        lbl_80441098

lbl_80441060:
	li       r30, 5
	b        lbl_80441098

lbl_80441068:
	addi     r3, r31, 0
	addi     r5, r31, 0x5c
	li       r4, 0x1bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r30, 0xb
	b        lbl_80441098

lbl_80441084:
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0x1c4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80441098:
	addi     r3, r29, 0xac
	bl       OSUnlockMutex

lbl_804410A0:
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	804410C0
 * Size:	000250
 */
void MemoryCardMgr::cardProc(void*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8049AD08@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_8049AD08@l
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)

lbl_804410EC:
	addi     r3, r29, 0xac
	bl       OSLockMutex
	lwz      r0, 0xa4(r29)
	li       r3, 0
	slwi     r4, r0, 5
	addi     r28, r4, 4
	add      r28, r29, r28
	lwz      r6, 0(r28)
	cmpwi    r6, 0
	bne      lbl_80441124
	bne      lbl_80441128
	lwz      r0, 0xa8(r29)
	cmpwi    r0, 0
	bne      lbl_80441128

lbl_80441124:
	li       r3, 1

lbl_80441128:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80441150
	lwz      r0, 0xa8(r29)
	addi     r3, r31, 0
	addi     r5, r31, 0x10
	li       r4, 0xc6
	cntlzw   r0, r0
	rlwinm   r7, r0, 0x1b, 0x18, 0x1f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80441150:
	mr       r5, r28
	b        lbl_804411C4

lbl_80441158:
	addi     r3, r29, 0xc4
	addi     r4, r29, 0xac
	bl       OSWaitCond
	lwz      r0, 0xa4(r29)
	li       r3, 0
	slwi     r4, r0, 5
	addi     r28, r4, 4
	add      r28, r29, r28
	lwz      r6, 0(r28)
	cmpwi    r6, 0
	bne      lbl_80441194
	bne      lbl_80441198
	lwz      r0, 0xa8(r29)
	cmpwi    r0, 0
	bne      lbl_80441198

lbl_80441194:
	li       r3, 1

lbl_80441198:
	clrlwi.  r0, r3, 0x18
	bne      lbl_804411C0
	lwz      r0, 0xa8(r29)
	addi     r3, r31, 0
	addi     r5, r31, 0x10
	li       r4, 0xc6
	cntlzw   r0, r0
	rlwinm   r7, r0, 0x1b, 0x18, 0x1f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804411C0:
	mr       r5, r28

lbl_804411C4:
	lwz      r0, 0(r5)
	cmpwi    r0, 0
	beq      lbl_80441158
	cmpwi    r0, 3
	beq      lbl_80441218
	bge      lbl_804411EC
	cmpwi    r0, 1
	beq      lbl_804411F8
	bge      lbl_80441208
	b        lbl_80441238

lbl_804411EC:
	cmpwi    r0, 5
	bge      lbl_80441238
	b        lbl_80441228

lbl_804411F8:
	mr       r3, r29
	li       r4, 0
	bl       format__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlot
	b        lbl_80441250

lbl_80441208:
	mr       r3, r29
	li       r4, 1
	bl       format__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlot
	b        lbl_80441250

lbl_80441218:
	mr       r3, r29
	li       r4, 0
	bl       attach__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlot
	b        lbl_80441250

lbl_80441228:
	mr       r3, r29
	li       r4, 0
	bl       detach__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlot
	b        lbl_80441250

lbl_80441238:
	lwz      r12, 0(r29)
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80441250:
	lwz      r0, 0xa4(r29)
	li       r4, 0xcd
	li       r5, 0x20
	slwi     r3, r0, 5
	addi     r3, r3, 4
	add      r3, r29, r3
	bl       memset
	lwz      r0, 0xa4(r29)
	li       r4, 0
	slwi     r3, r0, 5
	addi     r0, r3, 4
	stwx     r4, r29, r0
	lwz      r3, 0xa8(r29)
	addi     r0, r3, -1
	stw      r0, 0xa8(r29)
	lwz      r0, 0xa8(r29)
	cmpwi    r0, 0
	bge      lbl_804412AC
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0x11d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804412AC:
	lwz      r3, 0xa4(r29)
	addi     r0, r3, 1
	cmplwi   r0, 5
	stw      r0, 0xa4(r29)
	bne      lbl_804412C8
	li       r0, 0
	stw      r0, 0xa4(r29)

lbl_804412C8:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80441304
	li       r0, 0
	stw      r0, 4(r29)
	stw      r0, 0x24(r29)
	stw      r0, 0x44(r29)
	stw      r0, 0x64(r29)
	stw      r0, 0x84(r29)
	stw      r0, 0xa4(r29)
	stw      r0, 0xa8(r29)

lbl_80441304:
	addi     r3, r29, 0xac
	bl       OSUnlockMutex
	b        lbl_804410EC
	*/
}

/*
 * --INFO--
 * Address:	80441310
 * Size:	000008
 */
u32 MemoryCardMgr::doCardProc(void*, MemoryCardMgrCommand*) { return 0x1; }

/*
 * --INFO--
 * Address:	80441318
 * Size:	000110
 */
void MemoryCardMgr::isErrorOccured()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0xb
	stw      r29, 0x14(r1)
	mr       r29, r3
	lis      r3, lbl_8049AD08@ha
	addi     r31, r3, lbl_8049AD08@l
	addi     r3, r29, 0xac
	bl       OSTryLockMutex
	cmpwi    r3, 0
	beq      lbl_804413FC
	lwz      r0, 0xd4(r29)
	cmplwi   r0, 0xb
	bgt      lbl_804413E0
	lis      r3, lbl_804ECDF0@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804ECDF0@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_80441374:
	li       r30, 1
	b        lbl_804413F4

lbl_8044137C:

lbl_8044137C:
	li       r30, 2
	b        lbl_804413F4

lbl_80441384:
	li       r30, 0
	b        lbl_804413F4

lbl_8044138C:
	li       r30, 4
	b        lbl_804413F4

lbl_80441394:
	li       r30, 3
	b        lbl_804413F4

lbl_8044139C:
	li       r30, 8
	b        lbl_804413F4

lbl_804413A4:
	li       r30, 9
	b        lbl_804413F4

lbl_804413AC:
	li       r30, 6
	b        lbl_804413F4

lbl_804413B4:
	li       r30, 7
	b        lbl_804413F4

lbl_804413BC:
	li       r30, 5
	b        lbl_804413F4

lbl_804413C4:
	addi     r3, r31, 0
	addi     r5, r31, 0x5c
	li       r4, 0x1bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r30, 0xb
	b        lbl_804413F4

lbl_804413E0:
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0x1c4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804413F4:
	addi     r3, r29, 0xac
	bl       OSUnlockMutex

lbl_804413FC:
	subfic   r3, r30, 2
	addi     r0, r30, -2
	or       r0, r3, r0
	srwi     r3, r0, 0x1f
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80441428
 * Size:	0001A0
 */
void MemoryCardMgr::fileOpen(CARDFileInfo*, MemoryCardMgr::ECardSlot, const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r8, 0x1
	  lis       r7, 0x804A
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r31, r5
	  subfic    r0, r31, 0x1
	  mr        r29, r3
	  orc       r5, r8, r31
	  mr        r30, r4
	  rlwinm    r0,r0,31,1,31
	  mr        r25, r6
	  sub       r0, r5, r0
	  subi      r28, r7, 0x52F8
	  rlwinm.   r0,r0,1,31,31
	  bne-      .loc_0x48
	  li        r8, 0

	.loc_0x48:
	  rlwinm.   r0,r8,0,24,31
	  bne-      .loc_0x64
	  addi      r3, r28, 0
	  addi      r5, r28, 0x38
	  li        r4, 0x218
	  crclr     6, 0x6
	  bl        -0x416E48

	.loc_0x64:
	  addi      r3, r29, 0xAC
	  li        r26, 0
	  li        r27, 0xB
	  bl        -0x35171C
	  cmpwi     r3, 0
	  beq-      .loc_0x128
	  lwz       r0, 0xD4(r29)
	  cmplwi    r0, 0xB
	  bgt-      .loc_0x10C
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x31E0
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r27, 0x1
	  b         .loc_0x120
	  li        r27, 0x2
	  b         .loc_0x120
	  li        r27, 0
	  b         .loc_0x120
	  li        r27, 0x4
	  b         .loc_0x120
	  li        r27, 0x3
	  b         .loc_0x120
	  li        r27, 0x8
	  b         .loc_0x120
	  li        r27, 0x9
	  b         .loc_0x120
	  li        r27, 0x6
	  b         .loc_0x120
	  li        r27, 0x7
	  b         .loc_0x120
	  li        r27, 0x5
	  b         .loc_0x120
	  addi      r3, r28, 0
	  addi      r5, r28, 0x5C
	  li        r4, 0x1BF
	  crclr     6, 0x6
	  bl        -0x416EE8
	  li        r27, 0xB
	  b         .loc_0x120

	.loc_0x10C:
	  addi      r3, r28, 0
	  addi      r5, r28, 0x38
	  li        r4, 0x1C4
	  crclr     6, 0x6
	  bl        -0x416F04

	.loc_0x120:
	  addi      r3, r29, 0xAC
	  bl        -0x351908

	.loc_0x128:
	  cmplwi    r27, 0x2
	  bne-      .loc_0x188
	  mr        r3, r31
	  mr        r4, r25
	  mr        r5, r30
	  bl        -0x367C24
	  cmpwi     r3, 0
	  beq-      .loc_0x158
	  bge-      .loc_0x17C
	  cmpwi     r3, -0x3
	  beq-      .loc_0x16C
	  b         .loc_0x17C

	.loc_0x158:
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x12B8
	  li        r26, 0x1
	  b         .loc_0x188

	.loc_0x16C:
	  mr        r3, r29
	  li        r4, 0
	  bl        0x12A4
	  b         .loc_0x188

	.loc_0x17C:
	  mr        r3, r29
	  li        r4, 0x3
	  bl        0x1294

	.loc_0x188:
	  mr        r3, r26
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804415C8
 * Size:	000278
 */
void MemoryCardMgr::writeHeader(MemoryCardMgr::ECardSlot, const char*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	li       r7, 1
	lis      r6, lbl_8049AD08@ha
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r29, r4
	subfic   r0, r29, 1
	mr       r28, r3
	orc      r4, r7, r29
	mr       r30, r5
	srwi     r0, r0, 1
	addi     r27, r6, lbl_8049AD08@l
	subf     r0, r0, r4
	li       r31, 0
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	bne      lbl_80441610
	li       r7, 0

lbl_80441610:
	clrlwi.  r0, r7, 0x18
	bne      lbl_8044162C
	addi     r3, r27, 0
	addi     r5, r27, 0x38
	li       r4, 0x218
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044162C:
	addi     r3, r28, 0xac
	li       r26, 0
	li       r25, 0xb
	bl       OSTryLockMutex
	cmpwi    r3, 0
	beq      lbl_804416F0
	lwz      r0, 0xd4(r28)
	cmplwi   r0, 0xb
	bgt      lbl_804416D4
	lis      r3, lbl_804ECE50@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804ECE50@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_80441668:
	li       r25, 1
	b        lbl_804416E8

lbl_80441670:

lbl_80441670:
	li       r25, 2
	b        lbl_804416E8

lbl_80441678:
	li       r25, 0
	b        lbl_804416E8

lbl_80441680:
	li       r25, 4
	b        lbl_804416E8

lbl_80441688:
	li       r25, 3
	b        lbl_804416E8

lbl_80441690:
	li       r25, 8
	b        lbl_804416E8

lbl_80441698:
	li       r25, 9
	b        lbl_804416E8

lbl_804416A0:
	li       r25, 6
	b        lbl_804416E8

lbl_804416A8:
	li       r25, 7
	b        lbl_804416E8

lbl_804416B0:
	li       r25, 5
	b        lbl_804416E8

lbl_804416B8:
	addi     r3, r27, 0
	addi     r5, r27, 0x5c
	li       r4, 0x1bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r25, 0xb
	b        lbl_804416E8

lbl_804416D4:
	addi     r3, r27, 0
	addi     r5, r27, 0x38
	li       r4, 0x1c4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804416E8:
	addi     r3, r28, 0xac
	bl       OSUnlockMutex

lbl_804416F0:
	cmplwi   r25, 2
	bne      lbl_80441750
	mr       r3, r29
	mr       r4, r30
	addi     r5, r1, 8
	bl       CARDOpen
	cmpwi    r3, 0
	beq      lbl_80441720
	bge      lbl_80441744
	cmpwi    r3, -3
	beq      lbl_80441734
	b        lbl_80441744

lbl_80441720:
	mr       r3, r28
	li       r4, 1
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r26, 1
	b        lbl_80441750

lbl_80441734:
	mr       r3, r28
	li       r4, 0
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_80441750

lbl_80441744:
	mr       r3, r28
	li       r4, 3
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_80441750:
	clrlwi.  r0, r26, 0x18
	beq      lbl_80441820
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xcc(r28)
	li       r5, -32
	bl       __nwa__FUlP7JKRHeapi
	mr       r0, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	mr       r25, r0
	mr       r4, r25
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r25
	bl       DCFlushRange
	mr       r3, r28
	li       r4, 0xb
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	mr       r4, r25
	addi     r3, r1, 8
	li       r6, 0
	bl       CARDWrite
	cmpwi    r3, 0
	beq      lbl_804417F8
	b        lbl_8044180C

lbl_804417F8:
	mr       r3, r28
	li       r4, 1
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r31, 1
	b        lbl_80441818

lbl_8044180C:
	mr       r3, r28
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_80441818:
	mr       r3, r25
	bl       __dl__FPv

lbl_80441820:
	addi     r3, r1, 8
	bl       CARDClose
	mr       r3, r31
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80441840
 * Size:	000008
 */
u32 MemoryCardMgr::getHeaderSize() { return 0x2000; }

/*
 * --INFO--
 * Address:	80441848
 * Size:	000254
 */
void MemoryCardMgr::writeCardStatus(MemoryCardMgr::ECardSlot, const char*)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	li       r7, 1
	lis      r6, lbl_8049AD08@ha
	stw      r0, 0xb4(r1)
	stmw     r25, 0x94(r1)
	mr       r30, r4
	subfic   r0, r30, 1
	mr       r29, r3
	orc      r4, r7, r30
	mr       r31, r5
	srwi     r0, r0, 1
	addi     r28, r6, lbl_8049AD08@l
	subf     r0, r0, r4
	li       r25, 0
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	bne      lbl_80441890
	li       r7, 0

lbl_80441890:
	clrlwi.  r0, r7, 0x18
	bne      lbl_804418AC
	addi     r3, r28, 0
	addi     r5, r28, 0x38
	li       r4, 0x218
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804418AC:
	addi     r3, r29, 0xac
	li       r27, 0
	li       r26, 0xb
	bl       OSTryLockMutex
	cmpwi    r3, 0
	beq      lbl_80441970
	lwz      r0, 0xd4(r29)
	cmplwi   r0, 0xb
	bgt      lbl_80441954
	lis      r3, lbl_804ECE80@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804ECE80@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_804418E8:
	li       r26, 1
	b        lbl_80441968

lbl_804418F0:

lbl_804418F0:
	li       r26, 2
	b        lbl_80441968

lbl_804418F8:
	li       r26, 0
	b        lbl_80441968

lbl_80441900:
	li       r26, 4
	b        lbl_80441968

lbl_80441908:
	li       r26, 3
	b        lbl_80441968

lbl_80441910:
	li       r26, 8
	b        lbl_80441968

lbl_80441918:
	li       r26, 9
	b        lbl_80441968

lbl_80441920:
	li       r26, 6
	b        lbl_80441968

lbl_80441928:
	li       r26, 7
	b        lbl_80441968

lbl_80441930:
	li       r26, 5
	b        lbl_80441968

lbl_80441938:
	addi     r3, r28, 0
	addi     r5, r28, 0x5c
	li       r4, 0x1bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r26, 0xb
	b        lbl_80441968

lbl_80441954:
	addi     r3, r28, 0
	addi     r5, r28, 0x38
	li       r4, 0x1c4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80441968:
	addi     r3, r29, 0xac
	bl       OSUnlockMutex

lbl_80441970:
	cmplwi   r26, 2
	bne      lbl_804419D0
	mr       r3, r30
	mr       r4, r31
	addi     r5, r1, 8
	bl       CARDOpen
	cmpwi    r3, 0
	beq      lbl_804419A0
	bge      lbl_804419C4
	cmpwi    r3, -3
	beq      lbl_804419B4
	b        lbl_804419C4

lbl_804419A0:
	mr       r3, r29
	li       r4, 1
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r27, 1
	b        lbl_804419D0

lbl_804419B4:
	mr       r3, r29
	li       r4, 0
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_804419D0

lbl_804419C4:
	mr       r3, r29
	li       r4, 3
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_804419D0:
	clrlwi.  r0, r27, 0x18
	beq      lbl_80441A7C
	lwz      r4, 0xc(r1)
	mr       r3, r30
	addi     r5, r1, 0x1c
	bl       CARDGetStatus
	cmpwi    r3, 0
	bne      lbl_80441A70
	mr       r3, r29
	addi     r4, r1, 0x1c
	lwz      r12, 0(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80441A7C
	mr       r3, r29
	addi     r4, r1, 0x1c
	lwz      r12, 0(r29)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	li       r4, 0xb
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	lwz      r4, 0xc(r1)
	mr       r3, r30
	addi     r5, r1, 0x1c
	bl       CARDSetStatus
	cmpwi    r3, 0
	beq      lbl_80441A5C
	mr       r3, r29
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_80441A7C

lbl_80441A5C:
	mr       r3, r29
	li       r4, 1
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r25, 1
	b        lbl_80441A7C

lbl_80441A70:
	mr       r3, r29
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_80441A7C:
	addi     r3, r1, 8
	bl       CARDClose
	mr       r3, r25
	lmw      r25, 0x94(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80441A9C
 * Size:	000204
 */
void MemoryCardMgr::write(MemoryCardMgr::ECardSlot, const char*, unsigned char*, long, long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  li        r10, 0x1
	  lis       r9, 0x804A
	  stw       r0, 0x54(r1)
	  stmw      r22, 0x28(r1)
	  mr        r26, r4
	  subfic    r0, r26, 0x1
	  mr        r25, r3
	  orc       r4, r10, r26
	  mr        r27, r5
	  rlwinm    r0,r0,31,1,31
	  mr        r28, r6
	  sub       r0, r4, r0
	  mr        r29, r7
	  rlwinm.   r0,r0,1,31,31
	  mr        r30, r8
	  subi      r24, r9, 0x52F8
	  li        r31, 0
	  bne-      .loc_0x54
	  li        r10, 0

	.loc_0x54:
	  rlwinm.   r0,r10,0,24,31
	  bne-      .loc_0x70
	  addi      r3, r24, 0
	  addi      r5, r24, 0x38
	  li        r4, 0x218
	  crclr     6, 0x6
	  bl        -0x4174C8

	.loc_0x70:
	  addi      r3, r25, 0xAC
	  li        r23, 0
	  li        r22, 0xB
	  bl        -0x351D9C
	  cmpwi     r3, 0
	  beq-      .loc_0x134
	  lwz       r0, 0xD4(r25)
	  cmplwi    r0, 0xB
	  bgt-      .loc_0x118
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x3150
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r22, 0x1
	  b         .loc_0x12C
	  li        r22, 0x2
	  b         .loc_0x12C
	  li        r22, 0
	  b         .loc_0x12C
	  li        r22, 0x4
	  b         .loc_0x12C
	  li        r22, 0x3
	  b         .loc_0x12C
	  li        r22, 0x8
	  b         .loc_0x12C
	  li        r22, 0x9
	  b         .loc_0x12C
	  li        r22, 0x6
	  b         .loc_0x12C
	  li        r22, 0x7
	  b         .loc_0x12C
	  li        r22, 0x5
	  b         .loc_0x12C
	  addi      r3, r24, 0
	  addi      r5, r24, 0x5C
	  li        r4, 0x1BF
	  crclr     6, 0x6
	  bl        -0x417568
	  li        r22, 0xB
	  b         .loc_0x12C

	.loc_0x118:
	  addi      r3, r24, 0
	  addi      r5, r24, 0x38
	  li        r4, 0x1C4
	  crclr     6, 0x6
	  bl        -0x417584

	.loc_0x12C:
	  addi      r3, r25, 0xAC
	  bl        -0x351F88

	.loc_0x134:
	  cmplwi    r22, 0x2
	  bne-      .loc_0x194
	  mr        r3, r26
	  mr        r4, r27
	  addi      r5, r1, 0x8
	  bl        -0x3682A4
	  cmpwi     r3, 0
	  beq-      .loc_0x164
	  bge-      .loc_0x188
	  cmpwi     r3, -0x3
	  beq-      .loc_0x178
	  b         .loc_0x188

	.loc_0x164:
	  mr        r3, r25
	  li        r4, 0x1
	  bl        0xC38
	  li        r23, 0x1
	  b         .loc_0x194

	.loc_0x178:
	  mr        r3, r25
	  li        r4, 0
	  bl        0xC24
	  b         .loc_0x194

	.loc_0x188:
	  mr        r3, r25
	  li        r4, 0x3
	  bl        0xC14

	.loc_0x194:
	  rlwinm.   r0,r23,0,24,31
	  beq-      .loc_0x1EC
	  mr        r3, r25
	  li        r4, 0xB
	  bl        0xC00
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  addi      r3, r1, 0x8
	  bl        -0x367664
	  cmpwi     r3, 0
	  beq-      .loc_0x1D4
	  mr        r3, r25
	  li        r4, 0xA
	  bl        0xBD8
	  b         .loc_0x1E4

	.loc_0x1D4:
	  mr        r3, r25
	  li        r4, 0x1
	  bl        0xBC8
	  li        r31, 0x1

	.loc_0x1E4:
	  addi      r3, r1, 0x8
	  bl        -0x368228

	.loc_0x1EC:
	  mr        r3, r31
	  lmw       r22, 0x28(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80441CA0
 * Size:	0000C4
 */
void MemoryCardMgr::checkCardStat(MemoryCardMgr::ECardSlot, CARDFileInfo*)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	li       r31, 0
	stw      r30, 0x88(r1)
	mr       r30, r5
	stw      r29, 0x84(r1)
	mr       r29, r4
	li       r4, 0xb
	stw      r28, 0x80(r1)
	mr       r28, r3
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	lwz      r4, 4(r30)
	mr       r3, r29
	addi     r5, r1, 8
	bl       CARDGetStatus
	cmpwi    r3, 0
	bne      lbl_80441D30
	mr       r3, r28
	addi     r4, r1, 8
	lwz      r12, 0(r28)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	mr       r31, r3
	beq      lbl_80441D20
	mr       r3, r28
	li       r4, 1
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_80441D3C

lbl_80441D20:
	mr       r3, r28
	li       r4, 1
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_80441D3C

lbl_80441D30:
	mr       r3, r28
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_80441D3C:
	stb      r31, 0xd0(r28)
	mr       r3, r31
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	lwz      r28, 0x80(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80441D64
 * Size:	000280
 */
void MemoryCardMgr::read(MemoryCardMgr::ECardSlot, const char*, unsigned char*, long, long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  li        r10, 0x1
	  lis       r9, 0x804A
	  stw       r0, 0xB4(r1)
	  stmw      r22, 0x88(r1)
	  mr        r26, r4
	  subfic    r0, r26, 0x1
	  mr        r25, r3
	  orc       r4, r10, r26
	  mr        r27, r5
	  rlwinm    r0,r0,31,1,31
	  mr        r28, r6
	  sub       r0, r4, r0
	  mr        r29, r7
	  rlwinm.   r0,r0,1,31,31
	  mr        r30, r8
	  subi      r24, r9, 0x52F8
	  li        r31, 0
	  bne-      .loc_0x54
	  li        r10, 0

	.loc_0x54:
	  rlwinm.   r0,r10,0,24,31
	  bne-      .loc_0x70
	  addi      r3, r24, 0
	  addi      r5, r24, 0x38
	  li        r4, 0x218
	  crclr     6, 0x6
	  bl        -0x417790

	.loc_0x70:
	  addi      r3, r25, 0xAC
	  li        r23, 0
	  li        r22, 0xB
	  bl        -0x352064
	  cmpwi     r3, 0
	  beq-      .loc_0x134
	  lwz       r0, 0xD4(r25)
	  cmplwi    r0, 0xB
	  bgt-      .loc_0x118
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x3120
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r22, 0x1
	  b         .loc_0x12C
	  li        r22, 0x2
	  b         .loc_0x12C
	  li        r22, 0
	  b         .loc_0x12C
	  li        r22, 0x4
	  b         .loc_0x12C
	  li        r22, 0x3
	  b         .loc_0x12C
	  li        r22, 0x8
	  b         .loc_0x12C
	  li        r22, 0x9
	  b         .loc_0x12C
	  li        r22, 0x6
	  b         .loc_0x12C
	  li        r22, 0x7
	  b         .loc_0x12C
	  li        r22, 0x5
	  b         .loc_0x12C
	  addi      r3, r24, 0
	  addi      r5, r24, 0x5C
	  li        r4, 0x1BF
	  crclr     6, 0x6
	  bl        -0x417830
	  li        r22, 0xB
	  b         .loc_0x12C

	.loc_0x118:
	  addi      r3, r24, 0
	  addi      r5, r24, 0x38
	  li        r4, 0x1C4
	  crclr     6, 0x6
	  bl        -0x41784C

	.loc_0x12C:
	  addi      r3, r25, 0xAC
	  bl        -0x352250

	.loc_0x134:
	  cmplwi    r22, 0x2
	  bne-      .loc_0x194
	  mr        r3, r26
	  mr        r4, r27
	  addi      r5, r1, 0x8
	  bl        -0x36856C
	  cmpwi     r3, 0
	  beq-      .loc_0x164
	  bge-      .loc_0x188
	  cmpwi     r3, -0x3
	  beq-      .loc_0x178
	  b         .loc_0x188

	.loc_0x164:
	  mr        r3, r25
	  li        r4, 0x1
	  bl        0x970
	  li        r23, 0x1
	  b         .loc_0x194

	.loc_0x178:
	  mr        r3, r25
	  li        r4, 0
	  bl        0x95C
	  b         .loc_0x194

	.loc_0x188:
	  mr        r3, r25
	  li        r4, 0x3
	  bl        0x94C

	.loc_0x194:
	  rlwinm.   r0,r23,0,24,31
	  beq-      .loc_0x268
	  mr        r3, r25
	  li        r23, 0
	  li        r4, 0xB
	  bl        0x934
	  lwz       r4, 0xC(r1)
	  mr        r3, r26
	  addi      r5, r1, 0x1C
	  bl        -0x3676EC
	  cmpwi     r3, 0
	  bne-      .loc_0x208
	  mr        r3, r25
	  addi      r4, r1, 0x1C
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  mr        r23, r3
	  beq-      .loc_0x1F8
	  mr        r3, r25
	  li        r4, 0x1
	  bl        0x8EC
	  b         .loc_0x214

	.loc_0x1F8:
	  mr        r3, r25
	  li        r4, 0x1
	  bl        0x8DC
	  b         .loc_0x214

	.loc_0x208:
	  mr        r3, r25
	  li        r4, 0xA
	  bl        0x8CC

	.loc_0x214:
	  stb       r23, 0xD0(r25)
	  mr        r3, r25
	  li        r4, 0xB
	  bl        0x8BC
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  addi      r3, r1, 0x8
	  bl        -0x367D24
	  cmpwi     r3, 0
	  beq-      .loc_0x250
	  mr        r3, r25
	  li        r4, 0xA
	  bl        0x894
	  b         .loc_0x260

	.loc_0x250:
	  mr        r3, r25
	  li        r4, 0x1
	  bl        0x884
	  li        r31, 0x1

	.loc_0x260:
	  addi      r3, r1, 0x8
	  bl        -0x36856C

	.loc_0x268:
	  mr        r3, r31
	  lmw       r22, 0x88(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80441FE4
 * Size:	000088
 */
void MemoryCardMgr::format(MemoryCardMgr::ECardSlot)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, sCardWorkArea@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, sCardWorkArea@l
	li       r5, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r0
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       CARDMount
	mr       r3, r30
	li       r4, 0xb
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	mr       r3, r31
	bl       CARDFormat
	cmpwi    r3, 0
	beq      lbl_80442038
	b        lbl_80442048

lbl_80442038:
	mr       r3, r30
	li       r4, 2
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_80442054

lbl_80442048:
	mr       r3, r30
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_80442054:
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
 * Address:	8044206C
 * Size:	000098
 */
void MemoryCardMgr::attach(MemoryCardMgr::ECardSlot)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	addi     r5, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r4
	addi     r4, r1, 0xc
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	bl       CARDProbeEx
	cmpwi    r3, -2
	bne      lbl_804420B0
	mr       r3, r30
	li       r4, 8
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_804420EC

lbl_804420B0:
	lwz      r0, 8(r1)
	cmpwi    r0, 0x2000
	beq      lbl_804420CC
	mr       r3, r30
	li       r4, 9
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_804420EC

lbl_804420CC:
	mr       r3, r30
	mr       r4, r31
	bl       mount__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlot
	clrlwi.  r0, r3, 0x18
	beq      lbl_804420EC
	mr       r3, r30
	li       r4, 2
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_804420EC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80442104
 * Size:	00003C
 */
void MemoryCardMgr::detach(MemoryCardMgr::ECardSlot)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r3, r4
	bl       CARDUnmount
	mr       r3, r31
	li       r4, 0
	bl
	resetInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80442140
 * Size:	000168
 */
void MemoryCardMgr::mount(MemoryCardMgr::ECardSlot)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, sCardWorkArea@ha
	stw      r0, 0x24(r1)
	addi     r0, r5, sCardWorkArea@l
	li       r5, 0
	stw      r31, 0x1c(r1)
	mr       r31, r4
	mr       r4, r0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r31
	bl       CARDMount
	cmpwi    r3, -5
	beq      lbl_804421C4
	bge      lbl_804421AC
	cmpwi    r3, -13
	beq      lbl_80442258
	bge      lbl_804421A0
	cmpwi    r3, -128
	beq      lbl_804421C4
	b        lbl_8044226C

lbl_804421A0:
	cmpwi    r3, -6
	bge      lbl_804421EC
	b        lbl_8044226C

lbl_804421AC:
	cmpwi    r3, 0
	beq      lbl_804421EC
	bge      lbl_8044226C
	cmpwi    r3, -3
	beq      lbl_804421D8
	b        lbl_8044226C

lbl_804421C4:
	mr       r3, r29
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r30, 0
	b        lbl_80442288

lbl_804421D8:
	mr       r3, r29
	li       r4, 0
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r30, 0
	b        lbl_80442288

lbl_804421EC:
	mr       r3, r31
	bl       CARDCheck
	cmpwi    r3, -5
	beq      lbl_80442220
	bge      lbl_8044220C
	cmpwi    r3, -128
	beq      lbl_80442220
	b        lbl_80442234

lbl_8044220C:
	cmpwi    r3, 0
	beq      lbl_80442218
	b        lbl_80442234

lbl_80442218:
	li       r30, 1
	b        lbl_80442244

lbl_80442220:
	mr       r3, r29
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r30, 0
	b        lbl_80442244

lbl_80442234:
	mr       r3, r29
	li       r4, 5
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r30, 0

lbl_80442244:
	clrlwi.  r0, r30, 0x18
	bne      lbl_80442288
	mr       r3, r31
	bl       CARDUnmount
	b        lbl_80442288

lbl_80442258:
	mr       r3, r29
	li       r4, 4
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	li       r30, 0
	b        lbl_80442288

lbl_8044226C:
	lis      r3, lbl_8049AD08@ha
	lis      r5, lbl_8049AD40@ha
	addi     r3, r3, lbl_8049AD08@l
	li       r4, 0x3dd
	addi     r5, r5, lbl_8049AD40@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80442288:
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	804422A8
 * Size:	0000FC
 */
void MemoryCardMgr::checkSpace(MemoryCardMgr::ECardSlot, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	mr       r0, r4
	addi     r4, r1, 0xc
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	addi     r5, r1, 8
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r0
	bl       CARDFreeBlocks
	mr       r31, r3
	cmpwi    r31, -1
	bne      lbl_80442304
	lis      r3, lbl_8049AD08@ha
	lis      r5, lbl_8049AD40@ha
	addi     r3, r3, lbl_8049AD08@l
	li       r4, 0x3f3
	addi     r5, r5, lbl_8049AD40@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80442304:
	cmpwi    r31, -6
	beq      lbl_80442348
	bge      lbl_8044231C
	cmpwi    r31, -128
	beq      lbl_80442328
	b        lbl_80442354

lbl_8044231C:
	cmpwi    r31, -3
	beq      lbl_80442338
	b        lbl_80442354

lbl_80442328:
	mr       r3, r29
	li       r4, 0xa
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_80442354

lbl_80442338:
	mr       r3, r29
	li       r4, 0
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
	b        lbl_80442354

lbl_80442348:
	mr       r3, r29
	li       r4, 5
	bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_80442354:
	lwz      r0, 0xc(r1)
	cmpw     r0, r30
	bge      lbl_80442368
	li       r3, 1
	b        lbl_80442388

lbl_80442368:
	lwz      r5, 8(r1)
	li       r3, 1
	srwi     r4, r3, 0x1f
	li       r0, 2
	subfc    r3, r3, r5
	srwi     r3, r5, 0x1f
	subfe    r3, r3, r4
	and      r3, r0, r3

lbl_80442388:
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
 * Address:	804423A4
 * Size:	000104
 */
void MemoryCardMgr::doMakeHeader(unsigned char*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r3, lbl_8049AD78@ha
	stw      r0, 0x54(r1)
	addi     r5, r3, lbl_8049AD78@l
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r29, r4
	li       r4, 0x20
	addi     r3, r29, 0x1c00
	crclr    6
	bl       snprintf
	bl       OSGetTime
	addi     r5, r1, 0x10
	bl       OSTicksToCalendarTime
	lwz      r0, 0x10(r1)
	lis      r3, lbl_8049AD94@ha
	addi     r5, r3, lbl_8049AD94@l
	li       r4, 0x20
	stw      r0, 8(r1)
	addi     r3, r29, 0x1c20
	lwz      r7, 0x20(r1)
	lwz      r6, 0x24(r1)
	lwz      r8, 0x1c(r1)
	addi     r7, r7, 1
	lwz      r9, 0x18(r1)
	lwz      r10, 0x14(r1)
	crclr    6
	bl       snprintf
	mr       r3, r29
	li       r4, 0
	li       r5, 0xe00
	bl       memset
	li       r3, 0xf0
	li       r0, 0xff
	stb      r3, 0xc00(r29)
	li       r30, 0
	li       r31, 0xe00
	stb      r0, 0xc01(r29)

lbl_80442444:
	mr       r4, r30
	add      r3, r29, r31
	li       r5, 0x400
	bl       memset
	addi     r30, r30, 1
	addi     r31, r31, 0x400
	cmpwi    r30, 3
	blt      lbl_80442444
	li       r5, 0xff
	li       r4, 0xf
	stb      r5, 0x1a00(r29)
	li       r3, 0
	li       r0, 0xf0
	stb      r4, 0x1a01(r29)
	stb      r5, 0x1a02(r29)
	stb      r3, 0x1a03(r29)
	stb      r5, 0x1a04(r29)
	stb      r0, 0x1a05(r29)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	804424A8
 * Size:	0000E0
 */
void MemoryCardMgr::doCheckCardStat(CARDStat*)
{
	/*
	lwz      r0, 0x30(r4)
	cmplwi   r0, 0
	bne      lbl_80442578
	lwz      r0, 0x38(r4)
	cmplwi   r0, 0x1c00
	bne      lbl_80442578
	lbz      r3, 0x2e(r4)
	clrlwi   r0, r3, 0x1e
	cmpwi    r0, 1
	bne      lbl_80442578
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	bne      lbl_80442578
	lhz      r3, 0x34(r4)
	clrlwi   r0, r3, 0x1e
	cmpwi    r0, 1
	bne      lbl_80442578
	rlwinm   r0, r3, 0x1e, 0x1e, 0x1f
	cmpwi    r0, 1
	bne      lbl_80442578
	rlwinm   r0, r3, 0x1c, 0x1e, 0x1f
	cmpwi    r0, 1
	bne      lbl_80442578
	rlwinm.  r0, r3, 0x1a, 0x1e, 0x1f
	bne      lbl_80442578
	rlwinm.  r0, r3, 0x18, 0x1e, 0x1f
	bne      lbl_80442578
	rlwinm.  r0, r3, 0x16, 0x1e, 0x1f
	bne      lbl_80442578
	rlwinm.  r0, r3, 0x14, 0x1e, 0x1f
	bne      lbl_80442578
	rlwinm.  r0, r3, 0x12, 0x1e, 0x1f
	bne      lbl_80442578
	lhz      r3, 0x36(r4)
	clrlwi   r0, r3, 0x1e
	cmpwi    r0, 3
	bne      lbl_80442578
	rlwinm   r0, r3, 0x1e, 0x1e, 0x1f
	cmpwi    r0, 3
	bne      lbl_80442578
	rlwinm   r0, r3, 0x1c, 0x1e, 0x1f
	cmpwi    r0, 3
	bne      lbl_80442578
	rlwinm.  r0, r3, 0x1a, 0x1e, 0x1f
	bne      lbl_80442578
	rlwinm.  r0, r3, 0x18, 0x1e, 0x1f
	bne      lbl_80442578
	rlwinm.  r0, r3, 0x16, 0x1e, 0x1f
	bne      lbl_80442578
	rlwinm.  r0, r3, 0x14, 0x1e, 0x1f
	bne      lbl_80442578
	rlwinm.  r0, r3, 0x12, 0x1e, 0x1f
	beq      lbl_80442580

lbl_80442578:
	li       r3, 0
	blr

lbl_80442580:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80442588
 * Size:	000108
 */
void MemoryCardMgr::doSetCardStat(CARDStat*)
{
	/*
	li       r3, 0
	li       r0, 0x1c00
	stw      r3, 0x30(r4)
	stw      r0, 0x38(r4)
	lbz      r0, 0x2e(r4)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 1
	stb      r0, 0x2e(r4)
	lbz      r0, 0x2e(r4)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stb      r0, 0x2e(r4)
	lhz      r0, 0x34(r4)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 1
	sth      r0, 0x34(r4)
	lhz      r0, 0x34(r4)
	rlwinm   r0, r0, 0, 0x1e, 0x1b
	ori      r0, r0, 4
	sth      r0, 0x34(r4)
	lhz      r0, 0x34(r4)
	rlwinm   r0, r0, 0, 0x1c, 0x19
	ori      r0, r0, 0x10
	sth      r0, 0x34(r4)
	lhz      r0, 0x34(r4)
	rlwinm   r0, r0, 0, 0x1a, 0x17
	sth      r0, 0x34(r4)
	lhz      r0, 0x34(r4)
	rlwinm   r0, r0, 0, 0x18, 0x15
	sth      r0, 0x34(r4)
	lhz      r0, 0x34(r4)
	rlwinm   r0, r0, 0, 0x16, 0x13
	sth      r0, 0x34(r4)
	lhz      r0, 0x34(r4)
	rlwinm   r0, r0, 0, 0x14, 0x11
	sth      r0, 0x34(r4)
	lhz      r0, 0x34(r4)
	clrlwi   r0, r0, 0x12
	sth      r0, 0x34(r4)
	lhz      r0, 0x36(r4)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 3
	sth      r0, 0x36(r4)
	lhz      r0, 0x36(r4)
	rlwinm   r0, r0, 0, 0x1e, 0x1b
	ori      r0, r0, 0xc
	sth      r0, 0x36(r4)
	lhz      r0, 0x36(r4)
	rlwinm   r0, r0, 0, 0x1c, 0x19
	ori      r0, r0, 0x30
	sth      r0, 0x36(r4)
	lhz      r0, 0x36(r4)
	rlwinm   r0, r0, 0, 0x1a, 0x17
	sth      r0, 0x36(r4)
	lhz      r0, 0x36(r4)
	rlwinm   r0, r0, 0, 0x18, 0x15
	sth      r0, 0x36(r4)
	lhz      r0, 0x36(r4)
	rlwinm   r0, r0, 0, 0x16, 0x13
	sth      r0, 0x36(r4)
	lhz      r0, 0x36(r4)
	rlwinm   r0, r0, 0, 0x14, 0x11
	sth      r0, 0x36(r4)
	lhz      r0, 0x36(r4)
	clrlwi   r0, r0, 0x12
	sth      r0, 0x36(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80442690
 * Size:	0000F8
 */
void MemoryCardMgr::calcCheckSum(void*, unsigned long)
{
	/*
	srwi     r5, r5, 1
	li       r3, 0
	cmplwi   r5, 0
	li       r7, 0
	ble      lbl_80442780
	rlwinm.  r0, r5, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_80442760

lbl_804426B0:
	lhz      r6, 0(r4)
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 2(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 4(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 6(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 8(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 0xa(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 0xc(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	lhz      r6, 0xe(r4)
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	addi     r4, r4, 0x10
	nor      r0, r6, r6
	add      r7, r7, r6
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	bdnz     lbl_804426B0
	andi.    r5, r5, 7
	beq      lbl_80442780

lbl_80442760:
	mtctr    r5

lbl_80442764:
	lhz      r6, 0(r4)
	addi     r4, r4, 2
	nor      r0, r6, r6
	add      r7, r7, r6
	add      r0, r3, r0
	clrlwi   r3, r0, 0x10
	bdnz     lbl_80442764

lbl_80442780:
	rlwimi   r3, r7, 0x10, 0, 0xf
	blr
	*/
}

/*
 * --INFO--
 * Address:	80442788
 * Size:	0000B8
 */
void MemoryCardMgr::readCardSerialNo(unsigned long long*, MemoryCardMgr::ECardSlot)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r5
	  bl        -0x367CA8
	  cmpwi     r3, -0x2
	  beq-      .loc_0x9C
	  bge-      .loc_0x48
	  cmpwi     r3, -0x80
	  beq-      .loc_0x60
	  blt-      .loc_0x9C
	  cmpwi     r3, -0x3
	  bge-      .loc_0x70
	  b         .loc_0x9C

	.loc_0x48:
	  cmpwi     r3, 0
	  beq-      .loc_0x58
	  bge-      .loc_0x9C
	  b         .loc_0x80

	.loc_0x58:
	  li        r31, 0x1
	  b         .loc_0x9C

	.loc_0x60:
	  mr        r3, r30
	  li        r4, 0xA
	  bl        .loc_0xB8
	  b         .loc_0x9C

	.loc_0x70:
	  mr        r3, r30
	  li        r4, 0
	  bl        .loc_0xB8
	  b         .loc_0x9C

	.loc_0x80:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x52F8
	  li        r4, 0x4D2
	  subi      r5, r5, 0x52C0
	  crclr     6, 0x6
	  bl        -0x4181E0

	.loc_0x9C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xB8:
	*/
}

/*
 * --INFO--
 * Address:	80442840
 * Size:	000014
 */
void MemoryCardMgr::setInsideStatusFlag(MemoryCardMgr::EInsideStatusFlag)
{
	/*
	lwz      r0, 0xd4(r3)
	cmpwi    r0, 0xa
	beqlr
	stw      r4, 0xd4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80442854
 * Size:	000008
 */
void MemoryCardMgr::resetInsideStatusFlag(MemoryCardMgr::EInsideStatusFlag a1)
{
	// Generated from stw r4, 0xD4(r3)
	_D4 = a1;
}

/*
 * --INFO--
 * Address:	8044285C
 * Size:	000048
 */
MemoryCardMgr::~MemoryCardMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8044288C
	lis      r5, __vt__13MemoryCardMgr@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__13MemoryCardMgr@l
	stw      r0, 0(r31)
	ble      lbl_8044288C
	bl       __dl__FPv

lbl_8044288C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804428A4
 * Size:	000008
 */
u32 MemoryCardMgrCommand::getClassSize() { return 0x20; }
