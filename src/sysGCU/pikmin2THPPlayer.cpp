#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049B510
    lbl_8049B510:
        .asciz "/thp/opening1.thp"
        .skip 2
    .global lbl_8049B524
    lbl_8049B524:
        .asciz "/thp/opening1.ini"
        .skip 2
    .global lbl_8049B538
    lbl_8049B538:
        .asciz "/thp/opening2.thp"
        .skip 2
    .global lbl_8049B54C
    lbl_8049B54C:
        .asciz "/thp/opening2.ini"
        .skip 2
    .global lbl_8049B560
    lbl_8049B560:
        .asciz "/thp/ending1.thp"
        .skip 3
    .global lbl_8049B574
    lbl_8049B574:
        .asciz "/thp/ending1.ini"
        .skip 3
    .global lbl_8049B588
    lbl_8049B588:
        .asciz "/thp/ending2.thp"
        .skip 3
    .global lbl_8049B59C
    lbl_8049B59C:
        .asciz "/thp/staffroll.thp"
        .skip 1
    .global lbl_8049B5B0
    lbl_8049B5B0:
        .asciz "/thp/play1.thp"
        .skip 1
    .global lbl_8049B5C0
    lbl_8049B5C0:
        .asciz "/thp/play2.thp"
        .skip 1
    .global lbl_8049B5D0
    lbl_8049B5D0:
        .asciz "/thp/play3.thp"
        .skip 1
    .global lbl_8049B5E0
    lbl_8049B5E0:
        .asciz "/thp/play4.thp"
        .skip 1
    .global lbl_8049B5F0
    lbl_8049B5F0:
        .asciz "/thp/play5.thp"
        .skip 1
    .global lbl_8049B600
    lbl_8049B600:
        .asciz "/thp/play6.thp"
        .skip 1
    .global lbl_8049B610
    lbl_8049B610:
        .asciz "/thp/crime.thp"
        .skip 1
    .global lbl_8049B620
    lbl_8049B620:
        .asciz "/thp/crime.ini"
        .skip 1
    .global "sTHPFileSettingTable__Q24Game30@unnamed@pikmin2THPPlayer_cpp@"
    "sTHPFileSettingTable__Q24Game30@unnamed@pikmin2THPPlayer_cpp@":
        .4byte lbl_8049B510
        .4byte lbl_8049B524
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte lbl_8049B538
        .4byte lbl_8049B54C
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte lbl_8049B560
        .4byte lbl_8049B574
        .4byte 0x00000000
        .4byte 0x00000002
        .4byte lbl_8049B588
        .4byte lbl_80520B10
        .4byte 0x00000000
        .4byte 0x00000003
        .4byte lbl_8049B59C
        .4byte lbl_80520B10
        .4byte 0x00000000
        .4byte 0x00000004
        .4byte lbl_8049B5B0
        .4byte lbl_80520B10
        .4byte 0x00000000
        .4byte 0x00000005
        .4byte lbl_8049B5C0
        .4byte lbl_80520B10
        .4byte 0x00000000
        .4byte 0x00000006
        .4byte lbl_8049B5D0
        .4byte lbl_80520B10
        .4byte 0x00000000
        .4byte 0x00000007
        .4byte lbl_8049B5E0
        .4byte lbl_80520B10
        .4byte 0x00000000
        .4byte 0x00000008
        .4byte lbl_8049B5F0
        .4byte lbl_80520B10
        .4byte 0x00000000
        .4byte 0x00000009
        .4byte lbl_8049B600
        .4byte lbl_80520B10
        .4byte 0x00000000
        .4byte 0x0000000A
        .4byte lbl_8049B610
        .4byte lbl_8049B620
        .4byte 0x00000000
        .4byte 0x0000000B
    .global lbl_8049B6F0
    lbl_8049B6F0:
        .asciz "THPPlayer"
        .skip 2
    .global lbl_8049B6FC
    lbl_8049B6FC:
        .asciz "pikmin2THPPlayer.cpp"
        .skip 3
    .global lbl_8049B714
    lbl_8049B714:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8049B720
    lbl_8049B720:
        .asciz "THPPlayerInit failure."
        .skip 1
        .asciz "THPPlayer::loadResource"
        .asciz "THPPlayer_Resource"
        .skip 1
        .asciz "THPPlayr_caption"
        .skip 3
        .asciz "fail to open the caption file\n[%s]\n"
        .asciz "THPPlayerOpen"
        .skip 2
        .asciz "Fail to open the thp file\n[%s]\n"
        .asciz "THPPlayer_prepare"
        .skip 2
        .asciz "THPPlayer_work"
        .skip 1
        .asciz "Can't allocate the memory"
        .skip 2
        .asciz "Fail to prepare\n"
        .skip 3
    .global lbl_8049B820
    lbl_8049B820:
        .asciz "PSSystemIF.h"
        .skip 3
    .global lbl_8049B830
    lbl_8049B830:
        .asciz "Unknown State : %d \n"
        .skip 3

    .section .data, "wa"	# 0x8049E220 - 0x804EFC20
    .global lbl_804ED4C0
    lbl_804ED4C0:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadResource__Q24Game9THPPlayerFv
    .global __vt__Q24Game9THPPlayer
    __vt__Q24Game9THPPlayer:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game9THPPlayerFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q24Game9THPPlayerFv"
        .4byte getChildCount__5CNodeFv
        .4byte update__Q24Game9THPPlayerFv
        .4byte draw__Q24Game9THPPlayerFR8Graphics
        .4byte draw__Q24Game9THPPlayerFR8GraphicsllUlUl
        .4byte draw__Q24Game9THPPlayerFR8Graphicsllf
    .global "__vt__27Delegate<Q24Game9THPPlayer>"
    "__vt__27Delegate<Q24Game9THPPlayer>":
        .4byte 0
        .4byte 0
        .4byte "invoke__27Delegate<Q24Game9THPPlayer>Fv"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520B10
    lbl_80520B10:
        .4byte 0x00000000
    .global lbl_80520B14
    lbl_80520B14:
        .float 127.0
    .global lbl_80520B18
    lbl_80520B18:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8044FDF0
 * Size:	000118
 */
