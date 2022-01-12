#include "og/newScreen/TitleMsg.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen13TitleMsgClash
    __vt__Q32og9newScreen13TitleMsgClash:
        .4byte 0
        .4byte 0
        .4byte init__Q32og9newScreen13TitleMsgClashFv
        .4byte update__Q32og9newScreen13TitleMsgClashFv
        .4byte start__Q32og9newScreen8TitleMsgFv
        .4byte end__Q32og9newScreen13TitleMsgClashFv
    .global __vt__Q25efx2d11T2DCvnameVs
    __vt__Q25efx2d11T2DCvnameVs:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d9TForeverNFPQ25efx2d3Arg
        .4byte kill__Q25efx2d9TForeverNFv
        .4byte fade__Q25efx2d9TForeverNFv
        .4byte setGroup__Q25efx2d9TForeverNFUc
    .global __vt__Q25efx2d9TForever2
    __vt__Q25efx2d9TForever2:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d9TForeverNFPQ25efx2d3Arg
        .4byte kill__Q25efx2d9TForeverNFv
        .4byte fade__Q25efx2d9TForeverNFv
        .4byte setGroup__Q25efx2d9TForeverNFUc
    .global __vt__Q32og9newScreen12TitleMsgWave
    __vt__Q32og9newScreen12TitleMsgWave:
        .4byte 0
        .4byte 0
        .4byte init__Q32og9newScreen12TitleMsgWaveFv
        .4byte update__Q32og9newScreen12TitleMsgWaveFv
        .4byte start__Q32og9newScreen12TitleMsgWaveFv
        .4byte end__Q32og9newScreen12TitleMsgWaveFv
        .4byte setParam__Q32og9newScreen12TitleMsgWaveFffff
    .global __vt__Q25efx2d13T2DCvnameChal
    __vt__Q25efx2d13T2DCvnameChal:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TForeverFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q25efx2d13T2DCvnameChalFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q25efx2d13T2DCvnameChalFv
    .global __vt__Q32og9newScreen12TitleMsgDrop
    __vt__Q32og9newScreen12TitleMsgDrop:
        .4byte 0
        .4byte 0
        .4byte init__Q32og9newScreen12TitleMsgDropFv
        .4byte update__Q32og9newScreen12TitleMsgDropFv
        .4byte start__Q32og9newScreen8TitleMsgFv
        .4byte end__Q32og9newScreen12TitleMsgDropFv
    .global __vt__Q25efx2d13T2DCvnameCave
    __vt__Q25efx2d13T2DCvnameCave:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d9TForeverNFPQ25efx2d3Arg
        .4byte kill__Q25efx2d9TForeverNFv
        .4byte fade__Q25efx2d9TForeverNFv
        .4byte setGroup__Q25efx2d9TForeverNFUc
    .global __vt__Q25efx2d9TForever3
    __vt__Q25efx2d9TForever3:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d9TForeverNFPQ25efx2d3Arg
        .4byte kill__Q25efx2d9TForeverNFv
        .4byte fade__Q25efx2d9TForeverNFv
        .4byte setGroup__Q25efx2d9TForeverNFUc
    .global __vt__Q32og9newScreen8TitleMsg
    __vt__Q32og9newScreen8TitleMsg:
        .4byte 0
        .4byte 0
        .4byte init__Q32og9newScreen8TitleMsgFv
        .4byte update__Q32og9newScreen8TitleMsgFv
        .4byte start__Q32og9newScreen8TitleMsgFv
        .4byte end__Q32og9newScreen8TitleMsgFv
    .global __vt__Q32og9newScreen20TitleMessageAnalyzer
    __vt__Q32og9newScreen20TitleMessageAnalyzer:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen20TitleMessageAnalyzerFv
        .4byte do_reset__Q28JMessage10TProcessorFv
        .4byte do_character__Q32og9newScreen20TitleMessageAnalyzerFi
        .4byte do_tag__Q25P2JME23TRenderingProcessorBaseFUlPCvUl
        .4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
        .4byte do_select_begin__Q28JMessage10TProcessorFUl
        .4byte do_select_end__Q28JMessage10TProcessorFv
        .4byte do_select_separate__Q28JMessage10TProcessorFv
        .4byte do_reset___Q28JMessage19TRenderingProcessorFPCc
        .4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
        .4byte do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
        .4byte do_end___Q28JMessage19TRenderingProcessorFv
        .4byte do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
        .4byte do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
        .4byte do_begin__Q28JMessage19TRenderingProcessorFPCvPCc
        .4byte do_end__Q28JMessage19TRenderingProcessorFv
        .4byte tagColor__Q25P2JME8AnalyzerFPCvUl
        .4byte tagSize__Q25P2JME8AnalyzerFPCvUl
        .4byte tagRuby__Q25P2JME8AnalyzerFPCvUl
        .4byte tagFont__Q25P2JME8AnalyzerFPCvUl
        .4byte tagImage__Q25P2JME8AnalyzerFUsPCvUl
        .4byte tagColorEX__Q25P2JME8AnalyzerFUsPCvUl
        .4byte tagControl__Q25P2JME8AnalyzerFUsPCvUl
        .4byte tagPosition__Q25P2JME8AnalyzerFUsPCvUl
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global sFrame$4053
    sFrame$4053:
        .skip 0x4
    .global init$4054
    init$4054:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E008
    lbl_8051E008:
        .4byte 0x00000000
    .global lbl_8051E00C
    lbl_8051E00C:
        .float 1.0
    .global lbl_8051E010
    lbl_8051E010:
        .4byte 0xC1200000
    .global lbl_8051E014
    lbl_8051E014:
        .float 0.5
    .global lbl_8051E018
    lbl_8051E018:
        .4byte 0x40400000
    .global lbl_8051E01C
    lbl_8051E01C:
        .4byte 0x42C80000
    .global lbl_8051E020
    lbl_8051E020:
        .4byte 0x47000000
    .global lbl_8051E024
    lbl_8051E024:
        .4byte 0x40A00000
    .global lbl_8051E028
    lbl_8051E028:
        .4byte 0x43480000
        .4byte 0x00000000
    .global lbl_8051E030
    lbl_8051E030:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051E038
    lbl_8051E038:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051E040
    lbl_8051E040:
        .4byte 0xBE99999A
    .global lbl_8051E044
    lbl_8051E044:
        .4byte 0x3DF5C28F
    .global lbl_8051E048
    lbl_8051E048:
        .4byte 0x40E00000
    .global lbl_8051E04C
    lbl_8051E04C:
        .4byte 0x3FC00000
    .global lbl_8051E050
    lbl_8051E050:
        .4byte 0x3D8F5C29
    .global lbl_8051E054
    lbl_8051E054:
        .4byte 0x3E4CCCCD
    .global lbl_8051E058
    lbl_8051E058:
        .4byte 0x40C90FDB
    .global lbl_8051E05C
    lbl_8051E05C:
        .4byte 0x3E000000
    .global lbl_8051E060
    lbl_8051E060:
        .float 0.25
    .global lbl_8051E064
    lbl_8051E064:
        .float 0.1
    .global lbl_8051E068
    lbl_8051E068:
        .4byte 0x42480000
    .global lbl_8051E06C
    lbl_8051E06C:
        .4byte 0x3ECCCCCD

    .section .sbss2, "", @nobits # 0x80520e40 - 0x80520ED8
    .global lbl_80520EB8
    lbl_80520EB8:
        .skip 0x2
    .global lbl_80520EBA
    lbl_80520EBA:
        .skip 0x6
