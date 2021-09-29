

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void setArchive__Q43ebi6Screen10FileSelect21TScreenDataWindow_newFP10JKRArchive(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000130
 */
void setData__Q43ebi6Screen10FileSelect21TScreenDataWindow_newFlUx(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002E4
 */
void setArchive__Q43ebi6Screen10FileSelect22TScreenDataWindow_dataFP10JKRArchive(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D4244
 * Size:	000254
 */
void setData__Q43ebi6Screen10FileSelect22TScreenDataWindow_dataFlUlUlUlUlUlUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  li        r0, 0
  stmw      r24, 0x30(r1)
  mr.       r25, r4
  mr        r24, r3
  mr        r26, r5
  mr        r27, r6
  mr        r28, r7
  mr        r29, r8
  mr        r30, r9
  mr        r31, r10
  blt-      .loc_0x44
  cmpwi     r25, 0x3
  bge-      .loc_0x44
  li        r0, 0x1

.loc_0x44:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x68
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6B70
  li        r4, 0x81
  addi      r5, r5, 0x6B88
  crclr     6, 0x6
  bl        -0x3A9C68

.loc_0x68:
  lis       r4, 0x6174
  lwz       r3, 0x0(r24)
  addi      r6, r4, 0x6131
  li        r5, 0x5064
  bl        -0x9F64
  stw       r3, 0x1C(r1)
  lis       r4, 0x6174
  lwz       r3, 0x0(r24)
  addi      r6, r4, 0x6132
  li        r5, 0x5064
  bl        -0x9F7C
  stw       r3, 0x20(r1)
  lis       r4, 0x6174
  lwz       r3, 0x0(r24)
  addi      r6, r4, 0x6133
  li        r5, 0x5064
  bl        -0x9F94
  lwz       r4, 0x1C(r1)
  li        r7, 0
  lwz       r6, 0x20(r1)
  rlwinm    r0,r25,2,0,29
  stb       r7, 0xB0(r4)
  addi      r4, r1, 0x1C
  li        r5, 0x1
  stw       r3, 0x24(r1)
  stb       r7, 0xB0(r6)
  lwzx      r4, r4, r0
  stb       r7, 0xB0(r3)
  stb       r5, 0xB0(r4)
  stw       r26, 0x10(r24)
  stw       r27, 0x14(r24)
  lwz       r0, 0x10(r24)
  cmplwi    r0, 0x2710
  bge-      .loc_0x144
  lis       r4, 0x7273
  lwz       r3, 0x0(r24)
  addi      r6, r4, 0x6C61
  li        r5, 0x5074
  bl        -0x9FEC
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r3, 0x8(r24)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4(r24)
  bl        -0xC8BA8
  lwz       r12, 0x0(r3)
  lfs       f1, 0x17B8(r2)
  lwz       r12, 0x10(r12)
  lfs       f2, 0x17BC(r2)
  mtctr     r12
  bctrl     
  b         .loc_0x194

.loc_0x144:
  lis       r4, 0x7273
  lwz       r3, 0x0(r24)
  addi      r6, r4, 0x6C61
  li        r5, 0x5074
  bl        -0xA040
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  lwz       r3, 0x8(r24)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4(r24)
  bl        -0xC8BFC
  lwz       r12, 0x0(r3)
  lfs       f1, 0x17BC(r2)
  lwz       r12, 0x10(r12)
  fmr       f2, f1
  mtctr     r12
  bctrl     

.loc_0x194:
  stw       r28, 0x24(r24)
  lis       r3, 0x616E
  addi      r6, r3, 0x6163
  li        r5, 0x50
  stw       r29, 0x28(r24)
  stw       r30, 0x1C(r24)
  stw       r31, 0x20(r24)
  lwz       r3, 0x0(r24)
  bl        -0xA0A0
  mr        r26, r3
  lis       r5, 0x6E61
  lis       r4, 0x5461
  lwz       r3, 0x0(r24)
  addi      r6, r5, 0x6D65
  addi      r5, r4, 0x6E61
  bl        -0xA0BC
  mr        r25, r3
  lwz       r3, 0x24(r24)
  bl        -0xB76A0
  mr        r0, r3
  lwz       r3, 0x24(r24)
  mr        r27, r4
  addi      r4, r1, 0x8
  mr        r24, r0
  bl        -0x12580
  mr        r4, r27
  mr        r3, r24
  addi      r5, r1, 0x10
  bl        -0x12594
  li        r4, 0
  xor       r3, r27, r4
  xor       r0, r24, r4
  or.       r0, r3, r0
  bne-      .loc_0x224
  stb       r4, 0xB0(r26)
  b         .loc_0x240

.loc_0x224:
  li        r3, 0x1
  li        r0, 0x2
  stb       r3, 0xB0(r26)
  addc      r3, r27, r0
  adde      r0, r24, r4
  stw       r3, 0x1C(r25)
  stw       r0, 0x18(r25)

.loc_0x240:
  lmw       r24, 0x30(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803D4498
 * Size:	000EB0
 */
void __ct__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lis       r4, 0x804F
  li        r5, 0
  stw       r0, 0x54(r1)
  subi      r0, r4, 0x7818
  stmw      r17, 0x14(r1)
  mr        r31, r3
  addi      r24, r31, 0xE0
  lis       r3, 0x804F
  mr        r17, r24
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x7370
  lis       r3, 0x804F
  stw       r0, 0x0(r31)
  subi      r4, r3, 0x7274
  li        r0, -0x1
  mr        r3, r24
  stw       r5, 0x4(r31)
  stw       r5, 0x8(r31)
  stw       r4, 0x0(r31)
  stw       r0, 0xC0(r31)
  stw       r0, 0xC4(r31)
  stw       r0, 0xC8(r31)
  stw       r0, 0xCC(r31)
  stw       r0, 0xD0(r31)
  stw       r0, 0xD4(r31)
  stw       r0, 0xD8(r31)
  stw       r0, 0xDC(r31)
  bl        0x3CE84
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r24)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r24)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r24, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r24)
  stw       r0, 0x20(r24)
  bl        -0x36CEEC
  addi      r17, r31, 0x11C
  mr        r3, r17
  bl        0x3CE20
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36CF50
  lis       r3, 0x803E
  lis       r5, 0x803D
  subi      r4, r3, 0x659C
  li        r6, 0x3C
  addi      r3, r31, 0x158
  subi      r5, r5, 0x6C
  li        r7, 0x3
  bl        -0x312DAC
  lis       r3, 0x803E
  lis       r5, 0x803D
  subi      r4, r3, 0x659C
  li        r6, 0x3C
  addi      r3, r31, 0x20C
  subi      r5, r5, 0x6C
  li        r7, 0x3
  bl        -0x312DCC
  addi      r17, r31, 0x2C0
  mr        r3, r17
  bl        0x3CD7C
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36CFF4
  addi      r17, r31, 0x2FC
  mr        r3, r17
  bl        0x3CD18
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D058
  addi      r17, r31, 0x338
  mr        r3, r17
  bl        0x3CCB4
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D0BC
  addi      r17, r31, 0x374
  mr        r3, r17
  bl        0x3CC50
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D120
  lis       r3, 0x803E
  lis       r5, 0x803D
  subi      r4, r3, 0x659C
  li        r6, 0x3C
  addi      r3, r31, 0x3B0
  subi      r5, r5, 0x6C
  li        r7, 0x3
  bl        -0x312F7C
  lis       r3, 0x803E
  lis       r5, 0x803D
  subi      r4, r3, 0x659C
  li        r6, 0x3C
  addi      r3, r31, 0x464
  subi      r5, r5, 0x6C
  li        r7, 0x3
  bl        -0x312F9C
  lis       r3, 0x803E
  lis       r5, 0x803D
  subi      r4, r3, 0x659C
  li        r6, 0x3C
  addi      r3, r31, 0x518
  subi      r5, r5, 0x6C
  li        r7, 0x3
  bl        -0x312FBC
  addi      r17, r31, 0x5CC
  mr        r3, r17
  bl        0x3CB8C
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D1E4
  addi      r17, r31, 0x608
  mr        r3, r17
  bl        0x3CB28
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D248
  addi      r17, r31, 0x644
  mr        r3, r17
  bl        0x3CAC4
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D2AC
  addi      r17, r31, 0x680
  mr        r3, r17
  bl        0x3CA60
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D310
  addi      r17, r31, 0x6BC
  mr        r3, r17
  bl        0x3C9FC
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D374
  addi      r17, r31, 0x6F8
  mr        r3, r17
  bl        0x3C998
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D3D8
  addi      r17, r31, 0x734
  mr        r3, r17
  bl        0x3C934
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D43C
  addi      r17, r31, 0x770
  mr        r3, r17
  bl        0x3C8D0
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D4A0
  addi      r17, r31, 0x7AC
  mr        r3, r17
  bl        0x3C86C
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D504
  addi      r17, r31, 0x7E8
  mr        r3, r17
  bl        0x3C808
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D568
  addi      r17, r31, 0x824
  mr        r3, r17
  bl        0x3C7A4
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D5CC
  addi      r17, r31, 0x860
  mr        r3, r17
  bl        0x3C740
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r17)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r17)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r17, 0x20
  stw       r7, 0x0(r17)
  li        r4, 0
  stb       r6, 0x1C(r17)
  stw       r5, 0x0(r17)
  stw       r0, 0x20(r17)
  bl        -0x36D630
  addi      r17, r31, 0x89C
  mr        r3, r17
  bl        0x3C6DC
  lis       r3, 0x804D
  addi      r24, r31, 0x8BC
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804D
  stw       r0, 0x0(r17)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804F
  stw       r0, 0x18(r17)
  addi      r0, r5, 0x7F2C
  subi      r5, r4, 0x77D0
  li        r4, 0x1
  stw       r0, 0x0(r17)
  subi      r0, r3, 0x77F4
  mr        r18, r24
  mr        r3, r24
  stw       r5, 0x0(r17)
  stb       r4, 0x1C(r17)
  stw       r0, 0x0(r17)
  bl        0x3C68C
  lis       r3, 0x804D
  lis       r4, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r6, 0x804F
  stw       r0, 0x0(r24)
  li        r0, 0
  lis       r3, 0x803D
  li        r7, 0x1
  stw       r0, 0x18(r24)
  addi      r0, r4, 0x7F2C
  subi      r4, r3, 0x114
  subi      r3, r6, 0x77D0
  stw       r0, 0x0(r18)
  lis       r5, 0x804F
  subi      r0, r5, 0x75AC
  li        r6, 0x10
  stw       r3, 0x0(r18)
  addi      r3, r24, 0x20
  li        r5, 0
  stb       r7, 0x1C(r18)
  li        r7, 0x2
  stw       r0, 0x0(r24)
  bl        -0x313524
  lfs       f1, 0x17BC(r2)
  addi      r25, r31, 0x908
  lfs       f0, 0x17C0(r2)
  li        r4, 0x1
  stfs      f1, 0x40(r24)
  li        r0, 0
  mr        r17, r25
  mr        r3, r25
  stfs      f0, 0x44(r24)
  stb       r4, 0x48(r24)
  stb       r0, 0x49(r24)
  stb       r0, 0x1C(r24)
  bl        0x3C5FC
  lis       r3, 0x804D
  lis       r4, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r6, 0x804F
  stw       r0, 0x0(r25)
  li        r0, 0
  lis       r3, 0x803D
  li        r7, 0x1
  stw       r0, 0x18(r25)
  addi      r0, r4, 0x7F2C
  subi      r4, r3, 0x114
  subi      r3, r6, 0x77D0
  stw       r0, 0x0(r17)
  lis       r5, 0x804F
  subi      r0, r5, 0x75AC
  li        r6, 0x10
  stw       r3, 0x0(r17)
  addi      r3, r25, 0x20
  li        r5, 0
  stb       r7, 0x1C(r17)
  li        r7, 0x2
  stw       r0, 0x0(r25)
  bl        -0x3135B4
  lfs       f1, 0x17BC(r2)
  lis       r3, 0x803D
  subi      r5, r3, 0x81C
  lis       r4, 0x803D
  lfs       f0, 0x17C0(r2)
  li        r3, 0x1
  stfs      f1, 0x40(r25)
  li        r0, 0
  subi      r4, r4, 0x2C0
  li        r6, 0x40
  stfs      f0, 0x44(r25)
  li        r7, 0x2
  stb       r3, 0x48(r25)
  addi      r3, r31, 0x954
  stb       r0, 0x49(r25)
  stb       r0, 0x1C(r25)
  bl        -0x3135F8
  lis       r4, 0x804C
  lis       r3, 0x804C
  addi      r28, r4, 0x14F0
  lis       r7, 0x804A
  stw       r28, 0x9EC(r31)
  addi      r12, r3, 0x14D8
  lis       r4, 0x804E
  lis       r3, 0x804E
  stw       r12, 0x9EC(r31)
  li        r11, 0
  addi      r10, r4, 0x7420
  addi      r6, r3, 0x73CC
  stb       r11, 0x9F0(r31)
  lis       r3, 0x804E
  addi      r5, r3, 0x7648
  subi      r0, r7, 0x1D84
  stb       r11, 0x9F1(r31)
  addi      r30, r10, 0x18
  addi      r29, r6, 0x18
  addi      r4, r31, 0xA08
  stw       r0, 0x9F4(r31)
  addi      r7, r5, 0x18
  lfs       f3, 0x17C4(r2)
  addi      r3, r31, 0xA40
  stw       r10, 0x9EC(r31)
  lfs       f2, 0x17C8(r2)
  stw       r30, 0x9F4(r31)
  lfs       f1, 0x17BC(r2)
  sth       r11, 0x9F8(r31)
  stw       r11, 0x9FC(r31)
  stw       r6, 0x9EC(r31)
  stw       r29, 0x9F4(r31)
  stw       r4, 0xA00(r31)
  stw       r5, 0x9EC(r31)
  stw       r7, 0x9F4(r31)
  stfs      f3, 0xA04(r31)
  lwz       r4, -0x6514(r13)
  lfs       f0, 0x54(r4)
  fmuls     f0, f2, f0
  stfs      f0, 0xA10(r31)
  stfs      f1, 0xA14(r31)
  stw       r11, 0xA1C(r31)
  stw       r11, 0xA20(r31)
  stw       r28, 0xA24(r31)
  stw       r12, 0xA24(r31)
  stb       r11, 0xA28(r31)
  stb       r11, 0xA29(r31)
  stw       r0, 0xA2C(r31)
  stw       r10, 0xA24(r31)
  stw       r30, 0xA2C(r31)
  sth       r11, 0xA30(r31)
  stw       r11, 0xA34(r31)
  stw       r6, 0xA24(r31)
  stw       r29, 0xA2C(r31)
  stw       r3, 0xA38(r31)
  stw       r5, 0xA24(r31)
  stw       r7, 0xA2C(r31)
  stfs      f3, 0xA3C(r31)
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x54(r3)
  fmuls     f0, f2, f0
  stfs      f0, 0xA48(r31)
  stfs      f1, 0xA4C(r31)
  lis       r3, 0x804E
  addi      r9, r3, 0x7560
  lis       r4, 0x804F
  stw       r11, 0xA54(r31)
  lis       r3, 0x804F
  subi      r8, r3, 0x7108
  subi      r20, r4, 0x7140
  stw       r11, 0xA58(r31)
  lis       r3, 0x804F
  subi      r23, r3, 0x7178
  addi      r17, r9, 0x18
  stw       r28, 0xA5C(r31)
  lis       r3, 0x804F
  subi      r25, r3, 0x71B0
  li        r18, 0x1
  stw       r12, 0xA5C(r31)
  lis       r3, 0x8038
  subi      r4, r3, 0x2F48
  addi      r19, r8, 0x18
  stb       r11, 0xA60(r31)
  addi      r21, r20, 0x18
  li        r22, 0xA
  addi      r27, r23, 0x18
  stb       r11, 0xA61(r31)
  li        r26, 0xB
  addi      r24, r25, 0x18
  addi      r3, r31, 0xAC4
  stw       r0, 0xA64(r31)
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x3
  stw       r10, 0xA5C(r31)
  stw       r30, 0xA64(r31)
  sth       r11, 0xA68(r31)
  stw       r11, 0xA6C(r31)
  stw       r9, 0xA5C(r31)
  stw       r17, 0xA64(r31)
  stb       r18, 0xA60(r31)
  stw       r8, 0xA5C(r31)
  stw       r19, 0xA64(r31)
  stb       r18, 0xA60(r31)
  stw       r28, 0xA70(r31)
  stw       r12, 0xA70(r31)
  stb       r11, 0xA74(r31)
  stb       r11, 0xA75(r31)
  stw       r0, 0xA78(r31)
  stw       r10, 0xA70(r31)
  stw       r30, 0xA78(r31)
  sth       r18, 0xA7C(r31)
  stw       r11, 0xA80(r31)
  stw       r9, 0xA70(r31)
  stw       r17, 0xA78(r31)
  stb       r18, 0xA74(r31)
  stw       r20, 0xA70(r31)
  stw       r21, 0xA78(r31)
  stb       r18, 0xA74(r31)
  stw       r28, 0xA9C(r31)
  stw       r12, 0xA9C(r31)
  stb       r11, 0xAA0(r31)
  stb       r11, 0xAA1(r31)
  stw       r0, 0xAA4(r31)
  stw       r10, 0xA9C(r31)
  stw       r30, 0xAA4(r31)
  sth       r22, 0xAA8(r31)
  stw       r11, 0xAAC(r31)
  stw       r23, 0xA9C(r31)
  stw       r27, 0xAA4(r31)
  stb       r18, 0xAA0(r31)
  stw       r28, 0xAB0(r31)
  stw       r12, 0xAB0(r31)
  stb       r11, 0xAB4(r31)
  stb       r11, 0xAB5(r31)
  stw       r0, 0xAB8(r31)
  stw       r10, 0xAB0(r31)
  stw       r30, 0xAB8(r31)
  sth       r26, 0xABC(r31)
  stw       r11, 0xAC0(r31)
  stw       r25, 0xAB0(r31)
  stw       r24, 0xAB8(r31)
  stb       r18, 0xAB4(r31)
  bl        -0x313838
  lis       r4, 0x8038
  addi      r3, r31, 0xADC
  subi      r4, r4, 0x2F48
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x3
  bl        -0x313854
  li        r0, 0
  lis       r3, 0x803E
  stb       r0, 0xAFC(r31)
  subi      r4, r3, 0x68DC
  addi      r3, r31, 0xB00
  li        r5, 0
  stb       r0, 0xAFD(r31)
  li        r6, 0x34
  li        r7, 0x3
  stb       r0, 0xAFE(r31)
  stb       r0, 0xAFF(r31)
  bl        -0x313884
  li        r8, 0
  li        r3, 0xFF
  stw       r8, 0xBA0(r31)
  li        r0, 0x3
  stb       r8, 0xBA4(r31)
  stw       r8, 0xBA8(r31)
  stb       r8, 0xBB4(r31)
  stw       r8, 0xBB8(r31)
  stw       r8, 0xBBC(r31)
  stw       r8, 0xBC0(r31)
  stw       r8, 0xBCC(r31)
  stw       r8, 0xBD0(r31)
  stb       r8, 0xBD4(r31)
  stb       r8, 0xBD5(r31)
  stb       r8, 0xBD6(r31)
  stb       r3, 0xBD7(r31)
  stb       r3, 0xBD8(r31)
  stw       r8, 0xBDC(r31)
  stw       r8, 0xBE0(r31)
  stw       r8, 0xBE4(r31)
  stw       r8, 0xBE8(r31)
  stw       r8, 0xBEC(r31)
  stw       r8, 0xBF0(r31)
  stw       r8, 0xBF4(r31)
  stw       r8, 0xC(r31)
  stw       r8, 0x10(r31)
  stw       r8, 0x14(r31)
  stw       r8, 0x18(r31)
  stw       r8, 0x1C(r31)
  mtctr     r0
  mr        r28, r8

