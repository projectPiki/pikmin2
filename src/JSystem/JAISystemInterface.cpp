

/*
 * --INFO--
 * Address:	800B8EE4
 * Size:	000030
 */
void JAInter::SystemInterface::checkFileExsistence( (char *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x23274
  subfic    r4, r3, -0x1
  addi      r0, r3, 0x1
  or        r0, r4, r0
  rlwinm    r3,r0,1,31,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800B8F14
 * Size:	0000EC
 */
void JAInter::SystemInterface::checkSeqActiveFlag( (JASTrack *))
{
/*
.loc_0x0:
  cmplwi    r3, 0
  beq-      .loc_0xE4
  lbz       r4, 0x35B(r3)
  cmplwi    r4, 0
  beq-      .loc_0xE4
  lwz       r0, 0x2FC(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x300(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x304(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x308(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x30C(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x310(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x314(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x318(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x31C(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x320(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x324(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x328(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x32C(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x330(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x334(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  lwz       r0, 0x338(r3)
  cmplwi    r0, 0
  beq-      .loc_0xDC

.loc_0xD4:
  mr        r3, r4
  blr       

.loc_0xDC:
  li        r3, 0
  blr       

.loc_0xE4:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800B9000
 * Size:	00004C
 */
void JAInter::SystemInterface::trackToSeqp( (JAISequence *, unsigned char))
{
/*
.loc_0x0:
  lwz       r0, 0x20(r3)
  li        r5, 0
  rlwinm.   r0,r0,0,20,20
  beq-      .loc_0x38
  rlwinm    r0,r4,30,26,29
  rlwinm    r4,r4,0,24,31
  add       r3, r3, r0
  lwz       r3, 0x608(r3)
  cmplwi    r3, 0
  beq-      .loc_0x44
  rlwinm    r0,r4,2,26,29
  add       r3, r3, r0
  lwz       r5, 0x2FC(r3)
  b         .loc_0x44

.loc_0x38:
  rlwinm    r0,r4,2,26,29
  add       r3, r3, r0
  lwz       r5, 0x608(r3)

.loc_0x44:
  mr        r3, r5
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAInter::SystemInterface::trackToSeqp( (JASTrack *, unsigned char, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B904C
 * Size:	00001C
 */
void JAInter::SystemInterface::setSeqPortargsF32( (JAInter::SeqUpdateData *, unsigned long, unsigned char, float))
{
/*
.loc_0x0:
  mulli     r4, r4, 0x48
  lwz       r3, 0x4C(r3)
  rlwinm    r0,r5,2,22,29
  add       r3, r3, r4
  add       r3, r3, r0
  stfs      f1, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAInter::SystemInterface::setSeqPortargsPS16( (JAInter::SeqUpdateData *, unsigned long, unsigned char, short *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B9068
 * Size:	00001C
 */
void JAInter::SystemInterface::setSeqPortargsU32( (JAInter::SeqUpdateData *, unsigned long, unsigned char, unsigned long))
{
/*
.loc_0x0:
  mulli     r4, r4, 0x48
  lwz       r3, 0x4C(r3)
  rlwinm    r0,r5,2,22,29
  add       r3, r3, r4
  add       r3, r3, r0
  stw       r6, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800B9084
 * Size:	000058
 */
void JAInter::SystemInterface::rootInit( (JAInter::SeqUpdateData *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0x48(r3)
  addi      r31, r3, 0x30C
  bl        -0xB5F8
  lis       r6, 0x1
  mr        r5, r3
  mr        r3, r30
  mr        r4, r31
  subi      r6, r6, 0x1
  li        r7, 0
  bl        0xA4
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800B90DC
 * Size:	000088
 */
void JAInter::SystemInterface::trackInit( (JAInter::SeqUpdateData *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r26, r3
  li        r28, 0x10
  lwz       r29, 0x48(r3)
  lwz       r0, 0x20(r29)
  rlwinm.   r0,r0,0,20,20
  beq-      .loc_0x30
  bl        -0xB658
  mr        r28, r3

.loc_0x30:
  li        r27, 0
  li        r30, 0x1
  lis       r31, 0x1
  b         .loc_0x6C

.loc_0x40:
  lwz       r3, 0x4(r26)
  slw       r0, r30, r27
  and.      r0, r3, r0
  bne-      .loc_0x68
  mr        r3, r26
  mr        r5, r27
  addi      r4, r29, 0x30C
  subi      r6, r31, 0x1
  li        r7, 0
  bl        .loc_0x88

.loc_0x68:
  addi      r27, r27, 0x1

.loc_0x6C:
  cmplw     r27, r28
  blt+      .loc_0x40
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x88:
*/
}

/*
 * --INFO--
 * Address:	800B9164
 * Size:	000288
 */
void JAInter::SystemInterface::outerInit( (JAInter::SeqUpdateData *, JASTrack *, unsigned long, unsigned short, unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r25, 0x14(r1)
  mr        r31, r4
  mr        r25, r3
  mr        r26, r5
  mr        r27, r6
  mr        r29, r31
  bl        -0xB6DC
  cmplw     r26, r3
  beq-      .loc_0x7C
  lwz       r3, 0x48(r25)
  li        r5, 0
  lwz       r0, 0x20(r3)
  rlwinm.   r0,r0,0,20,20
  beq-      .loc_0x6C
  rlwinm    r0,r26,30,26,29
  rlwinm    r4,r26,0,24,31
  add       r3, r3, r0
  lwz       r3, 0x608(r3)
  cmplwi    r3, 0
  beq-      .loc_0x78
  rlwinm    r0,r4,2,26,29
  add       r3, r3, r0
  lwz       r5, 0x2FC(r3)
  b         .loc_0x78

.loc_0x6C:
  rlwinm    r0,r26,2,26,29
  add       r3, r3, r0
  lwz       r5, 0x608(r3)

.loc_0x78:
  mr        r29, r5

.loc_0x7C:
  cmplwi    r29, 0
  beq-      .loc_0x274
  mulli     r30, r26, 0x48
  lwz       r0, 0x4C(r25)
  lis       r3, 0x800C
  add       r5, r0, r30
  subi      r4, r3, 0x6C14
  stw       r29, 0x0(r5)
  addi      r28, r5, 0x4
  addi      r3, r30, 0x30
  stw       r31, 0x4(r5)
  mr        r5, r28
  lwz       r6, 0x48(r25)
  lwz       r0, 0x20(r6)
  rlwinm    r0,r0,0,20,20
  or        r0, r26, r0
  stw       r0, 0x4(r28)
  lwz       r0, 0x4C(r25)
  add       r3, r0, r3
  bl        -0x12AAC
  lwz       r31, 0x33C(r29)
  bl        -0xB788
  cmplw     r26, r3
  bne-      .loc_0x124
  lfs       f0, 0xC(r25)
  li        r0, 0xFF
  mr        r3, r31
  li        r4, 0x40
  stfs      f0, 0xC(r28)
  lfs       f0, 0x10(r25)
  stfs      f0, 0x10(r28)
  lfs       f0, 0x14(r25)
  stfs      f0, 0x18(r28)
  lfs       f0, 0x18(r25)
  stfs      f0, 0x14(r28)
  lfs       f0, 0x1C(r25)
  stfs      f0, 0x1C(r28)
  lfs       f0, 0x20(r25)
  stfs      f0, 0x28(r28)
  stw       r0, 0x8(r28)
  bl        -0x1CD44
  b         .loc_0x1AC

.loc_0x124:
  lwz       r6, 0x48(r25)
  rlwinm    r7,r26,4,0,27
  li        r4, 0
  li        r0, 0x7F
  lwz       r5, 0x2A8(r6)
  mr        r3, r29
  add       r5, r5, r7
  lfs       f0, 0x4(r5)
  stfs      f0, 0xC(r28)
  lwz       r5, 0x2B0(r6)
  add       r5, r5, r7
  lfs       f0, 0x4(r5)
  stfs      f0, 0x10(r28)
  lwz       r5, 0x2B4(r6)
  add       r5, r5, r7
  lfs       f0, 0x4(r5)
  stfs      f0, 0x18(r28)
  lwz       r5, 0x2AC(r6)
  add       r5, r5, r7
  lfs       f0, 0x4(r5)
  stfs      f0, 0x14(r28)
  lwz       r5, 0x2B8(r6)
  add       r5, r5, r7
  lfs       f0, 0x4(r5)
  stfs      f0, 0x1C(r28)
  stw       r4, 0x24(r28)
  stw       r0, 0x8(r28)
  lwz       r4, 0x304(r6)
  lbzx      r0, r4, r26
  rlwinm    r4,r0,25,31,31
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r4,r0,1,31,31
  bl        -0x18028

.loc_0x1AC:
  mr        r3, r31
  li        r4, 0x1
  bl        -0x1CDDC
  mr        r3, r31
  li        r4, 0x2
  bl        -0x1CDE8
  mr        r3, r31
  li        r4, 0x4
  bl        -0x1CDF4
  mr        r3, r31
  li        r4, 0x8
  bl        -0x1CE00
  mr        r3, r31
  li        r4, 0x10
  bl        -0x1CE0C
  rlwinm.   r0,r27,0,31,31
  rlwinm    r26,r27,0,16,31
  bne-      .loc_0x204
  lfs       f1, -0x7310(r2)
  mr        r3, r31
  li        r4, 0x1
  bl        -0x1CEC4

.loc_0x204:
  rlwinm.   r0,r26,0,30,30
  bne-      .loc_0x21C
  lfs       f1, -0x7310(r2)
  mr        r3, r31
  li        r4, 0x2
  bl        -0x1CEDC

.loc_0x21C:
  rlwinm.   r0,r26,0,29,29
  bne-      .loc_0x234
  lfs       f1, -0x7310(r2)
  mr        r3, r31
  li        r4, 0x4
  bl        -0x1CEF4

.loc_0x234:
  rlwinm.   r0,r26,0,28,28
  bne-      .loc_0x24C
  lfs       f1, -0x7310(r2)
  mr        r3, r31
  li        r4, 0x8
  bl        -0x1CF0C

.loc_0x24C:
  rlwinm.   r0,r26,0,27,27
  bne-      .loc_0x264
  lfs       f1, -0x7310(r2)
  mr        r3, r31
  li        r4, 0x10
  bl        -0x1CF24

.loc_0x264:
  lwz       r0, 0x4C(r25)
  addi      r3, r30, 0x30
  add       r3, r0, r3
  bl        -0x12CB0

.loc_0x274:
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void JAInter::SystemInterface::setPortParameter( (JASPortArgs *, JASTrack *, unsigned long, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B93EC
 * Size:	0001BC
 */
void JAInter::SystemInterface::setSePortParameter( (JASPortArgs *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lwz       r29, 0x4(r3)
  lwz       r31, 0x0(r3)
  rlwinm    r28,r29,0,20,20
  bl        -0xB96C
  rlwinm    r4,r29,0,24,31
  cmplw     r4, r3
  beq-      .loc_0x80
  cmplwi    r28, 0
  li        r5, 0
  beq-      .loc_0x70
  srawi     r0, r4, 0x4
  rlwinm    r0,r0,2,0,29
  add       r3, r31, r0
  lwz       r3, 0x2FC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x7C
  rlwinm    r0,r4,2,26,29
  add       r3, r3, r0
  lwz       r5, 0x2FC(r3)
  b         .loc_0x7C

.loc_0x70:
  rlwinm    r0,r4,2,26,29
  add       r3, r31, r0
  lwz       r5, 0x2FC(r3)

.loc_0x7C:
  mr        r31, r5

.loc_0x80:
  cmplwi    r31, 0
  beq-      .loc_0x19C
  lwz       r0, 0x8(r30)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0xB0
  lwz       r3, 0x33C(r31)
  li        r4, 0x1
  lfs       f1, 0xC(r30)
  bl        -0x1CFEC
  lwz       r0, 0x8(r30)
  xori      r0, r0, 0x1
  stw       r0, 0x8(r30)

.loc_0xB0:
  lwz       r0, 0x8(r30)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0xD8
  lwz       r3, 0x33C(r31)
  li        r4, 0x2
  lfs       f1, 0x10(r30)
  bl        -0x1D014
  lwz       r0, 0x8(r30)
  xori      r0, r0, 0x2
  stw       r0, 0x8(r30)

.loc_0xD8:
  lwz       r0, 0x8(r30)
  rlwinm.   r0,r0,0,29,29
  beq-      .loc_0x100
  lwz       r3, 0x33C(r31)
  li        r4, 0x8
  lfs       f1, 0x14(r30)
  bl        -0x1D03C
  lwz       r0, 0x8(r30)
  xori      r0, r0, 0x4
  stw       r0, 0x8(r30)

.loc_0x100:
  lwz       r0, 0x8(r30)
  rlwinm.   r0,r0,0,28,28
  beq-      .loc_0x128
  lwz       r3, 0x33C(r31)
  li        r4, 0x4
  lfs       f1, 0x18(r30)
  bl        -0x1D064
  lwz       r0, 0x8(r30)
  xori      r0, r0, 0x8
  stw       r0, 0x8(r30)

.loc_0x128:
  lwz       r0, 0x8(r30)
  rlwinm.   r0,r0,0,24,24
  beq-      .loc_0x150
  lwz       r3, 0x33C(r31)
  li        r4, 0x40
  lfs       f1, 0x28(r30)
  bl        -0x1D08C
  lwz       r0, 0x8(r30)
  xori      r0, r0, 0x80
  stw       r0, 0x8(r30)

.loc_0x150:
  lwz       r0, 0x8(r30)
  rlwinm.   r0,r0,0,27,27
  beq-      .loc_0x178
  lwz       r3, 0x33C(r31)
  li        r4, 0x10
  lfs       f1, 0x1C(r30)
  bl        -0x1D0B4
  lwz       r0, 0x8(r30)
  xori      r0, r0, 0x10
  stw       r0, 0x8(r30)

.loc_0x178:
  lwz       r0, 0x8(r30)
  rlwinm.   r0,r0,0,25,25
  beq-      .loc_0x19C
  lwz       r0, 0x24(r30)
  cmplwi    r0, 0
  beq-      .loc_0x19C
  mr        r3, r31
  li        r4, 0x5
  bl        -0x19F3C

.loc_0x19C:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void JAInter::SystemInterface::JAIouterP( (void *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JAInter::SystemInterface::JAIouterSW( (void *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JAInter::SystemInterface::setAudioFrameParameter( (JASPortArgs *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInterface::getAudioThreadPointer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JAInterface::getDvdThreadPointer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JAInterface::setAudioThreadPauseFlag(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B95A8
 * Size:	000054
 */
void __sinit_JAISystemInterface_cpp(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x8051
  addi      r3, r3, 0x2274
  stw       r0, 0x14(r1)
  mr        r4, r3
  bl        -0x92E08
  lis       r3, 0x8051
  lis       r4, 0x800B
  addi      r3, r3, 0x2274
  li        r0, 0
  lis       r5, 0x804F
  stw       r0, 0x10(r3)
  addi      r4, r4, 0xFD0
  stw       r0, 0x14(r3)
  addi      r5, r5, 0x2870
  bl        0x8118
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
