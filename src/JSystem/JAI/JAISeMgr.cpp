#include "JSystem/JAI/JAIGlobalParameter.h"
#include "JSystem/JAI/JAInter.h"
#include "JSystem/JAI/JAInter/MoveParaSet.h"
#include "JSystem/JAI/JAInter/SeMgr.h"
#include "JSystem/JAI/JAISe.h"
#include "JSystem/JAI/JAISequence.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global seStartCallback__Q27JAInter5SeMgr
    seStartCallback__Q27JAInter5SeMgr:
        .4byte startSeSequence__Q27JAInter5SeMgrFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global seTrackUpdate__Q27JAInter5SeMgr
    seTrackUpdate__Q27JAInter5SeMgr:
        .skip 0x4
    .global categoryInfoTable__Q27JAInter5SeMgr
    categoryInfoTable__Q27JAInter5SeMgr:
        .skip 0x4
    .global sePlaySound__Q27JAInter5SeMgr
    sePlaySound__Q27JAInter5SeMgr:
        .skip 0x4
    .global seRegist__Q27JAInter5SeMgr
    seRegist__Q27JAInter5SeMgr:
        .skip 0x4
    .global seHandle__Q27JAInter5SeMgr
    seHandle__Q27JAInter5SeMgr:
        .skip 0x4
    .global seScene__Q27JAInter5SeMgr
    seScene__Q27JAInter5SeMgr:
        .skip 0x4
    .global seqMuteFlagFromSe__Q27JAInter5SeMgr
    seqMuteFlagFromSe__Q27JAInter5SeMgr:
        .skip 0x4
    .global seCategoryVolume__Q27JAInter5SeMgr
    seCategoryVolume__Q27JAInter5SeMgr:
        .skip 0x4
    .global seEntryCancel__Q27JAInter5SeMgr
    seEntryCancel__Q27JAInter5SeMgr:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516F48
    lbl_80516F48:
        .float 1.0
    .global lbl_80516F4C
    lbl_80516F4C:
        .float 0.0
    .global lbl_80516F50
    lbl_80516F50:
        .float 0.5
    .global lbl_80516F54
    lbl_80516F54:
        .float 1000.0
    .global lbl_80516F58
    lbl_80516F58:
        .4byte 0x4F000000
        .4byte 0x00000000
    .global lbl_80516F60
    lbl_80516F60:
        .double 0.5
    .global lbl_80516F68
    lbl_80516F68:
        .double 3.0
    .global lbl_80516F70
    lbl_80516F70:
        .double 0.0
    .global lbl_80516F78
    lbl_80516F78:
        .float 6.0
    .global lbl_80516F7C
    lbl_80516F7C:
        .4byte 0x501502F9
    .global lbl_80516F80
    lbl_80516F80:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516F88
    lbl_80516F88:
        .4byte 0x437F0000
    .global lbl_80516F8C
    lbl_80516F8C:
        .4byte 0x42FE0000
    .global lbl_80516F90
    lbl_80516F90:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516F98
    lbl_80516F98:
        .float -1.0
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800AE0A0
 * Size:	0003A4
 */
