

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
 * Address:	80324A54
 * Size:	000060
 */
void __ct__Q32og9newScreen7ObjSaveFPCc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x12F078
  lis       r3, 0x804E
  li        r0, 0
  subi      r4, r3, 0x6760
  mr        r3, r30
  stw       r4, 0x0(r30)
  addi      r4, r4, 0x10
  stw       r4, 0x18(r30)
  stw       r0, 0x40(r30)
  stw       r31, 0x14(r30)
  stw       r0, 0x38(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80324AB4
 * Size:	0000AC
 */
void __dt__Q32og9newScreen7ObjSaveFv(void)
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
  lis       r4, 0x804E
  subi      r4, r4, 0x6760
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
  bl        0xECAB8
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x307AF0
  mr        r3, r30
  li        r4, 0
  bl        0xECA58

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x300A8C

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
 * Address:	80324B60
 * Size:	00008C
 */
void doCreate__Q32og9newScreen7ObjSaveFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x12F430
  lis       r4, 0x4F
  lis       r6, 0x5341
  mr        r31, r3
  li        r5, 0
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x5645
  bl        -0x15878
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x48
  stw       r31, 0x38(r30)
  b         .loc_0x64

.loc_0x48:
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0xD18
  li        r4, 0x54
  subi      r5, r5, 0xD08
  crclr     6, 0x6
  bl        -0x2FA580

.loc_0x64:
  li        r0, 0
  lfs       f0, -0x5F8(r2)
  stw       r0, 0x3C(r30)
  stfs      f0, 0x44(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void startSave__Q32og9newScreen7ObjSaveFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80324BEC
 * Size:	000134
 */
void doUpdate__Q32og9newScreen7ObjSaveFv(void)
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
  lwz       r3, 0x38(r3)
  lbz       r0, 0x8(r3)
  cmplwi    r0, 0
  beq-      .loc_0x34
  lwz       r3, -0x6858(r13)
  bl        -0x17ECC

.loc_0x34:
  lwz       r3, 0x40(r30)
  bl        0xB8170
  lwz       r0, 0x3C(r30)
  cmpwi     r0, 0x1
  beq-      .loc_0xF0
  bge-      .loc_0x58
  cmpwi     r0, 0
  bge-      .loc_0x64
  b         .loc_0x118

.loc_0x58:
  cmpwi     r0, 0x3
  bge-      .loc_0x118
  b         .loc_0x10C

.loc_0x64:
  lwz       r3, -0x6514(r13)
  lfs       f2, 0x44(r30)
  lfs       f1, 0x54(r3)
  lfs       f0, -0x5F4(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x44(r30)
  lfs       f1, 0x44(r30)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x118
  li        r0, 0x1
  mr        r3, r30
  stw       r0, 0x3C(r30)
  bl        0x12F3C0
  lwz       r6, 0x40(r30)
  lis       r4, 0x8051
  li        r0, 0
  li        r5, 0x1
  stw       r3, 0x3D0(r6)
  addi      r4, r4, 0x41FC
  stw       r3, 0x24(r6)
  stw       r3, 0x104(r6)
  lwz       r3, 0x40(r30)
  stw       r0, 0x470(r3)
  lwz       r3, 0x40(r30)
  stb       r5, 0x478(r3)
  lwz       r0, 0x258(r4)
  cmpwi     r0, 0
  bne-      .loc_0xDC
  lwz       r3, 0x40(r30)
  stb       r5, 0x479(r3)

.loc_0xDC:
  lwz       r3, 0x40(r30)
  bl        0xB7F30
  lwz       r3, 0x40(r30)
  bl        0xB80C0
  b         .loc_0x118

.loc_0xF0:
  lwz       r3, 0x40(r30)
  bl        0xB8000
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x118
  li        r0, 0x2
  stw       r0, 0x3C(r30)
  b         .loc_0x118

.loc_0x10C:
  li        r0, 0
  li        r31, 0x1
  stw       r0, 0x3C(r30)

.loc_0x118:
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
 * Address:	80324D20
 * Size:	000030
 */
void doDraw__Q32og9newScreen7ObjSaveFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x3C(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x20
  lwz       r3, 0x40(r3)
  bl        0xB80F0

.loc_0x20:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80324D50
 * Size:	000008
 */
void doStart__Q32og9newScreen7ObjSaveFPCQ26Screen13StartSceneArg(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80324D58
 * Size:	000008
 */
void doEnd__Q32og9newScreen7ObjSaveFPCQ26Screen11EndSceneArg(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80324D60
 * Size:	000004
 */
void doUpdateFadeinFinish__Q32og9newScreen7ObjSaveFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80324D64
 * Size:	000004
 */
void doUpdateFinish__Q32og9newScreen7ObjSaveFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80324D68
 * Size:	000034
 */
void doUpdateFadeoutFinish__Q32og9newScreen7ObjSaveFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  bl        0x12D208
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80324D9C
 * Size:	000008
 */
void doUpdateFadein__Q32og9newScreen7ObjSaveFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80324DA4
 * Size:	000008
 */
void doUpdateFadeout__Q32og9newScreen7ObjSaveFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80324DAC
 * Size:	000008
 */
void @24@__dt__Q32og9newScreen7ObjSaveFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x2FC
*/
}