.loc_0xCA8:
  addi      r3, r8, 0x38
  addi      r0, r8, 0x44
  stwx      r28, r31, r3
  addi      r7, r8, 0x50
  addi      r6, r8, 0x5C
  addi      r5, r8, 0x68
  stwx      r28, r31, r0
  addi      r4, r8, 0x74
  addi      r3, r8, 0x80
  addi      r0, r8, 0x8C
  stwx      r28, r31, r7
  addi      r8, r8, 0x4
  stwx      r28, r31, r6
  stwx      r28, r31, r5
  stwx      r28, r31, r4
  stwx      r28, r31, r3
  stwx      r28, r31, r0
  bdnz+     .loc_0xCA8
  stw       r28, 0x98(r31)
  lis       r4, 0x804F
  lis       r3, 0x804F
  mr        r27, r28
  stw       r28, 0x9C(r31)
  subi      r4, r4, 0x71EC
  subi      r3, r3, 0x7228
  li        r24, 0
  stw       r28, 0xA0(r31)
  addi      r26, r4, 0x18
  addi      r25, r3, 0x18
  stw       r28, 0xA4(r31)
  stw       r28, 0xA8(r31)
  stw       r28, 0xAC(r31)
  stw       r28, 0xB0(r31)
  stw       r28, 0xB4(r31)
  stw       r28, 0xB8(r31)
  stw       r28, 0xBC(r31)
  stb       r28, 0xAFC(r31)
  stb       r28, 0xAFD(r31)
  stb       r28, 0xAFE(r31)
  stb       r28, 0xAFF(r31)
  stw       r28, 0xB9C(r31)

.loc_0xD4C:
  li        r3, 0x18
  bl        -0x3B1344
  cmplwi    r3, 0
  beq-      .loc_0xDDC
  lis       r5, 0x804C
  lis       r4, 0x804C
  addi      r0, r5, 0x14F0
  lis       r7, 0x804A
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x14D8
  lis       r6, 0x804E
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r10, 0
  addi      r0, r28, 0xAC4
  lis       r4, 0x804F
  stb       r10, 0x4(r3)
  subi      r9, r7, 0x1D84
  addi      r8, r6, 0x7420
  li        r7, 0x6
  stb       r10, 0x5(r3)
  addi      r6, r5, 0x73CC
  add       r5, r31, r0
  subi      r4, r4, 0x71EC
  stw       r9, 0x8(r3)
  li        r0, 0x1
  stw       r8, 0x0(r3)
  stw       r30, 0x8(r3)
  sth       r7, 0xC(r3)
  stw       r10, 0x10(r3)
  stw       r6, 0x0(r3)
  stw       r29, 0x8(r3)
  stw       r5, 0x14(r3)
  stw       r4, 0x0(r3)
  stw       r26, 0x8(r3)
  stb       r0, 0x4(r3)

.loc_0xDDC:
  addi      r0, r27, 0xA84
  stwx      r3, r31, r0
  li        r3, 0x18
  bl        -0x3B13DC
  cmplwi    r3, 0
  beq-      .loc_0xE74
  lis       r5, 0x804C
  lis       r4, 0x804C
  addi      r0, r5, 0x14F0
  lis       r7, 0x804A
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x14D8
  lis       r6, 0x804E
  lis       r5, 0x804E
  stw       r0, 0x0(r3)
  li        r10, 0
  addi      r0, r28, 0xADC
  lis       r4, 0x804F
  stb       r10, 0x4(r3)
  subi      r9, r7, 0x1D84
  addi      r8, r6, 0x7420
  li        r7, 0x7
  stb       r10, 0x5(r3)
  addi      r6, r5, 0x73CC
  add       r5, r31, r0
  subi      r4, r4, 0x7228
  stw       r9, 0x8(r3)
  li        r0, 0x1
  stw       r8, 0x0(r3)
  stw       r30, 0x8(r3)
  sth       r7, 0xC(r3)
  stw       r10, 0x10(r3)
  stw       r6, 0x0(r3)
  stw       r29, 0x8(r3)
  stw       r5, 0x14(r3)
  stw       r4, 0x0(r3)
  stw       r25, 0x8(r3)
  stb       r0, 0x4(r3)

.loc_0xE74:
  addi      r24, r24, 0x1
  addi      r0, r27, 0xA90
  cmpwi     r24, 0x3
  stwx      r3, r31, r0
  addi      r28, r28, 0x8
  addi      r27, r27, 0x4
  blt+      .loc_0xD4C
  li        r0, 0
  mr        r3, r31
  stw       r0, 0xAF4(r31)
  lmw       r17, 0x14(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803D5348
 * Size:	0000B0
 */
void loadResource__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  lis       r4, 0x8049
  li        r5, 0
  stw       r0, 0x124(r1)
  stw       r31, 0x11C(r1)
  addi      r31, r4, 0x6AE8
  addi      r4, r31, 0xC4
  stw       r30, 0x118(r1)
  stw       r29, 0x114(r1)
  mr        r29, r3
  lwz       r3, -0x6514(r13)
  bl        0x4DFE4
  addi      r3, r1, 0x8
  addi      r4, r31, 0xE4
  bl        -0xBD438
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r5, 0
  li        r6, 0x1
  bl        -0x3BA268
  mr.       r30, r3
  bne-      .loc_0x70
  addi      r3, r31, 0x88
  addi      r5, r31, 0xA0
  li        r4, 0xFF
  crclr     6, 0x6
  bl        -0x3AAD74

.loc_0x70:
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0xC4
  bl        0x4DFA4
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x124(r1)
  lwz       r31, 0x11C(r1)
  lwz       r30, 0x118(r1)
  lwz       r29, 0x114(r1)
  mtlr      r0
  addi      r1, r1, 0x120
  blr
*/
}

/*
 * --INFO--
 * Address:	803D53F8
 * Size:	0012E4
 */
void doSetArchive__Q43ebi6Screen10FileSelect11TMainScreenFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x64(r1)
  stmw      r26, 0x48(r1)
  mr        r31, r3
  addi      r29, r5, 0x6AE8
  mr        r30, r4
  li        r5, 0
  addi      r4, r29, 0xF4
  lwz       r3, -0x6514(r13)
  bl        0x4DF38
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x114
  li        r5, 0
  bl        0x4DF28
  li        r3, 0x148
  bl        -0x3B1598
  mr.       r0, r3
  beq-      .loc_0x58
  bl        0x5F964
  mr        r0, r3

.loc_0x58:
  stw       r0, 0xC(r31)
  mr        r6, r30
  addi      r4, r29, 0x13C
  lis       r5, 0x110
  lwz       r3, 0xC(r31)
  bl        -0x395E40
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x114
  bl        0x4DEF4
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x14
  li        r5, 0
  bl        0x4DEDC
  li        r3, 0x138
  bl        -0x3B15E4
  mr.       r0, r3
  beq-      .loc_0xA4
  bl        0x5F62C
  mr        r0, r3

.loc_0xA4:
  stw       r0, 0xBA0(r31)
  mr        r6, r30
  addi      r4, r29, 0x3C
  lis       r5, 0x110
  lwz       r3, 0xBA0(r31)
  bl        -0x395E8C
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x14
  bl        0x4DEA8
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x54
  li        r5, 0
  bl        0x4DE90
  lwz       r3, 0xBA0(r31)
  mr        r4, r3
  bl        -0xABBC
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x54
  bl        0x4DE80
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x14
  li        r5, 0
  bl        0x4DE68
  li        r3, 0x138
  bl        -0x3B1658
  mr.       r0, r3
  beq-      .loc_0x118
  bl        0x5F5B8
  mr        r0, r3

.loc_0x118:
  stw       r0, 0xBA8(r31)
  mr        r6, r30
  addi      r4, r29, 0xAC
  lis       r5, 0x110
  lwz       r3, 0xBA8(r31)
  bl        -0x395F00
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x14
  bl        0x4DE34
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x54
  li        r5, 0
  bl        0x4DE1C
  lwz       r3, 0xBA8(r31)
  mr        r4, r3
  bl        -0xAC30
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x54
  bl        0x4DE0C
  addi      r0, r31, 0xBB8
  lis       r3, 0x6C6E
  stw       r0, 0x8(r1)
  li        r5, 0xA
  li        r4, 0x1
  li        r0, 0
  stw       r5, 0xC(r1)
  addi      r6, r3, 0x3031
  addi      r8, r3, 0x3032
  addi      r10, r3, 0x3035
  stw       r4, 0x10(r1)
  li        r5, 0x50
  li        r7, 0x50
  li        r9, 0x50
  stw       r0, 0x14(r1)
  stw       r30, 0x18(r1)
  lwz       r3, 0xBA8(r31)
  bl        -0xC9070
  addi      r0, r31, 0xBBC
  lis       r3, 0x7472
  stw       r0, 0x8(r1)
  li        r5, 0x3
  li        r4, 0x1
  li        r0, 0
  stw       r5, 0xC(r1)
  addi      r6, r3, 0x3031
  addi      r8, r3, 0x3032
  addi      r10, r3, 0x3033
  stw       r4, 0x10(r1)
  li        r5, 0x50
  li        r7, 0x50
  li        r9, 0x50
  stw       r0, 0x14(r1)
  stw       r30, 0x18(r1)
  lwz       r3, 0xBA8(r31)
  bl        -0xC90B8
  stw       r3, 0xBAC(r31)
  lis       r3, 0x7274
  addi      r0, r31, 0xBC0
  li        r5, 0x3
  stw       r0, 0x8(r1)
  li        r4, 0x1
  li        r0, 0
  addi      r6, r3, 0x3031
  stw       r5, 0xC(r1)
  addi      r8, r3, 0x3032
  addi      r10, r3, 0x3033
  li        r5, 0x5074
  stw       r4, 0x10(r1)
  li        r7, 0x5074
  li        r9, 0x5074
  stw       r0, 0x14(r1)
  stw       r30, 0x18(r1)
  lwz       r3, 0xBA8(r31)
  bl        -0xC9104
  stw       r3, 0xBB0(r31)
  lis       r4, 0x7232
  addi      r0, r31, 0xBD0
  lis       r3, 0x5066
  stw       r0, 0x8(r1)
  li        r0, 0x3
  addi      r6, r4, 0x5F31
  addi      r8, r4, 0x5F32
  stw       r0, 0xC(r1)
  addi      r10, r3, 0x7231
  li        r5, 0x5066
  li        r7, 0x5066
  stw       r30, 0x10(r1)
  li        r9, 0
  lwz       r3, 0xBA8(r31)
  bl        -0xC8050
  addi      r0, r31, 0xBC4
  lis       r4, 0x6D65
  stw       r0, 0x8(r1)
  li        r0, 0x5
  lis       r3, 0x50
  li        r7, 0x1
  stw       r0, 0xC(r1)
  addi      r5, r3, 0x7469
  li        r0, 0
  addi      r6, r4, 0x3031
  stw       r7, 0x10(r1)
  mr        r7, r5
  mr        r9, r5
  addi      r8, r4, 0x3032
  stw       r0, 0x14(r1)
  addi      r10, r4, 0x3033
  stw       r30, 0x18(r1)
  lwz       r3, 0xBA8(r31)
  bl        -0xC9190
  addi      r0, r31, 0xBC8
  lis       r4, 0x656D
  stw       r0, 0x8(r1)
  li        r6, 0x2
  lis       r3, 0x5074
  addi      r8, r4, 0x3032
  stw       r6, 0xC(r1)
  addi      r5, r3, 0x696D
  li        r0, 0
  mr        r10, r8
  stw       r6, 0x10(r1)
  mr        r7, r5
  mr        r9, r5
  addi      r6, r4, 0x3031
  stw       r0, 0x14(r1)
  stw       r30, 0x18(r1)
  lwz       r3, 0xBA8(r31)
  bl        -0xC91D8
  li        r4, 0xFF
  bl        -0xC9F20
  lis       r4, 0x6C6E
  lwz       r3, 0xBA8(r31)
  addi      r6, r4, 0x3033
  li        r5, 0x50
  bl        -0xB3CC
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x6C6E
  lwz       r3, 0xBA8(r31)
  addi      r6, r4, 0x3034
  li        r5, 0x50
  bl        -0xB3F4
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r28, 0
  li        r0, 0xC9
  stw       r28, 0xBB8(r31)
  stw       r28, 0xBBC(r31)
  stw       r0, 0xBC0(r31)
  stw       r28, 0xBC4(r31)
  stw       r28, 0xBC8(r31)
  stw       r28, 0xBCC(r31)
  stw       r28, 0xBD0(r31)
  lwz       r27, 0xC(r31)
  lhz       r26, 0x102(r27)
  b         .loc_0x3B0

.loc_0x39C:
  mr        r3, r27
  mr        r4, r28
  bl        -0x394D38
  bl        -0x3830D8
  addi      r28, r28, 0x1

