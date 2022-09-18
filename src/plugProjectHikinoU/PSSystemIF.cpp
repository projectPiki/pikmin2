#include "types.h"
#include "PSSystem/SysIF.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_PSSystemIF_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048FE28
    lbl_8048FE28:
        .4byte 0x50535379
        .4byte 0x7374656D
        .4byte 0x49462E63
        .4byte 0x70700000
    .global lbl_8048FE38
    lbl_8048FE38:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8048FE44
    lbl_8048FE44:
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
    .global lbl_8048FE50
    lbl_8048FE50:
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28PSSystem12TextDataBase
    __vt__Q28PSSystem12TextDataBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28PSSystem12TextDataBaseFv
        .4byte 0
    .global __vt__Q28PSSystem5SysIF
    __vt__Q28PSSystem5SysIF:
        .4byte 0
        .4byte 0
        .4byte makeSequence__Q28PSSystem5SysIFFv
        .4byte makeSe__Q28PSSystem5SysIFFv
        .4byte makeStream__Q28PSSystem5SysIFFv
        .4byte getMapInfoFxline__8JAIBasicFUl
        .4byte getMapInfoGround__8JAIBasicFUl
        .4byte getMapInfoFxParameter__8JAIBasicFUl
        .4byte setSeExtParameter__8JAIBasicFP8JAISound
        .4byte setRegisterTrackCallback__8JAIBasicFv
        .4byte initIF__Q28PSSystem5SysIFFRCQ28PSSystem8SetupArg
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sDistanceParameterMoveTime__8PSSystem
    sDistanceParameterMoveTime__8PSSystem:
        .4byte 0x05000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global spSysIF__8PSSystem
    spSysIF__8PSSystem:
        .skip 0x4
    .global oRandom__8PSSystem
    oRandom__8PSSystem:
        .skip 0x4
    .global sMakeJAISeCallback__Q28PSSystem5SysIF
    sMakeJAISeCallback__Q28PSSystem5SysIF:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E150
    lbl_8051E150:
        .float 1.0
    .global lbl_8051E154
    lbl_8051E154:
        .4byte 0x3F666666
    .global lbl_8051E158
    lbl_8051E158:
        .4byte 0x4079999A
        .4byte 0x00000000
*/

