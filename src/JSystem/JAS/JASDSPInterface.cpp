#include "Dolphin/os.h"
#include "JSystem/DSP.h"
#include "JSystem/JAS/JASCalc.h"
#include "JSystem/JAS/JASDsp.h"
#include "JSystem/JAS/JASHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global DSPADPCM_FILTER__6JASDsp
    DSPADPCM_FILTER__6JASDsp:
        .4byte 0x00000000
        .4byte 0x08000000
        .4byte 0x00000800
        .4byte 0x04000400
        .4byte 0x1000F800
        .4byte 0x0E00FA00
        .4byte 0x0C00FC00
        .4byte 0x1200F600
        .4byte 0x1068F738
        .4byte 0x12C0F704
        .4byte 0x1400F400
        .4byte 0x0800F800
        .4byte 0x0400FC00
        .4byte 0xFC000400
        .4byte 0xFC000000
        .4byte 0xF8000000
    .global DSPRES_FILTER__6JASDsp
    DSPRES_FILTER__6JASDsp:
        .4byte 0x0C3966AD
        .4byte 0x0D46FFDF
        .4byte 0x0B396696
        .4byte 0x0E5FFFD8
        .4byte 0x0A446669
        .4byte 0x0F83FFD0
        .4byte 0x095A6626
        .4byte 0x10B4FFC8
        .4byte 0x087D65CD
        .4byte 0x11F0FFBF
        .4byte 0x07AB655E
        .4byte 0x1338FFB6
        .4byte 0x06E464D9
        .4byte 0x148CFFAC
        .4byte 0x0628643F
        .4byte 0x15EBFFA1
        .4byte 0x0577638F
        .4byte 0x1756FF96
        .4byte 0x04D162CB
        .4byte 0x18CBFF8A
        .4byte 0x043561F3
        .4byte 0x1A4CFF7E
        .4byte 0x03A46106
        .4byte 0x1BD7FF71
        .4byte 0x031C6007
        .4byte 0x1D6CFF64
        .4byte 0x029F5EF5
        .4byte 0x1F0BFF56
        .4byte 0x022A5DD0
        .4byte 0x20B3FF48
        .4byte 0x01BE5C9A
        .4byte 0x2264FF3A
        .4byte 0x015B5B53
        .4byte 0x241EFF2C
        .4byte 0x010159FC
        .4byte 0x25E0FF1E
        .4byte 0x00AE5896
        .4byte 0x27A9FF10
        .4byte 0x00635720
        .4byte 0x297AFF02
        .4byte 0x001F559D
        .4byte 0x2B50FEF4
        .4byte 0xFFE2540D
        .4byte 0x2D2CFEE8
        .4byte 0xFFAC5270
        .4byte 0x2F0DFEDB
        .4byte 0xFF7C50C7
        .4byte 0x30F3FED0
        .4byte 0xFF534F14
        .4byte 0x32DCFEC6
        .4byte 0xFF2E4D57
        .4byte 0x34C8FEBD
        .4byte 0xFF0F4B91
        .4byte 0x36B6FEB6
        .4byte 0xFEF549C2
        .4byte 0x38A5FEB0
        .4byte 0xFEDF47ED
        .4byte 0x3A95FEAC
        .4byte 0xFECE4611
        .4byte 0x3C85FEAB
        .4byte 0xFEC04430
        .4byte 0x3E74FEAC
        .4byte 0xFEB6424A
        .4byte 0x4060FEAF
        .4byte 0xFEAF4060
        .4byte 0x424AFEB6
        .4byte 0xFEAC3E74
        .4byte 0x4430FEC0
        .4byte 0xFEAB3C85
        .4byte 0x4611FECE
        .4byte 0xFEAC3A95
        .4byte 0x47EDFEDF
        .4byte 0xFEB038A5
        .4byte 0x49C2FEF5
        .4byte 0xFEB636B6
        .4byte 0x4B91FF0F
        .4byte 0xFEBD34C8
        .4byte 0x4D57FF2E
        .4byte 0xFEC632DC
        .4byte 0x4F14FF53
        .4byte 0xFED030F3
        .4byte 0x50C7FF7C
        .4byte 0xFEDB2F0D
        .4byte 0x5270FFAC
        .4byte 0xFEE82D2C
        .4byte 0x540DFFE2
        .4byte 0xFEF42B50
        .4byte 0x559D001F
        .4byte 0xFF02297A
        .4byte 0x57200063
        .4byte 0xFF1027A9
        .4byte 0x589600AE
        .4byte 0xFF1E25E0
        .4byte 0x59FC0101
        .4byte 0xFF2C241E
        .4byte 0x5B53015B
        .4byte 0xFF3A2264
        .4byte 0x5C9A01BE
        .4byte 0xFF4820B3
        .4byte 0x5DD0022A
        .4byte 0xFF561F0B
        .4byte 0x5EF5029F
        .4byte 0xFF641D6C
        .4byte 0x6007031C
        .4byte 0xFF711BD7
        .4byte 0x610603A4
        .4byte 0xFF7E1A4C
        .4byte 0x61F30435
        .4byte 0xFF8A18CB
        .4byte 0x62CB04D1
        .4byte 0xFF961756
        .4byte 0x638F0577
        .4byte 0xFFA115EB
        .4byte 0x643F0628
        .4byte 0xFFAC148C
        .4byte 0x64D906E4
        .4byte 0xFFB61338
        .4byte 0x655E07AB
        .4byte 0xFFBF11F0
        .4byte 0x65CD087D
        .4byte 0xFFC810B4
        .4byte 0x6626095A
        .4byte 0xFFD00F83
        .4byte 0x66690A44
        .4byte 0xFFD80E5F
        .4byte 0x66960B39
        .4byte 0xFFDF0D46
        .4byte 0x66AD0C39
        .4byte 0x00000C8B
        .4byte 0x18F82527
        .4byte 0x30FB3C56
        .4byte 0x471C5133
        .4byte 0x5A8262F1
        .4byte 0x6A6D70E2
        .4byte 0x76417A7C
        .4byte 0x7D897F61
        .4byte 0x7FFF7F61
        .4byte 0x7D897A7C
        .4byte 0x764170E2
        .4byte 0x6A6D62F1
        .4byte 0x5A825133
        .4byte 0x471C3C56
        .4byte 0x30FB2527
        .4byte 0x18F80C8B
        .4byte 0x0000F375
        .4byte 0xE708DAD9
        .4byte 0xCF05C3AA
        .4byte 0xB8E4AECD
        .4byte 0xA57E9D0F
        .4byte 0x95938F1E
        .4byte 0x89BF8584
        .4byte 0x8277809F
        .4byte 0x8001809F
        .4byte 0x82778584
        .4byte 0x89BF8F1E
        .4byte 0x95939D0F
        .4byte 0xA57EAECD
        .4byte 0xB8E4C3AA
        .4byte 0xCF05DAD9
        .4byte 0xE708F375
        .4byte 0x000007FF
        .4byte 0x0FFF17FF
        .4byte 0x1FFF27FF
        .4byte 0x2FFF37FF
        .4byte 0x3FFF47FF
        .4byte 0x4FFF57FF
        .4byte 0x5FFF67FF
        .4byte 0x6FFF77FF
        .4byte 0x7FFF7800
        .4byte 0x70006800
        .4byte 0x60005800
        .4byte 0x50004800
        .4byte 0x40003800
        .4byte 0x30002800
        .4byte 0x20001800
        .4byte 0x10000800
        .4byte 0x0000F801
        .4byte 0xF001E801
        .4byte 0xE001D801
        .4byte 0xD001C801
        .4byte 0xC001B801
        .4byte 0xB001A801
        .4byte 0xA0019801
        .4byte 0x90018801
        .4byte 0x80018800
        .4byte 0x90009800
        .4byte 0xA000A800
        .4byte 0xB000B800
        .4byte 0xC000C800
        .4byte 0xD000D800
        .4byte 0xE000E800
        .4byte 0xF000F800
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x1FFF3FFF
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x1FFFC001
        .4byte 0x00000192
        .4byte 0x032404B6
        .4byte 0x064707D9
        .4byte 0x096A0AFB
        .4byte 0x0C8B0E1B
        .4byte 0x0FAB1139
        .4byte 0x12C71455
        .4byte 0x15E1176D
        .4byte 0x18F81A82
        .4byte 0x1C0B1D93
        .4byte 0x1F19209F
        .4byte 0x222323A6
        .4byte 0x252726A7
        .4byte 0x282629A3
        .4byte 0x2B1F2C98
        .4byte 0x2E102F87
        .4byte 0x30FB326E
        .4byte 0x33DE354D
        .4byte 0x36B93824
        .4byte 0x398C3AF2
        .4byte 0x3C563DB7
        .4byte 0x3F174073
        .4byte 0x41CD4325
        .4byte 0x447A45CC
        .4byte 0x471C4869
        .4byte 0x49B34AFB
        .4byte 0x4C3F4D81
        .4byte 0x4EBF4FFB
        .4byte 0x51335268
        .4byte 0x539A54C9
        .4byte 0x55F5571D
        .4byte 0x58425964
        .4byte 0x5A825B9C
        .4byte 0x5CB35DC7
        .4byte 0x5ED75FE3
        .4byte 0x60EB61F0
        .4byte 0x62F163EE
        .4byte 0x64E865DD
        .4byte 0x66CF67BC
        .4byte 0x68A6698B
        .4byte 0x6A6D6B4A
        .4byte 0x6C236CF8
        .4byte 0x6DC96E96
        .4byte 0x6F5E7022
        .4byte 0x70E2719D
        .4byte 0x72547307
        .4byte 0x73B5745F
        .4byte 0x750475A5
        .4byte 0x764176D8
        .4byte 0x776B77FA
        .4byte 0x78847909
        .4byte 0x79897A05
        .4byte 0x7A7C7AEE
        .4byte 0x7B5C7BC5
        .4byte 0x7C297C88
        .4byte 0x7CE37D39
        .4byte 0x7D897DD5
        .4byte 0x7E1D7E5F
        .4byte 0x7E9C7ED5
        .4byte 0x7F097F37
        .4byte 0x7F617F86
        .4byte 0x7FA67FC1
        .4byte 0x7FD87FE9
        .4byte 0x7FF57FFD
    .global connect_table$774
    connect_table$774:
        .4byte 0x00000D00
        .4byte 0x0D600DC0
        .4byte 0x0E200E80
        .4byte 0x0EE00CA0
        .4byte 0x0F400FA0
        .4byte 0x0B0009A0

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global SEND_TABLE__6JASDsp
    SEND_TABLE__6JASDsp:
        .4byte 0x0D000D60
        .4byte 0x0DC00E20
        .4byte 0x0E800EE0
        .4byte 0x0CA00F40
        .4byte 0x0FA00B00
        .4byte 0x09A00000

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global COMP_BLOCKSAMPLES$600
    COMP_BLOCKSAMPLES$600:
        .4byte 0x10100101
        .4byte 0x01101001
    .global COMP_BLOCKBYTES$601
    COMP_BLOCKBYTES$601:
        .4byte 0x09050810
        .4byte 0x01010101

    .section .sbss # 0x80514D80 - 0x80516360
    .global CH_BUF__6JASDsp
    CH_BUF__6JASDsp:
        .skip 0x4
    .global FX_BUF__6JASDsp
    FX_BUF__6JASDsp:
        .skip 0x4
    .global sDSPVolume__6JASDsp
    sDSPVolume__6JASDsp:
        .skip 0x4
    .global first$389
    first$389:
        .skip 0x1
    .global init$390
    init$390:
        .skip 0x3
