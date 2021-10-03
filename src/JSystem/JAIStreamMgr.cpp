

/*
 * --INFO--
 * Address:	800B764C
 * Size:	00031C
 */
void JAInter::StreamMgr::init(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r24, 0x10(r1)
  lbz       r3, -0x73C0(r13)
  rlwinm.   r0,r3,26,31,31
  bne-      .loc_0x308
  li        r5, 0
  lwz       r4, -0x7494(r13)
  rlwimi    r3,r5,7,24,24
  stb       r3, -0x73C0(r13)
  rlwinm    r0,r3,0,24,31
  rlwimi    r0,r5,6,25,25
  li        r3, 0x2DC
  stb       r0, -0x73C0(r13)
  rlwinm    r0,r0,0,24,31
  rlwimi    r0,r5,5,26,26
  li        r5, 0x20
  stb       r0, -0x73C0(r13)
  bl        -0x93758
  mr.       r0, r3
  beq-      .loc_0x60
  bl        -0xE670
  mr        r0, r3

.loc_0x60:
  stw       r0, -0x73A8(r13)
  li        r3, 0x44
  lwz       r4, -0x7494(r13)
  li        r5, 0x20
  bl        -0x9377C
  mr.       r0, r3
  beq-      .loc_0x88
  li        r4, 0
  bl        -0x10C30
  mr        r0, r3

.loc_0x88:
  stw       r0, -0x739C(r13)
  bl        -0x9BEC
  lwz       r4, -0x7DF0(r13)
  bl        -0xE73C
  lwz       r3, -0x7498(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lis       r5, 0x800B
  lis       r4, 0x800B
  subi      r26, r5, 0x1A9C
  stw       r3, -0x73B0(r13)
  subi      r27, r4, 0x1ACC
  mr        r25, r3
  mr        r28, r26
  mr        r29, r26
  mr        r30, r26
  mr        r31, r26
  bl        -0x9B8C
  rlwinm    r6,r3,4,20,27
  lwz       r4, -0x7494(r13)
  rlwinm    r24,r3,0,24,31
  li        r5, 0x20
  addi      r3, r6, 0x10
  bl        -0x936F0
  mr        r4, r26
  mr        r7, r24
  li        r5, 0
  li        r6, 0x10
  bl        0xA2A4
  stw       r3, 0x1A8(r25)
  bl        -0x9BC0
  rlwinm    r6,r3,4,20,27
  lwz       r4, -0x7494(r13)
  rlwinm    r24,r3,0,24,31
  li        r5, 0x20
  addi      r3, r6, 0x10
  bl        -0x93724
  mr        r4, r26
  mr        r7, r24
  li        r5, 0
  li        r6, 0x10
  bl        0xA270
  stw       r3, 0x1A4(r25)
  bl        -0x9BF4
  rlwinm    r6,r3,4,20,27
  lwz       r4, -0x7494(r13)
  rlwinm    r24,r3,0,24,31
  li        r5, 0x20
  addi      r3, r6, 0x10
  bl        -0x93758
  mr        r4, r27
  mr        r7, r24
  li        r5, 0
  li        r6, 0x10
  bl        0xA23C
  stw       r3, 0x1AC(r25)
  bl        -0x9C28
  rlwinm    r6,r3,4,20,27
  lwz       r4, -0x7494(r13)
  rlwinm    r24,r3,0,24,31
  li        r5, 0x20
  addi      r3, r6, 0x10
  bl        -0x9378C
  mr        r4, r27
  mr        r7, r24
  li        r5, 0
  li        r6, 0x10
  bl        0xA208
  stw       r3, 0x1B0(r25)
  li        r5, 0x20
  lwz       r24, -0x7DF0(r13)
  lwz       r4, -0x7494(r13)
  rlwinm    r3,r24,4,0,27
  addi      r3, r3, 0x10
  bl        -0x937BC
  mr        r4, r28
  mr        r7, r24
  li        r5, 0
  li        r6, 0x10
  bl        0xA1D8
  stw       r3, 0x1C8(r25)
  li        r5, 0x20
  lwz       r24, -0x7DF0(r13)
  lwz       r4, -0x7494(r13)
  rlwinm    r3,r24,4,0,27
  addi      r3, r3, 0x10
  bl        -0x937EC
  mr        r4, r29
  mr        r7, r24
  li        r5, 0
  li        r6, 0x10
  bl        0xA1A8
  stw       r3, 0x1CC(r25)
  li        r5, 0x20
  lwz       r24, -0x7DF0(r13)
  lwz       r4, -0x7494(r13)
  rlwinm    r3,r24,4,0,27
  addi      r3, r3, 0x10
  bl        -0x9381C
  mr        r4, r30
  mr        r7, r24
  li        r5, 0
  li        r6, 0x10
  bl        0xA178
  stw       r3, 0x1D0(r25)
  li        r5, 0x20
  lwz       r24, -0x7DF0(r13)
  lwz       r4, -0x7494(r13)
  rlwinm    r3,r24,4,0,27
  addi      r3, r3, 0x10
  bl        -0x9384C
  mr        r4, r31
  mr        r7, r24
  li        r5, 0
  li        r6, 0x10
  bl        0xA148
  stw       r3, 0x1D4(r25)
  li        r3, 0x20
  li        r5, 0x20
  lwz       r4, -0x7494(r13)
  bl        -0x9397C
  cmplwi    r3, 0
  beq-      .loc_0x288
  li        r0, 0
  stw       r0, 0x18(r3)
  stw       r0, 0x1C(r3)

.loc_0x288:
  stw       r3, -0x73B8(r13)
  li        r0, 0
  lfs       f1, -0x7320(r2)
  stb       r0, 0x0(r3)
  lfs       f0, -0x731C(r2)
  stb       r0, 0x1(r3)
  stfs      f1, 0x4(r3)
  stfs      f1, 0x8(r3)
  stfs      f0, 0xC(r3)
  stfs      f0, 0x10(r3)
  stfs      f0, 0x14(r3)
  stw       r0, 0x1C(r3)
  lbz       r0, -0x73BC(r13)
  cmplwi    r0, 0
  bne-      .loc_0x2F0
  li        r3, 0xA
  bl        0x15B0
  li        r3, 0xA
  bl        0x15A8
  mr        r31, r3
  bl        -0x104DC
  mr        r4, r3
  lwz       r3, -0x739C(r13)
  mr        r5, r31
  bl        -0x10E24
  b         .loc_0x308

.loc_0x2F0:
  lwz       r12, -0x738C(r13)
  cmplwi    r12, 0
  beq-      .loc_0x308
  mtctr     r12
  bctrl     
  stw       r3, -0x7398(r13)

.loc_0x308:
  lmw       r24, 0x10(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	800B7968
 * Size:	000358
 */
void JAInter::StreamMgr::storeStreamBuffer( (JAIStream **, JAInter::Actor *, unsigned long, unsigned long, unsigned char, JAInter::SoundInfo *))
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
void JAInter::StreamMgr::releaseStreamBuffer( (JAIStream *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x28
  lbz       r0, 0x15(r31)
  cmplwi    r0, 0x4
  bge-      .loc_0x58

.loc_0x28:
  bl        0x109C
  li        r0, 0
  mr        r3, r31
  stb       r0, 0x15(r31)
  lwz       r4, 0x1B4(r31)
  stw       r0, 0x1C(r4)
  lwz       r4, 0x1B4(r31)
  stw       r0, 0x18(r4)
  bl        -0x4198
  li        r0, 0
  stw       r0, -0x7384(r13)
  b         .loc_0x74

.loc_0x58:
  lwz       r3, 0x1B4(r31)
  cmplwi    r3, 0
  beq-      .loc_0x74
  lwz       r0, 0x18(r3)
  ori       r0, r0, 0x2
  stw       r0, 0x18(r3)
  stw       r4, 0x28(r31)

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
 * Address:	800B7D48
 * Size:	0001AC
 */
void JAInter::StreamMgr::checkSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, -0x73BB(r13)
  cmplwi    r0, 0x2
  bne-      .loc_0x5C
  lwz       r0, -0x73A0(r13)
  cmplwi    r0, 0x5
  bne-      .loc_0x44
  lwz       r12, -0x7384(r13)
  cmplwi    r12, 0
  beq-      .loc_0x38
  mtctr     r12
  bctrl     

.loc_0x38:
  li        r0, 0
  stw       r0, -0x73A0(r13)
  b         .loc_0x54

.loc_0x44:
  cmplwi    r0, 0x6
  bne-      .loc_0x54
  li        r0, 0
  stw       r0, -0x73A0(r13)

.loc_0x54:
  li        r0, 0
  stb       r0, -0x73BB(r13)

.loc_0x5C:
  lwz       r0, -0x73A0(r13)
  cmplwi    r0, 0x7
  bgt-      .loc_0x19C
  lis       r3, 0x804A
  rlwinm    r0,r0,2,0,29
  addi      r3, r3, 0x6638
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  lbz       r0, -0x73BB(r13)
  cmplwi    r0, 0
  bne-      .loc_0x19C
  lwz       r0, -0x7388(r13)
  cmpwi     r0, 0
  bne-      .loc_0xA4
  li        r0, 0
  stw       r0, -0x73A0(r13)
  b         .loc_0x19C

.loc_0xA4:
  li        r0, 0x2
  stw       r0, -0x73A0(r13)
  b         .loc_0x19C
  lwz       r3, -0x7388(r13)
  cmpwi     r3, 0
  bne-      .loc_0xC8
  li        r0, 0
  stw       r0, -0x73A0(r13)
  b         .loc_0x19C

.loc_0xC8:
  bl        0xD14
  bl        0xFAC
  li        r0, 0x4
  stw       r0, -0x73A0(r13)
  b         .loc_0x19C
  lbz       r0, -0x73BD(r13)
  cmplwi    r0, 0x1
  bne-      .loc_0x110
  lwz       r12, -0x7384(r13)
  cmplwi    r12, 0
  beq-      .loc_0xFC
  mtctr     r12
  bctrl     

.loc_0xFC:
  lbz       r0, -0x73BE(r13)
  cmplwi    r0, 0
  bne-      .loc_0x19C
  li        r0, 0x3
  stw       r0, -0x73A0(r13)

.loc_0x110:
  lwz       r0, -0x73A0(r13)
  cmplwi    r0, 0x3
  bne-      .loc_0x19C
  lwz       r12, -0x7384(r13)
  cmplwi    r12, 0
  beq-      .loc_0x130
  mtctr     r12
  bctrl     

.loc_0x130:
  lwz       r3, -0x73A8(r13)
  bl        -0xEB40
  li        r3, 0
  li        r0, 0x5
  stb       r3, -0x73BD(r13)
  stw       r0, -0x73A0(r13)
  b         .loc_0x19C
  li        r0, 0x1
  lwz       r3, -0x73A8(r13)
  stb       r0, -0x73BB(r13)
  li        r4, 0
  bl        -0xEB34
  li        r0, 0x1
  stw       r0, -0x73A0(r13)
  b         .loc_0x19C
  li        r0, 0x1
  lwz       r3, -0x73A8(r13)
  stb       r0, -0x73BB(r13)
  bl        -0xEAD0
  li        r0, 0x1
  stw       r0, -0x73A0(r13)
  b         .loc_0x19C
  lwz       r12, -0x7384(r13)
  cmplwi    r12, 0
  beq-      .loc_0x19C
  mtctr     r12
  bctrl     

.loc_0x19C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
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
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stmw      r24, 0x20(r1)
  lwz       r4, -0x73B0(r13)
  cmplwi    r4, 0
  beq-      .loc_0x9DC
  lbz       r0, 0x15(r4)
  lwz       r31, -0x73B8(r13)
  cmplwi    r0, 0x4
  blt-      .loc_0xDC
  lbz       r0, -0x73BB(r13)
  cmplwi    r0, 0x2
  bne-      .loc_0x84
  lwz       r3, 0x1B4(r4)
  cmplwi    r3, 0
  beq-      .loc_0x68
  li        r0, 0
  stw       r0, 0x1C(r3)
  lwz       r3, -0x73B0(r13)
  lwz       r3, 0x1B4(r3)
  stw       r0, 0x18(r3)

.loc_0x68:
  lwz       r3, -0x73B0(r13)
  bl        -0x43F0
  lwz       r3, -0x73B0(r13)
  li        r0, 0
  stb       r0, 0x15(r3)
  stw       r0, -0x7384(r13)
  b         .loc_0x9DC

.loc_0x84:
  lbz       r3, 0x16(r4)
  cmplwi    r3, 0
  beq-      .loc_0x98
  subi      r0, r3, 0x1
  stb       r0, 0x16(r4)

.loc_0x98:
  lwz       r0, 0x18(r31)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0xDC
  lwz       r3, -0x73B0(r13)
  li        r5, 0x7
  lfs       f1, -0x7318(r2)
  lwz       r12, 0x10(r3)
  lwz       r4, 0x28(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x73B0(r13)
  li        r0, 0x5
  stb       r0, 0x15(r3)
  lwz       r0, 0x18(r31)
  xori      r0, r0, 0x2
  stw       r0, 0x18(r31)

.loc_0xDC:
  lwz       r4, -0x73B0(r13)
  lbz       r0, 0x15(r4)
  cmplwi    r0, 0x3
  blt-      .loc_0x9DC
  lwz       r0, 0x18(r31)
  lis       r3, 0x8048
  subi      r8, r3, 0x6950
  addi      r30, r4, 0x48
  rlwinm.   r0,r0,0,13,13
  lwz       r7, 0x0(r8)
  lwz       r6, 0x4(r8)
  li        r27, 0
  lwz       r5, 0x8(r8)
  lwz       r4, 0xC(r8)
  lwz       r3, 0x10(r8)
  lwz       r0, 0x14(r8)
  stw       r7, 0x8(r1)
  stw       r6, 0xC(r1)
  stw       r5, 0x10(r1)
  stw       r4, 0x14(r1)
  stw       r3, 0x18(r1)
  stw       r0, 0x1C(r1)
  beq-      .loc_0x1F8
  lfs       f30, -0x7320(r2)
  li        r24, 0
  li        r25, 0x1
  b         .loc_0x190

.loc_0x148:
  rlwinm    r3,r24,0,24,31
  lwz       r0, 0x8(r30)
  slw       r26, r25, r3
  rlwinm    r3,r24,4,20,27
  and.      r0, r0, r26
  addi      r28, r3, 0x1C
  add       r28, r30, r28
  beq-      .loc_0x184
  mr        r3, r28
  bl        -0x2770
  cmpwi     r3, 0
  bne-      .loc_0x184
  lwz       r0, 0x8(r30)
  xor       r0, r0, r26
  stw       r0, 0x8(r30)

.loc_0x184:
  lfs       f0, 0x4(r28)
  addi      r24, r24, 0x1
  fmuls     f30, f30, f0

.loc_0x190:
  rlwinm    r0,r24,0,24,31
  cmplwi    r0, 0x14
  blt+      .loc_0x148
  lwz       r3, -0x73B8(r13)
  lfs       f0, 0x4(r3)
  fcmpu     cr0, f0, f30
  beq-      .loc_0x1E0
  stfs      f30, 0x4(r3)
  addi      r3, r1, 0x8
  li        r6, 0
  lwz       r5, -0x7DF0(r13)
  b         .loc_0x1D4

.loc_0x1C0:
  rlwinm    r4,r6,2,22,29
  addi      r6, r6, 0x1
  lwzx      r0, r3, r4
  oris      r0, r0, 0x4
  stwx      r0, r3, r4

.loc_0x1D4:
  rlwinm    r0,r6,0,24,31
  cmplw     r0, r5
  blt+      .loc_0x1C0

.loc_0x1E0:
  lwz       r0, 0x8(r30)
  cmplwi    r0, 0
  bne-      .loc_0x1F8
  lwz       r0, 0x18(r31)
  xoris     r0, r0, 0x4
  stw       r0, 0x18(r31)

.loc_0x1F8:
  lwz       r0, 0x18(r31)
  rlwinm.   r0,r0,0,25,25
  beq-      .loc_0x288
  addi      r25, r1, 0x8
  li        r28, 0
  li        r26, 0x1
  b         .loc_0x260

.loc_0x214:
  lwz       r0, 0x170(r30)
  slw       r29, r26, r3
  lwz       r4, 0x180(r30)
  rlwinm    r3,r28,4,20,27
  and.      r0, r0, r29
  rlwinm    r24,r28,0,24,31
  add       r3, r4, r3
  beq-      .loc_0x24C
  bl        -0x2838
  cmpwi     r3, 0
  bne-      .loc_0x24C
  lwz       r0, 0x170(r30)
  xor       r0, r0, r29
  stw       r0, 0x170(r30)

.loc_0x24C:
  rlwinm    r3,r24,2,0,29
  addi      r28, r28, 0x1
  lwzx      r0, r25, r3
  oris      r0, r0, 0x4
  stwx      r0, r25, r3

.loc_0x260:
  lwz       r0, -0x7DF0(r13)
  rlwinm    r3,r28,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x214
  lwz       r0, 0x170(r30)
  cmplwi    r0, 0
  bne-      .loc_0x288
  lwz       r0, 0x18(r31)
  xori      r0, r0, 0x40
  stw       r0, 0x18(r31)

.loc_0x288:
  lwz       r3, -0x73B0(r13)
  lbz       r0, 0x15(r3)
  cmplwi    r0, 0x5
  bne-      .loc_0x324
  lwz       r12, 0x10(r3)
  li        r4, 0x7
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x7318(r2)
  fcmpu     cr0, f0, f1
  beq-      .loc_0x2C8
  lwz       r3, -0x73B0(r13)
  lwz       r0, 0x28(r3)
  cmplwi    r0, 0
  bne-      .loc_0x324

.loc_0x2C8:
  lwz       r3, -0x73B0(r13)
  lbz       r0, 0x16(r3)
  cmplwi    r0, 0
  bne-      .loc_0x324
  lwz       r3, -0x73A8(r13)
  li        r4, 0
  bl        -0xEE64
  lwz       r3, -0x73B0(r13)
  li        r0, 0
  stb       r0, 0x15(r3)
  lwz       r3, -0x73B0(r13)
  lwz       r3, 0x1B4(r3)
  stw       r0, 0x1C(r3)
  lwz       r3, -0x73B0(r13)
  lwz       r3, 0x1B4(r3)
  stw       r0, 0x18(r3)
  lwz       r3, -0x73B0(r13)
  bl        -0x4690
  li        r3, 0
  li        r0, 0x1
  stw       r3, -0x7384(r13)
  stw       r0, -0x73A0(r13)
  stw       r3, -0x7388(r13)

.loc_0x324:
  lwz       r0, 0x18(r31)
  rlwinm.   r0,r0,0,12,12
  beq-      .loc_0x424
  lfs       f30, -0x7318(r2)
  li        r26, 0
  lfs       f31, -0x731C(r2)
  li        r25, 0x1
  b         .loc_0x390

.loc_0x344:
  rlwinm    r3,r26,0,24,31
  lwz       r0, 0x10(r30)
  slw       r24, r25, r3
  lwz       r3, 0x160(r30)
  and.      r0, r0, r24
  rlwinm    r0,r26,4,20,27
  add       r28, r3, r0
  beq-      .loc_0x380
  mr        r3, r28
  bl        -0x296C
  cmpwi     r3, 0
  bne-      .loc_0x380
  lwz       r0, 0x10(r30)
  xor       r0, r0, r24
  stw       r0, 0x10(r30)

.loc_0x380:
  lfs       f0, 0x4(r28)
  addi      r26, r26, 0x1
  fsubs     f0, f0, f31
  fadds     f30, f30, f0

.loc_0x390:
  rlwinm    r0,r26,0,24,31
  cmplwi    r0, 0x7
  blt+      .loc_0x344
  lfs       f1, -0x731C(r2)
  lfs       f0, -0x7320(r2)
  fadds     f30, f30, f1
  fcmpo     cr0, f30, f0
  ble-      .loc_0x3B8
  fmr       f30, f0
  b         .loc_0x3C8

.loc_0x3B8:
  lfs       f0, -0x7318(r2)
  fcmpo     cr0, f30, f0
  bge-      .loc_0x3C8
  fmr       f30, f0

.loc_0x3C8:
  lwz       r3, -0x73B8(r13)
  lfs       f0, 0xC(r3)
  fcmpu     cr0, f0, f30
  beq-      .loc_0x40C
  stfs      f30, 0xC(r3)
  addi      r3, r1, 0x8
  li        r6, 0
  lwz       r5, -0x7DF0(r13)
  b         .loc_0x400

.loc_0x3EC:
  rlwinm    r4,r6,2,22,29
  addi      r6, r6, 0x1
  lwzx      r0, r3, r4
  oris      r0, r0, 0x8
  stwx      r0, r3, r4

.loc_0x400:
  rlwinm    r0,r6,0,24,31
  cmplw     r0, r5
  blt+      .loc_0x3EC

.loc_0x40C:
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0
  bne-      .loc_0x424
  lwz       r0, 0x18(r31)
  xoris     r0, r0, 0x8
  stw       r0, 0x18(r31)

.loc_0x424:
  lwz       r0, 0x18(r31)
  rlwinm.   r0,r0,0,24,24
  beq-      .loc_0x4B4
  addi      r25, r1, 0x8
  li        r28, 0
  li        r26, 0x1
  b         .loc_0x48C

.loc_0x440:
  lwz       r0, 0x174(r30)
  slw       r24, r26, r3
  lwz       r4, 0x184(r30)
  rlwinm    r3,r28,4,20,27
  and.      r0, r0, r24
  rlwinm    r29,r28,0,24,31
  add       r3, r4, r3
  beq-      .loc_0x478
  bl        -0x2A64
  cmpwi     r3, 0
  bne-      .loc_0x478
  lwz       r0, 0x174(r30)
  xor       r0, r0, r24
  stw       r0, 0x174(r30)

.loc_0x478:
  rlwinm    r3,r29,2,0,29
  addi      r28, r28, 0x1
  lwzx      r0, r25, r3
  oris      r0, r0, 0x8
  stwx      r0, r25, r3

.loc_0x48C:
  lwz       r0, -0x7DF0(r13)
  rlwinm    r3,r28,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x440
  lwz       r0, 0x174(r30)
  cmplwi    r0, 0
  bne-      .loc_0x4B4
  lwz       r0, 0x18(r31)
  xori      r0, r0, 0x80
  stw       r0, 0x18(r31)

.loc_0x4B4:
  lwz       r0, 0x18(r31)
  rlwinm.   r0,r0,0,11,11
  beq-      .loc_0x554
  lfs       f31, -0x7320(r2)
  li        r26, 0
  li        r25, 0x1
  b         .loc_0x518

.loc_0x4D0:
  rlwinm    r3,r26,0,24,31
  lwz       r0, 0xC(r30)
  slw       r24, r25, r3
  lwz       r3, 0x15C(r30)
  and.      r0, r0, r24
  rlwinm    r0,r26,4,20,27
  add       r28, r3, r0
  beq-      .loc_0x50C
  mr        r3, r28
  bl        -0x2AF8
  cmpwi     r3, 0
  bne-      .loc_0x50C
  lwz       r0, 0xC(r30)
  xor       r0, r0, r24
  stw       r0, 0xC(r30)

.loc_0x50C:
  lfs       f0, 0x4(r28)
  addi      r26, r26, 0x1
  fmuls     f31, f31, f0

.loc_0x518:
  rlwinm    r0,r26,0,24,31
  cmplwi    r0, 0x7
  blt+      .loc_0x4D0
  lwz       r3, -0x73B8(r13)
  lfs       f0, 0x8(r3)
  fcmpu     cr0, f0, f31
  beq-      .loc_0x53C
  li        r27, 0x1
  stfs      f31, 0x8(r3)

.loc_0x53C:
  lwz       r0, 0xC(r30)
  cmplwi    r0, 0
  bne-      .loc_0x554
  lwz       r0, 0x18(r31)
  xoris     r0, r0, 0x10
  stw       r0, 0x18(r31)

.loc_0x554:
  lwz       r0, 0x18(r31)
  rlwinm.   r0,r0,0,10,10
  beq-      .loc_0x644
  lfs       f31, -0x7318(r2)
  li        r26, 0
  li        r25, 0x1
  b         .loc_0x5B8

.loc_0x570:
  rlwinm    r3,r26,0,24,31
  lwz       r0, 0x14(r30)
  slw       r24, r25, r3
  lwz       r3, 0x164(r30)
  and.      r0, r0, r24
  rlwinm    r0,r26,4,20,27
  add       r28, r3, r0
  beq-      .loc_0x5AC
  mr        r3, r28
  bl        -0x2B98
  cmpwi     r3, 0
  bne-      .loc_0x5AC
  lwz       r0, 0x14(r30)
  xor       r0, r0, r24
  stw       r0, 0x14(r30)

.loc_0x5AC:
  lfs       f0, 0x4(r28)
  addi      r26, r26, 0x1
  fadds     f31, f31, f0

.loc_0x5B8:
  rlwinm    r0,r26,0,24,31
  cmplwi    r0, 0x7
  blt+      .loc_0x570
  lfs       f0, -0x7320(r2)
  fcmpo     cr0, f31, f0
  ble-      .loc_0x5D8
  fmr       f31, f0
  b         .loc_0x5E8

.loc_0x5D8:
  lfs       f0, -0x7318(r2)
  fcmpo     cr0, f31, f0
  bge-      .loc_0x5E8
  fmr       f31, f0

.loc_0x5E8:
  lwz       r3, -0x73B8(r13)
  lfs       f0, 0x10(r3)
  fcmpu     cr0, f0, f31
  beq-      .loc_0x62C
  stfs      f31, 0x10(r3)
  addi      r3, r1, 0x8
  li        r6, 0
  lwz       r5, -0x7DF0(r13)
  b         .loc_0x620

.loc_0x60C:
  rlwinm    r4,r6,2,22,29
  addi      r6, r6, 0x1
  lwzx      r0, r3, r4
  oris      r0, r0, 0x20
  stwx      r0, r3, r4

.loc_0x620:
  rlwinm    r0,r6,0,24,31
  cmplw     r0, r5
  blt+      .loc_0x60C

.loc_0x62C:
  lwz       r0, 0x14(r30)
  cmplwi    r0, 0
  bne-      .loc_0x644
  lwz       r0, 0x18(r31)
  xoris     r0, r0, 0x20
  stw       r0, 0x18(r31)

.loc_0x644:
  lwz       r0, 0x18(r31)
  rlwinm.   r0,r0,0,20,20
  beq-      .loc_0x6D4
  addi      r25, r1, 0x8
  li        r28, 0
  li        r26, 0x1
  b         .loc_0x6AC

.loc_0x660:
  lwz       r0, 0x178(r30)
  slw       r24, r26, r3
  lwz       r4, 0x188(r30)
  rlwinm    r3,r28,4,20,27
  and.      r0, r0, r24
  rlwinm    r29,r28,0,24,31
  add       r3, r4, r3
  beq-      .loc_0x698
  bl        -0x2C84
  cmpwi     r3, 0
  bne-      .loc_0x698
  lwz       r0, 0x178(r30)
  xor       r0, r0, r24
  stw       r0, 0x178(r30)

.loc_0x698:
  rlwinm    r3,r29,2,0,29
  addi      r28, r28, 0x1
  lwzx      r0, r25, r3
  oris      r0, r0, 0x20
  stwx      r0, r25, r3

.loc_0x6AC:
  lwz       r0, -0x7DF0(r13)
  rlwinm    r3,r28,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x660
  lwz       r0, 0x178(r30)
  cmplwi    r0, 0
  bne-      .loc_0x6D4
  lwz       r0, 0x18(r31)
  xori      r0, r0, 0x800
  stw       r0, 0x18(r31)

.loc_0x6D4:
  lwz       r0, 0x18(r31)
  rlwinm.   r0,r0,0,9,9
  beq-      .loc_0x7C4
  lfs       f31, -0x7318(r2)
  li        r26, 0
  li        r25, 0x1
  b         .loc_0x738

.loc_0x6F0:
  rlwinm    r3,r26,0,24,31
  lwz       r0, 0x18(r30)
  slw       r24, r25, r3
  lwz       r3, 0x168(r30)
  and.      r0, r0, r24
  rlwinm    r0,r26,4,20,27
  add       r28, r3, r0
  beq-      .loc_0x72C
  mr        r3, r28
  bl        -0x2D18
  cmpwi     r3, 0
  bne-      .loc_0x72C
  lwz       r0, 0x18(r30)
  xor       r0, r0, r24
  stw       r0, 0x18(r30)

.loc_0x72C:
  lfs       f0, 0x4(r28)
  addi      r26, r26, 0x1
  fadds     f31, f31, f0

.loc_0x738:
  rlwinm    r0,r26,0,24,31
  cmplwi    r0, 0x7
  blt+      .loc_0x6F0
  lfs       f0, -0x7320(r2)
  fcmpo     cr0, f31, f0
  ble-      .loc_0x758
  fmr       f31, f0
  b         .loc_0x768

.loc_0x758:
  lfs       f0, -0x7318(r2)
  fcmpo     cr0, f31, f0
  bge-      .loc_0x768
  fmr       f31, f0

.loc_0x768:
  lwz       r3, -0x73B8(r13)
  lfs       f0, 0x14(r3)
  fcmpu     cr0, f0, f31
  beq-      .loc_0x7AC
  stfs      f31, 0x14(r3)
  addi      r3, r1, 0x8
  li        r6, 0
  lwz       r5, -0x7DF0(r13)
  b         .loc_0x7A0

.loc_0x78C:
  rlwinm    r4,r6,2,22,29
  addi      r6, r6, 0x1
  lwzx      r0, r3, r4
  oris      r0, r0, 0x40
  stwx      r0, r3, r4

.loc_0x7A0:
  rlwinm    r0,r6,0,24,31
  cmplw     r0, r5
  blt+      .loc_0x78C

.loc_0x7AC:
  lwz       r0, 0x18(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C4
  lwz       r0, 0x18(r31)
  xoris     r0, r0, 0x40
  stw       r0, 0x18(r31)

.loc_0x7C4:
  lwz       r0, 0x18(r31)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0x854
  li        r28, 0
  b         .loc_0x82C

.loc_0x7D8:
  li        r0, 0x1
  lwz       r3, 0x17C(r30)
  slw       r24, r0, r4
  lwz       r4, 0x18C(r30)
  and.      r0, r3, r24
  rlwinm    r0,r28,4,20,27
  rlwinm    r25,r28,0,24,31
  add       r3, r4, r0
  beq-      .loc_0x828
  bl        -0x2E00
  cmpwi     r3, 0
  bne-      .loc_0x814
  lwz       r0, 0x17C(r30)
  xor       r0, r0, r24
  stw       r0, 0x17C(r30)

.loc_0x814:
  rlwinm    r4,r25,2,0,29
  addi      r3, r1, 0x8
  lwzx      r0, r3, r4
  oris      r0, r0, 0x40
  stwx      r0, r3, r4

.loc_0x828:
  addi      r28, r28, 0x1

.loc_0x82C:
  lwz       r0, -0x7DF0(r13)
  rlwinm    r4,r28,0,24,31
  cmplw     r4, r0
  blt+      .loc_0x7D8
  lwz       r0, 0x17C(r30)
  cmplwi    r0, 0
  bne-      .loc_0x854
  lwz       r0, 0x18(r31)
  xori      r0, r0, 0x100
  stw       r0, 0x18(r31)

.loc_0x854:
  lwz       r0, 0x8(r1)
  cmplwi    r0, 0
  bne-      .loc_0x8A4
  lwz       r0, 0xC(r1)
  cmplwi    r0, 0
  bne-      .loc_0x8A4
  lwz       r0, 0x10(r1)
  cmplwi    r0, 0
  bne-      .loc_0x8A4
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x8A4
  lwz       r0, 0x18(r1)
  cmplwi    r0, 0
  bne-      .loc_0x8A4
  lwz       r0, 0x1C(r1)
  cmplwi    r0, 0
  bne-      .loc_0x8A4
  rlwinm.   r0,r27,0,24,31
  beq-      .loc_0x9CC

.loc_0x8A4:
  bl        0x364A0
  li        r29, 0
  mr        r26, r3
  addi      r31, r1, 0x8
  li        r25, 0
  mr        r28, r29
  b         .loc_0x9A0

.loc_0x8C0:
  lwz       r0, 0x0(r31)
  rlwinm.   r0,r0,0,13,13
  beq-      .loc_0x8F0
  lwz       r5, -0x73B8(r13)
  addi      r3, r29, 0x4
  lwz       r4, 0x180(r30)
  addi      r0, r28, 0x26C
  lfs       f1, 0x4(r5)
  lfsx      f0, r4, r3
  lwz       r3, -0x73A8(r13)
  fmuls     f0, f1, f0
  stfsx     f0, r3, r0

.loc_0x8F0:
  lwz       r0, 0x0(r31)
  rlwinm.   r0,r0,0,12,12
  beq-      .loc_0x930
  lwz       r6, -0x73B8(r13)
  addi      r4, r29, 0x4
  lwz       r5, 0x184(r30)
  addi      r3, r28, 0x284
  lfs       f2, 0xC(r6)
  li        r0, 0x1
  lfsx      f1, r5, r4
  lfs       f0, -0x731C(r2)
  fadds     f1, f2, f1
  lwz       r4, -0x73A8(r13)
  fsubs     f0, f1, f0
  stfsx     f0, r4, r3
  stb       r0, 0x2D8(r4)

.loc_0x930:
  lwz       r0, 0x0(r31)
  rlwinm.   r0,r0,0,10,10
  beq-      .loc_0x960
  lwz       r5, -0x73B8(r13)
  addi      r3, r29, 0x4
  lwz       r4, 0x188(r30)
  addi      r0, r28, 0x29C
  lfs       f1, 0x10(r5)
  lfsx      f0, r4, r3
  lwz       r3, -0x73A8(r13)
  fadds     f0, f1, f0
  stfsx     f0, r3, r0

.loc_0x960:
  lwz       r0, 0x0(r31)
  rlwinm.   r0,r0,0,9,9
  beq-      .loc_0x990
  lwz       r5, -0x73B8(r13)
  addi      r3, r29, 0x4
  lwz       r4, 0x18C(r30)
  addi      r0, r28, 0x2B4
  lfs       f1, 0x14(r5)
  lfsx      f0, r4, r3
  lwz       r3, -0x73A8(r13)
  fadds     f0, f1, f0
  stfsx     f0, r3, r0

.loc_0x990:
  addi      r31, r31, 0x4
  addi      r29, r29, 0x10
  addi      r28, r28, 0x4
  addi      r25, r25, 0x1

.loc_0x9A0:
  bl        0x648
  cmplw     r25, r3
  blt+      .loc_0x8C0
  rlwinm.   r0,r27,0,24,31
  beq-      .loc_0x9C4
  lwz       r4, -0x73B8(r13)
  lwz       r3, -0x73A8(r13)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x268(r3)

.loc_0x9C4:
  mr        r3, r26
  bl        0x363A4

.loc_0x9CC:
  lwz       r4, -0x73B0(r13)
  lwz       r3, 0x2C(r4)
  addi      r0, r3, 0x1
  stw       r0, 0x2C(r4)

.loc_0x9DC:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  lmw       r24, 0x20(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
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
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, -0x73A0(r13)
  cmpwi     r0, 0x4
  beq-      .loc_0x34
  bge-      .loc_0x28
  cmpwi     r0, 0x3
  bge-      .loc_0x50
  b         .loc_0x98

.loc_0x28:
  cmpwi     r0, 0x6
  bge-      .loc_0x98
  b         .loc_0x7C

.loc_0x34:
  lwz       r3, -0x73B8(r13)
  lbz       r0, 0x2(r3)
  cmplwi    r0, 0
  bne-      .loc_0x98
  li        r0, 0
  stb       r0, -0x73BE(r13)
  b         .loc_0x98

.loc_0x50:
  lwz       r3, -0x73B0(r13)
  li        r0, 0x3
  stb       r0, 0x15(r3)
  lwz       r3, -0x7498(r13)
  lwz       r4, -0x73B0(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  bl        -0xA74
  b         .loc_0x98

.loc_0x7C:
  lwz       r3, -0x73B0(r13)
  lbz       r0, 0x15(r3)
  cmplwi    r0, 0x3
  bne-      .loc_0x94
  li        r0, 0x4
  stb       r0, 0x15(r3)

.loc_0x94:
  bl        -0xA94

.loc_0x98:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
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
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, -0x73C0(r13)
  rlwinm.   r0,r0,26,31,31
  bne-      .loc_0x20
  bl        -0xC6C
  bl        .loc_0x30

.loc_0x20:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x30:
*/
}

/*
 * --INFO--
 * Address:	800B89CC
 * Size:	0000E8
 */
void JAInter::StreamMgr::checkEntriedStream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x110(r1)
  mflr      r0
  stw       r0, 0x114(r1)
  stw       r31, 0x10C(r1)
  lwz       r4, -0x73B0(r13)
  lbz       r0, 0x15(r4)
  cmplwi    r0, 0x1
  bne-      .loc_0xD4
  li        r3, 0x2
  li        r0, 0
  stb       r3, 0x15(r4)
  lfs       f1, -0x7320(r2)
  lwz       r3, -0x73B8(r13)
  lfs       f0, -0x731C(r2)
  stb       r0, 0x0(r3)
  stb       r0, 0x1(r3)
  stfs      f1, 0x4(r3)
  stfs      f1, 0x8(r3)
  stfs      f0, 0xC(r3)
  stfs      f0, 0x10(r3)
  stfs      f0, 0x14(r3)
  stw       r0, 0x1C(r3)
  lwz       r0, -0x73B0(r13)
  lwz       r3, -0x73B8(r13)
  stw       r0, 0x1C(r3)
  lwz       r4, -0x73B0(r13)
  lwz       r31, -0x73B4(r13)
  lwz       r3, -0x7498(r13)
  lwz       r4, 0x20(r4)
  bl        -0xBF74
  rlwinm    r0,r3,1,15,30
  add       r3, r31, r0
  lhz       r0, 0x4(r3)
  add       r31, r31, r0
  bl        -0xAF18
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        0x11DF8
  mr        r4, r31
  addi      r3, r1, 0x8
  bl        0x11D7C
  addi      r3, r1, 0x8
  bl        0x178
  bl        0x348
  lwz       r3, -0x73B8(r13)
  lbz       r0, 0x2(r3)
  cmplwi    r0, 0
  beq-      .loc_0xC8
  li        r0, 0x1
  stb       r0, -0x73BE(r13)

.loc_0xC8:
  lis       r3, 0x800C
  subi      r0, r3, 0x770C
  stw       r0, -0x7384(r13)

.loc_0xD4:
  lwz       r0, 0x114(r1)
  lwz       r31, 0x10C(r1)
  mtlr      r0
  addi      r1, r1, 0x110
  blr
*/
}

/*
 * --INFO--
 * Address:	800B8AB4
 * Size:	000070
 */
void JAInter::StreamMgr::systemCallBack( (unsigned long, JASAramStream *, void *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r3, 0
  stw       r0, 0x14(r1)
  stw       r3, -0x73A4(r13)
  bne-      .loc_0x50
  lwz       r12, -0x7390(r13)
  li        r0, 0x2
  stb       r0, -0x73BB(r13)
  cmplwi    r12, 0
  beq-      .loc_0x38
  mtctr     r12
  bctrl     
  b         .loc_0x60

.loc_0x38:
  lwz       r0, -0x7398(r13)
  cmplwi    r0, 0
  beq-      .loc_0x60
  lwz       r3, -0x739C(r13)
  bl        -0x11D34
  b         .loc_0x60

.loc_0x50:
  cmplwi    r3, 0x1
  bne-      .loc_0x60
  li        r0, 0x1
  stb       r0, -0x73BD(r13)

.loc_0x60:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800B8B24
 * Size:	0000C8
 */
void JAInter::StreamMgr::prepareSystem( (long))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r12, -0x7394(r13)
  cmplwi    r12, 0
  beq-      .loc_0x40
  mtctr     r12
  bctrl     
  stw       r4, 0xC(r1)
  mr        r31, r3
  mr        r5, r4
  stw       r3, 0x8(r1)
  b         .loc_0x88

.loc_0x40:
  lwz       r0, -0x7398(r13)
  cmplwi    r0, 0
  beq-      .loc_0x6C
  bl        -0xB084
  mulli     r5, r3, 0xA
  lwz       r0, -0x7DF0(r13)
  lwz       r3, -0x739C(r13)
  lwz       r4, -0x7398(r13)
  mullw     r0, r0, r5
  rlwinm    r5,r0,31,1,31
  bl        -0x1207C

.loc_0x6C:
  lwz       r3, -0x739C(r13)
  lwz       r31, 0x38(r3)
  bl        -0xB0AC
  mulli     r3, r3, 0xA
  lwz       r0, -0x7DF0(r13)
  mullw     r0, r0, r3
  rlwinm    r5,r0,31,1,31

.loc_0x88:
  lis       r4, 0x800C
  lwz       r3, -0x73A8(r13)
  subi      r6, r4, 0x754C
  li        r7, 0
  mr        r4, r31
  bl        -0xFA34
  lwz       r3, -0x73A8(r13)
  mr        r4, r30
  li        r5, -0x1
  bl        -0xF94C
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800B8BEC
 * Size:	000198
 */
void JAInter::StreamMgr::playDirect( (char *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  lbz       r4, -0x73BB(r13)
  stb       r0, -0x73BE(r13)
  cmplwi    r4, 0
  stw       r0, -0x7384(r13)
  bne-      .loc_0x6C
  lwz       r0, -0x73A0(r13)
  cmplwi    r0, 0x4
  beq-      .loc_0x44
  cmplwi    r0, 0x3
  bne-      .loc_0x6C

.loc_0x44:
  li        r0, 0x1
  lwz       r3, -0x73A8(r13)
  stb       r0, -0x73BB(r13)
  bl        -0xF84C
  mr        r3, r30
  bl        0x23520
  li        r0, 0x1
  stw       r3, -0x7388(r13)
  stw       r0, -0x73A0(r13)
  b         .loc_0x180

.loc_0x6C:
  cmplwi    r4, 0x1
  beq-      .loc_0xAC
  lwz       r0, -0x73A0(r13)
  cmplwi    r0, 0x5
  bne-      .loc_0xAC
  li        r0, 0x1
  lwz       r3, -0x73A8(r13)
  stb       r0, -0x73BB(r13)
  li        r4, 0
  bl        -0xF90C
  mr        r3, r30
  bl        0x234E0
  li        r0, 0x1
  stw       r3, -0x7388(r13)
  stw       r0, -0x73A0(r13)
  b         .loc_0x180

.loc_0xAC:
  lwz       r0, -0x73A0(r13)
  cmplwi    r0, 0
  bne-      .loc_0x174
  mr        r3, r30
  bl        0x234BC
  mr        r3, r30
  bl        0x234B4
  lwz       r12, -0x7394(r13)
  mr        r30, r3
  stw       r3, -0x7388(r13)
  cmplwi    r12, 0
  beq-      .loc_0xF8
  mtctr     r12
  bctrl     
  stw       r4, 0xC(r1)
  mr        r31, r3
  mr        r5, r4
  stw       r3, 0x8(r1)
  b         .loc_0x140

.loc_0xF8:
  lwz       r0, -0x7398(r13)
  cmplwi    r0, 0
  beq-      .loc_0x124
  bl        -0xB204
  mulli     r5, r3, 0xA
  lwz       r0, -0x7DF0(r13)
  lwz       r3, -0x739C(r13)
  lwz       r4, -0x7398(r13)
  mullw     r0, r0, r5
  rlwinm    r5,r0,31,1,31
  bl        -0x121FC

.loc_0x124:
  lwz       r3, -0x739C(r13)
  lwz       r31, 0x38(r3)
  bl        -0xB22C
  mulli     r3, r3, 0xA
  lwz       r0, -0x7DF0(r13)
  mullw     r0, r0, r3
  rlwinm    r5,r0,31,1,31

.loc_0x140:
  lis       r4, 0x800C
  lwz       r3, -0x73A8(r13)
  subi      r6, r4, 0x754C
  li        r7, 0
  mr        r4, r31
  bl        -0xFBB4
  lwz       r3, -0x73A8(r13)
  mr        r4, r30
  li        r5, -0x1
  bl        -0xFACC
  li        r0, 0x4
  stw       r0, -0x73A0(r13)
  b         .loc_0x180

.loc_0x174:
  mr        r3, r30
  bl        0x23400
  stw       r3, -0x7388(r13)

.loc_0x180:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
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
/*
.loc_0x0:
  lwz       r0, -0x73A0(r13)
  cmplwi    r0, 0x5
  bne-      .loc_0x18
  li        r0, 0x6
  stw       r0, -0x73A0(r13)
  b         .loc_0x30

.loc_0x18:
  cmplwi    r0, 0x3
  beq-      .loc_0x28
  cmplwi    r0, 0x4
  bne-      .loc_0x30

.loc_0x28:
  li        r0, 0x7
  stw       r0, -0x73A0(r13)

.loc_0x30:
  li        r0, 0
  stw       r0, -0x7388(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800B8DC0
 * Size:	0000EC
 */
void JAInter::StreamMgr::initChannel(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  lwz       r3, -0x73B0(r13)
  lwz       r3, 0x44(r3)
  lwz       r31, 0x0(r3)
  cmplwi    r31, 0
  beq-      .loc_0xD0
  bl        0x35E4C
  li        r29, 0
  mr        r30, r3
  b         .loc_0xBC

.loc_0x3C:
  rlwinm.   r0,r31,0,31,31
  beq-      .loc_0x5C
  lwz       r3, -0x73B0(r13)
  mr        r4, r29
  lfs       f1, -0x7318(r2)
  li        r5, 0
  bl        -0x3D5C
  b         .loc_0x98

.loc_0x5C:
  rlwinm.   r0,r31,0,30,30
  beq-      .loc_0x7C
  lwz       r3, -0x73B0(r13)
  mr        r4, r29
  lfs       f1, -0x7320(r2)
  li        r5, 0
  bl        -0x3D7C
  b         .loc_0x98

.loc_0x7C:
  rlwinm.   r0,r31,0,30,31
  beq-      .loc_0x98
  lwz       r3, -0x73B0(r13)
  mr        r4, r29
  lfs       f1, -0x731C(r2)
  li        r5, 0
  bl        -0x3D9C

.loc_0x98:
  rlwinm.   r0,r31,0,29,29
  beq-      .loc_0xB4
  lwz       r3, -0x73B0(r13)
  mr        r4, r29
  lfs       f1, -0x7318(r2)
  li        r5, 0
  bl        -0x3E58

.loc_0xB4:
  rlwinm    r31,r31,28,4,31
  addi      r29, r29, 0x1

.loc_0xBC:
  rlwinm    r0,r29,0,24,31
  cmplwi    r0, 0x6
  blt+      .loc_0x3C
  mr        r3, r30
  bl        0x35DD4

.loc_0xD0:
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
 * Address:	800B8EAC
 * Size:	000008
 */
void JAInter::StreamMgr::getStreamObjectPointer(void)
{
/*
.loc_0x0:
  lwz       r3, -0x73A8(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800B8EB4
 * Size:	000008
 */
void JAInter::StreamMgr::getSystemStatus(void)
{
/*
.loc_0x0:
  lwz       r3, -0x73A4(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::StreamMgr::setParentHeap( (JASHeap *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JAInter::StreamMgr::setAllockCallback( (JAInter::StreamMgr::BufferInfo (*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::StreamMgr::setDeallockCallback( (void (*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B8EBC
 * Size:	000008
 */
void JAInter::StreamMgr::getDecodedBufferBlocks(void)
{
/*
.loc_0x0:
  lwz       r3, -0x7DEC(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::StreamMgr::setDecodedBufferBlocks( (unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B8EC4
 * Size:	000018
 */
void JAInter::StreamMgr::getDecodedBufferSize( (unsigned long))
{
/*
.loc_0x0:
  lwz       r0, -0x7DEC(r13)
  lwz       r4, -0x7DF0(r13)
  mullw     r0, r0, r3
  mullw     r0, r4, r0
  rlwinm    r3,r0,31,1,31
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::StreamMgr::getStreamSound(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::StreamMgr::setChannelMax( (unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B8EDC
 * Size:	000008
 */
void JAInter::StreamMgr::getChannelMax(void)
{
/*
.loc_0x0:
  lwz       r3, -0x7DF0(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JAInter::StreamMgr::setExternalAramBuffer( (JASHeap *(*)
{
	// UNUSED FUNCTION
}
