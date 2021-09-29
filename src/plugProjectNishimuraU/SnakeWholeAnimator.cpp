

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
 * Address:	802CE268
 * Size:	000008
 */
void setAnimMgr__Q34Game10SnakeWhole14ProperAnimatorFPQ28SysShape7AnimMgr(void)
{
/*
.loc_0x0:
  stw       r4, 0x20(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802CE270
 * Size:	000008
 */
void getAnimator__Q34Game10SnakeWhole14ProperAnimatorFi(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CE278
 * Size:	00005C
 */
void __dt__Q34Game10SnakeWhole14ProperAnimatorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804D
  addi      r0, r3, 0x2330
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804B
  subi      r0, r3, 0x23A8
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        -0x2AA204

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802CE2D4
 * Size:	000008
 */
void getAnimator__Q34Game10SnakeWhole14ProperAnimatorFv(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x10
  blr
*/
}