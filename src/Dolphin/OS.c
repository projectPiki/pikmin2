#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/PPCArch.h"

static f64 ZeroF;
static f32 ZeroPS[2];

static OSBootInfo* BootInfo;

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void __OSIsDebuggerPresent(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EAFC8
 * Size:	000128
 */
// clang-format off
asm void __OSFPRInit(void)
{
    nofralloc

    mfmsr   r3
    ori     r3, r3, 0x2000
    mtmsr   r3

    mfspr   r3, 0x398
    rlwinm. r3, r3, 3, 31, 31
    beq     SkipPairedSingles

    lis     r3, ZeroPS@ha
    addi    r3, r3, ZeroPS@l
    psq_l   fp0, 0(r3), 0, 0
    ps_mr   fp1, fp0
    ps_mr   fp2, fp0
    ps_mr   fp3, fp0
    ps_mr   fp4, fp0
    ps_mr   fp5, fp0
    ps_mr   fp6, fp0
    ps_mr   fp7, fp0
    ps_mr   fp8, fp0
    ps_mr   fp9, fp0
    ps_mr   fp10, fp0
    ps_mr   fp11, fp0
    ps_mr   fp12, fp0
    ps_mr   fp13, fp0
    ps_mr   fp14, fp0
    ps_mr   fp15, fp0
    ps_mr   fp16, fp0
    ps_mr   fp17, fp0
    ps_mr   fp18, fp0
    ps_mr   fp19, fp0
    ps_mr   fp20, fp0
    ps_mr   fp21, fp0
    ps_mr   fp22, fp0
    ps_mr   fp23, fp0
    ps_mr   fp24, fp0
    ps_mr   fp25, fp0
    ps_mr   fp26, fp0
    ps_mr   fp27, fp0
    ps_mr   fp28, fp0
    ps_mr   fp29, fp0
    ps_mr   fp30, fp0
    ps_mr   fp31, fp0

SkipPairedSingles:
    lfd     fp0, ZeroF
    fmr     fp1, fp0
    fmr     fp2, fp0
    fmr     fp3, fp0
    fmr     fp4, fp0
    fmr     fp5, fp0
    fmr     fp6, fp0
    fmr     fp7, fp0
    fmr     fp8, fp0
    fmr     fp9, fp0
    fmr     fp10, fp0
    fmr     fp11, fp0
    fmr     fp12, fp0
    fmr     fp13, fp0
    fmr     fp14, fp0
    fmr     fp15, fp0
    fmr     fp16, fp0
    fmr     fp17, fp0
    fmr     fp18, fp0
    fmr     fp19, fp0
    fmr     fp20, fp0
    fmr     fp21, fp0
    fmr     fp22, fp0
    fmr     fp23, fp0
    fmr     fp24, fp0
    fmr     fp25, fp0
    fmr     fp26, fp0
    fmr     fp27, fp0
    fmr     fp28, fp0
    fmr     fp29, fp0
    fmr     fp30, fp0
    fmr     fp31, fp0

    mtfsf   0xFF, fp0

    blr
}
// clang-format on
/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void DisableWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EB0F0
 * Size:	000028
 */
u32 OSGetConsoleType()
{
	if (BootInfo == NULL || BootInfo->consoleType == 0) {
		return 0x10000002; // default console type
	}
	return BootInfo->consoleType;
	/*
	.loc_0x0:
	  lwz       r3, -0x70F0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x18
	  lwz       r3, 0x2C(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x24

	.loc_0x18:
	  lis       r3, 0x1000
	  addi      r3, r3, 0x2
	  b         .loc_0x24

	.loc_0x24:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EB118
 * Size:	000128
 */
void ClearArena(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  bl        0x5574
	  subis     r0, r3, 0x8000
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  li        r0, 0
	  stw       r0, -0x70C4(r13)
	  stw       r0, -0x70C8(r13)
	  bl        0x12E0
	  mr        r31, r3
	  bl        0x12E0
	  sub       r31, r31, r3
	  bl        0x12D8
	  mr        r5, r31
	  li        r4, 0
	  bl        -0xE60AC
	  b         .loc_0x114

	.loc_0x50:
	  lis       r4, 0x8130
	  lwz       r3, -0x2010(r4)
	  lwz       r0, -0x2014(r4)
	  cmplwi    r3, 0
	  stw       r3, -0x70C4(r13)
	  stw       r0, -0x70C8(r13)
	  bne-      .loc_0x90
	  bl        0x12A0
	  mr        r31, r3
	  bl        0x12A0
	  sub       r31, r31, r3
	  bl        0x1298
	  mr        r5, r31
	  li        r4, 0
	  bl        -0xE60EC
	  b         .loc_0x114

	.loc_0x90:
	  bl        0x1284
	  lwz       r0, -0x70C4(r13)
	  cmplw     r3, r0
	  bge-      .loc_0x114
	  bl        0x126C
	  lwz       r0, -0x70C4(r13)
	  cmplw     r3, r0
	  bgt-      .loc_0xD4
	  bl        0x125C
	  mr        r31, r3
	  bl        0x125C
	  sub       r31, r31, r3
	  bl        0x1254
	  mr        r5, r31
	  li        r4, 0
	  bl        -0xE6130
	  b         .loc_0x114

	.loc_0xD4:
	  bl        0x1240
	  lwz       r0, -0x70C4(r13)
	  sub       r31, r0, r3
	  bl        0x1234
	  mr        r5, r31
	  li        r4, 0
	  bl        -0xE6150
	  bl        0x121C
	  lwz       r31, -0x70C8(r13)
	  cmplw     r3, r31
	  ble-      .loc_0x114
	  bl        0x120C
	  sub       r5, r3, r31
	  mr        r3, r31
	  li        r4, 0
	  bl        -0xE6174

	.loc_0x114:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EB240
 * Size:	00003C
 */
void InquiryCallback(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xC(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x10
	  b         .loc_0x2C

	.loc_0x10:
	  lis       r3, 0x804F
	  addi      r3, r3, 0x6620
	  lhz       r0, 0x2(r3)
	  lis       r3, 0x8000
	  ori       r0, r0, 0x8000
	  sth       r0, 0x30E6(r3)
	  b         .loc_0x38

	.loc_0x2C:
	  li        r0, 0x1
	  lis       r3, 0x8000
	  sth       r0, 0x30E6(r3)

	.loc_0x38:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EB27C
 * Size:	0003D8
 */
void OSInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  stw       r29, 0xC(r1)
	  lwz       r0, -0x70D0(r13)
	  lis       r3, 0x804F
	  addi      r30, r3, 0x6620
	  cmpwi     r0, 0
	  lis       r3, 0x804B
	  subi      r31, r3, 0x7700
	  bne-      .loc_0x3BC
	  li        r0, 0x1
	  stw       r0, -0x70D0(r13)
	  bl        0x78F8
	  stw       r4, -0x70B4(r13)
	  stw       r3, -0x70B8(r13)
	  bl        0x3974
	  li        r3, 0
	  bl        -0x16D20
	  li        r3, 0
	  bl        -0x16D20
	  li        r3, 0
	  bl        -0x16D20
	  li        r3, 0
	  bl        -0x16D20
	  li        r3, 0
	  bl        -0x16D20
	  li        r3, 0
	  bl        -0x16D20
	  bl        -0x16CBC
	  bl        -0x16C98
	  li        r0, 0
	  lis       r4, 0x8000
	  stw       r0, -0x70EC(r13)
	  stw       r4, -0x70F0(r13)
	  stw       r0, -0x71DC(r13)
	  lwz       r3, 0xF4(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  addi      r0, r3, 0xC
	  stw       r0, -0x70EC(r13)
	  lwz       r0, 0x24(r3)
	  lwz       r3, -0x70EC(r13)
	  stw       r0, -0x6FE8(r13)
	  lwz       r0, 0x0(r3)
	  rlwinm    r0,r0,0,24,31
	  stb       r0, 0x30E8(r4)
	  lwz       r0, -0x6FE8(r13)
	  rlwinm    r0,r0,0,24,31
	  stb       r0, 0x30E9(r4)
	  b         .loc_0xF8

	.loc_0xD4:
	  lwz       r0, 0x34(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lbz       r3, 0x30E8(r4)
	  subi      r0, r13, 0x70E8
	  stw       r3, -0x70E8(r13)
	  stw       r0, -0x70EC(r13)
	  lbz       r0, 0x30E9(r4)
	  stw       r0, -0x6FE8(r13)

	.loc_0xF8:
	  li        r0, 0x1
	  lwz       r3, -0x70F0(r13)
	  stw       r0, -0x71DC(r13)
	  lwz       r3, 0x30(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x11C
	  lis       r3, 0x8053
	  addi      r3, r3, 0x2EE0
	  b         .loc_0x11C

	.loc_0x11C:
	  bl        0x10A4
	  lwz       r3, -0x70F0(r13)
	  lwz       r0, 0x30(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x15C
	  lwz       r3, -0x70EC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x15C
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0x2
	  bge-      .loc_0x15C
	  lis       r3, 0x8053
	  addi      r3, r3, 0xED8
	  addi      r0, r3, 0x1F
	  rlwinm    r3,r0,0,0,26
	  bl        0x1068

	.loc_0x15C:
	  lwz       r3, -0x70F0(r13)
	  lwz       r3, 0x34(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x178
	  lis       r3, 0x8170
	  addi      r3, r3, 0
	  b         .loc_0x178

	.loc_0x178:
	  bl        0x1040
	  bl        .loc_0x3D8
	  bl        0x63F8
	  bl        0x6B4
	  bl        0x40A0
	  bl        0x38AC
	  lis       r3, 0x800F
	  addi      r4, r3, 0x6D0
	  li        r3, 0x16
	  bl        0x386C
	  bl        0x215C
	  bl        0x183C
	  bl        -0xA688
	  bl        0xA3C8
	  bl        0x57C8
	  bl        0x642C
	  bl        0x1010
	  bl        -0x16E14
	  rlwinm    r3,r3,0,2,0
	  bl        -0x16E14
	  lwz       r0, -0x70C0(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x1D8
	  bl        0x45C8

	.loc_0x1D8:
	  addi      r3, r31, 0x44
	  crclr     6, 0x6
	  bl        0x2290
	  addi      r3, r31, 0x54
	  crclr     6, 0x6
	  addi      r4, r31, 0x6C
	  addi      r5, r31, 0x78
	  bl        0x227C
	  addi      r3, r31, 0x84
	  crclr     6, 0x6
	  bl        0x2270
	  lwz       r3, -0x70F0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x21C
	  lwz       r4, 0x2C(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x228

	.loc_0x21C:
	  lis       r3, 0x1000
	  addi      r4, r3, 0x2
	  b         .loc_0x228

	.loc_0x228:
	  rlwinm    r3,r4,0,0,3
	  lis       r0, 0x1000
	  cmpw      r3, r0
	  beq-      .loc_0x268
	  bge-      .loc_0x248
	  cmpwi     r3, 0
	  beq-      .loc_0x258
	  b         .loc_0x2FC

	.loc_0x248:
	  lis       r0, 0x2000
	  cmpw      r3, r0
	  beq-      .loc_0x268
	  b         .loc_0x2FC

	.loc_0x258:
	  crclr     6, 0x6
	  addi      r3, r31, 0x94
	  bl        0x2210
	  b         .loc_0x308

	.loc_0x268:
	  lis       r3, 0x1000
	  rlwinm    r5,r4,0,4,31
	  addi      r0, r3, 0x2
	  cmpw      r5, r0
	  beq-      .loc_0x2C0
	  bge-      .loc_0x290
	  cmpw      r5, r3
	  beq-      .loc_0x2A0
	  bge-      .loc_0x2B0
	  b         .loc_0x2E0

	.loc_0x290:
	  addi      r0, r3, 0x4
	  cmpw      r5, r0
	  bge-      .loc_0x2E0
	  b         .loc_0x2D0

	.loc_0x2A0:
	  addi      r3, r31, 0xA0
	  crclr     6, 0x6
	  bl        0x21C8
	  b         .loc_0x308

	.loc_0x2B0:
	  addi      r3, r31, 0xB0
	  crclr     6, 0x6
	  bl        0x21B8
	  b         .loc_0x308

	.loc_0x2C0:
	  addi      r3, r31, 0xC0
	  crclr     6, 0x6
	  bl        0x21A8
	  b         .loc_0x308

	.loc_0x2D0:
	  addi      r3, r31, 0xD0
	  crclr     6, 0x6
	  bl        0x2198
	  b         .loc_0x308

	.loc_0x2E0:
	  rlwinm    r6,r4,0,4,31
	  crclr     6, 0x6
	  mr        r5, r4
	  addi      r3, r31, 0xE0
	  subi      r4, r6, 0x3
	  bl        0x217C
	  b         .loc_0x308

	.loc_0x2FC:
	  crclr     6, 0x6
	  subi      r3, r13, 0x7CB4
	  bl        0x216C

	.loc_0x308:
	  lwz       r4, -0x70F0(r13)
	  addi      r3, r31, 0xFC
	  crclr     6, 0x6
	  lwz       r0, 0x28(r4)
	  rlwinm    r4,r0,12,20,31
	  bl        0x2154
	  bl        0xE88
	  mr        r29, r3
	  bl        0xE88
	  mr        r4, r3
	  crclr     6, 0x6
	  mr        r5, r29
	  addi      r3, r31, 0x10C
	  bl        0x2134
	  lwz       r3, -0x7CB8(r13)
	  bl        0x4C8
	  lwz       r3, -0x70EC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x364
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0x2
	  blt-      .loc_0x364
	  bl        -0x2B1F0

	.loc_0x364:
	  bl        -0x4C8
	  bl        0x3668
	  lwz       r0, -0x70C0(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x3BC
	  bl        -0xE8C8
	  lwz       r0, -0x70E4(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x39C
	  lis       r3, 0x1
	  subi      r0, r3, 0x7000
	  lis       r3, 0x8000
	  sth       r0, 0x30E6(r3)
	  b         .loc_0x3BC

	.loc_0x39C:
	  mr        r3, r30
	  li        r4, 0x20
	  bl        0x10CC
	  lis       r3, 0x800F
	  subi      r5, r3, 0x4DC0
	  mr        r4, r30
	  addi      r3, r30, 0x20
	  bl        -0xC9E4

	.loc_0x3BC:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr

	.loc_0x3D8:
	*/
}

/*
 * --INFO--
 * Address:	800EB654
 * Size:	000280
 */
void OSExceptionInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stmw      r20, 0x8(r1)
	  lis       r3, 0x8000
	  lwz       r0, 0x60(r3)
	  lis       r4, 0x800F
	  subi      r30, r4, 0x466C
	  lis       r5, 0x800F
	  lwz       r25, 0x0(r30)
	  lis       r4, 0x800F
	  subi      r5, r5, 0x46D4
	  subi      r4, r4, 0x463C
	  lis       r6, 0x804B
	  cmplwi    r0, 0
	  mr        r24, r5
	  subi      r29, r6, 0x7700
	  sub       r23, r4, r5
	  addi      r20, r3, 0x60
	  bne-      .loc_0x98
	  addi      r3, r29, 0x160
	  crclr     6, 0x6
	  bl        -0x10A4C
	  lis       r4, 0x800F
	  lis       r3, 0x800F
	  subi      r0, r3, 0x4708
	  subi      r4, r4, 0x472C
	  sub       r21, r0, r4
	  mr        r3, r20
	  mr        r5, r21
	  bl        -0xE6530
	  mr        r3, r20
	  mr        r4, r21
	  bl        0x10A0
	  sync
	  mr        r3, r20
	  mr        r4, r21
	  bl        0x1114

	.loc_0x98:
	  lis       r4, 0x800F
	  lis       r3, 0x800F
	  subi      r31, r4, 0x4708
	  subi      r0, r3, 0x4704
	  addi      r28, r29, 0x124
	  sub       r27, r0, r31
	  li        r26, 0
	  b         .loc_0xB8

	.loc_0xB8:
	  lis       r3, 0x800F
	  subi      r21, r3, 0x467C
	  lis       r22, 0x6000
	  b         .loc_0xC8

	.loc_0xC8:
	  b         .loc_0x210

	.loc_0xCC:
	  lwz       r3, -0x70EC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0x2
	  blt-      .loc_0x108
	  mr        r3, r26
	  bl        -0x10AF8
	  cmpwi     r3, 0
	  beq-      .loc_0x108
	  addi      r3, r29, 0x17C
	  crclr     6, 0x6
	  rlwinm    r4,r26,0,24,31
	  bl        -0x10AF4
	  b         .loc_0x208

	.loc_0x108:
	  rlwinm    r20,r26,0,24,31
	  or        r0, r25, r20
	  stw       r0, 0x0(r30)
	  mr        r3, r26
	  bl        -0x10B28
	  cmpwi     r3, 0
	  beq-      .loc_0x148
	  mr        r4, r20
	  crclr     6, 0x6
	  addi      r3, r29, 0x1AC
	  bl        -0x10B24
	  mr        r3, r21
	  mr        r4, r31
	  mr        r5, r27
	  bl        -0xE65F8
	  b         .loc_0x1D4

	.loc_0x148:
	  mr        r4, r21
	  b         .loc_0x150

	.loc_0x150:
	  cmplwi    r27, 0
	  addi      r3, r27, 0x3
	  rlwinm    r3,r3,30,2,31
	  ble-      .loc_0x1D4
	  rlwinm    r0,r3,29,3,31
	  cmplwi    r0, 0
	  mtctr     r0
	  beq-      .loc_0x1C0
	  b         .loc_0x174

	.loc_0x174:
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  bdnz+     .loc_0x174
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x1D4

	.loc_0x1C0:
	  mtctr     r3
	  b         .loc_0x1C8

	.loc_0x1C8:
	  stw       r22, 0x0(r4)
	  addi      r4, r4, 0x4
	  bdnz+     .loc_0x1C8

	.loc_0x1D4:
	  lwz       r3, 0x0(r28)
	  mr        r4, r24
	  mr        r5, r23
	  subis     r20, r3, 0x8000
	  mr        r3, r20
	  bl        -0xE66A0
	  mr        r3, r20
	  mr        r4, r23
	  bl        0xF30
	  sync
	  mr        r3, r20
	  mr        r4, r23
	  bl        0xFA4

	.loc_0x208:
	  addi      r28, r28, 0x4
	  addi      r26, r26, 0x1

	.loc_0x210:
	  rlwinm    r0,r26,0,24,31
	  cmplwi    r0, 0xF
	  blt+      .loc_0xCC
	  lis       r3, 0x8000
	  addi      r0, r3, 0x3000
	  stw       r0, -0x70CC(r13)
	  li        r20, 0
	  b         .loc_0x230

	.loc_0x230:
	  lis       r3, 0x800F
	  subi      r23, r3, 0x4638
	  b         .loc_0x23C

	.loc_0x23C:
	  b         .loc_0x250

	.loc_0x240:
	  mr        r3, r20
	  mr        r4, r23
	  bl        0x60
	  addi      r20, r20, 0x1

	.loc_0x250:
	  rlwinm    r0,r20,0,24,31
	  cmplwi    r0, 0xF
	  blt+      .loc_0x240
	  stw       r25, 0x0(r30)
	  addi      r3, r29, 0x1DC
	  crclr     6, 0x6
	  bl        -0x10C5C
	  lmw       r20, 0x8(r1)
	  lwz       r0, 0x3C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EB8D4
 * Size:	000024
 */
void __OSDBIntegrator(void)
{
	/*
	.loc_0x0:
	  li        r5, 0x40
	  mflr      r3
	  stw       r3, 0xC(r5)
	  lwz       r3, 0x8(r5)
	  oris      r3, r3, 0x8000
	  mtlr      r3
	  li        r3, 0x30
	  mtmsr     r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EB8F8
 * Size:	000004
 */
void __OSDBJump(void)
{
	/*
	.loc_0x0:
	  bla       0x60
	*/
}

/*
 * --INFO--
 * Address:	800EB8FC
 * Size:	00001C
 */
void __OSSetExceptionHandler(void)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r3,0,24,31
	  lwz       r3, -0x70CC(r13)
	  rlwinm    r0,r0,2,0,29
	  add       r5, r3, r0
	  lwz       r3, 0x0(r5)
	  stw       r4, 0x0(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EB918
 * Size:	000014
 */
void __OSGetExceptionHandler(void)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r3,0,24,31
	  lwz       r3, -0x70CC(r13)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EB92C
 * Size:	00009C
 */
void OSExceptionVector(void)
{
	/*
	.loc_0x0:
	  mtsprg    0, r4
	  lwz       r4, 0xC0(r0)
	  stw       r3, 0xC(r4)
	  mfsprg    r3, 0
	  stw       r3, 0x10(r4)
	  stw       r5, 0x14(r4)
	  lhz       r3, 0x1A2(r4)
	  ori       r3, r3, 0x2
	  sth       r3, 0x1A2(r4)
	  mfcr      r3
	  stw       r3, 0x80(r4)
	  mflr      r3
	  stw       r3, 0x84(r4)
	  mfctr     r3
	  stw       r3, 0x88(r4)
	  mfxer     r3
	  stw       r3, 0x8C(r4)
	  mfsrr0    r3
	  stw       r3, 0x198(r4)
	  mfsrr1    r3
	  stw       r3, 0x19C(r4)
	  mr        r5, r3
	  nop
	  mfmsr     r3
	  ori       r3, r3, 0x30
	  mtsrr1    r3
	  li        r3, 0
	  lwz       r4, 0xD4(r0)
	  rlwinm.   r5,r5,0,30,30
	  bne-      .loc_0x88
	  lis       r5, 0x800F
	  subi      r5, r5, 0x4638
	  mtsrr0    r5
	  rfi

	.loc_0x88:
	  rlwinm    r5,r3,2,22,29
	  lwz       r5, 0x3000(r5)
	  mtsrr0    r5
	  rfi
	  nop
	*/
}

/*
 * --INFO--
 * Address:	800EB9C8
 * Size:	000058
 */
void OSDefaultExceptionHandler(void)
{
	/*
	.loc_0x0:
	  stw       r0, 0x0(r4)
	  stw       r1, 0x4(r4)
	  stw       r2, 0x8(r4)
	  stmw      r6, 0x18(r4)
	  mfspr     r0, 0x391
	  stw       r0, 0x1A8(r4)
	  mfspr     r0, 0x392
	  stw       r0, 0x1AC(r4)
	  mfspr     r0, 0x393
	  stw       r0, 0x1B0(r4)
	  mfspr     r0, 0x394
	  stw       r0, 0x1B4(r4)
	  mfspr     r0, 0x395
	  stw       r0, 0x1B8(r4)
	  mfspr     r0, 0x396
	  stw       r0, 0x1BC(r4)
	  mfspr     r0, 0x397
	  stw       r0, 0x1C0(r4)
	  mfdsisr   r5
	  mfdar     r6
	  stwu      r1, -0x8(r1)
	  b         0x2094
	*/
}

/*
 * --INFO--
 * Address:	800EBA20
 * Size:	000054
 */
void __OSPSInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        -0x17408
	  oris      r3, r3, 0xA000
	  bl        -0x17408
	  bl        0xDF8
	  sync
	  li        r3, 0
	  mtspr     912, r3
	  mtspr     913, r3
	  mtspr     914, r3
	  mtspr     915, r3
	  mtspr     916, r3
	  mtspr     917, r3
	  mtspr     918, r3
	  mtspr     919, r3
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EBA74
 * Size:	000014
 */
void __OSGetDIConfig(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x6000
	  lwz       r0, 0x24(r3)
	  rlwinm    r3,r0,0,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EBA88
 * Size:	00002C
 */
void OSRegisterVersion(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  mr        r4, r3
	  crclr     6, 0x6
	  subi      r3, r13, 0x7CAC
	  bl        0x1C4C
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}