void JAInter::SeMgr::init(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stmw     r27, 0xc(r1)
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	beq      lbl_800AE14C
	li       r3, 0
	bl       setParamSeTrackMax__18JAIGlobalParameterFUl
	li       r31, 0
	li       r30, 0
	b        lbl_800AE140

lbl_800AE0EC:
	li       r28, 0
	li       r27, 0
	li       r29, 0
	b        lbl_800AE118

lbl_800AE0FC:
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	addi     r27, r27, 1
	lwz      r0, 0x1c(r3)
	lwzx     r3, r30, r0
	lbzx     r0, r3, r29
	addi     r29, r29, 2
	add      r28, r28, r0

lbl_800AE118:
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	cmplw    r27, r3
	blt      lbl_800AE0FC
	bl       getParamSeTrackMax__18JAIGlobalParameterFv
	cmplw    r3, r28
	bge      lbl_800AE138
	mr       r3, r28
	bl       setParamSeTrackMax__18JAIGlobalParameterFUl

lbl_800AE138:
	addi     r30, r30, 4
	addi     r31, r31, 1

lbl_800AE140:
	bl       getParamSoundSceneMax__18JAIGlobalParameterFv
	cmplw    r31, r3
	blt      lbl_800AE0EC

lbl_800AE14C:
	lwz      r29, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	slwi     r3, r3, 3
	mr       r4, r29
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, seRegist__Q27JAInter5SeMgr@sda21(r13)
	lwz      r29, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	mr       r4, r29
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	li       r31, 0
	stw      r3, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	mr       r30, r31
	li       r29, 0
	b        lbl_800AE294

lbl_800AE194:
	lwz      r0, seRegist__Q27JAInter5SeMgr@sda21(r13)
	add      r3, r0, r31
	bl       init__Q27JAInter9LinkSoundFv
	li       r27, 0
	b        lbl_800AE1D0

lbl_800AE1A8:
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, seRegist__Q27JAInter5SeMgr@sda21(r13)
	mr       r4, r3
	lwzx     r3, r31, r0
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r27, r27, 1

lbl_800AE1D0:
	bl       getParamSeRegistMax__18JAIGlobalParameterFv
	cmplw    r27, r3
	blt      lbl_800AE1A8
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r3, 0x40
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	lwz      r5, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	li       r0, 2
	li       r4, 0
	stwx     r3, r5, r30
	mtctr    r0

lbl_800AE200:
	lwz      r0, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	li       r11, 0
	addi     r9, r4, 4
	addi     r8, r4, 8
	lwzx     r3, r30, r0
	addi     r7, r4, 0xc
	addi     r6, r4, 0x10
	addi     r5, r4, 0x14
	stwx     r11, r3, r4
	addi     r3, r4, 0x18
	addi     r0, r4, 0x1c
	addi     r4, r4, 0x20
	lwz      r10, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	lwzx     r10, r30, r10
	stwx     r11, r10, r9
	lwz      r9, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	lwzx     r9, r30, r9
	stwx     r11, r9, r8
	lwz      r8, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	lwzx     r8, r30, r8
	stwx     r11, r8, r7
	lwz      r7, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	lwzx     r7, r30, r7
	stwx     r11, r7, r6
	lwz      r6, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	lwzx     r6, r30, r6
	stwx     r11, r6, r5
	lwz      r5, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	lwzx     r5, r30, r5
	stwx     r11, r5, r3
	lwz      r3, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	lwzx     r3, r30, r3
	stwx     r11, r3, r0
	bdnz     lbl_800AE200
	addi     r31, r31, 8
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_800AE294:
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	cmplw    r29, r3
	blt      lbl_800AE194
	lwz      r29, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeTrackMax__18JAIGlobalParameterFv
	mulli    r3, r3, 0x18
	mr       r4, r29
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, seTrackUpdate__Q27JAInter5SeMgr@sda21(r13)
	li       r27, 0
	lfs      f29, lbl_80516F48@sda21(r2)
	li       r30, 0
	lfs      f30, lbl_80516F4C@sda21(r2)
	li       r29, 0xff
	lfs      f31, lbl_80516F50@sda21(r2)
	b        lbl_800AE300

lbl_800AE2D8:
	lwz      r0, seTrackUpdate__Q27JAInter5SeMgr@sda21(r13)
	addi     r27, r27, 1
	add      r3, r0, r30
	addi     r30, r30, 0x18
	stfs     f29, 4(r3)
	stfs     f29, 8(r3)
	stfs     f30, 0xc(r3)
	stfs     f31, 0x10(r3)
	stb      r29, 0(r3)
	stfs     f30, 0x14(r3)

lbl_800AE300:
	bl       getParamSeTrackMax__18JAIGlobalParameterFv
	cmplw    r27, r3
	blt      lbl_800AE2D8
	bl       getParamSeRegistMax__18JAIGlobalParameterFv
	mr       r29, r3
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	mullw    r29, r3, r29
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r5, 0x20
	mulli    r3, r29, 0x43c
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	lis      r4, __ct__Q27JAInter11SeParameterFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q27JAInter11SeParameterFv@l
	li       r5, 0
	li       r6, 0x43c
	bl       __construct_new_array
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	beq      lbl_800AE360
	stw      r0, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	b        lbl_800AE3AC

lbl_800AE360:
	lwz      r29, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSoundSceneMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	mr       r4, r29
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	lis      r4, sCInfos_0__Q27JAInter5Const@ha
	stw      r3, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	addi     r29, r4, sCInfos_0__Q27JAInter5Const@l
	li       r27, 0
	li       r30, 0
	b        lbl_800AE3A0

lbl_800AE390:
	lwz      r3, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	addi     r27, r27, 1
	stwx     r29, r3, r30
	addi     r30, r30, 4

lbl_800AE3A0:
	bl       getParamSoundSceneMax__18JAIGlobalParameterFv
	cmplw    r27, r3
	blt      lbl_800AE390

lbl_800AE3AC:
	lwz      r29, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	mr       r4, r29
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, seEntryCancel__Q27JAInter5SeMgr@sda21(r13)
	lwz      r29, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	mr       r4, r29
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	li       r30, 0
	stw      r3, seCategoryVolume__Q27JAInter5SeMgr@sda21(r13)
	lfs      f31, lbl_80516F48@sda21(r2)
	mr       r29, r30
	li       r27, 0
	b        lbl_800AE40C

lbl_800AE3F4:
	lwz      r3, seEntryCancel__Q27JAInter5SeMgr@sda21(r13)
	stbx     r29, r3, r27
	addi     r27, r27, 1
	lwz      r3, seCategoryVolume__Q27JAInter5SeMgr@sda21(r13)
	stfsx    f31, r3, r30
	addi     r30, r30, 4

lbl_800AE40C:
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	cmplw    r27, r3
	blt      lbl_800AE3F4
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AE444
 * Size:	0000F0
 * __ct__Q27JAInter11SeParameterFv
 */
// JAInter::SeParameter::SeParameter(void)
//     : _24()
//     , _124()
//     , _1A4()
//     , _224()
//     , _2A4()
//     , _324()
//     , _3A4()
// {
// }

/*
 * --INFO--
 * Address:	800AE534
 * Size:	000018
 * __ct__Q27JAInter19MoveParaSetInitZeroFv
 */
// JAInter::MoveParaSetInitZero::MoveParaSetInitZero()
// {
// }

/*
 * --INFO--
 * Address:	800AE54C
 * Size:	000018
 * __ct__Q27JAInter19MoveParaSetInitHalfFv
 */
// JAInter::MoveParaSetInitHalf::MoveParaSetInitHalf(void)
// {
// }

/*
 * --INFO--
 * Address:	800AE564
 * Size:	000018
 * __defctor__Q27JAInter11MoveParaSetFv
 */
// void JAInter::MoveParaSet::__defctor(void)
// {
// }

/*
 * --INFO--
 * Address:	800AE57C
 * Size:	000050
 */
void JAInter::SeMgr::startSeSequence(void)
{
	seHandle = nullptr;
	SequenceMgr::storeSeqBuffer(&seHandle, nullptr, 0x80000800, 1, 4, SoundTable::getInfoPointer(0x80000800));
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, 0x80000800@ha
	stw      r0, 0x14(r1)
	li       r0, 0
	addi     r3, r3, 0x80000800@l
	stw      r0, seHandle__Q27JAInter5SeMgr@sda21(r13)
	bl       getInfoPointer__Q27JAInter10SoundTableFUl
	lis      r4, 0x80000800@ha
	mr       r8, r3
	addi     r5, r4, 0x80000800@l
	addi     r3, r13, seHandle__Q27JAInter5SeMgr@sda21
	li       r4, 0
	li       r6, 1
	li       r7, 4
	bl
	storeSeqBuffer__Q27JAInter11SequenceMgrFPP11JAISequencePQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AE5CC
 * Size:	000034
 */
void JAInter::SeMgr::processGFrameSe(void)
{
	if (seHandle == nullptr) {
		return;
	}
	checkNextFrameSe();
	checkSeMovePara();
	checkPlayingSe();
}

/*
 * --INFO--
 * Address:	800AE600
 * Size:	0007E4
 */
void JAInter::SeMgr::checkNextFrameSe(void)
{
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stfd     f31, 0x130(r1)
	psq_st   f31, 312(r1), 0, qr0
	stfd     f30, 0x120(r1)
	psq_st   f30, 296(r1), 0, qr0
	stfd     f29, 0x110(r1)
	psq_st   f29, 280(r1), 0, qr0
	stmw     r19, 0xdc(r1)
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_800AEDB8
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	bge      lbl_800AE644
	b        lbl_800AEDB8

lbl_800AE644:
	bl       getParamDistanceMax__18JAIGlobalParameterFv
	fmr      f31, f1
	bl       getParamDistanceMax__18JAIGlobalParameterFv
	lfs      f2, lbl_80516F54@sda21(r2)
	lfs      f0, lbl_80516F4C@sda21(r2)
	fdivs    f30, f1, f2
	fcmpu    cr0, f0, f30
	bne      lbl_800AE668
	lfs      f30, lbl_80516F48@sda21(r2)

lbl_800AE668:
	li       r26, 0
	lis      r4, dummyZeroVec__Q27JAInter5Const@ha
	lis      r3, 0x7FFFFFFF@ha
	addi     r30, r1, 0xc
	mr       r25, r26
	mr       r24, r26
	addi     r28, r4, dummyZeroVec__Q27JAInter5Const@l
	addi     r29, r3, 0x7FFFFFFF@l
	li       r31, 0
	b        lbl_800AEDAC

lbl_800AE690:
	lbz      r0, seScene__Q27JAInter5SeMgr@sda21(r13)
	li       r8, 0
	lwz      r7, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	li       r5, 0xff
	slwi     r6, r0, 2
	li       r4, 0
	b        lbl_800AE6CC

lbl_800AE6AC:
	clrlwi   r0, r8, 0x18
	addi     r3, r1, 0xc
	mulli    r0, r0, 0xc
	addi     r8, r8, 1
	add      r3, r3, r0
	stw      r29, 4(r3)
	stb      r5, 0(r3)
	stw      r4, 8(r3)

lbl_800AE6CC:
	lwzx     r0, r7, r6
	clrlwi   r3, r8, 0x18
	lbzx     r0, r26, r0
	cmplw    r3, r0
	blt      lbl_800AE6AC
	lwz      r3, seRegist__Q27JAInter5SeMgr@sda21(r13)
	addi     r0, r25, 4
	li       r20, 0
	lwzx     r3, r3, r0
	lwz      r22, 0(r3)
	b        lbl_800AEB88

lbl_800AE6F8:
	lwz      r21, 0(r22)
	li       r23, 0
	lbz      r3, 0x15(r21)
	cmplwi   r3, 1
	bne      lbl_800AE728
	lwz      r0, 0x20(r21)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	beq      lbl_800AE728
	lbz      r3, 0x16(r21)
	addi     r0, r3, -1
	stb      r0, 0x16(r21)
	b        lbl_800AE74C

lbl_800AE728:
	lwz      r0, 0x20(r21)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	bne      lbl_800AE74C
	cmplwi   r3, 5
	bne      lbl_800AE74C
	lwz      r22, 0xc(r22)
	mr       r3, r21
	li       r23, 1
	bl       releaseSeRegist__Q27JAInter5SeMgrFP5JAISe

lbl_800AE74C:
	lbz      r0, 0x16(r21)
	cmplwi   r0, 0
	bne      lbl_800AE76C
	lwz      r22, 0xc(r22)
	mr       r3, r21
	li       r23, 1
	bl       releaseSeRegist__Q27JAInter5SeMgrFP5JAISe
	b        lbl_800AEB74

lbl_800AE76C:
	lbz      r0, 0x15(r21)
	cmplwi   r0, 0
	beq      lbl_800AEB74
	lwz      r0, 0x3c(r21)
	lfs      f29, lbl_80516F58@sda21(r2)
	cmplwi   r0, 0
	lwz      r27, 0x34(r21)
	bne      lbl_800AE7CC
	lis      r3, dummyZeroVec__Q27JAInter5Const@ha
	lfs      f0, lbl_80516F4C@sda21(r2)
	lfs      f1, dummyZeroVec__Q27JAInter5Const@l(r3)
	stfs     f1, 0(r27)
	lfs      f1, 4(r28)
	stfs     f1, 4(r27)
	lfs      f1, 8(r28)
	stfs     f1, 8(r27)
	lfs      f1, 0(r27)
	stfs     f1, 0xc(r27)
	lfs      f1, 4(r27)
	stfs     f1, 0x10(r27)
	lfs      f1, 8(r27)
	stfs     f1, 0x14(r27)
	stfs     f0, 0x18(r27)
	b        lbl_800AE920

lbl_800AE7CC:
	lbz      r0, 0x1a(r21)
	cmplwi   r0, 0
	bne      lbl_800AE920
	lfs      f0, 0(r27)
	stfs     f0, 0xc(r27)
	lfs      f0, 4(r27)
	stfs     f0, 0x10(r27)
	lfs      f0, 8(r27)
	stfs     f0, 0x14(r27)
	lbz      r0, 0x18(r21)
	cmplwi   r0, 4
	bne      lbl_800AE800
	li       r0, 0

lbl_800AE800:
	clrlwi   r0, r0, 0x18
	lwz      r5, msBasic__8JAIBasic@sda21(r13)
	mulli    r3, r0, 0xc
	lwz      r4, 0x3c(r21)
	lwz      r6, 4(r5)
	mr       r5, r27
	addi     r0, r3, 8
	lwzx     r3, r6, r0
	bl       PSMTXMultVec
	lfs      f1, 0(r27)
	lfs      f0, 4(r27)
	fmuls    f2, f1, f1
	lfs      f3, 8(r27)
	fmuls    f1, f0, f0
	lfs      f0, lbl_80516F4C@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f1, f2, f1
	fadds    f4, f3, f1
	fcmpo    cr0, f4, f0
	ble      lbl_800AE898
	frsqrte  f1, f4
	lfd      f3, lbl_80516F60@sda21(r2)
	lfd      f2, lbl_80516F68@sda21(r2)
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f0, f1, f0
	fmul     f4, f4, f0
	frsp     f4, f4
	b        lbl_800AE91C

lbl_800AE898:
	lfd      f0, lbl_80516F70@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_800AE8B0
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)
	b        lbl_800AE91C

lbl_800AE8B0:
	stfs     f4, 8(r1)
	lis      r0, 0x7f80
	lwz      r4, 8(r1)
	rlwinm   r3, r4, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800AE8D8
	bge      lbl_800AE908
	cmpwi    r3, 0
	beq      lbl_800AE8F0
	b        lbl_800AE908

lbl_800AE8D8:
	clrlwi.  r0, r4, 9
	beq      lbl_800AE8E8
	li       r0, 1
	b        lbl_800AE90C

lbl_800AE8E8:
	li       r0, 2
	b        lbl_800AE90C

lbl_800AE8F0:
	clrlwi.  r0, r4, 9
	beq      lbl_800AE900
	li       r0, 5
	b        lbl_800AE90C

lbl_800AE900:
	li       r0, 3
	b        lbl_800AE90C

lbl_800AE908:
	li       r0, 4

lbl_800AE90C:
	cmpwi    r0, 1
	bne      lbl_800AE91C
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)

lbl_800AE91C:
	stfs     f4, 0x18(r27)

lbl_800AE920:
	mr       r3, r21
	bl       getInfoPriority__8JAISoundFv
	lha      r4, 0x1c(r21)
	clrlwi   r3, r3, 0x18
	extsh.   r0, r4
	beq      lbl_800AE95C
	add      r3, r3, r4
	extsh.   r0, r3
	bge      lbl_800AE94C
	li       r3, 0
	b        lbl_800AE95C

lbl_800AE94C:
	extsh    r0, r3
	cmpwi    r0, 0xff
	ble      lbl_800AE95C
	li       r3, 0xff

lbl_800AE95C:
	extsh    r3, r3
	lis      r0, 0x4330
	subfic   r3, r3, 0xff
	stw      r0, 0xd0(r1)
	mulli    r0, r3, 0x4c
	lfd      f1, lbl_80516F80@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0xd4(r1)
	lfd      f0, 0xd0(r1)
	fsubs    f0, f0, f1
	fdivs    f1, f0, f30
	bl       __cvt_fp2unsigned
	lfs      f0, 0x18(r27)
	mr       r19, r3
	fdivs    f1, f0, f30
	bl       __cvt_fp2unsigned
	add      r0, r3, r19
	lfs      f0, lbl_80516F4C@sda21(r2)
	stw      r0, 0x24(r21)
	lfs      f1, 8(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_800AE9D0
	lfs      f0, lbl_80516F78@sda21(r2)
	fmuls    f0, f0, f1
	fdivs    f1, f0, f30
	bl       __cvt_fp2unsigned
	lwz      r0, 0x24(r21)
	add      r0, r3, r0
	stw      r0, 0x24(r21)

lbl_800AE9D0:
	lfs      f1, 0x18(r27)
	lfs      f0, lbl_80516F58@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_800AE9E4
	fmr      f29, f1

lbl_800AE9E4:
	mr       r3, r21
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_800AE9FC
	fmr      f0, f31
	b        lbl_800AEA00

lbl_800AE9FC:
	lfs      f0, lbl_80516F7C@sda21(r2)

lbl_800AEA00:
	fcmpo    cr0, f29, f0
	ble      lbl_800AEA88
	lwz      r0, 0x20(r21)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	bne      lbl_800AEA70
	lbz      r0, 0x15(r21)
	cmplwi   r0, 1
	beq      lbl_800AEA5C
	lbz      r0, 0x14(r21)
	cmplwi   r0, 0xff
	beq      lbl_800AEA5C
	rlwinm   r3, r0, 0x1c, 0x1c, 0x1f
	lwz      r5, seHandle__Q27JAInter5SeMgr@sda21(r13)
	addis    r4, r3, 0x2000
	rlwinm   r0, r0, 4, 0x18, 0x1b
	addi     r3, r5, 0x30c
	li       r5, 0
	add      r4, r4, r0
	bl       writePortApp__8JASTrackFUlUs
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	li       r5, 1
	lbz      r4, 0x14(r21)
	bl       setTrackInterruptSwitch__11JAISequenceFUcUc

lbl_800AEA5C:
	li       r3, 5
	li       r0, 0xff
	stb      r3, 0x15(r21)
	stb      r0, 0x14(r21)
	b        lbl_800AEB74

lbl_800AEA70:
	lwz      r22, 0xc(r22)
	mr       r3, r21
	li       r23, 1
	li       r4, 0
	bl       releaseSeBuffer__Q27JAInter5SeMgrFP5JAISeUl
	b        lbl_800AEB74

lbl_800AEA88:
	mr       r3, r21
	bl       getSeCategoryNumber__5JAISeFv
	lbz      r0, seScene__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r5, r3, 1, 0x17, 0x1e
	lwz      r3, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	li       r4, 0
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	lbzx     r5, r3, r5
	addi     r0, r5, -1
	b        lbl_800AEB68

lbl_800AEAB4:
	clrlwi   r6, r4, 0x18
	addi     r3, r1, 0xc
	mulli    r6, r6, 0xc
	lwz      r7, 0x24(r21)
	add      r3, r3, r6
	lwz      r6, 4(r3)
	cmplw    r7, r6
	blt      lbl_800AEAEC
	cmplw    r6, r7
	bne      lbl_800AEB64
	lbz      r7, 0(r3)
	lbz      r6, 0x15(r21)
	cmplw    r7, r6
	blt      lbl_800AEB64

lbl_800AEAEC:
	clrlwi   r6, r20, 0x18
	cmplw    r6, r5
	bge      lbl_800AEB00
	addi     r6, r6, 1
	clrlwi   r20, r6, 0x18

lbl_800AEB00:
	clrlwi   r10, r0, 0x18
	clrlwi   r4, r4, 0x18
	b        lbl_800AEB40

lbl_800AEB0C:
	clrlwi   r6, r10, 0x18
	addi     r8, r1, 0xc
	mulli    r7, r6, 0xc
	addi     r10, r10, -1
	mr       r9, r8
	add      r8, r8, r7
	lwz      r6, -8(r8)
	add      r9, r9, r7
	stw      r6, 4(r9)
	lwz      r6, -4(r8)
	stw      r6, 8(r9)
	lbz      r6, -0xc(r8)
	stb      r6, 0(r9)

lbl_800AEB40:
	clrlwi   r6, r10, 0x18
	cmplw    r6, r4
	bgt      lbl_800AEB0C
	lwz      r7, 0x24(r21)
	mr       r4, r5
	lbz      r6, 0x15(r21)
	stw      r7, 4(r3)
	stw      r21, 8(r3)
	stb      r6, 0(r3)

lbl_800AEB64:
	addi     r4, r4, 1

lbl_800AEB68:
	clrlwi   r3, r4, 0x18
	cmplw    r3, r5
	blt      lbl_800AEAB4

lbl_800AEB74:
	cmplwi   r22, 0
	beq      lbl_800AEB88
	clrlwi.  r0, r23, 0x18
	bne      lbl_800AEB88
	lwz      r22, 0xc(r22)

lbl_800AEB88:
	cmplwi   r22, 0
	bne      lbl_800AE6F8
	clrlwi   r0, r20, 0x18
	li       r6, 0
	li       r5, 2
	li       r4, 3
	b        lbl_800AEBD8

lbl_800AEBA4:
	clrlwi   r3, r6, 0x18
	mulli    r3, r3, 0xc
	addi     r3, r3, 8
	lwzx     r7, r30, r3
	lbz      r3, 0x15(r7)
	cmplwi   r3, 1
	bne      lbl_800AEBC8
	stb      r5, 0x15(r7)
	b        lbl_800AEBD4

lbl_800AEBC8:
	cmplwi   r3, 4
	bne      lbl_800AEBD4
	stb      r4, 0x15(r7)

lbl_800AEBD4:
	addi     r6, r6, 1

lbl_800AEBD8:
	clrlwi   r3, r6, 0x18
	cmplw    r3, r0
	blt      lbl_800AEBA4
	lbz      r0, seScene__Q27JAInter5SeMgr@sda21(r13)
	li       r22, 0
	lwz      r3, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	lbzx     r21, r3, r26
	addi     r27, r21, 1
	b        lbl_800AED90

lbl_800AEC04:
	lwz      r7, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r23, r22, 2, 0x16, 0x1d
	li       r0, 0
	lwzx     r4, r24, r7
	lwzx     r3, r4, r23
	cmplwi   r3, 0
	bne      lbl_800AEC28
	li       r0, 1
	b        lbl_800AECC8

lbl_800AEC28:
	lbz      r5, 0x15(r3)
	cmplwi   r5, 4
	bne      lbl_800AEC60
	lwz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	beq      lbl_800AEC48
	bl       releaseSeRegist__Q27JAInter5SeMgrFP5JAISe
	b        lbl_800AEC58

lbl_800AEC48:
	li       r4, 1
	li       r0, 0xff
	stb      r4, 0x15(r3)
	stb      r0, 0x14(r3)

lbl_800AEC58:
	li       r0, 1
	b        lbl_800AECC8

lbl_800AEC60:
	cmplwi   r5, 0
	beq      lbl_800AEC70
	cmplwi   r5, 5
	bne      lbl_800AEC80

lbl_800AEC70:
	li       r3, 0
	li       r0, 1
	stwx     r3, r4, r23
	b        lbl_800AECC8

lbl_800AEC80:
	li       r9, 0
	addi     r5, r1, 0xc
	mr       r4, r9
	b        lbl_800AECBC

lbl_800AEC90:
	clrlwi   r3, r9, 0x18
	lwzx     r6, r7, r24
	mulli    r3, r3, 0xc
	lwzx     r6, r23, r6
	addi     r8, r3, 8
	lwzx     r3, r5, r8
	cmplw    r6, r3
	bne      lbl_800AECB8
	stwx     r4, r5, r8
	mr       r9, r21

lbl_800AECB8:
	addi     r9, r9, 1

lbl_800AECBC:
	clrlwi   r3, r9, 0x18
	cmplw    r3, r21
	blt      lbl_800AEC90

lbl_800AECC8:
	clrlwi   r3, r0, 0x18
	cmplwi   r3, 1
	bne      lbl_800AED8C
	addi     r6, r1, 0xc
	li       r3, 0
	b        lbl_800AED6C

lbl_800AECE0:
	clrlwi   r4, r3, 0x18
	mulli    r4, r4, 0xc
	addi     r8, r4, 8
	lwzx     r7, r6, r8
	cmplwi   r7, 0
	beq      lbl_800AED68
	lbz      r4, 0x15(r7)
	cmplwi   r4, 3
	beq      lbl_800AED68
	lwz      r9, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	li       r10, 0
	b        lbl_800AED3C

lbl_800AED10:
	lwzx     r5, r9, r24
	rlwinm   r4, r10, 2, 0x16, 0x1d
	lwzx     r5, r5, r4
	cmplwi   r5, 0
	beq      lbl_800AED38
	lwzx     r4, r6, r8
	cmplw    r4, r5
	bne      lbl_800AED38
	li       r0, 0
	mr       r10, r21

lbl_800AED38:
	addi     r10, r10, 1

lbl_800AED3C:
	clrlwi   r4, r10, 0x18
	cmplw    r4, r21
	blt      lbl_800AED10
	clrlwi   r4, r0, 0x18
	cmplwi   r4, 1
	bne      lbl_800AED68
	lwzx     r4, r24, r9
	li       r3, 0
	stwx     r3, r6, r8
	clrlwi   r3, r27, 0x18
	stwx     r7, r23, r4

lbl_800AED68:
	addi     r3, r3, 1

lbl_800AED6C:
	clrlwi   r4, r3, 0x18
	cmplw    r4, r21
	blt      lbl_800AECE0
	bne      lbl_800AED8C
	lwz      r0, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	li       r4, 0
	lwzx     r3, r24, r0
	stwx     r4, r3, r23

lbl_800AED8C:
	addi     r22, r22, 1

lbl_800AED90:
	clrlwi   r0, r22, 0x18
	cmplw    r0, r21
	blt      lbl_800AEC04
	addi     r26, r26, 2
	addi     r25, r25, 8
	addi     r24, r24, 4
	addi     r31, r31, 1

lbl_800AEDAC:
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	cmplw    r31, r3
	blt      lbl_800AE690

lbl_800AEDB8:
	psq_l    f31, 312(r1), 0, qr0
	lfd      f31, 0x130(r1)
	psq_l    f30, 296(r1), 0, qr0
	lfd      f30, 0x120(r1)
	psq_l    f29, 280(r1), 0, qr0
	lfd      f29, 0x110(r1)
	lmw      r19, 0xdc(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AEDE4
 * Size:	000488
 */
void JAInter::SeMgr::checkPlayingSe(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r21, 0x24(r1)
	li       r26, 0
	li       r25, 0
	b        lbl_800AF248

lbl_800AEE00:
	rlwinm   r30, r25, 2, 0x16, 0x1d
	rlwinm   r29, r25, 1, 0x17, 0x1e
	li       r28, 0
	b        lbl_800AF224

lbl_800AEE10:
	lwz      r3, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r0, r28, 2, 0x16, 0x1d
	lwzx     r3, r30, r3
	lwzx     r27, r3, r0
	cmplwi   r27, 0
	beq      lbl_800AF21C
	lwz      r4, 0x2c(r27)
	rlwinm   r3, r26, 0x1c, 0x1c, 0x1f
	addis    r3, r3, 0x2000
	rlwinm   r0, r26, 4, 0x18, 0x1b
	addi     r4, r4, 1
	addi     r5, r1, 0xa
	stw      r4, 0x2c(r27)
	add      r24, r3, r0
	addis    r4, r24, 2
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	addi     r31, r3, 0x30c
	mr       r3, r31
	bl       readPortApp__8JASTrackFUlPUs
	mr       r3, r31
	mr       r4, r24
	addi     r5, r1, 8
	bl       readPortApp__8JASTrackFUlPUs
	lbz      r3, 0x15(r27)
	cmplwi   r3, 2
	bne      lbl_800AF14C
	mr       r3, r27
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	stb      r26, 0x14(r27)
	mr       r21, r3
	beq      lbl_800AEE98
	mr       r3, r27
	bl       setSeqMuteFromSeStart__Q27JAInter5SeMgrFP8JAISound

lbl_800AEE98:
	rlwinm.  r5, r21, 0, 0x18, 0x19
	beq      lbl_800AEF38
	lis      r3, 0x0019660D@ha
	lwz      r4, random__Q27JAInter5Const@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lfs      f0, lbl_80516F48@sda21(r2)
	mullw    r3, r4, r0
	lfs      f2, lbl_80516F88@sda21(r2)
	cmpwi    r5, 0x80
	addis    r3, r3, 0x3c6f
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, random__Q27JAInter5Const@sda21(r13)
	oris     r0, r0, 0x3f80
	stw      r0, 0xc(r1)
	lfs      f1, 0xc(r1)
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	beq      lbl_800AEF18
	bge      lbl_800AEF00
	cmpwi    r5, 0x40
	beq      lbl_800AEF0C
	b        lbl_800AEF30

lbl_800AEF00:
	cmpwi    r5, 0xc0
	beq      lbl_800AEF24
	b        lbl_800AEF30

lbl_800AEF0C:
	clrlwi   r0, r0, 0x1c
	stb      r0, 0x17(r27)
	b        lbl_800AEF38

lbl_800AEF18:
	clrlwi   r0, r0, 0x1b
	stb      r0, 0x17(r27)
	b        lbl_800AEF38

lbl_800AEF24:
	clrlwi   r0, r0, 0x1a
	stb      r0, 0x17(r27)
	b        lbl_800AEF38

lbl_800AEF30:
	li       r0, 0
	stb      r0, 0x17(r27)

lbl_800AEF38:
	li       r23, 0
	li       r21, 1
	b        lbl_800AEF80

lbl_800AEF44:
	clrlwi   r0, r23, 0x18
	slw      r22, r21, r0
	and.     r0, r3, r22
	beq      lbl_800AEF7C
	rlwinm   r4, r23, 1, 0x17, 0x1e
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	addi     r0, r4, 0x48
	lbz      r4, 0x14(r27)
	lhzx     r6, r27, r0
	mr       r5, r23
	bl       setTrackPortData__11JAISequenceFUcUcUs
	lhz      r0, 0x68(r27)
	xor      r0, r0, r22
	sth      r0, 0x68(r27)

lbl_800AEF7C:
	addi     r23, r23, 1

lbl_800AEF80:
	lhz      r3, 0x68(r27)
	cmplwi   r3, 0
	bne      lbl_800AEF44
	mr       r3, r27
	lwz      r12, 0x10(r27)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x28(r27)
	cmplwi   r0, 1
	ble      lbl_800AF00C
	mr       r3, r27
	lfs      f1, lbl_80516F4C@sda21(r2)
	lwz      r12, 0x10(r27)
	li       r4, 0
	li       r5, 6
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	lfs      f1, lbl_80516F48@sda21(r2)
	lwz      r12, 0x10(r27)
	li       r5, 6
	lwz      r4, 0x28(r27)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x28(r27)

lbl_800AF00C:
	mr       r3, r27
	bl       sendSeAllParameter__Q27JAInter5SeMgrFP5JAISe
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r4, 0x20(r27)
	bl       getSoundOffsetNumberFromID__8JAIBasicFUl
	mr       r0, r3
	mr       r3, r27
	mr       r23, r0
	li       r4, 0x800
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	beq      lbl_800AF05C
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r4, 0x30(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	add      r0, r23, r3
	clrlwi   r23, r0, 0x10

lbl_800AF05C:
	bl       getParamAudioCameraMax__18JAIGlobalParameterFv
	cmplwi   r3, 1
	bne      lbl_800AF0D0
	mr       r3, r27
	li       r4, 0x1000
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	beq      lbl_800AF0D0
	lwz      r21, 0x34(r27)
	bl       getParamDistanceMax__18JAIGlobalParameterFv
	lfs      f0, 0x18(r21)
	fcmpo    cr0, f0, f1
	bge      lbl_800AF0C4
	bl       getParamDistanceMax__18JAIGlobalParameterFv
	bl       __cvt_fp2unsigned
	lwz      r4, 0x34(r27)
	mr       r21, r3
	lfs      f1, 0x18(r4)
	bl       __cvt_fp2unsigned
	mr       r22, r3
	bl       getParamSeDistanceWaitMax__18JAIGlobalParameterFv
	clrlwi   r0, r3, 0x10
	mullw    r0, r0, r22
	divwu    r0, r0, r21
	clrlwi   r5, r0, 0x10
	b        lbl_800AF0D4

lbl_800AF0C4:
	bl       getParamSeDistanceWaitMax__18JAIGlobalParameterFv
	mr       r5, r3
	b        lbl_800AF0D4

lbl_800AF0D0:
	li       r5, 0

lbl_800AF0D4:
	mr       r3, r31
	addis    r4, r24, 3
	bl       writePortApp__8JASTrackFUlUs
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r4, 0x30(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	mr       r3, r31
	addis    r4, r24, 6
	bl       writePortApp__8JASTrackFUlUs
	mr       r3, r31
	mr       r5, r23
	addis    r4, r24, 4
	bl       writePortApp__8JASTrackFUlUs
	mr       r3, r31
	mr       r4, r24
	li       r5, 1
	bl       writePortApp__8JASTrackFUlUs
	lwz      r0, 0x20(r27)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	beq      lbl_800AF140
	li       r0, 4
	stb      r0, 0x15(r27)
	b        lbl_800AF21C

lbl_800AF140:
	li       r0, 5
	stb      r0, 0x15(r27)
	b        lbl_800AF21C

lbl_800AF14C:
	lhz      r0, 0xa(r1)
	cmplwi   r0, 0
	bne      lbl_800AF170
	lhz      r0, 8(r1)
	cmplwi   r0, 1
	beq      lbl_800AF170
	mr       r3, r27
	bl       releaseSeRegist__Q27JAInter5SeMgrFP5JAISe
	b        lbl_800AF21C

lbl_800AF170:
	cmplwi   r3, 3
	bne      lbl_800AF21C
	lwz      r0, 0x28(r27)
	cmplwi   r0, 0
	beq      lbl_800AF1E0
	lfs      f1, lbl_80516F4C@sda21(r2)
	lfs      f0, 0x1d0(r27)
	fcmpu    cr0, f1, f0
	beq      lbl_800AF1D4
	mr       r3, r27
	lwz      r12, 0x10(r27)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	bl       sendSeAllParameter__Q27JAInter5SeMgrFP5JAISe
	lwz      r0, 0x20(r27)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	beq      lbl_800AF1C8
	li       r0, 4
	stb      r0, 0x15(r27)
	b        lbl_800AF21C

lbl_800AF1C8:
	li       r0, 5
	stb      r0, 0x15(r27)
	b        lbl_800AF21C

lbl_800AF1D4:
	mr       r3, r27
	bl       releaseSeRegist__Q27JAInter5SeMgrFP5JAISe
	b        lbl_800AF21C

lbl_800AF1E0:
	mr       r3, r27
	lwz      r12, 0x10(r27)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	bl       sendSeAllParameter__Q27JAInter5SeMgrFP5JAISe
	lwz      r0, 0x20(r27)
	rlwinm.  r0, r0, 0, 0x14, 0x15
	beq      lbl_800AF214
	li       r0, 4
	stb      r0, 0x15(r27)
	b        lbl_800AF21C

lbl_800AF214:
	li       r0, 5
	stb      r0, 0x15(r27)

lbl_800AF21C:
	addi     r26, r26, 1
	addi     r28, r28, 1

lbl_800AF224:
	lbz      r0, seScene__Q27JAInter5SeMgr@sda21(r13)
	clrlwi   r4, r28, 0x18
	lwz      r3, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	lbzx     r0, r29, r0
	cmplw    r4, r0
	blt      lbl_800AEE10
	addi     r25, r25, 1

lbl_800AF248:
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	clrlwi   r0, r25, 0x18
	cmplw    r0, r3
	blt      lbl_800AEE00
	lmw      r21, 0x24(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AF26C
 * Size:	000030
 * setVolume__5JAISeFfUlUc
 */
void JAISe::setVolume(float p1, unsigned long p2, unsigned char p3) { setSeInterVolume(p3, p1, p2, 0); }

/*
 * --INFO--
 * Address:	800AF29C
 * Size:	0000F0
 */
void JAInter::SeMgr::setSeqMuteFromSeStart(JAISound* p1)
{
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		SeqUpdateData* info = SequenceMgr::getPlayTrackInfo(i);
		if (i != seHandle->_14 && info->m_sequence != nullptr && (info->m_sequence->getSwBit() & 8) == 0) {
			// TODO: are these args in the right order?
			info->m_sequence->setVolume(JAIGlobalParameter::getParamSeqMuteVolumeSePlay() / 127.0f,
			                            JAIGlobalParameter::getParamSeqMuteMoveSpeedSePlay(), 9);
			seqMuteFlagFromSe |= 1 << p1->_14;
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_800AF360

lbl_800AF2C4:
	mr       r3, r30
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r4, seHandle__Q27JAInter5SeMgr@sda21(r13)
	lwz      r29, 0x48(r3)
	lbz      r0, 0x14(r4)
	cmplw    r30, r0
	beq      lbl_800AF35C
	cmplwi   r29, 0
	beq      lbl_800AF35C
	mr       r3, r29
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	bne      lbl_800AF35C
	bl       getParamSeqMuteMoveSpeedSePlay__18JAIGlobalParameterFv
	mr       r31, r3
	bl       getParamSeqMuteVolumeSePlay__18JAIGlobalParameterFv
	clrlwi   r3, r3, 0x18
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	mr       r3, r29
	lwz      r12, 0x10(r29)
	mr       r4, r31
	stw      r0, 8(r1)
	li       r5, 9
	lfd      f2, lbl_80516F90@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80516F8C@sda21(r2)
	fsubs    f1, f1, f2
	lwz      r12, 0x1c(r12)
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl
	lbz      r0, 0x14(r28)
	li       r3, 1
	lwz      r4, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	slw      r0, r3, r0
	or       r0, r4, r0
	stw      r0, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)

lbl_800AF35C:
	addi     r30, r30, 1

lbl_800AF360:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r30, r3
	blt      lbl_800AF2C4
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
 * Address:	800AF38C
 * Size:	00002C
 * setVolume__11JAISequenceFfUlUc
 */
void JAISequence::setVolume(float p1, unsigned long p2, unsigned char p3) { setSeqInterVolume(p3, p1, p2); }

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JAInter::SeMgr::clearSeqMuteFromSeStop(JAISound*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AF3B8
 * Size:	0000D4
 */
void JAInter::SeMgr::checkSeMovePara(void)
{
	// if (seHandle == nullptr || seHandle->m_seqParameter._279 == 2) {
	// 	return;
	// }
	// for (u8 i = 0; i < JAIGlobalParameter::getParamSeCategoryMax(); i++) {
	// 	for (JSULink<JAISound>* link = seRegist[i]._04->getFirst(); link != nullptr; link = link->getNext()) {
	// 		JAISound* sound = link->getObject();
	// 		for (int j = 0; j < 8; j++) {
	// 			JAISe* se = (JAISe*)sound->getObject()[j];

	// 		}
	// 	}
	// }
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_800AF478
	lbz      r0, 0x2c1(r3)
	cmplwi   r0, 2
	bne      lbl_800AF3E4
	b        lbl_800AF478

lbl_800AF3E4:
	li       r30, 0
	b        lbl_800AF468

lbl_800AF3EC:
	rlwinm   r3, r30, 3, 0x15, 0x1c
	lwz      r4, seRegist__Q27JAInter5SeMgr@sda21(r13)
	addi     r0, r3, 4
	lwzx     r3, r4, r0
	lwz      r29, 0(r3)
	b        lbl_800AF45C

lbl_800AF404:
	lwz      r28, 0(r29)
	li       r27, 0
	b        lbl_800AF44C

lbl_800AF410:
	rlwinm   r0, r27, 4, 0x14, 0x1b
	add      r31, r28, r0
	addi     r3, r31, 0x16c
	bl       move__Q27JAInter11MoveParaSetFv
	addi     r3, r31, 0x1ec
	bl       move__Q27JAInter11MoveParaSetFv
	addi     r3, r31, 0x2ec
	bl       move__Q27JAInter11MoveParaSetFv
	addi     r3, r31, 0x36c
	bl       move__Q27JAInter11MoveParaSetFv
	addi     r3, r31, 0x3ec
	bl       move__Q27JAInter11MoveParaSetFv
	addi     r3, r31, 0x26c
	bl       move__Q27JAInter11MoveParaSetFv
	addi     r27, r27, 1

lbl_800AF44C:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 8
	blt      lbl_800AF410
	lwz      r29, 0xc(r29)

lbl_800AF45C:
	cmplwi   r29, 0
	bne      lbl_800AF404
	addi     r30, r30, 1

lbl_800AF468:
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	clrlwi   r0, r30, 0x18
	cmplw    r0, r3
	blt      lbl_800AF3EC

lbl_800AF478:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AF48C
 * Size:	000168
 */
void JAInter::SeMgr::sendSeAllParameter(JAISe*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lbz      r0, 0x14(r28)
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	mulli    r0, r0, 0x18
	lwz      r4, seTrackUpdate__Q27JAInter5SeMgr@sda21(r13)
	lbz      r3, 0x14(r3)
	add      r30, r4, r0
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	mr       r0, r3
	mr       r3, r28
	mr       r29, r0
	bl       getSeCategoryNumber__5JAISeFv
	lwz      r4, seCategoryVolume__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r0, r3, 2, 0x16, 0x1d
	lwz      r5, 0x46c(r28)
	mr       r3, r28
	lfsx     f1, r4, r0
	mr       r4, r29
	addi     r6, r28, 0x16c
	addi     r8, r30, 4
	li       r7, 3
	bl
checkPlayingSeUpdateMultiplication__Q27JAInter5SeMgrFP5JAISePQ27JAInter13SeqUpdateDataPfPQ27JAInter11MoveParaSetfUcPf
	lwz      r5, 0x470(r28)
	mr       r3, r28
	lfs      f1, lbl_80516F50@sda21(r2)
	mr       r4, r29
	addi     r6, r28, 0x1ec
	addi     r8, r30, 0x10
	li       r7, 5
	bl
checkPlayingSeUpdateAddition__Q27JAInter5SeMgrFP5JAISePQ27JAInter13SeqUpdateDataPfPQ27JAInter11MoveParaSetUcPff
	lwz      r5, 0x474(r28)
	mr       r3, r28
	lfs      f1, lbl_80516F48@sda21(r2)
	mr       r4, r29
	addi     r6, r28, 0x26c
	addi     r8, r30, 8
	li       r7, 4
	bl
checkPlayingSeUpdateMultiplication__Q27JAInter5SeMgrFP5JAISePQ27JAInter13SeqUpdateDataPfPQ27JAInter11MoveParaSetfUcPf
	lwz      r5, 0x478(r28)
	mr       r3, r28
	lfs      f1, lbl_80516F4C@sda21(r2)
	mr       r4, r29
	addi     r6, r28, 0x2ec
	addi     r8, r30, 0xc
	li       r7, 6
	bl
checkPlayingSeUpdateAddition__Q27JAInter5SeMgrFP5JAISePQ27JAInter13SeqUpdateDataPfPQ27JAInter11MoveParaSetUcPff
	bl       getParamSeDolbyCenterValue__18JAIGlobalParameterFv
	lfs      f0, lbl_80516F8C@sda21(r2)
	mr       r3, r28
	lwz      r5, 0x480(r28)
	mr       r4, r29
	fdivs    f1, f1, f0
	addi     r6, r28, 0x3ec
	addi     r8, r30, 0x14
	li       r7, 7
	bl
checkPlayingSeUpdateAddition__Q27JAInter5SeMgrFP5JAISePQ27JAInter13SeqUpdateDataPfPQ27JAInter11MoveParaSetUcPff
	lbz      r30, 0x14(r28)
	lwz      r3, 0x44(r29)
	slwi     r0, r30, 2
	lwzx     r31, r3, r0
	cmplwi   r31, 0
	beq      lbl_800AF5D4
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	lbz      r3, 0x14(r3)
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	mr       r4, r30
	mr       r6, r31
	li       r5, 2
	bl
setSeqPortargsU32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcUl
	lbz      r0, 0x14(r28)
	lwz      r4, 0x4c(r29)
	mulli    r3, r0, 0x48
	addi     r3, r3, 0x30
	add      r3, r4, r3
	bl       addPortCmdOnce__10JASPortCmdFv

lbl_800AF5D4:
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
 * Address:	800AF5F4
 * Size:	00010C
 * checkPlayingSeUpdateMultiplication__Q27JAInter5SeMgrFP5JAISePQ27JAInter13SeqUpdateDataPfPQ27JAInter11MoveParaSetfUcPf
 */
void JAInter::SeMgr::checkPlayingSeUpdateMultiplication(JAISe*, JAInter::SeqUpdateData*, float*, JAInter::MoveParaSet*, float,
                                                        unsigned char, float*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lfs       f0, -0x73C8(r2)
	  mr        r30, r3
	  lfs       f2, 0x74(r6)
	  mr        r31, r7
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0x84
	  cmplwi    r5, 0
	  beq-      .loc_0x44
	  lfs       f0, 0x0(r5)
	  stfs      f0, 0x4(r6)

	.loc_0x44:
	  lfs       f31, -0x7418(r2)
	  lfs       f2, 0x4(r6)
	  lfs       f0, 0x14(r6)
	  fmuls     f31, f31, f2
	  lfs       f5, 0x24(r6)
	  lfs       f4, 0x34(r6)
	  lfs       f3, 0x44(r6)
	  fmuls     f31, f31, f0
	  lfs       f2, 0x54(r6)
	  lfs       f0, 0x64(r6)
	  fmuls     f31, f31, f5
	  fmuls     f31, f31, f4
	  fmuls     f31, f31, f3
	  fmuls     f31, f31, f2
	  fmuls     f31, f31, f0
	  b         .loc_0x88

	.loc_0x84:
	  fmr       f31, f2

	.loc_0x88:
	  fmuls     f31, f31, f1
	  lfs       f0, 0x0(r8)
	  fcmpu     cr0, f0, f31
	  beq-      .loc_0xEC
	  stfs      f31, 0x0(r8)
	  lbz       r0, 0x15(r30)
	  cmplwi    r0, 0x2
	  beq-      .loc_0xEC
	  lbz       r5, 0x14(r30)
	  rlwinm    r3,r31,0,24,31
	  lwz       r6, 0x44(r4)
	  subi      r0, r3, 0x3
	  rlwinm    r5,r5,2,0,29
	  li        r3, 0x1
	  lwzx      r4, r6, r5
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stwx      r0, r6, r5
	  lwz       r3, -0x7420(r13)
	  lbz       r3, 0x14(r3)
	  bl        0x415C
	  fmr       f1, f31
	  lbz       r4, 0x14(r30)
	  mr        r5, r31
	  bl        0x9970

	.loc_0xEC:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AF700
 * Size:	00014C
 * checkPlayingSeUpdateAddition__Q27JAInter5SeMgrFP5JAISePQ27JAInter13SeqUpdateDataPfPQ27JAInter11MoveParaSetUcPff
 */
void JAInter::SeMgr::checkPlayingSeUpdateAddition(JAISe*, JAInter::SeqUpdateData*, float*, JAInter::MoveParaSet*, unsigned char, float*,
                                                  float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lfs       f0, -0x73C8(r2)
	  mr        r30, r3
	  lfs       f2, 0x74(r6)
	  mr        r31, r7
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0xC8
	  cmplwi    r5, 0
	  beq-      .loc_0x44
	  lfs       f0, 0x0(r5)
	  stfs      f0, 0x4(r6)

	.loc_0x44:
	  lfs       f0, 0x4(r6)
	  lfs       f2, 0x14(r6)
	  fsubs     f3, f0, f1
	  lfs       f31, -0x7414(r2)
	  lfs       f0, 0x24(r6)
	  fsubs     f4, f2, f1
	  lfs       f2, 0x34(r6)
	  fadds     f31, f31, f3
	  lfs       f3, 0x44(r6)
	  fsubs     f6, f0, f1
	  lfs       f0, 0x54(r6)
	  fsubs     f5, f2, f1
	  fadds     f31, f31, f4
	  lfs       f2, 0x64(r6)
	  fsubs     f4, f3, f1
	  fsubs     f3, f0, f1
	  lfs       f0, -0x7414(r2)
	  fadds     f31, f31, f6
	  fsubs     f2, f2, f1
	  fadds     f31, f31, f5
	  fadds     f31, f31, f4
	  fadds     f31, f31, f3
	  fadds     f31, f31, f2
	  fadds     f31, f31, f1
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xB4
	  fmr       f31, f0
	  b         .loc_0xCC

	.loc_0xB4:
	  lfs       f0, -0x7418(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xCC
	  fmr       f31, f0
	  b         .loc_0xCC

	.loc_0xC8:
	  fmr       f31, f2

	.loc_0xCC:
	  lfs       f0, 0x0(r8)
	  fcmpu     cr0, f0, f31
	  beq-      .loc_0x12C
	  stfs      f31, 0x0(r8)
	  lbz       r0, 0x15(r30)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x12C
	  lbz       r5, 0x14(r30)
	  rlwinm    r3,r31,0,24,31
	  lwz       r6, 0x44(r4)
	  subi      r0, r3, 0x3
	  rlwinm    r5,r5,2,0,29
	  li        r3, 0x1
	  lwzx      r4, r6, r5
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stwx      r0, r6, r5
	  lwz       r3, -0x7420(r13)
	  lbz       r3, 0x14(r3)
	  bl        0x4010
	  fmr       f1, f31
	  lbz       r4, 0x14(r30)
	  mr        r5, r31
	  bl        0x9824

	.loc_0x12C:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AF84C
 * Size:	000008
 */
u32 JAInter::SeMgr::changeIDToCategory(unsigned long id) { return id >> 0xC & 0xFF; }

/*
 * --INFO--
 * Address:	800AF854
 * Size:	0001D0
 */
void JAInter::SeMgr::releaseSeRegist(JAISe*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r5, seHandle__Q27JAInter5SeMgr@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_800AF970
	lbz      r0, 0x15(r31)
	cmplwi   r0, 1
	beq      lbl_800AF8C0
	lbz      r0, 0x14(r31)
	cmplwi   r0, 0xff
	beq      lbl_800AF8C0
	rlwinm   r3, r0, 0x1c, 0x1c, 0x1f
	rlwinm   r0, r0, 4, 0x18, 0x1b
	addis    r4, r3, 0x2000
	addi     r3, r5, 0x30c
	li       r5, 0
	add      r4, r4, r0
	bl       writePortApp__8JASTrackFUlUs
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	li       r5, 1
	lbz      r4, 0x14(r31)
	bl       setTrackInterruptSwitch__11JAISequenceFUcUc

lbl_800AF8C0:
	lwz      r0, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AF970
	mr       r3, r31
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_800AF970
	li       r29, 0
	b        lbl_800AF964

lbl_800AF8E4:
	mr       r3, r29
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r4, seHandle__Q27JAInter5SeMgr@sda21(r13)
	lwz      r30, 0x48(r3)
	lbz      r0, 0x14(r4)
	cmplw    r29, r0
	beq      lbl_800AF960
	cmplwi   r30, 0
	beq      lbl_800AF960
	mr       r3, r30
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	bne      lbl_800AF960
	lbz      r3, 0x14(r31)
	li       r4, 1
	lwz      r5, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	li       r0, -1
	slw      r3, r4, r3
	xor      r0, r3, r0
	and.     r0, r5, r0
	stw      r0, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	bne      lbl_800AF960
	bl       getParamSeqMuteMoveSpeedSePlay__18JAIGlobalParameterFv
	lwz      r12, 0x10(r30)
	mr       r4, r3
	mr       r3, r30
	lfs      f1, lbl_80516F48@sda21(r2)
	lwz      r12, 0x1c(r12)
	li       r5, 9
	mtctr    r12
	bctrl

lbl_800AF960:
	addi     r29, r29, 1

lbl_800AF964:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r29, r3
	blt      lbl_800AF8E4

lbl_800AF970:
	mr       r3, r31
	bl       getSeCategoryNumber__5JAISeFv
	lbz      r0, seScene__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r5, r3, 1, 0x17, 0x1e
	lwz      r4, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	mr       r3, r31
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	lbzx     r30, r4, r5
	bl       getSeCategoryNumber__5JAISeFv
	clrlwi   r29, r3, 0x18
	rlwinm   r6, r3, 2, 0x16, 0x1d
	li       r7, 0
	li       r3, 0
	b        lbl_800AF9D0

lbl_800AF9AC:
	lwz      r0, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r4, r7, 2, 0x16, 0x1d
	lwzx     r5, r6, r0
	lwzx     r0, r5, r4
	cmplw    r0, r31
	bne      lbl_800AF9CC
	stwx     r3, r5, r4
	mr       r7, r30

lbl_800AF9CC:
	addi     r7, r7, 1

lbl_800AF9D0:
	clrlwi   r0, r7, 0x18
	cmplw    r0, r30
	blt      lbl_800AF9AC
	mr       r3, r31
	bl       clearMainSoundPPointer__8JAISoundFv
	li       r0, 0
	li       r3, 0xff
	stb      r0, 0x15(r31)
	slwi     r0, r29, 3
	mr       r4, r31
	stb      r3, 0x14(r31)
	lwz      r3, seRegist__Q27JAInter5SeMgr@sda21(r13)
	add      r3, r3, r0
	bl       releaseSound__Q27JAInter9LinkSoundFP8JAISound
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
 * Address:	800AFA24
 * Size:	0006EC
 */
void JAInter::SeMgr::storeSeBuffer(JAISe**, JAInter::Actor*, unsigned long, unsigned long, unsigned char, JAInter::SoundInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r17, 0x54(r1)
	  mr.       r26, r3
	  mr        r17, r4
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  mr        r30, r8
	  li        r25, 0
	  beq-      .loc_0x48
	  lwz       r0, 0x0(r26)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x48
	  li        r0, 0
	  li        r25, 0x1
	  stw       r0, 0x0(r26)

	.loc_0x48:
	  cmplwi    r26, 0
	  beq-      .loc_0x8C
	  lwz       r3, 0x0(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lwz       r0, 0x20(r3)
	  cmplw     r27, r0
	  bne-      .loc_0x78
	  bne-      .loc_0x8C
	  rlwinm    r0,r27,0,20,21
	  cmplwi    r0, 0x800
	  bne-      .loc_0x8C

	.loc_0x78:
	  mr        r4, r27
	  mr        r5, r30
	  bl        0x5A6C
	  cmplwi    r3, 0
	  bne-      .loc_0x6D8

	.loc_0x8C:
	  cmplwi    r17, 0
	  mr        r31, r17
	  rlwinm    r4,r27,20,24,31
	  bne-      .loc_0xA8
	  lis       r3, 0x8051
	  addi      r0, r3, 0x2218
	  mr        r31, r0

	.loc_0xA8:
	  lbz       r3, -0x741C(r13)
	  rlwinm    r23,r4,3,21,28
	  lwz       r0, -0x7424(r13)
	  rlwinm    r4,r4,1,0,30
	  rlwinm    r5,r3,2,0,29
	  lwz       r6, -0x742C(r13)
	  add       r3, r0, r23
	  lwz       r21, 0x0(r31)
	  lwzx      r0, r6, r5
	  rlwinm    r24,r27,0,20,20
	  lwz       r3, 0x4(r3)
	  li        r20, 0
	  add       r4, r0, r4
	  lwz       r22, 0x0(r3)
	  lbz       r19, 0x1(r4)
	  b         .loc_0x2AC

	.loc_0xE8:
	  lwz       r18, 0x0(r22)
	  lwz       r0, 0x38(r18)
	  cmplw     r0, r21
	  bne-      .loc_0x2A8
	  lwz       r0, 0x20(r18)
	  cmplw     r27, r0
	  bne-      .loc_0x1A8
	  lwz       r0, 0x0(r30)
	  rlwinm.   r0,r0,0,12,12
	  bne-      .loc_0x1A8
	  rlwinm    r0,r25,0,24,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0x128
	  lwz       r0, 0x40(r18)
	  cmplw     r0, r26
	  bne-      .loc_0x1A8

	.loc_0x128:
	  cmplwi    r24, 0
	  bne-      .loc_0x184
	  lbz       r0, 0x14(r18)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x148
	  li        r0, 0x4
	  stb       r0, 0x15(r18)
	  b         .loc_0x150

	.loc_0x148:
	  li        r0, 0x1
	  stb       r0, 0x15(r18)

	.loc_0x150:
	  cmplwi    r26, 0
	  beq-      .loc_0x6D8
	  lwz       r0, 0x0(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x6D8
	  lwz       r3, 0x40(r18)
	  cmplwi    r3, 0
	  beq-      .loc_0x178
	  li        r0, 0
	  stw       r0, 0x0(r3)

	.loc_0x178:
	  stw       r26, 0x40(r18)
	  stw       r18, 0x0(r26)
	  b         .loc_0x6D8

	.loc_0x184:
	  mr        r3, r18
	  li        r4, 0
	  lwz       r12, 0x10(r18)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r22, 0
	  li        r20, 0xFF
	  b         .loc_0x2AC

	.loc_0x1A8:
	  rlwinm.   r0,r20,0,24,31
	  bne-      .loc_0x1C0
	  rlwinm    r0,r20,2,22,29
	  addi      r3, r1, 0x8
	  stwx      r18, r3, r0
	  b         .loc_0x29C

	.loc_0x1C0:
	  mr        r3, r18
	  bl        0x3F7C
	  rlwinm    r17,r3,0,24,31
	  lwz       r3, 0x8(r1)
	  bl        0x3F70
	  rlwinm    r0,r3,0,24,31
	  cmplw     r0, r17
	  bge-      .loc_0x1F0
	  rlwinm    r0,r20,2,22,29
	  addi      r3, r1, 0x8
	  stwx      r18, r3, r0
	  b         .loc_0x29C

	.loc_0x1F0:
	  rlwinm    r3,r20,0,24,31
	  li        r4, 0
	  cmplwi    r3, 0
	  ble-      .loc_0x298
	  cmplwi    r3, 0x8
	  subi      r5, r3, 0x8
	  ble-      .loc_0x26C
	  addi      r0, r5, 0x7
	  addi      r6, r1, 0x8
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmplwi    r5, 0
	  ble-      .loc_0x26C

	.loc_0x224:
	  lwz       r0, 0x0(r6)
	  addi      r4, r4, 0x8
	  stw       r0, 0x4(r6)
	  lwz       r0, 0x4(r6)
	  stw       r0, 0x8(r6)
	  lwz       r0, 0x8(r6)
	  stw       r0, 0xC(r6)
	  lwz       r0, 0xC(r6)
	  stw       r0, 0x10(r6)
	  lwz       r0, 0x10(r6)
	  stw       r0, 0x14(r6)
	  lwz       r0, 0x14(r6)
	  stw       r0, 0x18(r6)
	  lwz       r0, 0x18(r6)
	  stw       r0, 0x1C(r6)
	  lwz       r0, 0x1C(r6)
	  stwu      r0, 0x20(r6)
	  bdnz+     .loc_0x224

	.loc_0x26C:
	  rlwinm    r5,r4,2,0,29
	  addi      r6, r1, 0x8
	  sub       r0, r3, r4
	  add       r6, r6, r5
	  mtctr     r0
	  cmplw     r4, r3
	  bge-      .loc_0x298

	.loc_0x288:
	  lwz       r0, 0x0(r6)
	  addi      r4, r4, 0x1
	  stwu      r0, 0x4(r6)
	  bdnz+     .loc_0x288

	.loc_0x298:
	  stw       r18, 0x8(r1)

	.loc_0x29C:
	  lwz       r22, 0xC(r22)
	  addi      r20, r20, 0x1
	  b         .loc_0x2AC

	.loc_0x2A8:
	  lwz       r22, 0xC(r22)

	.loc_0x2AC:
	  cmplwi    r22, 0
	  bne+      .loc_0xE8
	  rlwinm    r0,r20,0,24,31
	  cmplw     r0, r19
	  bne-      .loc_0x4A8
	  lwz       r3, 0x8(r1)
	  bl        0x3E7C
	  lbz       r0, 0x4(r30)
	  rlwinm    r3,r3,0,24,31
	  cmplw     r3, r0
	  bgt-      .loc_0x6D8
	  lwz       r3, 0x8(r1)
	  bl        0x3E64
	  lbz       r0, 0x4(r30)
	  rlwinm    r3,r3,0,24,31
	  cmplw     r0, r3
	  bne-      .loc_0x300
	  lwz       r3, 0x8(r1)
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x5
	  beq-      .loc_0x6D8

	.loc_0x300:
	  lwz       r5, -0x7420(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x40C
	  lwz       r3, 0x8(r1)
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x358
	  lbz       r0, 0x14(r3)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x358
	  rlwinm    r3,r0,28,28,31
	  rlwinm    r0,r0,4,24,27
	  addis     r4, r3, 0x2000
	  addi      r3, r5, 0x30C
	  li        r5, 0
	  add       r4, r4, r0
	  bl        -0xDBD8
	  lwz       r4, 0x8(r1)
	  li        r5, 0x1
	  lwz       r3, -0x7420(r13)
	  lbz       r4, 0x14(r4)
	  bl        0x473C

	.loc_0x358:
	  lwz       r0, -0x7418(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x40C
	  lwz       r3, 0x8(r1)
	  bl        0x3DBC
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0x40C
	  li        r24, 0
	  b         .loc_0x400

	.loc_0x37C:
	  mr        r3, r24
	  bl        0x3A84
	  lwz       r4, -0x7420(r13)
	  lwz       r25, 0x48(r3)
	  lbz       r0, 0x14(r4)
	  cmplw     r24, r0
	  beq-      .loc_0x3FC
	  cmplwi    r25, 0
	  beq-      .loc_0x3FC
	  mr        r3, r25
	  bl        0x3D80
	  rlwinm.   r0,r3,0,28,28
	  bne-      .loc_0x3FC
	  lwz       r3, 0x8(r1)
	  li        r4, 0x1
	  lwz       r5, -0x7418(r13)
	  li        r0, -0x1
	  lbz       r3, 0x14(r3)
	  slw       r3, r4, r3
	  xor       r0, r3, r0
	  and.      r0, r5, r0
	  stw       r0, -0x7418(r13)
	  bne-      .loc_0x3FC
	  bl        -0x2280
	  lwz       r12, 0x10(r25)
	  mr        r4, r3
	  mr        r3, r25
	  lfs       f1, -0x7418(r2)
	  lwz       r12, 0x1C(r12)
	  li        r5, 0x9
	  mtctr     r12
	  bctrl

	.loc_0x3FC:
	  addi      r24, r24, 0x1

	.loc_0x400:
	  bl        -0x2358
	  cmplw     r24, r3
	  blt+      .loc_0x37C

	.loc_0x40C:
	  lwz       r3, 0x8(r1)
	  bl        0x3CF0
	  lbz       r0, -0x741C(r13)
	  rlwinm    r5,r3,1,23,30
	  lwz       r4, -0x742C(r13)
	  rlwinm    r0,r0,2,0,29
	  lwz       r3, 0x8(r1)
	  lwzx      r4, r4, r0
	  lbzx      r17, r4, r5
	  bl        0x3CD0
	  li        r7, 0
	  lwz       r5, 0x8(r1)
	  mr        r4, r7
	  rlwinm    r24,r3,0,24,31
	  rlwinm    r8,r3,2,22,29
	  b         .loc_0x470

	.loc_0x44C:
	  lwz       r0, -0x7428(r13)
	  rlwinm    r3,r7,2,22,29
	  lwzx      r6, r8, r0
	  lwzx      r0, r6, r3
	  cmplw     r0, r5
	  bne-      .loc_0x46C
	  stwx      r4, r6, r3
	  mr        r7, r17

	.loc_0x46C:
	  addi      r7, r7, 0x1

	.loc_0x470:
	  rlwinm    r0,r7,0,24,31
	  cmplw     r0, r17
	  blt+      .loc_0x44C
	  lwz       r3, 0x8(r1)
	  bl        0x3CCC
	  lwz       r4, 0x8(r1)
	  li        r5, 0
	  li        r3, 0xFF
	  rlwinm    r0,r24,3,0,28
	  stb       r5, 0x15(r4)
	  stb       r3, 0x14(r4)
	  lwz       r3, -0x7424(r13)
	  add       r3, r3, r0
	  bl        0x5924

	.loc_0x4A8:
	  lwz       r0, -0x7424(r13)
	  add       r3, r0, r23
	  bl        0x5898
	  mr.       r18, r3
	  bne-      .loc_0x564
	  lwz       r0, -0x7424(r13)
	  li        r17, 0
	  lfs       f0, -0x7414(r2)
	  add       r3, r0, r23
	  lwz       r3, 0x4(r3)
	  lwz       r4, 0x0(r3)
	  b         .loc_0x4FC

	.loc_0x4D8:
	  lwz       r5, 0x0(r4)
	  lwz       r3, 0x34(r5)
	  lfs       f1, 0x18(r3)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x4F8
	  fmr       f0, f1
	  mr        r17, r5

	.loc_0x4F8:
	  lwz       r4, 0xC(r4)

	.loc_0x4FC:
	  cmplwi    r4, 0
	  bne+      .loc_0x4D8
	  cmplwi    r17, 0
	  beq-      .loc_0x550
	  mr        r3, r17
	  bl        0x3C30
	  lbz       r0, 0x4(r30)
	  rlwinm    r3,r3,0,24,31
	  cmplw     r3, r0
	  bgt-      .loc_0x550
	  mr        r3, r17
	  li        r4, 0
	  lwz       r12, 0x10(r17)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x7424(r13)
	  add       r3, r0, r23
	  bl        0x5804
	  mr        r18, r3
	  b         .loc_0x564

	.loc_0x550:
	  cmplwi    r26, 0
	  beq-      .loc_0x6D8
	  li        r0, 0
	  stw       r0, 0x0(r26)
	  b         .loc_0x6D8

	.loc_0x564:
	  addi      r17, r18, 0x48
	  bl        -0x2470
	  lfs       f0, -0x73D4(r2)
	  li        r0, 0x4
	  mr        r3, r17
	  lfs       f2, -0x7418(r2)
	  fdivs     f3, f1, f0
	  lfs       f1, -0x7410(r2)
	  lfs       f0, -0x7414(r2)
	  mtctr     r0

	.loc_0x58C:
	  stfs      f2, 0x128(r3)
	  li        r11, 0
	  stfs      f2, 0x124(r3)
	  stw       r11, 0x130(r3)
	  stfs      f1, 0x1A8(r3)
	  stfs      f1, 0x1A4(r3)
	  stw       r11, 0x1B0(r3)
	  stfs      f2, 0x228(r3)
	  stfs      f2, 0x224(r3)
	  stw       r11, 0x230(r3)
	  stfs      f0, 0x2A8(r3)
	  stfs      f0, 0x2A4(r3)
	  stw       r11, 0x2B0(r3)
	  stfs      f0, 0x328(r3)
	  stfs      f0, 0x324(r3)
	  stw       r11, 0x330(r3)
	  stfs      f3, 0x3A8(r3)
	  stfs      f3, 0x3A4(r3)
	  stw       r11, 0x3B0(r3)
	  stfs      f2, 0x138(r3)
	  stfs      f2, 0x134(r3)
	  stw       r11, 0x140(r3)
	  stfs      f1, 0x1B8(r3)
	  stfs      f1, 0x1B4(r3)
	  stw       r11, 0x1C0(r3)
	  stfs      f2, 0x238(r3)
	  stfs      f2, 0x234(r3)
	  stw       r11, 0x240(r3)
	  stfs      f0, 0x2B8(r3)
	  stfs      f0, 0x2B4(r3)
	  stw       r11, 0x2C0(r3)
	  stfs      f0, 0x338(r3)
	  stfs      f0, 0x334(r3)
	  stw       r11, 0x340(r3)
	  stfs      f3, 0x3B8(r3)
	  stfs      f3, 0x3B4(r3)
	  stw       r11, 0x3C0(r3)
	  addi      r3, r3, 0x20
	  bdnz+     .loc_0x58C
	  lfs       f0, -0x73C8(r2)
	  li        r10, 0x1
	  li        r0, 0xFF
	  mr        r3, r18
	  stfs      f0, 0x198(r17)
	  mr        r4, r26
	  mr        r5, r31
	  mr        r6, r27
	  stfs      f0, 0x194(r17)
	  mr        r7, r28
	  mr        r8, r29
	  mr        r9, r30
	  stw       r11, 0x1A0(r17)
	  stfs      f0, 0x218(r17)
	  stfs      f0, 0x214(r17)
	  stw       r11, 0x220(r17)
	  stfs      f0, 0x298(r17)
	  stfs      f0, 0x294(r17)
	  stw       r11, 0x2A0(r17)
	  stfs      f0, 0x318(r17)
	  stfs      f0, 0x314(r17)
	  stw       r11, 0x320(r17)
	  stfs      f0, 0x398(r17)
	  stfs      f0, 0x394(r17)
	  stw       r11, 0x3A0(r17)
	  stfs      f0, 0x418(r17)
	  stfs      f0, 0x414(r17)
	  stw       r11, 0x420(r17)
	  stw       r11, 0x424(r17)
	  stw       r11, 0x428(r17)
	  stw       r11, 0x42C(r17)
	  stw       r11, 0x430(r17)
	  stw       r11, 0x434(r17)
	  stw       r11, 0x438(r17)
	  sth       r11, 0x20(r17)
	  stb       r10, 0x15(r18)
	  stb       r0, 0x14(r18)
	  lwz       r12, 0x10(r18)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r26, 0
	  beq-      .loc_0x6D8
	  stw       r18, 0x0(r26)

	.loc_0x6D8:
	  lmw       r17, 0x54(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B0110
 * Size:	000020
 * stop__5JAISeFUl
 */
void JAISe::stop(unsigned long p1) { JAInter::SeMgr::releaseSeBuffer(this, p1); }

/*
 * --INFO--
 * Address:	800B0130
 * Size:	000208
 */
void JAInter::SeMgr::releaseSeBuffer(JAISe*, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lbz      r0, 0x15(r3)
	cmplwi   r0, 0
	beq      lbl_800B031C
	cmplwi   r4, 0
	beq      lbl_800B0168
	cmplwi   r0, 1
	bne      lbl_800B0300

lbl_800B0168:
	lwz      r5, seHandle__Q27JAInter5SeMgr@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_800B0264
	cmplwi   r0, 1
	beq      lbl_800B01B4
	lbz      r0, 0x14(r31)
	cmplwi   r0, 0xff
	beq      lbl_800B01B4
	rlwinm   r3, r0, 0x1c, 0x1c, 0x1f
	rlwinm   r0, r0, 4, 0x18, 0x1b
	addis    r4, r3, 0x2000
	addi     r3, r5, 0x30c
	li       r5, 0
	add      r4, r4, r0
	bl       writePortApp__8JASTrackFUlUs
	lwz      r3, seHandle__Q27JAInter5SeMgr@sda21(r13)
	li       r5, 1
	lbz      r4, 0x14(r31)
	bl       setTrackInterruptSwitch__11JAISequenceFUcUc

lbl_800B01B4:
	lwz      r0, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800B0264
	mr       r3, r31
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_800B0264
	li       r29, 0
	b        lbl_800B0258

lbl_800B01D8:
	mr       r3, r29
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r4, seHandle__Q27JAInter5SeMgr@sda21(r13)
	lwz      r30, 0x48(r3)
	lbz      r0, 0x14(r4)
	cmplw    r29, r0
	beq      lbl_800B0254
	cmplwi   r30, 0
	beq      lbl_800B0254
	mr       r3, r30
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	bne      lbl_800B0254
	lbz      r3, 0x14(r31)
	li       r4, 1
	lwz      r5, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	li       r0, -1
	slw      r3, r4, r3
	xor      r0, r3, r0
	and.     r0, r5, r0
	stw      r0, seqMuteFlagFromSe__Q27JAInter5SeMgr@sda21(r13)
	bne      lbl_800B0254
	bl       getParamSeqMuteMoveSpeedSePlay__18JAIGlobalParameterFv
	lwz      r12, 0x10(r30)
	mr       r4, r3
	mr       r3, r30
	lfs      f1, lbl_80516F48@sda21(r2)
	lwz      r12, 0x1c(r12)
	li       r5, 9
	mtctr    r12
	bctrl

lbl_800B0254:
	addi     r29, r29, 1

lbl_800B0258:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r29, r3
	blt      lbl_800B01D8

lbl_800B0264:
	mr       r3, r31
	bl       getSeCategoryNumber__5JAISeFv
	lbz      r0, seScene__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r5, r3, 1, 0x17, 0x1e
	lwz      r4, categoryInfoTable__Q27JAInter5SeMgr@sda21(r13)
	mr       r3, r31
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	lbzx     r30, r4, r5
	bl       getSeCategoryNumber__5JAISeFv
	li       r6, 0
	clrlwi   r29, r3, 0x18
	mr       r4, r6
	rlwinm   r7, r3, 2, 0x16, 0x1d
	b        lbl_800B02C4

lbl_800B02A0:
	lwz      r0, sePlaySound__Q27JAInter5SeMgr@sda21(r13)
	rlwinm   r3, r6, 2, 0x16, 0x1d
	lwzx     r5, r7, r0
	lwzx     r0, r5, r3
	cmplw    r0, r31
	bne      lbl_800B02C0
	stwx     r4, r5, r3
	mr       r6, r30

lbl_800B02C0:
	addi     r6, r6, 1

lbl_800B02C4:
	clrlwi   r0, r6, 0x18
	cmplw    r0, r30
	blt      lbl_800B02A0
	mr       r3, r31
	bl       clearMainSoundPPointer__8JAISoundFv
	li       r0, 0
	li       r3, 0xff
	stb      r0, 0x15(r31)
	slwi     r0, r29, 3
	mr       r4, r31
	stb      r3, 0x14(r31)
	lwz      r3, seRegist__Q27JAInter5SeMgr@sda21(r13)
	add      r3, r3, r0
	bl       releaseSound__Q27JAInter9LinkSoundFP8JAISound
	b        lbl_800B031C

lbl_800B0300:
	stw      r4, 0x28(r31)
	li       r5, 6
	lfs      f1, lbl_80516F4C@sda21(r2)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_800B031C:
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
 * Address:	800B0338
 * Size:	000008
 */
void JAInter::SeMgr::setSeSequenceStartCallback(JAInter::SeMgr::StartCallback callback)
{
	seStartCallback = callback;
	/*
	stw      r3, seStartCallback__Q27JAInter5SeMgr@sda21(r13)
	blr
	*/
}