*/

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
TitleMessageAnalyzer::TitleMessageAnalyzer(void)
{
	// UNUSED FUNCTION
}

namespace P2JME {

/*
 * --INFO--
 * Address:	8032EA58
 * Size:	000070
 */
Analyzer::~Analyzer(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_8032EAAC
lis      r4, __vt__Q25P2JME8Analyzer@ha
addi     r0, r4, __vt__Q25P2JME8Analyzer@l
stw      r0, 0(r30)
beq      lbl_8032EA9C
lis      r5, __vt__Q25P2JME23TRenderingProcessorBase@ha
li       r4, 0
addi     r0, r5, __vt__Q25P2JME23TRenderingProcessorBase@l
stw      r0, 0(r30)
bl       __dt__Q28JMessage19TRenderingProcessorFv

lbl_8032EA9C:
extsh.   r0, r31
ble      lbl_8032EAAC
mr       r3, r30
bl       __dl__FPv

lbl_8032EAAC:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

} // namespace P2JME

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void TitleMessageAnalyzer::set2ByteString(char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032EAC8
 * Size:	000228
 */
void TitleMessageAnalyzer::do_character(int)
{
	/*
	stwu     r1, -0x10(r1)
	cmpwi    r4, 0
	clrlwi   r6, r4, 0x18
	li       r7, 0
	lhz      r5, lbl_80520EB8@sda21(r2)
	lbz      r0, lbl_80520EBA@sda21(r2)
	sth      r5, 8(r1)
	stb      r0, 0xa(r1)
	bne      lbl_8032EB00
	lwz      r0, 0x38(r3)
	li       r5, 0
	add      r4, r3, r0
	stb      r5, 0x3c(r4)
	b        lbl_8032EC70

lbl_8032EB00:
	rlwinm.  r0, r4, 0, 0x10, 0x17
	beq      lbl_8032EB24
	srawi    r4, r0, 8
	li       r0, 0
	stb      r4, 8(r1)
	li       r7, 1
	stb      r6, 9(r1)
	stb      r0, 0xa(r1)
	b        lbl_8032EC70

lbl_8032EB24:
	cmpwi    r6, 0x41
	blt      lbl_8032EB58
	cmpwi    r6, 0x5a
	bgt      lbl_8032EB58
	addis    r4, r4, 1
	li       r0, 0
	addi     r4, r4, -32225
	stb      r0, 0xa(r1)
	rlwinm   r0, r4, 0x18, 0x18, 0x1f
	li       r7, 1
	stb      r0, 8(r1)
	stb      r4, 9(r1)
	b        lbl_8032EC70

lbl_8032EB58:
	cmpwi    r6, 0x61
	blt      lbl_8032EB8C
	cmpwi    r6, 0x7a
	bgt      lbl_8032EB8C
	addis    r4, r4, 1
	li       r0, 0
	addi     r4, r4, -32224
	stb      r0, 0xa(r1)
	rlwinm   r0, r4, 0x18, 0x18, 0x1f
	li       r7, 1
	stb      r0, 8(r1)
	stb      r4, 9(r1)
	b        lbl_8032EC70

lbl_8032EB8C:
	cmplwi   r6, 0xbf
	blt      lbl_8032EBC0
	cmplwi   r6, 0xff
	bgt      lbl_8032EBC0
	addis    r4, r4, 1
	li       r0, 0
	addi     r4, r4, -447
	stb      r0, 0xa(r1)
	rlwinm   r0, r4, 0x18, 0x18, 0x1f
	li       r7, 1
	stb      r0, 8(r1)
	stb      r4, 9(r1)
	b        lbl_8032EC70

lbl_8032EBC0:
	cmpwi    r6, 0x20
	bne      lbl_8032EBE8
	li       r5, -127
	li       r4, 0x40
	li       r0, 0
	stb      r5, 8(r1)
	li       r7, 1
	stb      r4, 9(r1)
	stb      r0, 0xa(r1)
	b        lbl_8032EC70

lbl_8032EBE8:
	cmpwi    r6, 0x21
	bne      lbl_8032EC10
	li       r5, -127
	li       r4, 0x49
	li       r0, 0
	stb      r5, 8(r1)
	li       r7, 1
	stb      r4, 9(r1)
	stb      r0, 0xa(r1)
	b        lbl_8032EC70

lbl_8032EC10:
	cmpwi    r6, 0x3f
	bne      lbl_8032EC38
	li       r5, -127
	li       r4, 0x48
	li       r0, 0
	stb      r5, 8(r1)
	li       r7, 1
	stb      r4, 9(r1)
	stb      r0, 0xa(r1)
	b        lbl_8032EC70

lbl_8032EC38:
	addi     r0, r6, -38
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 1
	ble      lbl_8032EC50
	cmplwi   r6, 0x2d
	bne      lbl_8032EC70

lbl_8032EC50:
	addis    r4, r6, 1
	li       r0, 0
	addi     r4, r4, -256
	stb      r0, 0xa(r1)
	rlwinm   r0, r4, 0x18, 0x18, 0x1f
	li       r7, 1
	stb      r0, 8(r1)
	stb      r4, 9(r1)

lbl_8032EC70:
	clrlwi.  r0, r7, 0x18
	beq      lbl_8032ECE8
	lwz      r0, 0x38(r3)
	lbz      r5, 8(r1)
	add      r4, r3, r0
	stb      r5, 0x3c(r4)
	lwz      r4, 0x38(r3)
	addi     r0, r4, 1
	stw      r0, 0x38(r3)
	lwz      r0, 0x38(r3)
	cmpwi    r0, 0xfe
	blt      lbl_8032ECA8
	li       r0, 0xfe
	stw      r0, 0x38(r3)

lbl_8032ECA8:
	lwz      r0, 0x38(r3)
	lbz      r5, 9(r1)
	add      r4, r3, r0
	stb      r5, 0x3c(r4)
	lwz      r4, 0x38(r3)
	addi     r0, r4, 1
	stw      r0, 0x38(r3)
	lwz      r0, 0x38(r3)
	cmpwi    r0, 0xfe
	blt      lbl_8032ECD8
	li       r0, 0xfe
	stw      r0, 0x38(r3)

lbl_8032ECD8:
	lwz      r0, 0x38(r3)
	li       r4, 0
	add      r3, r3, r0
	stb      r4, 0x3c(r3)

lbl_8032ECE8:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032ECF0
 * Size:	00028C
 */
TitleMsg::TitleMsg(J2DScreen*, J2DPane*, char*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r7, __vt__Q32og9newScreen8TitleMsg@ha
	stw      r0, 0x34(r1)
	addi     r0, r7, __vt__Q32og9newScreen8TitleMsg@l
	stmw     r26, 0x18(r1)
	mr       r30, r3
	mr       r31, r4
	mr       r27, r5
	addi     r28, r30, 4
	mr       r26, r6
	stw      r0, 0(r3)
	mr       r3, r28
	lwz      r4, gLib2D__2og@sda21(r13)
	lwz      r4, 0x18(r4)
	lwz      r4, 0(r4)
	lwz      r4, 4(r4)
	bl       __ct__Q25P2JME8AnalyzerFPCQ28JMessage10TReference
	lis      r4, __vt__Q32og9newScreen20TitleMessageAnalyzer@ha
	li       r3, 0
	addi     r4, r4, __vt__Q32og9newScreen20TitleMessageAnalyzer@l
	li       r0, 8
	stw      r4, 0(r28)
	mr       r4, r3
	stw      r3, 0x38(r28)
	mtctr    r0

lbl_8032ED58:
	addi     r5, r4, 0x3c
	add      r5, r28, r5
	stb      r3, 0(r5)
	stb      r3, 1(r5)
	stb      r3, 2(r5)
	stb      r3, 3(r5)
	stb      r3, 4(r5)
	stb      r3, 5(r5)
	stb      r3, 6(r5)
	stb      r3, 7(r5)
	addi     r5, r4, 0x44
	add      r5, r28, r5
	stb      r3, 0(r5)
	stb      r3, 1(r5)
	stb      r3, 2(r5)
	stb      r3, 3(r5)
	stb      r3, 4(r5)
	stb      r3, 5(r5)
	stb      r3, 6(r5)
	stb      r3, 7(r5)
	addi     r5, r4, 0x4c
	add      r5, r28, r5
	stb      r3, 0(r5)
	stb      r3, 1(r5)
	stb      r3, 2(r5)
	stb      r3, 3(r5)
	stb      r3, 4(r5)
	stb      r3, 5(r5)
	stb      r3, 6(r5)
	stb      r3, 7(r5)
	addi     r5, r4, 0x54
	add      r5, r28, r5
	addi     r4, r4, 0x20
	stb      r3, 0(r5)
	stb      r3, 1(r5)
	stb      r3, 2(r5)
	stb      r3, 3(r5)
	stb      r3, 4(r5)
	stb      r3, 5(r5)
	stb      r3, 6(r5)
	stb      r3, 7(r5)
	bdnz     lbl_8032ED58
	li       r0, -1
	mr       r4, r26
	stw      r0, 0x550(r30)
	addi     r3, r30, 4
	stw      r0, 0x554(r30)
	stw      r0, 0x558(r30)
	bl       exec__Q25P2JME8AnalyzerFPc
	addi     r29, r30, 0x40
	stw      r27, 0x54c(r30)
	mr       r3, r29
	bl       strlen
	srwi     r0, r3, 1
	lfs      f0, lbl_8051E008@sda21(r2)
	stw      r0, 0x540(r30)
	li       r3, 0
	li       r0, 0xff
	li       r28, 0
	stfs     f0, 0x544(r30)
	stb      r3, 0x550(r30)
	stb      r3, 0x551(r30)
	stb      r3, 0x552(r30)
	stb      r0, 0x553(r30)
	stb      r0, 0x554(r30)
	stb      r0, 0x555(r30)
	stb      r3, 0x556(r30)
	stb      r0, 0x557(r30)
	stb      r0, 0x558(r30)
	stb      r3, 0x559(r30)
	stb      r3, 0x55a(r30)
	stb      r3, 0x55b(r30)
	b        lbl_8032EF04

lbl_8032EE7C:
	mr       r3, r29
	bl       CharCodeToTag__Q22og6ScreenFPc
	mr       r26, r4
	addi     r5, r1, 8
	mr       r27, r3
	bl       TagToName__Q22og6ScreenFUxPc
	mr       r3, r31
	mr       r6, r26
	lwz      r12, 0(r31)
	mr       r5, r27
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r4, r3, r3
	beq      lbl_8032EEC8
	mr       r3, r30
	mr       r5, r28
	bl       setFontPane__Q32og9newScreen8TitleMsgFP12J2DPictureExi
	b        lbl_8032EEFC

lbl_8032EEC8:
	mr       r3, r31
	lis      r4, 0x00657272@ha
	lwz      r12, 0(r31)
	addi     r6, r4, 0x00657272@l
	li       r5, 0
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r4, r3, r3
	beq      lbl_8032EEFC
	mr       r3, r30
	mr       r5, r28
	bl       setFontPane__Q32og9newScreen8TitleMsgFP12J2DPictureExi

lbl_8032EEFC:
	addi     r29, r29, 2
	addi     r28, r28, 1

lbl_8032EF04:
	lwz      r0, 0x540(r30)
	cmplw    r28, r0
	blt      lbl_8032EE7C
	mr       r3, r30
	li       r4, 0
	bl
setCentering__Q32og9newScreen8TitleMsgFQ42og9newScreen8TitleMsg13EnumCentering
	li       r5, 0
	lfs      f0, lbl_8051E008@sda21(r2)
	mr       r4, r5
	li       r6, 0
	b        lbl_8032EF48

lbl_8032EF30:
	addi     r3, r6, 0x55c
	addi     r0, r5, 0x5dc
	stbx     r4, r30, r3
	addi     r5, r5, 4
	addi     r6, r6, 1
	stfsx    f0, r30, r0

lbl_8032EF48:
	lwz      r0, 0x540(r30)
	cmplw    r6, r0
	blt      lbl_8032EF30
	lfs      f1, lbl_8051E008@sda21(r2)
	mr       r3, r30
	lfs      f0, lbl_8051E00C@sda21(r2)
	stfs     f1, 0x7dc(r30)
	stfs     f0, 0x7e0(r30)
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032EF7C
 * Size:	000080
 */
TitleMessageAnalyzer::~TitleMessageAnalyzer(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8032EFE0
	lis      r4, __vt__Q32og9newScreen20TitleMessageAnalyzer@ha
	addi     r0, r4, __vt__Q32og9newScreen20TitleMessageAnalyzer@l
	stw      r0, 0(r30)
	beq      lbl_8032EFD0
	lis      r4, __vt__Q25P2JME8Analyzer@ha
	addi     r0, r4, __vt__Q25P2JME8Analyzer@l
	stw      r0, 0(r30)
	beq      lbl_8032EFD0
	lis      r5, __vt__Q25P2JME23TRenderingProcessorBase@ha
	li       r4, 0
	addi     r0, r5, __vt__Q25P2JME23TRenderingProcessorBase@l
	stw      r0, 0(r30)
	bl       __dt__Q28JMessage19TRenderingProcessorFv

lbl_8032EFD0:
	extsh.   r0, r31
	ble      lbl_8032EFE0
	mr       r3, r30
	bl       __dl__FPv

lbl_8032EFE0:
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
 * Address:	8032EFFC
 * Size:	000154
 */
void TitleMsg::setFontPane(J2DPictureEx*, int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, 0x74303030@ha
	lfs      f2, lbl_8051E010@sda21(r2)
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r26, r5
	mr       r30, r3
	lis      r5, 0x74466F6E@ha
	mr       r31, r4
	srawi    r28, r26, 0x1f
	addi     r3, r6, 0x74303030@l
	addi     r0, r5, 0x74466F6E@l
	addc     r6, r26, r3
	adde     r5, r28, r0
	mr       r3, r31
	lwz      r4, 0x54c(r30)
	lfs      f1, 0x544(r30)
	bl       CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
	slwi     r27, r26, 2
	li       r4, 7
	add      r29, r30, r27
	stw      r3, 0x140(r29)
	lwz      r3, 0x140(r29)
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r0, 0x550(r30)
	addi     r4, r1, 0x10
	stw      r0, 0x10(r1)
	lwz      r3, 0x140(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x28(r31)
	lis      r3, 0x79303030@ha
	lfs      f2, 0x20(r31)
	addi     r0, r3, 0x79303030@l
	lfs      f1, 0x2c(r31)
	lis      r3, 0x74426F64@ha
	fsubs    f4, f3, f2
	lfs      f0, 0x24(r31)
	lfs      f3, lbl_8051E014@sda21(r2)
	addc     r6, r26, r0
	fsubs    f0, f1, f0
	lfs      f2, lbl_8051E018@sda21(r2)
	addi     r0, r3, 0x74426F64@l
	fmsubs   f1, f4, f3, f2
	fmsubs   f2, f0, f3, f2
	lwz      r4, 0x140(r29)
	adde     r5, r28, r0
	mr       r3, r31
	bl       CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
	add      r27, r30, r27
	li       r4, 7
	stw      r3, 0x340(r27)
	lwz      r3, 0x340(r27)
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r0, 0x554(r30)
	addi     r4, r1, 0xc
	stw      r0, 0xc(r1)
	lwz      r3, 0x340(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x558(r30)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lwz      r3, 0x340(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x128(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x140(r29)
	lfs      f2, 0x544(r30)
	lfs      f1, 0x28(r3)
	lfs      f0, 0x20(r3)
	fsubs    f0, f1, f0
	fadds    f0, f2, f0
	stfs     f0, 0x544(r30)
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032F150
 * Size:	000164
 */
void TitleMsg::setCentering(og::newScreen::TitleMsg::EnumCentering)
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
	stfd     f28, 0x20(r1)
	psq_st   f28, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lfs      f29, lbl_8051E00C@sda21(r2)
	stw      r4, 0x548(r3)
	lwz      r3, 0x54c(r3)
	lfs      f2, 0x544(r29)
	lfs      f1, 0x28(r3)
	lfs      f0, 0x20(r3)
	fsubs    f0, f1, f0
	fcmpo    cr0, f2, f0
	ble      lbl_8032F1B4
	fdivs    f29, f0, f2

lbl_8032F1B4:
	lwz      r0, 0x548(r29)
	cmpwi    r0, 1
	beq      lbl_8032F1E4
	bge      lbl_8032F1D0
	cmpwi    r0, 0
	bge      lbl_8032F1DC
	b        lbl_8032F1FC

lbl_8032F1D0:
	cmpwi    r0, 3
	bge      lbl_8032F1FC
	b        lbl_8032F1EC

lbl_8032F1DC:
	lfs      f30, lbl_8051E008@sda21(r2)
	b        lbl_8032F200

lbl_8032F1E4:
	fnmsubs  f30, f2, f29, f0
	b        lbl_8032F200

lbl_8032F1EC:
	fnmsubs  f1, f2, f29, f0
	lfs      f0, lbl_8051E014@sda21(r2)
	fmuls    f30, f1, f0
	b        lbl_8032F200

lbl_8032F1FC:
	lfs      f30, lbl_8051E008@sda21(r2)

lbl_8032F200:
	lfs      f28, lbl_8051E008@sda21(r2)
	mr       r31, r29
	lfs      f31, lbl_8051E00C@sda21(r2)
	li       r30, 0
	b        lbl_8032F268

lbl_8032F214:
	lwz      r3, 0x140(r31)
	fmadds   f1, f28, f29, f30
	lfs      f2, lbl_8051E008@sda21(r2)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x140(r31)
	stfs     f29, 0xcc(r3)
	stfs     f31, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x140(r31)
	addi     r31, r31, 4
	addi     r30, r30, 1
	lfs      f1, 0x28(r3)
	lfs      f0, 0x20(r3)
	fsubs    f0, f1, f0
	fadds    f28, f28, f0

lbl_8032F268:
	lwz      r0, 0x540(r29)
	cmplw    r30, r0
	blt      lbl_8032F214
	stfs     f29, 0x7e0(r29)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	psq_l    f28, 40(r1), 0, qr0
	lfd      f28, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x64(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TitleMsg::drawMsgArea(J2DGrafContext&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032F2B4
 * Size:	0000D0
 */
void TitleMsg::setColor(JUtility::TColor&, JUtility::TColor&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	mr       r31, r27
	li       r30, 0
	lbz      r0, 0(r4)
	stb      r0, 0x554(r3)
	lbz      r0, 1(r4)
	stb      r0, 0x555(r3)
	lbz      r0, 2(r4)
	stb      r0, 0x556(r3)
	lbz      r0, 3(r4)
	stb      r0, 0x557(r3)
	lbz      r0, 0(r5)
	stb      r0, 0x558(r3)
	lbz      r0, 1(r5)
	stb      r0, 0x559(r3)
	lbz      r0, 2(r5)
	stb      r0, 0x55a(r3)
	lbz      r0, 3(r5)
	stb      r0, 0x55b(r3)
	b        lbl_8032F364

lbl_8032F31C:
	lwz      r0, 0(r28)
	addi     r4, r1, 0xc
	stw      r0, 0xc(r1)
	lwz      r3, 0x340(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r29)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lwz      r3, 0x340(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x128(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_8032F364:
	lwz      r0, 0x540(r27)
	cmplw    r30, r0
	blt      lbl_8032F31C
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032F384
 * Size:	0000F0
 */
TitleMsgDrop::TitleMsgDrop(J2DScreen*, J2DPane*, char*)
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
	bl       __ct__Q32og9newScreen8TitleMsgFP9J2DScreenP7J2DPanePc
	lis      r3, __vt__Q32og9newScreen12TitleMsgDrop@ha
	lis      r4, __ct__Q42og9newScreen12TitleMsgDrop6MotionFv@ha
	addi     r0, r3, __vt__Q32og9newScreen12TitleMsgDrop@l
	li       r6, 0x14
	lis      r3, __dt__Q42og9newScreen12TitleMsgDrop6MotionFv@ha
	stw      r0, 0(r31)
	addi     r5, r3, __dt__Q42og9newScreen12TitleMsgDrop6MotionFv@l
	addi     r4, r4, __ct__Q42og9newScreen12TitleMsgDrop6MotionFv@l
	addi     r3, r31, 0x7e4
	li       r7, 0x80
	bl       __construct_array
	li       r28, 0
	li       r29, 0
	b        lbl_8032F444

lbl_8032F3E0:
	li       r3, 0xc
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8032F434
	li       r4, 3
	bl       __ct__Q25efx2d9TForeverNFUc
	lis      r4, __vt__Q25efx2d9TForever3@ha
	lis      r3, __vt__Q25efx2d13T2DCvnameCave@ha
	addi     r0, r4, __vt__Q25efx2d9TForever3@l
	li       r6, 0x12
	stw      r0, 0(r30)
	li       r5, 0x13
	li       r4, 0x14
	addi     r0, r3, __vt__Q25efx2d13T2DCvnameCave@l
	lwz      r3, 8(r30)
	sth      r6, 0xc(r3)
	lwz      r3, 8(r30)
	sth      r5, 0x20(r3)
	lwz      r3, 8(r30)
	sth      r4, 0x34(r3)
	stw      r0, 0(r30)

lbl_8032F434:
	addi     r0, r29, 0x11e4
	addi     r28, r28, 1
	stwx     r30, r31, r0
	addi     r29, r29, 4

lbl_8032F444:
	lwz      r0, 0x540(r31)
	cmplw    r28, r0
	blt      lbl_8032F3E0
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	8032F474
 * Size:	00003C
 */
TitleMsgDrop::Motion::~Motion(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8032F498
	extsh.   r0, r4
	ble      lbl_8032F498
	bl       __dl__FPv

lbl_8032F498:
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
 * Address:	8032F4B0
 * Size:	00001C
 */
TitleMsgDrop::Motion::Motion(void)
{
	/*
	lfs      f1, lbl_8051E01C@sda21(r2)
	lfs      f0, lbl_8051E008@sda21(r2)
	stfs     f1, 0(r3)
	stfs     f0, 4(r3)
	stfs     f0, 0xc(r3)
	stfs     f0, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
TitleMsg::~TitleMsg(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032F4CC
 * Size:	000128
 */
void TitleMsgDrop::init(void)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stfd     f27, 0x40(r1)
	psq_st   f27, 72(r1), 0, qr0
	stmw     r27, 0x2c(r1)
	mr       r27, r3
	lfd      f27, lbl_8051E030@sda21(r2)
	lfs      f28, lbl_8051E020@sda21(r2)
	mr       r30, r27
	lfs      f29, lbl_8051E024@sda21(r2)
	addi     r29, r27, 0x7e4
	lfs      f30, lbl_8051E028@sda21(r2)
	li       r28, 0
	lfd      f31, lbl_8051E038@sda21(r2)
	lis      r31, 0x4330
	b        lbl_8032F5AC

lbl_8032F530:
	bl       rand
	xoris    r3, r3, 0x8000
	xoris    r0, r28, 0x8000
	stw      r3, 0xc(r1)
	addi     r28, r28, 1
	stw      r31, 8(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f0, f0, f27
	stw      r31, 0x10(r1)
	fdivs    f1, f0, f28
	lfd      f0, 0x10(r1)
	stw      r31, 0x18(r1)
	fmuls    f2, f29, f1
	fsubs    f1, f0, f27
	stfs     f2, 4(r29)
	stfs     f30, 0(r29)
	lwz      r3, 0x140(r30)
	lfs      f0, 0xd4(r3)
	stfs     f0, 8(r29)
	lwz      r3, 0x140(r30)
	addi     r30, r30, 4
	lfs      f0, 0xd8(r3)
	stfs     f0, 0xc(r29)
	lwz      r0, 0x540(r27)
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f31
	fdivs    f0, f1, f0
	stfs     f0, 0x10(r29)
	addi     r29, r29, 0x14

lbl_8032F5AC:
	lwz      r0, 0x540(r27)
	cmplw    r28, r0
	blt      lbl_8032F530
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	psq_l    f27, 72(r1), 0, qr0
	lfd      f27, 0x40(r1)
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032F5F4
 * Size:	000230
 */
void TitleMsgDrop::update(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stmw     r27, 0x5c(r1)
	mr       r27, r3
	lfs      f31, lbl_8051E008@sda21(r2)
	mr       r31, r27
	li       r29, 0
	addi     r30, r27, 0x7e4
	b        lbl_8032F7FC

lbl_8032F624:
	lfs      f1, 0x10(r30)
	lwz      r28, 0x140(r31)
	fcmpo    cr0, f1, f31
	ble      lbl_8032F648
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x10(r30)
	b        lbl_8032F78C

lbl_8032F648:
	lfs      f0, 4(r30)
	lfs      f2, lbl_8051E00C@sda21(r2)
	fsubs    f0, f0, f2
	stfs     f0, 4(r30)
	lfs      f1, 0(r30)
	lfs      f0, 4(r30)
	fadds    f0, f1, f0
	stfs     f0, 0(r30)
	lfs      f0, 0(r30)
	fcmpo    cr0, f0, f31
	bge      lbl_8032F78C
	lfs      f1, 4(r30)
	addi     r3, r29, 0x55c
	lfs      f0, lbl_8051E040@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 4(r30)
	lfs      f0, 4(r30)
	stfs     f0, 0(r30)
	lbzx     r0, r27, r3
	cmplwi   r0, 0
	bne      lbl_8032F78C
	li       r0, 1
	mr       r4, r28
	stbx     r0, r27, r3
	addi     r3, r1, 0x24
	li       r5, 0
	stfs     f2, 0x5dc(r31)
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r5, 0x24(r1)
	mr       r4, r28
	lwz      r6, 0x28(r1)
	addi     r3, r1, 0x18
	lwz      r0, 0x2c(r1)
	stw      r5, 0x48(r1)
	li       r5, 3
	stw      r6, 0x4c(r1)
	stw      r0, 0x50(r1)
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r4, 0x18(r1)
	lis      r3, __vt__Q25efx2d3Arg@ha
	lwz      r5, 0x1c(r1)
	addi     r0, r3, __vt__Q25efx2d3Arg@l
	stw      r4, 0x3c(r1)
	li       r4, 2
	lfs      f0, 0x7dc(r27)
	stw      r5, 0x40(r1)
	lfs      f4, 0x48(r1)
	lfs      f3, 0x3c(r1)
	lfs      f2, 0x4c(r1)
	lfs      f1, 0x40(r1)
	fadds    f4, f4, f3
	lfs      f3, lbl_8051E014@sda21(r2)
	fadds    f1, f2, f1
	lwz      r3, 0x20(r1)
	fmuls    f2, f4, f3
	stw      r0, 0x38(r1)
	fmadds   f0, f1, f3, f0
	stw      r3, 0x44(r1)
	stfs     f2, 0x10(r1)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x10(r1)
	lwz      r0, 0x14(r1)
	stw      r3, 8(r1)
	stw      r0, 0xc(r1)
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x11e4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x11e4(r31)
	addi     r4, r1, 0x30
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setFloorTitle__Q22og5SoundFv

lbl_8032F78C:
	addi     r0, r29, 0x55c
	lbzx     r0, r27, r0
	cmplwi   r0, 0
	beq      lbl_8032F7C4
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x5dc(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051E008@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x5dc(r31)
	lfs      f1, 0x5dc(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_8032F7C4
	stfs     f0, 0x5dc(r31)

lbl_8032F7C4:
	lfs      f2, 0xc(r30)
	mr       r3, r28
	lfs      f1, 0(r30)
	lfs      f0, 8(r30)
	fsubs    f1, f2, f1
	stfs     f0, 0xd4(r28)
	stfs     f1, 0xd8(r28)
	lwz      r12, 0(r28)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 0x14
	addi     r31, r31, 4
	addi     r29, r29, 1

lbl_8032F7FC:
	lwz      r0, 0x540(r27)
	cmplw    r29, r0
	blt      lbl_8032F624
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	lmw      r27, 0x5c(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032F824
 * Size:	00006C
 */
void TitleMsgDrop::end(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r31, r29
	b        lbl_8032F868

lbl_8032F84C:
	lwz      r3, 0x11e4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_8032F868:
	lwz      r0, 0x540(r29)
	cmplw    r30, r0
	blt      lbl_8032F84C
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
 * Address:	8032F890
 * Size:	00018C
 */
TitleMsgWave::TitleMsgWave(J2DScreen*, J2DPane*, char*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stmw     r27, 0xc(r1)
	mr       r27, r3
	bl       __ct__Q32og9newScreen8TitleMsgFP9J2DScreenP7J2DPanePc
	lis      r3, __vt__Q32og9newScreen12TitleMsgWave@ha
	li       r29, 0
	addi     r0, r3, __vt__Q32og9newScreen12TitleMsgWave@l
	lfs      f0, lbl_8051E00C@sda21(r2)
	stw      r0, 0(r27)
	mr       r28, r29
	lfs      f1, lbl_8051E044@sda21(r2)
	li       r30, 0
	stfs     f0, 0x9e4(r27)
	lfs      f0, lbl_8051E048@sda21(r2)
	stfs     f1, 0x9e8(r27)
	lfs      f1, lbl_8051E04C@sda21(r2)
	stfs     f0, 0x9ec(r27)
	lfs      f0, lbl_8051E050@sda21(r2)
	stfs     f1, 0x9f0(r27)
	stfs     f0, 0x9f4(r27)

lbl_8032F8F0:
	lwz      r0, 0x540(r27)
	cmplw    r30, r0
	bge      lbl_8032F920
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8032F914
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r4, r3

lbl_8032F914:
	addi     r0, r29, 0x7e4
	stwx     r4, r27, r0
	b        lbl_8032F928

lbl_8032F920:
	addi     r0, r29, 0x7e4
	stwx     r28, r27, r0

lbl_8032F928:
	addi     r30, r30, 1
	addi     r29, r29, 4
	cmpwi    r30, 0x80
	blt      lbl_8032F8F0
	lis      r4, __vt__Q25efx2d8TForever@ha
	lis      r3, __vt__Q25efx2d13T2DCvnameChal@ha
	addi     r4, r4, __vt__Q25efx2d8TForever@l
	lfs      f31, lbl_8051E008@sda21(r2)
	addi     r3, r3, __vt__Q25efx2d13T2DCvnameChal@l
	li       r28, 0
	addi     r30, r4, 0x18
	li       r31, 0
	addi     r29, r3, 0x18
	b        lbl_8032F9F0

lbl_8032F960:
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8032F9CC
	lis      r5, __vt__Q25efx2d7TBaseIF@ha
	lis      r4, __vt__Q25efx2d5TBase@ha
	addi     r0, r5, __vt__Q25efx2d7TBaseIF@l
	lis      r6, __vt__18JPAEmitterCallBack@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q25efx2d5TBase@l
	lis      r5, __vt__Q25efx2d8TForever@ha
	lis      r4, __vt__Q25efx2d13T2DCvnameChal@ha
	stw      r0, 0(r3)
	li       r8, 0
	addi     r7, r6, __vt__18JPAEmitterCallBack@l
	addi     r6, r5, __vt__Q25efx2d8TForever@l
	stb      r8, 4(r3)
	li       r5, 0x15
	addi     r0, r4, __vt__Q25efx2d13T2DCvnameChal@l
	stb      r8, 5(r3)
	stw      r7, 8(r3)
	stw      r6, 0(r3)
	stw      r30, 8(r3)
	sth      r5, 0xc(r3)
	stw      r8, 0x10(r3)
	stw      r0, 0(r3)
	stw      r29, 8(r3)

lbl_8032F9CC:
	addi     r0, r31, 0x9f8
	addi     r4, r28, 0x55c
	stwx     r3, r27, r0
	li       r3, 0
	addi     r0, r31, 0x5dc
	addi     r31, r31, 4
	stbx     r3, r27, r4
	addi     r28, r28, 1
	stfsx    f31, r27, r0

lbl_8032F9F0:
	lwz      r0, 0x540(r27)
	cmplw    r28, r0
	blt      lbl_8032F960
	mr       r3, r27
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032FA1C
 * Size:	000004
 */
void TitleMsgWave::init(void) { }

/*
 * --INFO--
 * Address:	8032FA20
 * Size:	0000B0
 */
void TitleMsgWave::start(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lfd      f31, lbl_8051E030@sda21(r2)
	mr       r30, r28
	li       r29, 0
	lis      r31, 0x4330
	b        lbl_8032FA94

lbl_8032FA5C:
	xoris    r0, r29, 0x8000
	stw      r31, 8(r1)
	lfs      f0, 0x9f4(r28)
	stw      r0, 0xc(r1)
	lwz      r3, 0x7e4(r30)
	lfd      f2, 8(r1)
	lfs      f1, 0x9e8(r28)
	fsubs    f4, f2, f31
	lfs      f2, 0x9ec(r28)
	lfs      f3, 0x9f0(r28)
	fmuls    f4, f4, f0
	bl       up__Q32og6Screen8ScaleMgrFffff
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_8032FA94:
	lwz      r0, 0x540(r28)
	cmplw    r29, r0
	blt      lbl_8032FA5C
	lfs      f0, lbl_8051E018@sda21(r2)
	stfs     f0, 0x9e4(r28)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032FAD0
 * Size:	0002E0
 */
void TitleMsgWave::update(void)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stfd     f27, 0xa0(r1)
	psq_st   f27, 168(r1), 0, qr0
	stfd     f26, 0x90(r1)
	psq_st   f26, 152(r1), 0, qr0
	stfd     f25, 0x80(r1)
	psq_st   f25, 136(r1), 0, qr0
	stmw     r27, 0x6c(r1)
	lbz      r0, init$4054@sda21(r13)
	mr       r28, r3
	extsb.   r0, r0
	bne      lbl_8032FB38
	lfs      f0, lbl_8051E008@sda21(r2)
	li       r0, 1
	stb      r0, init$4054@sda21(r13)
	stfs     f0, sFrame$4053@sda21(r13)

lbl_8032FB38:
	lfs      f26, lbl_8051E054@sda21(r2)
	mr       r30, r28
	lfd      f27, lbl_8051E038@sda21(r2)
	li       r29, 0
	lfs      f28, lbl_8051E058@sda21(r2)
	lis      r31, 0x4330
	lfs      f29, lbl_8051E00C@sda21(r2)
	lfs      f30, lbl_8051E05C@sda21(r2)
	lfs      f31, lbl_8051E060@sda21(r2)
	b        lbl_8032FD10

lbl_8032FB60:
	lwz      r3, 0x7e4(r30)
	bl       calc__Q32og6Screen8ScaleMgrFv
	lwz      r0, 0x540(r28)
	fmr      f25, f1
	stw      r31, 0x58(r1)
	subf     r0, r29, r0
	lfs      f0, sFrame$4053@sda21(r13)
	stw      r0, 0x5c(r1)
	lfd      f1, 0x58(r1)
	fsubs    f1, f1, f27
	fmadds   f1, f26, f1, f0
	fcmpo    cr0, f1, f28
	cror     2, 1, 2
	bne      lbl_8032FB9C
	fsubs    f1, f1, f28

lbl_8032FB9C:
	bl       sin
	frsp     f0, f1
	lfs      f2, 0x7e0(r28)
	lwz      r3, 0x140(r30)
	fadds    f0, f29, f0
	fmuls    f0, f0, f30
	fmadds   f1, f0, f31, f29
	fadds    f0, f29, f0
	fmuls    f1, f1, f25
	fmuls    f0, f0, f25
	fmuls    f1, f2, f1
	stfs     f1, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r4, r29, 0x55c
	lbzx     r0, r28, r4
	cmplwi   r0, 0
	bne      lbl_8032FD08
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x5dc(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051E064@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x5dc(r30)
	lfs      f1, 0x5dc(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_8032FD08
	li       r0, 1
	addi     r3, r1, 0x24
	stbx     r0, r28, r4
	li       r5, 0
	lwz      r27, 0x140(r30)
	mr       r4, r27
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r5, 0x24(r1)
	mr       r4, r27
	lwz      r6, 0x28(r1)
	addi     r3, r1, 0x18
	lwz      r0, 0x2c(r1)
	stw      r5, 0x48(r1)
	li       r5, 3
	stw      r6, 0x4c(r1)
	stw      r0, 0x50(r1)
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r4, 0x18(r1)
	lis      r3, __vt__Q25efx2d3Arg@ha
	lwz      r5, 0x1c(r1)
	addi     r0, r3, __vt__Q25efx2d3Arg@l
	stw      r4, 0x3c(r1)
	li       r4, 2
	lfs      f0, 0x7dc(r28)
	stw      r5, 0x40(r1)
	lfs      f4, 0x48(r1)
	lfs      f3, 0x3c(r1)
	lfs      f2, 0x4c(r1)
	lfs      f1, 0x40(r1)
	fadds    f4, f4, f3
	lfs      f3, lbl_8051E014@sda21(r2)
	fadds    f1, f2, f1
	lwz      r3, 0x20(r1)
	fmuls    f2, f4, f3
	stw      r0, 0x38(r1)
	fmadds   f0, f1, f3, f0
	stw      r3, 0x44(r1)
	stfs     f2, 0x10(r1)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x10(r1)
	lwz      r0, 0x14(r1)
	stw      r3, 8(r1)
	stw      r0, 0xc(r1)
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x9f8(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x9f8(r30)
	addi     r4, r1, 0x30
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x9f8(r30)
	li       r4, 0x64
	bl       setGlobalAlpha__Q25efx2d8TForeverFUc

lbl_8032FD08:
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_8032FD10:
	lwz      r0, 0x540(r28)
	cmplw    r29, r0
	blt      lbl_8032FB60
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x9e4(r28)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051E008@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x9e4(r28)
	lfs      f1, 0x9e4(r28)
	fcmpo    cr0, f1, f0
	bge      lbl_8032FD54
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8032FD54:
	lfs      f1, sFrame$4053@sda21(r13)
	lfs      f0, lbl_8051E064@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, sFrame$4053@sda21(r13)
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	psq_l    f27, 168(r1), 0, qr0
	lfd      f27, 0xa0(r1)
	psq_l    f26, 152(r1), 0, qr0
	lfd      f26, 0x90(r1)
	psq_l    f25, 136(r1), 0, qr0
	lfd      f25, 0x80(r1)
	lmw      r27, 0x6c(r1)
	lwz      r0, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032FDB0
 * Size:	00006C
 */
void TitleMsgWave::end(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r31, r29
	b        lbl_8032FDF4

lbl_8032FDD8:
	lwz      r3, 0x9f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_8032FDF4:
	lwz      r0, 0x540(r29)
	cmplw    r30, r0
	blt      lbl_8032FDD8
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
 * Address:	8032FE1C
 * Size:	000014
 */
void TitleMsgWave::setParam(float, float, float, float)
{
	/*
	stfs     f1, 0x9e8(r3)
	stfs     f2, 0x9ec(r3)
	stfs     f3, 0x9f0(r3)
	stfs     f4, 0x9f4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032FE30
 * Size:	0000F8
 */
TitleMsgClash::TitleMsgClash(J2DScreen*, J2DPane*, char*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r31, r3
	bl       __ct__Q32og9newScreen8TitleMsgFP9J2DScreenP7J2DPanePc
	lis      r3, __vt__Q32og9newScreen13TitleMsgClash@ha
	lfs      f31, lbl_8051E008@sda21(r2)
	addi     r0, r3, __vt__Q32og9newScreen13TitleMsgClash@l
	lfs      f0, lbl_8051E068@sda21(r2)
	stw      r0, 0(r31)
	li       r28, 0
	li       r29, 0
	stfs     f31, 0x7e4(r31)
	stfs     f0, 0x7e8(r31)
	b        lbl_8032FEF0

lbl_8032FE84:
	li       r3, 0xc
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8032FECC
	li       r4, 2
	bl       __ct__Q25efx2d9TForeverNFUc
	lis      r4, __vt__Q25efx2d9TForever2@ha
	lis      r3, __vt__Q25efx2d11T2DCvnameVs@ha
	addi     r0, r4, __vt__Q25efx2d9TForever2@l
	li       r5, 0x16
	stw      r0, 0(r30)
	li       r4, 0x17
	addi     r0, r3, __vt__Q25efx2d11T2DCvnameVs@l
	lwz      r3, 8(r30)
	sth      r5, 0xc(r3)
	lwz      r3, 8(r30)
	sth      r4, 0x20(r3)
	stw      r0, 0(r30)

lbl_8032FECC:
	addi     r0, r29, 0x7ec
	addi     r3, r28, 0x55c
	stwx     r30, r31, r0
	li       r4, 0
	addi     r0, r29, 0x5dc
	addi     r29, r29, 4
	stbx     r4, r31, r3
	addi     r28, r28, 1
	stfsx    f31, r31, r0

lbl_8032FEF0:
	lwz      r0, 0x540(r31)
	cmplw    r28, r0
	blt      lbl_8032FE84
	mr       r3, r31
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032FF28
 * Size:	000014
 */
void TitleMsgClash::init(void)
{
	/*
	lfs      f1, lbl_8051E008@sda21(r2)
	lfs      f0, lbl_8051E068@sda21(r2)
	stfs     f1, 0x7e4(r3)
	stfs     f0, 0x7e8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032FF3C
 * Size:	000214
 */
void TitleMsgClash::update(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	stw      r28, 0x60(r1)
	lfs      f0, lbl_8051E014@sda21(r2)
	mr       r29, r3
	lfs      f1, 0x7e4(r3)
	lfs      f2, lbl_8051E00C@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 0x7e4(r3)
	lfs      f1, 0x7e8(r3)
	lfs      f0, 0x7e4(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x7e8(r3)
	lfs      f0, 0x7e8(r3)
	fcmpo    cr0, f0, f2
	bge      lbl_8032FFAC
	stfs     f2, 0x7e8(r29)
	lfs      f1, lbl_8051E06C@sda21(r2)
	lfs      f0, 0x7e4(r29)
	fneg     f0, f0
	fmuls    f0, f1, f0
	stfs     f0, 0x7e4(r29)

lbl_8032FFAC:
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setVsTitle__Q22og5SoundFv
	lfs      f31, lbl_8051E00C@sda21(r2)
	mr       r31, r29
	li       r30, 0
	b        lbl_8033011C

lbl_8032FFC4:
	lfs      f1, 0x7e8(r29)
	lfs      f0, 0x7e0(r29)
	lwz      r3, 0x140(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0xcc(r3)
	stfs     f31, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r4, r30, 0x55c
	lbzx     r0, r29, r4
	cmplwi   r0, 0
	bne      lbl_80330114
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x5dc(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051E00C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x5dc(r31)
	lfs      f1, 0x5dc(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_80330114
	li       r0, 1
	addi     r3, r1, 0x24
	stbx     r0, r29, r4
	li       r5, 0
	lwz      r28, 0x140(r31)
	mr       r4, r28
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r5, 0x24(r1)
	mr       r4, r28
	lwz      r6, 0x28(r1)
	addi     r3, r1, 0x18
	lwz      r0, 0x2c(r1)
	stw      r5, 0x48(r1)
	li       r5, 3
	stw      r6, 0x4c(r1)
	stw      r0, 0x50(r1)
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r4, 0x18(r1)
	lis      r3, __vt__Q25efx2d3Arg@ha
	lwz      r5, 0x1c(r1)
	addi     r0, r3, __vt__Q25efx2d3Arg@l
	stw      r4, 0x3c(r1)
	li       r4, 2
	lfs      f0, 0x7dc(r29)
	stw      r5, 0x40(r1)
	lfs      f4, 0x48(r1)
	lfs      f3, 0x3c(r1)
	lfs      f2, 0x4c(r1)
	lfs      f1, 0x40(r1)
	fadds    f4, f4, f3
	lfs      f3, lbl_8051E014@sda21(r2)
	fadds    f1, f2, f1
	lwz      r3, 0x20(r1)
	fmuls    f2, f4, f3
	stw      r0, 0x38(r1)
	fmadds   f0, f1, f3, f0
	stw      r3, 0x44(r1)
	stfs     f2, 0x10(r1)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x10(r1)
	lwz      r0, 0x14(r1)
	stw      r3, 8(r1)
	stw      r0, 0xc(r1)
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x7ec(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x7ec(r31)
	addi     r4, r1, 0x30
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x7ec(r31)
	li       r4, 0x82
	bl       setGlobalAlpha__Q25efx2d9TForeverNFUc

lbl_80330114:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_8033011C:
	lwz      r0, 0x540(r29)
	cmplw    r30, r0
	blt      lbl_8032FFC4
	psq_l    f31, 120(r1), 0, qr0
	lwz      r0, 0x84(r1)
	lfd      f31, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80330150
 * Size:	00006C
 */
void TitleMsgClash::end(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r31, r29
	b        lbl_80330194

lbl_80330178:
	lwz      r3, 0x7ec(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_80330194:
	lwz      r0, 0x540(r29)
	cmplw    r30, r0
	blt      lbl_80330178
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
 * Address:	803301BC
 * Size:	000004
 */
void TitleMsg::start(void) { }

/*
 * --INFO--
 * Address:	803301C0
 * Size:	000084
 */
efx2d::T2DCvnameChal::~T2DCvnameChal(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80330228
	lis      r3, __vt__Q25efx2d13T2DCvnameChal@ha
	addi     r3, r3, __vt__Q25efx2d13T2DCvnameChal@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x18
	stw      r0, 8(r30)
	beq      lbl_80330218
	lis      r4, __vt__Q25efx2d8TForever@ha
	addi     r3, r30, 8
	addi     r5, r4, __vt__Q25efx2d8TForever@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x18
	stw      r0, 8(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_80330218:
	extsh.   r0, r31
	ble      lbl_80330228
	mr       r3, r30
	bl       __dl__FPv

lbl_80330228:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace newScreen

namespace P2JME {

} // namespace P2JME

/*
 * --INFO--
 * Address:	80330244
 * Size:	000008
 */
u32 Analyzer::tagColor(void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	8033024C
 * Size:	000008
 */
u32 Analyzer::tagSize(void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	80330254
 * Size:	000008
 */
u32 Analyzer::tagRuby(void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	8033025C
 * Size:	000008
 */
u32 Analyzer::tagFont(void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	80330264
 * Size:	000008
 */
u32 Analyzer::tagImage(unsigned short, void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	8033026C
 * Size:	000008
 */
u32 Analyzer::tagColorEX(unsigned short, void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	80330274
 * Size:	000008
 */
u32 Analyzer::tagControl(unsigned short, void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	8033027C
 * Size:	000008
 */
u32 Analyzer::tagPosition(unsigned short, void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	80330284
 * Size:	000008
 */
@8 @efx2d::T2DCvnameChal::~T2DCvnameChal(void)
{
	/*
	addi     r3, r3, -8
	b        __dt__Q25efx2d13T2DCvnameChalFv
	*/
}
} // namespace og