THPPlayer::THPPlayer(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__5CNode@ha
	lis      r4, lbl_8049B6F0@ha
	addi     r0, r3, __vt__5CNode@l
	lis      r3, __vt__Q24Game9THPPlayer@ha
	stw      r0, 0x18(r31)
	li       r7, 0
	addi     r5, r3, __vt__Q24Game9THPPlayer@l
	addi     r6, r4, lbl_8049B6F0@l
	stw      r7, 0x28(r31)
	addi     r4, r5, 0xc
	li       r0, -1
	addi     r3, r31, 0x5c
	stw      r7, 0x24(r31)
	stw      r7, 0x20(r31)
	stw      r7, 0x1c(r31)
	stw      r6, 0x2c(r31)
	stw      r5, 0(r31)
	stw      r4, 0x18(r31)
	stw      r7, 0x30(r31)
	stw      r0, 0x34(r31)
	stw      r7, 0x58(r31)
	bl       __ct__16DvdThreadCommandFv
	lis      r3, lbl_804ED4C0@ha
	lis      r4, __vt__9IDelegate@ha
	addi     r7, r3, lbl_804ED4C0@l
	lis      r3, "__vt__27Delegate<Q24Game9THPPlayer>"@ha
	lwz      r9, 0(r7)
	addi     r6, r4, __vt__9IDelegate@l
	lwz      r8, 4(r7)
	addi     r5, r3, "__vt__27Delegate<Q24Game9THPPlayer>"@l
	lwz      r7, 8(r7)
	li       r4, 0
	li       r0, 1
	stw      r9, 8(r1)
	li       r3, 0x24
	stw      r6, 0xc8(r31)
	stw      r5, 0xc8(r31)
	stw      r31, 0xcc(r31)
	stw      r9, 0xd0(r31)
	stw      r8, 0xd4(r31)
	stw      r7, 0xd8(r31)
	stw      r4, 0xdc(r31)
	stw      r4, 0xe0(r31)
	stb      r4, 0xe4(r31)
	stw      r8, 0xc(r1)
	stw      r7, 0x10(r1)
	stb      r0, 0xe8(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8044FED8
	bl       __ct__Q27Caption3MgrFv
	mr       r0, r3

lbl_8044FED8:
	stw      r0, 0x54(r31)
	addi     r3, r31, 0x18
	lwz      r4, 0x54(r31)
	bl       add__5CNodeFP5CNode
	li       r0, 0
	mr       r3, r31
	stb      r0, 0xe8(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8044FF08
 * Size:	000098
 */
THPPlayer::~THPPlayer(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8044FF84
	lis      r3, __vt__Q24Game9THPPlayer@ha
	addi     r3, r3, __vt__Q24Game9THPPlayer@l
	stw      r3, 0(r30)
	addi     r0, r3, 0xc
	stw      r0, 0x18(r30)
	bl       THPPlayerStop
	bl       THPPlayerQuit
	addic.   r0, r30, 0x5c
	beq      lbl_8044FF5C
	addic.   r3, r30, 0xb8
	beq      lbl_8044FF5C
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8044FF5C:
	addi     r3, r30, 0x18
	li       r4, 0
	bl       __dt__5CNodeFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_8044FF84
	mr       r3, r30
	bl       __dl__FPv

lbl_8044FF84:
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
 * Address:	8044FFA0
 * Size:	0000CC
 */
void THPPlayer::load(Game::THPPlayer::EMovieIndex)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	lis      r4, lbl_8049B510@ha
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r31, r4, lbl_8049B510@l
	blt      lbl_8044FFDC
	cmpwi    r30, 0xc
	bge      lbl_8044FFDC
	li       r0, 1

lbl_8044FFDC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8044FFF8
	addi     r3, r31, 0x1ec
	addi     r5, r31, 0x204
	li       r4, 0xe3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044FFF8:
	slwi     r0, r30, 4
	addi     r30, r31, 0x120
	add      r30, r30, r0
	mr       r3, r29
	lwz      r0, 0(r30)
	lwz      r4, 4(r30)
	stw      r0, 0xdc(r29)
	lbz      r0, 8(r30)
	stw      r4, 0xe0(r29)
	stb      r0, 0xe4(r29)
	bl       load__Q24Game9THPPlayerFv
	lwz      r0, 0xc(r30)
	cmpwi    r0, 0xc
	blt      lbl_80450044
	addi     r3, r31, 0x1ec
	addi     r5, r31, 0x204
	li       r4, 0xeb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80450044:
	lwz      r4, 0xc(r30)
	addi     r3, r13, sTHPDinamicsProc__3PSM@sda21
	bl       setSetting__Q23PSM15THPDinamicsProcFQ23PSM6THP_ID
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
 * Address:	8045006C
 * Size:	00006C
 */
void THPPlayer::load(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 1
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0x30(r3)
	li       r3, 0
	bl       THPPlayerInit
	cmpwi    r3, 0
	bne      lbl_804500B4
	lis      r3, lbl_8049B6FC@ha
	lis      r5, lbl_8049B720@ha
	addi     r3, r3, lbl_8049B6FC@l
	li       r4, 0xf7
	addi     r5, r5, lbl_8049B720@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804500B4:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x5c
	addi     r5, r31, 0xc8
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void THPPlayer::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804500D8
 * Size:	000024
 */
void THPPlayer::loadResource(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r3, 0xdc
	stw      r0, 0x14(r1)
	bl       loadResource__Q24Game9THPPlayerFRCQ24Game24THPPlayerLoadResourceArg
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804500FC
 * Size:	0001CC
 */
void THPPlayer::loadResource(Game::THPPlayerLoadResourceArg const&)
{
	/*
	stwu     r1, -0x450(r1)
	mflr     r0
	lis      r5, lbl_8049B510@ha
	stw      r0, 0x454(r1)
	stmw     r27, 0x43c(r1)
	mr       r27, r3
	mr       r28, r4
	addi     r31, r5, lbl_8049B510@l
	lwz      r30, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       THPPlayerStop
	lwz      r3, 0x54(r27)
	bl       reset__Q27Caption3MgrFv
	lwz      r3, 0x58(r27)
	bl       freeAll__7JKRHeapFv
	lwz      r3, 0x58(r27)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x228
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x240
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, 4(r28)
	lbz      r0, 0(r3)
	extsb.   r0, r0
	beq      lbl_80450214
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x254
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r0, 0
	lwz      r3, 4(r28)
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 1
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r29, r3, r3
	bne      lbl_804501C8
	lwz      r6, 4(r28)
	addi     r3, r31, 0x1ec
	addi     r5, r31, 0x268
	li       r4, 0x137
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804501C8:
	mr       r4, r29
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_804501F0
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_804501F0:
	lwz      r3, 0x54(r27)
	addi     r4, r1, 0x10
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x254
	bl       heapStatusEnd__6SystemFPc

lbl_80450214:
	lwz      r0, 0(r28)
	cmplwi   r0, 0
	beq      lbl_80450268
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x28c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, 0(r28)
	li       r4, 0
	bl       THPPlayerOpen
	cmpwi    r3, 0
	bne      lbl_8045025C
	lwz      r6, 0(r28)
	addi     r3, r31, 0x1ec
	addi     r5, r31, 0x29c
	li       r4, 0x145
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045025C:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x28c
	bl       heapStatusEnd__6SystemFPc

lbl_80450268:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x240
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x2bc
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r27
	bl       prepare__Q24Game9THPPlayerFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x2bc
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x228
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r30
	bl       becomeCurrentHeap__7JKRHeapFv
	mr       r3, r27
	bl       pause__Q24Game9THPPlayerFv
	lmw      r27, 0x43c(r1)
	lwz      r0, 0x454(r1)
	mtlr     r0
	addi     r1, r1, 0x450
	blr
	*/
}

/*
 * --INFO--
 * Address:	804502C8
 * Size:	0000FC
 */
void THPPlayer::prepare(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8049B510@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_8049B510@l
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       getRenderModeObj__6SystemFv
	addi     r3, r28, 0x38
	li       r29, 0
	bl       THPPlayerGetVideoInfo
	addi     r3, r28, 0x44
	bl       THPPlayerGetAudioInfo
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x2d0
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	bl       THPPlayerCalcNeedMemory
	li       r4, 0x20
	bl       __nwa__FUli
	or.      r30, r3, r3
	bne      lbl_80450340
	addi     r3, r31, 0x1ec
	addi     r5, r31, 0x2e0
	li       r4, 0x16f
	crclr    6
	bl       OSPanic

lbl_80450340:
	mr       r3, r30
	bl       THPPlayerSetBuffer
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x2d0
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x50(r28)
	cmplwi   r0, 1
	ble      lbl_80450378
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x60(r3)
	lbz      r0, 0x38(r3)
	cmplwi   r0, 2
	bne      lbl_80450378
	li       r29, 1

lbl_80450378:
	mr       r5, r29
	li       r3, 0
	li       r4, 0
	bl       THPPlayerPrepare
	cmpwi    r3, 0
	bne      lbl_804503A4
	addi     r3, r31, 0x1ec
	addi     r5, r31, 0x2fc
	li       r4, 0x18d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804503A4:
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
 * Address:	804503C4
 * Size:	0000C0
 */
void THPPlayer::init(JKRHeap*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x58(r3)
	cmplwi   r0, 0
	beq      lbl_8045040C
	lis      r3, lbl_8049B6FC@ha
	lis      r5, lbl_8049B714@ha
	addi     r3, r3, lbl_8049B6FC@l
	li       r4, 0x197
	addi     r5, r5, lbl_8049B714@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045040C:
	cmplwi   r30, 0
	lwz      r31, sCurrentHeap__7JKRHeap@sda21(r13)
	bne      lbl_8045041C
	mr       r30, r31

lbl_8045041C:
	mr       r3, r30
	bl       becomeCurrentHeap__7JKRHeapFv
	mr       r4, r30
	lis      r3, 0x30
	li       r5, 1
	bl       create__12JKRSolidHeapFUlP7JKRHeapb
	stw      r3, 0x58(r29)
	lwz      r0, 0x58(r29)
	cmplwi   r0, 0
	bne      lbl_80450460
	lis      r3, lbl_8049B6FC@ha
	lis      r5, lbl_8049B714@ha
	addi     r3, r3, lbl_8049B6FC@l
	li       r4, 0x1a2
	addi     r5, r5, lbl_8049B714@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80450460:
	mr       r3, r31
	bl       becomeCurrentHeap__7JKRHeapFv
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
 * Address:	80450484
 * Size:	0000A0
 */
void THPPlayer::play(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       PSStop2DStream__Fv
	lwz      r0, 0x30(r31)
	cmpwi    r0, 2
	bne      lbl_8045050C
	bl       THPPlayerPlay
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_804504D4
	lis      r3, lbl_8049B820@ha
	lis      r5, lbl_8049B714@ha
	addi     r3, r3, lbl_8049B820@l
	li       r4, 0x18b
	addi     r5, r5, lbl_8049B714@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804504D4:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	lfs      f1, lbl_80520B14@sda21(r2)
	lfs      f0, 0x24(r3)
	fmuls    f0, f1, f0
	fcmpo    cr0, f0, f1
	ble      lbl_804504F0
	fmr      f0, f1

lbl_804504F0:
	fctiwz   f0, f0
	li       r4, 0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	bl       THPPlayerSetVolume
	li       r3, 1
	b        lbl_80450510

lbl_8045050C:
	li       r3, 0

lbl_80450510:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80450524
 * Size:	000038
 */
void THPPlayer::pause(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x30(r3)
	cmpwi    r0, 2
	bne      lbl_80450548
	bl       THPPlayerPause
	li       r3, 1
	b        lbl_8045054C

lbl_80450548:
	li       r3, 0

lbl_8045054C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8045055C
 * Size:	000028
 */
void THPPlayer::stop(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       THPPlayerStop
	bl       THPPlayerClose
	bl       THPPlayerQuit
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80450584
 * Size:	000094
 */
void THPPlayer::update(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r6, 0x30(r3)
	cmpwi    r6, 1
	beq      lbl_804505C0
	bge      lbl_804505B4
	cmpwi    r6, 0
	bge      lbl_80450604
	b        lbl_804505E8

lbl_804505B4:
	cmpwi    r6, 3
	bge      lbl_804505E8
	b        lbl_804505D8

lbl_804505C0:
	bl       isFinishLoading__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80450604
	li       r0, 2
	stw      r0, 0x30(r31)
	b        lbl_80450604

lbl_804505D8:
	lwz      r3, 0x54(r31)
	lwz      r4, 0x34(r31)
	bl       update__Q27Caption3MgrFl
	b        lbl_80450604

lbl_804505E8:
	lis      r3, lbl_8049B6FC@ha
	lis      r4, lbl_8049B830@ha
	addi     r5, r4, lbl_8049B830@l
	addi     r3, r3, lbl_8049B6FC@l
	li       r4, 0x1f8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80450604:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80450618
 * Size:	0000DC
 */
void THPPlayer::draw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lbz      r0, 0xe4(r3)
	cmpwi    r0, 1
	beq      lbl_80450648
	b        lbl_80450688

lbl_80450648:
	bl       getRenderModeObj__6SystemFv
	lhz      r0, 4(r3)
	mr       r3, r29
	lwz      r7, 0x38(r29)
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r6, 0x14
	subf     r5, r7, r0
	lwz      r8, 0x3c(r29)
	srwi     r0, r5, 0x1f
	lwz      r12, 0x24(r12)
	add      r0, r0, r5
	srawi    r5, r0, 1
	mtctr    r12
	bctrl
	b        lbl_804506D8

lbl_80450688:
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r0, 4(r3)
	mr       r3, r29
	lwz      r7, 0x38(r29)
	mr       r4, r30
	lwz      r8, 0x3c(r29)
	subf     r5, r7, r0
	lwz      r12, 0(r29)
	srwi     r0, r5, 0x1f
	subf     r6, r8, r31
	add      r5, r0, r5
	lwz      r12, 0x24(r12)
	srwi     r0, r6, 0x1f
	srawi    r5, r5, 1
	add      r0, r0, r6
	srawi    r6, r0, 1
	mtctr    r12
	bctrl

lbl_804506D8:
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
 * Address:	804506F4
 * Size:	0000BC
 */
void THPPlayer::draw(Graphics&, long, long, float)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	lis      r0, 0x4330
	lwz      r3, 0x3c(r3)
	fmr      f31, f1
	stw      r0, 8(r1)
	mr       r28, r4
	lfd      f1, lbl_80520B18@sda21(r2)
	mr       r29, r5
	stw      r3, 0xc(r1)
	mr       r30, r6
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fmuls    f1, f31, f0
	bl       __cvt_fp2unsigned
	lwz      r4, 0x38(r27)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	mr       r31, r3
	lfd      f1, lbl_80520B18@sda21(r2)
	stw      r4, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fmuls    f1, f31, f0
	bl       __cvt_fp2unsigned
	lwz      r12, 0(r27)
	mr       r7, r3
	mr       r3, r27
	mr       r4, r28
	lwz      r12, 0x24(r12)
	mr       r5, r29
	mr       r6, r30
	mr       r8, r31
	mtctr    r12
	bctrl
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	804507B0
 * Size:	000088
 */
void THPPlayer::draw(Graphics&, long, long, unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	mr       r28, r5
	mr       r29, r6
	mr       r30, r7
	mr       r31, r8
	bl       isFinishLoading__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80450824
	addi     r3, r27, 0xbc
	lwz      r12, 0xbc(r27)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	bl       getRenderModeObj__6SystemFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	mr       r7, r31
	bl       THPPlayerDrawCurrentFrame
	stw      r3, 0x34(r26)
	bl       THPPlayerDrawDone
	lwz      r3, 0x54(r26)
	mr       r4, r27
	bl       draw__Q27Caption3MgrFR8Graphics

lbl_80450824:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80450838
 * Size:	00005C
 */
void THPPlayer::isFinishLoading(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r4, r30, 0x5c
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand
	clrlwi.  r0, r3, 0x18
	bne      lbl_80450874
	lwz      r0, 0x30(r30)
	cmpwi    r0, 0
	bne      lbl_80450878

lbl_80450874:
	li       r31, 1

lbl_80450878:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80450894
 * Size:	00001C
 */
void THPPlayer::isFinishPlaying(void)
{
	/*
	lis      r3, ActivePlayer@ha
	addi     r3, r3, ActivePlayer@l
	lbz      r0, 0xa4(r3)
	subfic   r0, r0, 3
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	804508B0
 * Size:	000030
 */
void Delegate<Game::THPPlayer>::invoke()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	addi     r12, r4, 8
	lwz      r3, 4(r3)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804508E0
 * Size:	000008
 */
@24 @Game::THPPlayer::~THPPlayer(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q24Game9THPPlayerFv
	*/
}