.loc_0x3B0:
  rlwinm    r0,r28,0,16,31
  cmplw     r0, r26
  blt+      .loc_0x39C
  lis       r4, 0x54
  lwz       r3, 0xC(r31)
  addi      r6, r4, 0x5F79
  li        r5, 0
  bl        -0xB46C
  stw       r3, 0x98(r31)
  lis       r3, 0x5473
  addi      r6, r3, 0x5F79
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB484
  stw       r3, 0x9C(r31)
  lis       r3, 0x54
  addi      r6, r3, 0x5F6E
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB49C
  stw       r3, 0xA0(r31)
  lis       r3, 0x5473
  addi      r6, r3, 0x5F6E
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB4B4
  stw       r3, 0xA4(r31)
  lis       r3, 0x5462
  addi      r6, r3, 0x7430
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB4CC
  stw       r3, 0xA8(r31)
  lis       r3, 0x6274
  addi      r6, r3, 0x3073
  li        r5, 0x54
  lwz       r3, 0xC(r31)
  bl        -0xB4E4
  stw       r3, 0xAC(r31)
  lis       r3, 0x5462
  addi      r6, r3, 0x7431
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB4FC
  stw       r3, 0xB0(r31)
  lis       r3, 0x6274
  addi      r6, r3, 0x3173
  li        r5, 0x54
  lwz       r3, 0xC(r31)
  bl        -0xB514
  stw       r3, 0xB4(r31)
  lis       r3, 0x546D
  addi      r6, r3, 0x7367
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB52C
  stw       r3, 0xB8(r31)
  lis       r3, 0x6D73
  addi      r6, r3, 0x6773
  li        r5, 0x54
  lwz       r3, 0xC(r31)
  bl        -0xB544
  stw       r3, 0xBC(r31)
  lis       r3, 0x4E
  addi      r6, r3, 0x4431
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB55C
  stw       r3, 0x10(r31)
  lis       r3, 0x4E
  addi      r6, r3, 0x4432
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB574
  stw       r3, 0x14(r31)
  lis       r3, 0x4E
  addi      r6, r3, 0x4433
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB58C
  stw       r3, 0x18(r31)
  lis       r3, 0x6174
  addi      r6, r3, 0x6177
  li        r5, 0x4E64
  lwz       r3, 0xC(r31)
  bl        -0xB5A4
  stw       r3, 0x1C(r31)
  lis       r5, 0x656C
  lis       r4, 0x5064
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x4530
  addi      r5, r4, 0x3173
  bl        -0xB5C0
  stw       r3, 0x38(r31)
  lis       r5, 0x656C
  lis       r4, 0x5064
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x4530
  addi      r5, r4, 0x3273
  bl        -0xB5DC
  stw       r3, 0x3C(r31)
  lis       r5, 0x656C
  lis       r4, 0x5064
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x4530
  addi      r5, r4, 0x3373
  bl        -0xB5F8
  stw       r3, 0x40(r31)
  lis       r5, 0x7365
  lis       r4, 0x506D
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x4531
  addi      r5, r4, 0x6431
  bl        -0xB614
  stw       r3, 0x44(r31)
  lis       r5, 0x7365
  lis       r4, 0x506D
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x4531
  addi      r5, r4, 0x6432
  bl        -0xB630
  stw       r3, 0x48(r31)
  lis       r5, 0x7365
  lis       r4, 0x506D
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x4531
  addi      r5, r4, 0x6433
  bl        -0xB64C
  stw       r3, 0x4C(r31)
  lis       r3, 0x5064
  addi      r6, r3, 0x3163
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB664
  stw       r3, 0x50(r31)
  lis       r3, 0x5064
  addi      r6, r3, 0x3263
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB67C
  stw       r3, 0x54(r31)
  lis       r3, 0x5064
  addi      r6, r3, 0x3363
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB694
  stw       r3, 0x58(r31)
  lis       r3, 0x6D64
  addi      r6, r3, 0x3163
  li        r5, 0x50
  lwz       r3, 0xC(r31)
  bl        -0xB6AC
  stw       r3, 0x5C(r31)
  lis       r3, 0x6D64
  addi      r6, r3, 0x3263
  li        r5, 0x50
  lwz       r3, 0xC(r31)
  bl        -0xB6C4
  stw       r3, 0x60(r31)
  lis       r3, 0x6D64
  addi      r6, r3, 0x3363
  li        r5, 0x50
  lwz       r3, 0xC(r31)
  bl        -0xB6DC
  stw       r3, 0x64(r31)
  lis       r5, 0x7069
  lis       r4, 0x50
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x6B61
  addi      r5, r4, 0x6431
  bl        -0xB6F8
  stw       r3, 0x68(r31)
  lis       r5, 0x7069
  lis       r4, 0x50
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x6B61
  addi      r5, r4, 0x6432
  bl        -0xB714
  stw       r3, 0x6C(r31)
  lis       r5, 0x7069
  lis       r4, 0x5064
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x6B61
  addi      r5, r4, 0x335F
  bl        -0xB730
  stw       r3, 0x70(r31)
  lis       r5, 0x7069
  lis       r4, 0x506D
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x6B61
  addi      r5, r4, 0x6431
  bl        -0xB74C
  stw       r3, 0x74(r31)
  lis       r5, 0x7069
  lis       r4, 0x506D
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x6B61
  addi      r5, r4, 0x6432
  bl        -0xB768
  stw       r3, 0x78(r31)
  lis       r5, 0x7069
  lis       r4, 0x506D
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x6B61
  addi      r5, r4, 0x6433
  bl        -0xB784
  stw       r3, 0x7C(r31)
  lis       r3, 0x3173
  addi      r6, r3, 0x656C
  li        r5, 0x5064
  lwz       r3, 0xC(r31)
  bl        -0xB79C
  stw       r3, 0x20(r31)
  lis       r5, 0x3173
  lis       r4, 0x50
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x656C
  addi      r5, r4, 0x6D64
  bl        -0xB7B8
  stw       r3, 0x2C(r31)
  lis       r3, 0x3273
  addi      r6, r3, 0x656C
  li        r5, 0x5064
  lwz       r3, 0xC(r31)
  bl        -0xB7D0
  stw       r3, 0x24(r31)
  lis       r5, 0x3273
  lis       r4, 0x50
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x656C
  addi      r5, r4, 0x6D64
  bl        -0xB7EC
  stw       r3, 0x30(r31)
  lis       r3, 0x3373
  addi      r6, r3, 0x656C
  li        r5, 0x5064
  lwz       r3, 0xC(r31)
  bl        -0xB804
  stw       r3, 0x28(r31)
  lis       r5, 0x3373
  lis       r4, 0x50
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x656C
  addi      r5, r4, 0x6D64
  bl        -0xB820
  stw       r3, 0x34(r31)
  lis       r5, 0x7364
  lis       r4, 0x50
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x316C
  addi      r5, r4, 0x706F
  bl        -0xB83C
  stw       r3, 0x80(r31)
  lis       r5, 0x7364
  lis       r4, 0x50
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x3172
  addi      r5, r4, 0x706F
  bl        -0xB858
  stw       r3, 0x8C(r31)
  lis       r5, 0x7364
  lis       r4, 0x50
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x326C
  addi      r5, r4, 0x706F
  bl        -0xB874
  stw       r3, 0x84(r31)
  lis       r5, 0x7364
  lis       r4, 0x50
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x3272
  addi      r5, r4, 0x706F
  bl        -0xB890
  stw       r3, 0x90(r31)
  lis       r5, 0x7364
  lis       r4, 0x50
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x336C
  addi      r5, r4, 0x706F
  bl        -0xB8AC
  stw       r3, 0x88(r31)
  lis       r5, 0x7364
  lis       r4, 0x50
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x3372
  addi      r5, r4, 0x706F
  bl        -0xB8C8
  stw       r3, 0x94(r31)
  lis       r3, 0x5463
  addi      r6, r3, 0x6F6C
  li        r5, 0
  lwz       r3, 0xC(r31)
  bl        -0xB8E0
  mr        r27, r3
  addi      r3, r1, 0x38
  lwz       r0, 0x104(r27)
  mr        r4, r27
  stw       r0, 0x30(r1)
  lbz       r5, 0x30(r1)
  lbz       r0, 0x31(r1)
  stb       r5, 0xC0(r31)
  lbz       r5, 0x32(r1)
  stb       r0, 0xC1(r31)
  lbz       r0, 0x33(r1)
  stb       r5, 0xC2(r31)
  stb       r0, 0xC3(r31)
  lwz       r0, 0x108(r27)
  stw       r0, 0x34(r1)
  lbz       r5, 0x34(r1)
  lbz       r0, 0x35(r1)
  stb       r5, 0xC4(r31)
  lbz       r5, 0x36(r1)
  stb       r0, 0xC5(r31)
  lbz       r0, 0x37(r1)
  stb       r5, 0xC6(r31)
  stb       r0, 0xC7(r31)
  lwz       r12, 0x0(r27)
  lwz       r12, 0xB4(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x38(r1)
  mr        r4, r27
  addi      r3, r1, 0x3C
  stb       r0, 0xC8(r31)
  lbz       r0, 0x39(r1)
  stb       r0, 0xC9(r31)
  lbz       r0, 0x3A(r1)
  stb       r0, 0xCA(r31)
  lbz       r0, 0x3B(r1)
  stb       r0, 0xCB(r31)
  lwz       r12, 0x0(r27)
  lwz       r12, 0xB0(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x3C(r1)
  addi      r3, r1, 0x28
  stb       r0, 0xCC(r31)
  lbz       r0, 0x3D(r1)
  stb       r0, 0xCD(r31)
  lbz       r0, 0x3E(r1)
  stb       r0, 0xCE(r31)
  lbz       r0, 0x3F(r1)
  stb       r0, 0xCF(r31)
  lwz       r27, 0xA0(r31)
  lwz       r0, 0x104(r27)
  mr        r4, r27
  stw       r0, 0x20(r1)
  lbz       r5, 0x20(r1)
  lbz       r0, 0x21(r1)
  stb       r5, 0xD0(r31)
  lbz       r5, 0x22(r1)
  stb       r0, 0xD1(r31)
  lbz       r0, 0x23(r1)
  stb       r5, 0xD2(r31)
  stb       r0, 0xD3(r31)
  lwz       r0, 0x108(r27)
  stw       r0, 0x24(r1)
  lbz       r5, 0x24(r1)
  lbz       r0, 0x25(r1)
  stb       r5, 0xD4(r31)
  lbz       r5, 0x26(r1)
  stb       r0, 0xD5(r31)
  lbz       r0, 0x27(r1)
  stb       r5, 0xD6(r31)
  stb       r0, 0xD7(r31)
  lwz       r12, 0x0(r27)
  lwz       r12, 0xB4(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x28(r1)
  mr        r4, r27
  addi      r3, r1, 0x2C
  stb       r0, 0xD8(r31)
  lbz       r0, 0x29(r1)
  stb       r0, 0xD9(r31)
  lbz       r0, 0x2A(r1)
  stb       r0, 0xDA(r31)
  lbz       r0, 0x2B(r1)
  stb       r0, 0xDB(r31)
  lwz       r12, 0x0(r27)
  lwz       r12, 0xB0(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x2C(r1)
  mr        r26, r31
  li        r27, 0
  stb       r0, 0xDC(r31)
  lbz       r0, 0x2D(r1)
  stb       r0, 0xDD(r31)
  lbz       r0, 0x2E(r1)
  stb       r0, 0xDE(r31)
  lbz       r0, 0x2F(r1)
  stb       r0, 0xDF(r31)

.loc_0x9D4:
  lwz       r3, 0x80(r26)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x8C(r26)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r27, r27, 0x1
  addi      r26, r26, 0x4
  cmpwi     r27, 0x3
  blt+      .loc_0x9D4
  lis       r4, 0x7065
  lwz       r3, 0xC(r31)
  addi      r6, r4, 0x6E31
  li        r5, 0x506F
  bl        -0xBAC4
  li        r0, 0x1
  lis       r5, 0x656E
  stb       r0, 0xB0(r3)
  lis       r4, 0x50
  addi      r6, r5, 0x7031
  lwz       r3, 0xC(r31)
  addi      r5, r4, 0x6F70
  bl        -0xBAE4
  li        r0, 0x1
  lis       r4, 0x395F
  addi      r6, r4, 0x3030
  lis       r4, 0x35
  addi      r5, r4, 0x3437
  stb       r0, 0xB0(r3)
  mr        r3, r31
  mr        r8, r6
  mr        r7, r5
  mr        r10, r6
  mr        r9, r5
  bl        0x28EC
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x54
  li        r5, 0
  bl        0x4D4E0
  lwz       r3, 0xC(r31)
  mr        r4, r3
  bl        -0xB56C
  lwz       r3, -0x6514(r13)
  addi      r4, r29, 0x54
  bl        0x4D4D0
  lwz       r3, 0xC(r31)
  addi      r5, r31, 0xE0
  mr        r4, r3
  bl        0x5EDB8
  lwz       r3, 0xC(r31)
  addi      r5, r31, 0x11C
  mr        r4, r3
  bl        0x5EDA8
  mr        r26, r31
  mr        r27, r31
  li        r28, 0

.loc_0xACC:
  lwz       r3, 0xC(r31)
  addi      r5, r26, 0x158
  lwz       r4, 0x38(r27)
  bl        0x5ED8C
  lwz       r3, 0xC(r31)
  addi      r5, r26, 0x20C
  lwz       r4, 0x44(r27)
  bl        0x5ED7C
  addi      r28, r28, 0x1
  addi      r27, r27, 0x4
  cmpwi     r28, 0x3
  addi      r26, r26, 0x3C
  blt+      .loc_0xACC
  lwz       r3, 0xC(r31)
  addi      r5, r31, 0x2C0
  mr        r4, r3
  bl        0x5ED58
  lwz       r3, 0xC(r31)
  addi      r5, r31, 0x2FC
  mr        r4, r3
  bl        0x5ED48
  lwz       r3, 0xC(r31)
  addi      r5, r31, 0x338
  mr        r4, r3
  bl        0x5ED38
  lwz       r3, 0xC(r31)
  addi      r5, r31, 0x374
  mr        r4, r3
  bl        0x5ED28
  mr        r26, r31
  mr        r27, r31
  li        r28, 0

.loc_0xB4C:
  lwz       r3, 0xC(r31)
  addi      r5, r26, 0x3B0
  lwz       r4, 0x10(r27)
  bl        0x5ED0C
  lwz       r3, 0xC(r31)
  addi      r5, r26, 0x464
  lwz       r4, 0x10(r27)
  bl        0x5ECFC
  lwz       r3, 0xC(r31)
  addi      r5, r26, 0x518
  lwz       r4, 0x10(r27)
  bl        0x5ECEC
  addi      r28, r28, 0x1
  addi      r27, r27, 0x4
  cmpwi     r28, 0x3
  addi      r26, r26, 0x3C
  blt+      .loc_0xB4C
  lis       r5, 0x7062
  lis       r4, 0x4E
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x7430
  addi      r5, r4, 0x6772
  addi      r7, r31, 0x5CC
  bl        0x5EB84
  lis       r5, 0x7062
  lis       r4, 0x4E
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x7430
  addi      r5, r4, 0x6772
  addi      r7, r31, 0x644
  bl        0x5EB68
  lis       r5, 0x7062
  lis       r4, 0x4E
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x7431
  addi      r5, r4, 0x6772
  addi      r7, r31, 0x608
  bl        0x5EB4C
  lis       r5, 0x7062
  lis       r4, 0x4E
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x7431
  addi      r5, r4, 0x6772
  addi      r7, r31, 0x680
  bl        0x5EB30
  lis       r4, 0x4E
  lwz       r3, 0xC(r31)
  addi      r6, r4, 0x5F79
  addi      r7, r31, 0x6BC
  li        r5, 0
  bl        0x5EB18
  lis       r4, 0x4E
  lwz       r3, 0xC(r31)
  addi      r6, r4, 0x5F79
  addi      r7, r31, 0x734
  li        r5, 0
  bl        0x5EB00
  lis       r4, 0x4E
  lwz       r3, 0xC(r31)
  addi      r6, r4, 0x5F6E
  addi      r7, r31, 0x6F8
  li        r5, 0
  bl        0x5EAE8
  lis       r4, 0x4E
  lwz       r3, 0xC(r31)
  addi      r6, r4, 0x5F6E
  addi      r7, r31, 0x770
  li        r5, 0
  bl        0x5EAD0
  lis       r5, 0x696E
  lis       r4, 0x4E
  lwz       r3, 0xC(r31)
  addi      r6, r5, 0x4D47
  addi      r5, r4, 0x6D61
  addi      r7, r31, 0x7AC
  bl        0x5EAB4
  lis       r4, 0x6174
  lwz       r3, 0xC(r31)
  addi      r6, r4, 0x6177
  addi      r7, r31, 0x7E8
  li        r5, 0x4E64
  bl        0x5EA9C
  lis       r4, 0x6174
  lwz       r3, 0xC(r31)
  addi      r6, r4, 0x6177
  addi      r7, r31, 0x824
  li        r5, 0x4E64
  bl        0x5EA84
  lis       r4, 0x6174
  lwz       r3, 0xC(r31)
  addi      r6, r4, 0x6177
  addi      r7, r31, 0x860
  li        r5, 0x4E64
  bl        0x5EA6C
  lwz       r3, 0xC(r31)
  addi      r5, r31, 0x89C
  mr        r4, r3
  bl        0x5EB94
  addi      r26, r31, 0xB04
  lis       r3, 0x316E
  stw       r26, 0x8(r1)
  li        r0, 0x6
  addi      r6, r3, 0x6F72
  addi      r8, r3, 0x6F6C
  stw       r0, 0xC(r1)
  addi      r10, r3, 0x6F63
  li        r5, 0x5064
  li        r7, 0x5064
  stw       r30, 0x10(r1)
  li        r9, 0x5064
  lwz       r3, 0xC(r31)
  bl        -0xC8ADC
  stw       r3, 0x9D4(r31)
  lis       r4, 0x316E
  lis       r3, 0x50
  li        r0, 0x6
  stw       r26, 0x8(r1)
  addi      r5, r3, 0x6D64
  mr        r7, r5
  addi      r6, r4, 0x6F72
  stw       r0, 0xC(r1)
  mr        r9, r5
  addi      r8, r4, 0x6F6C
  addi      r10, r4, 0x6F63
  stw       r30, 0x10(r1)
  lwz       r3, 0xC(r31)
  bl        -0xC8B18
  stw       r3, 0x9E0(r31)
  lis       r3, 0x326E
  addi      r26, r31, 0xB38
  li        r0, 0x6
  stw       r26, 0x8(r1)
  addi      r6, r3, 0x6F72
  addi      r8, r3, 0x6F6C
  addi      r10, r3, 0x6F63
  stw       r0, 0xC(r1)
  li        r5, 0x5064
  li        r7, 0x5064
  li        r9, 0x5064
  stw       r30, 0x10(r1)
  lwz       r3, 0xC(r31)
  bl        -0xC8B54
  stw       r3, 0x9D8(r31)
  lis       r4, 0x326E
  lis       r3, 0x50
  li        r0, 0x6
  stw       r26, 0x8(r1)
  addi      r5, r3, 0x6D64
  mr        r7, r5
  addi      r6, r4, 0x6F72
  stw       r0, 0xC(r1)
  mr        r9, r5
  addi      r8, r4, 0x6F6C
  addi      r10, r4, 0x6F63
  stw       r30, 0x10(r1)
  lwz       r3, 0xC(r31)
  bl        -0xC8B90
  stw       r3, 0x9E4(r31)
  lis       r3, 0x336E
  addi      r26, r31, 0xB6C
  li        r0, 0x6
  stw       r26, 0x8(r1)
  addi      r6, r3, 0x6F72
  addi      r8, r3, 0x6F6C
  addi      r10, r3, 0x6F63
  stw       r0, 0xC(r1)
  li        r5, 0x5064
  li        r7, 0x5064
  li        r9, 0x5064
  stw       r30, 0x10(r1)
  lwz       r3, 0xC(r31)
  bl        -0xC8BCC
  stw       r3, 0x9DC(r31)
  lis       r4, 0x336E
  lis       r3, 0x50
  li        r0, 0x6
  stw       r26, 0x8(r1)
  addi      r5, r3, 0x6D64
  mr        r7, r5
  addi      r6, r4, 0x6F72
  stw       r0, 0xC(r1)
  mr        r9, r5
  addi      r8, r4, 0x6F6C
  addi      r10, r4, 0x6F63
  stw       r30, 0x10(r1)
  lwz       r3, 0xC(r31)
  bl        -0xC8C08
  stw       r3, 0x9E8(r31)
  addi      r5, r31, 0x8BC
  lwz       r3, 0xC(r31)
  lwz       r4, 0x98(r31)
  bl        0x5EA1C
  lwz       r3, 0xC(r31)
  addi      r5, r31, 0x908
  lwz       r4, 0xA0(r31)
  bl        0x5EA0C
  addi      r3, r31, 0x8BC
  addi      r4, r31, 0xD0
  addi      r5, r31, 0xC0
  bl        0x3898
  addi      r3, r31, 0x908
  addi      r4, r31, 0xD0
  addi      r5, r31, 0xC0
  bl        0x3888
  lis       r4, 0x4E
  lwz       r3, 0xC(r31)
  addi      r6, r4, 0x5F79
  addi      r7, r31, 0x954
  li        r5, 0
  bl        0x5E89C
  lis       r4, 0x4E
  lwz       r3, 0xC(r31)
  addi      r6, r4, 0x5F6E
  addi      r7, r31, 0x994
  li        r5, 0
  bl        0x5E884
  mr        r5, r30
  addi      r3, r31, 0xE0
  addi      r4, r29, 0x14C
  li        r6, 0
  li        r7, 0x50
  bl        -0x57E8
  mr        r5, r30
  addi      r3, r31, 0x3B0
  addi      r4, r29, 0x14C
  li        r6, 0x50
  li        r7, 0x6A
  bl        -0x5800
  mr        r5, r30
  addi      r3, r31, 0x464
  addi      r4, r29, 0x14C
  li        r6, 0x82
  li        r7, 0xA4
  bl        -0x5818
  mr        r5, r30
  addi      r3, r31, 0x518
  addi      r4, r29, 0x14C
  li        r6, 0x1A4
  li        r7, 0x1C8
  bl        -0x5830
  mr        r5, r30
  addi      r3, r31, 0x3EC
  addi      r4, r29, 0x14C
  li        r6, 0x88
  li        r7, 0xA9
  bl        -0x5848
  mr        r5, r30
  addi      r3, r31, 0x4A0
  addi      r4, r29, 0x14C
  li        r6, 0xD1
  li        r7, 0xEB
  bl        -0x5860
  mr        r5, r30
  addi      r3, r31, 0x554
  addi      r4, r29, 0x14C
  li        r6, 0x1A4
  li        r7, 0x1C8
  bl        -0x5878
  mr        r5, r30
  addi      r3, r31, 0x428
  addi      r4, r29, 0x14C
  li        r6, 0xD7
  li        r7, 0xF8
  bl        -0x5890
  mr        r5, r30
  addi      r3, r31, 0x4DC
  addi      r4, r29, 0x14C
  li        r6, 0x135
  li        r7, 0x14C
  bl        -0x58A8
  mr        r5, r30
  addi      r3, r31, 0x590
  addi      r4, r29, 0x14C
  li        r6, 0x1A4
  li        r7, 0x1C8
  bl        -0x58C0
  mr        r5, r30
  addi      r3, r31, 0x5CC
  addi      r4, r29, 0x14C
  li        r6, 0x5A
  li        r7, 0x6A
  bl        -0x58D8
  mr        r5, r30
  addi      r3, r31, 0x608
  addi      r4, r29, 0x14C
  li        r6, 0x5A
  li        r7, 0x6A
  bl        -0x58F0
  mr        r5, r30
  addi      r3, r31, 0x644
  addi      r4, r29, 0x14C
  li        r6, 0x121
  li        r7, 0x130
  bl        -0x5908
  mr        r5, r30
  addi      r3, r31, 0x680
  addi      r4, r29, 0x14C
  li        r6, 0x121
  li        r7, 0x130
  bl        -0x5920
  mr        r5, r30
  addi      r3, r31, 0x6BC
  addi      r4, r29, 0x14C
  li        r6, 0x208
  li        r7, 0x21F
  bl        -0x5938
  mr        r5, r30
  addi      r3, r31, 0x6F8
  addi      r4, r29, 0x14C
  li        r6, 0x208
  li        r7, 0x21F
  bl        -0x5950
  mr        r5, r30
  addi      r3, r31, 0x734
  addi      r4, r29, 0x14C
  li        r6, 0x1A4
  li        r7, 0x1C8
  bl        -0x5968
  mr        r5, r30
  addi      r3, r31, 0x770
  addi      r4, r29, 0x14C
  li        r6, 0x2D0
  li        r7, 0x2DD
  bl        -0x5980
  mr        r5, r30
  addi      r3, r31, 0x7AC
  addi      r4, r29, 0x14C
  li        r6, 0x50
  li        r7, 0x5C
  bl        -0x5998
  mr        r5, r30
  addi      r3, r31, 0x7E8
  addi      r4, r29, 0x14C
  li        r6, 0x50
  li        r7, 0x5A
  bl        -0x59B0
  mr        r5, r30
  addi      r3, r31, 0x824
  addi      r4, r29, 0x14C
  li        r6, 0x8A
  li        r7, 0x92
  bl        -0x59C8
  mr        r5, r30
  addi      r3, r31, 0x860
  addi      r4, r29, 0x14C
  li        r6, 0x1B6
  li        r7, 0x1D4
  bl        -0x59E0
  mr        r5, r30
  addi      r3, r31, 0x11C
  addi      r4, r29, 0x15C
  li        r6, 0
  li        r7, 0x50
  bl        -0x59F8
  lis       r6, 0x2
  mr        r5, r30
  addi      r3, r31, 0x158
  addi      r4, r29, 0x16C
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        -0x5A14
  lis       r6, 0x2
  mr        r5, r30
  addi      r3, r31, 0x194
  addi      r4, r29, 0x16C
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        -0x5A30
  lis       r6, 0x2
  mr        r5, r30
  addi      r3, r31, 0x1D0
  addi      r4, r29, 0x16C
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        -0x5A4C
  lis       r6, 0x2
  mr        r5, r30
  addi      r3, r31, 0x20C
  addi      r4, r29, 0x16C
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        -0x5A68
  lis       r6, 0x2
  mr        r5, r30
  addi      r3, r31, 0x248
  addi      r4, r29, 0x16C
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        -0x5A84
  lis       r6, 0x2
  mr        r5, r30
  addi      r3, r31, 0x284
  addi      r4, r29, 0x16C
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        -0x5AA0
  lis       r6, 0x2
  mr        r5, r30
  addi      r3, r31, 0x2C0
  addi      r4, r29, 0x180
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        -0x5ABC
  lis       r6, 0x2
  mr        r5, r30
  addi      r3, r31, 0x2FC
  addi      r4, r29, 0x194
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        -0x5AD8
  lis       r6, 0x2
  mr        r5, r30
  addi      r3, r31, 0x338
  addi      r4, r29, 0x1A4
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        -0x5AF4
  lis       r6, 0x2
  mr        r5, r30
  addi      r3, r31, 0x374
  addi      r4, r29, 0x1B8
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        -0x5B10
  li        r27, 0
  mr        r26, r31

.loc_0x11F4:
  lwz       r3, 0x18C(r26)
  lwz       r4, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x240(r26)
  lwz       r4, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r27, r27, 0x1
  addi      r26, r26, 0x3C
  cmpwi     r27, 0x3
  blt+      .loc_0x11F4
  lwz       r3, 0x1C(r31)
  li        r4, 0x1
  bl        -0xC250
  lwz       r3, 0x1C(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  addi      r3, r29, 0x1C8
  stw       r0, 0x8(r1)
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0x1
  li        r9, 0
  li        r10, 0
  bl        -0x3B74F0
  mr.       r26, r3
  bne-      .loc_0x12A0
  addi      r3, r29, 0x88
  addi      r5, r29, 0xA0
  li        r4, 0x206
  crclr     6, 0x6
  bl        -0x3AC054

.loc_0x12A0:
  li        r3, 0x14
  bl        -0x3B27F8
  mr.       r0, r3
  beq-      .loc_0x12C0
  lwz       r5, -0x77D4(r13)
  mr        r4, r26
  bl        -0x33E1E0
  mr        r0, r3

.loc_0x12C0:
  stw       r0, 0xAF4(r31)
  addi      r4, r29, 0xF4
  lwz       r3, -0x6514(r13)
  bl        0x4CCA0
  lmw       r26, 0x48(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	803D66DC
 * Size:	000100
 */
void doKillScreen__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  addi      r3, r29, 0x9EC
  lwz       r12, 0x9EC(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r29, 0xA24
  lwz       r12, 0xA24(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r29, 0xA5C
  lwz       r12, 0xA5C(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r29, 0xA70
  lwz       r12, 0xA70(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r30, 0
  mr        r31, r29

.loc_0x74:
  lwz       r3, 0xA84(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xA90(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0x74
  addi      r3, r29, 0xA9C
  lwz       r12, 0xA9C(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r29, 0xAB0
  lwz       r12, 0xAB0(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x65F8(r13)
  bl        -0x1D22C
  li        r0, 0
  stb       r0, 0xAF8(r29)
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803D67DC
 * Size:	000284
 */
void doOpenScreen__Q43ebi6Screen10FileSelect11TMainScreenFPQ33ebi6Screen7ArgOpen(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  lwz       r0, 0xAF4(r3)
  cmplwi    r0, 0
  bne-      .loc_0x44
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6B70
  li        r4, 0x231
  addi      r5, r5, 0x6B88
  crclr     6, 0x6
  bl        -0x3AC1DC

.loc_0x44:
  lwz       r3, -0x65F8(r13)
  lwz       r4, 0xAF4(r31)
  bl        -0x1D2F0
  lwz       r3, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0xE0
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x5CC4
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x11C
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x5CE4
  li        r29, 0
  mr        r30, r31

.loc_0xAC:
  addi      r3, r30, 0x158
  bl        -0x5A4C
  addi      r3, r30, 0x20C
  bl        -0x5A54
  addi      r29, r29, 0x1
  addi      r30, r30, 0x3C
  cmpwi     r29, 0x3
  blt+      .loc_0xAC
  lfs       f1, 0x17D0(r2)
  addi      r3, r31, 0x158
  li        r4, 0x2
  li        r5, 0
  bl        -0x5D20
  lfs       f1, 0x17D4(r2)
  addi      r3, r31, 0x194
  li        r4, 0x2
  li        r5, 0
  bl        -0x5D34
  lfs       f1, 0x17D8(r2)
  addi      r3, r31, 0x1D0
  li        r4, 0x2
  li        r5, 0
  bl        -0x5D48
  lfs       f1, 0x17D0(r2)
  addi      r3, r31, 0x20C
  li        r4, 0x2
  li        r5, 0
  bl        -0x5D5C
  lfs       f1, 0x17D4(r2)
  addi      r3, r31, 0x248
  li        r4, 0x2
  li        r5, 0
  bl        -0x5D70
  lfs       f1, 0x17D8(r2)
  addi      r3, r31, 0x284
  li        r4, 0x2
  li        r5, 0
  bl        -0x5D84
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x2C0
  lfs       f1, 0x17CC(r2)
  li        r4, 0x2
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x5DA4
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x2FC
  lfs       f1, 0x17CC(r2)
  li        r4, 0x2
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x5DC4
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x338
  lfs       f1, 0x17CC(r2)
  li        r4, 0x2
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x5DE4
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x374
  lfs       f1, 0x17CC(r2)
  li        r4, 0x2
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x5E04
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x1698(r2)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x314E64
  stw       r3, 0xBE0(r31)
  li        r0, 0x1
  mr        r30, r31
  li        r29, 0
  stw       r3, 0xBE4(r31)
  stw       r0, 0xBDC(r31)

.loc_0x1F0:
  lwz       r3, 0x20(r30)
  li        r4, 0xFF
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2C(r30)
  li        r4, 0xFF
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0x3
  blt+      .loc_0x1F0
  li        r0, 0
  mr        r3, r31
  stb       r0, 0xBA4(r31)
  stb       r0, 0xBB4(r31)
  bl        0x2460
  mr        r3, r31
  li        r4, 0x1E
  bl        0x2C7C
  li        r0, 0
  stb       r0, 0xAFC(r31)
  stb       r0, 0xAFD(r31)
  stb       r0, 0xAFE(r31)
  stb       r0, 0xAFF(r31)
  stb       r0, 0xAF8(r31)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803D6A60
 * Size:	0001B0
 */
void doInitWaitState__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  stw       r28, 0x40(r1)
  mr        r28, r3
  lwz       r3, 0xC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  addi      r3, r28, 0xE0
  bl        -0x5CE4
  addi      r3, r28, 0x11C
  bl        -0x5CEC
  lwz       r5, -0x6514(r13)
  addi      r3, r28, 0x7AC
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x5F28
  li        r30, 0
  mr        r31, r28

.loc_0x6C:
  lwz       r3, 0x20(r31)
  li        r4, 0xFF
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2C(r31)
  li        r4, 0xFF
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0x6C
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x17D0(r2)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x314FD0
  stw       r3, 0xBE8(r28)
  lis       r4, 0x804C
  mr        r30, r28
  li        r29, 0
  stw       r3, 0xBEC(r28)
  addi      r31, r4, 0x1514

.loc_0xD8:
  mr        r4, r28
  mr        r5, r29
  addi      r3, r1, 0x8
  bl        0x28D4
  lwz       r0, 0x8(r1)
  addi      r3, r1, 0x18
  stw       r0, 0xC(r1)
  lwz       r4, 0x20(r30)
  bl        -0xBE60
  lfs       f1, 0x18(r1)
  addi      r4, r1, 0x28
  lfs       f0, 0x1C(r1)
  stfs      f1, 0x20(r1)
  stfs      f0, 0x24(r1)
  lwz       r3, 0x20(r1)
  lwz       r0, 0x24(r1)
  stw       r3, 0x10(r1)
  stw       r0, 0x14(r1)
  lfs       f1, 0x10(r1)
  lfs       f0, 0x14(r1)
  stw       r31, 0x30(r1)
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  lwz       r3, 0xA84(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xA84(r30)
  addi      r4, r1, 0xC
  bl        -0x1D048
  lwz       r3, 0xA90(r30)
  addi      r4, r1, 0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xA90(r30)
  addi      r4, r1, 0xC
  bl        -0x1D06C
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0x3
  blt+      .loc_0xD8
  li        r0, 0
  stw       r0, 0xBDC(r28)
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  lwz       r28, 0x40(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803D6C10
 * Size:	000098
 */
void doCloseScreen__Q43ebi6Screen10FileSelect11TMainScreenFPQ33ebi6Screen8ArgClose(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, 0x1698(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  lwz       r4, -0x6514(r13)
  lfs       f0, 0x54(r4)
  fdivs     f1, f1, f0
  bl        -0x3150EC
  stw       r3, 0xBE0(r31)
  li        r0, 0x2
  li        r30, 0
  stw       r3, 0xBE4(r31)
  stw       r0, 0xBDC(r31)

.loc_0x40:
  lwz       r3, 0x20(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2C(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0x40
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
 * Address:	803D6CA8
 * Size:	000088
 */
void doUpdateStateOpen__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xBDC(r31)
  cmpwi     r0, 0
  beq-      .loc_0x48
  lwz       r3, 0xBE0(r31)
  cmplwi    r3, 0
  beq-      .loc_0x48
  subi      r0, r3, 0x1
  stw       r0, 0xBE0(r31)

.loc_0x48:
  addi      r3, r31, 0xE0
  bl        -0x5D44
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x70
  addi      r3, r31, 0x11C
  bl        -0x5D54
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x70
  li        r3, 0x1
  b         .loc_0x74

.loc_0x70:
  li        r3, 0

.loc_0x74:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D6D30
 * Size:	00031C
 */
void doUpdateStateWait__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  stw       r30, 0x58(r1)
  stw       r29, 0x54(r1)
  stw       r28, 0x50(r1)
  mr        r31, r3
  lwz       r3, 0xC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x9EC
  bl        -0x12EE8
  addi      r3, r31, 0xA24
  bl        -0x12EF0
  lwz       r0, 0xBDC(r31)
  cmpwi     r0, 0
  beq-      .loc_0x6C
  lwz       r3, 0xBE0(r31)
  cmplwi    r3, 0
  beq-      .loc_0x6C
  subi      r0, r3, 0x1
  stw       r0, 0xBE0(r31)

.loc_0x6C:
  lwz       r3, 0xBE8(r31)
  cmplwi    r3, 0
  beq-      .loc_0x80
  subi      r0, r3, 0x1
  stw       r0, 0xBE8(r31)

.loc_0x80:
  lwz       r0, 0xB9C(r31)
  lwz       r4, 0x1C(r31)
  mulli     r3, r0, 0x34
  addi      r29, r4, 0x80
  addi      r3, r3, 0xB00
  add       r3, r31, r3
  lbz       r0, 0x0(r3)
  cmplwi    r0, 0
  bne-      .loc_0xB0
  lbz       r0, 0x1(r3)
  cmplwi    r0, 0
  beq-      .loc_0x108

.loc_0xB0:
  li        r0, 0x1
  lis       r3, 0x6174
  stb       r0, 0xBA4(r31)
  li        r0, 0
  addi      r6, r3, 0x6177
  li        r5, 0x4E64
  stb       r0, 0xBB4(r31)
  lwz       r3, 0xBA0(r31)
  bl        -0xCAA8
  mr        r4, r3
  mr        r3, r29
  addi      r4, r4, 0x50
  bl        -0x2ECB44
  lbz       r0, 0xBA4(r31)
  cmplwi    r0, 0
  beq-      .loc_0x15C
  lwz       r3, 0xBA0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x15C

.loc_0x108:
  li        r0, 0x1
  lis       r3, 0x6174
  stb       r0, 0xBB4(r31)
  li        r0, 0
  addi      r6, r3, 0x6177
  li        r5, 0x4E64
  stb       r0, 0xBA4(r31)
  lwz       r3, 0xBA8(r31)
  bl        -0xCB00
  mr        r4, r3
  mr        r3, r29
  addi      r4, r4, 0x50
  bl        -0x2ECB9C
  lbz       r0, 0xBB4(r31)
  cmplwi    r0, 0
  beq-      .loc_0x15C
  lwz       r3, 0xBA8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     

.loc_0x15C:
  lfs       f31, 0x17DC(r2)
  mr        r30, r31
  li        r29, 0

.loc_0x168:
  lwz       r4, 0xBEC(r31)
  cmplwi    r4, 0
  beq-      .loc_0x1A8
  lwz       r3, 0xBE8(r31)
  lis       r0, 0x4330
  stw       r0, 0x18(r1)
  lfd       f2, 0x17E8(r2)
  stw       r3, 0x1C(r1)
  lfd       f0, 0x18(r1)
  stw       r4, 0x24(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x20(r1)
  lfd       f0, 0x20(r1)
  fsubs     f0, f0, f2
  fdivs     f0, f1, f0
  b         .loc_0x1AC

.loc_0x1A8:
  lfs       f0, 0x17BC(r2)

.loc_0x1AC:
  fmuls     f0, f31, f0
  lwz       r3, 0x20(r30)
  lwz       r12, 0x0(r3)
  fctiwz    f0, f0
  lwz       r12, 0x24(r12)
  stfd      f0, 0x28(r1)
  lwz       r4, 0x2C(r1)
  mtctr     r12
  bctrl     
  lwz       r4, 0xBEC(r31)
  cmplwi    r4, 0
  beq-      .loc_0x210
  lwz       r3, 0xBE8(r31)
  lis       r0, 0x4330
  stw       r0, 0x30(r1)
  lfd       f2, 0x17E8(r2)
  stw       r3, 0x34(r1)
  lfd       f0, 0x30(r1)
  stw       r4, 0x3C(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x38(r1)
  lfd       f0, 0x38(r1)
  fsubs     f0, f0, f2
  fdivs     f0, f1, f0
  b         .loc_0x214

.loc_0x210:
  lfs       f0, 0x17BC(r2)

.loc_0x214:
  fmuls     f0, f31, f0
  lwz       r3, 0x2C(r30)
  lwz       r12, 0x0(r3)
  fctiwz    f0, f0
  lwz       r12, 0x24(r12)
  stfd      f0, 0x40(r1)
  lwz       r4, 0x44(r1)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0x3
  blt+      .loc_0x168
  mr        r3, r31
  bl        0x1698
  lfs       f31, 0x17E0(r2)
  mr        r30, r31
  mr        r29, r31
  li        r28, 0

.loc_0x260:
  lwz       r4, 0x20(r30)
  addi      r3, r1, 0x10
  bl        -0xC2A0
  lfs       f0, 0x10(r1)
  addi      r3, r1, 0x8
  stfs      f0, 0xAC4(r29)
  lfs       f0, 0x14(r1)
  stfs      f0, 0xAC8(r29)
  lwz       r4, 0x2C(r30)
  bl        -0xC2BC
  lfs       f0, 0x8(r1)
  stfs      f0, 0xADC(r29)
  lfs       f0, 0xC(r1)
  stfs      f0, 0xAE0(r29)
  lwz       r4, 0x10(r30)
  lwz       r3, 0xA84(r30)
  lfs       f0, 0xCC(r4)
  fdivs     f1, f0, f31
  bl        -0x1D494
  lwz       r4, 0x10(r30)
  lwz       r3, 0xA90(r30)
  lfs       f0, 0xCC(r4)
  fdivs     f1, f0, f31
  bl        -0x1D4A8
  addi      r28, r28, 0x1
  addi      r29, r29, 0x8
  cmpwi     r28, 0x3
  addi      r30, r30, 0x4
  blt+      .loc_0x260
  lbz       r0, 0xAF8(r31)
  cmplwi    r0, 0
  beq-      .loc_0x2F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x100B
  li        r5, 0
  bl        -0x9E9EC

.loc_0x2F0:
  li        r3, 0
  psq_l     f31,0x68(r1),0,0
  lwz       r0, 0x74(r1)
  lfd       f31, 0x60(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  lwz       r29, 0x54(r1)
  lwz       r28, 0x50(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	803D704C
 * Size:	0000CC
 */
void doUpdateStateClose__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r3, 0xC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xBDC(r29)
  cmpwi     r0, 0
  beq-      .loc_0x50
  lwz       r3, 0xBE0(r29)
  cmplwi    r3, 0
  beq-      .loc_0x50
  subi      r0, r3, 0x1
  stw       r0, 0xBE0(r29)

.loc_0x50:
  li        r30, 0
  mr        r31, r29

.loc_0x58:
  lwz       r3, 0x20(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2C(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0x58
  lwz       r0, 0xBE0(r29)
  cmplwi    r0, 0
  bne-      .loc_0xAC
  li        r3, 0x1
  b         .loc_0xB0

.loc_0xAC:
  li        r3, 0

.loc_0xB0:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803D7118
 * Size:	000374
 */
void doDraw__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x5A0(r1)
  mflr      r0
  stw       r0, 0x5A4(r1)
  stw       r31, 0x59C(r1)
  mr        r31, r3
  stw       r30, 0x598(r1)
  stw       r29, 0x594(r1)
  lwz       r4, -0x6514(r13)
  lwz       r30, 0x24(r4)
  addi      r29, r30, 0x190
  lwz       r12, 0x0(r29)
  mr        r3, r29
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC(r31)
  mr        r4, r30
  mr        r5, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0xBA4(r31)
  cmplwi    r0, 0
  beq-      .loc_0xF0
  lwz       r4, -0x6514(r13)
  addi      r3, r1, 0x2CC
  lwz       r4, 0x24(r4)
  addi      r30, r4, 0x190
  bl        0x50238
  lwz       r3, 0xBA0(r31)
  mr        r5, r30
  addi      r4, r1, 0x2CC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804E
  addic.    r4, r1, 0x45C
  subi      r0, r3, 0x7CA0
  stw       r0, 0x538(r1)
  beq-      .loc_0xC8
  lis       r3, 0x804A
  cmplwi    r4, 0
  addi      r0, r3, 0x628
  stw       r0, 0x0(r4)
  beq-      .loc_0xC8
  lis       r3, 0x804A
  addi      r0, r3, 0x650
  stw       r0, 0x0(r4)

.loc_0xC8:
  addic.    r4, r1, 0x388
  beq-      .loc_0xF0
  lis       r3, 0x804A
  cmplwi    r4, 0
  addi      r0, r3, 0x600
  stw       r0, 0x0(r4)
  beq-      .loc_0xF0
  lis       r3, 0x804A
  addi      r0, r3, 0x650
  stw       r0, 0x0(r4)

.loc_0xF0:
  lbz       r0, 0xBB4(r31)
  cmplwi    r0, 0
  beq-      .loc_0x188
  lwz       r4, -0x6514(r13)
  addi      r3, r1, 0x2C
  lwz       r4, 0x24(r4)
  addi      r30, r4, 0x190
  bl        0x501A0
  lwz       r3, 0xBA8(r31)
  mr        r5, r30
  addi      r4, r1, 0x2C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804E
  addic.    r4, r1, 0x1BC
  subi      r0, r3, 0x7CA0
  stw       r0, 0x298(r1)
  beq-      .loc_0x160
  lis       r3, 0x804A
  cmplwi    r4, 0
  addi      r0, r3, 0x628
  stw       r0, 0x0(r4)
  beq-      .loc_0x160
  lis       r3, 0x804A
  addi      r0, r3, 0x650
  stw       r0, 0x0(r4)

.loc_0x160:
  addic.    r4, r1, 0xE8
  beq-      .loc_0x188
  lis       r3, 0x804A
  cmplwi    r4, 0
  addi      r0, r3, 0x600
  stw       r0, 0x0(r4)
  beq-      .loc_0x188
  lis       r3, 0x804A
  addi      r0, r3, 0x650
  stw       r0, 0x0(r4)

.loc_0x188:
  lwz       r0, 0xBDC(r31)
  cmpwi     r0, 0
  beq-      .loc_0x358
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x24(r3)
  addi      r30, r3, 0x190
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xBDC(r31)
  lwz       r3, 0xBD4(r31)
  cmpwi     r0, 0x2
  stw       r3, 0x18(r1)
  beq-      .loc_0x250
  bge-      .loc_0x2CC
  cmpwi     r0, 0x1
  bge-      .loc_0x1D8
  b         .loc_0x2CC

.loc_0x1D8:
  lwz       r4, 0xBE4(r31)
  cmplwi    r4, 0
  beq-      .loc_0x218
  lwz       r3, 0xBE0(r31)
  lis       r0, 0x4330
  stw       r0, 0x570(r1)
  lfd       f2, 0x17E8(r2)
  stw       r3, 0x574(r1)
  lfd       f0, 0x570(r1)
  stw       r4, 0x57C(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x578(r1)
  lfd       f0, 0x578(r1)
  fsubs     f0, f0, f2
  fdivs     f2, f1, f0
  b         .loc_0x21C

.loc_0x218:
  lfs       f2, 0x17BC(r2)

.loc_0x21C:
  lbz       r3, 0xBD8(r31)
  lis       r0, 0x4330
  stw       r0, 0x580(r1)
  lfd       f1, 0x17E8(r2)
  stw       r3, 0x584(r1)
  lfd       f0, 0x580(r1)
  fsubs     f0, f0, f1
  fmuls     f0, f0, f2
  fctiwz    f0, f0
  stfd      f0, 0x588(r1)
  lwz       r0, 0x58C(r1)
  stb       r0, 0x1B(r1)
  b         .loc_0x2CC

.loc_0x250:
  lwz       r4, 0xBE4(r31)
  cmplwi    r4, 0
  beq-      .loc_0x290
  lwz       r3, 0xBE0(r31)
  lis       r0, 0x4330
  stw       r0, 0x588(r1)
  lfd       f2, 0x17E8(r2)
  stw       r3, 0x58C(r1)
  lfd       f0, 0x588(r1)
  stw       r4, 0x584(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x580(r1)
  lfd       f0, 0x580(r1)
  fsubs     f0, f0, f2
  fdivs     f1, f1, f0
  b         .loc_0x294

.loc_0x290:
  lfs       f1, 0x17BC(r2)

.loc_0x294:
  lbz       r3, 0xBD8(r31)
  lis       r0, 0x4330
  lfs       f0, 0x17C4(r2)
  stw       r3, 0x57C(r1)
  lfd       f2, 0x17E8(r2)
  fsubs     f0, f0, f1
  stw       r0, 0x578(r1)
  lfd       f1, 0x578(r1)
  fsubs     f1, f1, f2
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x570(r1)
  lwz       r0, 0x574(r1)
  stb       r0, 0x1B(r1)

.loc_0x2CC:
  lwz       r0, 0x18(r1)
  mr        r3, r30
  addi      r4, r1, 0x8
  addi      r5, r1, 0xC
  stw       r0, 0x14(r1)
  addi      r6, r1, 0x10
  addi      r7, r1, 0x14
  stw       r0, 0x10(r1)
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        -0x3A0D80
  bl        0x4BE14
  lhz       r31, 0x6(r3)
  bl        0x4BE0C
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f3, 0x17BC(r2)
  mr        r3, r30
  stw       r4, 0x58C(r1)
  addi      r4, r1, 0x1C
  lfd       f2, 0x17E8(r2)
  stw       r0, 0x588(r1)
  lfd       f0, 0x588(r1)
  stw       r31, 0x584(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x580(r1)
  lfd       f0, 0x580(r1)
  fadds     f1, f3, f1
  stfs      f3, 0x1C(r1)
  fsubs     f0, f0, f2
  stfs      f3, 0x20(r1)
  fadds     f0, f3, f0
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  bl        -0x3A0C98

.loc_0x358:
  lwz       r0, 0x5A4(r1)
  lwz       r31, 0x59C(r1)
  lwz       r30, 0x598(r1)
  lwz       r29, 0x594(r1)
  mtlr      r0
  addi      r1, r1, 0x5A0
  blr
*/
}

/*
 * --INFO--
 * Address:	803D748C
 * Size:	0001B0
 */
void inDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  li        r0, 0
  stmw      r27, 0x3C(r1)
  mr.       r31, r4
  mr        r30, r3
  blt-      .loc_0x2C
  cmpwi     r31, 0x3
  bge-      .loc_0x2C
  li        r0, 0x1

.loc_0x2C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x50
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6B70
  li        r4, 0x2F7
  addi      r5, r5, 0x6B88
  crclr     6, 0x6
  bl        -0x3ACE98

.loc_0x50:
  lwz       r3, -0x6514(r13)
  mulli     r0, r31, 0x3C
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r3)
  li        r5, 0x1
  add       r28, r30, r0
  fmuls     f1, f1, f0
  addi      r3, r28, 0x3B0
  bl        -0x6968
  addi      r3, r28, 0x464
  bl        -0x6754
  addi      r3, r28, 0x518
  bl        -0x675C
  lis       r3, 0x804C
  mr        r28, r30
  addi      r29, r3, 0x1514
  li        r27, 0

.loc_0x98:
  mr        r4, r30
  mr        r5, r27
  addi      r3, r1, 0x8
  bl        0x1EE8
  lwz       r0, 0x8(r1)
  addi      r3, r1, 0x18
  stw       r0, 0xC(r1)
  lwz       r4, 0x20(r28)
  bl        -0xC84C
  lfs       f1, 0x18(r1)
  addi      r4, r1, 0x28
  lfs       f0, 0x1C(r1)
  stfs      f1, 0x20(r1)
  stfs      f0, 0x24(r1)
  lwz       r3, 0x20(r1)
  lwz       r0, 0x24(r1)
  stw       r3, 0x10(r1)
  stw       r0, 0x14(r1)
  lfs       f1, 0x10(r1)
  lfs       f0, 0x14(r1)
  stw       r29, 0x30(r1)
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  lwz       r3, 0xA84(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xA84(r28)
  addi      r4, r1, 0xC
  bl        -0x1DA34
  lwz       r3, 0xA90(r28)
  addi      r4, r1, 0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xA90(r28)
  addi      r4, r1, 0xC
  bl        -0x1DA58
  addi      r27, r27, 0x1
  addi      r28, r28, 0x4
  cmpwi     r27, 0x3
  blt+      .loc_0x98
  li        r27, 0
  mr        r28, r30

.loc_0x150:
  cmpw      r31, r27
  bne-      .loc_0x174
  lwz       r3, 0xA84(r28)
  li        r4, 0xFF
  bl        -0x1DA5C
  lwz       r3, 0xA90(r28)
  li        r4, 0xFF
  bl        -0x1DA68
  b         .loc_0x18C

.loc_0x174:
  lwz       r3, 0xA84(r28)
  li        r4, 0x50
  bl        -0x1DA78
  lwz       r3, 0xA90(r28)
  li        r4, 0x50
  bl        -0x1DA84

.loc_0x18C:
  addi      r27, r27, 0x1
  addi      r28, r28, 0x4
  cmpwi     r27, 0x3
  blt+      .loc_0x150
  lmw       r27, 0x3C(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803D763C
 * Size:	0000A4
 */
void outDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x30
  cmpwi     r31, 0x3
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6B70
  li        r4, 0x31C
  addi      r5, r5, 0x6B88
  crclr     6, 0x6
  bl        -0x3AD04C

.loc_0x54:
  mulli     r0, r31, 0x3C
  add       r31, r30, r0
  addi      r3, r31, 0x3B0
  bl        -0x68E8
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x464
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x6B24
  addi      r3, r31, 0x518
  bl        -0x6910
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
 * Address:	803D76E0
 * Size:	0000A4
 */
void decideDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x30
  cmpwi     r31, 0x3
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6B70
  li        r4, 0x327
  addi      r5, r5, 0x6B88
  crclr     6, 0x6
  bl        -0x3AD0F0

.loc_0x54:
  mulli     r0, r31, 0x3C
  add       r31, r30, r0
  addi      r3, r31, 0x3B0
  bl        -0x698C
  addi      r3, r31, 0x464
  bl        -0x6994
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x518
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x6BD0
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
 * Address:	803D7784
 * Size:	000124
 */
void createFiledecide__Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  rlwinm    r0,r4,2,0,29
  stw       r31, 0x4C(r1)
  mr        r31, r3
  add       r4, r31, r0
  addi      r3, r1, 0x10
  stw       r30, 0x48(r1)
  lwz       r4, 0x20(r4)
  bl        -0xCAB4
  lfs       f1, 0x10(r1)
  li        r9, 0
  lfs       f0, 0x14(r1)
  lis       r3, 0x804C
  stfs      f1, 0x18(r1)
  addi      r0, r3, 0x14F0
  lis       r3, 0x804C
  lis       r4, 0x804E
  stfs      f0, 0x1C(r1)
  lis       r5, 0x804C
  lwz       r6, 0x18(r1)
  addi      r10, r3, 0x14D8
  stw       r0, 0x2C(r1)
  lis       r3, 0x804F
  lwz       r0, 0x1C(r1)
  addi      r8, r4, 0x7470
  stw       r6, 0x8(r1)
  addi      r11, r5, 0x1514
  li        r7, 0x2
  li        r6, 0x3
  stw       r0, 0xC(r1)
  subi      r5, r3, 0x728C
  lfs       f1, 0x8(r1)
  li        r0, 0x1
  stw       r10, 0x2C(r1)
  addi      r3, r1, 0x2C
  lfs       f0, 0xC(r1)
  addi      r4, r1, 0x20
  stb       r9, 0x30(r1)
  stw       r8, 0x2C(r1)
  stw       r11, 0x28(r1)
  stfs      f1, 0x20(r1)
  stfs      f0, 0x24(r1)
  stb       r9, 0x31(r1)
  sth       r7, 0x34(r1)
  sth       r6, 0x36(r1)
  stw       r9, 0x38(r1)
  stw       r9, 0x3C(r1)
  stw       r5, 0x2C(r1)
  stb       r0, 0x30(r1)
  bl        -0x1DF88
  li        r30, 0

.loc_0xD4:
  lwz       r3, 0xA84(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xA90(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0xD4
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803D78A8
 * Size:	000030
 */
void isFinishOutDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mulli     r4, r4, 0x3C
  stw       r0, 0x14(r1)
  mr        r0, r3
  addi      r3, r4, 0x464
  add       r3, r0, r3
  bl        -0x6914
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D78D8
 * Size:	000030
 */
void isFinishDecideDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mulli     r4, r4, 0x3C
  stw       r0, 0x14(r1)
  mr        r0, r3
  addi      r3, r4, 0x518
  add       r3, r0, r3
  bl        -0x6944
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D7908
 * Size:	0000F4
 */
void createCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x1
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x44
  bge-      .loc_0x2C
  cmpwi     r4, 0
  bge-      .loc_0x38
  b         .loc_0x58

.loc_0x2C:
  cmpwi     r4, 0x3
  bge-      .loc_0x58
  b         .loc_0x50

.loc_0x38:
  li        r3, 0x1
  li        r0, 0x2
  b         .loc_0x58

.loc_0x44:
  li        r3, 0
  li        r0, 0x2
  b         .loc_0x58

.loc_0x50:
  li        r3, 0
  li        r0, 0x1

.loc_0x58:
  rlwinm    r0,r0,2,0,29
  rlwinm    r3,r3,2,0,29
  add       r6, r31, r0
  lfs       f0, 0x17C4(r2)
  add       r5, r31, r3
  lwz       r7, 0x80(r6)
  lwz       r4, 0x80(r5)
  li        r0, 0x1
  addi      r3, r31, 0x9EC
  stw       r4, 0xA1C(r31)
  stw       r7, 0xA20(r31)
  lwz       r6, 0x8C(r6)
  lwz       r4, 0x8C(r5)
  stw       r4, 0xA54(r31)
  stw       r6, 0xA58(r31)
  stfs      f0, 0xA14(r31)
  stb       r0, 0xA18(r31)
  stfs      f0, 0xA4C(r31)
  stb       r0, 0xA50(r31)
  bl        -0x13B24
  addi      r3, r31, 0xA24
  bl        -0x13B2C
  addi      r3, r31, 0x9EC
  li        r4, 0
  lwz       r12, 0x9EC(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xA24
  li        r4, 0
  lwz       r12, 0xA24(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D79FC
 * Size:	000050
 */
void fadeCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x9EC
  lwz       r12, 0x9EC(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xA24
  lwz       r12, 0xA24(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void killCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D7A4C
 * Size:	000010
 */
void moveLeftCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  li        r0, 0x1
  stb       r0, 0xA18(r3)
  stb       r0, 0xA50(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803D7A5C
 * Size:	000010
 */
void moveRightCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0xA18(r3)
  stb       r0, 0xA50(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803D7A6C
 * Size:	0001E0
 */
void createFilecopyEffect__Q43ebi6Screen10FileSelect11TMainScreenFll(void)
{
/*
.loc_0x0:
  stwu      r1, -0xC0(r1)
  mflr      r0
  stw       r0, 0xC4(r1)
  stw       r31, 0xBC(r1)
  mr        r31, r3
  addi      r3, r1, 0x10
  stw       r30, 0xB8(r1)
  mr        r30, r4
  mr        r4, r31
  stw       r29, 0xB4(r1)
  mr        r29, r5
  mr        r5, r30
  bl        0x197C
  rlwinm    r30,r30,2,0,29
  lwz       r0, 0x10(r1)
  add       r4, r31, r30
  addi      r3, r1, 0x50
  stw       r0, 0x14(r1)
  lwz       r4, 0x20(r4)
  bl        -0xCDC0
  rlwinm    r29,r29,2,0,29
  lfs       f1, 0x50(r1)
  lfs       f0, 0x54(r1)
  add       r4, r31, r29
  stfs      f1, 0x70(r1)
  addi      r3, r1, 0x48
  lwz       r4, 0x20(r4)
  stfs      f0, 0x74(r1)
  bl        -0xCDE4
  lfs       f1, 0x48(r1)
  lis       r3, 0x804C
  lfs       f0, 0x4C(r1)
  addi      r5, r3, 0x1514
  stfs      f1, 0x68(r1)
  lis       r3, 0x804F
  lwz       r10, 0x14(r1)
  subi      r0, r3, 0x7298
  stfs      f0, 0x6C(r1)
  addi      r3, r31, 0xA5C
  lwz       r9, 0x68(r1)
  addi      r4, r1, 0x90
  lwz       r8, 0x6C(r1)
  lwz       r7, 0x70(r1)
  lwz       r6, 0x74(r1)
  stw       r9, 0x40(r1)
  stw       r8, 0x44(r1)
  lfs       f1, 0x40(r1)
  stw       r7, 0x20(r1)
  lfs       f0, 0x44(r1)
  stw       r6, 0x24(r1)
  lfs       f3, 0x20(r1)
  stw       r5, 0x98(r1)
  lfs       f2, 0x24(r1)
  stfs      f3, 0x90(r1)
  stfs      f2, 0x94(r1)
  stw       r0, 0x98(r1)
  stfs      f1, 0x9C(r1)
  stfs      f0, 0xA0(r1)
  stw       r10, 0xA4(r1)
  lwz       r12, 0xA5C(r31)
  stw       r10, 0xC(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  add       r4, r31, r30
  addi      r3, r1, 0x38
  lwz       r4, 0x2C(r4)
  bl        -0xCE80
  lfs       f1, 0x38(r1)
  add       r4, r31, r29
  lfs       f0, 0x3C(r1)
  addi      r3, r1, 0x30
  stfs      f1, 0x60(r1)
  lwz       r4, 0x2C(r4)
  stfs      f0, 0x64(r1)
  bl        -0xCEA0
  lfs       f1, 0x30(r1)
  lis       r3, 0x804C
  lfs       f0, 0x34(r1)
  addi      r5, r3, 0x1514
  stfs      f1, 0x58(r1)
  lis       r3, 0x804F
  lwz       r10, 0x14(r1)
  subi      r0, r3, 0x7298
  stfs      f0, 0x5C(r1)
  addi      r3, r31, 0xA70
  lwz       r9, 0x58(r1)
  addi      r4, r1, 0x78
  lwz       r8, 0x5C(r1)
  lwz       r7, 0x60(r1)
  lwz       r6, 0x64(r1)
  stw       r9, 0x28(r1)
  stw       r8, 0x2C(r1)
  lfs       f1, 0x28(r1)
  stw       r7, 0x18(r1)
  lfs       f0, 0x2C(r1)
  stw       r6, 0x1C(r1)
  lfs       f3, 0x18(r1)
  stw       r5, 0x80(r1)
  lfs       f2, 0x1C(r1)
  stfs      f3, 0x78(r1)
  stfs      f2, 0x7C(r1)
  stw       r0, 0x80(r1)
  stfs      f1, 0x84(r1)
  stfs      f0, 0x88(r1)
  stw       r10, 0x8C(r1)
  lwz       r12, 0xA70(r31)
  stw       r10, 0x8(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xAF8(r31)
  lwz       r0, 0xC4(r1)
  lwz       r31, 0xBC(r1)
  lwz       r30, 0xB8(r1)
  lwz       r29, 0xB4(r1)
  mtlr      r0
  addi      r1, r1, 0xC0
  blr
*/
}

/*
 * --INFO--
 * Address:	803D7C4C
 * Size:	000058
 */
void fadeFilecopyEffect__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0xA5C
  lwz       r12, 0xA5C(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xA70
  lwz       r12, 0xA70(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xAF8(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D7CA4
 * Size:	000118
 */
void createFiledeletingEffect__Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stw       r31, 0x5C(r1)
  mr        r31, r4
  mr        r5, r31
  stw       r30, 0x58(r1)
  mr        r30, r3
  mr        r4, r30
  addi      r3, r1, 0x8
  bl        0x174C
  rlwinm    r31,r31,2,0,29
  addi      r3, r1, 0x24
  add       r4, r30, r31
  lwz       r4, 0x20(r4)
  bl        -0xCFE8
  lfs       f1, 0x24(r1)
  lis       r3, 0x804C
  lfs       f0, 0x28(r1)
  addi      r0, r3, 0x1514
  stfs      f1, 0x34(r1)
  addi      r3, r30, 0xA9C
  addi      r4, r1, 0x48
  stfs      f0, 0x38(r1)
  lwz       r6, 0x34(r1)
  lwz       r5, 0x38(r1)
  stw       r6, 0x1C(r1)
  stw       r5, 0x20(r1)
  lfs       f1, 0x1C(r1)
  lfs       f0, 0x20(r1)
  stw       r0, 0x50(r1)
  stfs      f1, 0x48(r1)
  stfs      f0, 0x4C(r1)
  lwz       r12, 0xA9C(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  add       r4, r30, r31
  addi      r3, r1, 0x14
  lwz       r4, 0x2C(r4)
  bl        -0xD04C
  lfs       f1, 0x14(r1)
  lis       r3, 0x804C
  lfs       f0, 0x18(r1)
  addi      r0, r3, 0x1514
  stfs      f1, 0x2C(r1)
  addi      r3, r30, 0xAB0
  addi      r4, r1, 0x3C
  stfs      f0, 0x30(r1)
  lwz       r6, 0x2C(r1)
  lwz       r5, 0x30(r1)
  stw       r6, 0xC(r1)
  stw       r5, 0x10(r1)
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stw       r0, 0x44(r1)
  stfs      f1, 0x3C(r1)
  stfs      f0, 0x40(r1)
  lwz       r12, 0xAB0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xAF8(r30)
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	803D7DBC
 * Size:	000058
 */
void fadeFiledeletingEffect__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0xA9C
  lwz       r12, 0xA9C(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xAB0
  lwz       r12, 0xAB0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xAF8(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void killAllEffect__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D7E14
 * Size:	000318
 */
void openDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  li        r0, 0
  stw       r31, 0x2C(r1)
  mr.       r31, r4
  stw       r30, 0x28(r1)
  mr        r30, r3
  blt-      .loc_0x30
  cmpwi     r31, 0x3
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6B70
  li        r4, 0x3F0
  addi      r5, r5, 0x6B88
  crclr     6, 0x6
  bl        -0x3AD824

.loc_0x54:
  stw       r31, 0xB9C(r30)
  lwz       r31, 0xB9C(r30)
  mulli     r3, r31, 0x34
  addi      r10, r3, 0xB00
  add       r10, r30, r10
  lbz       r0, 0x0(r10)
  cmplwi    r0, 0
  beq-      .loc_0x180
  cmpwi     r31, 0
  li        r0, 0
  blt-      .loc_0x8C
  cmpwi     r31, 0x3
  bge-      .loc_0x8C
  li        r0, 0x1

.loc_0x8C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0xB0
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6B70
  li        r4, 0x39
  addi      r5, r5, 0x6B88
  crclr     6, 0x6
  bl        -0x3AD880

.loc_0xB0:
  lis       r4, 0x6174
  lwz       r3, 0xBA0(r30)
  addi      r6, r4, 0x6131
  li        r5, 0x5064
  bl        -0xDB7C
  stw       r3, 0x14(r1)
  lis       r4, 0x6174
  lwz       r3, 0xBA0(r30)
  addi      r6, r4, 0x6132
  li        r5, 0x5064
  bl        -0xDB94
  stw       r3, 0x18(r1)
  lis       r4, 0x6174
  lwz       r3, 0xBA0(r30)
  addi      r6, r4, 0x6133
  li        r5, 0x5064
  bl        -0xDBAC
  lwz       r5, 0x14(r1)
  li        r10, 0
  lis       r4, 0x6E65
  lwz       r9, 0x18(r1)
  stb       r10, 0xB0(r5)
  rlwinm    r0,r31,2,0,29
  addi      r7, r1, 0x14
  li        r8, 0x1
  stw       r3, 0x1C(r1)
  addi      r6, r4, 0x7764
  li        r5, 0x54
  stb       r10, 0xB0(r9)
  lwzx      r4, r7, r0
  stb       r10, 0xB0(r3)
  stb       r8, 0xB0(r4)
  lwz       r3, 0xBA0(r30)
  bl        -0xDBF0
  lis       r4, 0x385F
  lis       r5, 0x35
  addi      r0, r4, 0x3030
  lis       r4, 0x6577
  stw       r0, 0x1C(r3)
  addi      r0, r5, 0x3530
  addi      r6, r4, 0x6473
  li        r5, 0x546E
  stw       r0, 0x18(r3)
  lwz       r3, 0xBA0(r30)
  bl        -0xDC1C
  lis       r5, 0x385F
  lis       r4, 0x35
  addi      r0, r5, 0x3030
  stw       r0, 0x1C(r3)
  addi      r0, r4, 0x3530
  stw       r0, 0x18(r3)
  b         .loc_0x2BC

.loc_0x180:
  lbz       r0, 0x1(r10)
  cmplwi    r0, 0
  beq-      .loc_0x298
  cmpwi     r31, 0
  li        r0, 0
  blt-      .loc_0x1A4
  cmpwi     r31, 0x3
  bge-      .loc_0x1A4
  li        r0, 0x1

.loc_0x1A4:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x1C8
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6B70
  li        r4, 0x39
  addi      r5, r5, 0x6B88
  crclr     6, 0x6
  bl        -0x3AD998

.loc_0x1C8:
  lis       r4, 0x6174
  lwz       r3, 0xBA0(r30)
  addi      r6, r4, 0x6131
  li        r5, 0x5064
  bl        -0xDC94
  stw       r3, 0x8(r1)
  lis       r4, 0x6174
  lwz       r3, 0xBA0(r30)
  addi      r6, r4, 0x6132
  li        r5, 0x5064
  bl        -0xDCAC
  stw       r3, 0xC(r1)
  lis       r4, 0x6174
  lwz       r3, 0xBA0(r30)
  addi      r6, r4, 0x6133
  li        r5, 0x5064
  bl        -0xDCC4
  lwz       r5, 0x8(r1)
  li        r10, 0
  lis       r4, 0x6E65
  lwz       r9, 0xC(r1)
  stb       r10, 0xB0(r5)
  rlwinm    r0,r31,2,0,29
  addi      r7, r1, 0x8
  li        r8, 0x1
  stw       r3, 0x10(r1)
  addi      r6, r4, 0x7764
  li        r5, 0x54
  stb       r10, 0xB0(r9)
  lwzx      r4, r7, r0
  stb       r10, 0xB0(r3)
  stb       r8, 0xB0(r4)
  lwz       r3, 0xBA0(r30)
  bl        -0xDD08
  lis       r4, 0x345F
  lis       r5, 0x35
  addi      r0, r4, 0x3030
  lis       r4, 0x6577
  stw       r0, 0x1C(r3)
  addi      r0, r5, 0x3438
  addi      r6, r4, 0x6473
  li        r5, 0x546E
  stw       r0, 0x18(r3)
  lwz       r3, 0xBA0(r30)
  bl        -0xDD34
  lis       r5, 0x345F
  lis       r4, 0x35
  addi      r0, r5, 0x3030
  stw       r0, 0x1C(r3)
  addi      r0, r4, 0x3438
  stw       r0, 0x18(r3)
  b         .loc_0x2BC

.loc_0x298:
  lwz       r5, 0x1C(r10)
  mr        r4, r31
  lwz       r6, 0x20(r10)
  addi      r3, r30, 0xBA8
  lwz       r7, 0x24(r10)
  lwz       r8, 0x28(r10)
  lwz       r9, 0x2C(r10)
  lwz       r10, 0x30(r10)
  bl        -0x3E88

.loc_0x2BC:
  lwz       r3, 0xAFC(r30)
  rlwinm.   r0,r3,0,28,28
  bne-      .loc_0x300
  ori       r0, r3, 0x8
  lfs       f1, 0x17CC(r2)
  stw       r0, 0xAFC(r30)
  addi      r3, r30, 0x7E8
  li        r4, 0
  li        r5, 0x1
  lwz       r6, -0x6514(r13)
  lfs       f0, 0x54(r6)
  fmuls     f1, f1, f0
  bl        -0x7568
  addi      r3, r30, 0x824
  bl        -0x7354
  addi      r3, r30, 0x860
  bl        -0x735C

.loc_0x300:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803D812C
 * Size:	00006C
 */
void closeDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xAFC(r3)
  rlwinm.   r0,r3,0,28,28
  beq-      .loc_0x58
  rlwinm    r0,r3,0,29,27
  addi      r3, r31, 0x7E8
  stw       r0, 0xAFC(r31)
  bl        -0x73A4
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x824
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x75E0
  addi      r3, r31, 0x860
  bl        -0x73CC

.loc_0x58:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D8198
 * Size:	00006C
 */
void decideDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xAFC(r3)
  rlwinm.   r0,r3,0,28,28
  beq-      .loc_0x58
  rlwinm    r0,r3,0,29,27
  addi      r3, r31, 0x7E8
  stw       r0, 0xAFC(r31)
  bl        -0x7410
  addi      r3, r31, 0x824
  bl        -0x7418
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x860
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x7654

.loc_0x58:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D8204
 * Size:	000024
 */
void isFinishCloseDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x824
  stw       r0, 0x14(r1)
  bl        -0x7264
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D8228
 * Size:	0002A0
 */
void openMSG__Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, 0x17F0(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  lwz       r0, 0xAFC(r3)
  ori       r0, r0, 0x4
  stw       r0, 0xAFC(r3)
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x316714
  stw       r3, 0xBF0(r31)
  cmplwi    r30, 0xA
  stw       r3, 0xBF4(r31)
  bgt-      .loc_0x288
  lis       r3, 0x804F
  rlwinm    r0,r30,2,0,29
  subi      r3, r3, 0x72D0
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  lis       r3, 0x395F
  lis       r4, 0x35
  addi      r6, r3, 0x3030
  mr        r3, r31
  addi      r5, r4, 0x3437
  mr        r8, r6
  mr        r10, r6
  mr        r7, r5
  mr        r9, r5
  bl        0x4A8
  b         .loc_0x288
  lis       r3, 0x35
  lis       r6, 0x355F
  addi      r5, r3, 0x3438
  lis       r8, 0x365F
  lis       r4, 0x375F
  mr        r3, r31
  mr        r7, r5
  mr        r9, r5
  addi      r6, r6, 0x3030
  addi      r8, r8, 0x3030
  addi      r10, r4, 0x3030
  bl        0x474
  mr        r3, r31
  bl        0x5D0
  b         .loc_0x288
  lis       r4, 0x35
  lis       r3, 0x395F
  addi      r6, r3, 0x3030
  mr        r3, r31
  addi      r7, r4, 0x3437
  addi      r5, r4, 0x3438
  mr        r8, r6
  mr        r10, r6
  mr        r9, r7
  bl        0x440
  b         .loc_0x288
  lis       r3, 0x35
  lis       r6, 0x325F
  addi      r5, r3, 0x3439
  lis       r8, 0x335F
  lis       r4, 0x345F
  mr        r3, r31
  mr        r7, r5
  mr        r9, r5
  addi      r6, r6, 0x3030
  addi      r8, r8, 0x3030
  addi      r10, r4, 0x3030
  bl        0x40C
  mr        r3, r31
  bl        0x568
  b         .loc_0x288
  lis       r4, 0x35
  lis       r3, 0x395F
  addi      r8, r3, 0x3030
  lis       r5, 0x355F
  addi      r7, r4, 0x3437
  mr        r3, r31
  mr        r10, r8
  addi      r6, r5, 0x3030
  mr        r9, r7
  addi      r5, r4, 0x3530
  bl        0x3D4
  b         .loc_0x288
  lis       r4, 0x35
  lis       r3, 0x395F
  addi      r8, r3, 0x3030
  lis       r5, 0x385F
  addi      r7, r4, 0x3437
  mr        r3, r31
  mr        r10, r8
  addi      r6, r5, 0x3030
  mr        r9, r7
  addi      r5, r4, 0x3438
  bl        0x3A4
  b         .loc_0x288
  lis       r4, 0x35
  lis       r3, 0x395F
  addi      r8, r3, 0x3030
  lis       r5, 0x305F
  addi      r7, r4, 0x3437
  mr        r3, r31
  mr        r10, r8
  addi      r6, r5, 0x3030
  mr        r9, r7
  addi      r5, r4, 0x3439
  bl        0x374
  b         .loc_0x288
  lis       r3, 0x35
  lis       r6, 0x355F
  addi      r5, r3, 0x3439
  lis       r8, 0x365F
  lis       r4, 0x375F
  mr        r3, r31
  mr        r7, r5
  mr        r9, r5
  addi      r6, r6, 0x3030
  addi      r8, r8, 0x3030
  addi      r10, r4, 0x3030
  bl        0x340
  mr        r3, r31
  bl        0x49C
  b         .loc_0x288
  lis       r4, 0x35
  lis       r3, 0x395F
  addi      r8, r3, 0x3030
  lis       r5, 0x315F
  addi      r7, r4, 0x3437
  mr        r3, r31
  mr        r10, r8
  addi      r6, r5, 0x3030
  mr        r9, r7
  addi      r5, r4, 0x3439
  bl        0x308
  b         .loc_0x288
  lis       r4, 0x35
  lis       r3, 0x395F
  addi      r8, r3, 0x3030
  lis       r5, 0x385F
  addi      r7, r4, 0x3437
  mr        r3, r31
  mr        r10, r8
  addi      r6, r5, 0x3030
  mr        r9, r7
  addi      r5, r4, 0x3439
  bl        0x2D8
  b         .loc_0x288
  lis       r4, 0x35
  lis       r3, 0x395F
  addi      r6, r3, 0x3030
  mr        r3, r31
  addi      r7, r4, 0x3437
  addi      r5, r4, 0x3439
  mr        r8, r6
  mr        r10, r6
  mr        r9, r7
  bl        0x2AC

.loc_0x288:
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
 * Address:	803D84C8
 * Size:	000060
 */
void closeMSG__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xAFC(r3)
  rlwinm.   r0,r3,0,29,29
  beq-      .loc_0x44
  rlwinm    r0,r3,0,30,28
  lfs       f1, 0x17F0(r2)
  stw       r0, 0xAFC(r31)
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x3169B4
  stw       r3, 0xBF0(r31)
  stw       r3, 0xBF4(r31)

.loc_0x44:
  mr        r3, r31
  bl        0x438
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D8528
 * Size:	000028
 */
void isFinishCloseMSG__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0xAFC(r3)
  rlwinm.   r0,r0,0,29,29
  bne-      .loc_0x20
  lwz       r0, 0xBF0(r3)
  cmplwi    r0, 0
  bne-      .loc_0x20
  li        r3, 0x1
  blr       

.loc_0x20:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	803D8550
 * Size:	0000C4
 */
void setYesNo__Q43ebi6Screen10FileSelect11TMainScreenFb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  stw       r0, 0x14(r1)
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x68
  li        r5, 0x1
  lfs       f3, 0x17F4(r2)
  stb       r5, 0x8D8(r6)
  li        r0, 0
  lfs       f4, 0x17BC(r2)
  addi      r3, r6, 0x974
  lwz       r4, -0x6514(r13)
  lfs       f1, 0x17F0(r2)
  lfs       f0, 0x54(r4)
  lfs       f2, 0x17F8(r2)
  fmuls     f0, f3, f0
  lfs       f3, 0x17FC(r2)
  stfs      f0, 0x900(r6)
  stfs      f4, 0x8FC(r6)
  stb       r5, 0x904(r6)
  stb       r0, 0x905(r6)
  stb       r0, 0x950(r6)
  stb       r5, 0x951(r6)
  bl        -0xAF6D8
  b         .loc_0xB4

.loc_0x68:
  li        r5, 0
  li        r0, 0x1
  stb       r5, 0x904(r6)
  addi      r3, r6, 0x9B4
  lfs       f5, 0x17F4(r2)
  stb       r0, 0x905(r6)
  lfs       f4, 0x17BC(r2)
  stb       r0, 0x924(r6)
  lfs       f1, 0x17F0(r2)
  lwz       r4, -0x6514(r13)
  lfs       f2, 0x17F8(r2)
  lfs       f0, 0x54(r4)
  lfs       f3, 0x17FC(r2)
  fmuls     f0, f5, f0
  stfs      f0, 0x94C(r6)
  stfs      f4, 0x948(r6)
  stb       r0, 0x950(r6)
  stb       r5, 0x951(r6)
  bl        -0xAF728

.loc_0xB4:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D8614
 * Size:	000144
 */
void updateMsg___Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  lwz       r4, 0xBF0(r3)
  cmplwi    r4, 0
  beq-      .loc_0x28
  subi      r0, r4, 0x1
  stw       r0, 0xBF0(r3)

.loc_0x28:
  lwz       r0, 0xAFC(r3)
  rlwinm.   r0,r0,0,29,29
  beq-      .loc_0x98
  lwz       r5, 0xBF4(r3)
  cmplwi    r5, 0
  beq-      .loc_0x74
  lwz       r4, 0xBF0(r3)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lfd       f2, 0x17E8(r2)
  stw       r4, 0xC(r1)
  lfd       f0, 0x8(r1)
  stw       r5, 0x14(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x10(r1)
  lfd       f0, 0x10(r1)
  fsubs     f0, f0, f2
  fdivs     f2, f1, f0
  b         .loc_0x78

.loc_0x74:
  lfs       f2, 0x17BC(r2)

.loc_0x78:
  lfs       f0, 0x17C4(r2)
  lfs       f1, 0x17DC(r2)
  fsubs     f0, f0, f2
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r31, 0x1C(r1)
  b         .loc_0xF0

.loc_0x98:
  lwz       r5, 0xBF4(r3)
  cmplwi    r5, 0
  beq-      .loc_0xD8
  lwz       r4, 0xBF0(r3)
  lis       r0, 0x4330
  stw       r0, 0x18(r1)
  lfd       f2, 0x17E8(r2)
  stw       r4, 0x1C(r1)
  lfd       f0, 0x18(r1)
  stw       r5, 0x14(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x10(r1)
  lfd       f0, 0x10(r1)
  fsubs     f0, f0, f2
  fdivs     f1, f1, f0
  b         .loc_0xDC

.loc_0xD8:
  lfs       f1, 0x17BC(r2)

.loc_0xDC:
  lfs       f0, 0x17DC(r2)
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r31, 0xC(r1)

.loc_0xF0:
  lis       r5, 0x696E
  lis       r4, 0x4E
  lwz       r3, 0xC(r3)
  addi      r6, r5, 0x4D47
  addi      r5, r4, 0x6D61
  bl        -0xE3C0
  li        r4, 0x1
  mr        r30, r3
  bl        -0xE340
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803D8758
 * Size:	00004C
 */
void setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx(void)
{
/*
.loc_0x0:
  lwz       r4, 0x98(r3)
  stw       r8, 0x1C(r4)
  stw       r7, 0x18(r4)
  lwz       r4, 0x9C(r3)
  stw       r8, 0x1C(r4)
  stw       r7, 0x18(r4)
  lwz       r4, 0xA0(r3)
  stw       r10, 0x1C(r4)
  stw       r9, 0x18(r4)
  lwz       r4, 0xA4(r3)
  stw       r10, 0x1C(r4)
  stw       r9, 0x18(r4)
  lwz       r4, 0xB8(r3)
  stw       r6, 0x1C(r4)
  stw       r5, 0x18(r4)
  lwz       r3, 0xBC(r3)
  stw       r6, 0x1C(r3)
  stw       r5, 0x18(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void isFinishOutCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D87A4
 * Size:	00008C
 */
void inCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xAFC(r3)
  rlwinm.   r0,r3,0,30,30
  bne-      .loc_0x78
  ori       r0, r3, 0x2
  lfs       f1, 0x17CC(r2)
  stw       r0, 0xAFC(r31)
  addi      r3, r31, 0x5CC
  li        r4, 0
  li        r5, 0x1
  lwz       r6, -0x6514(r13)
  lfs       f0, 0x54(r6)
  fmuls     f1, f1, f0
  bl        -0x7C50
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x608
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x7C70
  addi      r3, r31, 0x644
  bl        -0x7A5C
  addi      r3, r31, 0x680
  bl        -0x7A64

.loc_0x78:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D8830
 * Size:	00008C
 */
void outCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xAFC(r3)
  rlwinm.   r0,r3,0,30,30
  beq-      .loc_0x78
  rlwinm    r0,r3,0,31,29
  addi      r3, r31, 0x5CC
  stw       r0, 0xAFC(r31)
  bl        -0x7AA8
  addi      r3, r31, 0x608
  bl        -0x7AB0
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x644
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x7CEC
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x680
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x7D0C

.loc_0x78:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D88BC
 * Size:	00008C
 */
void inYesNo___Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xAFC(r3)
  rlwinm.   r0,r3,0,31,31
  bne-      .loc_0x78
  ori       r0, r3, 0x1
  lfs       f1, 0x17CC(r2)
  stw       r0, 0xAFC(r31)
  addi      r3, r31, 0x6BC
  li        r4, 0
  li        r5, 0x1
  lwz       r6, -0x6514(r13)
  lfs       f0, 0x54(r6)
  fmuls     f1, f1, f0
  bl        -0x7D68
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x6F8
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x7D88
  addi      r3, r31, 0x734
  bl        -0x7B74
  addi      r3, r31, 0x770
  bl        -0x7B7C

.loc_0x78:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D8948
 * Size:	00008C
 */
void outYesNo___Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xAFC(r3)
  rlwinm.   r0,r3,0,31,31
  beq-      .loc_0x78
  rlwinm    r0,r3,0,0,30
  addi      r3, r31, 0x6BC
  stw       r0, 0xAFC(r31)
  bl        -0x7BC0
  addi      r3, r31, 0x6F8
  bl        -0x7BC8
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x734
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x7E04
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x770
  lfs       f1, 0x17CC(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        -0x7E24

.loc_0x78:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void isFinishOutYesNo___Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D89D4
 * Size:	0001C0
 */
void setDataBallCopyResult__Q43ebi6Screen10FileSelect11TMainScreenFll(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  mulli     r0, r4, 0x34
  stw       r31, 0x4C(r1)
  mr        r31, r5
  mulli     r4, r31, 0x34
  stw       r30, 0x48(r1)
  mr        r30, r3
  add       r5, r30, r0
  lbz       r0, 0xB00(r5)
  add       r4, r30, r4
  stb       r0, 0xB00(r4)
  lbz       r0, 0xB01(r5)
  stb       r0, 0xB01(r4)
  lwz       r0, 0xB04(r5)
  stw       r0, 0xB04(r4)
  lwz       r0, 0xB08(r5)
  stw       r0, 0xB08(r4)
  lwz       r0, 0xB0C(r5)
  stw       r0, 0xB0C(r4)
  lwz       r0, 0xB10(r5)
  stw       r0, 0xB10(r4)
  lwz       r0, 0xB14(r5)
  stw       r0, 0xB14(r4)
  lwz       r0, 0xB18(r5)
  stw       r0, 0xB18(r4)
  lwz       r0, 0xB1C(r5)
  stw       r0, 0xB1C(r4)
  lwz       r0, 0xB20(r5)
  stw       r0, 0xB20(r4)
  lwz       r0, 0xB24(r5)
  stw       r0, 0xB24(r4)
  lwz       r0, 0xB28(r5)
  stw       r0, 0xB28(r4)
  lwz       r0, 0xB2C(r5)
  stw       r0, 0xB2C(r4)
  lwz       r0, 0xB30(r5)
  stw       r0, 0xB30(r4)
  bl        0x40C
  mr        r4, r30
  mr        r5, r31
  addi      r3, r1, 0x8
  bl        0x998
  lwz       r0, 0x8(r1)
  rlwinm    r31,r31,2,0,29
  add       r4, r30, r31
  addi      r3, r1, 0x18
  stw       r0, 0xC(r1)
  lwz       r4, 0x20(r4)
  bl        -0xDDA4
  lfs       f1, 0x18(r1)
  li        r8, 0
  lfs       f0, 0x1C(r1)
  lis       r3, 0x804C
  stfs      f1, 0x20(r1)
  addi      r5, r3, 0x14F0
  lis       r4, 0x804C
  lis       r6, 0x804C
  stfs      f0, 0x24(r1)
  lis       r3, 0x804E
  lwz       r9, 0x20(r1)
  addi      r0, r4, 0x14D8
  stw       r5, 0x28(r1)
  addi      r11, r6, 0x1514
  lwz       r5, 0x24(r1)
  addi      r7, r3, 0x7488
  stw       r9, 0x10(r1)
  lis       r4, 0x804F
  lwz       r9, 0xC(r1)
  lis       r3, 0x804E
  stw       r5, 0x14(r1)
  li        r6, 0x9
  lfs       f1, 0x10(r1)
  subi      r10, r4, 0x72A4
  stw       r0, 0x28(r1)
  addi      r5, r3, 0x75C8
  lfs       f0, 0x14(r1)
  li        r0, 0x1
  stw       r11, 0x40(r1)
  addi      r3, r1, 0x28
  addi      r4, r1, 0x38
  stb       r8, 0x2C(r1)
  stw       r7, 0x28(r1)
  stfs      f1, 0x38(r1)
  stfs      f0, 0x3C(r1)
  stw       r10, 0x40(r1)
  stw       r9, 0x44(r1)
  stb       r8, 0x2D(r1)
  sth       r6, 0x30(r1)
  stw       r8, 0x34(r1)
  stw       r5, 0x28(r1)
  stb       r0, 0x2C(r1)
  bl        -0x1E6CC
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180C
  li        r5, 0
  bl        -0xA0528
  add       r3, r30, r31
  addi      r4, r1, 0xC
  lwz       r3, 0xA84(r3)
  bl        -0x1F000
  add       r3, r30, r31
  addi      r4, r1, 0xC
  lwz       r3, 0xA90(r3)
  bl        -0x1F010
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803D8B94
 * Size:	000250
 */
void setDataBallNew__Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stw       r31, 0x9C(r1)
  stw       r30, 0x98(r1)
  mr        r30, r4
  mr        r5, r30
  stw       r29, 0x94(r1)
  mr        r29, r3
  mr        r4, r29
  addi      r3, r1, 0xC
  bl        0x858
  lwz       r0, 0xC(r1)
  rlwinm    r31,r30,2,0,29
  add       r4, r29, r31
  addi      r3, r1, 0x2C
  stw       r0, 0x10(r1)
  lwz       r4, 0x20(r4)
  bl        -0xDEE4
  lfs       f1, 0x2C(r1)
  li        r8, 0
  lfs       f0, 0x30(r1)
  lis       r3, 0x804C
  stfs      f1, 0x3C(r1)
  addi      r5, r3, 0x14F0
  lis       r4, 0x804C
  lis       r6, 0x804C
  stfs      f0, 0x40(r1)
  lis       r3, 0x804E
  lwz       r9, 0x3C(r1)
  addi      r0, r4, 0x14D8
  stw       r5, 0x64(r1)
  addi      r11, r6, 0x1514
  lwz       r5, 0x40(r1)
  addi      r7, r3, 0x7488
  stw       r9, 0x1C(r1)
  lis       r4, 0x804F
  lwz       r9, 0x10(r1)
  lis       r3, 0x804E
  stw       r5, 0x20(r1)
  li        r6, 0x4
  lfs       f1, 0x1C(r1)
  subi      r10, r4, 0x72A4
  stw       r0, 0x64(r1)
  addi      r5, r3, 0x75B0
  lfs       f0, 0x20(r1)
  li        r0, 0x1
  stw       r11, 0x7C(r1)
  addi      r3, r1, 0x64
  addi      r4, r1, 0x74
  stb       r8, 0x68(r1)
  stw       r7, 0x64(r1)
  stfs      f1, 0x74(r1)
  stfs      f0, 0x78(r1)
  stw       r10, 0x7C(r1)
  stw       r9, 0x80(r1)
  stb       r8, 0x69(r1)
  sth       r6, 0x6C(r1)
  stw       r8, 0x70(r1)
  stw       r5, 0x64(r1)
  stb       r0, 0x68(r1)
  bl        -0x1E744
  add       r4, r29, r31
  addi      r3, r1, 0x24
  lwz       r4, 0x2C(r4)
  bl        -0xDFA0
  lfs       f1, 0x24(r1)
  li        r8, 0
  lfs       f0, 0x28(r1)
  lis       r3, 0x804C
  stfs      f1, 0x34(r1)
  addi      r5, r3, 0x14F0
  lis       r4, 0x804C
  lis       r6, 0x804C
  stfs      f0, 0x38(r1)
  lis       r3, 0x804E
  lwz       r9, 0x34(r1)
  addi      r0, r4, 0x14D8
  stw       r5, 0x44(r1)
  addi      r11, r6, 0x1514
  lwz       r5, 0x38(r1)
  addi      r7, r3, 0x7488
  stw       r9, 0x14(r1)
  lis       r4, 0x804F
  lwz       r9, 0x10(r1)
  lis       r3, 0x804E
  stw       r5, 0x18(r1)
  li        r6, 0x5
  lfs       f1, 0x14(r1)
  subi      r10, r4, 0x72A4
  stw       r0, 0x44(r1)
  addi      r5, r3, 0x7598
  lfs       f0, 0x18(r1)
  li        r0, 0x1
  stw       r11, 0x5C(r1)
  addi      r3, r1, 0x44
  addi      r4, r1, 0x54
  stb       r8, 0x48(r1)
  stw       r7, 0x44(r1)
  stfs      f1, 0x54(r1)
  stfs      f0, 0x58(r1)
  stw       r10, 0x5C(r1)
  stw       r9, 0x60(r1)
  stb       r8, 0x49(r1)
  sth       r6, 0x4C(r1)
  stw       r8, 0x50(r1)
  stw       r5, 0x44(r1)
  stb       r0, 0x48(r1)
  bl        -0x1E738
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180C
  li        r5, 0
  bl        -0xA0724
  mulli     r4, r30, 0x34
  li        r5, 0x1
  li        r0, 0
  mr        r3, r29
  add       r4, r29, r4
  stb       r5, 0xB01(r4)
  stb       r0, 0xB00(r4)
  bl        0x108
  mr        r4, r29
  mr        r5, r30
  addi      r3, r1, 0x8
  bl        0x694
  lbz       r7, 0x8(r1)
  add       r3, r29, r31
  lbz       r6, 0x9(r1)
  addi      r4, r1, 0x10
  lbz       r5, 0xA(r1)
  lbz       r0, 0xB(r1)
  stb       r7, 0x10(r1)
  stb       r6, 0x11(r1)
  stb       r5, 0x12(r1)
  stb       r0, 0x13(r1)
  lwz       r3, 0xA84(r3)
  bl        -0x1F24C
  add       r3, r29, r31
  addi      r4, r1, 0x10
  lwz       r3, 0xA90(r3)
  bl        -0x1F25C
  lwz       r0, 0xA4(r1)
  lwz       r31, 0x9C(r1)
  lwz       r30, 0x98(r1)
  lwz       r29, 0x94(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	803D8DE4
 * Size:	000098
 */
void setDataBallBroken__Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  li        r4, 0x180D
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r3, -0x67A8(r13)
  bl        -0xA07DC
  mulli     r0, r31, 0x34
  li        r5, 0x1
  mr        r3, r30
  add       r4, r30, r0
  stb       r5, 0xB00(r4)
  bl        .loc_0x98
  mr        r4, r30
  mr        r5, r31
  addi      r3, r1, 0x8
  bl        0x5E4
  lwz       r0, 0x8(r1)
  rlwinm    r31,r31,2,0,29
  add       r3, r30, r31
  addi      r4, r1, 0xC
  stw       r0, 0xC(r1)
  lwz       r3, 0xA84(r3)
  bl        -0x1F2E8
  add       r3, r30, r31
  addi      r4, r1, 0xC
  lwz       r3, 0xA90(r3)
  bl        -0x1F2F8
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x98:
*/
}

/*
 * --INFO--
 * Address:	803D8E7C
 * Size:	00004C
 */
void initDataBalls___Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3

.loc_0x1C:
  mr        r3, r30
  mr        r4, r31
  bl        .loc_0x4C
  addi      r31, r31, 0x1
  cmpwi     r31, 0x3
  blt+      .loc_0x1C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x4C:
*/
}

/*
 * --INFO--
 * Address:	803D8EC8
 * Size:	000550
 */
void setColorTimgDataBall___Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stmw      r26, 0x68(r1)
  mr        r30, r4
  lis       r4, 0x8049
  mr        r29, r3
  mulli     r0, r30, 0x34
  addi      r31, r4, 0x6AE8
  add       r3, r29, r0
  lbz       r0, 0xB00(r3)
  cmplwi    r0, 0
  beq-      .loc_0x138
  rlwinm    r27,r30,2,0,29
  addi      r4, r31, 0x1F4
  add       r3, r29, r27
  li        r5, 0
  lwz       r3, 0x50(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x114(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  bne-      .loc_0x74
  addi      r3, r31, 0x88
  addi      r5, r31, 0xA0
  li        r4, 0x553
  crclr     6, 0x6
  bl        -0x3AE8F8

.loc_0x74:
  add       r3, r29, r27
  addi      r4, r31, 0x1F4
  lwz       r3, 0x5C(r3)
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x114(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  bne-      .loc_0xB0
  addi      r3, r31, 0x88
  addi      r5, r31, 0xA0
  li        r4, 0x557
  crclr     6, 0x6
  bl        -0x3AE934

.loc_0xB0:
  add       r28, r29, r27
  li        r0, 0
  lwz       r3, 0x38(r28)
  stb       r0, 0xB0(r3)
  lwz       r3, 0x44(r28)
  stb       r0, 0xB0(r3)
  lwz       r0, 0x9D4(r28)
  cmplwi    r0, 0
  bne-      .loc_0xE8
  addi      r3, r31, 0x88
  addi      r5, r31, 0xA0
  li        r4, 0x55D
  crclr     6, 0x6
  bl        -0x3AE96C

.loc_0xE8:
  lwz       r3, 0x9D4(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  add       r27, r29, r27
  lwz       r0, 0x9E0(r27)
  cmplwi    r0, 0
  bne-      .loc_0x120
  addi      r3, r31, 0x88
  addi      r5, r31, 0xA0
  li        r4, 0x55F
  crclr     6, 0x6
  bl        -0x3AE9A4

.loc_0x120:
  lwz       r3, 0x9E0(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x308

.loc_0x138:
  lbz       r0, 0xB01(r3)
  cmplwi    r0, 0
  beq-      .loc_0x248
  rlwinm    r27,r30,2,0,29
  addi      r4, r31, 0x208
  add       r3, r29, r27
  li        r5, 0
  lwz       r3, 0x50(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x114(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  bne-      .loc_0x184
  addi      r3, r31, 0x88
  addi      r5, r31, 0xA0
  li        r4, 0x566
  crclr     6, 0x6
  bl        -0x3AEA08

.loc_0x184:
  add       r3, r29, r27
  addi      r4, r31, 0x208
  lwz       r3, 0x5C(r3)
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x114(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  bne-      .loc_0x1C0
  addi      r3, r31, 0x88
  addi      r5, r31, 0xA0
  li        r4, 0x56A
  crclr     6, 0x6
  bl        -0x3AEA44

.loc_0x1C0:
  add       r28, r29, r27
  li        r0, 0
  lwz       r3, 0x38(r28)
  stb       r0, 0xB0(r3)
  lwz       r3, 0x44(r28)
  stb       r0, 0xB0(r3)
  lwz       r0, 0x9D4(r28)
  cmplwi    r0, 0
  bne-      .loc_0x1F8
  addi      r3, r31, 0x88
  addi      r5, r31, 0xA0
  li        r4, 0x570
  crclr     6, 0x6
  bl        -0x3AEA7C

.loc_0x1F8:
  lwz       r3, 0x9D4(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  add       r27, r29, r27
  lwz       r0, 0x9E0(r27)
  cmplwi    r0, 0
  bne-      .loc_0x230
  addi      r3, r31, 0x88
  addi      r5, r31, 0xA0
  li        r4, 0x572
  crclr     6, 0x6
  bl        -0x3AEAB4

.loc_0x230:
  lwz       r3, 0x9E0(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x308

.loc_0x248:
  rlwinm    r27,r30,2,0,29
  addi      r4, r31, 0x218
  add       r3, r29, r27
  li        r5, 0
  lwz       r3, 0x50(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x114(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  bne-      .loc_0x288
  addi      r3, r31, 0x88
  addi      r5, r31, 0xA0
  li        r4, 0x578
  crclr     6, 0x6
  bl        -0x3AEB0C

.loc_0x288:
  add       r3, r29, r27
  addi      r4, r31, 0x218
  lwz       r3, 0x5C(r3)
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x114(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  bne-      .loc_0x2C4
  addi      r3, r31, 0x88
  addi      r5, r31, 0xA0
  li        r4, 0x57C
  crclr     6, 0x6
  bl        -0x3AEB48

.loc_0x2C4:
  add       r4, r29, r27
  li        r0, 0x1
  lwz       r3, 0x38(r4)
  stb       r0, 0xB0(r3)
  lwz       r3, 0x44(r4)
  stb       r0, 0xB0(r3)
  lwz       r3, 0x9D4(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  add       r3, r29, r27
  lwz       r3, 0x9E0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0x308:
  mr        r4, r29
  mr        r5, r30
  addi      r3, r1, 0x8
  bl        .loc_0x550
  lwz       r0, 0x8(r1)
  lis       r5, 0x4330
  rlwinm    r26,r30,2,0,29
  stw       r5, 0x30(r1)
  add       r3, r29, r26
  lfd       f4, 0x17E8(r2)
  stw       r0, 0xC(r1)
  lwz       r3, 0x68(r3)
  lbz       r6, 0xC(r1)
  lbz       r4, 0xD(r1)
  lbz       r0, 0xE(r1)
  stw       r6, 0x34(r1)
  lwz       r12, 0x0(r3)
  lfd       f0, 0x30(r1)
  stw       r4, 0x44(r1)
  fsubs     f1, f0, f4
  lfs       f5, 0x1800(r2)
  stw       r5, 0x40(r1)
  lfs       f3, 0x17DC(r2)
  lfd       f0, 0x40(r1)
  fmuls     f2, f5, f1
  stw       r0, 0x54(r1)
  fsubs     f1, f0, f4
  lwz       r12, 0x13C(r12)
  stw       r5, 0x50(r1)
  fdivs     f2, f2, f3
  lfd       f0, 0x50(r1)
  fsubs     f0, f0, f4
  fmuls     f1, f5, f1
  fctiwz    f2, f2
  fmuls     f0, f5, f0
  fdivs     f1, f1, f3
  stfd      f2, 0x38(r1)
  lwz       r30, 0x3C(r1)
  fdivs     f0, f0, f3
  fctiwz    f1, f1
  fctiwz    f0, f0
  stfd      f1, 0x48(r1)
  stfd      f0, 0x58(r1)
  lwz       r31, 0x4C(r1)
  lwz       r27, 0x5C(r1)
  mtctr     r12
  bctrl     
  lwz       r28, 0x70(r3)
  li        r4, 0
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  lha       r0, 0x6(r3)
  mr        r3, r28
  addi      r5, r1, 0x28
  li        r4, 0
  sth       r30, 0x28(r1)
  sth       r31, 0x2A(r1)
  sth       r27, 0x2C(r1)
  sth       r0, 0x2E(r1)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  add       r3, r29, r26
  lwz       r3, 0x74(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x13C(r12)
  mtctr     r12
  bctrl     
  lwz       r28, 0x70(r3)
  li        r4, 0
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  lha       r0, 0x6(r3)
  mr        r3, r28
  addi      r5, r1, 0x20
  li        r4, 0
  sth       r30, 0x20(r1)
  sth       r31, 0x22(r1)
  sth       r27, 0x24(r1)
  sth       r0, 0x26(r1)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  add       r3, r29, r26
  lwz       r3, 0x38(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x13C(r12)
  mtctr     r12
  bctrl     
  lwz       r28, 0x70(r3)
  li        r4, 0
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  lha       r0, 0x6(r3)
  mr        r3, r28
  addi      r5, r1, 0x18
  li        r4, 0
  sth       r30, 0x18(r1)
  sth       r31, 0x1A(r1)
  sth       r27, 0x1C(r1)
  sth       r0, 0x1E(r1)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  add       r3, r29, r26
  lwz       r3, 0x44(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x13C(r12)
  mtctr     r12
  bctrl     
  lwz       r28, 0x70(r3)
  li        r4, 0
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  lha       r0, 0x6(r3)
  mr        r3, r28
  addi      r5, r1, 0x10
  li        r4, 0
  sth       r30, 0x10(r1)
  sth       r31, 0x12(r1)
  sth       r27, 0x14(r1)
  sth       r0, 0x16(r1)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  lmw       r26, 0x68(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr       

.loc_0x550:
*/
}

/*
 * --INFO--
 * Address:	803D9418
 * Size:	0000CC
 */
void getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  mr.       r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  blt-      .loc_0x38
  cmpwi     r31, 0x3
  bge-      .loc_0x38
  li        r0, 0x1

.loc_0x38:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6B70
  li        r4, 0x5A5
  addi      r5, r5, 0x6B88
  crclr     6, 0x6
  bl        -0x3AEE30

.loc_0x5C:
  mulli     r0, r31, 0x34
  add       r3, r30, r0
  lbz       r0, 0xB01(r3)
  lwz       r5, 0xB08(r3)
  cmplwi    r0, 0
  lwz       r6, 0xB0C(r3)
  lwz       r7, 0xB10(r3)
  lwz       r8, 0xB18(r3)
  lwz       r9, 0xB14(r3)
  bne-      .loc_0x90
  lbz       r0, 0xB00(r3)
  cmplwi    r0, 0
  beq-      .loc_0xA4

.loc_0x90:
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0
  li        r9, 0

.loc_0xA4:
  mr        r3, r29
  mr        r4, r30
  bl        .loc_0xCC
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xCC:
*/
}

/*
 * --INFO--
 * Address:	803D94E4
 * Size:	0001C0
 */
void calcDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFUlUlUlUlUl(void)
{
/*
.loc_0x0:
  add       r0, r6, r7
  cmplwi    r6, 0x1
  add       r0, r0, r8
  stwu      r1, -0x70(r1)
  add       r4, r0, r9
  li        r10, 0x1
  addi      r4, r4, 0x1
  add       r4, r5, r4
  ble-      .loc_0x28
  mr        r10, r6

.loc_0x28:
  cmplw     r10, r5
  bge-      .loc_0x34
  mr        r10, r5

.loc_0x34:
  cmplw     r10, r7
  bge-      .loc_0x40
  mr        r10, r7

.loc_0x40:
  lis       r0, 0x4330
  stw       r9, 0x44(r1)
  lfd       f7, 0x17E8(r2)
  stw       r0, 0x40(r1)
  lfs       f3, 0x17CC(r2)
  lfd       f0, 0x40(r1)
  stw       r8, 0x4C(r1)
  fsubs     f2, f0, f7
  lfs       f8, 0x1804(r2)
  stw       r0, 0x48(r1)
  lfs       f0, 0x17DC(r2)
  lfd       f1, 0x48(r1)
  stw       r6, 0x14(r1)
  fsubs     f1, f1, f7
  stw       r0, 0x10(r1)
  lfd       f4, 0x10(r1)
  fsubs     f1, f2, f1
  stw       r10, 0x1C(r1)
  fsubs     f5, f4, f7
  stw       r0, 0x18(r1)
  fmuls     f2, f3, f1
  lfd       f1, 0x18(r1)
  stw       r7, 0x24(r1)
  fsubs     f1, f1, f7
  stw       r0, 0x20(r1)
  lfd       f4, 0x20(r1)
  fdivs     f6, f5, f1
  stw       r10, 0x2C(r1)
  stw       r0, 0x28(r1)
  lfd       f3, 0x28(r1)
  stw       r5, 0x34(r1)
  stw       r0, 0x30(r1)
  lfd       f1, 0x30(r1)
  fsubs     f5, f4, f7
  fsubs     f3, f3, f7
  stw       r10, 0x3C(r1)
  fsubs     f4, f1, f7
  stw       r0, 0x38(r1)
  fmuls     f6, f8, f6
  fdivs     f5, f5, f3
  lfd       f3, 0x38(r1)
  stw       r4, 0x54(r1)
  stw       r0, 0x50(r1)
  lfd       f1, 0x50(r1)
  fsubs     f3, f3, f7
  fsubs     f1, f1, f7
  fmuls     f5, f8, f5
  fdivs     f3, f4, f3
  fdivs     f1, f2, f1
  fmuls     f3, f8, f3
  fadds     f6, f6, f1
  fadds     f5, f5, f1
  fadds     f3, f3, f1
  fcmpo     cr0, f6, f0
  ble-      .loc_0x120
  fmr       f6, f0

.loc_0x120:
  lfs       f0, 0x17DC(r2)
  fcmpo     cr0, f5, f0
  ble-      .loc_0x130
  fmr       f5, f0

.loc_0x130:
  lfs       f0, 0x17DC(r2)
  fcmpo     cr0, f3, f0
  ble-      .loc_0x140
  fmr       f3, f0

.loc_0x140:
  lfs       f0, 0x17BC(r2)
  fcmpo     cr0, f6, f0
  bge-      .loc_0x150
  fmr       f6, f0

.loc_0x150:
  lfs       f0, 0x17BC(r2)
  fcmpo     cr0, f5, f0
  bge-      .loc_0x160
  fmr       f5, f0

.loc_0x160:
  lfs       f0, 0x17BC(r2)
  fcmpo     cr0, f3, f0
  bge-      .loc_0x170
  fmr       f3, f0

.loc_0x170:
  fctiwz    f2, f6
  li        r0, -0x1
  fctiwz    f1, f5
  stw       r0, 0x8(r1)
  fctiwz    f0, f3
  li        r0, 0xFF
  stfd      f2, 0x58(r1)
  stfd      f1, 0x60(r1)
  lwz       r6, 0x5C(r1)
  stfd      f0, 0x68(r1)
  lwz       r5, 0x64(r1)
  lwz       r4, 0x6C(r1)
  stb       r6, 0x8(r1)
  stb       r5, 0x9(r1)
  stb       r4, 0xA(r1)
  stb       r0, 0xB(r1)
  lwz       r0, 0x8(r1)
  stw       r0, 0x0(r3)
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	803D96A4
 * Size:	000080
 */
void setIconColorAlpha___Q43ebi6Screen10FileSelect11TMainScreenFUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r4

.loc_0x24:
  lwz       r3, 0x68(r31)
  mr        r4, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x74(r31)
  mr        r4, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x3
  blt+      .loc_0x24
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803D9724
 * Size:	000058
 */
void __ct__Q43ebi6Screen10FileSelect9TFileDataFv(void)
{
/*
.loc_0x0:
  li        r7, 0
  lis       r4, 0x1
  stb       r7, 0x1(r3)
  addi      r0, r4, 0x2FD1
  li        r6, 0x29A
  addi      r5, r4, 0x5B38
  stw       r0, 0x4(r3)
  li        r4, 0x58
  li        r0, 0xB
  stw       r6, 0xC(r3)
  stw       r6, 0x8(r3)
  stw       r6, 0x10(r3)
  stw       r6, 0x14(r3)
  stw       r6, 0x18(r3)
  stw       r5, 0x1C(r3)
  stw       r4, 0x20(r3)
  stw       r7, 0x24(r3)
  stw       r6, 0x28(r3)
  stw       r0, 0x2C(r3)
  stw       r0, 0x30(r3)
  stb       r7, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803D977C
 * Size:	00000C
 */
void getName__Q43ebi6Screen10FileSelect11TMainScreenFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8049
  addi      r3, r3, 0x6D28
  blr
*/
}

/*
 * --INFO--
 * Address:	803D9788
 * Size:	00009C
 */
void __dt__Q35efx2d10FileSelect11T2DFileselMFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x80
  lis       r3, 0x804F
  subi      r3, r3, 0x7228
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x73CC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x349B58

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x3B5750

.loc_0x80:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D9824
 * Size:	000084
 */
void __dt__Q35efx2d10FileSelect16T2DFiledeletingMFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x68
  lis       r3, 0x804F
  subi      r3, r3, 0x71B0
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x58
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x349BDC

.loc_0x58:
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x3B57D4

.loc_0x68:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D98A8
 * Size:	000084
 */
void __dt__Q35efx2d10FileSelect15T2DFiledeletingFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x68
  lis       r3, 0x804F
  subi      r3, r3, 0x7178
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x58
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x349C60

.loc_0x58:
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x3B5858

.loc_0x68:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D992C
 * Size:	00009C
 */
void __dt__Q35efx2d10FileSelect12T2DFilecopyMFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x80
  lis       r3, 0x804F
  subi      r3, r3, 0x7140
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x7560
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x349CFC

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x3B58F4

.loc_0x80:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D99C8
 * Size:	00009C
 */
void __dt__Q35efx2d10FileSelect11T2DFilecopyFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x80
  lis       r3, 0x804F
  subi      r3, r3, 0x7108
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x7560
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x349D98

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x3B5990

.loc_0x80:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D9A64
 * Size:	000094
 */
void __ct__Q23ebi19E2DCallBack_AnmBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r31, r30
  bl        0x37910
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r31)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r31)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r31)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r30, 0x20
  stw       r7, 0x0(r31)
  li        r4, 0
  stb       r6, 0x1C(r31)
  stw       r5, 0x0(r30)
  stw       r0, 0x20(r30)
  bl        -0x372460
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D9AF8
 * Size:	000104
 */
void set__Q23ebi26E2DCallBack_BlinkFontColorFRQ23ebi16E2DFullFontColorRQ23ebi16E2DFullFontColor(void)
{
/*
.loc_0x0:
  lbz       r0, 0x0(r4)
  stb       r0, 0x20(r3)
  lbz       r0, 0x1(r4)
  stb       r0, 0x21(r3)
  lbz       r0, 0x2(r4)
  stb       r0, 0x22(r3)
  lbz       r0, 0x3(r4)
  stb       r0, 0x23(r3)
  lbz       r0, 0x4(r4)
  stb       r0, 0x24(r3)
  lbz       r0, 0x5(r4)
  stb       r0, 0x25(r3)
  lbz       r0, 0x6(r4)
  stb       r0, 0x26(r3)
  lbz       r0, 0x7(r4)
  stb       r0, 0x27(r3)
  lbz       r0, 0x8(r4)
  stb       r0, 0x28(r3)
  lbz       r0, 0x9(r4)
  stb       r0, 0x29(r3)
  lbz       r0, 0xA(r4)
  stb       r0, 0x2A(r3)
  lbz       r0, 0xB(r4)
  stb       r0, 0x2B(r3)
  lbz       r0, 0xC(r4)
  stb       r0, 0x2C(r3)
  lbz       r0, 0xD(r4)
  stb       r0, 0x2D(r3)
  lbz       r0, 0xE(r4)
  stb       r0, 0x2E(r3)
  lbz       r0, 0xF(r4)
  stb       r0, 0x2F(r3)
  lbz       r0, 0x0(r5)
  stb       r0, 0x30(r3)
  lbz       r0, 0x1(r5)
  stb       r0, 0x31(r3)
  lbz       r0, 0x2(r5)
  stb       r0, 0x32(r3)
  lbz       r0, 0x3(r5)
  stb       r0, 0x33(r3)
  lbz       r0, 0x4(r5)
  stb       r0, 0x34(r3)
  lbz       r0, 0x5(r5)
  stb       r0, 0x35(r3)
  lbz       r0, 0x6(r5)
  stb       r0, 0x36(r3)
  lbz       r0, 0x7(r5)
  stb       r0, 0x37(r3)
  lbz       r0, 0x8(r5)
  stb       r0, 0x38(r3)
  lbz       r0, 0x9(r5)
  stb       r0, 0x39(r3)
  lbz       r0, 0xA(r5)
  stb       r0, 0x3A(r3)
  lbz       r0, 0xB(r5)
  stb       r0, 0x3B(r3)
  lbz       r0, 0xC(r5)
  stb       r0, 0x3C(r3)
  lbz       r0, 0xD(r5)
  stb       r0, 0x3D(r3)
  lbz       r0, 0xE(r5)
  stb       r0, 0x3E(r3)
  lbz       r0, 0xF(r5)
  stb       r0, 0x3F(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803D9BFC
 * Size:	00000C
 */
void getName__Q25efx2d8ArgColorFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8049
  addi      r3, r3, 0x6D10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D9C08
 * Size:	00000C
 */
void getName__Q35efx2d10FileSelect11ArgFilecopyFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8049
  addi      r3, r3, 0x6D1C
  blr
*/
}

/*
 * --INFO--
 * Address:	803D9C14
 * Size:	00009C
 */
void __dt__Q35efx2d10FileSelect10T2DFileselFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x80
  lis       r3, 0x804F
  subi      r3, r3, 0x71EC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x73CC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x349FE4

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x3B5BDC

.loc_0x80:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D9CB0
 * Size:	000008
 */
void @8@__dt__Q35efx2d10FileSelect11T2DFilecopyFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x2EC
*/
}

/*
 * --INFO--
 * Address:	803D9CB8
 * Size:	000008
 */
void @8@__dt__Q35efx2d10FileSelect12T2DFilecopyMFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x390
*/
}

/*
 * --INFO--
 * Address:	803D9CC0
 * Size:	000008
 */
void @8@__dt__Q35efx2d10FileSelect15T2DFiledeletingFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x41C
*/
}

/*
 * --INFO--
 * Address:	803D9CC8
 * Size:	000008
 */
void @8@__dt__Q35efx2d10FileSelect16T2DFiledeletingMFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x4A8
*/
}

/*
 * --INFO--
 * Address:	803D9CD0
 * Size:	000008
 */
void @8@__dt__Q35efx2d10FileSelect10T2DFileselFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0xC0
*/
}

/*
 * --INFO--
 * Address:	803D9CD8
 * Size:	000008
 */
void @8@__dt__Q35efx2d10FileSelect11T2DFileselMFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x554
*/
}