*/

static const u16 connect_table[12] = {
	0x000, 0xD00, 0xD60, 0xDC0, 0xE20, 0xE80, 0xEE0, 0xCA0, 0xF40, 0xFA0, 0xB00,
};

/*
 * --INFO--
 * Address:	800A5310
 * Size:	00004C
 */
void JASDsp::boot(void (*p1)(void*))
{
	static bool first = true;
	if (first) {
		DspBoot(p1);
		first = false;
	}
}

/*
 * --INFO--
 * Address:	800A535C
 * Size:	000020
 */
void JASDsp::releaseHalt(u32 p1) { DSPReleaseHalt2(p1); }

/*
 * --INFO--
 * Address:	800A537C
 * Size:	000020
 */
void JASDsp::finishWork(u16 p1) { DspFinishWork(p1); }

/*
 * --INFO--
 * Address:	800A539C
 * Size:	000020
 */
void JASDsp::syncFrame(u32 p1, u32 p2, u32 p3)
{
	// DsyncFrame2(p1, p2, p3);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       DsyncFrame2__FUlUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A53BC
 * Size:	000024
 */
void JASDsp::setDSPMixerLevel(float dspMixerLevel)
{
	sDSPVolume = dspMixerLevel;
	DsetMixerLevel(dspMixerLevel);
}

/*
 * --INFO--
 * Address:	800A53E0
 * Size:	000008
 */
float JASDsp::getDSPMixerLevel() { return sDSPVolume; }

/*
 * --INFO--
 * Address:	800A53E8
 * Size:	000010
 */
JASDsp::TChannel* JASDsp::getDSPHandle(int index)
{
	/*
	mulli    r0, r3, 0x180
	lwz      r3, CH_BUF__6JASDsp@sda21(r13)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASDsp::getDSPHandleNc(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JASDsp::setFilterTable(short*, short*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JASDsp::flushBuffer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JASDsp::flushChannelAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JASDsp::cacheChannelAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A53F8
 * Size:	000028
 */
void JASDsp::invalChannelAll() { DCInvalidateRange(CH_BUF, sizeof(u8) * 0x6000); }

/*
 * --INFO--
 * Address:	800A5420
 * Size:	0000C4
 */
void JASDsp::initBuffer()
{
	// CH_BUF = new (JASDram, 0x20) u8[0x6000];
	// FX_BUF = new (JASDram, 0x20) u16[0x40];
	// JASCalc::bzero(CH_BUF, sizeof(u8) * 0x6000);
	// JASCalc::bzero(FX_BUF, sizeof(u16) * 0x40);
	// for (int i = 0; i < 4; i++) {
	// 	setFXLine(i, nullptr, nullptr);
	// }
	// DsetupTable(0x40, CH_BUF, DSPRES_FILTER, DSPADPCM_FILTER, FX_BUF);
	// DCFlushRange(CH_BUF, sizeof(u8) * 0x6000);
	// DCFlushRange(FX_BUF, sizeof(u16) * 0x40);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0x6000
	li       r5, 0x20
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r4, JASDram@sda21(r13)
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, CH_BUF__6JASDsp@sda21(r13)
	li       r3, 0x80
	lwz      r4, JASDram@sda21(r13)
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, FX_BUF__6JASDsp@sda21(r13)
	li       r4, 0x6000
	lwz      r3, CH_BUF__6JASDsp@sda21(r13)
	bl       bzero__7JASCalcFPvUl
	lwz      r3, FX_BUF__6JASDsp@sda21(r13)
	li       r4, 0x80
	bl       bzero__7JASCalcFPvUl
	li       r31, 0
	b        lbl_800A548C

lbl_800A5478:
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       setFXLine__6JASDspFUcPsPQ26JASDsp13FxlineConfig_
	addi     r31, r31, 1

lbl_800A548C:
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 4
	blt      lbl_800A5478
	lis      r4, DSPRES_FILTER__6JASDsp@ha
	lis      r3, DSPADPCM_FILTER__6JASDsp@ha
	addi     r5, r4, DSPRES_FILTER__6JASDsp@l
	lwz      r4, CH_BUF__6JASDsp@sda21(r13)
	addi     r6, r3, DSPADPCM_FILTER__6JASDsp@l
	lwz      r7, FX_BUF__6JASDsp@sda21(r13)
	li       r3, 0x40
	bl       DsetupTable__FUlUlUlUlUl
	lwz      r3, CH_BUF__6JASDsp@sda21(r13)
	li       r4, 0x6000
	bl       DCFlushRange
	lwz      r3, FX_BUF__6JASDsp@sda21(r13)
	li       r4, 0x80
	bl       DCFlushRange
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
 * Size:	000010
 */
void JASDsp::getFXHandle(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASDsp::getFXHandleNc(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A54E4
 * Size:	000154
 */
void JASDsp::setFXLine(unsigned char, short*, JASDsp::FxlineConfig_*)
{

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	rlwinm   r0, r3, 5, 0x13, 0x1a
	stmw     r27, 0xc(r1)
	mr       r28, r4
	mr       r29, r5
	lwz      r6, FX_BUF__6JASDsp@sda21(r13)
	add      r31, r6, r0
	bl       OSDisableInterrupts
	li       r0, 0
	cmplwi   r29, 0
	sth      r0, 0(r31)
	mr       r30, r3
	beq      lbl_800A55A0
	lha      r0, 4(r29)
	lis      r3, SEND_TABLE__6JASDsp@ha
	addi     r3, r3, SEND_TABLE__6JASDsp@l
	sth      r0, 0xa(r31)
	lhz      r0, 2(r29)
	slwi     r0, r0, 1
	lhzx     r0, r3, r0
	sth      r0, 8(r31)
	lha      r0, 8(r29)
	sth      r0, 0xe(r31)
	lhz      r0, 6(r29)
	slwi     r0, r0, 1
	lhzx     r0, r3, r0
	sth      r0, 0xc(r31)
	lwz      r0, 0xc(r29)
	sth      r0, 2(r31)
	lha      r0, 0x10(r29)
	sth      r0, 0x10(r31)
	lha      r0, 0x12(r29)
	sth      r0, 0x12(r31)
	lha      r0, 0x14(r29)
	sth      r0, 0x14(r31)
	lha      r0, 0x16(r29)
	sth      r0, 0x16(r31)
	lha      r0, 0x18(r29)
	sth      r0, 0x18(r31)
	lha      r0, 0x1a(r29)
	sth      r0, 0x1a(r31)
	lha      r0, 0x1c(r29)
	sth      r0, 0x1c(r31)
	lha      r0, 0x1e(r29)
	sth      r0, 0x1e(r31)

lbl_800A55A0:
	cmplwi   r28, 0
	beq      lbl_800A55D8
	cmplwi   r29, 0
	beq      lbl_800A55D8
	lwz      r0, 0xc(r29)
	mr       r3, r28
	mulli    r27, r0, 0xa0
	stw      r28, 4(r31)
	mr       r4, r27
	bl       bzero__7JASCalcFPvUl
	mr       r3, r28
	mr       r4, r27
	bl       DCFlushRange
	b        lbl_800A55EC

lbl_800A55D8:
	cmplwi   r29, 0
	beq      lbl_800A55E8
	cmplwi   r28, 0
	beq      lbl_800A55EC

lbl_800A55E8:
	stw      r28, 4(r31)

lbl_800A55EC:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	beq      lbl_800A5604
	lbz      r0, 0(r29)
	sth      r0, 0(r31)
	b        lbl_800A560C

lbl_800A5604:
	li       r0, 0
	sth      r0, 0(r31)

lbl_800A560C:
	mr       r3, r31
	li       r4, 0x20
	bl       DCFlushRange
	mr       r3, r30
	bl       OSRestoreInterrupts
	lmw      r27, 0xc(r1)
	li       r3, 1
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void JASDsp::changeFXLineParam(unsigned char, unsigned char, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5638
 * Size:	00003C
 * init__Q26JASDsp8TChannelFv
 */
void JASDsp::TChannel::init()
{
	m_pauseFlag = 0;
	_02         = 0;
	_10A        = 0;
	_00         = 0;
	_58         = 0;
	_68         = 0;
	initFilter();
}

/*
 * --INFO--
 * Address:	800A5674
 * Size:	0000A0
 */
void JASDsp::TChannel::playStart()
{
	int count = 0x14;
	_10C      = 0;
	_60       = 0;
	_08       = 1;
	_66       = 0;
	for (int i = 0; i < 4; i++) {
		_78[i] = 0;
		_A8[i] = 0;
	}
	if (0 < count) {
		for (int i = 0; i < count; i++) {
			_80[i] = 0;
		}
	}
	_00 = 1;
	/*
	li       r4, 0
	li       r5, 0
	stw      r4, 0x10c(r3)
	li       r0, 1
	cmpwi    r5, 0x14
	sth      r4, 0x60(r3)
	sth      r0, 8(r3)
	sth      r4, 0x66(r3)
	sth      r4, 0x78(r3)
	sth      r4, 0xa8(r3)
	sth      r4, 0x7a(r3)
	sth      r4, 0xaa(r3)
	sth      r4, 0x7c(r3)
	sth      r4, 0xac(r3)
	sth      r4, 0x7e(r3)
	sth      r4, 0xae(r3)
	bge      lbl_800A5708
	sth      r4, 0x80(r3)
	sth      r4, 0x82(r3)
	sth      r4, 0x84(r3)
	sth      r4, 0x86(r3)
	sth      r4, 0x88(r3)
	sth      r4, 0x8a(r3)
	sth      r4, 0x8c(r3)
	sth      r4, 0x8e(r3)
	sth      r4, 0x90(r3)
	sth      r4, 0x92(r3)
	sth      r4, 0x94(r3)
	sth      r4, 0x96(r3)
	sth      r4, 0x98(r3)
	sth      r4, 0x9a(r3)
	sth      r4, 0x9c(r3)
	sth      r4, 0x9e(r3)
	sth      r4, 0xa0(r3)
	sth      r4, 0xa2(r3)
	sth      r4, 0xa4(r3)
	sth      r4, 0xa6(r3)

lbl_800A5708:
	li       r0, 1
	sth      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A5714
 * Size:	00000C
 */
void JASDsp::TChannel::playStop(void)
{
	// Generated from sth r0, 0x0(r3)
	_00 = 0;
}

/*
 * --INFO--
 * Address:	800A5720
 * Size:	000010
 */
void JASDsp::TChannel::replyFinishRequest()
{
	_02 = 0;
	_00 = 0;
}

/*
 * --INFO--
 * Address:	800A5730
 * Size:	00000C
 */
void JASDsp::TChannel::forceStop(void)
{
	// Generated from sth r0, 0x10A(r3)
	_10A = 1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
bool JASDsp::TChannel::isActive() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A573C
 * Size:	000014
 */
bool JASDsp::TChannel::isFinish() const { return (_02 != 0); }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
u16 JASDsp::TChannel::getBlockCounter() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
u16 JASDsp::TChannel::getRemainSamples() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5750
 * Size:	000150
 */
void JASDsp::TChannel::setWaveInfo(JASWaveInfo const&, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stw       r5, 0x118(r3)
	  subi      r7, r13, 0x7EE8
	  lbz       r8, 0x0(r4)
	  subi      r5, r13, 0x7EE0
	  li        r0, 0
	  lbzx      r7, r7, r8
	  sth       r7, 0x64(r3)
	  lbzx      r5, r5, r8
	  sth       r5, 0x100(r3)
	  stw       r0, 0x68(r3)
	  lhz       r0, 0x100(r3)
	  cmplwi    r0, 0x4
	  bltlr-
	  lwz       r5, 0x1C(r4)
	  lwz       r0, 0x10(r4)
	  stw       r5, 0x11C(r3)
	  sth       r0, 0x102(r3)
	  lhz       r0, 0x102(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  cmplwi    r6, 0x1
	  bne-      .loc_0x5C
	  lwz       r6, 0x14(r4)

	.loc_0x5C:
	  lwz       r5, 0x14(r4)
	  lwz       r0, 0x18(r4)
	  stw       r5, 0x110(r3)
	  lha       r5, 0x20(r4)
	  stw       r0, 0x114(r3)
	  lha       r0, 0x22(r4)
	  sth       r5, 0x104(r3)
	  sth       r0, 0x106(r3)
	  b         .loc_0x88

	.loc_0x80:
	  lwz       r0, 0x11C(r3)
	  stw       r0, 0x114(r3)

	.loc_0x88:
	  cmplwi    r6, 0
	  beq-      .loc_0xFC
	  lwz       r0, 0x114(r3)
	  cmplw     r0, r6
	  ble-      .loc_0xFC
	  lbz       r0, 0x0(r4)
	  cmpwi     r0, 0x2
	  bge-      .loc_0xB4
	  cmpwi     r0, 0
	  bge-      .loc_0xC0
	  b         .loc_0xFC

	.loc_0xB4:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xFC
	  b         .loc_0xF8

	.loc_0xC0:
	  stw       r6, 0x68(r3)
	  lhz       r0, 0x100(r3)
	  lwz       r4, 0x118(r3)
	  mullw     r0, r6, r0
	  rlwinm    r0,r0,28,4,31
	  add       r0, r4, r0
	  stw       r0, 0x118(r3)
	  lwz       r0, 0x110(r3)
	  sub       r0, r0, r6
	  stw       r0, 0x110(r3)
	  lwz       r0, 0x114(r3)
	  sub       r0, r0, r6
	  stw       r0, 0x114(r3)
	  b         .loc_0xFC

	.loc_0xF8:
	  stw       r6, 0x68(r3)

	.loc_0xFC:
	  li        r0, 0
	  cmpwi     r0, 0x10
	  bgelr-
	  li        r0, 0
	  sth       r0, 0xB0(r3)
	  sth       r0, 0xB2(r3)
	  sth       r0, 0xB4(r3)
	  sth       r0, 0xB6(r3)
	  sth       r0, 0xB8(r3)
	  sth       r0, 0xBA(r3)
	  sth       r0, 0xBC(r3)
	  sth       r0, 0xBE(r3)
	  sth       r0, 0xC0(r3)
	  sth       r0, 0xC2(r3)
	  sth       r0, 0xC4(r3)
	  sth       r0, 0xC6(r3)
	  sth       r0, 0xC8(r3)
	  sth       r0, 0xCA(r3)
	  sth       r0, 0xCC(r3)
	  sth       r0, 0xCE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A58A0
 * Size:	000018
 */
void JASDsp::TChannel::setOscInfo(u32 p1)
{
	_118 = 0;
	_64  = 0x10;
	_100 = p1;
}

/*
 * --INFO--
 * Address:	800A58B8
 * Size:	00002C
 */
void JASDsp::TChannel::initAutoMixer()
{
	if (_58) {
		_54 = _56;
	} else {
		_54 = 0;
		_58 = 1;
	}
}

/*
 * --INFO--
 * Address:	800A58E4
 * Size:	00002C
 */
void JASDsp::TChannel::setAutoMixer(u16 p1, u8 p2, u8 p3, u8 p4, u8 p5)
{
	_50 = (p2 << 8) | p3;
	_52 = (p4 << 8) | (p4 << 1);
	_56 = p1;
	_58 = 1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASDsp::TChannel::updateAMVolume(unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JASDsp::TChannel::updateAMPan(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JASDsp::TChannel::updateAMFX(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A5910
 * Size:	000018
 */
void JASDsp::TChannel::setPitch(u16 pitch)
{
	if (0x7FFF <= pitch) {
		pitch = 0x7FFF;
	}
	m_pitch = pitch;
}

/*
 * --INFO--
 * Address:	800A5928
 * Size:	00000C
 */
void JASDsp::TChannel::setMixerInitDelayMax(u8 mixerInitDelayMax) { m_mixerInitDelayMax = mixerInitDelayMax; }

/*
 * --INFO--
 * Address:	800A5934
 * Size:	000020
 */
void JASDsp::TChannel::setMixerInitVolume(u8 index, s16 volume)
{
	TChannel_0x10* mixer = _10 + index;
	mixer->_04           = volume;
	mixer->_02           = volume;
	mixer->_06           = 0;
}

/*
 * --INFO--
 * Address:	800A5954
 * Size:	000018
 */
void JASDsp::TChannel::setMixerInitDelaySamples(u8 index, u8 samples)
{
	TChannel_0x10* mixer = _10 + index;
	mixer->_06           = (samples << 8) | samples;
}

/*
 * --INFO--
 * Address:	800A596C
 * Size:	000020
 */
void JASDsp::TChannel::setMixerDelaySamples(u8 index, u8 samples)
{
	TChannel_0x10* mixer = _10 + index;
	mixer->_06           = (samples << 8) | (mixer->_06 & 0xFF);
}

/*
 * --INFO--
 * Address:	800A598C
 * Size:	00002C
 */
void JASDsp::TChannel::setMixerVolume(u8 index, short volume)
{
	if (_10A != 0) {
		return;
	}
	TChannel_0x10* mixer = _10 + index;
	mixer->_02           = volume;
	mixer->_06 &= 0xFF;
}

/*
 * --INFO--
 * Address:	800A59B8
 * Size:	00000C
 */
void JASDsp::TChannel::setPauseFlag(u8 pauseFlag) { m_pauseFlag = pauseFlag; }

/*
 * --INFO--
 * Address:	800A59C4
 * Size:	000024
 * TODO: Sizeof?
 * flush__Q26JASDsp8TChannelFv
 */
void JASDsp::TChannel::flush() { DCFlushRange(this, 0x180); }

/*
 * --INFO--
 * Address:	800A59E8
 * Size:	000048
 */
void JASDsp::TChannel::initFilter()
{
	for (int i = 0; i < 8; i++) {
		m_fir8FilterParam[i] = 0;
	}
	m_fir8FilterParam[0] = 0x7FFF;
	for (int i = 0; i < 4; i++) {
		m_iirFilterParam[i] = 0;
	}
	m_iirFilterParam[0] = 0x7FFF;
	m_distFilter        = 0;
}

/*
 * --INFO--
 * Address:	800A5A30
 * Size:	000038
 */
void JASDsp::TChannel::setFilterMode(unsigned short p1)
{
	u8 v1 = p1 & 0x1F;
	if ((p1 & 0x20) != 0) {
		if (0x14 < v1) {
			v1 = 0x14;
		}
	} else if (0x18 < v1) {
		v1 = 0x18;
	}
	m_filterMode = (p1 & 0x20) + v1;
}

/*
 * --INFO--
 * Address:	800A5A68
 * Size:	000024
 */
void JASDsp::TChannel::setIIRFilterParam(short* p1)
{
	for (int i = 0; i < 4; i++) {
		m_iirFilterParam[i] = p1[i];
	}
}

/*
 * --INFO--
 * Address:	800A5A8C
 * Size:	000044
 */
void JASDsp::TChannel::setFIR8FilterParam(short* p1)
{
	for (int i = 0; i < 8; i++) {
		m_fir8FilterParam[i] = p1[i];
	}
}

/*
 * --INFO--
 * Address:	800A5AD0
 * Size:	000008
 */
void JASDsp::TChannel::setDistFilter(s16 distFilter)
{
	// Generated from sth r4, 0x150(r3)
	m_distFilter = distFilter;
}

/*
 * --INFO--
 * Address:	800A5AD8
 * Size:	000020
 */
void JASDsp::TChannel::setBusConnect(u8 index, u8 p2)
{
	TChannel_0x10* mixer = _10 + index;
	mixer->_00           = connect_table[p2];
}

/*
 * --INFO--
 * Address:	800A5AF8
 * Size:	000090
 */
void DSP_CreateMap2(u32 p1)
{
	/*
	slwi     r0, r3, 4
	lwz      r5, CH_BUF__6JASDsp@sda21(r13)
	mulli    r4, r0, 0x180
	li       r0, 4
	li       r3, 0
	li       r6, 0
	add      r4, r5, r4
	mtctr    r0

lbl_800A5B18:
	lhz      r0, 0(r4)
	rlwinm   r3, r3, 1, 0x10, 0x1e
	cmplwi   r0, 0
	beq      lbl_800A5B30
	ori      r0, r3, 1
	clrlwi   r3, r0, 0x10

lbl_800A5B30:
	lhz      r0, 0x180(r4)
	rlwinm   r3, r3, 1, 0x10, 0x1e
	cmplwi   r0, 0
	beq      lbl_800A5B48
	ori      r0, r3, 1
	clrlwi   r3, r0, 0x10

lbl_800A5B48:
	lhz      r0, 0x300(r4)
	rlwinm   r3, r3, 1, 0x10, 0x1e
	cmplwi   r0, 0
	beq      lbl_800A5B60
	ori      r0, r3, 1
	clrlwi   r3, r0, 0x10

lbl_800A5B60:
	lhz      r0, 0x480(r4)
	rlwinm   r3, r3, 1, 0x10, 0x1e
	cmplwi   r0, 0
	beq      lbl_800A5B78
	ori      r0, r3, 1
	clrlwi   r3, r0, 0x10

lbl_800A5B78:
	addi     r4, r4, 0x600
	addi     r6, r6, 3
	bdnz     lbl_800A5B18
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00015C
 */
void DSP_CreateMap()
{
	// UNUSED FUNCTION
}
