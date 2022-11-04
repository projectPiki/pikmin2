#include "JSystem/JAI/JAIBasic.h"
#include "JSystem/JAI/JAIGlobalParameter.h"
#include "JSystem/JAI/JAIStream.h"
#include "JSystem/JAI/JAInter/MoveParaSet.h"
#include "JSystem/JAI/JAInter/StreamMgr.h"
#include "JSystem/JAS/JASAramStream.h"
#include "JSystem/JAS/JASHeap.h"
#include "JSystem/JAS/JASKernel.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804796B0
    lbl_804796B0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804A6638
    lbl_804A6638:
        .4byte lbl_800B7EE4
        .4byte lbl_800B7DC8
        .4byte lbl_800B7DF8
        .4byte lbl_800B7E64
        .4byte lbl_800B7E24
        .4byte lbl_800B7ED0
        .4byte lbl_800B7E94
        .4byte lbl_800B7EB4

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sChannelMax__Q27JAInter9StreamMgr
    sChannelMax__Q27JAInter9StreamMgr:
        .4byte 0x00000002
    .global decodedBufferBlocks__Q27JAInter9StreamMgr
    decodedBufferBlocks__Q27JAInter9StreamMgr:
        .4byte 0x00002760

    .section .sbss # 0x80514D80 - 0x80516360
    .global flags__Q27JAInter9StreamMgr
    flags__Q27JAInter9StreamMgr:
        .skip 0x2
    .global prepareSw__Q27JAInter9StreamMgr
    prepareSw__Q27JAInter9StreamMgr:
        .skip 0x1
    .global prepareFlag__Q27JAInter9StreamMgr
    prepareFlag__Q27JAInter9StreamMgr:
        .skip 0x1
    .global externalAram__Q27JAInter9StreamMgr
    externalAram__Q27JAInter9StreamMgr:
        .skip 0x1
    .global finishFlag__Q27JAInter9StreamMgr
    finishFlag__Q27JAInter9StreamMgr:
        .skip 0x3
    .global streamUpdate__Q27JAInter9StreamMgr
    streamUpdate__Q27JAInter9StreamMgr:
        .skip 0x4
    .global streamList__Q27JAInter9StreamMgr
    streamList__Q27JAInter9StreamMgr:
        .skip 0x4
    .global streamSound__Q27JAInter9StreamMgr
    streamSound__Q27JAInter9StreamMgr:
        .skip 0x4
    .global initOnCodeStrm__Q27JAInter9StreamMgr
    initOnCodeStrm__Q27JAInter9StreamMgr:
        .skip 0x4
    .global streamSystem__Q27JAInter9StreamMgr
    streamSystem__Q27JAInter9StreamMgr:
        .skip 0x4
    .global systemStatus__Q27JAInter9StreamMgr
    systemStatus__Q27JAInter9StreamMgr:
        .skip 0x4
    .global controlStatus__Q27JAInter9StreamMgr
    controlStatus__Q27JAInter9StreamMgr:
        .skip 0x4
    .global aramBufferHeap__Q27JAInter9StreamMgr
    aramBufferHeap__Q27JAInter9StreamMgr:
        .skip 0x4
    .global aramParentHeap__Q27JAInter9StreamMgr
    aramParentHeap__Q27JAInter9StreamMgr:
        .skip 0x4
    .global allocCallback__Q27JAInter9StreamMgr
    allocCallback__Q27JAInter9StreamMgr:
        .skip 0x4
    .global deallocCallback__Q27JAInter9StreamMgr
    deallocCallback__Q27JAInter9StreamMgr:
        .skip 0x4
    .global externalAramCallback__Q27JAInter9StreamMgr
    externalAramCallback__Q27JAInter9StreamMgr:
        .skip 0x4
    .global dataFileNumber__Q27JAInter9StreamMgr
    dataFileNumber__Q27JAInter9StreamMgr:
        .skip 0x4
    .global mgrCallback__Q27JAInter9StreamMgr
    mgrCallback__Q27JAInter9StreamMgr:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517040
    lbl_80517040:
        .float 1.0
    .global lbl_80517044
    lbl_80517044:
        .float 0.5
    .global lbl_80517048
    lbl_80517048:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800B764C
 * Size:	00031C
 */
