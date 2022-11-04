#include "Dolphin/string.h"
#include "JSystem/JAI/JAIGlobalParameter.h"
#include "JSystem/JAI/JAISequence.h"
#include "JSystem/JAI/JAInter.h"
#include "JSystem/JAS/JASPortCmd.h"
#include "JSystem/JKR/JKRArchive.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global seqTrackInfo__Q27JAInter11SequenceMgr
    seqTrackInfo__Q27JAInter11SequenceMgr:
        .skip 0x4
    .global FixSeqBufPointer__Q27JAInter11SequenceMgr
    FixSeqBufPointer__Q27JAInter11SequenceMgr:
        .skip 0x4
    .global seqControl__Q27JAInter11SequenceMgr
    seqControl__Q27JAInter11SequenceMgr:
        .skip 0x8
    .global arcPointer__Q27JAInter11SequenceMgr
    arcPointer__Q27JAInter11SequenceMgr:
        .skip 0x4
    .global customHeapCallback__Q27JAInter11SequenceMgr
    customHeapCallback__Q27JAInter11SequenceMgr:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516FA0
    lbl_80516FA0:
        .float 1.0
    .global lbl_80516FA4
    lbl_80516FA4:
        .float 0.5
    .global lbl_80516FA8
    lbl_80516FA8:
        .4byte 0x00000000
    .global lbl_80516FAC
    lbl_80516FAC:
        .4byte 0x42800000
    .global lbl_80516FB0
    lbl_80516FB0:
        .4byte 0x3F8CCCCD
        .4byte 0x00000000
    .global lbl_80516FB8
    lbl_80516FB8:
        .4byte 0x3FE00000
        .4byte 0x00000000
    .global lbl_80516FC0
    lbl_80516FC0:
        .4byte 0x40080000
        .4byte 0x00000000
    .global lbl_80516FC8
    lbl_80516FC8:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516FD0
    lbl_80516FD0:
        .4byte 0x42FE0000
        .4byte 0x00000000
    .global lbl_80516FD8
    lbl_80516FD8:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800B0944
 * Size:	000488
 */
