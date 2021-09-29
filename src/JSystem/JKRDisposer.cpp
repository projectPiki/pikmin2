

/*
 * --INFO--
 * Address:	8001CFCC
 * Size:	000068
 */
void JKRDisposer::JKRDisposer()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x14(r1)
  subi      r0, r4, 0x2A8
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r4, r31
  stw       r0, 0x0(r3)
  addi      r3, r4, 0x8
  bl        0x97C4
  mr        r3, r31
  bl        0x68F8
  stw       r3, 0x4(r31)
  lwz       r3, 0x4(r31)
  cmplwi    r3, 0
  beq-      .loc_0x50
  addi      r3, r3, 0x5C
  addi      r4, r31, 0x8
  bl        0x98CC

.loc_0x50:
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
 * Address:	........
 * Size:	000054
 */
void JSULink<JKRDisposer>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001D034
 * Size:	000084
 */
void JKRDisposer::~JKRDisposer()
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
  lis       r3, 0x804A
  subi      r0, r3, 0x2A8
  stw       r0, 0x0(r30)
  lwz       r3, 0x4(r30)
  cmplwi    r3, 0
  beq-      .loc_0x44
  addi      r3, r3, 0x5C
  addi      r4, r30, 0x8
  bl        0x9BB0

.loc_0x44:
  addic.    r0, r30, 0x8
  beq-      .loc_0x58
  addi      r3, r30, 0x8
  li        r4, 0
  bl        0x9748

.loc_0x58:
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        0x701C

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