namespace PSSystem {

/*
 * --INFO--
 * Address:	8033836C
 * Size:	000050
 */
void getObject(JASTrack*, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       readReg16__8JASTrackFUc
	addi     r0, r31, 1
	mr       r31, r3
	mr       r3, r30
	clrlwi   r4, r0, 0x18
	bl       readReg16__8JASTrackFUc
	lwz      r0, 0x14(r1)
	rlwimi   r3, r31, 0x10, 0, 0xf
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803383BC
 * Size:	000060
 */
void setObject(JASTrack*, void*, unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	srwi     r5, r4, 0x10
	stw      r30, 0x18(r1)
	mr       r30, r4
	mr       r4, r31
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       writeRegDirect__8JASTrackFUcUs
	addi     r0, r31, 1
	clrlwi   r5, r30, 0x10
	mr       r3, r29
	clrlwi   r4, r0, 0x18
	bl       writeRegDirect__8JASTrackFUcUs
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
 * Address:	8033841C
 * Size:	000134
 */
SysIF::SysIF(const PSSystem::SetupArg&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__8JAIBasicFv
	lis      r4, __vt__Q28PSSystem5SysIF@ha
	addi     r3, r30, 0x28
	addi     r0, r4, __vt__Q28PSSystem5SysIF@l
	stw      r0, 0(r30)
	bl       OSInitMutex
	li       r0, 0
	addi     r3, r30, 0x44
	stw      r0, 0x40(r30)
	bl       __ct__Q28PSSystem5FxMgrFv
	lwz      r0, 0(r31)
	li       r3, 0
	stw      r3, 0x48(r30)
	cmplwi   r0, 0
	bne      lbl_80338490
	lis      r3, lbl_8048FE28@ha
	lis      r5, lbl_8048FE38@ha
	addi     r3, r3, lbl_8048FE28@l
	li       r4, 0x8d
	addi     r5, r5, lbl_8048FE38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80338490:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_803384B8
	lis      r3, lbl_8048FE28@ha
	lis      r5, lbl_8048FE38@ha
	addi     r3, r3, lbl_8048FE28@l
	li       r4, 0x8e
	addi     r5, r5, lbl_8048FE38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803384B8:
	mr       r3, r30
	li       r4, 2
	bl       setInitFileLoadSwitch__8JAIBasicFUc
	lwz      r3, 0x10(r31)
	bl       setParamInitDataPointer__18JAIGlobalParameterFPv
	li       r3, 1
	bl       setParamStreamInsideBufferCut__18JAIGlobalParameterFb
	lbz      r3, sDistanceParameterMoveTime__8PSSystem@sda21(r13)
	bl       setParamDistanceParameterMoveTime__18JAIGlobalParameterFUc
	bl       createInstance__Q28PSSystem7BankMgrFv
	bl       preInit__Q28PSSystem7BankMgrFv
	lis      r3, start1stSeq__Q28PSSystem5SysIFFv@ha
	addi     r3, r3, start1stSeq__Q28PSSystem5SysIFFv@l
	bl       setSeSequenceStartCallback__Q27JAInter5SeMgrFPFv_v
	lwz      r4, 0(r31)
	mr       r3, r30
	lwz      r5, 4(r31)
	li       r6, 1
	bl       initDriver__8JAIBasicFP12JKRSolidHeapUlUc
	mr       r3, r30
	li       r4, 1
	bl       initInterface__8JAIBasicFUc
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051E150@sda21(r2)
	mr       r3, r30
	stfs     f0, 0x20(r30)
	stfs     f0, 0x24(r30)
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
 * Address:	80338550
 * Size:	0000E0
 */
void SysIF::stopSoundSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8048FE28@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8048FE28@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8033858C
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x10
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033858C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_803385AC
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x10
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803385AC:
	lwz      r30, 4(r30)
	cmplwi   r30, 0
	bne      lbl_803385CC
	addi     r3, r31, 0
	addi     r5, r31, 0x10
	li       r4, 0xb7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803385CC:
	mr       r3, r30
	li       r4, 5
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_80338600

lbl_803385E8:
	lwz      r12, 0(r3)
	li       r4, 5
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r30, 4(r30)

lbl_80338600:
	lwz      r3, 4(r30)
	cmplwi   r3, 0
	bne      lbl_803385E8
	li       r3, 0xa
	li       r4, 1
	bl       stopAudio__8JAIBasicFUlb
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
 * Address:	80338630
 * Size:	000040
 */
void SysIF::playSystemSe(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r7, r5
	mr       r5, r4
	stw      r0, 0x14(r1)
	li       r0, 0
	addi     r4, r1, 8
	li       r6, 0
	stw      r0, 8(r1)
	li       r8, 4
	bl
	"startSoundActorReturnHandleT<5JAISe>__8JAIBasicFPP5JAISeUlPQ27JAInter5ActorUlUc"
	lwz      r0, 0x14(r1)
	lwz      r3, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338670
 * Size:	00002C
 */
void SysIF::playSystemSe(unsigned long, JAISound**, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r7, r6
	li       r6, 0
	stw      r0, 0x14(r1)
	li       r8, 4
	bl
	"startSoundActorT<8JAISound>__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUc"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033869C
 * Size:	000078
 */
void SysIF::initIF(const PSSystem::SetupArg&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	bl       initHeap__8JAIBasicFv
	lis      r3, requestCallback__Q28PSSystem7SeqHeapFUlUsP11JAISequence@ha
	addi     r3, r3, requestCallback__Q28PSSystem7SeqHeapFUlUsP11JAISequence@l
	bl
setCustomHeapCallback__Q27JAInter11SequenceMgrFPFUlUsP11JAISequence_Q37JAInter11SequenceMgr14CustomHeapInfo
	lfs      f1, lbl_8051E154@sda21(r2)
	lfs      f3, lbl_8051E158@sda21(r2)
	fmr      f2, f1
	bl       setLevel__9JASDriverFfff
	lwz      r3, 0xc(r31)
	bl       registerSeqCallback__8JASTrackFPFP8JASTrackUs_Us
	lwz      r0, sInstance__Q28PSSystem11BankRandPrm@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80338700
	li       r3, 0x10
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803386FC
	bl       __ct__Q28PSSystem11BankRandPrmFv
	mr       r0, r3

lbl_803386FC:
	stw      r0, sInstance__Q28PSSystem11BankRandPrm@sda21(r13)

lbl_80338700:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338714
 * Size:	000038
 */
void SysIF::makeSe()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, sMakeJAISeCallback__Q28PSSystem5SysIF@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_80338738
	mtctr    r12
	bctrl
	b        lbl_8033873C

lbl_80338738:
	bl       makeSe__8JAIBasicFv

lbl_8033873C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033874C
 * Size:	0000DC
 */
void SysIF::mainLoop()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x40(r3)
	cmpwi    r0, 1
	bne      lbl_8033880C
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8033879C
	lis      r3, lbl_8048FE44@ha
	lis      r5, lbl_8048FE38@ha
	addi     r3, r3, lbl_8048FE44@l
	li       r4, 0x1d3
	addi     r5, r5, lbl_8048FE38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033879C:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi   r0,
0 bne      lbl_803387D8 lis      r3, lbl_8048FE44@ha lis      r5,
lbl_8048FE38@ha addi     r3, r3, lbl_8048FE44@l li       r4, 0x237 addi     r5,
r5, lbl_8048FE38@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_803387D8:
	lwz      r30,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) li r31, 0 b
lbl_803387F8

lbl_803387E4:
	rlwinm   r3, r31, 2, 0x16, 0x1d
	addi     r0, r3, 4
	lwzx     r3, r30, r0
	bl       exec__Q26PSGame5SetSeFv
	addi     r31, r31, 1

lbl_803387F8:
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 8
	blt      lbl_803387E4
	mr       r3, r29
	bl       processFrameWork__8JAIBasicFv

lbl_8033880C:
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
 * Address:	80338828
 * Size:	00008C
 */
void SysIF::setConfigVol_Se(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stfd     f31, 8(r1)
	fmr      f31, f1
	stfs     f31, 0x20(r3)
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803388A0
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_803388A0
	addi     r3, r3, 0x10
	bl       getFirstSeq__Q28PSSystem6SeqMgrFv
	cmplwi   r3, 0
	beq      lbl_803388A0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_803388A0
	lwz      r12, 0x10(r3)
	fmr      f1, f31
	li       r4, 3
	li       r5, 8
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803388A0:
	lwz      r0, 0x14(r1)
	lfd      f31, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803388B4
 * Size:	0000C8
 */
void SysIF::setConfigVol_Bgm(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	stfs     f31, 0x24(r3)
	lwz      r31, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r31, 0
	beq      lbl_80338964
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_80338904
	lis      r3, lbl_8048FE50@ha
	lis      r5, lbl_8048FE38@ha
	addi     r3, r3, lbl_8048FE50@l
	li       r4, 0xc7
	addi     r5, r5, lbl_8048FE38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80338904:
	lwz      r3, 4(r31)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_80338964
	lwz      r31, 0x10(r3)
	b        lbl_8033895C

lbl_8033891C:
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80338958
	lwz      r12, 0x10(r3)
	fmr      f1, f31
	li       r4, 3
	li       r5, 8
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80338958:
	lwz      r31, 0xc(r31)

lbl_8033895C:
	cmplwi   r31, 0
	bne      lbl_8033891C

lbl_80338964:
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033897C
 * Size:	000004
 */
FxMgr::FxMgr() { }

/*
 * --INFO--
 * Address:	80338980
 * Size:	000044
 */
TextDataBase::TextDataBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q28PSSystem12TextDataBase@ha
	li       r0, 0
	addi     r4, r3, __vt__Q28PSSystem12TextDataBase@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x18(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803389C4
 * Size:	000070
 */
TextDataBase::~TextDataBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80338A18
	lis      r3, __vt__Q28PSSystem12TextDataBase@ha
	li       r4, 0
	addi     r0, r3, __vt__Q28PSSystem12TextDataBase@l
	stw      r0, 0(r30)
	lwz      r3, 0x18(r30)
	bl       free__7JKRHeapFPvP7JKRHeap
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_80338A18
	mr       r3, r30
	bl       __dl__FPv

lbl_80338A18:
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
 * Address:	80338A34
 * Size:	00007C
 */
void TextDataBase::load(const char*, JKRDvdRipper::EAllocDirection)
{
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	stw      r0, 0x434(r1)
	stw      r31, 0x42c(r1)
	mr       r31, r3
	bl onlyLoad__Q28PSSystem12TextDataBaseFPCcQ212JKRDvdRipper15EAllocDirection
	lwz      r4, 0x18(r31)
	cmplwi   r4, 0
	beq      lbl_80338A98
	addi     r3, r1, 8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x14(r1)
	bne      lbl_80338A7C
	li       r0, 0
	stw      r0, 0x41c(r1)

lbl_80338A7C:
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_80338A9C

lbl_80338A98:
	li       r3, 0

lbl_80338A9C:
	lwz      r0, 0x434(r1)
	lwz      r31, 0x42c(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338AB0
 * Size:	000068
 */
void TextDataBase::onlyLoad(const char*, JKRDvdRipper::EAllocDirection)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r8, r5
	li       r5, 0
	stw      r0, 0x24(r1)
	li       r0, 0
	li       r6, 0
	li       r7, 0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	mr       r3, r4
	li       r4, 0
	stw      r0, 8(r1)
	li       r9, 0
	li       r10, 0
	bl
	loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	stw      r3, 0x18(r31)
	lwz      r3, 0x18(r31)
	lwz      r31, 0x1c(r1)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338B18
 * Size:	00000C
 */
void SysIF::start1stSeq()
{
	/*
	li       r0, 0
	stw      r0, seHandle__Q27JAInter5SeMgr@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338B24
 * Size:	000070
 */
void SysIF::makeSequence()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 8(r3)
	cmplwi   r4, 0
	beq      lbl_80338B60
	li       r3, 0x6a8
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_80338B58
	bl       __ct__Q28PSSystem8SeqSoundFv
	mr       r0, r3

lbl_80338B58:
	mr       r3, r0
	b        lbl_80338B84

lbl_80338B60:
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0x6a8
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_80338B80
	bl       __ct__Q28PSSystem8SeqSoundFv
	mr       r0, r3

lbl_80338B80:
	mr       r3, r0

lbl_80338B84:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338B94
 * Size:	000058
 */
SeqSound::SeqSound()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__11JAISequenceFv
	lis      r4, __vt__Q28PSSystem12SeqSoundBase@ha
	lis      r3, __vt__Q28PSSystem8SeqSound@ha
	addi     r0, r4, __vt__Q28PSSystem12SeqSoundBase@l
	li       r5, 0
	stw      r0, 0x6a0(r31)
	addi     r4, r3, __vt__Q28PSSystem8SeqSound@l
	addi     r0, r4, 0xd4
	mr       r3, r31
	stw      r5, 0x6a4(r31)
	stw      r4, 0x10(r31)
	stw      r0, 0x6a0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338BEC
 * Size:	000070
 */
void SysIF::makeStream()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 8(r3)
	cmplwi   r4, 0
	beq      lbl_80338C28
	li       r3, 0x1e0
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_80338C20
	bl       __ct__Q28PSSystem11StreamSoundFv
	mr       r0, r3

lbl_80338C20:
	mr       r3, r0
	b        lbl_80338C4C

lbl_80338C28:
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0x1e0
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_80338C48
	bl       __ct__Q28PSSystem11StreamSoundFv
	mr       r0, r3

lbl_80338C48:
	mr       r3, r0

lbl_80338C4C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338C5C
 * Size:	000058
 */
StreamSound::StreamSound()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__9JAIStreamFv
	lis      r4, __vt__Q28PSSystem12SeqSoundBase@ha
	lis      r3, __vt__Q28PSSystem11StreamSound@ha
	addi     r0, r4, __vt__Q28PSSystem12SeqSoundBase@l
	li       r5, 0
	stw      r0, 0x1d8(r31)
	addi     r4, r3, __vt__Q28PSSystem11StreamSound@l
	addi     r0, r4, 0xd4
	mr       r3, r31
	stw      r5, 0x1dc(r31)
	stw      r4, 0x10(r31)
	stw      r0, 0x1d8(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace PSSystem

/*
 * --INFO--
 * Address:	80338CB4
 * Size:	000070
 */
void JAIBasic::startSoundActorReturnHandleT<JAISe>(JAISe**, unsigned long, JAInter::Actor*, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r9, 0
	  stw       r0, 0x24(r1)
	  rlwinm.   r0,r5,0,0,1
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r9, 0x8(r1)
	  bne-      .loc_0x2C
	  li        r0, 0x1
	  stw       r0, 0x8(r1)

	.loc_0x2C:
	  mr        r4, r5
	  addi      r5, r1, 0x8
	  bl        .loc_0x70
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x0(r31)
	  lwz       r3, 0x8(r1)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x70:
	*/
}

/*
 * --INFO--
 * Address:	80338D24
 * Size:	000068
 */
void JAIBasic::startSoundActorT<JAISe>(unsigned long, JAISe**, JAInter::Actor*, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r4
	  mr        r26, r3
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  mr        r31, r8
	  mr        r3, r27
	  bl        -0x281838
	  mr.       r9, r3
	  beq-      .loc_0x54
	  mr        r3, r26
	  mr        r4, r27
	  mr        r5, r28
	  mr        r6, r29
	  mr        r7, r30
	  mr        r8, r31
	  bl        -0x28C510

	.loc_0x54:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80338D8C
 * Size:	000028
 */
void __sinit_PSSystemIF_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r13, oRandom__8PSSystem@sda21
	li       r4, 0
	stw      r0, 0x14(r1)
	bl       __ct__Q25JMath13TRandom_fast_FUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