void JAInter::SequenceMgr::init(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stmw     r20, 0x10(r1)
	addi     r3, r13, seqControl__Q27JAInter11SequenceMgr@sda21
	bl       init__Q27JAInter9LinkSoundFv
	lwz      r21, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	mr       r4, r21
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, FixSeqBufPointer__Q27JAInter11SequenceMgr@sda21(r13)
	li       r21, 0
	b        lbl_800B09C8

lbl_800B09A0:
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, seqControl__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r0
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r21, r21, 1

lbl_800B09C8:
	bl       getParamSeqControlBufferMax__18JAIGlobalParameterFv
	cmplw    r21, r3
	blt      lbl_800B09A0
	lwz      r6, seqControl__Q27JAInter11SequenceMgr@sda21(r13)
	lis      r3, __defctor__Q27JAInter11MoveParaSetFv@ha
	addi     r23, r3, __defctor__Q27JAInter11MoveParaSetFv@l
	lis      r4, __ct__Q27JAInter19MoveParaSetInitZeroFv@ha
	lis      r5, __ct__Q27JAInter19MoveParaSetInitHalfFv@ha
	lis      r3, __ct__Q27JAInter7MuteBitFv@ha
	lwz      r30, 0(r6)
	addi     r29, r4, __ct__Q27JAInter19MoveParaSetInitZeroFv@l
	mr       r24, r23
	mr       r25, r23
	mr       r26, r23
	mr       r28, r23
	addi     r27, r5, __ct__Q27JAInter19MoveParaSetInitHalfFv@l
	addi     r22, r3, __ct__Q27JAInter7MuteBitFv@l
	b        lbl_800B0CA4

lbl_800B0A10:
	lwz      r31, 0(r30)
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	rlwinm   r6, r3, 4, 0x14, 0x1b
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	clrlwi   r21, r3, 0x18
	li       r5, 0x20
	addi     r3, r6, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r23
	mr       r7, r21
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x298(r31)
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	rlwinm   r6, r3, 4, 0x14, 0x1b
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	clrlwi   r21, r3, 0x18
	li       r5, 0x20
	addi     r3, r6, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r23
	mr       r7, r21
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x29c(r31)
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	rlwinm   r6, r3, 4, 0x14, 0x1b
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	clrlwi   r21, r3, 0x18
	li       r5, 0x20
	addi     r3, r6, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r24
	mr       r7, r21
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x2a0(r31)
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	rlwinm   r6, r3, 4, 0x14, 0x1b
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	clrlwi   r21, r3, 0x18
	li       r5, 0x20
	addi     r3, r6, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r25
	mr       r7, r21
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x2a4(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	mr       r21, r3
	slwi     r3, r3, 4
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r5, 0x20
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r26
	mr       r7, r21
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x2a8(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	mr       r21, r3
	slwi     r3, r3, 4
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r5, 0x20
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r27
	mr       r7, r21
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x2ac(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	mr       r21, r3
	slwi     r3, r3, 4
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r5, 0x20
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r28
	mr       r7, r21
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x2b0(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	mr       r21, r3
	slwi     r3, r3, 4
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r5, 0x20
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r29
	mr       r7, r21
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x2b4(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	mr       r21, r3
	slwi     r3, r3, 4
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r5, 0x20
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r29
	mr       r7, r21
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x2b8(r31)
	lwz      r21, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	mr       r4, r21
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x2bc(r31)
	li       r20, 0
	li       r21, 0
	b        lbl_800B0C30

lbl_800B0C10:
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r3, 0x20
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	lwz      r4, 0x2bc(r31)
	addi     r20, r20, 1
	stwx     r3, r4, r21
	addi     r21, r21, 4

lbl_800B0C30:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	cmplw    r20, r3
	blt      lbl_800B0C10
	lwz      r21, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	mr       r4, r21
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x2fc(r31)
	lwz      r21, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	mr       r4, r21
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x300(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	mr       r21, r3
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r5, 0x20
	addi     r3, r21, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r22
	mr       r7, r21
	li       r5, 0
	li       r6, 1
	bl       __construct_new_array
	stw      r3, 0x304(r31)
	lwz      r30, 0xc(r30)

lbl_800B0CA4:
	cmplwi   r30, 0
	bne      lbl_800B0A10
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	mr       r21, r3
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	mulli    r3, r21, 0x50
	li       r5, 0x20
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	lis      r4, __ct__Q27JAInter13SeqUpdateDataFv@ha
	mr       r7, r21
	addi     r4, r4, __ct__Q27JAInter13SeqUpdateDataFv@l
	li       r5, 0
	li       r6, 0x50
	bl       __construct_new_array
	li       r25, 0
	stw      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	lfs      f29, lbl_80516FA0@sda21(r2)
	mr       r26, r25
	lfs      f30, lbl_80516FAC@sda21(r2)
	li       r20, 0
	lfs      f31, lbl_80516FA8@sda21(r2)
	lfs      f28, lbl_80516FA4@sda21(r2)
	b        lbl_800B0D8C

lbl_800B0D04:
	lwz      r3, FixSeqBufPointer__Q27JAInter11SequenceMgr@sda21(r13)
	li       r22, 0
	mr       r21, r22
	stwx     r22, r3, r25
	mr       r24, r22
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	add      r23, r0, r26
	stfs     f29, 0xc(r23)
	stfs     f28, 0x18(r23)
	stfs     f29, 0x10(r23)
	stfs     f31, 0x14(r23)
	stfs     f31, 0x1c(r23)
	stfs     f29, 0x20(r23)
	b        lbl_800B0D74

lbl_800B0D3C:
	lwz      r3, 0x24(r23)
	addi     r21, r21, 1
	stfsx    f29, r3, r24
	lwz      r3, 0x30(r23)
	stfsx    f30, r3, r24
	lwz      r3, 0x28(r23)
	stfsx    f29, r3, r24
	lwz      r3, 0x2c(r23)
	stfsx    f31, r3, r24
	lwz      r3, 0x34(r23)
	stfsx    f31, r3, r24
	lwz      r3, 0x44(r23)
	stwx     r22, r3, r24
	addi     r24, r24, 4

lbl_800B0D74:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	cmplw    r21, r3
	blt      lbl_800B0D3C
	addi     r25, r25, 4
	addi     r26, r26, 0x50
	addi     r20, r20, 1

lbl_800B0D8C:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r20, r3
	blt      lbl_800B0D04
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lmw      r20, 0x10(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B0DCC
 * Size:	000020
 */
JAInter::MuteBit::MuteBit(void)
{
	/*
	lbz      r0, 0(r3)
	li       r4, 0
	rlwimi   r0, r4, 7, 0x18, 0x18
	stb      r0, 0(r3)
	lbz      r0, 0(r3)
	rlwimi   r0, r4, 5, 0x1a, 0x1a
	stb      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B0DEC
 * Size:	00012C
 */
JAInter::SeqUpdateData::SeqUpdateData(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0x20
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	stb      r0, 0(r3)
	li       r3, 0x958
	stb      r0, 1(r31)
	stb      r0, 2(r31)
	stb      r0, 3(r31)
	stw      r0, 8(r31)
	stw      r0, 0x48(r31)
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       __nwa__FUlP7JKRHeapi
	lis      r4, __ct__Q27JAInter15PlayerParameterFv@ha
	lis      r5, __dt__Q27JAInter15PlayerParameterFv@ha
	addi     r4, r4, __ct__Q27JAInter15PlayerParameterFv@l
	li       r6, 0x48
	addi     r5, r5, __dt__Q27JAInter15PlayerParameterFv@l
	li       r7, 0x21
	bl       __construct_new_array
	stw      r3, 0x4c(r31)
	lwz      r30, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	mr       r4, r30
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x24(r31)
	lwz      r30, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	mr       r4, r30
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x30(r31)
	lwz      r30, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	mr       r4, r30
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x28(r31)
	lwz      r30, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	mr       r4, r30
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x2c(r31)
	lwz      r30, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	mr       r4, r30
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x34(r31)
	lwz      r30, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	addi     r0, r3, 1
	mr       r4, r30
	slwi     r3, r0, 2
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x44(r31)
	mr       r3, r31
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
 * Address:	800B0F18
 * Size:	000068
 */
JAInter::PlayerParameter::~PlayerParameter(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800B0F64
	addic.   r0, r30, 0x30
	beq      lbl_800B0F54
	addic.   r0, r30, 0x30
	beq      lbl_800B0F54
	addi     r3, r30, 0x30
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800B0F54:
	extsh.   r0, r31
	ble      lbl_800B0F64
	mr       r3, r30
	bl       __dl__FPv

lbl_800B0F64:
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
 * Address:	800B0F80
 * Size:	000050
 */
JAInter::PlayerParameter::PlayerParameter(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r31, r30, 0x30
	mr       r3, r31
	mr       r4, r31
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x10(r31)
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
 * Address:	800B0FD0
 * Size:	000058
 */
JASPortCmd::~JASPortCmd()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800B100C
	beq      lbl_800B0FFC
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800B0FFC:
	extsh.   r0, r31
	ble      lbl_800B100C
	mr       r3, r30
	bl       __dl__FPv

lbl_800B100C:
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
 * Address:	........
 * Size:	000054
 */
// void JSULink<JASPortCmd>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	800B1028
 * Size:	00006C
 */
void JAInter::SequenceMgr::getArchiveName(char* path)
{
	path[0] = '\0';
	if (JAIGlobalParameter::getParamAudioResPath() != nullptr) {
		strcat(path, JAIGlobalParameter::getParamAudioResPath());
	}
	strcat(path, JAIGlobalParameter::getParamSequenceArchivesPath());
	strcat(path, JAIGlobalParameter::getParamSequenceArchivesFileName());
}

/*
 * --INFO--
 * Address:	800B1094
 * Size:	000008
 */
void JAInter::SequenceMgr::setArchivePointer(JKRArchive* archive) { arcPointer = archive; }

/*
 * --INFO--
 * Address:	800B109C
 * Size:	000008
 */
JKRArchive* JAInter::SequenceMgr::getArchivePointer() { return arcPointer; }

/*
 * --INFO--
 * Address:	800B10A4
 * Size:	000008
 */
void JAInter::SequenceMgr::setCustomHeapCallback(JAInter::SequenceMgr::CustomHeapInfo (*callback)(unsigned long, unsigned short,
                                                                                                  JAISequence*))
{
	customHeapCallback = callback;
}

/*
 * --INFO--
 * Address:	800B10AC
 * Size:	000038
 */
void JAInter::SequenceMgr::processGFrameSequence(void)
{
	checkEntriedSeq();
	checkStoppedSeq();
	checkPlayingSeq();
	checkFadeoutSeq();
	checkStartedSeq();
	checkReadSeq();
	checkSeqWave();
}

/*
 * --INFO--
 * Address:	800B10E4
 * Size:	000430
 */
void JAInter::SequenceMgr::checkEntriedSeq(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r22, 0x18(r1)
	li       r29, 0
	li       r30, 0
	b        lbl_800B14F4

lbl_800B1100:
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	add      r28, r0, r30
	lwz      r3, 0x48(r28)
	cmplwi   r3, 0
	beq      lbl_800B14EC
	lwz      r0, 8(r28)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_800B14EC
	lwz      r4, 0x44(r3)
	lwz      r3, arcPointer__Q27JAInter11SequenceMgr@sda21(r13)
	lhz      r27, 6(r4)
	mr       r4, r27
	bl       getResSize__15JASResArcLoaderFP10JKRArchiveUs
	lwz      r12, customHeapCallback__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r26, r3
	cmplwi   r12, 0
	beq      lbl_800B11EC
	mr       r5, r27
	addi     r3, r1, 0xc
	lwz      r6, 0x48(r28)
	li       r4, 0
	mtctr    r12
	bctrl
	lbz      r0, 0x10(r1)
	lwz      r23, 0xc(r1)
	cmplwi   r0, 1
	mr       r31, r23
	bne      lbl_800B11DC
	lwz      r3, 0x48(r28)
	li       r4, 0x40
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	bne      lbl_800B11B8
	lwz      r5, 0x48(r28)
	li       r0, 1
	lis      r3, checkCustomDvdLoadArc__Q27JAInter11SequenceMgrFUlUl@ha
	mr       r4, r27
	stb      r0, 0x15(r5)
	addi     r7, r3, checkCustomDvdLoadArc__Q27JAInter11SequenceMgrFUlUl@l
	mr       r5, r23
	mr       r6, r26
	stb      r0, 3(r28)
	mr       r8, r29
	lwz      r3, arcPointer__Q27JAInter11SequenceMgr@sda21(r13)
	bl       loadResourceAsync__15JASResArcLoaderFP10JKRArchiveUsPUcUlPFUlUl_vUl
	b        lbl_800B14C8

lbl_800B11B8:
	lwz      r3, arcPointer__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r27
	mr       r5, r23
	mr       r6, r26
	bl       loadResource__15JASResArcLoaderFP10JKRArchiveUsPUcUl
	lwz      r3, 0x48(r28)
	li       r0, 2
	stb      r0, 0x15(r3)
	b        lbl_800B14C8

lbl_800B11DC:
	lwz      r3, 0x48(r28)
	li       r0, 2
	stb      r0, 0x15(r3)
	b        lbl_800B14C8

lbl_800B11EC:
	lbz      r0, 3(r28)
	cmplwi   r0, 0
	bne      lbl_800B14EC
	lwz      r3, 0x48(r28)
	addi     r4, r1, 8
	li       r25, 0
	lwz      r0, 0x20(r3)
	clrlwi   r3, r0, 0x16
	bl       checkOnMemory__Q27JAInter7HeapMgrFUlPUc
	or.      r31, r3, r3
	bne      lbl_800B1488
	lwz      r3, 0x48(r28)
	li       r4, 0x10
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	beq      lbl_800B126C
	bl       checkUsefulStayHeapPosition__Q27JAInter7HeapMgrFv
	stb      r3, 8(r1)
	mr       r3, r26
	lwz      r4, 0x48(r28)
	lwz      r0, 0x20(r4)
	clrlwi   r4, r0, 0x16
	bl       getFreeStayHeapPointer__Q27JAInter7HeapMgrFUlUl
	or.      r31, r3, r3
	bne      lbl_800B125C
	lwz      r3, 0x48(r28)
	li       r4, 0x20
	bl       checkSwBit__8JAISoundFUl

lbl_800B125C:
	lwz      r3, 0x48(r28)
	li       r0, 0xff
	li       r25, 1
	stb      r0, 0x2c0(r3)

lbl_800B126C:
	cmplwi   r31, 0
	bne      lbl_800B13E0
	lwz      r3, 0x48(r28)
	li       r4, 0x20
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	bne      lbl_800B129C
	lwz      r3, 0x48(r28)
	li       r4, 0x10
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	bne      lbl_800B13E0

lbl_800B129C:
	bl       checkUsefulAutoHeapPosition__Q27JAInter7HeapMgrFv
	stb      r3, 8(r1)
	bl       getParamAutoHeapMax__18JAIGlobalParameterFv
	lbz      r0, 8(r1)
	cmplw    r0, r3
	blt      lbl_800B1390
	li       r24, 0
	li       r31, 0
	b        lbl_800B1358

lbl_800B12C0:
	bl       getAutoHeapPointer__Q27JAInter7HeapMgrFv
	add      r3, r3, r31
	lwz      r3, 0x10(r3)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_800B1350
	li       r23, 0
	b        lbl_800B132C

lbl_800B12E0:
	mulli    r22, r23, 0x50
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r22, 0x48
	lwzx     r0, r3, r0
	cmplwi   r0, 0
	beq      lbl_800B1328
	bl       getAutoHeapPointer__Q27JAInter7HeapMgrFv
	lwz      r4, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r22, 0x48
	add      r5, r3, r31
	lwzx     r3, r4, r0
	lwz      r0, 8(r5)
	lwz      r3, 0x20(r3)
	clrlwi   r3, r3, 0x16
	cmplw    r3, r0
	bne      lbl_800B1328
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	mr       r23, r3

lbl_800B1328:
	addi     r23, r23, 1

lbl_800B132C:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r23, r3
	blt      lbl_800B12E0
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r23, r3
	bne      lbl_800B1350
	clrlwi   r3, r24, 0x18
	bl       releaseAutoHeapPointer__Q27JAInter7HeapMgrFUc
	stb      r24, 8(r1)

lbl_800B1350:
	addi     r31, r31, 0x14
	addi     r24, r24, 1

lbl_800B1358:
	bl       getParamAutoHeapMax__18JAIGlobalParameterFv
	cmplw    r24, r3
	blt      lbl_800B12C0
	bl       getParamAutoHeapMax__18JAIGlobalParameterFv
	lbz      r0, 8(r1)
	cmplw    r0, r3
	blt      lbl_800B13BC
	lwz      r3, 0x48(r28)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_800B14EC

lbl_800B1390:
	bl       getParamAutoHeapRoomSize__18JAIGlobalParameterFv
	cmplw    r26, r3
	blt      lbl_800B13BC
	bl       getParamAutoHeapRoomSize__18JAIGlobalParameterFv
	lwz      r3, 0x48(r28)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_800B14EC

lbl_800B13BC:
	lbz      r0, 8(r1)
	lwz      r3, 0x48(r28)
	stb      r0, 0x2c0(r3)
	lwz      r3, 0x48(r28)
	lwz      r0, 0x20(r3)
	lbz      r3, 0x2c0(r3)
	clrlwi   r4, r0, 0x16
	bl       getFreeAutoHeapPointer__Q27JAInter7HeapMgrFUcUl
	mr       r31, r3

lbl_800B13E0:
	lwz      r3, 0x48(r28)
	li       r4, 0x40
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	bne      lbl_800B1464
	lwz      r4, 0x48(r28)
	li       r5, 1
	slwi     r0, r27, 0x10
	clrlwi.  r3, r25, 0x18
	stb      r5, 0x15(r4)
	or       r0, r29, r0
	rlwinm   r5, r25, 0xf, 9, 0x10
	lbz      r3, 8(r1)
	rlwinm   r4, r3, 8, 0x10, 0x17
	or       r0, r4, r0
	or       r22, r5, r0
	bne      lbl_800B1430
	li       r4, 1
	bl       setAutoHeapLoadedFlag__Q27JAInter7HeapMgrFUcUc
	b        lbl_800B1438

lbl_800B1430:
	li       r4, 1
	bl       setStayHeapLoadedFlag__Q27JAInter7HeapMgrFUcUc

lbl_800B1438:
	li       r0, 1
	lis      r3, checkDvdLoadArc__Q27JAInter11SequenceMgrFUlUl@ha
	stb      r0, 3(r28)
	addi     r7, r3, checkDvdLoadArc__Q27JAInter11SequenceMgrFUlUl@l
	mr       r4, r27
	mr       r5, r31
	lwz      r3, arcPointer__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r6, r26
	mr       r8, r22
	bl       loadResourceAsync__15JASResArcLoaderFP10JKRArchiveUsPUcUlPFUlUl_vUl
	b        lbl_800B14C8

lbl_800B1464:
	lwz      r3, arcPointer__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r27
	mr       r5, r31
	mr       r6, r26
	bl       loadResource__15JASResArcLoaderFP10JKRArchiveUsPUcUl
	lwz      r3, 0x48(r28)
	li       r0, 2
	stb      r0, 0x15(r3)
	b        lbl_800B14C8

lbl_800B1488:
	addis    r0, r31, 1
	cmplwi   r0, 0xffff
	beq      lbl_800B14EC
	lbz      r3, 8(r1)
	cmplwi   r3, 0xff
	beq      lbl_800B14B0
	lwz      r4, 0x48(r28)
	lwz      r0, 0x20(r4)
	clrlwi   r4, r0, 0x16
	bl       getFreeAutoHeapPointer__Q27JAInter7HeapMgrFUcUl

lbl_800B14B0:
	lbz      r4, 8(r1)
	li       r0, 2
	lwz      r3, 0x48(r28)
	stb      r4, 0x2c0(r3)
	lwz      r3, 0x48(r28)
	stb      r0, 0x15(r3)

lbl_800B14C8:
	cmplwi   r31, 0
	beq      lbl_800B14E4
	stw      r31, 0x40(r28)
	lwz      r0, 8(r28)
	xori     r0, r0, 1
	stw      r0, 8(r28)
	b        lbl_800B14EC

lbl_800B14E4:
	lwz      r3, 0x48(r28)
	bl       stopSeq__Q27JAInter11SequenceMgrFP11JAISequence

lbl_800B14EC:
	addi     r30, r30, 0x50
	addi     r29, r29, 1

lbl_800B14F4:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r29, r3
	blt      lbl_800B1100
	lmw      r22, 0x18(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B1514
 * Size:	0000B8
 */
void JAInter::SequenceMgr::checkFadeoutSeq(void)
{
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		SeqUpdateData* info = &seqTrackInfo[i];
		if (info->m_sequence != nullptr && info->m_sequence->_15 == 5 && info->m_sequence->getVolume(7) == 0.0f) {
			info->m_sequence->m_seqParameter.m_track.stopSeq();
			info->m_sequence->clearMainSoundPPointer();
			stopSeq(info->m_sequence);
			info->_08 = 0;
		}
	}
}

/*
 * --INFO--
 * Address:	800B15CC
 * Size:	000020
 */
// float JAISequence::getVolume(unsigned char p1) { return getSeqInterVolume(p1); }

/*
 * --INFO--
 * Address:	800B15EC
 * Size:	0000A4
 */
void JAInter::SequenceMgr::checkStoppedSeq(void)
{
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		SeqUpdateData* info = &seqTrackInfo[i];
		if (info->m_sequence != nullptr && (info->m_sequence->_15 == 4 || info->m_sequence->_15 == 5)
		    && info->m_sequence->m_seqParameter.m_track._35B == 0) {
			info->m_sequence->clearMainSoundPPointer();
			stopSeq(info->m_sequence);
			info->_08 = 0;
		}
	}
}

/*
 * --INFO--
 * Address:	800B1690
 * Size:	0000EC
 */
void JAInter::SequenceMgr::checkPlayingSeq(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	li       r31, 0
	li       r29, 0
	b        lbl_800B175C

lbl_800B16AC:
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	add      r30, r0, r29
	lwz      r3, 0x48(r30)
	cmplwi   r3, 0
	beq      lbl_800B1754
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	blt      lbl_800B1754
	mr       r3, r31
	bl       checkPlayingSeqTrack__Q27JAInter11SequenceMgrFUl
	li       r27, 0
	b        lbl_800B1740

lbl_800B16DC:
	lwz      r3, 0x44(r30)
	rlwinm   r0, r27, 2, 0x16, 0x1d
	clrlwi   r28, r27, 0x18
	lwzx     r6, r3, r0
	cmplwi   r6, 0
	beq      lbl_800B173C
	cmplwi   r28, 0x20
	beq      lbl_800B1718
	lwz      r3, 0x48(r30)
	li       r0, 1
	slw      r4, r0, r4
	lwz      r3, 0x308(r3)
	lwz      r0, 4(r3)
	and.     r0, r4, r0
	beq      lbl_800B173C

lbl_800B1718:
	mr       r3, r30
	mr       r4, r28
	li       r5, 2
	bl
setSeqPortargsU32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcUl
	mulli    r3, r28, 0x48
	lwz      r0, 0x4c(r30)
	addi     r3, r3, 0x30
	add      r3, r0, r3
	bl       addPortCmdOnce__10JASPortCmdFv

lbl_800B173C:
	addi     r27, r27, 1

lbl_800B1740:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	addi     r0, r3, 1
	clrlwi   r4, r27, 0x18
	cmplw    r4, r0
	blt      lbl_800B16DC

lbl_800B1754:
	addi     r29, r29, 0x50
	addi     r31, r31, 1

lbl_800B175C:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r31, r3
	blt      lbl_800B16AC
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B177C
 * Size:	0000A0
 */
void JAInter::SequenceMgr::checkStartedSeq(void)
{
	for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
		SeqUpdateData* info = &seqTrackInfo[i];
		if (info->m_sequence != nullptr && info->m_sequence->_15 == 3
		    && SystemInterface::checkSeqActiveFlag(&info->m_sequence->m_seqParameter.m_track) != 0) {
			info->m_sequence->_15 = 4;
			SystemInterface::trackInit(info);
		}
	}
}

/*
 * --INFO--
 * Address:	800B181C
 * Size:	000224
 */
void JAInter::SequenceMgr::checkReadSeq(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stmw     r24, 0x10(r1)
	li       r29, 0
	li       r31, 0
	b        lbl_800B1A08

lbl_800B1850:
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	add      r28, r0, r31
	lwz      r30, 0x48(r28)
	cmplwi   r30, 0
	beq      lbl_800B1A00
	lbz      r0, 0x15(r30)
	cmplwi   r0, 2
	bne      lbl_800B1A00
	lwz      r3, 0x2c4(r30)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_800B1A00
	lwz      r3, 0x308(r30)
	lbz      r0, 2(r3)
	cmplwi   r0, 0
	bne      lbl_800B1A00
	lbz      r0, 0x667(r30)
	cmplwi   r0, 0
	bne      lbl_800B1A00
	lwz      r4, 0x44(r30)
	lwz      r3, arcPointer__Q27JAInter11SequenceMgr@sda21(r13)
	lhz      r4, 6(r4)
	bl       getResSize__15JASResArcLoaderFP10JKRArchiveUs
	lwz      r4, 0x40(r28)
	mr       r5, r3
	addi     r3, r30, 0x30c
	bl       setSeqData__8JASTrackFPUcl
	lwz      r3, 0x48(r28)
	li       r26, 0
	lwz      r4, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r24, r26
	lbz      r0, 0x14(r3)
	mr       r27, r26
	lfs      f29, lbl_80516FA0@sda21(r2)
	mulli    r0, r0, 0x50
	lfs      f0, lbl_80516FA4@sda21(r2)
	lfs      f30, lbl_80516FA8@sda21(r2)
	lfs      f31, lbl_80516FAC@sda21(r2)
	add      r25, r4, r0
	stfs     f29, 0xc(r25)
	stfs     f0, 0x18(r25)
	stfs     f29, 0x10(r25)
	stfs     f30, 0x14(r25)
	stfs     f30, 0x1c(r25)
	stfs     f29, 0x20(r25)
	b        lbl_800B1940

lbl_800B1908:
	lwz      r3, 0x24(r25)
	addi     r26, r26, 1
	stfsx    f29, r3, r24
	lwz      r3, 0x30(r25)
	stfsx    f31, r3, r24
	lwz      r3, 0x28(r25)
	stfsx    f29, r3, r24
	lwz      r3, 0x2c(r25)
	stfsx    f30, r3, r24
	lwz      r3, 0x34(r25)
	stfsx    f30, r3, r24
	lwz      r3, 0x44(r25)
	stwx     r27, r3, r24
	addi     r24, r24, 4

lbl_800B1940:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	cmplw    r26, r3
	blt      lbl_800B1908
	lwz      r3, 0x48(r28)
	li       r0, 3
	stb      r0, 0x15(r3)
	lwz      r3, 0x48(r28)
	lwz      r0, 0x28(r3)
	cmplwi   r0, 1
	ble      lbl_800B19A4
	lwz      r12, 0x10(r3)
	li       r4, 0
	lfs      f1, lbl_80516FA8@sda21(r2)
	li       r5, 7
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r28)
	li       r5, 7
	lfs      f1, lbl_80516FA0@sda21(r2)
	lwz      r12, 0x10(r3)
	lwz      r4, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_800B19A4:
	lbz      r4, 0(r28)
	cmplwi   r4, 0
	beq      lbl_800B19C4
	lwz      r3, 0x48(r28)
	lbz      r5, 1(r28)
	bl       setPauseMode__8JAISoundFUcUc
	lfs      f0, lbl_80516FB0@sda21(r2)
	stfs     f0, 0xc(r28)

lbl_800B19C4:
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r4, 0x48(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       checkPlayingSeqTrack__Q27JAInter11SequenceMgrFUl
	lwz      r0, 0x48(r28)
	cmplwi   r0, 0
	beq      lbl_800B1A00
	mr       r3, r28
	bl       rootInit__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateData
	addi     r3, r30, 0x30c
	bl       startSeq__8JASTrackFv

lbl_800B1A00:
	addi     r31, r31, 0x50
	addi     r29, r29, 1

lbl_800B1A08:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r29, r3
	blt      lbl_800B1850
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lmw      r24, 0x10(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B1A40
 * Size:	0000D8
 */
void JAInter::SequenceMgr::checkSeqWave(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	li       r30, 0
	b        lbl_800B1AF4

lbl_800B1A60:
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r31, 0x48
	lwzx     r3, r3, r0
	cmplwi   r3, 0
	beq      lbl_800B1AEC
	addic.   r5, r3, 0x48
	beq      lbl_800B1AEC
	lwz      r4, 0x27c(r5)
	addis    r0, r4, 1
	cmplwi   r0, 0xffff
	beq      lbl_800B1AEC
	lwz      r6, SceneSetFlag__Q27JAInter8BankWave@sda21(r13)
	addis    r0, r6, 1
	cmplwi   r0, 0xffff
	beq      lbl_800B1AEC
	cmplw    r4, r6
	beq      lbl_800B1AE4
	addis    r0, r4, 0x100
	cmplwi   r0, 0xff00
	beq      lbl_800B1AE4
	rlwinm   r3, r4, 0, 0, 0xf
	rlwinm   r0, r6, 0, 0, 0xf
	cmplw    r3, r0
	bne      lbl_800B1AC8
	cmplwi   r4, 0xffff
	beq      lbl_800B1AE4

lbl_800B1AC8:
	clrlwi   r3, r4, 0x10
	clrlwi   r0, r6, 0x10
	cmplw    r3, r0
	bne      lbl_800B1AEC
	addis    r0, r4, 1
	cmplwi   r0, 0
	bne      lbl_800B1AEC

lbl_800B1AE4:
	li       r0, -1
	stw      r0, 0x27c(r5)

lbl_800B1AEC:
	addi     r31, r31, 0x50
	addi     r30, r30, 1

lbl_800B1AF4:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r30, r3
	blt      lbl_800B1A60
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
 * Size:	000138
 */
void JAInter::SequenceMgr::checkPlayingSeqUpdateMultiplication(unsigned long, unsigned char, unsigned long, JAInter::MoveParaSet*,
                                                               unsigned long*, unsigned char, float*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000178
 */
void JAInter::SequenceMgr::checkPlayingSeqUpdateAddition(unsigned long, unsigned char, unsigned long, JAInter::MoveParaSet*, unsigned long*,
                                                         unsigned char, float*, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void JAInter::SequenceMgr::checkPlayingSeqUpdateTrack(unsigned long, unsigned long, JAInter::MoveParaSet*, unsigned long*, unsigned char,
                                                      float*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B1B18
 * Size:	001078
 */
void JAInter::SequenceMgr::checkPlayingSeqTrack(unsigned long)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stmw     r20, 0x30(r1)
	mulli    r29, r3, 0x50
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	add      r31, r0, r29
	lwz      r3, 0x48(r31)
	addi     r30, r3, 0x48
	lbz      r0, 0x2c1(r3)
	cmplwi   r0, 2
	beq      lbl_800B2B5C
	lwz      r28, 0x44(r31)
	li       r20, 0
	li       r22, 0
	b        lbl_800B1B84

lbl_800B1B78:
	rlwinm   r0, r20, 2, 0x16, 0x1d
	addi     r20, r20, 1
	stwx     r22, r28, r0

lbl_800B1B84:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	addi     r3, r3, 1
	clrlwi   r0, r20, 0x18
	cmplw    r0, r3
	blt      lbl_800B1B78
	lwz      r0, 8(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_800B1C20
	lwz      r3, 0x48(r31)
	lwz      r4, 0x28(r3)
	cmplwi   r4, 0
	beq      lbl_800B1BC0
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	bge      lbl_800B1BF0

lbl_800B1BC0:
	lbz      r0, 0x15(r3)
	cmplwi   r0, 3
	blt      lbl_800B1BD4
	addi     r3, r30, 0x2c4
	bl       stopSeq__8JASTrackFv

lbl_800B1BD4:
	lwz      r3, 0x48(r31)
	bl       clearMainSoundPPointer__8JAISoundFv
	lwz      r3, 0x48(r31)
	bl       stopSeq__Q27JAInter11SequenceMgrFP11JAISequence
	li       r0, 0
	stw      r0, 8(r31)
	b        lbl_800B2B5C

lbl_800B1BF0:
	lwz      r12, 0x10(r3)
	li       r5, 7
	lfs      f1, lbl_80516FA8@sda21(r2)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r31)
	li       r0, 5
	stb      r0, 0x15(r3)
	lwz      r0, 8(r31)
	xori     r0, r0, 2
	stw      r0, 8(r31)

lbl_800B1C20:
	lwz      r3, 0x48(r31)
	cmplwi   r3, 0
	beq      lbl_800B1EC8
	lwz      r0, 0x38(r3)
	cmplwi   r0, 0
	beq      lbl_800B1EC8
	lbz      r3, 0x18(r3)
	cmplwi   r3, 4
	bne      lbl_800B1C54
	li       r20, 0
	bl       getParamAudioCameraMax__18JAIGlobalParameterFv
	mr       r25, r3
	b        lbl_800B1C5C

lbl_800B1C54:
	mr       r20, r3
	addi     r25, r3, 1

lbl_800B1C5C:
	mulli    r23, r20, 0x1c
	lfs      f31, lbl_80516FA8@sda21(r2)
	lfs      f28, lbl_80516FD0@sda21(r2)
	mr       r26, r20
	lfd      f29, lbl_80516FD8@sda21(r2)
	lis      r22, 0x4330
	mulli    r24, r20, 0xc
	b        lbl_800B1EC0

lbl_800B1C7C:
	lwz      r3, 0x48(r31)
	addi     r0, r24, 8
	lwz      r3, 0x34(r3)
	add      r27, r3, r23
	lfs      f0, 0(r27)
	mr       r5, r27
	stfs     f0, 0xc(r27)
	lfs      f0, 4(r27)
	stfs     f0, 0x10(r27)
	lfs      f0, 8(r27)
	stfs     f0, 0x14(r27)
	lwz      r4, msBasic__8JAIBasic@sda21(r13)
	lwz      r3, 0x48(r31)
	lwz      r6, 4(r4)
	lwz      r4, 0x3c(r3)
	lwzx     r3, r6, r0
	bl       PSMTXMultVec
	lfs      f1, 0(r27)
	lfs      f0, 4(r27)
	fmuls    f1, f1, f1
	lfs      f2, 8(r27)
	fmuls    f0, f0, f0
	fmuls    f2, f2, f2
	fadds    f0, f1, f0
	fadds    f4, f2, f0
	fcmpo    cr0, f4, f31
	ble      lbl_800B1D30
	frsqrte  f1, f4
	lfd      f3, lbl_80516FB8@sda21(r2)
	lfd      f2, lbl_80516FC0@sda21(r2)
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
	b        lbl_800B1DB4

lbl_800B1D30:
	lfd      f0, lbl_80516FC8@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_800B1D48
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)
	b        lbl_800B1DB4

lbl_800B1D48:
	stfs     f4, 0xc(r1)
	lis      r0, 0x7f80
	lwz      r4, 0xc(r1)
	rlwinm   r3, r4, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800B1D70
	bge      lbl_800B1DA0
	cmpwi    r3, 0
	beq      lbl_800B1D88
	b        lbl_800B1DA0

lbl_800B1D70:
	clrlwi.  r0, r4, 9
	beq      lbl_800B1D80
	li       r0, 1
	b        lbl_800B1DA4

lbl_800B1D80:
	li       r0, 2
	b        lbl_800B1DA4

lbl_800B1D88:
	clrlwi.  r0, r4, 9
	beq      lbl_800B1D98
	li       r0, 5
	b        lbl_800B1DA4

lbl_800B1D98:
	li       r0, 3
	b        lbl_800B1DA4

lbl_800B1DA0:
	li       r0, 4

lbl_800B1DA4:
	cmpwi    r0, 1
	bne      lbl_800B1DB4
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)

lbl_800B1DB4:
	stfs     f4, 0x18(r27)
	bl       getParamDistanceMax__18JAIGlobalParameterFv
	lwz      r3, 0x48(r31)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	fmr      f30, f1
	bl       getParamDistanceParameterMoveTime__18JAIGlobalParameterFv
	fmuls    f0, f28, f30
	clrlwi   r4, r3, 0x18
	lwz      r3, 0x48(r31)
	li       r5, 4
	stw      r22, 0x18(r1)
	fctiwz   f0, f0
	lwz      r12, 0x10(r3)
	stfd     f0, 0x10(r1)
	lwz      r12, 0x1c(r12)
	lwz      r0, 0x14(r1)
	clrlwi   r0, r0, 0x18
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f1, f0, f29
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl
	fmr      f30, f1
	bl       getParamDistanceParameterMoveTime__18JAIGlobalParameterFv
	fctiwz   f0, f30
	clrlwi   r4, r3, 0x18
	lwz      r3, 0x48(r31)
	li       r5, 4
	stw      r22, 0x28(r1)
	lwz      r12, 0x10(r3)
	stfd     f0, 0x20(r1)
	lwz      r12, 0x24(r12)
	lwz      r0, 0x24(r1)
	clrlwi   r0, r0, 0x18
	stw      r0, 0x2c(r1)
	lfd      f0, 0x28(r1)
	fsubs    f1, f0, f29
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r31)
	li       r4, 0x100
	lwz      r12, 0x10(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	fmr      f30, f1
	bl       getParamDopplarMoveTime__18JAIGlobalParameterFv
	mr       r4, r3
	lwz      r3, 0x48(r31)
	fmr      f1, f30
	li       r5, 4
	lwz      r12, 0x10(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r23, r23, 0x1c
	addi     r24, r24, 0xc
	addi     r26, r26, 1

lbl_800B1EC0:
	cmplw    r26, r25
	blt      lbl_800B1C7C

lbl_800B1EC8:
	lwz      r4, 0x48(r31)
	cmplwi   r4, 0
	beq      lbl_800B1EE0
	lwz      r3, 0x2c(r4)
	addi     r0, r3, 1
	stw      r0, 0x2c(r4)

lbl_800B1EE0:
	lwz      r0, 8(r31)
	cmplwi   r0, 0
	beq      lbl_800B2B5C
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	lwz      r26, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r27, r29, 8
	addi     r3, r3, 0xc
	lwzx     r0, r26, r27
	clrlwi   r23, r3, 0x18
	rlwinm.  r0, r0, 0, 0xd, 0xd
	beq      lbl_800B1FD4
	lfs      f28, lbl_80516FA0@sda21(r2)
	li       r25, 0
	li       r22, 1
	b        lbl_800B1F64

lbl_800B1F1C:
	clrlwi   r3, r25, 0x18
	lwz      r0, 0x284(r30)
	slw      r21, r22, r3
	rlwinm   r3, r25, 4, 0x14, 0x1b
	and.     r0, r0, r21
	add      r24, r30, r3
	addi     r24, r24, 0x110
	beq      lbl_800B1F58
	mr       r3, r24
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B1F58
	lwz      r0, 0x284(r30)
	xor      r0, r0, r21
	stw      r0, 0x284(r30)

lbl_800B1F58:
	lfs      f0, 4(r24)
	addi     r25, r25, 1
	fmuls    f28, f28, f0

lbl_800B1F64:
	clrlwi   r0, r25, 0x18
	cmplw    r0, r23
	blt      lbl_800B1F1C
	lfs      f0, 0xc(r31)
	fcmpu    cr0, f0, f28
	beq      lbl_800B1FBC
	stfs     f28, 0xc(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	fmr      f1, f28
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r3
	li       r5, 3
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	slwi     r4, r3, 2
	add      r3, r0, r29
	lwz      r3, 0x44(r3)
	lwzx     r0, r3, r4
	ori      r0, r0, 1
	stwx     r0, r3, r4

lbl_800B1FBC:
	lwz      r0, 0x284(r30)
	cmplwi   r0, 0
	bne      lbl_800B1FD4
	lwzx     r0, r26, r27
	xoris    r0, r0, 4
	stwx     r0, r26, r27

lbl_800B1FD4:
	lwz      r24, 0x250(r30)
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	lwz      r26, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r25, r29, 8
	lwzx     r0, r26, r25
	rlwinm.  r0, r0, 0, 0xc, 0xc
	beq      lbl_800B20EC
	lfs      f28, lbl_80516FA8@sda21(r2)
	clrlwi   r22, r3, 0x18
	lfs      f31, lbl_80516FA4@sda21(r2)
	li       r27, 0
	li       r23, 1
	b        lbl_800B2050

lbl_800B2008:
	clrlwi   r3, r27, 0x18
	lwz      r0, 0x288(r30)
	slw      r20, r23, r3
	rlwinm   r3, r27, 4, 0x14, 0x1b
	and.     r0, r0, r20
	add      r21, r24, r3
	beq      lbl_800B2040
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B2040
	lwz      r0, 0x288(r30)
	xor      r0, r0, r20
	stw      r0, 0x288(r30)

lbl_800B2040:
	lfs      f0, 4(r21)
	addi     r27, r27, 1
	fsubs    f0, f0, f31
	fadds    f28, f28, f0

lbl_800B2050:
	clrlwi   r0, r27, 0x18
	cmplw    r0, r22
	blt      lbl_800B2008
	lfs      f1, lbl_80516FA4@sda21(r2)
	lfs      f0, lbl_80516FA0@sda21(r2)
	fadds    f28, f28, f1
	fcmpo    cr0, f28, f0
	ble      lbl_800B2078
	fmr      f28, f0
	b        lbl_800B2088

lbl_800B2078:
	lfs      f0, lbl_80516FA8@sda21(r2)
	fcmpo    cr0, f28, f0
	bge      lbl_800B2088
	fmr      f28, f0

lbl_800B2088:
	lfs      f0, 0x18(r31)
	fcmpu    cr0, f0, f28
	beq      lbl_800B20D4
	stfs     f28, 0x18(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	fmr      f1, f28
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r3
	li       r5, 5
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	slwi     r4, r3, 2
	add      r3, r0, r29
	lwz      r3, 0x44(r3)
	lwzx     r0, r3, r4
	ori      r0, r0, 4
	stwx     r0, r3, r4

lbl_800B20D4:
	lwz      r0, 0x288(r30)
	cmplwi   r0, 0
	bne      lbl_800B20EC
	lwzx     r0, r26, r25
	xoris    r0, r0, 8
	stwx     r0, r26, r25

lbl_800B20EC:
	lwz      r27, 0x254(r30)
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	lwz      r26, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r25, r29, 8
	lwzx     r0, r26, r25
	rlwinm.  r0, r0, 0, 0xb, 0xb
	beq      lbl_800B21D0
	lfs      f28, lbl_80516FA0@sda21(r2)
	clrlwi   r22, r3, 0x18
	li       r24, 0
	li       r23, 1
	b        lbl_800B2160

lbl_800B211C:
	clrlwi   r3, r24, 0x18
	lwz      r0, 0x28c(r30)
	slw      r20, r23, r3
	rlwinm   r3, r24, 4, 0x14, 0x1b
	and.     r0, r0, r20
	add      r21, r27, r3
	beq      lbl_800B2154
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B2154
	lwz      r0, 0x28c(r30)
	xor      r0, r0, r20
	stw      r0, 0x28c(r30)

lbl_800B2154:
	lfs      f0, 4(r21)
	addi     r24, r24, 1
	fmuls    f28, f28, f0

lbl_800B2160:
	clrlwi   r0, r24, 0x18
	cmplw    r0, r22
	blt      lbl_800B211C
	lfs      f0, 0x10(r31)
	fcmpu    cr0, f0, f28
	beq      lbl_800B21B8
	stfs     f28, 0x10(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	fmr      f1, f28
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r3
	li       r5, 4
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	slwi     r4, r3, 2
	add      r3, r0, r29
	lwz      r3, 0x44(r3)
	lwzx     r0, r3, r4
	ori      r0, r0, 2
	stwx     r0, r3, r4

lbl_800B21B8:
	lwz      r0, 0x28c(r30)
	cmplwi   r0, 0
	bne      lbl_800B21D0
	lwzx     r0, r26, r25
	xoris    r0, r0, 0x10
	stwx     r0, r26, r25

lbl_800B21D0:
	lwz      r27, 0x258(r30)
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	lwz      r26, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r25, r29, 8
	lwzx     r0, r26, r25
	rlwinm.  r0, r0, 0, 0xa, 0xa
	beq      lbl_800B22E4
	lfs      f28, lbl_80516FA8@sda21(r2)
	clrlwi   r22, r3, 0x18
	li       r24, 0
	li       r23, 1
	fmr      f31, f28
	b        lbl_800B224C

lbl_800B2204:
	clrlwi   r3, r24, 0x18
	lwz      r0, 0x290(r30)
	slw      r20, r23, r3
	rlwinm   r3, r24, 4, 0x14, 0x1b
	and.     r0, r0, r20
	add      r21, r27, r3
	beq      lbl_800B223C
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B223C
	lwz      r0, 0x290(r30)
	xor      r0, r0, r20
	stw      r0, 0x290(r30)

lbl_800B223C:
	lfs      f0, 4(r21)
	addi     r24, r24, 1
	fsubs    f0, f0, f31
	fadds    f28, f28, f0

lbl_800B224C:
	clrlwi   r0, r24, 0x18
	cmplw    r0, r22
	blt      lbl_800B2204
	lfs      f1, lbl_80516FA8@sda21(r2)
	lfs      f0, lbl_80516FA0@sda21(r2)
	fadds    f28, f28, f1
	fcmpo    cr0, f28, f0
	ble      lbl_800B2274
	fmr      f28, f0
	b        lbl_800B2280

lbl_800B2274:
	fcmpo    cr0, f28, f1
	bge      lbl_800B2280
	fmr      f28, f1

lbl_800B2280:
	lfs      f0, 0x14(r31)
	fcmpu    cr0, f0, f28
	beq      lbl_800B22CC
	stfs     f28, 0x14(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	fmr      f1, f28
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r3
	li       r5, 6
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	slwi     r4, r3, 2
	add      r3, r0, r29
	lwz      r3, 0x44(r3)
	lwzx     r0, r3, r4
	ori      r0, r0, 8
	stwx     r0, r3, r4

lbl_800B22CC:
	lwz      r0, 0x290(r30)
	cmplwi   r0, 0
	bne      lbl_800B22E4
	lwzx     r0, r26, r25
	xoris    r0, r0, 0x20
	stwx     r0, r26, r25

lbl_800B22E4:
	lwz      r27, 0x25c(r30)
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	lwz      r26, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r25, r29, 8
	lwzx     r0, r26, r25
	rlwinm.  r0, r0, 0, 9, 9
	beq      lbl_800B23FC
	lfs      f28, lbl_80516FA8@sda21(r2)
	clrlwi   r23, r3, 0x18
	lfs      f31, lbl_80516FA4@sda21(r2)
	li       r24, 0
	li       r22, 1
	b        lbl_800B2360

lbl_800B2318:
	clrlwi   r3, r24, 0x18
	lwz      r0, 0x294(r30)
	slw      r20, r22, r3
	rlwinm   r3, r24, 4, 0x14, 0x1b
	and.     r0, r0, r20
	add      r21, r27, r3
	beq      lbl_800B2350
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B2350
	lwz      r0, 0x294(r30)
	xor      r0, r0, r20
	stw      r0, 0x294(r30)

lbl_800B2350:
	lfs      f0, 4(r21)
	addi     r24, r24, 1
	fsubs    f0, f0, f31
	fadds    f28, f28, f0

lbl_800B2360:
	clrlwi   r0, r24, 0x18
	cmplw    r0, r23
	blt      lbl_800B2318
	lfs      f1, lbl_80516FA4@sda21(r2)
	lfs      f0, lbl_80516FA0@sda21(r2)
	fadds    f28, f28, f1
	fcmpo    cr0, f28, f0
	ble      lbl_800B2388
	fmr      f28, f0
	b        lbl_800B2398

lbl_800B2388:
	lfs      f0, lbl_80516FA8@sda21(r2)
	fcmpo    cr0, f28, f0
	bge      lbl_800B2398
	fmr      f28, f0

lbl_800B2398:
	lfs      f0, 0x1c(r31)
	fcmpu    cr0, f0, f28
	beq      lbl_800B23E4
	stfs     f28, 0x1c(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	fmr      f1, f28
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r3
	li       r5, 7
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	slwi     r4, r3, 2
	add      r3, r0, r29
	lwz      r3, 0x44(r3)
	lwzx     r0, r3, r4
	ori      r0, r0, 0x10
	stwx     r0, r3, r4

lbl_800B23E4:
	lwz      r0, 0x294(r30)
	cmplwi   r0, 0
	bne      lbl_800B23FC
	lwzx     r0, r26, r25
	xoris    r0, r0, 0x40
	stwx     r0, r26, r25

lbl_800B23FC:
	lwz      r0, 8(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_800B2468
	mr       r3, r30
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B2424
	lwz      r0, 8(r31)
	xori     r0, r0, 4
	stw      r0, 8(r31)

lbl_800B2424:
	lfs      f0, 0x20(r31)
	lfs      f1, 4(r30)
	fcmpu    cr0, f0, f1
	beq      lbl_800B2468
	stfs     f1, 0x20(r31)
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mr       r4, r3
	lfs      f1, 4(r30)
	li       r5, 0xa
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	slwi     r3, r3, 2
	lwzx     r0, r28, r3
	ori      r0, r0, 0x80
	stwx     r0, r28, r3

lbl_800B2468:
	lwz      r0, 8(r31)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_800B2530
	li       r23, 0
	b        lbl_800B250C

lbl_800B247C:
	clrlwi   r21, r23, 0x18
	li       r0, 1
	lwz      r3, 0x280(r30)
	slw      r20, r0, r21
	and.     r0, r3, r20
	beq      lbl_800B24B8
	rlwinm   r3, r23, 4, 0x14, 0x1b
	addi     r3, r3, 0x10
	add      r3, r30, r3
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B24B8
	lwz      r0, 0x280(r30)
	xor      r0, r0, r20
	stw      r0, 0x280(r30)

lbl_800B24B8:
	slwi     r20, r21, 0x10
	addi     r3, r30, 0x2c4
	mr       r4, r20
	addi     r5, r1, 8
	bl       readPortApp__8JASTrackFUlPUs
	rlwinm   r3, r23, 4, 0x14, 0x1b
	lhz      r4, 8(r1)
	addi     r0, r3, 0x14
	lfsx     f0, r30, r0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	clrlwi   r0, r0, 0x10
	cmplw    r4, r0
	beq      lbl_800B2508
	stfd     f0, 0x28(r1)
	mr       r4, r20
	addi     r3, r30, 0x2c4
	lwz      r5, 0x2c(r1)
	bl       writePortApp__8JASTrackFUlUs

lbl_800B2508:
	addi     r23, r23, 1

lbl_800B250C:
	clrlwi   r0, r23, 0x18
	cmplwi   r0, 0x10
	blt      lbl_800B247C
	lwz      r0, 0x280(r30)
	cmplwi   r0, 0
	bne      lbl_800B2530
	lwz      r0, 8(r31)
	xori     r0, r0, 0x10
	stw      r0, 8(r31)

lbl_800B2530:
	lwz      r3, 8(r31)
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_800B25F0
	xori     r0, r3, 0x20
	li       r23, 0
	stw      r0, 8(r31)
	b        lbl_800B25E0

lbl_800B254C:
	lwz      r26, 0x2bc(r30)
	clrlwi   r27, r23, 0x18
	lbzx     r4, r26, r27
	rlwinm   r3, r4, 0x1b, 0x1f, 0x1f
	neg      r0, r3
	or       r0, r0, r3
	srwi     r0, r0, 0x1f
	cmplwi   r0, 1
	bne      lbl_800B25DC
	rlwinm   r5, r4, 0x19, 0x1f, 0x1f
	rlwinm   r3, r4, 0x1a, 0x1f, 0x1f
	neg      r4, r5
	neg      r0, r3
	or       r4, r4, r5
	or       r0, r0, r3
	srwi     r3, r4, 0x1f
	srwi     r0, r0, 0x1f
	cmplw    r3, r0
	beq      lbl_800B25DC
	lwz      r3, 0x48(r31)
	mr       r4, r23
	bl       trackToSeqp__Q27JAInter15SystemInterfaceFP11JAISequenceUc
	cmplwi   r3, 0
	beq      lbl_800B25C4
	lbzx     r0, r26, r27
	rlwinm   r4, r0, 0x1a, 0x1f, 0x1f
	neg      r0, r4
	or       r0, r0, r4
	srwi     r4, r0, 0x1f
	bl       muteTrack__8JASTrackFb

lbl_800B25C4:
	lbzx     r4, r26, r27
	rlwinm   r3, r4, 0x1a, 0x1f, 0x1f
	neg      r0, r3
	or       r0, r0, r3
	rlwimi   r4, r0, 8, 0x18, 0x18
	stbx     r4, r26, r27

lbl_800B25DC:
	addi     r23, r23, 1

lbl_800B25E0:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r0, r23, 0x18
	cmplw    r0, r3
	blt      lbl_800B254C

lbl_800B25F0:
	lwz      r27, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r25, r29, 8
	lwz      r23, 0x24(r31)
	lwzx     r0, r27, r25
	lwz      r26, 0x260(r30)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	beq      lbl_800B26C4
	li       r24, 0
	b        lbl_800B269C

lbl_800B2614:
	li       r0, 1
	lwz      r3, 0x298(r30)
	slw      r20, r0, r4
	rlwinm   r4, r24, 4, 0x14, 0x1b
	and.     r0, r3, r20
	clrlwi   r22, r24, 0x18
	add      r21, r26, r4
	beq      lbl_800B2698
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B2650
	lwz      r0, 0x298(r30)
	xor      r0, r0, r20
	stw      r0, 0x298(r30)

lbl_800B2650:
	slwi     r20, r22, 2
	lfs      f1, 4(r21)
	lfsx     f0, r23, r20
	fcmpu    cr0, f1, f0
	beq      lbl_800B2698
	stfsx    f1, r23, r20
	mr       r4, r22
	li       r5, 3
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	lfs      f1, 4(r21)
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r3, 0x44
	lwzx     r3, r29, r0
	lwzx     r0, r3, r20
	ori      r0, r0, 1
	stwx     r0, r3, r20

lbl_800B2698:
	addi     r24, r24, 1

lbl_800B269C:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r4, r24, 0x18
	cmplw    r4, r3
	blt      lbl_800B2614
	lwz      r0, 0x298(r30)
	cmplwi   r0, 0
	bne      lbl_800B26C4
	lwzx     r0, r27, r25
	xori     r0, r0, 0x40
	stwx     r0, r27, r25

lbl_800B26C4:
	lwz      r27, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r24, r29, 8
	lwz      r26, 0x30(r31)
	lwzx     r0, r27, r24
	lwz      r25, 0x264(r30)
	rlwinm.  r0, r0, 0, 0x18, 0x18
	beq      lbl_800B2798
	li       r23, 0
	b        lbl_800B2770

lbl_800B26E8:
	li       r0, 1
	lwz      r3, 0x29c(r30)
	slw      r20, r0, r4
	rlwinm   r4, r23, 4, 0x14, 0x1b
	and.     r0, r3, r20
	clrlwi   r22, r23, 0x18
	add      r21, r25, r4
	beq      lbl_800B276C
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B2724
	lwz      r0, 0x29c(r30)
	xor      r0, r0, r20
	stw      r0, 0x29c(r30)

lbl_800B2724:
	slwi     r20, r22, 2
	lfs      f1, 4(r21)
	lfsx     f0, r26, r20
	fcmpu    cr0, f1, f0
	beq      lbl_800B276C
	stfsx    f1, r26, r20
	mr       r4, r22
	li       r5, 5
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	lfs      f1, 4(r21)
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r3, 0x44
	lwzx     r3, r29, r0
	lwzx     r0, r3, r20
	ori      r0, r0, 4
	stwx     r0, r3, r20

lbl_800B276C:
	addi     r23, r23, 1

lbl_800B2770:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r4, r23, 0x18
	cmplw    r4, r3
	blt      lbl_800B26E8
	lwz      r0, 0x29c(r30)
	cmplwi   r0, 0
	bne      lbl_800B2798
	lwzx     r0, r27, r24
	xori     r0, r0, 0x80
	stwx     r0, r27, r24

lbl_800B2798:
	lwz      r27, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r24, r29, 8
	lwz      r26, 0x28(r31)
	lwzx     r0, r27, r24
	lwz      r25, 0x268(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_800B286C
	li       r23, 0
	b        lbl_800B2844

lbl_800B27BC:
	li       r0, 1
	lwz      r3, 0x2a0(r30)
	slw      r20, r0, r4
	rlwinm   r4, r23, 4, 0x14, 0x1b
	and.     r0, r3, r20
	clrlwi   r22, r23, 0x18
	add      r21, r25, r4
	beq      lbl_800B2840
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B27F8
	lwz      r0, 0x2a0(r30)
	xor      r0, r0, r20
	stw      r0, 0x2a0(r30)

lbl_800B27F8:
	slwi     r20, r22, 2
	lfs      f1, 4(r21)
	lfsx     f0, r26, r20
	fcmpu    cr0, f1, f0
	beq      lbl_800B2840
	stfsx    f1, r26, r20
	mr       r4, r22
	li       r5, 4
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	lfs      f1, 4(r21)
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r3, 0x44
	lwzx     r3, r29, r0
	lwzx     r0, r3, r20
	ori      r0, r0, 2
	stwx     r0, r3, r20

lbl_800B2840:
	addi     r23, r23, 1

lbl_800B2844:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r4, r23, 0x18
	cmplw    r4, r3
	blt      lbl_800B27BC
	lwz      r0, 0x2a0(r30)
	cmplwi   r0, 0
	bne      lbl_800B286C
	lwzx     r0, r27, r24
	xori     r0, r0, 0x200
	stwx     r0, r27, r24

lbl_800B286C:
	lwz      r27, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r24, r29, 8
	lwz      r26, 0x2c(r31)
	lwzx     r0, r27, r24
	lwz      r25, 0x26c(r30)
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_800B2940
	li       r23, 0
	b        lbl_800B2918

lbl_800B2890:
	li       r0, 1
	lwz      r3, 0x2a4(r30)
	slw      r20, r0, r4
	rlwinm   r4, r23, 4, 0x14, 0x1b
	and.     r0, r3, r20
	clrlwi   r22, r23, 0x18
	add      r21, r25, r4
	beq      lbl_800B2914
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B28CC
	lwz      r0, 0x2a4(r30)
	xor      r0, r0, r20
	stw      r0, 0x2a4(r30)

lbl_800B28CC:
	slwi     r20, r22, 2
	lfs      f1, 4(r21)
	lfsx     f0, r26, r20
	fcmpu    cr0, f1, f0
	beq      lbl_800B2914
	stfsx    f1, r26, r20
	mr       r4, r22
	li       r5, 6
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	lfs      f1, 4(r21)
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r3, 0x44
	lwzx     r3, r29, r0
	lwzx     r0, r3, r20
	ori      r0, r0, 8
	stwx     r0, r3, r20

lbl_800B2914:
	addi     r23, r23, 1

lbl_800B2918:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r4, r23, 0x18
	cmplw    r4, r3
	blt      lbl_800B2890
	lwz      r0, 0x2a4(r30)
	cmplwi   r0, 0
	bne      lbl_800B2940
	lwzx     r0, r27, r24
	xori     r0, r0, 0x800
	stwx     r0, r27, r24

lbl_800B2940:
	lwz      r27, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r24, r29, 8
	lwz      r26, 0x34(r31)
	lwzx     r0, r27, r24
	lwz      r25, 0x270(r30)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_800B2A14
	li       r23, 0
	b        lbl_800B29EC

lbl_800B2964:
	li       r0, 1
	lwz      r3, 0x2a8(r30)
	slw      r20, r0, r4
	rlwinm   r4, r23, 4, 0x14, 0x1b
	and.     r0, r3, r20
	clrlwi   r22, r23, 0x18
	add      r21, r25, r4
	beq      lbl_800B29E8
	mr       r3, r21
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B29A0
	lwz      r0, 0x2a8(r30)
	xor      r0, r0, r20
	stw      r0, 0x2a8(r30)

lbl_800B29A0:
	slwi     r20, r22, 2
	lfs      f1, 4(r21)
	lfsx     f0, r26, r20
	fcmpu    cr0, f1, f0
	beq      lbl_800B29E8
	stfsx    f1, r26, r20
	mr       r4, r22
	li       r5, 7
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	lfs      f1, 4(r21)
	add      r3, r0, r29
	bl
setSeqPortargsF32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcf
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r3, 0x44
	lwzx     r3, r29, r0
	lwzx     r0, r3, r20
	ori      r0, r0, 0x10
	stwx     r0, r3, r20

lbl_800B29E8:
	addi     r23, r23, 1

lbl_800B29EC:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r4, r23, 0x18
	cmplw    r4, r3
	blt      lbl_800B2964
	lwz      r0, 0x2a8(r30)
	cmplwi   r0, 0
	bne      lbl_800B2A14
	lwzx     r0, r27, r24
	xori     r0, r0, 0x100
	stwx     r0, r27, r24

lbl_800B2A14:
	lwz      r3, 8(r31)
	rlwinm.  r0, r3, 0, 8, 8
	beq      lbl_800B2A8C
	xoris    r0, r3, 0x80
	li       r21, 0
	stw      r0, 8(r31)
	li       r23, 0
	b        lbl_800B2A7C

lbl_800B2A34:
	lwz      r3, 0x2b8(r30)
	clrlwi   r20, r21, 0x18
	lbzx     r0, r3, r20
	cmplwi   r0, 1
	bne      lbl_800B2A78
	slwi     r3, r20, 2
	mr       r4, r20
	lwzx     r0, r28, r3
	li       r5, 9
	li       r6, 1
	ori      r0, r0, 0x40
	stwx     r0, r28, r3
	lwz      r0, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	add      r3, r0, r29
	bl
setSeqPortargsU32__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataUlUcUl
	lwz      r3, 0x2b8(r30)
	stbx     r23, r3, r20

lbl_800B2A78:
	addi     r21, r21, 1

lbl_800B2A7C:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r0, r21, 0x18
	cmplw    r0, r3
	blt      lbl_800B2A34

lbl_800B2A8C:
	lwz      r0, 8(r31)
	rlwinm.  r0, r0, 0, 0x13, 0x13
	beq      lbl_800B2B5C
	li       r23, 0
	b        lbl_800B2B34

lbl_800B2AA0:
	li       r0, 1
	lwz      r3, 0x2b0(r30)
	slw      r4, r0, r4
	and.     r0, r3, r4
	beq      lbl_800B2B30
	xor      r0, r3, r4
	rlwinm   r21, r23, 2, 0x16, 0x1d
	stw      r0, 0x2b0(r30)
	li       r24, 0
	b        lbl_800B2B24

lbl_800B2AC8:
	lwz      r0, 0x2b4(r30)
	clrlwi   r3, r24, 0x18
	li       r4, 1
	lwzx     r0, r21, r0
	slw      r20, r4, r3
	and.     r0, r20, r0
	beq      lbl_800B2B20
	lwz      r3, 0x48(r31)
	mr       r4, r23
	mr       r5, r24
	bl       getTrackPortRoute__8JAISoundFUcUc
	lwz      r5, 0x274(r30)
	mr       r4, r3
	rlwinm   r0, r24, 1, 0x17, 0x1e
	addi     r3, r30, 0x2c4
	lwzx     r5, r21, r5
	lhzx     r5, r5, r0
	bl       writePortApp__8JASTrackFUlUs
	lwz      r3, 0x2b4(r30)
	lwzx     r0, r21, r3
	xor      r0, r0, r20
	stwx     r0, r21, r3

lbl_800B2B20:
	addi     r24, r24, 1

lbl_800B2B24:
	clrlwi   r0, r24, 0x18
	cmplwi   r0, 0x10
	blt      lbl_800B2AC8

lbl_800B2B30:
	addi     r23, r23, 1

lbl_800B2B34:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	clrlwi   r4, r23, 0x18
	cmplw    r4, r3
	blt      lbl_800B2AA0
	lwz      r0, 0x2b0(r30)
	cmplwi   r0, 0
	bne      lbl_800B2B5C
	lwz      r0, 8(r31)
	xori     r0, r0, 0x1000
	stw      r0, 8(r31)

lbl_800B2B5C:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lmw      r20, 0x30(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B2B90
 * Size:	00002C
 */
void JAISequence::setPitch(float p1, unsigned long p2, unsigned char p3) { setSeqInterPitch(p3, p1, p2); }

/*
 * --INFO--
 * Address:	800B2BBC
 * Size:	00002C
 */
void JAISequence::setPan(float p1, unsigned long p2, unsigned char p3) { setSeqInterPan(p3, p1, p2); }

/*
 * --INFO--
 * Address:	800B2BE8
 * Size:	000130
 */
void JAInter::SequenceMgr::stopSeq(JAISequence*)
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
	bl       getSwBit__8JAISoundFv
	clrlwi.  r0, r3, 0x1f
	beq      lbl_800B2C80
	li       r30, 0
	li       r31, 0
	b        lbl_800B2C74

lbl_800B2C20:
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r31, 0x48
	lwzx     r29, r3, r0
	cmplw    r28, r29
	beq      lbl_800B2C6C
	cmplwi   r29, 0
	beq      lbl_800B2C6C
	mr       r3, r29
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	bne      lbl_800B2C6C
	mr       r3, r29
	lfs      f1, lbl_80516FA0@sda21(r2)
	lwz      r12, 0x10(r29)
	li       r4, 0xa
	li       r5, 0xa
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_800B2C6C:
	addi     r31, r31, 0x50
	addi     r30, r30, 1

lbl_800B2C74:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r30, r3
	blt      lbl_800B2C20

lbl_800B2C80:
	li       r0, 0
	stw      r0, 0x40(r28)
	stw      r0, 0x308(r28)
	lbz      r0, 0x15(r28)
	cmplwi   r0, 3
	blt      lbl_800B2CCC
	lwz      r12, customHeapCallback__Q27JAInter11SequenceMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B2CC4
	lwz      r4, 0x44(r28)
	mr       r6, r28
	addi     r3, r1, 8
	lhz      r5, 6(r4)
	li       r4, 2
	mtctr    r12
	bctrl
	b        lbl_800B2CCC

lbl_800B2CC4:
	lbz      r3, 0x2c0(r28)
	bl       releaseAutoHeapPointer__Q27JAInter7HeapMgrFUc

lbl_800B2CCC:
	li       r0, 0
	mr       r4, r28
	stb      r0, 0x15(r28)
	addi     r3, r13, seqControl__Q27JAInter11SequenceMgr@sda21
	bl       releaseSound__Q27JAInter9LinkSoundFP8JAISound
	lbz      r0, 0x14(r28)
	li       r4, 0
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mulli    r0, r0, 0x50
	add      r3, r3, r0
	stw      r4, 0x48(r3)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B2D18
 * Size:	0000E4
 */
void JAInter::SequenceMgr::checkDvdLoadArc(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	clrlwi   r31, r4, 0x18
	stw      r30, 0x18(r1)
	rlwinm   r30, r4, 0x10, 0x16, 0x1f
	stw      r29, 0x14(r1)
	rlwinm   r29, r4, 0x18, 0x19, 0x1f
	stw      r28, 0x10(r1)
	rlwinm.  r28, r4, 0x11, 0x1f, 0x1f
	bne      lbl_800B2D58
	mr       r3, r29
	li       r4, 0
	bl       setAutoHeapLoadedFlag__Q27JAInter7HeapMgrFUcUc
	b        lbl_800B2D64

lbl_800B2D58:
	mr       r3, r29
	li       r4, 0
	bl       setStayHeapLoadedFlag__Q27JAInter7HeapMgrFUcUc

lbl_800B2D64:
	cmplwi   r31, 0xfe
	bge      lbl_800B2DC8
	mulli    r3, r31, 0x50
	lwz      r4, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	li       r0, 0
	add      r3, r4, r3
	lwz      r4, 0x48(r3)
	cmplwi   r4, 0
	stb      r0, 3(r3)
	beq      lbl_800B2DB4
	lbz      r0, 0x15(r4)
	cmplwi   r0, 1
	bne      lbl_800B2DB4
	lwz      r3, 0x44(r4)
	lhz      r0, 6(r3)
	cmplw    r30, r0
	bne      lbl_800B2DB4
	li       r0, 2
	stb      r0, 0x15(r4)
	b        lbl_800B2DDC

lbl_800B2DB4:
	cmplwi   r28, 0
	bne      lbl_800B2DDC
	mr       r3, r29
	bl       releaseAutoHeapPointer__Q27JAInter7HeapMgrFUc
	b        lbl_800B2DDC

lbl_800B2DC8:
	bne      lbl_800B2DDC
	cmplwi   r28, 0
	bne      lbl_800B2DDC
	mr       r3, r29
	bl       releaseAutoHeapPointer__Q27JAInter7HeapMgrFUc

lbl_800B2DDC:
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
 * Address:	800B2DFC
 * Size:	00009C
 */
void JAInter::SequenceMgr::checkCustomDvdLoadArc(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mulli    r4, r4, 0x50
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r3, r1, 0x10
	stw      r31, 0x1c(r1)
	lwz      r5, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	add      r5, r5, r4
	li       r4, 1
	lwz      r31, 0x48(r5)
	stb      r0, 3(r5)
	mr       r6, r31
	lwz      r5, 0x44(r31)
	lwz      r12, customHeapCallback__Q27JAInter11SequenceMgr@sda21(r13)
	lhz      r5, 6(r5)
	mtctr    r12
	bctrl
	cmplwi   r31, 0
	beq      lbl_800B2E64
	lbz      r0, 0x15(r31)
	cmplwi   r0, 1
	bne      lbl_800B2E64
	li       r0, 2
	stb      r0, 0x15(r31)
	b        lbl_800B2E84

lbl_800B2E64:
	lwz      r4, 0x44(r31)
	mr       r6, r31
	lwz      r12, customHeapCallback__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r3, r1, 8
	lhz      r5, 6(r4)
	li       r4, 2
	mtctr    r12
	bctrl

lbl_800B2E84:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JAInter::SequenceMgr::checkCustomDvdPreloadArc(unsigned long, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B2E98
 * Size:	000430
 */
void JAInter::SequenceMgr::storeSeqBuffer(JAISequence**, JAInter::Actor*, unsigned long, unsigned long, unsigned char, JAInter::SoundInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r17, 0x24(r1)
	  mr.       r22, r3
	  mr        r27, r8
	  mr        r23, r4
	  mr        r24, r5
	  mr        r25, r6
	  mr        r26, r7
	  lbz       r29, 0x5(r8)
	  beq-      .loc_0x74
	  lwz       r3, 0x0(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lbz       r0, 0x14(r3)
	  cmplw     r29, r0
	  beq-      .loc_0x60
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x74

	.loc_0x60:
	  mr        r4, r24
	  mr        r5, r27
	  bl        0x2610
	  cmplwi    r3, 0
	  bne-      .loc_0x41C

	.loc_0x74:
	  mulli     r31, r29, 0x50
	  lwz       r21, -0x73F8(r13)
	  addi      r28, r31, 0x48
	  lwzx      r4, r21, r28
	  cmplwi    r4, 0
	  bne-      .loc_0x94
	  li        r5, 0x1
	  b         .loc_0x2F4

	.loc_0x94:
	  lbz       r0, 0x15(r4)
	  cmplwi    r0, 0x5
	  bne-      .loc_0x1B0
	  addi      r3, r4, 0x30C
	  bl        -0x11FE4
	  lwzx      r3, r21, r28
	  bl        0xC2C
	  lwzx      r19, r21, r28
	  mr        r3, r19
	  bl        0xBF8
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x130
	  li        r20, 0
	  mr        r18, r20
	  b         .loc_0x124

	.loc_0xD0:
	  lwz       r3, -0x73F8(r13)
	  addi      r0, r18, 0x48
	  lwzx      r17, r3, r0
	  cmplw     r19, r17
	  beq-      .loc_0x11C
	  cmplwi    r17, 0
	  beq-      .loc_0x11C
	  mr        r3, r17
	  bl        0xBC0
	  rlwinm.   r0,r3,0,30,30
	  bne-      .loc_0x11C
	  mr        r3, r17
	  lfs       f1, -0x73C0(r2)
	  lwz       r12, 0x10(r17)
	  li        r4, 0xA
	  li        r5, 0xA
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x11C:
	  addi      r18, r18, 0x50
	  addi      r20, r20, 0x1

	.loc_0x124:
	  bl        -0x54F0
	  cmplw     r20, r3
	  blt+      .loc_0xD0

	.loc_0x130:
	  li        r0, 0
	  stw       r0, 0x40(r19)
	  stw       r0, 0x308(r19)
	  lbz       r0, 0x15(r19)
	  cmplwi    r0, 0x3
	  blt-      .loc_0x17C
	  lwz       r12, -0x73E4(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x174
	  lwz       r4, 0x44(r19)
	  mr        r6, r19
	  addi      r3, r1, 0x10
	  lhz       r5, 0x6(r4)
	  li        r4, 0x2
	  mtctr     r12
	  bctrl
	  b         .loc_0x17C

	.loc_0x174:
	  lbz       r3, 0x2C0(r19)
	  bl        -0x2974

	.loc_0x17C:
	  li        r0, 0
	  mr        r4, r19
	  stb       r0, 0x15(r19)
	  subi      r3, r13, 0x73F0
	  bl        0x27C8
	  lbz       r0, 0x14(r19)
	  li        r4, 0
	  lwz       r3, -0x73F8(r13)
	  li        r5, 0x1
	  mulli     r0, r0, 0x50
	  add       r3, r3, r0
	  stw       r4, 0x48(r3)
	  b         .loc_0x2F4

	.loc_0x1B0:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x1C4
	  li        r0, 0
	  stw       r0, 0x0(r22)
	  b         .loc_0x41C

	.loc_0x1C4:
	  lwz       r3, 0x44(r4)
	  lbz       r0, 0x4(r27)
	  lbz       r3, 0x4(r3)
	  cmplw     r3, r0
	  bgt-      .loc_0x2E8
	  addi      r3, r4, 0x30C
	  bl        -0x1211C
	  lwzx      r3, r21, r28
	  bl        0xAF4
	  lwzx      r20, r21, r28
	  mr        r3, r20
	  bl        0xAC0
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x268
	  li        r19, 0
	  mr        r18, r19
	  b         .loc_0x25C

	.loc_0x208:
	  lwz       r3, -0x73F8(r13)
	  addi      r0, r18, 0x48
	  lwzx      r17, r3, r0
	  cmplw     r20, r17
	  beq-      .loc_0x254
	  cmplwi    r17, 0
	  beq-      .loc_0x254
	  mr        r3, r17
	  bl        0xA88
	  rlwinm.   r0,r3,0,30,30
	  bne-      .loc_0x254
	  mr        r3, r17
	  lfs       f1, -0x73C0(r2)
	  lwz       r12, 0x10(r17)
	  li        r4, 0xA
	  li        r5, 0xA
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x254:
	  addi      r18, r18, 0x50
	  addi      r19, r19, 0x1

	.loc_0x25C:
	  bl        -0x5628
	  cmplw     r19, r3
	  blt+      .loc_0x208

	.loc_0x268:
	  li        r0, 0
	  stw       r0, 0x40(r20)
	  stw       r0, 0x308(r20)
	  lbz       r0, 0x15(r20)
	  cmplwi    r0, 0x3
	  blt-      .loc_0x2B4
	  lwz       r12, -0x73E4(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x2AC
	  lwz       r4, 0x44(r20)
	  mr        r6, r20
	  addi      r3, r1, 0x8
	  lhz       r5, 0x6(r4)
	  li        r4, 0x2
	  mtctr     r12
	  bctrl
	  b         .loc_0x2B4

	.loc_0x2AC:
	  lbz       r3, 0x2C0(r20)
	  bl        -0x2AAC

	.loc_0x2B4:
	  li        r0, 0
	  mr        r4, r20
	  stb       r0, 0x15(r20)
	  subi      r3, r13, 0x73F0
	  bl        0x2690
	  lbz       r0, 0x14(r20)
	  li        r4, 0
	  lwz       r3, -0x73F8(r13)
	  li        r5, 0x1
	  mulli     r0, r0, 0x50
	  add       r3, r3, r0
	  stw       r4, 0x48(r3)
	  b         .loc_0x2F4

	.loc_0x2E8:
	  li        r0, 0
	  stw       r0, 0x0(r22)
	  b         .loc_0x41C

	.loc_0x2F4:
	  cmplwi    r5, 0
	  beq-      .loc_0x3E4
	  subi      r3, r13, 0x73F0
	  bl        0x25D4
	  mr.       r30, r3
	  bne-      .loc_0x318
	  li        r0, 0
	  stw       r0, 0x0(r22)
	  b         .loc_0x41C

	.loc_0x318:
	  addi      r3, r30, 0x48
	  bl        .loc_0x430
	  stwx      r30, r21, r28
	  li        r4, 0x1
	  li        r18, 0
	  lwzx      r3, r21, r28
	  stw       r24, 0x20(r3)
	  lwz       r0, -0x73F8(r13)
	  lwzx      r3, r21, r28
	  add       r0, r0, r31
	  stw       r0, 0x308(r3)
	  lwzx      r3, r21, r28
	  stb       r29, 0x14(r3)
	  lwz       r0, -0x73F8(r13)
	  add       r3, r0, r31
	  stw       r4, 0x8(r3)
	  lwz       r0, -0x73F8(r13)
	  add       r3, r0, r31
	  stb       r18, 0x2(r3)
	  lwz       r0, -0x73F8(r13)
	  add       r3, r0, r31
	  stw       r18, 0x4(r3)
	  lwz       r0, 0x0(r27)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x3E4
	  li        r17, 0
	  b         .loc_0x3D8

	.loc_0x384:
	  lwz       r3, -0x73F8(r13)
	  addi      r0, r18, 0x48
	  cmplw     r17, r29
	  lwzx      r19, r3, r0
	  beq-      .loc_0x3D0
	  cmplwi    r19, 0
	  beq-      .loc_0x3D0
	  mr        r3, r19
	  bl        0x90C
	  rlwinm.   r0,r3,0,30,30
	  bne-      .loc_0x3D0
	  mr        r3, r19
	  lfs       f1, -0x73B8(r2)
	  lwz       r12, 0x10(r19)
	  li        r4, 0xA
	  li        r5, 0xA
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3D0:
	  addi      r18, r18, 0x50
	  addi      r17, r17, 0x1

	.loc_0x3D8:
	  bl        -0x57A4
	  cmplw     r17, r3
	  blt+      .loc_0x384

	.loc_0x3E4:
	  mr        r3, r30
	  mr        r4, r22
	  lwz       r12, 0x10(r30)
	  mr        r5, r23
	  mr        r6, r24
	  mr        r7, r25
	  lwz       r12, 0xC8(r12)
	  mr        r8, r26
	  mr        r9, r27
	  mtctr     r12
	  bctrl
	  cmplwi    r22, 0
	  beq-      .loc_0x41C
	  stw       r30, 0x0(r22)

	.loc_0x41C:
	  lmw       r17, 0x24(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x430:
	*/
}

/*
 * --INFO--
 * Address:	800B32C8
 * Size:	000388
 */
void JAInter::SeqParameter::init(void)
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
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r3, r28, 0x2c4
	addi     r4, r28, 0x62c
	bl       assignExtBuffer__8JASTrackFP13JASOuterParam
	li       r0, -1
	li       r31, 0
	stw      r0, 0x27c(r28)
	mr       r30, r31
	lfs      f31, lbl_80516FA0@sda21(r2)
	li       r29, 0
	lfs      f30, lbl_80516FA4@sda21(r2)
	stfs     f31, 4(r28)
	lfs      f29, lbl_80516FA8@sda21(r2)
	stfs     f31, 0(r28)
	stw      r31, 0xc(r28)
	stb      r31, 0x279(r28)
	sth      r31, 0x27a(r28)
	stw      r31, 0x280(r28)
	stw      r31, 0x284(r28)
	stw      r31, 0x288(r28)
	stw      r31, 0x28c(r28)
	stw      r31, 0x290(r28)
	stw      r31, 0x294(r28)
	stw      r31, 0x298(r28)
	stw      r31, 0x29c(r28)
	stw      r31, 0x2a0(r28)
	stw      r31, 0x2a4(r28)
	stw      r31, 0x2a8(r28)
	stw      r31, 0x2ac(r28)
	stw      r31, 0x2b0(r28)
	b        lbl_800B348C

lbl_800B3378:
	lwz      r4, 0x260(r28)
	li       r3, 0
	li       r0, 2
	add      r4, r4, r31
	stfs     f31, 4(r4)
	stfs     f31, 0(r4)
	stw      r3, 0xc(r4)
	lwz      r4, 0x264(r28)
	add      r4, r4, r31
	stfs     f30, 4(r4)
	stfs     f30, 0(r4)
	stw      r3, 0xc(r4)
	lwz      r4, 0x268(r28)
	add      r4, r4, r31
	stfs     f31, 4(r4)
	stfs     f31, 0(r4)
	stw      r3, 0xc(r4)
	lwz      r4, 0x26c(r28)
	add      r4, r4, r31
	stfs     f29, 4(r4)
	stfs     f29, 0(r4)
	stw      r3, 0xc(r4)
	lwz      r4, 0x270(r28)
	add      r4, r4, r31
	stfs     f30, 4(r4)
	stfs     f30, 0(r4)
	stw      r3, 0xc(r4)
	lwz      r4, 0x2b8(r28)
	stbx     r3, r4, r29
	lwz      r4, 0x2b4(r28)
	stwx     r3, r4, r30
	mtctr    r0

lbl_800B33F8:
	lwz      r0, 0x274(r28)
	li       r11, 0
	addi     r9, r3, 2
	addi     r8, r3, 4
	lwzx     r4, r30, r0
	addi     r7, r3, 6
	addi     r6, r3, 8
	addi     r5, r3, 0xa
	sthx     r11, r4, r3
	addi     r4, r3, 0xc
	addi     r0, r3, 0xe
	addi     r3, r3, 0x10
	lwz      r10, 0x274(r28)
	lwzx     r10, r30, r10
	sthx     r11, r10, r9
	lwz      r9, 0x274(r28)
	lwzx     r9, r30, r9
	sthx     r11, r9, r8
	lwz      r8, 0x274(r28)
	lwzx     r8, r30, r8
	sthx     r11, r8, r7
	lwz      r7, 0x274(r28)
	lwzx     r7, r30, r7
	sthx     r11, r7, r6
	lwz      r6, 0x274(r28)
	lwzx     r6, r30, r6
	sthx     r11, r6, r5
	lwz      r5, 0x274(r28)
	lwzx     r5, r30, r5
	sthx     r11, r5, r4
	lwz      r4, 0x274(r28)
	lwzx     r4, r30, r4
	sthx     r11, r4, r0
	bdnz     lbl_800B33F8
	addi     r31, r31, 0x10
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_800B348C:
	bl       getParamSeqTrackMax__18JAIGlobalParameterFv
	cmplw    r29, r3
	blt      lbl_800B3378
	lfs      f0, lbl_80516FA8@sda21(r2)
	li       r29, 0
	lfs      f29, lbl_80516FA0@sda21(r2)
	mr       r30, r28
	stfs     f0, 0x14(r28)
	li       r31, 0
	stfs     f0, 0x10(r28)
	stw      r29, 0x1c(r28)
	stfs     f0, 0x24(r28)
	stfs     f0, 0x20(r28)
	stw      r29, 0x2c(r28)
	stfs     f0, 0x34(r28)
	stfs     f0, 0x30(r28)
	stw      r29, 0x3c(r28)
	stfs     f0, 0x44(r28)
	stfs     f0, 0x40(r28)
	stw      r29, 0x4c(r28)
	stfs     f0, 0x54(r28)
	stfs     f0, 0x50(r28)
	stw      r29, 0x5c(r28)
	stfs     f0, 0x64(r28)
	stfs     f0, 0x60(r28)
	stw      r29, 0x6c(r28)
	stfs     f0, 0x74(r28)
	stfs     f0, 0x70(r28)
	stw      r29, 0x7c(r28)
	stfs     f0, 0x84(r28)
	stfs     f0, 0x80(r28)
	stw      r29, 0x8c(r28)
	stfs     f0, 0x94(r28)
	stfs     f0, 0x90(r28)
	stw      r29, 0x9c(r28)
	stfs     f0, 0xa4(r28)
	stfs     f0, 0xa0(r28)
	stw      r29, 0xac(r28)
	stfs     f0, 0xb4(r28)
	stfs     f0, 0xb0(r28)
	stw      r29, 0xbc(r28)
	stfs     f0, 0xc4(r28)
	stfs     f0, 0xc0(r28)
	stw      r29, 0xcc(r28)
	stfs     f0, 0xd4(r28)
	stfs     f0, 0xd0(r28)
	stw      r29, 0xdc(r28)
	stfs     f0, 0xe4(r28)
	stfs     f0, 0xe0(r28)
	stw      r29, 0xec(r28)
	stfs     f0, 0xf4(r28)
	stfs     f0, 0xf0(r28)
	stw      r29, 0xfc(r28)
	stfs     f0, 0x104(r28)
	stfs     f0, 0x100(r28)
	stw      r29, 0x10c(r28)
	b        lbl_800B3584

lbl_800B3570:
	stfs     f29, 0x114(r30)
	addi     r31, r31, 1
	stfs     f29, 0x110(r30)
	stw      r29, 0x11c(r30)
	addi     r30, r30, 0x10

lbl_800B3584:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	addi     r0, r3, 0xc
	cmplw    r31, r0
	blt      lbl_800B3570
	lfs      f29, lbl_80516FA4@sda21(r2)
	li       r30, 0
	lfs      f30, lbl_80516FA0@sda21(r2)
	li       r29, 0
	lfs      f31, lbl_80516FA8@sda21(r2)
	b        lbl_800B3608

lbl_800B35AC:
	lwz      r0, 0x250(r28)
	li       r3, 0
	addi     r30, r30, 1
	add      r4, r0, r29
	stfs     f29, 4(r4)
	stfs     f29, 0(r4)
	stw      r3, 0xc(r4)
	lwz      r0, 0x254(r28)
	add      r4, r0, r29
	stfs     f30, 4(r4)
	stfs     f30, 0(r4)
	stw      r3, 0xc(r4)
	lwz      r0, 0x258(r28)
	add      r4, r0, r29
	stfs     f31, 4(r4)
	stfs     f31, 0(r4)
	stw      r3, 0xc(r4)
	lwz      r0, 0x25c(r28)
	add      r4, r0, r29
	addi     r29, r29, 0x10
	stfs     f29, 4(r4)
	stfs     f29, 0(r4)
	stw      r3, 0xc(r4)

lbl_800B3608:
	bl       getParamSeqParameterLines__18JAIGlobalParameterFv
	clrlwi   r0, r3, 0x18
	cmplw    r30, r0
	blt      lbl_800B35AC
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x54(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3650
 * Size:	0001D8
 */
void JAInter::SequenceMgr::releaseSeqBuffer(JAISequence*, unsigned long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	blt      lbl_800B3684
	cmplwi   r4, 0
	bne      lbl_800B37D4

lbl_800B3684:
	cmplwi   r0, 3
	blt      lbl_800B3698
	addi     r3, r31, 0x30c
	bl       stopSeq__8JASTrackFv
	b        lbl_800B36D4

lbl_800B3698:
	cmplwi   r0, 1
	blt      lbl_800B36D4
	lwz      r12, customHeapCallback__Q27JAInter11SequenceMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B36CC
	lwz      r4, 0x44(r31)
	mr       r6, r31
	addi     r3, r1, 0x10
	lhz      r5, 6(r4)
	li       r4, 2
	mtctr    r12
	bctrl
	b        lbl_800B36D4

lbl_800B36CC:
	lbz      r3, 0x2c0(r31)
	bl       releaseAutoHeapPointer__Q27JAInter7HeapMgrFUc

lbl_800B36D4:
	mr       r3, r31
	bl       clearMainSoundPPointer__8JAISoundFv
	mr       r3, r31
	bl       getSwBit__8JAISoundFv
	clrlwi.  r0, r3, 0x1f
	beq      lbl_800B3758
	li       r29, 0
	mr       r28, r29
	b        lbl_800B374C

lbl_800B36F8:
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	addi     r0, r28, 0x48
	lwzx     r30, r3, r0
	cmplw    r31, r30
	beq      lbl_800B3744
	cmplwi   r30, 0
	beq      lbl_800B3744
	mr       r3, r30
	bl       getSwBit__8JAISoundFv
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	bne      lbl_800B3744
	mr       r3, r30
	lfs      f1, lbl_80516FA0@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0xa
	li       r5, 0xa
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_800B3744:
	addi     r28, r28, 0x50
	addi     r29, r29, 1

lbl_800B374C:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r29, r3
	blt      lbl_800B36F8

lbl_800B3758:
	li       r0, 0
	stw      r0, 0x40(r31)
	stw      r0, 0x308(r31)
	lbz      r0, 0x15(r31)
	cmplwi   r0, 3
	blt      lbl_800B37A4
	lwz      r12, customHeapCallback__Q27JAInter11SequenceMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B379C
	lwz      r4, 0x44(r31)
	mr       r6, r31
	addi     r3, r1, 8
	lhz      r5, 6(r4)
	li       r4, 2
	mtctr    r12
	bctrl
	b        lbl_800B37A4

lbl_800B379C:
	lbz      r3, 0x2c0(r31)
	bl       releaseAutoHeapPointer__Q27JAInter7HeapMgrFUc

lbl_800B37A4:
	li       r0, 0
	mr       r4, r31
	stb      r0, 0x15(r31)
	addi     r3, r13, seqControl__Q27JAInter11SequenceMgr@sda21
	bl       releaseSound__Q27JAInter9LinkSoundFP8JAISound
	lbz      r0, 0x14(r31)
	li       r4, 0
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mulli    r0, r0, 0x50
	add      r3, r3, r0
	stw      r4, 0x48(r3)
	b        lbl_800B3808

lbl_800B37D4:
	lbz      r0, 0x14(r31)
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mulli    r0, r0, 0x50
	add      r3, r3, r0
	lwz      r0, 8(r3)
	ori      r0, r0, 2
	stw      r0, 8(r3)
	lbz      r0, 0x14(r31)
	lwz      r3, seqTrackInfo__Q27JAInter11SequenceMgr@sda21(r13)
	mulli    r0, r0, 0x50
	add      r3, r3, r0
	lwz      r3, 0x48(r3)
	stw      r4, 0x28(r3)

lbl_800B3808:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JAInter::SequenceMgr::stopPlayingSeq(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void JAInter::SequenceMgr::checkPlayingSoundTrack(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B3828
 * Size:	000010
 */
JAInter::SeqUpdateData* JAInter::SequenceMgr::getPlayTrackInfo(unsigned long index) { return &seqTrackInfo[index]; }

/*
 * --INFO--
 * Address:	........
 * Size:	0001B0
 */
void JAInter::SequenceMgr::loadArcSeqData(unsigned long, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAInter::SequenceMgr::loadCustomArcSeqData(unsigned short, bool)
{
	// UNUSED FUNCTION
}
