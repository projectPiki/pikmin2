

/*
 * --INFO--
 * Address:	800DAE50
 * Size:	0001A0
 */
void __DSP_exec_task(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0
	  stw       r30, 0x10(r1)
	  mr.       r30, r3
	  beq-      .loc_0x60
	  lwz       r3, 0x18(r30)
	  bl        -0x18C

	.loc_0x28:
	  bl        -0x1C8
	  cmplwi    r3, 0
	  bne+      .loc_0x28
	  lwz       r3, 0x1C(r30)
	  bl        -0x1A0

	.loc_0x3C:
	  bl        -0x1DC
	  cmplwi    r3, 0
	  bne+      .loc_0x3C
	  lwz       r3, 0x20(r30)
	  bl        -0x1B4

	.loc_0x50:
	  bl        -0x1F0
	  cmplwi    r3, 0
	  bne+      .loc_0x50
	  b         .loc_0x9C

	.loc_0x60:
	  li        r3, 0
	  bl        -0x1CC

	.loc_0x68:
	  bl        -0x208
	  cmplwi    r3, 0
	  bne+      .loc_0x68
	  li        r3, 0
	  bl        -0x1E0

	.loc_0x7C:
	  bl        -0x21C
	  cmplwi    r3, 0
	  bne+      .loc_0x7C
	  li        r3, 0
	  bl        -0x1F4

	.loc_0x90:
	  bl        -0x230
	  cmplwi    r3, 0
	  bne+      .loc_0x90

	.loc_0x9C:
	  lwz       r3, 0xC(r31)
	  bl        -0x208

	.loc_0xA4:
	  bl        -0x244
	  cmplwi    r3, 0
	  bne+      .loc_0xA4
	  lwz       r3, 0x10(r31)
	  bl        -0x21C

	.loc_0xB8:
	  bl        -0x258
	  cmplwi    r3, 0
	  bne+      .loc_0xB8
	  lwz       r3, 0x14(r31)
	  bl        -0x230

	.loc_0xCC:
	  bl        -0x26C
	  cmplwi    r3, 0
	  bne+      .loc_0xCC
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x138
	  lhz       r3, 0x24(r31)
	  bl        -0x250

	.loc_0xEC:
	  bl        -0x28C
	  cmplwi    r3, 0
	  bne+      .loc_0xEC
	  li        r3, 0
	  bl        -0x264

	.loc_0x100:
	  bl        -0x2A0
	  cmplwi    r3, 0
	  bne+      .loc_0x100
	  li        r3, 0
	  bl        -0x278

	.loc_0x114:
	  bl        -0x2B4
	  cmplwi    r3, 0
	  bne+      .loc_0x114
	  li        r3, 0
	  bl        -0x28C

	.loc_0x128:
	  bl        -0x2C8
	  cmplwi    r3, 0
	  bne+      .loc_0x128
	  b         .loc_0x188

	.loc_0x138:
	  lhz       r3, 0x26(r31)
	  bl        -0x2A4

	.loc_0x140:
	  bl        -0x2E0
	  cmplwi    r3, 0
	  bne+      .loc_0x140
	  lwz       r3, 0x18(r31)
	  bl        -0x2B8

	.loc_0x154:
	  bl        -0x2F4
	  cmplwi    r3, 0
	  bne+      .loc_0x154
	  lwz       r3, 0x1C(r31)
	  bl        -0x2CC

	.loc_0x168:
	  bl        -0x308
	  cmplwi    r3, 0
	  bne+      .loc_0x168
	  lwz       r3, 0x20(r31)
	  bl        -0x2E0

	.loc_0x17C:
	  bl        -0x31C
	  cmplwi    r3, 0
	  bne+      .loc_0x17C

	.loc_0x188:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DAFF0
 * Size:	00018C
 */
void __DSP_boot_task(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0x79B8
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0

	.loc_0x20:
	  bl        -0x350
	  cmplwi    r3, 0
	  beq+      .loc_0x20
	  bl        -0x34C
	  stw       r3, 0xC(r1)
	  lis       r3, 0x80F4
	  subi      r3, r3, 0x5FFF
	  bl        -0x344

	.loc_0x40:
	  bl        -0x380
	  cmplwi    r3, 0
	  bne+      .loc_0x40
	  lwz       r3, 0xC(r30)
	  bl        -0x358

	.loc_0x54:
	  bl        -0x394
	  cmplwi    r3, 0
	  bne+      .loc_0x54
	  lis       r3, 0x80F4
	  subi      r3, r3, 0x3FFE
	  bl        -0x370

	.loc_0x6C:
	  bl        -0x3AC
	  cmplwi    r3, 0
	  bne+      .loc_0x6C
	  lwz       r0, 0x14(r30)
	  rlwinm    r3,r0,0,16,31
	  bl        -0x388

	.loc_0x84:
	  bl        -0x3C4
	  cmplwi    r3, 0
	  bne+      .loc_0x84
	  lis       r3, 0x80F4
	  subi      r3, r3, 0x5FFE
	  bl        -0x3A0

	.loc_0x9C:
	  bl        -0x3DC
	  cmplwi    r3, 0
	  bne+      .loc_0x9C
	  lwz       r3, 0x10(r30)
	  bl        -0x3B4

	.loc_0xB0:
	  bl        -0x3F0
	  cmplwi    r3, 0
	  bne+      .loc_0xB0
	  lis       r3, 0x80F4
	  subi      r3, r3, 0x4FFE
	  bl        -0x3CC

	.loc_0xC8:
	  bl        -0x408
	  cmplwi    r3, 0
	  bne+      .loc_0xC8
	  li        r3, 0
	  bl        -0x3E0

	.loc_0xDC:
	  bl        -0x41C
	  cmplwi    r3, 0
	  bne+      .loc_0xDC
	  lis       r3, 0x80F4
	  subi      r3, r3, 0x2FFF
	  bl        -0x3F8

	.loc_0xF4:
	  bl        -0x434
	  cmplwi    r3, 0
	  bne+      .loc_0xF4
	  lhz       r3, 0x24(r30)
	  bl        -0x40C

	.loc_0x108:
	  bl        -0x448
	  cmplwi    r3, 0
	  bne+      .loc_0x108
	  addi      r3, r31, 0
	  crclr     6, 0x6
	  addi      r4, r30, 0
	  bl        -0x310
	  lwz       r4, 0xC(r30)
	  addi      r3, r31, 0x20
	  crclr     6, 0x6
	  bl        -0x320
	  lwz       r4, 0x14(r30)
	  addi      r3, r31, 0x50
	  crclr     6, 0x6
	  bl        -0x330
	  lwz       r4, 0x10(r30)
	  addi      r3, r31, 0x80
	  crclr     6, 0x6
	  bl        -0x340
	  lwz       r4, 0x1C(r30)
	  addi      r3, r31, 0xB0
	  crclr     6, 0x6
	  bl        -0x350
	  lhz       r4, 0x24(r30)
	  addi      r3, r31, 0xE0
	  crclr     6, 0x6
	  bl        -0x360
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DB17C
 * Size:	0000A0
 */
void __DSP_insert_task(void)
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7240(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x28
	  stw       r3, -0x723C(r13)
	  li        r0, 0
	  stw       r3, -0x7244(r13)
	  stw       r3, -0x7240(r13)
	  stw       r0, 0x3C(r3)
	  stw       r0, 0x38(r3)
	  blr

	.loc_0x28:
	  mr        r5, r0
	  b         .loc_0x70

	.loc_0x30:
	  lwz       r4, 0x4(r3)
	  lwz       r0, 0x4(r5)
	  cmplw     r4, r0
	  bge-      .loc_0x6C
	  lwz       r0, 0x3C(r5)
	  stw       r0, 0x3C(r3)
	  stw       r3, 0x3C(r5)
	  stw       r5, 0x38(r3)
	  lwz       r4, 0x3C(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x64
	  stw       r3, -0x7240(r13)
	  b         .loc_0x78

	.loc_0x64:
	  stw       r3, 0x38(r4)
	  b         .loc_0x78

	.loc_0x6C:
	  lwz       r5, 0x38(r5)

	.loc_0x70:
	  cmplwi    r5, 0
	  bne+      .loc_0x30

	.loc_0x78:
	  cmplwi    r5, 0
	  bnelr-
	  lwz       r4, -0x7244(r13)
	  li        r0, 0
	  stw       r3, 0x38(r4)
	  stw       r0, 0x38(r3)
	  lwz       r0, -0x7244(r13)
	  stw       r0, 0x3C(r3)
	  stw       r3, -0x7244(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void __DSP_add_task(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DB21C
 * Size:	000094
 */
void __DSP_remove_task(void)
{
	/*
	.loc_0x0:
	  li        r4, 0
	  stw       r4, 0x8(r3)
	  li        r0, 0x3
	  stw       r0, 0x0(r3)
	  lwz       r0, -0x7240(r13)
	  cmplw     r0, r3
	  bne-      .loc_0x48
	  lwz       r0, 0x38(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  stw       r0, -0x7240(r13)
	  lwz       r3, 0x38(r3)
	  stw       r4, 0x3C(r3)
	  blr

	.loc_0x38:
	  stw       r4, -0x723C(r13)
	  stw       r4, -0x7244(r13)
	  stw       r4, -0x7240(r13)
	  blr

	.loc_0x48:
	  lwz       r0, -0x7244(r13)
	  cmplw     r0, r3
	  bne-      .loc_0x70
	  lwz       r0, 0x3C(r3)
	  stw       r0, -0x7244(r13)
	  lwz       r3, 0x3C(r3)
	  stw       r4, 0x38(r3)
	  lwz       r0, -0x7240(r13)
	  stw       r0, -0x723C(r13)
	  blr

	.loc_0x70:
	  lwz       r0, 0x38(r3)
	  stw       r0, -0x723C(r13)
	  lwz       r0, 0x38(r3)
	  lwz       r4, 0x3C(r3)
	  stw       r0, 0x38(r4)
	  lwz       r0, 0x3C(r3)
	  lwz       r3, 0x38(r3)
	  stw       r0, 0x3C(r3)
	  blr
	*/
}
