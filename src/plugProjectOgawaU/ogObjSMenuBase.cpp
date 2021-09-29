

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
 * Address:	80316210
 * Size:	0000EC
 */
void __ct__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x13D8C4
  lis       r3, 0x804E
  lfs       f1, -0xAE0(r2)
  subi      r3, r3, 0x7650
  li        r6, 0x4
  stw       r3, 0x0(r31)
  addi      r0, r3, 0x10
  li        r5, 0
  li        r4, 0x20
  stw       r0, 0x18(r31)
  li        r0, 0x40
  lfs       f0, -0xADC(r2)
  li        r3, 0x10
  stfs      f1, 0x40(r31)
  stfs      f1, 0x44(r31)
  stw       r6, 0x38(r31)
  stb       r5, 0x48(r31)
  stfs      f1, 0x4C(r31)
  stb       r5, 0x50(r31)
  stw       r5, 0x3C(r31)
  stb       r5, 0x74(r31)
  stb       r5, 0x8C(r31)
  stfs      f1, 0x88(r31)
  stw       r4, 0x5C(r31)
  stw       r0, 0x58(r31)
  stw       r5, 0x54(r31)
  stw       r5, 0x94(r31)
  stw       r5, 0x98(r31)
  stw       r5, 0x60(r31)
  stw       r5, 0x64(r31)
  stw       r5, 0x68(r31)
  stw       r5, 0x6C(r31)
  stw       r5, 0x70(r31)
  stw       r5, 0x9C(r31)
  stfs      f0, 0xA4(r31)
  stw       r5, 0xA0(r31)
  bl        -0x2F2410
  cmplwi    r3, 0
  beq-      .loc_0xD0
  lfs       f1, -0xAE0(r2)
  lfs       f0, -0xAD8(r2)
  stfs      f1, 0x0(r3)
  lfs       f1, -0xAD4(r2)
  stfs      f0, 0x4(r3)
  lfs       f0, -0xAD0(r2)
  stfs      f1, 0x8(r3)
  stfs      f0, 0xC(r3)

.loc_0xD0:
  stw       r3, 0x90(r31)
  mr        r3, r31
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803162FC
 * Size:	00003C
 */
void setFinishState__Q32og9newScreen12ObjSMenuBaseFl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  stw       r31, 0x220(r3)
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
 * Size:	0000D4
 */
void registSMenuScreen__Q32og9newScreen12ObjSMenuBaseFPQ29P2DScreen3Mgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80316338
 * Size:	000040
 */
