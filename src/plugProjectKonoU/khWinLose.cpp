

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
 * Address:	8040FCE8
 * Size:	0000B8
 */
void kh::Screen::ObjWinLose::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x43DEC
  lis       r3, 0x804F
  li        r4, 0
  subi      r3, r3, 0x4C18
  lfs       f0, 0x1EA8(r2)
  stw       r3, 0x0(r31)
  addi      r5, r3, 0x10
  li        r0, 0x2
  mr        r3, r31
  stw       r5, 0x18(r31)
  stw       r4, 0x38(r31)
  stw       r4, 0x40(r31)
  stw       r4, 0x48(r31)
  stw       r4, 0x50(r31)
  stw       r4, 0x58(r31)
  stw       r4, 0x60(r31)
  stfs      f0, 0x80(r31)
  stfs      f0, 0x78(r31)
  stfs      f0, 0x70(r31)
  stfs      f0, 0x68(r31)
  stfs      f0, 0x88(r31)
  stw       r4, 0x3C(r31)
  stw       r4, 0x44(r31)
  stw       r4, 0x4C(r31)
  stw       r4, 0x54(r31)
  stw       r4, 0x5C(r31)
  stw       r4, 0x64(r31)
  stfs      f0, 0x84(r31)
  stfs      f0, 0x7C(r31)
  stfs      f0, 0x74(r31)
  stfs      f0, 0x6C(r31)
  stfs      f0, 0x8C(r31)
  stb       r4, 0x90(r31)
  stw       r4, 0x94(r31)
  stw       r0, 0x98(r31)
  stb       r4, 0x9C(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FDA0
 * Size:	000418
 */
void kh::Screen::ObjWinLose::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0xB0(r1)
  mflr      r0
  lis       r6, 0x804A
  stw       r0, 0xB4(r1)
  stmw      r16, 0x70(r1)
  subi      r30, r6, 0x6CA8
  mr        r26, r4
  mr        r25, r3
  lwz       r5, 0x2B70(r2)
  lwz       r0, 0x2B74(r2)
  lwz       r16, 0x58(r30)
  lwz       r17, 0x5C(r30)
  lwz       r18, 0x60(r30)
  lwz       r19, 0x64(r30)
  lwz       r20, 0x68(r30)
  lwz       r21, 0x6C(r30)
  lwz       r22, 0x70(r30)
  lwz       r23, 0x74(r30)
  lwz       r31, 0x78(r30)
  lwz       r29, 0x13C(r30)
  lwz       r28, 0x140(r30)
  lwz       r27, 0x144(r30)
  lwz       r24, 0x148(r30)
  lwz       r12, 0x14C(r30)
  lwz       r11, 0x150(r30)
  lwz       r10, 0x154(r30)
  lwz       r9, 0x158(r30)
  lwz       r8, 0x15C(r30)
  lwz       r7, 0x160(r30)
  lwz       r6, 0x164(r30)
  lwz       r4, 0x168(r30)
  stw       r16, 0x40(r1)
  stw       r17, 0x44(r1)
  stw       r18, 0x48(r1)
  stw       r19, 0x4C(r1)
  stw       r20, 0x50(r1)
  stw       r21, 0x54(r1)
  stw       r22, 0x58(r1)
  stw       r23, 0x5C(r1)
  stw       r31, 0x60(r1)
  stw       r29, 0x10(r1)
  stw       r28, 0x14(r1)
  stw       r27, 0x18(r1)
  stw       r24, 0x1C(r1)
  stw       r12, 0x20(r1)
  stw       r11, 0x24(r1)
  stw       r10, 0x28(r1)
  stw       r9, 0x2C(r1)
  stw       r8, 0x30(r1)
  stw       r7, 0x34(r1)
  stw       r6, 0x38(r1)
  stw       r4, 0x3C(r1)
  stw       r5, 0x8(r1)
  stw       r0, 0xC(r1)
  bl        0x44130
  lis       r4, 0x4C4F
  lis       r5, 0x5749
  addi      r6, r4, 0x5345
  li        r4, 0x4B48
  addi      r5, r5, 0x4E5F
  bl        -0x100B74
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x110
  addi      r3, r30, 0
  addi      r5, r30, 0x16C
  li        r4, 0x4F
  crclr     6, 0x6
  bl        -0x3E586C

.loc_0x110:
  mr        r3, r25
  bl        0x440F4
  mr        r30, r3
  lwz       r0, 0x8(r3)
  cmpwi     r0, 0x3
  beq-      .loc_0x174
  bge-      .loc_0x13C
  cmpwi     r0, 0x1
  beq-      .loc_0x14C
  bge-      .loc_0x160
  b         .loc_0x1AC

.loc_0x13C:
  cmpwi     r0, 0x5
  beq-      .loc_0x1A0
  bge-      .loc_0x1AC
  b         .loc_0x184

.loc_0x14C:
  li        r3, 0
  li        r0, 0x1
  stw       r3, 0x8(r1)
  stw       r0, 0xC(r1)
  b         .loc_0x1AC

.loc_0x160:
  li        r3, 0x1
  li        r0, 0
  stw       r3, 0x8(r1)
  stw       r0, 0xC(r1)
  b         .loc_0x1AC

.loc_0x174:
  li        r0, 0x3
  stw       r0, 0x8(r1)
  stw       r0, 0xC(r1)
  b         .loc_0x1AC

.loc_0x184:
  li        r4, 0x2
  li        r3, -0x1
  li        r0, 0x1
  stw       r4, 0x8(r1)
  stw       r3, 0xC(r1)
  stw       r0, 0x98(r25)
  b         .loc_0x1AC

.loc_0x1A0:
  li        r0, 0x2
  stw       r0, 0x8(r1)
  stw       r0, 0xC(r1)

.loc_0x1AC:
  mr        r29, r25
  addi      r28, r1, 0x8
  addi      r31, r1, 0x10
  li        r27, 0
  lis       r24, 0x524F
  b         .loc_0x394

.loc_0x1C4:
  lwz       r0, 0x8(r30)
  cmpwi     r0, 0x3
  beq-      .loc_0x288
  li        r3, 0x148
  bl        -0x3EC0D0
  mr.       r5, r3
  beq-      .loc_0x1E8
  bl        0x24E2C
  mr        r5, r3

.loc_0x1E8:
  lwz       r0, 0x0(r28)
  addi      r4, r1, 0x40
  stw       r5, 0x38(r29)
  mr        r6, r26
  mulli     r0, r0, 0xC
  lis       r5, 0x4
  lwz       r3, 0x38(r29)
  lwzx      r4, r4, r0
  bl        -0x3D0984
  lwz       r0, 0x0(r28)
  addi      r3, r1, 0x40
  mr        r4, r26
  mulli     r5, r0, 0xC
  addi      r0, r5, 0x4
  lwzx      r3, r3, r0
  bl        -0x3ECFAC
  bl        -0x3C86AC
  lwz       r0, 0x0(r28)
  addi      r5, r1, 0x40
  stw       r3, 0x48(r29)
  mr        r4, r26
  mulli     r3, r0, 0xC
  addi      r0, r3, 0x8
  lwzx      r3, r5, r0
  bl        -0x3ECFD0
  bl        -0x3C86D0
  stw       r3, 0x58(r29)
  lwz       r3, 0x38(r29)
  lwz       r4, 0x48(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r29)
  lwz       r4, 0x58(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x290

.loc_0x288:
  li        r0, 0x1
  stb       r0, 0x90(r25)

.loc_0x290:
  li        r3, 0x148
  bl        -0x3EC190
  mr.       r4, r3
  beq-      .loc_0x2A8
  bl        0x24D6C
  mr        r4, r3

.loc_0x2A8:
  lwz       r0, 0x0(r28)
  mr        r6, r26
  stw       r4, 0x40(r29)
  lis       r5, 0x4
  mulli     r0, r0, 0xC
  lwz       r3, 0x40(r29)
  lwzx      r4, r31, r0
  bl        -0x3D0A40
  lwz       r0, 0x0(r28)
  mr        r4, r26
  mulli     r3, r0, 0xC
  addi      r0, r3, 0x4
  lwzx      r3, r31, r0
  bl        -0x3ED064
  bl        -0x3C8764
  lwz       r0, 0x0(r28)
  mr        r4, r26
  stw       r3, 0x50(r29)
  mulli     r3, r0, 0xC
  addi      r0, r3, 0x8
  lwzx      r3, r31, r0
  bl        -0x3ED084
  bl        -0x3C8784
  stw       r3, 0x60(r29)
  lwz       r3, 0x40(r29)
  lwz       r4, 0x50(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x40(r29)
  lwz       r4, 0x60(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x40(r29)
  addi      r6, r24, 0x4F54
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x4A04
  lwz       r3, 0x40(r29)
  addi      r6, r24, 0x4F54
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lbz       r4, 0x9C(r25)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x4
  addi      r28, r28, 0x4
  addi      r27, r27, 0x1

.loc_0x394:
  lwz       r0, 0x98(r25)
  cmpw      r27, r0
  blt+      .loc_0x1C4
  cmpwi     r0, 0x2
  bne-      .loc_0x3C0
  lis       r3, 0x8051
  addi      r3, r3, 0x41AC
  lfs       f0, 0x4(r3)
  stfs      f0, 0x88(r25)
  lfs       f0, 0x8(r3)
  stfs      f0, 0x8C(r25)

.loc_0x3C0:
  mr        r3, r25
  lwz       r12, 0x0(r25)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0xA0
  bl        0x42100
  lwz       r0, 0x8(r30)
  cmpwi     r0, 0x6
  bge-      .loc_0x404
  cmpwi     r0, 0x4
  bge-      .loc_0x400
  b         .loc_0x404

.loc_0x400:
  bl        0x5BB80

.loc_0x404:
  lmw       r16, 0x70(r1)
  lwz       r0, 0xB4(r1)
  mtlr      r0
  addi      r1, r1, 0xB0
  blr
*/
}

/*
 * --INFO--
 * Address:	804101B8
 * Size:	000020
 */
void kh::Screen::ObjWinLose::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0xCC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804101D8
 * Size:	0000B8
 */
void kh::Screen::ObjWinLose::doDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  addi      r3, r29, 0xBC
  lwz       r12, 0xBC(r4)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r31, r28
  li        r30, 0
  b         .loc_0x8C

.loc_0x44:
  lwz       r3, 0x38(r31)
  cmplwi    r3, 0
  beq-      .loc_0x68
  lwz       r12, 0x0(r3)
  mr        r4, r29
  addi      r5, r29, 0xBC
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     

.loc_0x68:
  lwz       r3, 0x40(r31)
  mr        r4, r29
  addi      r5, r29, 0xBC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x8C:
  lwz       r0, 0x98(r28)
  cmpw      r30, r0
  blt+      .loc_0x44
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
 * Address:	80410290
 * Size:	00038C
 */
void kh::Screen::ObjWinLose::updateAnimation(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  lis       r3, 0x8051
  mr        r30, r28
  li        r29, 0
  addi      r31, r3, 0x41AC
  b         .loc_0x2BC

.loc_0x3C:
  lwz       r0, 0x38(r30)
  cmplwi    r0, 0
  beq-      .loc_0x158
  lfs       f0, 0x68(r30)
  lwz       r3, 0x48(r30)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x78(r30)
  lwz       r3, 0x58(r30)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x38(r30)
  bl        -0x3CF7C8
  lis       r3, 0x8051
  lfs       f1, 0x68(r30)
  lfsu      f0, 0x41AC(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x68(r30)
  lfs       f1, 0x78(r30)
  lfs       f0, 0x0(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x78(r30)
  lfs       f1, 0x68(r30)
  lfs       f0, 0xC(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xA8
  li        r0, 0x1
  stb       r0, 0x90(r28)

.loc_0xA8:
  lwz       r3, 0x48(r30)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lha       r3, 0x6(r3)
  lfd       f2, 0x1EC8(r2)
  xoris     r3, r3, 0x8000
  lfs       f1, 0x68(r30)
  stw       r3, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f2
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  beq-      .loc_0x108
  lwz       r3, 0x58(r30)
  stw       r0, 0x8(r1)
  lha       r0, 0x6(r3)
  lfs       f1, 0x78(r30)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f2
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x120

.loc_0x108:
  lfs       f0, 0x1EA8(r2)
  li        r0, 0
  stfs      f0, 0x78(r30)
  stfs      f0, 0x68(r30)
  lwz       r3, 0x38(r30)
  stb       r0, 0xB0(r3)

.loc_0x120:
  lwz       r3, 0x38(r30)
  lis       r4, 0x524F
  addi      r6, r4, 0x4F54
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lfs       f1, 0x1EA8(r2)
  lwz       r12, 0x14(r12)
  lfs       f2, 0x88(r30)
  mtctr     r12
  bctrl     

.loc_0x158:
  lbz       r0, 0x90(r28)
  cmplwi    r0, 0
  beq-      .loc_0x2B4
  lfs       f0, 0x70(r30)
  lwz       r3, 0x50(r30)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x80(r30)
  lwz       r3, 0x60(r30)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x40(r30)
  bl        -0x3CF8E4
  lfs       f0, 0x70(r30)
  lis       r0, 0x4330
  lfs       f2, 0x1EC4(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f0, f2
  lfd       f1, 0x1EC8(r2)
  stfs      f0, 0x70(r30)
  lfs       f0, 0x80(r30)
  fadds     f0, f0, f2
  stfs      f0, 0x80(r30)
  lwz       r3, 0x50(r30)
  lfs       f2, 0x70(r30)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x1DC
  lfs       f0, 0x1EA8(r2)
  stfs      f0, 0x70(r30)

.loc_0x1DC:
  lwz       r3, 0x60(r30)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lha       r0, 0x6(r3)
  lfd       f1, 0x1EC8(r2)
  xoris     r0, r0, 0x8000
  lfs       f2, 0x80(r30)
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x218
  lfs       f0, 0x1EA8(r2)
  stfs      f0, 0x80(r30)

.loc_0x218:
  lwz       r3, 0x40(r30)
  lis       r4, 0x524F
  addi      r6, r4, 0x4F54
  lfs       f31, 0x88(r30)
  lwz       r12, 0x0(r3)
  li        r5, 0
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x1EA8(r2)
  stfs      f0, 0xD4(r3)
  stfs      f31, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x40(r30)
  lis       r4, 0x524F
  addi      r6, r4, 0x4F54
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lbz       r4, 0x9C(r28)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lbz       r4, 0x18(r31)
  lbz       r3, 0x9C(r28)
  subfic    r0, r4, 0xFF
  cmpw      r3, r0
  bge-      .loc_0x2AC
  add       r0, r3, r4
  stb       r0, 0x9C(r28)
  b         .loc_0x2B4

.loc_0x2AC:
  li        r0, 0xFF
  stb       r0, 0x9C(r28)

.loc_0x2B4:
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0x2BC:
  lwz       r0, 0x98(r28)
  cmpw      r29, r0
  blt+      .loc_0x3C
  mr        r3, r28
  bl        0x43A4C
  lis       r4, 0x4C4F
  lis       r5, 0x5749
  addi      r6, r4, 0x5345
  li        r4, 0x4B48
  addi      r5, r5, 0x4E5F
  bl        -0x101258
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x30C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x6CA8
  li        r4, 0x114
  subi      r5, r5, 0x6B3C
  crclr     6, 0x6
  bl        -0x3E5F58

.loc_0x30C:
  mr        r3, r28
  bl        0x43A08
  lwz       r6, 0x94(r28)
  lis       r4, 0x8051
  addi      r5, r4, 0x41AC
  addi      r4, r6, 0x1
  stw       r4, 0x94(r28)
  lwz       r0, 0x14(r5)
  cmpw      r4, r0
  ble-      .loc_0x348
  li        r0, 0x3
  stw       r0, 0xC(r3)
  bl        0x5B2A4
  bl        0x5B9CC
  b         .loc_0x360

.loc_0x348:
  lwz       r4, 0x94(r28)
  lwz       r0, 0x10(r5)
  cmpw      r4, r0
  ble-      .loc_0x360
  li        r0, 0x2
  stw       r0, 0xC(r3)

.loc_0x360:
  li        r3, 0
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8041061C
 * Size:	0000AC
 */
void kh::Screen::ObjWinLose::__dt(void)
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
  beq-      .loc_0x90
  lis       r4, 0x804F
  subi      r4, r4, 0x4C18
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x80
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x80
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xF50
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3F3658
  mr        r3, r30
  li        r4, 0
  bl        0xEF0

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x3EC5F4

.loc_0x90:
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
 * Address:	804106C8
 * Size:	000044
 */
void __sinit_khWinLose_cpp(void)
{
/*
.loc_0x0:
  lis       r3, 0x8051
  lfs       f3, 0x1EC4(r2)
  addi      r5, r3, 0x41AC
  lfs       f2, 0x1ED0(r2)
  lfs       f1, 0x1ED4(r2)
  li        r4, 0x3C
  lfs       f0, 0x1ED8(r2)
  li        r3, 0xB4
  li        r0, 0x10
  stfs      f3, 0x0(r5)
  stfs      f2, 0x4(r5)
  stfs      f1, 0x8(r5)
  stfs      f0, 0xC(r5)
  stw       r4, 0x10(r5)
  stw       r3, 0x14(r5)
  stb       r0, 0x18(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	8041070C
 * Size:	000008
 */
void @24@kh::Screen::ObjWinLose::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0xF4
*/
}
