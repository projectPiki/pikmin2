

/*
 * --INFO--
 * Address:	8044D2C4
 * Size:	0000D4
 */
void CreateAudioDecodeThread(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  lis       r5, 0x8050
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r5, 0x1D80
	  beq-      .loc_0x5C
	  lis       r5, 0x8045
	  addi      r6, r31, 0x318
	  subi      r0, r5, 0x2BD0
	  mr        r8, r3
	  mr        r5, r4
	  addi      r3, r31, 0
	  mr        r4, r0
	  li        r7, 0x1000
	  li        r9, 0x1
	  addi      r6, r6, 0x1000
	  bl        -0x35B340
	  cmpwi     r3, 0
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x5C:
	  lis       r4, 0x8045
	  addi      r6, r31, 0x318
	  mr        r8, r3
	  addi      r3, r31, 0
	  subi      r4, r4, 0x2BF8
	  li        r5, 0
	  li        r7, 0x1000
	  li        r9, 0x1
	  addi      r6, r6, 0x1000
	  bl        -0x35B378
	  cmpwi     r3, 0
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0xC0

	.loc_0x94:
	  addi      r3, r31, 0x1318
	  addi      r4, r31, 0x1358
	  li        r5, 0x3
	  bl        -0x35DEA8
	  addi      r3, r31, 0x1338
	  addi      r4, r31, 0x1364
	  li        r5, 0x3
	  bl        -0x35DEB8
	  li        r0, 0x1
	  li        r3, 0x1
	  stw       r0, -0x63D0(r13)

	.loc_0xC0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044D398
 * Size:	000034
 */
void AudioDecodeThreadStart(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x63D0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x24
	  lis       r3, 0x8050
	  addi      r3, r3, 0x1D80
	  bl        -0x35AEC4

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044D3CC
 * Size:	00003C
 */
void AudioDecodeThreadCancel(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x63D0(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x2C
	  lis       r3, 0x8050
	  addi      r3, r3, 0x1D80
	  bl        -0x35B154
	  li        r0, 0
	  stw       r0, -0x63D0(r13)

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044D408
 * Size:	000028
 */
void AudioDecoder(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)

	.loc_0x10:
	  bl        0x2370
	  mr        r31, r3
	  bl        0xB8
	  mr        r3, r31
	  bl        0x245C
	  b         .loc_0x10
	*/
}

/*
 * --INFO--
 * Address:	8044D430
 * Size:	0000A8
 */
void AudioDecoderForOnMemory(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  li        r31, 0
	  stw       r30, 0x28(r1)
	  addi      r30, r4, 0x4490
	  stw       r29, 0x24(r1)
	  stw       r3, 0x8(r1)
	  lwz       r29, 0xBC(r30)

	.loc_0x2C:
	  stw       r31, 0xC(r1)
	  addi      r3, r1, 0x8
	  bl        .loc_0xA8
	  lwz       r0, 0xC0(r30)
	  lwz       r5, 0x50(r30)
	  add       r4, r31, r0
	  divwu     r3, r4, r5
	  subi      r0, r5, 0x1
	  mullw     r3, r3, r5
	  sub       r3, r4, r3
	  cmplw     r3, r0
	  bne-      .loc_0x8C
	  lbz       r0, 0xA6(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x7C
	  lwz       r3, 0x8(r1)
	  lwz       r0, 0xB4(r30)
	  lwz       r29, 0x0(r3)
	  stw       r0, 0x8(r1)
	  b         .loc_0xA0

	.loc_0x7C:
	  lis       r3, 0x8050
	  addi      r3, r3, 0x1D80
	  bl        -0x35AD38
	  b         .loc_0xA0

	.loc_0x8C:
	  lwz       r3, 0x8(r1)
	  lwz       r4, 0x0(r3)
	  add       r0, r3, r29
	  stw       r0, 0x8(r1)
	  mr        r29, r4

	.loc_0xA0:
	  addi      r31, r31, 0x1
	  b         .loc_0x2C

	.loc_0xA8:
	*/
}

/*
 * --INFO--
 * Address:	8044D4D8
 * Size:	0000D4
 */
void AudioDecode(THPReadBuffer*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x4490
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r0, 0x6C(r31)
	  lwz       r5, 0x0(r3)
	  rlwinm    r3,r0,2,0,29
	  addi      r29, r3, 0x8
	  addi      r30, r5, 0x8
	  add       r29, r5, r29
	  bl        .loc_0xD4
	  lwz       r0, 0x6C(r31)
	  lis       r4, 0x8051
	  addi      r4, r4, 0x4490
	  mr        r31, r3
	  mtctr     r0
	  cmplwi    r0, 0
	  ble-      .loc_0xB8

	.loc_0x58:
	  lbz       r0, 0x70(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x68
	  b         .loc_0xA4

	.loc_0x68:
	  lis       r3, 0x8051
	  lwz       r6, 0x0(r30)
	  addi      r4, r3, 0x4490
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0xEC(r4)
	  li        r5, 0
	  mullw     r0, r6, r0
	  add       r4, r29, r0
	  bl        -0x34EEB0
	  stw       r3, 0x8(r31)
	  mr        r3, r31
	  lwz       r0, 0x0(r31)
	  stw       r0, 0x4(r31)
	  bl        0xE0
	  b         .loc_0xB8

	.loc_0xA4:
	  lwz       r0, 0x0(r30)
	  addi      r30, r30, 0x4
	  addi      r4, r4, 0x1
	  add       r29, r29, r0
	  bdnz+     .loc_0x58

	.loc_0xB8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xD4:
	*/
}

/*
 * --INFO--
 * Address:	8044D5AC
 * Size:	000034
 */
void PopFreeAudioBuffer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  addi      r4, r1, 0x8
	  addi      r3, r3, 0x3098
	  bl        -0x35DFE4
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044D5E0
 * Size:	000030
 */
void PushFreeAudioBuffer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8050
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r5, 0x3098
	  li        r5, 0
	  bl        -0x35E0E0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044D610
 * Size:	000044
 */
void PopDecodedAudioBuffer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8050
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r4, 0x30B8
	  addi      r4, r1, 0x8
	  bl        -0x35E048
	  cmpwi     r3, 0x1
	  bne-      .loc_0x30
	  lwz       r3, 0x8(r1)
	  b         .loc_0x34

	.loc_0x30:
	  li        r3, 0

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044D654
 * Size:	000030
 */
void PushDecodedAudioBuffer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8050
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r5, 0x30B8
	  li        r5, 0x1
	  bl        -0x35E154
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