void JAInter::StreamMgr::init(void)
{
	if (flags._2 == 0) {
		flags._0 = 0;
	}
	streamSystem   = new (JAIBasic::msCurrentHeap, 0x20) JASAramStream();
	aramBufferHeap = new (JAIBasic::msCurrentHeap, 0x20) JASHeap(nullptr);
	JASAramStream::initSystem(JAIGlobalParameter::getParamStreamDecodedBufferBlocks(), sChannelMax);
	streamSound       = JAIBasic::msBasic->makeStream();
	streamSound->_1A8 = new (JAIBasic::msCurrentHeap, 0x20) MoveParaSet[JAIGlobalParameter::getParamStreamParameterLines()];
	streamSound->_1A4 = new (JAIBasic::msCurrentHeap, 0x20) MoveParaSet[JAIGlobalParameter::getParamStreamParameterLines()];
	streamSound->_1AC = new (JAIBasic::msCurrentHeap, 0x20) MoveParaSetInitZero[JAIGlobalParameter::getParamStreamParameterLines()];
	streamSound->_1B0 = new (JAIBasic::msCurrentHeap, 0x20) MoveParaSetInitZero[JAIGlobalParameter::getParamStreamParameterLines()];
	streamSound->_1C8 = new (JAIBasic::msCurrentHeap, 0x20) MoveParaSet[sChannelMax];
	streamSound->_1CC = new (JAIBasic::msCurrentHeap, 0x20) MoveParaSet[sChannelMax];
	streamSound->_1D0 = new (JAIBasic::msCurrentHeap, 0x20) MoveParaSet[sChannelMax];
	streamSound->_1D4 = new (JAIBasic::msCurrentHeap, 0x20) MoveParaSet[sChannelMax];
	streamUpdate      = new (JAIBasic::msCurrentHeap, 0x20) StreamUpdate();
	streamUpdate->reset();
	if (externalAram == 0) {
		getDecodedBufferSize(10);
		aramBufferHeap->alloc(JASKernel::getAramHeap(), getDecodedBufferSize(10));
	} else if (externalAramCallback != nullptr) {
		aramParentHeap = externalAramCallback();
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	lbz      r3, flags__Q27JAInter9StreamMgr@sda21(r13)
	rlwinm.  r0, r3, 0x1a, 0x1f, 0x1f
	bne      lbl_800B7954
	li       r5, 0
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	rlwimi   r3, r5, 7, 0x18, 0x18
	stb      r3, flags__Q27JAInter9StreamMgr@sda21(r13)
	clrlwi   r0, r3, 0x18
	rlwimi   r0, r5, 6, 0x19, 0x19
	li       r3, 0x2dc
	stb      r0, flags__Q27JAInter9StreamMgr@sda21(r13)
	clrlwi   r0, r0, 0x18
	rlwimi   r0, r5, 5, 0x1a, 0x1a
	li       r5, 0x20
	stb      r0, flags__Q27JAInter9StreamMgr@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800B76AC
	bl       __ct__13JASAramStreamFv
	mr       r0, r3

lbl_800B76AC:
	stw      r0, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	li       r3, 0x44
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r5, 0x20
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800B76D4
	li       r4, 0
	bl       __ct__7JASHeapFP11JASDisposer
	mr       r0, r3

lbl_800B76D4:
	stw      r0, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
	bl       getParamStreamDecodedBufferBlocks__18JAIGlobalParameterFv
	lwz      r4, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	bl       initSystem__13JASAramStreamFUlUl
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lis      r5, __defctor__Q27JAInter11MoveParaSetFv@ha
	lis      r4, __ct__Q27JAInter19MoveParaSetInitZeroFv@ha
	addi     r26, r5, __defctor__Q27JAInter11MoveParaSetFv@l
	stw      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	addi     r27, r4, __ct__Q27JAInter19MoveParaSetInitZeroFv@l
	mr       r25, r3
	mr       r28, r26
	mr       r29, r26
	mr       r30, r26
	mr       r31, r26
	bl       getParamStreamParameterLines__18JAIGlobalParameterFv
	rlwinm   r6, r3, 4, 0x14, 0x1b
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	clrlwi   r24, r3, 0x18
	li       r5, 0x20
	addi     r3, r6, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r26
	mr       r7, r24
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x1a8(r25)
	bl       getParamStreamParameterLines__18JAIGlobalParameterFv
	rlwinm   r6, r3, 4, 0x14, 0x1b
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	clrlwi   r24, r3, 0x18
	li       r5, 0x20
	addi     r3, r6, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r26
	mr       r7, r24
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x1a4(r25)
	bl       getParamStreamParameterLines__18JAIGlobalParameterFv
	rlwinm   r6, r3, 4, 0x14, 0x1b
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	clrlwi   r24, r3, 0x18
	li       r5, 0x20
	addi     r3, r6, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r27
	mr       r7, r24
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x1ac(r25)
	bl       getParamStreamParameterLines__18JAIGlobalParameterFv
	rlwinm   r6, r3, 4, 0x14, 0x1b
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	clrlwi   r24, r3, 0x18
	li       r5, 0x20
	addi     r3, r6, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r27
	mr       r7, r24
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x1b0(r25)
	li       r5, 0x20
	lwz      r24, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	slwi     r3, r24, 4
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r28
	mr       r7, r24
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x1c8(r25)
	li       r5, 0x20
	lwz      r24, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	slwi     r3, r24, 4
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r29
	mr       r7, r24
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x1cc(r25)
	li       r5, 0x20
	lwz      r24, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	slwi     r3, r24, 4
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r30
	mr       r7, r24
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x1d0(r25)
	li       r5, 0x20
	lwz      r24, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	slwi     r3, r24, 4
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r31
	mr       r7, r24
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x1d4(r25)
	li       r3, 0x20
	li       r5, 0x20
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_800B78D4
	li       r0, 0
	stw      r0, 0x18(r3)
	stw      r0, 0x1c(r3)

lbl_800B78D4:
	stw      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	li       r0, 0
	lfs      f1, lbl_80517040@sda21(r2)
	stb      r0, 0(r3)
	lfs      f0, lbl_80517044@sda21(r2)
	stb      r0, 1(r3)
	stfs     f1, 4(r3)
	stfs     f1, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f0, 0x10(r3)
	stfs     f0, 0x14(r3)
	stw      r0, 0x1c(r3)
	lbz      r0, externalAram__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800B793C
	li       r3, 0xa
	bl       getDecodedBufferSize__Q27JAInter9StreamMgrFUl
	li       r3, 0xa
	bl       getDecodedBufferSize__Q27JAInter9StreamMgrFUl
	mr       r31, r3
	bl       getAramHeap__9JASKernelFv
	mr       r4, r3
	lwz      r3, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
	mr       r5, r31
	bl       alloc__7JASHeapFP7JASHeapUl
	b        lbl_800B7954

lbl_800B793C:
	lwz      r12, externalAramCallback__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B7954
	mtctr    r12
	bctrl
	stw      r3, aramParentHeap__Q27JAInter9StreamMgr@sda21(r13)

lbl_800B7954:
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B7968
 * Size:	000358
 */
void JAInter::StreamMgr::storeStreamBuffer(JAIStream**, JAInter::Actor*, unsigned long, unsigned long, unsigned char, JAInter::SoundInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stmw      r23, 0xC(r1)
	  mr.       r24, r3
	  mr        r25, r4
	  mr        r26, r5
	  mr        r27, r6
	  mr        r28, r7
	  mr        r29, r8
	  beq-      .loc_0x64
	  lwz       r3, 0x0(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  mr        r4, r26
	  mr        r5, r29
	  bl        -0x24B0
	  cmplwi    r3, 0
	  bne-      .loc_0x32C

	.loc_0x64:
	  lwz       r3, -0x73B0(r13)
	  lbz       r0, 0x15(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xA8
	  bl        -0x3E78
	  lbz       r0, 0x4(r29)
	  rlwinm    r3,r3,0,24,31
	  cmplw     r3, r0
	  bgt-      .loc_0x32C
	  lwz       r3, -0x73B0(r13)
	  li        r4, 0
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xA8
	  b         .loc_0x32C

	.loc_0xA8:
	  lwz       r30, -0x73B0(r13)
	  li        r23, 0
	  lfs       f31, -0x7320(r2)
	  mr        r31, r23
	  stb       r23, 0x48(r30)
	  lfs       f30, -0x731C(r2)
	  stw       r23, 0x4C(r30)
	  lfs       f29, -0x7318(r2)
	  stw       r23, 0x50(r30)
	  stw       r23, 0x54(r30)
	  stw       r23, 0x58(r30)
	  stw       r23, 0x5C(r30)
	  stw       r23, 0x60(r30)
	  stfs      f31, 0x68(r30)
	  stfs      f31, 0x64(r30)
	  stw       r23, 0x70(r30)
	  stfs      f31, 0x78(r30)
	  stfs      f31, 0x74(r30)
	  stw       r23, 0x80(r30)
	  stfs      f31, 0x88(r30)
	  stfs      f31, 0x84(r30)
	  stw       r23, 0x90(r30)
	  stfs      f31, 0x98(r30)
	  stfs      f31, 0x94(r30)
	  stw       r23, 0xA0(r30)
	  stfs      f31, 0xA8(r30)
	  stfs      f31, 0xA4(r30)
	  stw       r23, 0xB0(r30)
	  stfs      f31, 0xB8(r30)
	  stfs      f31, 0xB4(r30)
	  stw       r23, 0xC0(r30)
	  stfs      f31, 0xC8(r30)
	  stfs      f31, 0xC4(r30)
	  stw       r23, 0xD0(r30)
	  stfs      f31, 0xD8(r30)
	  stfs      f31, 0xD4(r30)
	  stw       r23, 0xE0(r30)
	  stfs      f31, 0xE8(r30)
	  stfs      f31, 0xE4(r30)
	  stw       r23, 0xF0(r30)
	  stfs      f31, 0xF8(r30)
	  stfs      f31, 0xF4(r30)
	  stw       r23, 0x100(r30)
	  stfs      f31, 0x108(r30)
	  stfs      f31, 0x104(r30)
	  stw       r23, 0x110(r30)
	  stfs      f31, 0x118(r30)
	  stfs      f31, 0x114(r30)
	  stw       r23, 0x120(r30)
	  stfs      f31, 0x128(r30)
	  stfs      f31, 0x124(r30)
	  stw       r23, 0x130(r30)
	  stfs      f31, 0x138(r30)
	  stfs      f31, 0x134(r30)
	  stw       r23, 0x140(r30)
	  stfs      f31, 0x148(r30)
	  stfs      f31, 0x144(r30)
	  stw       r23, 0x150(r30)
	  stfs      f31, 0x158(r30)
	  stfs      f31, 0x154(r30)
	  stw       r23, 0x160(r30)
	  stfs      f31, 0x168(r30)
	  stfs      f31, 0x164(r30)
	  stw       r23, 0x170(r30)
	  stfs      f31, 0x178(r30)
	  stfs      f31, 0x174(r30)
	  stw       r23, 0x180(r30)
	  stfs      f31, 0x188(r30)
	  stfs      f31, 0x184(r30)
	  stw       r23, 0x190(r30)
	  stfs      f31, 0x198(r30)
	  stfs      f31, 0x194(r30)
	  stw       r23, 0x1A0(r30)
	  b         .loc_0x22C

	.loc_0x1D0:
	  lwz       r0, 0x1A4(r30)
	  li        r3, 0
	  addi      r23, r23, 0x1
	  add       r4, r0, r31
	  stfs      f31, 0x4(r4)
	  stfs      f31, 0x0(r4)
	  stw       r3, 0xC(r4)
	  lwz       r0, 0x1A8(r30)
	  add       r4, r0, r31
	  stfs      f30, 0x4(r4)
	  stfs      f30, 0x0(r4)
	  stw       r3, 0xC(r4)
	  lwz       r0, 0x1AC(r30)
	  add       r4, r0, r31
	  stfs      f29, 0x4(r4)
	  stfs      f29, 0x0(r4)
	  stw       r3, 0xC(r4)
	  lwz       r0, 0x1B0(r30)
	  add       r4, r0, r31
	  addi      r31, r31, 0x10
	  stfs      f29, 0x4(r4)
	  stfs      f29, 0x0(r4)
	  stw       r3, 0xC(r4)

	.loc_0x22C:
	  bl        -0xA000
	  rlwinm    r0,r3,0,24,31
	  cmplw     r23, r0
	  blt+      .loc_0x1D0
	  li        r23, 0
	  lfs       f29, -0x7320(r2)
	  lfs       f30, -0x731C(r2)
	  mr        r31, r23
	  lfs       f31, -0x7318(r2)
	  b         .loc_0x2B0

	.loc_0x254:
	  lwz       r0, 0x1C8(r30)
	  li        r3, 0
	  addi      r23, r23, 0x1
	  add       r4, r0, r31
	  stfs      f29, 0x4(r4)
	  stfs      f29, 0x0(r4)
	  stw       r3, 0xC(r4)
	  lwz       r0, 0x1CC(r30)
	  add       r4, r0, r31
	  stfs      f30, 0x4(r4)
	  stfs      f30, 0x0(r4)
	  stw       r3, 0xC(r4)
	  lwz       r0, 0x1D0(r30)
	  add       r4, r0, r31
	  stfs      f31, 0x4(r4)
	  stfs      f31, 0x0(r4)
	  stw       r3, 0xC(r4)
	  lwz       r0, 0x1D4(r30)
	  add       r4, r0, r31
	  addi      r31, r31, 0x10
	  stfs      f31, 0x4(r4)
	  stfs      f31, 0x0(r4)
	  stw       r3, 0xC(r4)

	.loc_0x2B0:
	  bl        0x12C4
	  cmplw     r23, r3
	  blt+      .loc_0x254
	  li        r11, 0
	  li        r10, 0x1
	  stw       r11, 0x1B8(r30)
	  li        r0, 0xA
	  mr        r3, r30
	  mr        r4, r24
	  stw       r11, 0x1BC(r30)
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  stw       r11, 0x1C0(r30)
	  mr        r8, r28
	  mr        r9, r29
	  stw       r11, 0x1C4(r30)
	  stb       r10, 0x15(r30)
	  stb       r0, 0x16(r30)
	  lwz       r10, -0x73B8(r13)
	  stb       r11, 0x2(r10)
	  lwz       r0, -0x73B8(r13)
	  lwz       r10, -0x73B0(r13)
	  stw       r0, 0x1B4(r10)
	  lwz       r12, 0x10(r30)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r24, 0
	  beq-      .loc_0x32C
	  stw       r30, 0x0(r24)

	.loc_0x32C:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lmw       r23, 0xC(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B7CC0
 * Size:	000088
 */
void JAInter::StreamMgr::releaseStreamBuffer(JAIStream* stream, unsigned long p2)
{
	if (p2 == 0 || stream->_15 < 4) {
		stopDirect();
		stream->_15       = 0;
		stream->_1B4->_1C = 0;
		stream->_1B4->_18 = 0;
		stream->clearMainSoundPPointer();
		mgrCallback = 0;
	} else if (stream->_1B4 != nullptr) {
		stream->_1B4->_18 |= 2;
		stream->_28 = p2;
	}
}

/*
 * --INFO--
 * Address:	800B7D48
 * Size:	0001AC
 */
void JAInter::StreamMgr::checkSystem()
{
	if (finishFlag == 2) {
		if (controlStatus == 5) {
			if (mgrCallback != nullptr) {
				mgrCallback();
			}
			controlStatus = 0;
		} else if (controlStatus == 6) {
			controlStatus = 0;
		}
		finishFlag = 0;
	}
	switch (controlStatus) {
	case 1:
		if (finishFlag == 0) {
			if (dataFileNumber == 0) {
				controlStatus = 0;
			} else {
				controlStatus = 2;
			}
		}
		break;
	case 2:
		if (dataFileNumber == 0) {
			controlStatus = 0;
		} else {
			prepareSystem(dataFileNumber);
			initChannel();
			controlStatus = 4;
		}
		break;
	case 4:
		if (prepareFlag == 1) {
			if (mgrCallback != nullptr) {
				mgrCallback();
			}
			if (prepareSw != 0) {
				break;
			}
			controlStatus = 3;
		}
		if (controlStatus != 3) {
			break;
		}
		// lack of break is intentional
	case 3:
		if (mgrCallback != nullptr) {
			mgrCallback();
		}
		streamSystem->start();
		prepareFlag   = 0;
		controlStatus = 5;
		break;
	case 6:
		finishFlag = 1;
		streamSystem->stop(0);
		controlStatus = 1;
		break;
	case 7:
		finishFlag = 1;
		streamSystem->cancel();
		controlStatus = 1;
		break;
	case 5:
		if (mgrCallback != nullptr) {
			mgrCallback();
		}
		break;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 2
	bne      lbl_800B7DA4
	lwz      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 5
	bne      lbl_800B7D8C
	lwz      r12, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B7D80
	mtctr    r12
	bctrl

lbl_800B7D80:
	li       r0, 0
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B7D9C

lbl_800B7D8C:
	cmplwi   r0, 6
	bne      lbl_800B7D9C
	li       r0, 0
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)

lbl_800B7D9C:
	li       r0, 0
	stb      r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)

lbl_800B7DA4:
	lwz      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 7
	bgt      lbl_800B7EE4
	lis      r3, lbl_804A6638@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A6638@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_800B7DC8

lbl_800B7DC8:
	lbz      r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800B7EE4
	lwz      r0, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
	cmpwi    r0, 0
	bne      lbl_800B7DEC
	li       r0, 0
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B7EE4

lbl_800B7DEC:
	li       r0, 2
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B7EE4
	.global  lbl_800B7DF8

lbl_800B7DF8:
	lwz      r3, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
	cmpwi    r3, 0
	bne      lbl_800B7E10
	li       r0, 0
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B7EE4

lbl_800B7E10:
	bl       prepareSystem__Q27JAInter9StreamMgrFl
	bl       initChannel__Q27JAInter9StreamMgrFv
	li       r0, 4
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B7EE4
	.global  lbl_800B7E24

lbl_800B7E24:
	lbz      r0, prepareFlag__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 1
	bne      lbl_800B7E58
	lwz      r12, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B7E44
	mtctr    r12
	bctrl

lbl_800B7E44:
	lbz      r0, prepareSw__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800B7EE4
	li       r0, 3
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)

lbl_800B7E58:
	lwz      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 3
	bne      lbl_800B7EE4
	.global  lbl_800B7E64

lbl_800B7E64:
	lwz      r12, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B7E78
	mtctr    r12
	bctrl

lbl_800B7E78:
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	bl       start__13JASAramStreamFv
	li       r3, 0
	li       r0, 5
	stb      r3, prepareFlag__Q27JAInter9StreamMgr@sda21(r13)
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B7EE4
	.global  lbl_800B7E94

lbl_800B7E94:
	li       r0, 1
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	stb      r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
	li       r4, 0
	bl       stop__13JASAramStreamFUs
	li       r0, 1
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B7EE4
	.global  lbl_800B7EB4

lbl_800B7EB4:
	li       r0, 1
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	stb      r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
	bl       cancel__13JASAramStreamFv
	li       r0, 1
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B7EE4
	.global  lbl_800B7ED0

lbl_800B7ED0:
	lwz      r12, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B7EE4
	mtctr    r12
	bctrl
	.global  lbl_800B7EE4

lbl_800B7EE4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B7EF4
 * Size:	000A00
 */
void JAInter::StreamMgr::PlayingStream(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stmw     r24, 0x20(r1)
	lwz      r4, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_800B88D0
	lbz      r0, 0x15(r4)
	lwz      r31, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 4
	blt      lbl_800B7FD0
	lbz      r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 2
	bne      lbl_800B7F78
	lwz      r3, 0x1b4(r4)
	cmplwi   r3, 0
	beq      lbl_800B7F5C
	li       r0, 0
	stw      r0, 0x1c(r3)
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, 0x1b4(r3)
	stw      r0, 0x18(r3)

lbl_800B7F5C:
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	bl       clearMainSoundPPointer__8JAISoundFv
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	li       r0, 0
	stb      r0, 0x15(r3)
	stw      r0, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B88D0

lbl_800B7F78:
	lbz      r3, 0x16(r4)
	cmplwi   r3, 0
	beq      lbl_800B7F8C
	addi     r0, r3, -1
	stb      r0, 0x16(r4)

lbl_800B7F8C:
	lwz      r0, 0x18(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_800B7FD0
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	li       r5, 7
	lfs      f1, lbl_80517048@sda21(r2)
	lwz      r12, 0x10(r3)
	lwz      r4, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	li       r0, 5
	stb      r0, 0x15(r3)
	lwz      r0, 0x18(r31)
	xori     r0, r0, 2
	stw      r0, 0x18(r31)

lbl_800B7FD0:
	lwz      r4, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lbz      r0, 0x15(r4)
	cmplwi   r0, 3
	blt      lbl_800B88D0
	lwz      r0, 0x18(r31)
	lis      r3, lbl_804796B0@ha
	addi     r8, r3, lbl_804796B0@l
	addi     r30, r4, 0x48
	rlwinm.  r0, r0, 0, 0xd, 0xd
	lwz      r7, 0(r8)
	lwz      r6, 4(r8)
	li       r27, 0
	lwz      r5, 8(r8)
	lwz      r4, 0xc(r8)
	lwz      r3, 0x10(r8)
	lwz      r0, 0x14(r8)
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r4, 0x14(r1)
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)
	beq      lbl_800B80EC
	lfs      f30, lbl_80517040@sda21(r2)
	li       r24, 0
	li       r25, 1
	b        lbl_800B8084

lbl_800B803C:
	clrlwi   r3, r24, 0x18
	lwz      r0, 8(r30)
	slw      r26, r25, r3
	rlwinm   r3, r24, 4, 0x14, 0x1b
	and.     r0, r0, r26
	addi     r28, r3, 0x1c
	add      r28, r30, r28
	beq      lbl_800B8078
	mr       r3, r28
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B8078
	lwz      r0, 8(r30)
	xor      r0, r0, r26
	stw      r0, 8(r30)

lbl_800B8078:
	lfs      f0, 4(r28)
	addi     r24, r24, 1
	fmuls    f30, f30, f0

lbl_800B8084:
	clrlwi   r0, r24, 0x18
	cmplwi   r0, 0x14
	blt      lbl_800B803C
	lwz      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	lfs      f0, 4(r3)
	fcmpu    cr0, f0, f30
	beq      lbl_800B80D4
	stfs     f30, 4(r3)
	addi     r3, r1, 8
	li       r6, 0
	lwz      r5, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B80C8

lbl_800B80B4:
	rlwinm   r4, r6, 2, 0x16, 0x1d
	addi     r6, r6, 1
	lwzx     r0, r3, r4
	oris     r0, r0, 4
	stwx     r0, r3, r4

lbl_800B80C8:
	clrlwi   r0, r6, 0x18
	cmplw    r0, r5
	blt      lbl_800B80B4

lbl_800B80D4:
	lwz      r0, 8(r30)
	cmplwi   r0, 0
	bne      lbl_800B80EC
	lwz      r0, 0x18(r31)
	xoris    r0, r0, 4
	stw      r0, 0x18(r31)

lbl_800B80EC:
	lwz      r0, 0x18(r31)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	beq      lbl_800B817C
	addi     r25, r1, 8
	li       r28, 0
	li       r26, 1
	b        lbl_800B8154

lbl_800B8108:
	lwz      r0, 0x170(r30)
	slw      r29, r26, r3
	lwz      r4, 0x180(r30)
	rlwinm   r3, r28, 4, 0x14, 0x1b
	and.     r0, r0, r29
	clrlwi   r24, r28, 0x18
	add      r3, r4, r3
	beq      lbl_800B8140
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B8140
	lwz      r0, 0x170(r30)
	xor      r0, r0, r29
	stw      r0, 0x170(r30)

lbl_800B8140:
	slwi     r3, r24, 2
	addi     r28, r28, 1
	lwzx     r0, r25, r3
	oris     r0, r0, 4
	stwx     r0, r25, r3

lbl_800B8154:
	lwz      r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_800B8108
	lwz      r0, 0x170(r30)
	cmplwi   r0, 0
	bne      lbl_800B817C
	lwz      r0, 0x18(r31)
	xori     r0, r0, 0x40
	stw      r0, 0x18(r31)

lbl_800B817C:
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lbz      r0, 0x15(r3)
	cmplwi   r0, 5
	bne      lbl_800B8218
	lwz      r12, 0x10(r3)
	li       r4, 7
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80517048@sda21(r2)
	fcmpu    cr0, f0, f1
	beq      lbl_800B81BC
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r0, 0x28(r3)
	cmplwi   r0, 0
	bne      lbl_800B8218

lbl_800B81BC:
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lbz      r0, 0x16(r3)
	cmplwi   r0, 0
	bne      lbl_800B8218
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	li       r4, 0
	bl       stop__13JASAramStreamFUs
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	li       r0, 0
	stb      r0, 0x15(r3)
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, 0x1b4(r3)
	stw      r0, 0x1c(r3)
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, 0x1b4(r3)
	stw      r0, 0x18(r3)
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	bl       clearMainSoundPPointer__8JAISoundFv
	li       r3, 0
	li       r0, 1
	stw      r3, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	stw      r3, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)

lbl_800B8218:
	lwz      r0, 0x18(r31)
	rlwinm.  r0, r0, 0, 0xc, 0xc
	beq      lbl_800B8318
	lfs      f30, lbl_80517048@sda21(r2)
	li       r26, 0
	lfs      f31, lbl_80517044@sda21(r2)
	li       r25, 1
	b        lbl_800B8284

lbl_800B8238:
	clrlwi   r3, r26, 0x18
	lwz      r0, 0x10(r30)
	slw      r24, r25, r3
	lwz      r3, 0x160(r30)
	and.     r0, r0, r24
	rlwinm   r0, r26, 4, 0x14, 0x1b
	add      r28, r3, r0
	beq      lbl_800B8274
	mr       r3, r28
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B8274
	lwz      r0, 0x10(r30)
	xor      r0, r0, r24
	stw      r0, 0x10(r30)

lbl_800B8274:
	lfs      f0, 4(r28)
	addi     r26, r26, 1
	fsubs    f0, f0, f31
	fadds    f30, f30, f0

lbl_800B8284:
	clrlwi   r0, r26, 0x18
	cmplwi   r0, 7
	blt      lbl_800B8238
	lfs      f1, lbl_80517044@sda21(r2)
	lfs      f0, lbl_80517040@sda21(r2)
	fadds    f30, f30, f1
	fcmpo    cr0, f30, f0
	ble      lbl_800B82AC
	fmr      f30, f0
	b        lbl_800B82BC

lbl_800B82AC:
	lfs      f0, lbl_80517048@sda21(r2)
	fcmpo    cr0, f30, f0
	bge      lbl_800B82BC
	fmr      f30, f0

lbl_800B82BC:
	lwz      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	lfs      f0, 0xc(r3)
	fcmpu    cr0, f0, f30
	beq      lbl_800B8300
	stfs     f30, 0xc(r3)
	addi     r3, r1, 8
	li       r6, 0
	lwz      r5, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B82F4

lbl_800B82E0:
	rlwinm   r4, r6, 2, 0x16, 0x1d
	addi     r6, r6, 1
	lwzx     r0, r3, r4
	oris     r0, r0, 8
	stwx     r0, r3, r4

lbl_800B82F4:
	clrlwi   r0, r6, 0x18
	cmplw    r0, r5
	blt      lbl_800B82E0

lbl_800B8300:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	bne      lbl_800B8318
	lwz      r0, 0x18(r31)
	xoris    r0, r0, 8
	stw      r0, 0x18(r31)

lbl_800B8318:
	lwz      r0, 0x18(r31)
	rlwinm.  r0, r0, 0, 0x18, 0x18
	beq      lbl_800B83A8
	addi     r25, r1, 8
	li       r28, 0
	li       r26, 1
	b        lbl_800B8380

lbl_800B8334:
	lwz      r0, 0x174(r30)
	slw      r24, r26, r3
	lwz      r4, 0x184(r30)
	rlwinm   r3, r28, 4, 0x14, 0x1b
	and.     r0, r0, r24
	clrlwi   r29, r28, 0x18
	add      r3, r4, r3
	beq      lbl_800B836C
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B836C
	lwz      r0, 0x174(r30)
	xor      r0, r0, r24
	stw      r0, 0x174(r30)

lbl_800B836C:
	slwi     r3, r29, 2
	addi     r28, r28, 1
	lwzx     r0, r25, r3
	oris     r0, r0, 8
	stwx     r0, r25, r3

lbl_800B8380:
	lwz      r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_800B8334
	lwz      r0, 0x174(r30)
	cmplwi   r0, 0
	bne      lbl_800B83A8
	lwz      r0, 0x18(r31)
	xori     r0, r0, 0x80
	stw      r0, 0x18(r31)

lbl_800B83A8:
	lwz      r0, 0x18(r31)
	rlwinm.  r0, r0, 0, 0xb, 0xb
	beq      lbl_800B8448
	lfs      f31, lbl_80517040@sda21(r2)
	li       r26, 0
	li       r25, 1
	b        lbl_800B840C

lbl_800B83C4:
	clrlwi   r3, r26, 0x18
	lwz      r0, 0xc(r30)
	slw      r24, r25, r3
	lwz      r3, 0x15c(r30)
	and.     r0, r0, r24
	rlwinm   r0, r26, 4, 0x14, 0x1b
	add      r28, r3, r0
	beq      lbl_800B8400
	mr       r3, r28
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B8400
	lwz      r0, 0xc(r30)
	xor      r0, r0, r24
	stw      r0, 0xc(r30)

lbl_800B8400:
	lfs      f0, 4(r28)
	addi     r26, r26, 1
	fmuls    f31, f31, f0

lbl_800B840C:
	clrlwi   r0, r26, 0x18
	cmplwi   r0, 7
	blt      lbl_800B83C4
	lwz      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	lfs      f0, 8(r3)
	fcmpu    cr0, f0, f31
	beq      lbl_800B8430
	li       r27, 1
	stfs     f31, 8(r3)

lbl_800B8430:
	lwz      r0, 0xc(r30)
	cmplwi   r0, 0
	bne      lbl_800B8448
	lwz      r0, 0x18(r31)
	xoris    r0, r0, 0x10
	stw      r0, 0x18(r31)

lbl_800B8448:
	lwz      r0, 0x18(r31)
	rlwinm.  r0, r0, 0, 0xa, 0xa
	beq      lbl_800B8538
	lfs      f31, lbl_80517048@sda21(r2)
	li       r26, 0
	li       r25, 1
	b        lbl_800B84AC

lbl_800B8464:
	clrlwi   r3, r26, 0x18
	lwz      r0, 0x14(r30)
	slw      r24, r25, r3
	lwz      r3, 0x164(r30)
	and.     r0, r0, r24
	rlwinm   r0, r26, 4, 0x14, 0x1b
	add      r28, r3, r0
	beq      lbl_800B84A0
	mr       r3, r28
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B84A0
	lwz      r0, 0x14(r30)
	xor      r0, r0, r24
	stw      r0, 0x14(r30)

lbl_800B84A0:
	lfs      f0, 4(r28)
	addi     r26, r26, 1
	fadds    f31, f31, f0

lbl_800B84AC:
	clrlwi   r0, r26, 0x18
	cmplwi   r0, 7
	blt      lbl_800B8464
	lfs      f0, lbl_80517040@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_800B84CC
	fmr      f31, f0
	b        lbl_800B84DC

lbl_800B84CC:
	lfs      f0, lbl_80517048@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800B84DC
	fmr      f31, f0

lbl_800B84DC:
	lwz      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	lfs      f0, 0x10(r3)
	fcmpu    cr0, f0, f31
	beq      lbl_800B8520
	stfs     f31, 0x10(r3)
	addi     r3, r1, 8
	li       r6, 0
	lwz      r5, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B8514

lbl_800B8500:
	rlwinm   r4, r6, 2, 0x16, 0x1d
	addi     r6, r6, 1
	lwzx     r0, r3, r4
	oris     r0, r0, 0x20
	stwx     r0, r3, r4

lbl_800B8514:
	clrlwi   r0, r6, 0x18
	cmplw    r0, r5
	blt      lbl_800B8500

lbl_800B8520:
	lwz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_800B8538
	lwz      r0, 0x18(r31)
	xoris    r0, r0, 0x20
	stw      r0, 0x18(r31)

lbl_800B8538:
	lwz      r0, 0x18(r31)
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_800B85C8
	addi     r25, r1, 8
	li       r28, 0
	li       r26, 1
	b        lbl_800B85A0

lbl_800B8554:
	lwz      r0, 0x178(r30)
	slw      r24, r26, r3
	lwz      r4, 0x188(r30)
	rlwinm   r3, r28, 4, 0x14, 0x1b
	and.     r0, r0, r24
	clrlwi   r29, r28, 0x18
	add      r3, r4, r3
	beq      lbl_800B858C
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B858C
	lwz      r0, 0x178(r30)
	xor      r0, r0, r24
	stw      r0, 0x178(r30)

lbl_800B858C:
	slwi     r3, r29, 2
	addi     r28, r28, 1
	lwzx     r0, r25, r3
	oris     r0, r0, 0x20
	stwx     r0, r25, r3

lbl_800B85A0:
	lwz      r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_800B8554
	lwz      r0, 0x178(r30)
	cmplwi   r0, 0
	bne      lbl_800B85C8
	lwz      r0, 0x18(r31)
	xori     r0, r0, 0x800
	stw      r0, 0x18(r31)

lbl_800B85C8:
	lwz      r0, 0x18(r31)
	rlwinm.  r0, r0, 0, 9, 9
	beq      lbl_800B86B8
	lfs      f31, lbl_80517048@sda21(r2)
	li       r26, 0
	li       r25, 1
	b        lbl_800B862C

lbl_800B85E4:
	clrlwi   r3, r26, 0x18
	lwz      r0, 0x18(r30)
	slw      r24, r25, r3
	lwz      r3, 0x168(r30)
	and.     r0, r0, r24
	rlwinm   r0, r26, 4, 0x14, 0x1b
	add      r28, r3, r0
	beq      lbl_800B8620
	mr       r3, r28
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B8620
	lwz      r0, 0x18(r30)
	xor      r0, r0, r24
	stw      r0, 0x18(r30)

lbl_800B8620:
	lfs      f0, 4(r28)
	addi     r26, r26, 1
	fadds    f31, f31, f0

lbl_800B862C:
	clrlwi   r0, r26, 0x18
	cmplwi   r0, 7
	blt      lbl_800B85E4
	lfs      f0, lbl_80517040@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_800B864C
	fmr      f31, f0
	b        lbl_800B865C

lbl_800B864C:
	lfs      f0, lbl_80517048@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800B865C
	fmr      f31, f0

lbl_800B865C:
	lwz      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	lfs      f0, 0x14(r3)
	fcmpu    cr0, f0, f31
	beq      lbl_800B86A0
	stfs     f31, 0x14(r3)
	addi     r3, r1, 8
	li       r6, 0
	lwz      r5, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B8694

lbl_800B8680:
	rlwinm   r4, r6, 2, 0x16, 0x1d
	addi     r6, r6, 1
	lwzx     r0, r3, r4
	oris     r0, r0, 0x40
	stwx     r0, r3, r4

lbl_800B8694:
	clrlwi   r0, r6, 0x18
	cmplw    r0, r5
	blt      lbl_800B8680

lbl_800B86A0:
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_800B86B8
	lwz      r0, 0x18(r31)
	xoris    r0, r0, 0x40
	stw      r0, 0x18(r31)

lbl_800B86B8:
	lwz      r0, 0x18(r31)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_800B8748
	li       r28, 0
	b        lbl_800B8720

lbl_800B86CC:
	li       r0, 1
	lwz      r3, 0x17c(r30)
	slw      r24, r0, r4
	lwz      r4, 0x18c(r30)
	and.     r0, r3, r24
	rlwinm   r0, r28, 4, 0x14, 0x1b
	clrlwi   r25, r28, 0x18
	add      r3, r4, r0
	beq      lbl_800B871C
	bl       move__Q27JAInter11MoveParaSetFv
	cmpwi    r3, 0
	bne      lbl_800B8708
	lwz      r0, 0x17c(r30)
	xor      r0, r0, r24
	stw      r0, 0x17c(r30)

lbl_800B8708:
	slwi     r4, r25, 2
	addi     r3, r1, 8
	lwzx     r0, r3, r4
	oris     r0, r0, 0x40
	stwx     r0, r3, r4

lbl_800B871C:
	addi     r28, r28, 1

lbl_800B8720:
	lwz      r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	clrlwi   r4, r28, 0x18
	cmplw    r4, r0
	blt      lbl_800B86CC
	lwz      r0, 0x17c(r30)
	cmplwi   r0, 0
	bne      lbl_800B8748
	lwz      r0, 0x18(r31)
	xori     r0, r0, 0x100
	stw      r0, 0x18(r31)

lbl_800B8748:
	lwz      r0, 8(r1)
	cmplwi   r0, 0
	bne      lbl_800B8798
	lwz      r0, 0xc(r1)
	cmplwi   r0, 0
	bne      lbl_800B8798
	lwz      r0, 0x10(r1)
	cmplwi   r0, 0
	bne      lbl_800B8798
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_800B8798
	lwz      r0, 0x18(r1)
	cmplwi   r0, 0
	bne      lbl_800B8798
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_800B8798
	clrlwi.  r0, r27, 0x18
	beq      lbl_800B88C0

lbl_800B8798:
	bl       OSDisableInterrupts
	li       r29, 0
	mr       r26, r3
	addi     r31, r1, 8
	li       r25, 0
	mr       r28, r29
	b        lbl_800B8894

lbl_800B87B4:
	lwz      r0, 0(r31)
	rlwinm.  r0, r0, 0, 0xd, 0xd
	beq      lbl_800B87E4
	lwz      r5, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	addi     r3, r29, 4
	lwz      r4, 0x180(r30)
	addi     r0, r28, 0x26c
	lfs      f1, 4(r5)
	lfsx     f0, r4, r3
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	fmuls    f0, f1, f0
	stfsx    f0, r3, r0

lbl_800B87E4:
	lwz      r0, 0(r31)
	rlwinm.  r0, r0, 0, 0xc, 0xc
	beq      lbl_800B8824
	lwz      r6, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	addi     r4, r29, 4
	lwz      r5, 0x184(r30)
	addi     r3, r28, 0x284
	lfs      f2, 0xc(r6)
	li       r0, 1
	lfsx     f1, r5, r4
	lfs      f0, lbl_80517044@sda21(r2)
	fadds    f1, f2, f1
	lwz      r4, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	fsubs    f0, f1, f0
	stfsx    f0, r4, r3
	stb      r0, 0x2d8(r4)

lbl_800B8824:
	lwz      r0, 0(r31)
	rlwinm.  r0, r0, 0, 0xa, 0xa
	beq      lbl_800B8854
	lwz      r5, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	addi     r3, r29, 4
	lwz      r4, 0x188(r30)
	addi     r0, r28, 0x29c
	lfs      f1, 0x10(r5)
	lfsx     f0, r4, r3
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	fadds    f0, f1, f0
	stfsx    f0, r3, r0

lbl_800B8854:
	lwz      r0, 0(r31)
	rlwinm.  r0, r0, 0, 9, 9
	beq      lbl_800B8884
	lwz      r5, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	addi     r3, r29, 4
	lwz      r4, 0x18c(r30)
	addi     r0, r28, 0x2b4
	lfs      f1, 0x14(r5)
	lfsx     f0, r4, r3
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	fadds    f0, f1, f0
	stfsx    f0, r3, r0

lbl_800B8884:
	addi     r31, r31, 4
	addi     r29, r29, 0x10
	addi     r28, r28, 4
	addi     r25, r25, 1

lbl_800B8894:
	bl       getChannelMax__Q27JAInter9StreamMgrFv
	cmplw    r25, r3
	blt      lbl_800B87B4
	clrlwi.  r0, r27, 0x18
	beq      lbl_800B88B8
	lwz      r4, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	lfs      f0, 8(r4)
	stfs     f0, 0x268(r3)

lbl_800B88B8:
	mr       r3, r26
	bl       OSRestoreInterrupts

lbl_800B88C0:
	lwz      r4, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, 0x2c(r4)
	addi     r0, r3, 1
	stw      r0, 0x2c(r4)

lbl_800B88D0:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lmw      r24, 0x20(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JAInter::StreamMgr::RequestStream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B88F4
 * Size:	0000A8
 */
void JAInter::StreamMgr::changeCallback(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	cmpwi    r0, 4
	beq      lbl_800B8928
	bge      lbl_800B891C
	cmpwi    r0, 3
	bge      lbl_800B8944
	b        lbl_800B898C

lbl_800B891C:
	cmpwi    r0, 6
	bge      lbl_800B898C
	b        lbl_800B8970

lbl_800B8928:
	lwz      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	lbz      r0, 2(r3)
	cmplwi   r0, 0
	bne      lbl_800B898C
	li       r0, 0
	stb      r0, prepareSw__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B898C

lbl_800B8944:
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	li       r0, 3
	stb      r0, 0x15(r3)
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r4, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	bl       PlayingStream__Q27JAInter9StreamMgrFv
	b        lbl_800B898C

lbl_800B8970:
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lbz      r0, 0x15(r3)
	cmplwi   r0, 3
	bne      lbl_800B8988
	li       r0, 4
	stb      r0, 0x15(r3)

lbl_800B8988:
	bl       PlayingStream__Q27JAInter9StreamMgrFv

lbl_800B898C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B899C
 * Size:	000030
 */
void JAInter::StreamMgr::processGFrameStream(void)
{
	if (flags._1 == 0) {
		checkSystem();
		checkEntriedStream();
	}
}

/*
 * --INFO--
 * Address:	800B89CC
 * Size:	0000E8
 */
void JAInter::StreamMgr::checkEntriedStream(void)
{
	if (streamSound->_15 != 1) {
		return;
	}
	streamSound->_15 = 2;
	streamUpdate->reset();
	streamUpdate->_1C = streamSound;
	// TODO: the rest
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stw      r31, 0x10c(r1)
	lwz      r4, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lbz      r0, 0x15(r4)
	cmplwi   r0, 1
	bne      lbl_800B8AA0
	li       r3, 2
	li       r0, 0
	stb      r3, 0x15(r4)
	lfs      f1, lbl_80517040@sda21(r2)
	lwz      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	lfs      f0, lbl_80517044@sda21(r2)
	stb      r0, 0(r3)
	stb      r0, 1(r3)
	stfs     f1, 4(r3)
	stfs     f1, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f0, 0x10(r3)
	stfs     f0, 0x14(r3)
	stw      r0, 0x1c(r3)
	lwz      r0, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	stw      r0, 0x1c(r3)
	lwz      r4, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r31, streamList__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r4, 0x20(r4)
	bl       getSoundOffsetNumberFromID__8JAIBasicFUl
	rlwinm   r0, r3, 1, 0xf, 0x1e
	add      r3, r31, r0
	lhz      r0, 4(r3)
	add      r31, r31, r0
	bl       getParamStreamPath__18JAIGlobalParameterFv
	mr       r4, r3
	addi     r3, r1, 8
	bl       strcpy
	mr       r4, r31
	addi     r3, r1, 8
	bl       strcat
	addi     r3, r1, 8
	bl       playDirect__Q27JAInter9StreamMgrFPc
	bl       initChannel__Q27JAInter9StreamMgrFv
	lwz      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	lbz      r0, 2(r3)
	cmplwi   r0, 0
	beq      lbl_800B8A94
	li       r0, 1
	stb      r0, prepareSw__Q27JAInter9StreamMgr@sda21(r13)

lbl_800B8A94:
	lis      r3, changeCallback__Q27JAInter9StreamMgrFv@ha
	addi     r0, r3, changeCallback__Q27JAInter9StreamMgrFv@l
	stw      r0, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)

lbl_800B8AA0:
	lwz      r0, 0x114(r1)
	lwz      r31, 0x10c(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B8AB4
 * Size:	000070
 */
void JAInter::StreamMgr::systemCallBack(unsigned long, JASAramStream*, void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r3, 0
	stw      r0, 0x14(r1)
	stw      r3, systemStatus__Q27JAInter9StreamMgr@sda21(r13)
	bne      lbl_800B8B04
	lwz      r12, deallocCallback__Q27JAInter9StreamMgr@sda21(r13)
	li       r0, 2
	stb      r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B8AEC
	mtctr    r12
	bctrl
	b        lbl_800B8B14

lbl_800B8AEC:
	lwz      r0, aramParentHeap__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800B8B14
	lwz      r3, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
	bl       free__7JASHeapFv
	b        lbl_800B8B14

lbl_800B8B04:
	cmplwi   r3, 1
	bne      lbl_800B8B14
	li       r0, 1
	stb      r0, prepareFlag__Q27JAInter9StreamMgr@sda21(r13)

lbl_800B8B14:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B8B24
 * Size:	0000C8
 */
void JAInter::StreamMgr::prepareSystem(long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r12, allocCallback__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B8B64
	mtctr    r12
	bctrl
	stw      r4, 0xc(r1)
	mr       r31, r3
	mr       r5, r4
	stw      r3, 8(r1)
	b        lbl_800B8BAC

lbl_800B8B64:
	lwz      r0, aramParentHeap__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800B8B90
	bl       getParamStreamDecodedBufferBlocks__18JAIGlobalParameterFv
	mulli    r5, r3, 0xa
	lwz      r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r4, aramParentHeap__Q27JAInter9StreamMgr@sda21(r13)
	mullw    r0, r0, r5
	srwi     r5, r0, 1
	bl       alloc__7JASHeapFP7JASHeapUl

lbl_800B8B90:
	lwz      r3, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r31, 0x38(r3)
	bl       getParamStreamDecodedBufferBlocks__18JAIGlobalParameterFv
	mulli    r3, r3, 0xa
	lwz      r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	mullw    r0, r0, r3
	srwi     r5, r0, 1

lbl_800B8BAC:
	lis      r4, systemCallBack__Q27JAInter9StreamMgrFUlP13JASAramStreamPv@ha
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	addi     r6, r4, systemCallBack__Q27JAInter9StreamMgrFUlP13JASAramStreamPv@l
	li       r7, 0
	mr       r4, r31
	bl       init__13JASAramStreamFUlUlPFUlP13JASAramStreamPv_vPv
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	mr       r4, r30
	li       r5, -1
	bl       prepare__13JASAramStreamFli
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
 * Address:	800B8BEC
 * Size:	000198
 */
void JAInter::StreamMgr::playDirect(char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lbz      r4, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
	stb      r0, prepareSw__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r4, 0
	stw      r0, mgrCallback__Q27JAInter9StreamMgr@sda21(r13)
	bne      lbl_800B8C58
	lwz      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 4
	beq      lbl_800B8C30
	cmplwi   r0, 3
	bne      lbl_800B8C58

lbl_800B8C30:
	li       r0, 1
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	stb      r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
	bl       cancel__13JASAramStreamFv
	mr       r3, r30
	bl       DVDConvertPathToEntrynum
	li       r0, 1
	stw      r3, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B8D6C

lbl_800B8C58:
	cmplwi   r4, 1
	beq      lbl_800B8C98
	lwz      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 5
	bne      lbl_800B8C98
	li       r0, 1
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	stb      r0, finishFlag__Q27JAInter9StreamMgr@sda21(r13)
	li       r4, 0
	bl       stop__13JASAramStreamFUs
	mr       r3, r30
	bl       DVDConvertPathToEntrynum
	li       r0, 1
	stw      r3, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B8D6C

lbl_800B8C98:
	lwz      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800B8D60
	mr       r3, r30
	bl       DVDConvertPathToEntrynum
	mr       r3, r30
	bl       DVDConvertPathToEntrynum
	lwz      r12, allocCallback__Q27JAInter9StreamMgr@sda21(r13)
	mr       r30, r3
	stw      r3, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800B8CE4
	mtctr    r12
	bctrl
	stw      r4, 0xc(r1)
	mr       r31, r3
	mr       r5, r4
	stw      r3, 8(r1)
	b        lbl_800B8D2C

lbl_800B8CE4:
	lwz      r0, aramParentHeap__Q27JAInter9StreamMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800B8D10
	bl       getParamStreamDecodedBufferBlocks__18JAIGlobalParameterFv
	mulli    r5, r3, 0xa
	lwz      r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r4, aramParentHeap__Q27JAInter9StreamMgr@sda21(r13)
	mullw    r0, r0, r5
	srwi     r5, r0, 1
	bl       alloc__7JASHeapFP7JASHeapUl

lbl_800B8D10:
	lwz      r3, aramBufferHeap__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r31, 0x38(r3)
	bl       getParamStreamDecodedBufferBlocks__18JAIGlobalParameterFv
	mulli    r3, r3, 0xa
	lwz      r0, sChannelMax__Q27JAInter9StreamMgr@sda21(r13)
	mullw    r0, r0, r3
	srwi     r5, r0, 1

lbl_800B8D2C:
	lis      r4, systemCallBack__Q27JAInter9StreamMgrFUlP13JASAramStreamPv@ha
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	addi     r6, r4, systemCallBack__Q27JAInter9StreamMgrFUlP13JASAramStreamPv@l
	li       r7, 0
	mr       r4, r31
	bl       init__13JASAramStreamFUlUlPFUlP13JASAramStreamPv_vPv
	lwz      r3, streamSystem__Q27JAInter9StreamMgr@sda21(r13)
	mr       r4, r30
	li       r5, -1
	bl       prepare__13JASAramStreamFli
	li       r0, 4
	stw      r0, controlStatus__Q27JAInter9StreamMgr@sda21(r13)
	b        lbl_800B8D6C

lbl_800B8D60:
	mr       r3, r30
	bl       DVDConvertPathToEntrynum
	stw      r3, dataFileNumber__Q27JAInter9StreamMgr@sda21(r13)

lbl_800B8D6C:
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
 * Address:	800B8D84
 * Size:	00003C
 */
void JAInter::StreamMgr::stopDirect(void)
{
	if (controlStatus == 5) {
		controlStatus = 6;
	} else if (controlStatus == 3 || controlStatus == 4) {
		controlStatus = 7;
	}
	dataFileNumber = 0;
}

/*
 * --INFO--
 * Address:	800B8DC0
 * Size:	0000EC
 */
void JAInter::StreamMgr::initChannel(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, 0x44(r3)
	lwz      r31, 0(r3)
	cmplwi   r31, 0
	beq      lbl_800B8E90
	bl       OSDisableInterrupts
	li       r29, 0
	mr       r30, r3
	b        lbl_800B8E7C

lbl_800B8DFC:
	clrlwi.  r0, r31, 0x1f
	beq      lbl_800B8E1C
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	mr       r4, r29
	lfs      f1, lbl_80517048@sda21(r2)
	li       r5, 0
	bl       setChannelPan__9JAIStreamFUcfUl
	b        lbl_800B8E58

lbl_800B8E1C:
	rlwinm.  r0, r31, 0, 0x1e, 0x1e
	beq      lbl_800B8E3C
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	mr       r4, r29
	lfs      f1, lbl_80517040@sda21(r2)
	li       r5, 0
	bl       setChannelPan__9JAIStreamFUcfUl
	b        lbl_800B8E58

lbl_800B8E3C:
	clrlwi.  r0, r31, 0x1e
	beq      lbl_800B8E58
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	mr       r4, r29
	lfs      f1, lbl_80517044@sda21(r2)
	li       r5, 0
	bl       setChannelPan__9JAIStreamFUcfUl

lbl_800B8E58:
	rlwinm.  r0, r31, 0, 0x1d, 0x1d
	beq      lbl_800B8E74
	lwz      r3, streamSound__Q27JAInter9StreamMgr@sda21(r13)
	mr       r4, r29
	lfs      f1, lbl_80517048@sda21(r2)
	li       r5, 0
	bl       setChannelVolume__9JAIStreamFUcfUl

lbl_800B8E74:
	srwi     r31, r31, 4
	addi     r29, r29, 1

lbl_800B8E7C:
	clrlwi   r0, r29, 0x18
	cmplwi   r0, 6
	blt      lbl_800B8DFC
	mr       r3, r30
	bl       OSRestoreInterrupts

lbl_800B8E90:
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
 * Address:	800B8EAC
 * Size:	000008
 */
JASAramStream* JAInter::StreamMgr::getStreamObjectPointer() { return streamSystem; }

/*
 * --INFO--
 * Address:	800B8EB4
 * Size:	000008
 */
u32 JAInter::StreamMgr::getSystemStatus() { return systemStatus; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::StreamMgr::setParentHeap(JASHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JAInter::StreamMgr::setAllockCallback(JAInter::StreamMgr::AllocCallback)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::StreamMgr::setDeallockCallback(JAInter::StreamMgr::DeallocCallback)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B8EBC
 * Size:	000008
 */
u32 JAInter::StreamMgr::getDecodedBufferBlocks() { return decodedBufferBlocks; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::StreamMgr::setDecodedBufferBlocks(unsigned long count)
{
	// UNUSED FUNCTION
	decodedBufferBlocks = count;
}

/*
 * --INFO--
 * Address:	800B8EC4
 * Size:	000018
 */
u32 JAInter::StreamMgr::getDecodedBufferSize(unsigned long p1) { return decodedBufferBlocks * p1 * sChannelMax >> 1; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
JAIStream* JAInter::StreamMgr::getStreamSound()
{
	// UNUSED FUNCTION
	return streamSound;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::StreamMgr::setChannelMax(unsigned long max)
{
	// UNUSED FUNCTION
	sChannelMax = max;
}

/*
 * --INFO--
 * Address:	800B8EDC
 * Size:	000008
 */
u32 JAInter::StreamMgr::getChannelMax() { return sChannelMax; }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JAInter::StreamMgr::setExternalAramBuffer(void (*)(JASHeap*))
{
	// UNUSED FUNCTION
}
