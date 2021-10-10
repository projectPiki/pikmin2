

/*
 * --INFO--
 * Address:	8009A7DC
 * Size:	0006D0
 */
void JASBNKParser::createBasicBank(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r14, 0x18(r1)
	  mr        r15, r3
	  bl        0x1B0C
	  mr        r30, r3
	  bl        -0x77044
	  mr        r14, r3
	  mr        r31, r15
	  mr        r4, r30
	  li        r3, 0x10
	  li        r5, 0
	  bl        -0x768D0
	  mr.       r29, r3
	  beq-      .loc_0x48
	  bl        -0x1120
	  mr        r29, r3

	.loc_0x48:
	  cmplwi    r29, 0
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0x6BC

	.loc_0x58:
	  mr        r3, r29
	  li        r4, 0x100
	  bl        -0x1058
	  li        r21, 0
	  mr        r24, r31

	.loc_0x6C:
	  lwz       r4, 0x24(r24)
	  mr        r3, r31
	  bl        0x850
	  mr.       r16, r3
	  beq-      .loc_0x440
	  mr        r4, r30
	  li        r3, 0x24
	  li        r5, 0
	  bl        -0x76928
	  mr.       r15, r3
	  beq-      .loc_0xA0
	  bl        -0xFEC
	  mr        r15, r3

	.loc_0xA0:
	  lfs       f0, 0x8(r16)
	  mr        r3, r15
	  li        r4, 0x2
	  stfs      f0, 0x4(r15)
	  lfs       f0, 0xC(r16)
	  stfs      f0, 0x8(r15)
	  bl        -0xBE0
	  mr        r17, r16
	  li        r18, 0
	  li        r19, 0

	.loc_0xC8:
	  lwz       r4, 0x10(r17)
	  mr        r3, r31
	  bl        0x7DC
	  mr.       r20, r3
	  beq-      .loc_0x204
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r20
	  bl        .loc_0x6D0
	  mr.       r23, r3
	  bne-      .loc_0x1F0
	  mr        r4, r30
	  li        r3, 0x18
	  li        r5, 0
	  bl        -0x7699C
	  lbz       r0, 0x0(r20)
	  mr        r23, r3
	  mr        r3, r31
	  stw       r0, 0x0(r23)
	  lfs       f0, 0x4(r20)
	  stfs      f0, 0x4(r23)
	  lwz       r4, 0x8(r20)
	  bl        0x774
	  mr.       r22, r3
	  beq-      .loc_0x174
	  bl        0x6C4
	  sub       r3, r3, r22
	  mr        r4, r30
	  rlwinm    r0,r3,1,31,31
	  li        r5, 0
	  add       r0, r0, r3
	  srawi     r0, r0, 0x1
	  rlwinm    r25,r0,1,0,30
	  mr        r3, r25
	  bl        -0x768E4
	  mr        r0, r3
	  mr        r3, r22
	  mr        r22, r0
	  mr        r5, r25
	  mr        r4, r22
	  bl        0xB64C
	  stw       r22, 0x8(r23)
	  b         .loc_0x17C

	.loc_0x174:
	  li        r0, 0
	  stw       r0, 0x8(r23)

	.loc_0x17C:
	  lwz       r4, 0xC(r20)
	  mr        r3, r31
	  bl        0x710
	  mr.       r22, r3
	  beq-      .loc_0x1D8
	  bl        0x660
	  sub       r3, r3, r22
	  mr        r4, r30
	  rlwinm    r0,r3,1,31,31
	  li        r5, 0
	  add       r0, r0, r3
	  srawi     r0, r0, 0x1
	  rlwinm    r25,r0,1,0,30
	  mr        r3, r25
	  bl        -0x76948
	  mr        r0, r3
	  mr        r3, r22
	  mr        r22, r0
	  mr        r5, r25
	  mr        r4, r22
	  bl        0xB5E8
	  stw       r22, 0xC(r23)
	  b         .loc_0x1E0

	.loc_0x1D8:
	  li        r0, 0
	  stw       r0, 0xC(r23)

	.loc_0x1E0:
	  lfs       f0, 0x10(r20)
	  stfs      f0, 0x10(r23)
	  lfs       f0, 0x14(r20)
	  stfs      f0, 0x14(r23)

	.loc_0x1F0:
	  mr        r3, r15
	  mr        r4, r18
	  mr        r5, r23
	  bl        -0xCAC
	  addi      r18, r18, 0x1

	.loc_0x204:
	  addi      r19, r19, 0x1
	  addi      r17, r17, 0x4
	  cmpwi     r19, 0x2
	  blt+      .loc_0xC8
	  mr        r3, r15
	  li        r4, 0x4
	  bl        -0xDCC
	  li        r18, 0
	  mr        r17, r16

	.loc_0x228:
	  lwz       r4, 0x18(r17)
	  mr        r3, r31
	  bl        0x64C
	  mr.       r19, r3
	  beq-      .loc_0x2B0
	  mr        r4, r30
	  li        r3, 0x10
	  li        r5, 0
	  bl        -0x76AE4
	  mr.       r20, r3
	  beq-      .loc_0x284
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x3810
	  li        r4, 0
	  stw       r0, 0x0(r20)
	  addi      r0, r3, 0x3838
	  lfs       f1, -0x76A8(r2)
	  stb       r4, 0x4(r20)
	  lfs       f0, -0x76A4(r2)
	  stw       r0, 0x0(r20)
	  stfs      f1, 0x8(r20)
	  stfs      f0, 0xC(r20)

	.loc_0x284:
	  lbz       r4, 0x0(r19)
	  mr        r3, r20
	  bl        0xA78
	  lfs       f0, 0x4(r19)
	  mr        r3, r15
	  mr        r4, r18
	  mr        r5, r20
	  stfs      f0, 0x8(r20)
	  lfs       f0, 0x8(r19)
	  stfs      f0, 0xC(r20)
	  bl        -0xDE4

	.loc_0x2B0:
	  addi      r18, r18, 0x1
	  addi      r17, r17, 0x4
	  cmpwi     r18, 0x2
	  blt+      .loc_0x228
	  li        r20, 0
	  mr        r19, r16

	.loc_0x2C8:
	  lwz       r4, 0x20(r19)
	  mr        r3, r31
	  bl        0x594
	  mr.       r17, r3
	  beq-      .loc_0x360
	  mr        r4, r30
	  li        r3, 0x14
	  li        r5, 0
	  bl        -0x76B84
	  mr.       r18, r3
	  beq-      .loc_0x32C
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x3810
	  li        r4, 0
	  stw       r0, 0x0(r18)
	  addi      r3, r3, 0x3848
	  li        r0, 0x3C
	  lfs       f0, -0x76A8(r2)
	  stb       r4, 0x4(r18)
	  stw       r3, 0x0(r18)
	  stb       r4, 0x8(r18)
	  stb       r0, 0x9(r18)
	  stfs      f0, 0xC(r18)
	  stfs      f0, 0x10(r18)

	.loc_0x32C:
	  lbz       r4, 0x0(r17)
	  mr        r3, r18
	  bl        0x9D0
	  lbz       r4, 0x1(r17)
	  mr        r3, r18
	  lbz       r5, 0x2(r17)
	  lfs       f1, 0x4(r17)
	  lfs       f2, 0x8(r17)
	  bl        0xB88
	  mr        r3, r15
	  mr        r5, r18
	  addi      r4, r20, 0x2
	  bl        -0xE94

	.loc_0x360:
	  addi      r20, r20, 0x1
	  addi      r19, r19, 0x4
	  cmpwi     r20, 0x2
	  blt+      .loc_0x2C8
	  lwz       r4, 0x28(r16)
	  mr        r3, r15
	  bl        -0xFC4
	  mr        r20, r16
	  li        r22, 0
	  b         .loc_0x424

	.loc_0x388:
	  mr        r3, r15
	  mr        r4, r22
	  bl        -0xE30
	  lwz       r4, 0x2C(r20)
	  mr        r23, r3
	  mr        r3, r31
	  bl        0x4AC
	  mr        r18, r3
	  mr        r3, r23
	  lbz       r0, 0x0(r18)
	  stw       r0, 0x0(r23)
	  lwz       r4, 0x4(r18)
	  bl        -0xDE0
	  mr        r19, r18
	  li        r25, 0
	  b         .loc_0x410

	.loc_0x3C8:
	  mr        r3, r23
	  mr        r4, r25
	  bl        -0xDA0
	  lwz       r4, 0x8(r19)
	  mr        r17, r3
	  mr        r3, r31
	  bl        0x454
	  lbz       r0, 0x0(r3)
	  addi      r19, r19, 0x4
	  addi      r25, r25, 0x1
	  stw       r0, 0x0(r17)
	  lwz       r0, 0x4(r3)
	  rlwinm    r0,r0,0,16,31
	  stw       r0, 0x4(r17)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x8(r17)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0xC(r17)

	.loc_0x410:
	  lwz       r0, 0x4(r18)
	  cmplw     r25, r0
	  blt+      .loc_0x3C8
	  addi      r20, r20, 0x4
	  addi      r22, r22, 0x1

	.loc_0x424:
	  lwz       r0, 0x28(r16)
	  cmplw     r22, r0
	  blt+      .loc_0x388
	  mr        r3, r29
	  mr        r4, r21
	  mr        r5, r15
	  bl        -0x13D0

	.loc_0x440:
	  addi      r21, r21, 0x1
	  addi      r24, r24, 0x4
	  cmpwi     r21, 0x80
	  blt+      .loc_0x6C
	  li        r27, 0
	  mr        r28, r31

	.loc_0x458:
	  lwz       r4, 0x3B4(r28)
	  mr        r3, r31
	  bl        0x3BC
	  mr.       r25, r3
	  beq-      .loc_0x690
	  mr        r4, r30
	  li        r3, 0x1004
	  li        r5, 0
	  bl        -0x76D14
	  mr.       r26, r3
	  beq-      .loc_0x4C0
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x3790
	  mr        r6, r26
	  stw       r0, 0x0(r26)
	  addi      r0, r3, 0x3820
	  lis       r4, 0x800A
	  lis       r3, 0x800A
	  stw       r0, 0x0(r26)
	  subi      r5, r3, 0x4D04
	  addi      r3, r6, 0x4
	  subi      r4, r4, 0x4D38
	  li        r6, 0x20
	  li        r7, 0x80
	  bl        0x26BA4

	.loc_0x4C0:
	  mr        r22, r25
	  mr        r21, r25
	  li        r20, 0

	.loc_0x4CC:
	  lwz       r4, 0x88(r22)
	  mr        r3, r31
	  bl        0x330
	  mr.       r24, r3
	  beq-      .loc_0x66C
	  mr        r3, r26
	  mr        r4, r20
	  bl        0x5F0
	  lfs       f0, 0x0(r24)
	  mr        r19, r3
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x4(r24)
	  stfs      f0, 0x4(r3)
	  lwz       r4, 0x0(r25)
	  subis     r0, r4, 0x5045
	  cmplwi    r0, 0x5232
	  bne-      .loc_0x54C
	  addi      r4, r20, 0x288
	  lis       r0, 0x4330
	  lbzx      r4, r25, r4
	  stw       r0, 0x8(r1)
	  extsb     r0, r4
	  lfd       f2, -0x7698(r2)
	  xoris     r0, r0, 0x8000
	  lfs       f0, -0x76A0(r2)
	  stw       r0, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x8(r19)
	  lhz       r4, 0x308(r21)
	  bl        0x724

	.loc_0x54C:
	  mr        r3, r19
	  li        r4, 0x2
	  bl        0x628
	  mr        r23, r24
	  li        r18, 0
	  li        r17, 0

	.loc_0x564:
	  lwz       r4, 0x8(r23)
	  mr        r3, r31
	  bl        0x310
	  mr.       r16, r3
	  beq-      .loc_0x5F0
	  mr        r4, r30
	  li        r3, 0x10
	  li        r5, 0
	  bl        -0x76E20
	  mr.       r15, r3
	  beq-      .loc_0x5C0
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x3810
	  li        r4, 0
	  stw       r0, 0x0(r15)
	  addi      r0, r3, 0x3838
	  lfs       f1, -0x76A8(r2)
	  stb       r4, 0x4(r15)
	  lfs       f0, -0x76A4(r2)
	  stw       r0, 0x0(r15)
	  stfs      f1, 0x8(r15)
	  stfs      f0, 0xC(r15)

	.loc_0x5C0:
	  lbz       r4, 0x0(r16)
	  mr        r3, r15
	  bl        0x73C
	  lfs       f0, 0x4(r16)
	  mr        r3, r19
	  mr        r4, r18
	  mr        r5, r15
	  stfs      f0, 0x8(r15)
	  lfs       f0, 0x8(r16)
	  stfs      f0, 0xC(r15)
	  bl        0x674
	  addi      r18, r18, 0x1

	.loc_0x5F0:
	  addi      r17, r17, 0x1
	  addi      r23, r23, 0x4
	  cmpwi     r17, 0x2
	  blt+      .loc_0x564
	  lwz       r4, 0x10(r24)
	  mr        r3, r19
	  bl        0x5EC
	  mr        r16, r24
	  li        r17, 0
	  b         .loc_0x660

	.loc_0x618:
	  mr        r3, r19
	  mr        r4, r17
	  bl        0x62C
	  lwz       r4, 0x14(r16)
	  mr        r15, r3
	  mr        r3, r31
	  bl        0x204
	  lbz       r0, 0x0(r3)
	  addi      r16, r16, 0x4
	  addi      r17, r17, 0x1
	  stw       r0, 0x0(r15)
	  lwz       r0, 0x4(r3)
	  rlwinm    r0,r0,0,16,31
	  stw       r0, 0x4(r15)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x8(r15)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0xC(r15)

	.loc_0x660:
	  lwz       r0, 0x10(r24)
	  cmplw     r17, r0
	  blt+      .loc_0x618

	.loc_0x66C:
	  addi      r20, r20, 0x1
	  addi      r21, r21, 0x2
	  cmpwi     r20, 0x80
	  addi      r22, r22, 0x4
	  blt+      .loc_0x4CC
	  mr        r3, r29
	  mr        r5, r26
	  addi      r4, r27, 0xE4
	  bl        -0x1620

	.loc_0x690:
	  addi      r27, r27, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r27, 0xC
	  blt+      .loc_0x458
	  mr        r3, r30
	  bl        -0x776CC
	  lwz       r0, -0x75D8(r13)
	  sub       r4, r14, r3
	  mr        r3, r29
	  add       r0, r0, r4
	  stw       r0, -0x75D8(r13)

	.loc_0x6BC:
	  lmw       r14, 0x18(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x6D0:
	*/
}

/*
 * --INFO--
 * Address:	8009AEAC
 * Size:	000120
 */
void JASBNKParser::findOscPtr(JASBasicBank*, JASBNKParser::THeader*,
                              JASBNKParser::TOsc*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r25, 0x34(r1)
	  mr        r26, r4
	  mr        r25, r3
	  mr        r27, r5
	  li        r29, 0
	  addi      r30, r26, 0x20

	.loc_0x24:
	  lwz       r4, 0x4(r30)
	  mr        r3, r26
	  bl        0x1C8
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  li        r28, 0
	  mr        r31, r3

	.loc_0x40:
	  lwz       r4, 0x10(r31)
	  mr        r3, r26
	  bl        0x194
	  cmplw     r3, r27
	  bne-      .loc_0xE8
	  mr        r3, r25
	  mr        r4, r29
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xE8
	  lfs       f2, -0x76A8(r2)
	  li        r0, 0
	  lfs       f0, -0x76A4(r2)
	  addi      r6, r1, 0x8
	  lfs       f1, -0x7690(r2)
	  li        r4, 0x3C
	  stb       r0, 0x8(r1)
	  li        r5, 0x7F
	  stw       r0, 0xC(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  stb       r0, 0x2C(r1)
	  sth       r0, 0x2E(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplw     r28, r0
	  bge-      .loc_0xE8
	  lwz       r3, 0x10(r1)
	  rlwinm    r0,r28,2,0,29
	  lwzx      r3, r3, r0
	  b         .loc_0x10C

	.loc_0xE8:
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r28, 0x2
	  blt+      .loc_0x40

	.loc_0xF8:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x80
	  blt+      .loc_0x24
	  li        r3, 0

	.loc_0x10C:
	  lmw       r25, 0x34(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009AFCC
 * Size:	000014
 */
void JASBNKParser::getOscTableEndPtr(short*)
{
	/*
	.loc_0x0:
	  lha       r0, 0x0(r3)
	  addi      r3, r3, 0x6
	  cmpwi     r0, 0xA
	  ble+      .loc_0x0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASBNKParser::getUsedHeapSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009AFE0
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASBNKParser::TPmap>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009AFF8
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASBNKParser::TPerc>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B010
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASBNKParser::TVmap>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B028
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASBNKParser::TKeymap>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B040
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASBNKParser::TSense>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B058
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASBNKParser::TRand>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B070
 * Size:	000018
 */
void JSUConvertOffsetToPtr<short>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B088
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASBNKParser::TOsc>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009B0A0
 * Size:	000018
 */
void JSUConvertOffsetToPtr<JASBNKParser::TInst>(const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}