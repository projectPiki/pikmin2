

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
 * Address:	8012EC24
 * Size:	000070
 */
void __ct__Q24Game13EnemyBirthArgFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x6230(r2)
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stfs      f0, 0x0(r3)
  addi      r3, r31, 0x1C
  stfs      f0, 0x4(r31)
  stfs      f0, 0x8(r31)
  stfs      f0, 0xC(r31)
  stb       r0, 0x10(r31)
  stw       r0, 0x14(r31)
  sth       r0, 0x18(r31)
  bl        -0x914
  li        r0, -0x1
  lfs       f0, -0x6230(r2)
  stw       r0, 0x28(r31)
  li        r0, 0x1
  mr        r3, r31
  stfs      f0, 0x2C(r31)
  stb       r0, 0x30(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012EC94
 * Size:	0000C4
 */
void __ct__Q24Game12EnemyMgrBaseFiUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x804B
  stw       r0, 0x24(r1)
  subi      r0, r6, 0x4A10
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  addi      r29, r28, 0x4
  stw       r0, 0x0(r3)
  mr        r3, r29
  bl        0x2E26C0
  lis       r3, 0x804B
  lis       r4, 0x804B
  subi      r0, r3, 0x5324
  lis       r3, 0x804B
  stw       r0, 0x0(r29)
  subi      r4, r4, 0x5304
  subi      r5, r3, 0x760
  li        r0, 0
  stw       r4, 0x0(r28)
  addi      r6, r4, 0x38
  addi      r4, r5, 0x38
  mr        r3, r28
  stw       r6, 0x4(r28)
  stw       r5, 0x0(r28)
  stw       r4, 0x4(r28)
  stw       r0, 0x1C(r28)
  stw       r0, 0x20(r28)
  stb       r31, 0x24(r28)
  stw       r0, 0x28(r28)
  stw       r30, 0x2C(r28)
  stw       r0, 0x30(r28)
  stw       r0, 0x34(r28)
  stw       r0, 0x38(r28)
  stb       r0, 0x3C(r28)
  stw       r0, 0x40(r28)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8012ED58
 * Size:	000070
 */
void startMovie__Q24Game12EnemyMgrBaseFv(void)
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
  b         .loc_0x4C

.loc_0x20:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0x48
  bl        -0x275E0

.loc_0x48:
  addi      r31, r31, 0x1

.loc_0x4C:
  lwz       r0, 0x2C(r30)
  cmpw      r31, r0
  blt+      .loc_0x20
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
 * Address:	8012EDC8
 * Size:	000070
 */
void endMovie__Q24Game12EnemyMgrBaseFv(void)
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
  b         .loc_0x4C

.loc_0x20:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0x48
  bl        -0x275C8

.loc_0x48:
  addi      r31, r31, 0x1

.loc_0x4C:
  lwz       r0, 0x2C(r30)
  cmpw      r31, r0
  blt+      .loc_0x20
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
 * Address:	8012EE38
 * Size:	0000A0
 */
void alloc__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  stw       r0, 0x30(r3)
  lwz       r12, 0x0(r3)
  lwz       r4, 0x2C(r3)
  lwz       r12, 0xA0(r12)
  mtctr     r12
  bctrl     
  li        r31, 0
  b         .loc_0x68

.loc_0x3C:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1

.loc_0x68:
  lwz       r0, 0x2C(r30)
  cmpw      r31, r0
  blt+      .loc_0x3C
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
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
 * Address:	8012EED8
 * Size:	000110
 */
void doAnimation__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0xE8

.loc_0x24:
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  mr        r30, r3
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0xE4
  lwz       r4, -0x6E20(r13)
  lbz       r0, 0x1C(r4)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x74
  lwz       r12, 0x0(r3)
  lwz       r12, 0xB8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xE4

.loc_0x74:
  lwz       r3, -0x6514(r13)
  subi      r4, r2, 0x622C
  li        r5, 0x1
  lwz       r3, 0x28(r3)
  bl        0x2FBB9C
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6514(r13)
  subi      r4, r2, 0x622C
  lwz       r3, 0x28(r3)
  bl        0x2FBB7C
  lwz       r3, -0x6514(r13)
  subi      r4, r2, 0x6224
  li        r5, 0x1
  lwz       r3, 0x28(r3)
  bl        0x2FBB64
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6514(r13)
  subi      r4, r2, 0x6224
  lwz       r3, 0x28(r3)
  bl        0x2FBB44

.loc_0xE4:
  addi      r31, r31, 0x1

.loc_0xE8:
  lwz       r0, 0x2C(r29)
  cmpw      r31, r0
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
 * Address:	8012EFE8
 * Size:	0000B4
 */
void doEntry__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0x8C

.loc_0x24:
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  mr        r30, r3
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0x88
  lwz       r4, -0x6E20(r13)
  lbz       r0, 0x1C(r4)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x74
  lwz       r12, 0x0(r3)
  lwz       r12, 0xB8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x88

.loc_0x74:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     

.loc_0x88:
  addi      r31, r31, 0x1

.loc_0x8C:
  lwz       r0, 0x2C(r29)
  cmpw      r31, r0
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
 * Address:	8012F09C
 * Size:	00008C
 */
void doSetView__Q24Game12EnemyMgrBaseFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0x64

.loc_0x28:
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0x60
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     

.loc_0x60:
  addi      r31, r31, 0x1

.loc_0x64:
  lwz       r0, 0x2C(r29)
  cmpw      r31, r0
  blt+      .loc_0x28
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
 * Address:	8012F128
 * Size:	00007C
 */
void doViewCalc__Q24Game12EnemyMgrBaseFv(void)
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
  b         .loc_0x58

.loc_0x20:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0x54
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     

.loc_0x54:
  addi      r31, r31, 0x1

.loc_0x58:
  lwz       r0, 0x2C(r30)
  cmpw      r31, r0
  blt+      .loc_0x20
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
 * Address:	8012F1A4
 * Size:	0000EC
 */
void doSimulation__Q24Game12EnemyMgrBaseFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  li        r31, 0
  stw       r30, 0x10(r1)
  stw       r29, 0xC(r1)
  mr        r29, r3
  b         .loc_0xC0

.loc_0x2C:
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x17C(r3)
  mr        r30, r3
  lwz       r0, 0x4(r4)
  cmplwi    r0, 0
  beq-      .loc_0x70
  lwz       r12, 0x0(r3)
  fmr       f1, f31
  lwz       r12, 0x1E8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xBC

.loc_0x70:
  lwz       r0, 0x1E0(r30)
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0xBC
  lwz       r4, -0x6E20(r13)
  lbz       r0, 0x1C(r4)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0xA4
  lwz       r12, 0x0(r3)
  lwz       r12, 0xB8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xBC

.loc_0xA4:
  mr        r3, r30
  fmr       f1, f31
  lwz       r12, 0x0(r30)
  lwz       r12, 0x4C(r12)
  mtctr     r12
  bctrl     

.loc_0xBC:
  addi      r31, r31, 0x1

.loc_0xC0:
  lwz       r0, 0x2C(r29)
  cmpw      r31, r0
  blt+      .loc_0x2C
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  lwz       r31, 0x14(r1)
  lwz       r30, 0x10(r1)
  lwz       r29, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8012F290
 * Size:	0000C4
 */
void doDirectDraw__Q24Game12EnemyMgrBaseFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  b         .loc_0x98

.loc_0x2C:
  mr        r3, r28
  mr        r4, r31
  lwz       r12, 0x0(r28)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  mr        r30, r3
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0x94
  lwz       r4, -0x6E20(r13)
  lbz       r0, 0x1C(r4)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x7C
  lwz       r12, 0x0(r3)
  lwz       r12, 0xB8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x94

.loc_0x7C:
  mr        r3, r30
  mr        r4, r29
  lwz       r12, 0x0(r30)
  lwz       r12, 0x50(r12)
  mtctr     r12
  bctrl     

.loc_0x94:
  addi      r31, r31, 0x1

.loc_0x98:
  lwz       r0, 0x2C(r28)
  cmpw      r31, r0
  blt+      .loc_0x2C
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
 * Address:	8012F354
 * Size:	000074
 */
void getNext__Q24Game12EnemyMgrBaseFPv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  addi      r31, r4, 0x1
  stw       r30, 0x8(r1)
  mr        r30, r3
  b         .loc_0x50

.loc_0x20:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0x4C
  mr        r3, r31
  b         .loc_0x5C

.loc_0x4C:
  addi      r31, r31, 0x1

.loc_0x50:
  lwz       r3, 0x2C(r30)
  cmpw      r31, r3
  blt+      .loc_0x20

.loc_0x5C:
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
 * Address:	........
 * Size:	000094
 */
void getInactiveEnemy__Q24Game12EnemyMgrBaseFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8012F3C8
 * Size:	000184
 */
void birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r30, r4
  mr        r26, r3
  lwz       r0, 0x28(r4)
  cmpwi     r0, -0x1
  bne-      .loc_0x38
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x28(r30)

.loc_0x38:
  li        r31, 0
  lwz       r27, 0x28(r30)
  mr        r28, r31
  b         .loc_0x94

.loc_0x48:
  mr        r3, r26
  mr        r4, r28
  lwz       r12, 0x0(r26)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r29, r3
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpw      r27, r3
  bne-      .loc_0x90
  lwz       r0, 0x1E0(r29)
  rlwinm.   r0,r0,0,3,3
  bne-      .loc_0x90
  mr        r31, r29
  b         .loc_0xA0

.loc_0x90:
  addi      r28, r28, 0x1

.loc_0x94:
  lwz       r0, 0x2C(r26)
  cmpw      r28, r0
  blt+      .loc_0x48

.loc_0xA0:
  cmplwi    r31, 0
  beq-      .loc_0x16C
  lwz       r5, 0x30(r26)
  mr        r3, r31
  mr        r4, r30
  addi      r0, r5, 0x1
  stw       r0, 0x30(r26)
  lwz       r12, 0x0(r31)
  lfs       f1, 0xC(r30)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x2C(r30)
  mr        r3, r31
  addi      r4, r30, 0x18
  stfs      f0, 0x2AC(r31)
  bl        -0x2D734
  lbz       r0, 0x1C(r30)
  stb       r0, 0x258(r31)
  lbz       r0, 0x1D(r30)
  stb       r0, 0x259(r31)
  lbz       r0, 0x1E(r30)
  stb       r0, 0x25A(r31)
  lbz       r0, 0x1F(r30)
  stb       r0, 0x25B(r31)
  lfs       f0, 0x20(r30)
  stfs      f0, 0x25C(r31)
  lbz       r0, 0x30(r30)
  cmplwi    r0, 0
  beq-      .loc_0x124
  li        r0, 0x1
  stb       r0, 0x1F3(r31)
  b         .loc_0x12C

.loc_0x124:
  li        r0, 0
  stb       r0, 0x1F3(r31)

.loc_0x12C:
  lbz       r0, 0x10(r30)
  stb       r0, 0x2B0(r31)
  lwz       r3, 0x14(r30)
  cmplwi    r3, 0
  beq-      .loc_0x16C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr.       r4, r3
  beq-      .loc_0x16C
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x1C4(r12)
  mtctr     r12
  bctrl     

.loc_0x16C:
  mr        r3, r31
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8012F54C
 * Size:	000008
 */
void getEnemyTypeID__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  li        r3, -0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8012F554
 * Size:	000164
 */
void kill__Q24Game12EnemyMgrBaseFPQ24Game9EnemyBase(void)
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
  mr        r28, r4
  lis       r4, 0x8048
  lwz       r0, 0x1E0(r28)
  subi      r29, r4, 0x3E18
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0x90
  li        r29, 0
  b         .loc_0x80

.loc_0x40:
  mr        r3, r30
  mr        r4, r29
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  cmplw     r3, r28
  bne-      .loc_0x7C
  lwz       r0, 0x1E0(r3)
  rlwinm    r0,r0,0,4,2
  stw       r0, 0x1E0(r3)
  lwz       r3, 0x30(r30)
  subi      r0, r3, 0x1
  stw       r0, 0x30(r30)
  b         .loc_0x144

.loc_0x7C:
  addi      r29, r29, 0x1

.loc_0x80:
  lwz       r0, 0x2C(r30)
  cmpw      r29, r0
  blt+      .loc_0x40
  b         .loc_0x144

.loc_0x90:
  lwz       r31, 0x2B4(r28)
  cmplwi    r31, 0
  beq-      .loc_0xEC
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x1AC(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x1A8(r12)
  mtctr     r12
  bctrl     
  lwz       r8, 0xC(r31)
  mr        r6, r3
  mr        r7, r30
  addi      r3, r29, 0
  addi      r5, r29, 0x14
  li        r4, 0x1BF
  crclr     6, 0x6
  bl        -0x104FF8
  b         .loc_0x144

.loc_0xEC:
  mr        r3, r28
  bl        -0x28250
  mr        r30, r3
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x1AC(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x1A8(r12)
  mtctr     r12
  bctrl     
  mr        r6, r3
  mr        r7, r31
  mr        r8, r30
  addi      r3, r29, 0
  addi      r5, r29, 0x38
  li        r4, 0x1C5
  crclr     6, 0x6
  bl        -0x105054

.loc_0x144:
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
 * Address:	8012F6B8
 * Size:	0000A8
 */
void killAll__Q24Game12EnemyMgrBaseFPQ24Game15CreatureKillArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0x58

.loc_0x28:
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0x54
  mr        r4, r30
  bl        0xB9E8

.loc_0x54:
  addi      r31, r31, 0x1

.loc_0x58:
  lwz       r0, 0x2C(r29)
  cmpw      r31, r0
  blt+      .loc_0x28
  lwz       r6, 0x30(r29)
  cmpwi     r6, 0
  beq-      .loc_0x8C
  lis       r3, 0x8048
  lis       r4, 0x8048
  subi      r5, r4, 0x3DBC
  subi      r3, r3, 0x3E18
  li        r4, 0x1E0
  crclr     6, 0x6
  bl        -0x105100

.loc_0x8C:
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
 * Address:	8012F760
 * Size:	00003C
 */
void isValidEnemyTypeID__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
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
 * Address:	8012F79C
 * Size:	000100
 */
void setupSoundViewerAndBas__Q24Game12EnemyMgrBaseFv(void)
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
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  subfic    r4, r3, -0x1
  addi      r0, r3, 0x1
  or        r0, r4, r0
  rlwinm.   r0,r0,1,31,31
  beq-      .loc_0xE4
  lwz       r0, 0x20(r31)
  cmplwi    r0, 0
  beq-      .loc_0xE4
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xC4B4
  mr        r0, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  mr        r30, r0
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xC550
  lwz       r0, -0x6E54(r13)
  mr        r29, r3
  cmplwi    r0, 0
  bne-      .loc_0xC0
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3D9C
  li        r4, 0x50
  subi      r5, r5, 0x3D8C
  crclr     6, 0x6
  bl        -0x105218

.loc_0xC0:
  lwz       r6, -0x6E54(r13)
  mr        r4, r30
  lwz       r3, 0x20(r31)
  mr        r5, r29
  lwz       r6, 0x18(r6)
  bl        0x30E7F4
  lwz       r3, 0x20(r31)
  addi      r4, r1, 0x8
  bl        0x30E8E0

.loc_0xE4:
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
 * Address:	8012F89C
 * Size:	00008C
 */
void init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0x34(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xB8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xC0(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xB4(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xBC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xDC(r12)
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
 * Address:	8012F928
 * Size:	000024
 */
void setDebugParm__Q24Game12EnemyMgrBaseFUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x34(r3)
  bl        -0x5660
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012F94C
 * Size:	000024
 */
void resetDebugParm__Q24Game12EnemyMgrBaseFUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x34(r3)
  bl        -0x5660
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012F970
 * Size:	0000AC
 */
void createModel__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  mr        r30, r3
  li        r3, 0x14
  bl        -0x10BAE8
  mr.       r31, r3
  beq-      .loc_0x3C
  lwz       r4, 0x1C(r30)
  lis       r5, 0x2
  lbz       r6, 0x24(r30)
  bl        0x30E834
  mr        r31, r3

.loc_0x3C:
  addi      r3, r1, 0x8
  bl        -0x45710
  lis       r4, 0x8051
  addi      r3, r1, 0x8
  subi      r4, r4, 0xDD0
  bl        -0x456F4
  lwz       r30, 0x8(r31)
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  bl        -0xC90D0
  mr        r3, r30
  bl        -0xC9208
  lwz       r0, 0x44(r1)
  mr        r3, r31
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8012FA1C
 * Size:	0000C0
 */
void initParms__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x110(r1)
  mflr      r0
  stw       r0, 0x114(r1)
  stw       r31, 0x10C(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  subfic    r4, r3, -0x1
  addi      r0, r3, 0x1
  or        r0, r4, r0
  rlwinm.   r0,r0,1,31,31
  beq-      .loc_0xAC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xC7F8
  lwz       r3, 0x1C(r3)
  lbz       r0, 0x0(r3)
  extsb.    r0, r0
  bne-      .loc_0x88
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xC7C4

.loc_0x88:
  lis       r4, 0x8048
  mr        r5, r3
  subi      r4, r4, 0x3D80
  addi      r3, r1, 0x8
  crclr     6, 0x6
  bl        -0x68680
  mr        r3, r31
  addi      r4, r1, 0x8
  bl        0x90

.loc_0xAC:
  lwz       r0, 0x114(r1)
  lwz       r31, 0x10C(r1)
  mtlr      r0
  addi      r1, r1, 0x110
  blr
*/
}

/*
 * --INFO--
 * Address:	8012FADC
 * Size:	000078
 */
void loadStoneSetting__Q24Game12EnemyMgrBaseFPCc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x430(r1)
  mflr      r0
  stw       r0, 0x434(r1)
  stw       r31, 0x42C(r1)
  mr        r31, r3
  lwz       r3, -0x6E58(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x64
  mr        r4, r3
  addi      r3, r1, 0x8
  li        r5, -0x1
  bl        0x2E5DE0
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x14(r1)
  bne-      .loc_0x58
  li        r0, 0
  stw       r0, 0x41C(r1)

.loc_0x58:
  addi      r3, r31, 0x3C
  addi      r4, r1, 0x8
  bl        -0x7A34

.loc_0x64:
  lwz       r0, 0x434(r1)
  lwz       r31, 0x42C(r1)
  mtlr      r0
  addi      r1, r1, 0x430
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000284
 */
void setupObjects__Q24Game12EnemyMgrBaseFPCc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8012FB54
 * Size:	000090
 */
void setupParms__Q24Game12EnemyMgrBaseFPCc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  mr        r5, r4
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r3, 0x34(r3)
  lwz       r4, -0x6E58(r13)
  bl        -0x593C
  li        r29, 0
  mr        r30, r3
  b         .loc_0x60

.loc_0x3C:
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  lwz       r31, 0x34(r28)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  stw       r31, 0xC0(r3)
  addi      r29, r29, 0x1

.loc_0x60:
  lwz       r0, 0x2C(r28)
  cmpw      r29, r0
  blt+      .loc_0x3C
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
 * Address:	8012FBE4
 * Size:	000088
 */
void loadResource__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  subfic    r4, r3, -0x1
  addi      r0, r3, 0x1
  or        r0, r4, r0
  rlwinm.   r0,r0,1,31,31
  beq-      .loc_0x74
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xC8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xCC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xD0(r12)
  mtctr     r12
  bctrl     

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
 * Address:	8012FC6C
 * Size:	0002FC
 */
void initObjects__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  stw       r0, 0x124(r1)
  stw       r31, 0x11C(r1)
  mr        r31, r3
  stw       r30, 0x118(r1)
  stw       r29, 0x114(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  subfic    r4, r3, -0x1
  addi      r0, r3, 0x1
  or        r0, r4, r0
  rlwinm.   r0,r0,1,31,31
  beq-      .loc_0x2E0
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xCA50
  lwz       r3, 0x20(r3)
  lbz       r0, 0x0(r3)
  extsb.    r0, r0
  bne-      .loc_0x90
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xCA1C

.loc_0x90:
  lis       r4, 0x8048
  mr        r5, r3
  subi      r4, r4, 0x3D6C
  addi      r3, r1, 0x8
  crclr     6, 0x6
  bl        -0x688D8
  li        r29, 0
  b         .loc_0x1F0

.loc_0xB0:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xB0(r12)
  mtctr     r12
  bctrl     
  lwz       r5, 0x20(r31)
  mr        r30, r3
  mr        r3, r31
  mr        r4, r29
  stw       r30, 0x18(r5)
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  stb       r29, 0x1F1(r3)
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  stw       r31, 0x180(r3)
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  stw       r30, 0x174(r3)
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x20(r31)
  bl        -0x2B1D8
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x22C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x230(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x54
  bl        -0x10BF60
  mr.       r30, r3
  beq-      .loc_0x1D0
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r30
  addi      r5, r31, 0x3C
  bl        -0x6304
  mr        r30, r3

.loc_0x1D0:
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  stw       r30, 0x24C(r3)
  addi      r29, r29, 0x1

.loc_0x1F0:
  lwz       r0, 0x2C(r31)
  cmpw      r29, r0
  blt+      .loc_0xB0
  lwz       r3, -0x6E58(r13)
  addi      r4, r1, 0x8
  bl        0x8AD4
  stw       r3, 0x28(r31)
  li        r29, 0
  b         .loc_0x2D4

.loc_0x214:
  li        r3, 0x8
  bl        -0x10BFE0
  mr.       r30, r3
  beq-      .loc_0x22C
  bl        0x41CC
  mr        r30, r3

.loc_0x22C:
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  stw       r30, 0x114(r3)
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  mr        r4, r29
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x114(r3)
  li        r6, 0
  lwz       r4, 0x174(r30)
  lwz       r5, 0x28(r31)
  bl        0x4174
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  mr        r4, r29
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x114(r3)
  lwz       r4, 0x174(r30)
  bl        0x5B90
  addi      r29, r29, 0x1

.loc_0x2D4:
  lwz       r0, 0x2C(r31)
  cmpw      r29, r0
  blt+      .loc_0x214

.loc_0x2E0:
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
 * Address:	8012FF68
 * Size:	0000C0
 */
void initStoneSetting__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x110(r1)
  mflr      r0
  stw       r0, 0x114(r1)
  stw       r31, 0x10C(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  subfic    r4, r3, -0x1
  addi      r0, r3, 0x1
  or        r0, r4, r0
  rlwinm.   r0,r0,1,31,31
  beq-      .loc_0xAC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xCD44
  lwz       r3, 0x24(r3)
  lbz       r0, 0x0(r3)
  extsb.    r0, r0
  bne-      .loc_0x88
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xCD10

.loc_0x88:
  lis       r4, 0x8048
  mr        r5, r3
  subi      r4, r4, 0x3D58
  addi      r3, r1, 0x8
  crclr     6, 0x6
  bl        -0x68BCC
  mr        r3, r31
  addi      r4, r1, 0x8
  bl        -0x534

.loc_0xAC:
  lwz       r0, 0x114(r1)
  lwz       r31, 0x10C(r1)
  mtlr      r0
  addi      r1, r1, 0x110
  blr
*/
}

/*
 * --INFO--
 * Address:	80130028
 * Size:	0000E4
 */
void loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r5, 0x3E18
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  addi      r3, r31, 0xD8
  bl        -0x10D044
  mr.       r4, r3
  beq-      .loc_0x5C
  lwz       r12, 0x0(r28)
  mr        r3, r28
  lwz       r12, 0xD4(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  b         .loc_0x88

.loc_0x5C:
  mr        r4, r29
  addi      r3, r31, 0xE4
  bl        -0x10D074
  mr.       r4, r3
  beq-      .loc_0x88
  lwz       r12, 0x0(r28)
  mr        r3, r28
  lwz       r12, 0xD8(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3

.loc_0x88:
  cmplwi    r30, 0
  beq-      .loc_0xAC
  stw       r30, 0x1C(r28)
  lis       r4, 0x4
  lwz       r3, 0x1C(r28)
  bl        -0xAC7EC
  lwz       r3, 0x1C(r28)
  bl        -0xAC69C
  b         .loc_0xC0

.loc_0xAC:
  addi      r3, r31, 0
  addi      r5, r31, 0xF0
  li        r4, 0x32F
  crclr     6, 0x6
  bl        -0x105AA4

.loc_0xC0:
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
 * Address:	8013010C
 * Size:	0000C0
 */
void loadModelData__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x140(r1)
  mflr      r0
  stw       r0, 0x144(r1)
  stw       r31, 0x13C(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xCEC0
  lwz       r3, 0xC(r3)
  lbz       r0, 0x0(r3)
  extsb.    r0, r0
  bne-      .loc_0x60
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xCE8C

.loc_0x60:
  lis       r4, 0x8048
  mr        r5, r3
  subi      r4, r4, 0x3D04
  addi      r3, r1, 0x38
  crclr     6, 0x6
  bl        -0x68D48
  addi      r3, r1, 0x8
  addi      r4, r1, 0x38
  bl        0x31C44C
  lwz       r3, -0x63D8(r13)
  addi      r4, r1, 0x8
  bl        0x31C57C
  mr        r4, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r4, 0x34(r4)
  lwz       r12, 0xC4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x144(r1)
  lwz       r31, 0x13C(r1)
  mtlr      r0
  addi      r1, r1, 0x140
  blr
*/
}

/*
 * --INFO--
 * Address:	801301CC
 * Size:	000154
 */
void loadAnimData__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x140(r1)
  mflr      r0
  stw       r0, 0x144(r1)
  stw       r31, 0x13C(r1)
  mr        r31, r3
  stw       r30, 0x138(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xCF84
  lwz       r3, 0x10(r3)
  lbz       r0, 0x0(r3)
  extsb.    r0, r0
  bne-      .loc_0x64
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xCF50

.loc_0x64:
  lis       r4, 0x8048
  mr        r5, r3
  subi      r4, r4, 0x3CE8
  addi      r3, r1, 0x38
  crclr     6, 0x6
  bl        -0x68E0C
  addi      r3, r1, 0x8
  addi      r4, r1, 0x38
  li        r30, 0
  bl        0x31C384
  lwz       r3, -0x63D8(r13)
  addi      r4, r1, 0x8
  bl        0x31C4B4
  cmplwi    r3, 0
  beq-      .loc_0xA4
  lwz       r30, 0x34(r3)

.loc_0xA4:
  cmplwi    r30, 0
  beq-      .loc_0x134
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xD01C
  lwz       r3, 0x14(r3)
  lbz       r0, 0x0(r3)
  extsb.    r0, r0
  bne-      .loc_0xFC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xCFE8

.loc_0xFC:
  lis       r4, 0x8048
  mr        r5, r3
  subi      r4, r4, 0x3CD0
  addi      r3, r1, 0x38
  crclr     6, 0x6
  bl        -0x68EA4
  lwz       r3, -0x6E58(r13)
  mr        r6, r30
  lwz       r5, 0x1C(r31)
  addi      r4, r1, 0x38
  subi      r7, r2, 0x621C
  bl        0x30DA68
  stw       r3, 0x20(r31)
  b         .loc_0x13C

.loc_0x134:
  li        r0, 0
  stw       r0, 0x20(r31)

.loc_0x13C:
  lwz       r0, 0x144(r1)
  lwz       r31, 0x13C(r1)
  lwz       r30, 0x138(r1)
  mtlr      r0
  addi      r1, r1, 0x140
  blr
*/
}

/*
 * --INFO--
 * Address:	80130320
 * Size:	000074
 */
void loadTexData__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xD0D4
  lwz       r3, 0x18(r3)
  lbz       r0, 0x0(r3)
  extsb.    r0, r0
  bne-      .loc_0x60
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x1
  subi      r4, r4, 0x1
  bl        -0xD0A0

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
 * Address:	80130394
 * Size:	00002C
 */
void doLoadBmd__Q24Game12EnemyMgrBaseFPv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x24
  mr        r3, r4
  stw       r0, 0x14(r1)
  addi      r4, r5, 0x10
  bl        -0xC0B18
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801303C0
 * Size:	000028
 */
void doLoadBdl__Q24Game12EnemyMgrBaseFPv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  li        r4, 0x2000
  stw       r0, 0x14(r1)
  bl        -0xC08EC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801303E8
 * Size:	000090
 */
void initGenerator__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0x24
  bl        -0x10C560
  mr.       r31, r3
  beq-      .loc_0x74
  lis       r3, 0x804F
  mr        r7, r31
  subi      r0, r3, 0x4AD8
  lis       r5, 0x8048
  stw       r0, 0x0(r31)
  li        r6, 0
  lis       r3, 0x804B
  lis       r4, 0x3F3F
  stw       r6, 0x10(r31)
  subi      r5, r5, 0x3CBC
  subi      r0, r3, 0x2450
  addi      r3, r7, 0x18
  stw       r6, 0xC(r31)
  addi      r4, r4, 0x3F3F
  stw       r6, 0x8(r31)
  stw       r6, 0x4(r31)
  stw       r5, 0x14(r31)
  stw       r0, 0x0(r31)
  bl        0x2E2E50

.loc_0x74:
  stw       r31, 0x38(r30)
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
 * Address:	80130478
 * Size:	0000E8
 */
void doAnimationAlwaysMovieActor__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0xC0

.loc_0x24:
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  mr        r30, r3
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0xBC
  lwz       r3, -0x6514(r13)
  subi      r4, r2, 0x622C
  li        r5, 0x1
  lwz       r3, 0x28(r3)
  bl        0x2FA624
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6514(r13)
  subi      r4, r2, 0x622C
  lwz       r3, 0x28(r3)
  bl        0x2FA604
  lwz       r3, -0x6514(r13)
  subi      r4, r2, 0x6224
  li        r5, 0x1
  lwz       r3, 0x28(r3)
  bl        0x2FA5EC
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6514(r13)
  subi      r4, r2, 0x6224
  lwz       r3, 0x28(r3)
  bl        0x2FA5CC

.loc_0xBC:
  addi      r31, r31, 0x1

.loc_0xC0:
  lwz       r0, 0x2C(r29)
  cmpw      r31, r0
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
 * Address:	80130560
 * Size:	00007C
 */
void doEntryAlwaysMovieActor__Q24Game12EnemyMgrBaseFv(void)
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
  b         .loc_0x58

.loc_0x20:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0x54
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     

.loc_0x54:
  addi      r31, r31, 0x1

.loc_0x58:
  lwz       r0, 0x2C(r30)
  cmpw      r31, r0
  blt+      .loc_0x20
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
 * Address:	801305DC
 * Size:	00009C
 */
void doSimulationAlwaysMovieActor__Q24Game12EnemyMgrBaseFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  li        r31, 0
  stw       r30, 0x10(r1)
  mr        r30, r3
  b         .loc_0x74

.loc_0x28:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0x70
  lwz       r4, 0x17C(r3)
  lwz       r0, 0x4(r4)
  cmplwi    r0, 0
  bne-      .loc_0x70
  lwz       r12, 0x0(r3)
  fmr       f1, f31
  lwz       r12, 0x4C(r12)
  mtctr     r12
  bctrl     

.loc_0x70:
  addi      r31, r31, 0x1

.loc_0x74:
  lwz       r0, 0x2C(r30)
  cmpw      r31, r0
  blt+      .loc_0x28
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  lwz       r31, 0x14(r1)
  lwz       r30, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80130678
 * Size:	00008C
 */
void doDirectDrawAlwaysMovieActor__Q24Game12EnemyMgrBaseFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0x64

.loc_0x28:
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,3,3
  beq-      .loc_0x60
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0x50(r12)
  mtctr     r12
  bctrl     

.loc_0x60:
  addi      r31, r31, 0x1

.loc_0x64:
  lwz       r0, 0x2C(r29)
  cmpw      r31, r0
  blt+      .loc_0x28
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
 * Address:	80130704
 * Size:	000008
 */
void @4@__dt__Q24Game12EnemyMgrBaseFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x27164
*/
}