void setSMenuScale__Q32og9newScreen12ObjSMenuBaseFff(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0xA0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x30
  stfs      f1, 0xCC(r3)
  stfs      f2, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x30:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80316378
 * Size:	0001C4
 */
void doCreateAfter__Q32og9newScreen12ObjSMenuBaseFP10JKRArchivePQ29P2DScreen3Mgr(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x6563
  stw       r30, 0x8(r1)
  addi      r6, r3, 0x7431
  mr        r30, r4
  stw       r5, 0x9C(r31)
  lis       r5, 0x5065
  addi      r5, r5, 0x6666
  lwz       r3, 0x9C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x94(r31)
  lis       r5, 0x6563
  lis       r4, 0x5065
  lwz       r3, 0x9C(r31)
  addi      r6, r5, 0x7432
  addi      r5, r4, 0x6666
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x98(r31)
  lis       r5, 0x6665
  lis       r4, 0x50
  lwz       r3, 0x9C(r31)
  addi      r6, r5, 0x6374
  addi      r5, r4, 0x6566
  bl        -0x13550
  stw       r3, 0x54(r31)
  lwz       r3, 0x9C(r31)
  bl        -0x130F4
  lwz       r3, 0x9C(r31)
  lis       r4, 0x7369
  addi      r6, r4, 0x7A65
  li        r5, 0x4E
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xA0(r31)
  lwz       r3, 0x9C(r31)
  bl        -0xC634
  lwz       r3, 0x9C(r31)
  bl        0x14004
  li        r3, 0x148
  bl        -0x2F25A0
  mr.       r0, r3
  beq-      .loc_0xE0
  bl        0x11E95C
  mr        r0, r3

.loc_0xE0:
  stw       r0, 0x60(r31)
  lis       r3, 0x8049
  subi      r4, r3, 0x1994
  mr        r6, r30
  lwz       r3, 0x60(r31)
  lis       r5, 0x104
  bl        -0x2D6E4C
  lwz       r3, 0x60(r31)
  bl        -0x13164
  lis       r5, 0x6A69
  lis       r4, 0x4E
  lwz       r3, 0x60(r31)
  addi      r6, r5, 0x5F6C
  addi      r5, r4, 0x7961
  bl        -0x135E4
  stw       r3, 0x64(r31)
  lis       r4, 0x6A69
  lis       r3, 0x4E
  lwz       r7, 0x64(r31)
  addi      r6, r4, 0x5F72
  addi      r5, r3, 0x7961
  lfs       f0, 0xD4(r7)
  stfs      f0, 0x78(r31)
  lwz       r3, 0x64(r31)
  lfs       f0, 0xD8(r3)
  stfs      f0, 0x7C(r31)
  lwz       r3, 0x60(r31)
  bl        -0x13618
  stw       r3, 0x68(r31)
  lis       r4, 0x6A69
  lis       r3, 0x54
  lwz       r7, 0x68(r31)
  addi      r6, r4, 0x5F6C
  addi      r5, r3, 0x7961
  lfs       f0, 0xD4(r7)
  stfs      f0, 0x80(r31)
  lwz       r3, 0x68(r31)
  lfs       f0, 0xD8(r3)
  stfs      f0, 0x84(r31)
  lwz       r3, 0x60(r31)
  bl        -0x1364C
  stw       r3, 0x6C(r31)
  lis       r5, 0x6A69
  lis       r4, 0x54
  lwz       r3, 0x60(r31)
  addi      r6, r5, 0x5F72
  addi      r5, r4, 0x7961
  bl        -0x13668
  stw       r3, 0x70(r31)
  lwz       r3, 0x60(r31)
  bl        -0xC720
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
 * Address:	8031653C
 * Size:	000020
 */
void commonUpdateBase__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x640
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8031655C
 * Size:	00012C
 */
void doUpdate__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  lbz       r0, 0x48(r3)
  cmplwi    r0, 0
  beq-      .loc_0x74
  lwz       r0, 0x3C(r28)
  cmpwi     r0, 0x3
  bne-      .loc_0x44
  li        r30, 0x1
  b         .loc_0x108

.loc_0x44:
  cmpwi     r0, 0x2
  bne-      .loc_0x54
  li        r30, 0x1
  b         .loc_0x108

.loc_0x54:
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x19A8
  li        r4, 0x12D
  subi      r5, r5, 0x197C
  crclr     6, 0x6
  bl        -0x2EBF88
  b         .loc_0x108

.loc_0x74:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x5C(r28)
  mr        r29, r3
  bl        0x13BC48
  lwz       r0, 0x1C(r3)
  and.      r0, r0, r31
  beq-      .loc_0xAC
  li        r0, 0x3
  li        r30, 0x1
  stw       r0, 0x3C(r28)
  b         .loc_0x108

.loc_0xAC:
  lwz       r31, 0x58(r28)
  mr        r3, r29
  bl        0x13BC20
  lwz       r0, 0x1C(r3)
  and.      r0, r0, r31
  beq-      .loc_0xD4
  li        r0, 0x2
  li        r30, 0x1
  stw       r0, 0x3C(r28)
  b         .loc_0x108

.loc_0xD4:
  mr        r3, r29
  bl        0x13BBFC
  lwz       r0, 0x1C(r3)
  andi.     r0, r0, 0x1200
  beq-      .loc_0x108
  li        r0, 0x1
  mr        r3, r28
  stw       r0, 0x3C(r28)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x90(r12)
  mtctr     r12
  bctrl     
  li        r30, 0x1

.loc_0x108:
  lwz       r0, 0x24(r1)
  mr        r3, r30
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
 * Address:	80316688
 * Size:	0000D0
 */
void doUpdateFinish__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x4E0
  lfs       f0, -0xAE0(r2)
  stfs      f0, 0x44(r31)
  lwz       r0, 0x3C(r31)
  cmpwi     r0, 0x2
  beq-      .loc_0x70
  bge-      .loc_0x40
  cmpwi     r0, 0
  beq-      .loc_0x88
  bge-      .loc_0x4C
  b         .loc_0xA0

.loc_0x40:
  cmpwi     r0, 0x4
  bge-      .loc_0xA0
  b         .loc_0x58

.loc_0x4C:
  mr        r3, r31
  bl        0xF4
  b         .loc_0xBC

.loc_0x58:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x84(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xBC

.loc_0x70:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xBC

.loc_0x88:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x84(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xBC

.loc_0xA0:
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x19A8
  li        r4, 0x15C
  subi      r5, r5, 0x196C
  crclr     6, 0x6
  bl        -0x2EC100

.loc_0xBC:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80316758
 * Size:	000074
 */
void startBackupScene__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  bl        0x13B844
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x60
  mr        r3, r31
  li        r4, 0
  bl        0x13B7D0
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x60
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x19A8
  li        r4, 0x16E
  subi      r5, r5, 0x1958
  crclr     6, 0x6
  bl        -0x2EC174

.loc_0x60:
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
 * Size:	0000EC
 */
void jump_LR__Q32og9newScreen12ObjSMenuBaseFRQ26Screen11SetSceneArgb(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803167CC
 * Size:	00002C
 */
void close_L__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x2
  stw       r0, 0x38(r3)
  lwz       r3, -0x6858(r13)
  bl        -0x9C10
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803167F8
 * Size:	0000E4
 */
void jump_L__Q32og9newScreen12ObjSMenuBaseFRQ26Screen11SetSceneArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  mr        r31, r3
  stb       r0, 0x9(r30)
  mr        r4, r30
  bl        0x13B700
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xCC
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x7B98
  lis       r4, 0x804E
  stw       r0, 0x8(r1)
  subi      r5, r3, 0x7588
  lis       r3, 0x804E
  li        r0, 0x1
  stw       r5, 0x8(r1)
  subi      r5, r4, 0x7598
  subi      r4, r3, 0x75A8
  mr        r3, r30
  stw       r5, 0x8(r1)
  stw       r4, 0x8(r1)
  stb       r0, 0x10(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r3, 0xC(r1)
  mr        r3, r31
  addi      r4, r1, 0x8
  stb       r0, 0x10(r1)
  bl        0x13B6C4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xCC
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x19A8
  li        r4, 0x18A
  subi      r5, r5, 0x1958
  crclr     6, 0x6
  bl        -0x2EC280

.loc_0xCC:
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
 * Address:	803168DC
 * Size:	0000E4
 */
void jump_R__Q32og9newScreen12ObjSMenuBaseFRQ26Screen11SetSceneArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  mr        r31, r3
  stb       r0, 0x9(r30)
  mr        r4, r30
  bl        0x13B61C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xCC
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x7B98
  lis       r4, 0x804E
  stw       r0, 0x8(r1)
  subi      r5, r3, 0x7588
  lis       r3, 0x804E
  li        r0, 0x1
  stw       r5, 0x8(r1)
  subi      r5, r4, 0x7598
  subi      r4, r3, 0x75A8
  mr        r3, r30
  stw       r5, 0x8(r1)
  stw       r4, 0x8(r1)
  stb       r0, 0x10(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stw       r3, 0xC(r1)
  mr        r3, r31
  addi      r4, r1, 0x8
  stb       r0, 0x10(r1)
  bl        0x13B5E0
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xCC
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x19A8
  li        r4, 0x18A
  subi      r5, r5, 0x1958
  crclr     6, 0x6
  bl        -0x2EC364

.loc_0xCC:
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
 * Address:	803169C0
 * Size:	000150
 */
void start_LR__Q32og9newScreen12ObjSMenuBaseFPCQ26Screen13StartSceneArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0xAE0(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  stfs      f0, 0x44(r3)
  beq-      .loc_0x11C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x271D
  beq-      .loc_0xD0
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x271C
  beq-      .loc_0xD0
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x272B
  beq-      .loc_0xD0
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x271A
  beq-      .loc_0xD0
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x271B
  beq-      .loc_0xD0
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x2728
  bne-      .loc_0x134

.loc_0xD0:
  lbz       r0, 0x8(r31)
  cmplwi    r0, 0
  beq-      .loc_0xFC
  lfs       f0, -0xACC(r2)
  mr        r3, r30
  stfs      f0, 0x40(r30)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x134

.loc_0xFC:
  lfs       f0, -0xAC8(r2)
  mr        r3, r30
  stfs      f0, 0x40(r30)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x134

.loc_0x11C:
  lfs       f0, -0xACC(r2)
  stfs      f0, 0x40(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     

.loc_0x134:
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80316B10
 * Size:	000068
 */
void setYajiName__Q32og9newScreen12ObjSMenuBaseFUxUxUx(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, 0x6C(r3)
  cmplwi    r4, 0
  beq-      .loc_0x3C
  lwz       r0, 0x70(r3)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  stw       r6, 0x1C(r4)
  stw       r5, 0x18(r4)
  lwz       r3, 0x70(r3)
  stw       r8, 0x1C(r3)
  stw       r7, 0x18(r3)
  b         .loc_0x58

.loc_0x3C:
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x19A8
  li        r4, 0x1E1
  subi      r5, r5, 0x194C
  crclr     6, 0x6
  bl        -0x2EC524

.loc_0x58:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80316B78
 * Size:	000004
 */
void loop__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void startYaji__Q32og9newScreen12ObjSMenuBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80316B7C
 * Size:	00000C
 */
void stopYaji__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0x74(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80316B88
 * Size:	000304
 */
void updateYaji__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  lis       r4, 0x8051
  lfs       f31, -0xAE0(r2)
  addi      r31, r4, 0x3CF4
  mr        r30, r3
  lbz       r0, 0x19(r31)
  fmr       f30, f31
  cmplwi    r0, 0
  beq-      .loc_0x148
  lbz       r0, -0x6814(r13)
  extsb.    r0, r0
  bne-      .loc_0x5C
  li        r0, 0x1
  stfs      f31, -0x6818(r13)
  stb       r0, -0x6814(r13)

.loc_0x5C:
  lis       r3, 0x8051
  lfs       f2, -0x6818(r13)
  addi      r3, r3, 0x3CF4
  lfs       f0, -0xAC4(r2)
  lfs       f1, 0x10(r3)
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  stfs      f1, -0x6818(r13)
  ble-      .loc_0x88
  fsubs     f0, f1, f0
  stfs      f0, -0x6818(r13)

.loc_0x88:
  lfs       f3, -0x6818(r13)
  lis       r3, 0x8051
  lfs       f0, -0xAE0(r2)
  addi      r3, r3, 0x3CF4
  lfs       f2, 0xC(r3)
  fcmpo     cr0, f3, f0
  bge-      .loc_0xD0
  lfs       f0, -0xAC0(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0xF4

.loc_0xD0:
  lfs       f0, -0xABC(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0xF4:
  lfs       f1, -0xAB8(r2)
  fmuls     f30, f2, f0
  lfs       f0, -0xAE0(r2)
  fsubs     f2, f3, f1
  fcmpo     cr0, f2, f0
  ble-      .loc_0x148
  lfs       f1, -0xAB4(r2)
  fcmpo     cr0, f2, f1
  bge-      .loc_0x148
  lfs       f0, -0xAB0(r2)
  lfs       f31, -0xADC(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x130
  fdivs     f31, f2, f0
  b         .loc_0x148

.loc_0x130:
  lfs       f0, -0xAAC(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x148
  fsubs     f1, f1, f2
  lfs       f0, -0xAA8(r2)
  fdivs     f31, f1, f0

.loc_0x148:
  lfs       f0, 0x78(r30)
  lwz       r3, 0x64(r30)
  fadds     f0, f0, f30
  lfs       f1, 0x7C(r30)
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x80(r30)
  lwz       r3, 0x68(r30)
  fsubs     f0, f0, f30
  lfs       f1, 0x84(r30)
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x74(r30)
  cmplwi    r0, 0
  beq-      .loc_0x1E0
  lbz       r4, 0x8C(r30)
  cmplwi    r4, 0xFF
  bge-      .loc_0x1FC
  lis       r3, 0x9249
  subfic    r0, r4, 0xFF
  addi      r3, r3, 0x2493
  mulhw     r3, r3, r0
  add       r0, r3, r0
  srawi     r0, r0, 0x2
  rlwinm    r3,r0,1,31,31
  add       r0, r0, r3
  add       r3, r0, r4
  addi      r0, r3, 0x1
  stb       r0, 0x8C(r30)
  b         .loc_0x1FC

.loc_0x1E0:
  lbz       r4, 0x8C(r30)
  cmplwi    r4, 0
  beq-      .loc_0x1FC
  rlwinm    r3,r4,31,25,31
  addi      r0, r3, 0x1
  sub       r0, r4, r0
  stb       r0, 0x8C(r30)

.loc_0x1FC:
  lbz       r0, 0x19(r31)
  cmplwi    r0, 0
  beq-      .loc_0x238
  lbz       r3, 0x8C(r30)
  lis       r0, 0x4330
  stw       r0, 0x10(r1)
  lfd       f1, -0xAA0(r2)
  stw       r3, 0x14(r1)
  lfd       f0, 0x10(r1)
  fsubs     f0, f0, f1
  fmuls     f0, f0, f31
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r31, 0xC(r1)
  b         .loc_0x280

.loc_0x238:
  lis       r4, 0x8051
  lwz       r3, 0x90(r30)
  addi      r4, r4, 0x3CF4
  lfs       f1, 0x10(r4)
  bl        -0x14F18
  lwz       r3, 0x90(r30)
  bl        -0x14F18
  lbz       r3, 0x8C(r30)
  lis       r0, 0x4330
  stw       r0, 0x10(r1)
  lfd       f2, -0xAA0(r2)
  stw       r3, 0x14(r1)
  lfd       f0, 0x10(r1)
  fsubs     f0, f0, f2
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r31, 0xC(r1)

.loc_0x280:
  lwz       r3, 0x64(r30)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x68(r30)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x60(r30)
  lbz       r4, 0x8C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x60(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x44(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80316E8C
 * Size:	000034
 */
void drawYaji__Q32og9newScreen12ObjSMenuBaseFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r5, r4, 0x190
  stw       r0, 0x14(r1)
  lwz       r3, 0x60(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80316EC0
 * Size:	000170
 */
void updateFadeIn__Q32og9newScreen12ObjSMenuBaseFv(void)
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
  bl        0x13D164
  lwz       r0, 0x38(r30)
  cmpwi     r0, 0x1
  beq-      .loc_0xC0
  bge-      .loc_0x3C
  cmpwi     r0, 0
  bge-      .loc_0x48
  b         .loc_0x138

.loc_0x3C:
  cmpwi     r0, 0x4
  beq-      .loc_0x154
  b         .loc_0x138

.loc_0x48:
  lwz       r5, -0x6514(r13)
  lis       r4, 0x8051
  lfs       f1, 0x44(r30)
  addi      r4, r4, 0x3CF4
  lfs       f0, 0x54(r5)
  fadds     f0, f1, f0
  stfs      f0, 0x44(r30)
  lfs       f1, 0x44(r30)
  lfs       f0, 0x8(r4)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x7C
  li        r31, 0x1
  b         .loc_0x9C

.loc_0x7C:
  lwz       r3, 0x1C(r3)
  lwz       r0, 0x5C(r30)
  and.      r0, r3, r0
  beq-      .loc_0x9C
  li        r3, 0x3
  li        r0, 0x1
  stw       r3, 0x3C(r30)
  stb       r0, 0x48(r30)

.loc_0x9C:
  lfs       f1, 0x44(r30)
  lfs       f2, 0x8(r4)
  bl        -0x148C8
  lfs       f2, -0xADC(r2)
  lfs       f0, -0xACC(r2)
  fsubs     f1, f2, f1
  fmuls     f0, f0, f1
  stfs      f0, 0x40(r30)
  b         .loc_0x154

.loc_0xC0:
  lwz       r5, -0x6514(r13)
  lis       r4, 0x8051
  lfs       f1, 0x44(r30)
  addi      r4, r4, 0x3CF4
  lfs       f0, 0x54(r5)
  fadds     f0, f1, f0
  stfs      f0, 0x44(r30)
  lfs       f1, 0x44(r30)
  lfs       f0, 0x8(r4)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xF4
  li        r31, 0x1
  b         .loc_0x114

.loc_0xF4:
  lwz       r3, 0x1C(r3)
  lwz       r0, 0x58(r30)
  and.      r0, r3, r0
  beq-      .loc_0x114
  li        r3, 0x2
  li        r0, 0x1
  stw       r3, 0x3C(r30)
  stb       r0, 0x48(r30)

.loc_0x114:
  lfs       f1, 0x44(r30)
  lfs       f2, 0x8(r4)
  bl        -0x14940
  lfs       f2, -0xADC(r2)
  lfs       f0, -0xAC8(r2)
  fsubs     f1, f2, f1
  fmuls     f0, f0, f1
  stfs      f0, 0x40(r30)
  b         .loc_0x154

.loc_0x138:
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x19A8
  li        r4, 0x26D
  subi      r5, r5, 0x1938
  crclr     6, 0x6
  bl        -0x2EC9D0

.loc_0x154:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80317030
 * Size:	0000A8
 */
void doUpdateFadein__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x94
  lbz       r0, 0x48(r31)
  cmplwi    r0, 0
  beq-      .loc_0x94
  lwz       r0, 0x38(r31)
  cmpwi     r0, 0
  bne-      .loc_0x74
  lfs       f1, 0x40(r31)
  lfs       f0, -0xAE0(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x94
  li        r3, 0x1
  b         .loc_0x94

.loc_0x74:
  cmpwi     r0, 0x1
  bne-      .loc_0x94
  lfs       f1, 0x40(r31)
  lfs       f0, -0xAE0(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x94
  li        r3, 0x1

.loc_0x94:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803170D8
 * Size:	000054
 */
void doUpdateFadeinFinish__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x48(r3)
  cmplwi    r0, 0
  bne-      .loc_0x38
  li        r0, 0x1
  stb       r0, 0x74(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x80(r12)
  mtctr     r12
  bctrl     

.loc_0x38:
  lfs       f0, -0xAE0(r2)
  stfs      f0, 0x44(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8031712C
 * Size:	000104
 */
void updateFadeOut__Q32og9newScreen12ObjSMenuBaseFv(void)
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
  lwz       r0, 0x38(r3)
  cmpwi     r0, 0x3
  beq-      .loc_0x88
  bge-      .loc_0x38
  cmpwi     r0, 0x2
  bge-      .loc_0x44
  b         .loc_0xCC

.loc_0x38:
  cmpwi     r0, 0x5
  bge-      .loc_0xCC
  b         .loc_0xE8

.loc_0x44:
  lwz       r4, -0x6514(r13)
  lis       r3, 0x8051
  lfs       f1, 0x44(r30)
  addi      r3, r3, 0x3CF4
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x44(r30)
  lfs       f1, 0x44(r30)
  lfs       f2, 0x8(r3)
  fcmpo     cr0, f1, f2
  ble-      .loc_0x74
  li        r31, 0x1

.loc_0x74:
  bl        -0x14B04
  lfs       f0, -0xAC8(r2)
  fmuls     f0, f0, f1
  stfs      f0, 0x40(r30)
  b         .loc_0xE8

.loc_0x88:
  lwz       r4, -0x6514(r13)
  lis       r3, 0x8051
  lfs       f1, 0x44(r30)
  addi      r3, r3, 0x3CF4
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x44(r30)
  lfs       f1, 0x44(r30)
  lfs       f2, 0x8(r3)
  fcmpo     cr0, f1, f2
  ble-      .loc_0xB8
  li        r31, 0x1

.loc_0xB8:
  bl        -0x14B48
  lfs       f0, -0xACC(r2)
  fmuls     f0, f0, f1
  stfs      f0, 0x40(r30)
  b         .loc_0xE8

.loc_0xCC:
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x19A8
  li        r4, 0x2B3
  subi      r5, r5, 0x1928
  crclr     6, 0x6
  bl        -0x2ECBD0

.loc_0xE8:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80317230
 * Size:	000164
 */
void doUpdateFadeoutFinish__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r4, 0x19A8
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r0, 0x3C(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0xE8
  bge-      .loc_0x44
  cmpwi     r0, 0
  beq-      .loc_0x118
  bge-      .loc_0x50
  b         .loc_0x134

.loc_0x44:
  cmpwi     r0, 0x4
  bge-      .loc_0x134
  b         .loc_0xB8

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  bl        0x13AD2C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x98
  mr        r3, r30
  li        r4, 0
  bl        0x13ACB8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x98
  addi      r3, r31, 0
  addi      r5, r31, 0x50
  li        r4, 0x16E
  crclr     6, 0x6
  bl        -0x2ECC84

.loc_0x98:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x2
  stw       r0, 0x220(r3)
  b         .loc_0x148

.loc_0xB8:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x94(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stw       r0, 0x220(r3)
  b         .loc_0x148

.loc_0xE8:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x98(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stw       r0, 0x220(r3)
  b         .loc_0x148

.loc_0x118:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stw       r0, 0x220(r3)
  b         .loc_0x148

.loc_0x134:
  addi      r3, r31, 0
  addi      r5, r31, 0x3C
  li        r4, 0x2D0
  crclr     6, 0x6
  bl        -0x2ECD34

.loc_0x148:
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
 * Address:	80317394
 * Size:	000008
 */
void doStart__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8031739C
 * Size:	000008
 */
void doEnd__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	803173A4
 * Size:	000004
 */
void doCreate__Q26Screen7ObjBaseFP10JKRArchive(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803173A8
 * Size:	000008
 */
void doUpdateFadeout__Q26Screen7ObjBaseFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	803173B0
 * Size:	000008
 */
void getSceneType__Q32og9newScreen18StartSceneArgSMenuCFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803173B8
 * Size:	000008
 */
void getClassSize__Q26Screen58StartSceneArgTemplate<og::newScreen::StartSceneArgSMenu>Fv(void)
{
/*
.loc_0x0:
  li        r3, 0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	803173C0
 * Size:	000054
 */
void __sinit_ogObjSMenuBase_cpp(void)
{
/*
.loc_0x0:
  lis       r3, 0x8051
  lfs       f3, -0xADC(r2)
  addi      r5, r3, 0x3CF4
  li        r0, 0
  li        r3, 0x40
  lfs       f2, -0xAD0(r2)
  lfs       f1, -0xA98(r2)
  li        r4, 0xFF
  lfs       f0, -0xAD8(r2)
  stfs      f3, 0x0(r5)
  stfs      f3, 0x4(r5)
  stb       r4, 0x14(r5)
  stfs      f2, 0x8(r5)
  stfs      f1, 0xC(r5)
  stfs      f0, 0x10(r5)
  stb       r3, 0x15(r5)
  stb       r3, 0x16(r5)
  stb       r0, 0x17(r5)
  stb       r0, 0x18(r5)
  stb       r0, 0x19(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	80317414
 * Size:	000008
 */
void @24@__dt__Q32og9newScreen12ObjSMenuBaseFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x7C14
*/
}