

/*
 * --INFO--
 * Address:	800996FC
 * Size:	00002C
 */
void JASBasicBank::JASBasicBank()
{
/*
.loc_0x0:
  lis       r6, 0x804A
  lis       r4, 0x804A
  addi      r6, r6, 0x3764
  li        r5, 0
  stw       r6, 0x0(r3)
  addi      r0, r4, 0x3750
  stw       r5, 0x4(r3)
  stw       r0, 0x0(r3)
  stw       r5, 0x8(r3)
  stw       r5, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80099728
 * Size:	000048
 */
void JASBank::~JASBank()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  addi      r0, r5, 0x3764
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x756A0

.loc_0x30:
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
 * Address:	80099770
 * Size:	000074
 */
void JASBasicBank::~JASBasicBank()
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
  beq-      .loc_0x58
  lis       r3, 0x804A
  addi      r0, r3, 0x3750
  stw       r0, 0x0(r30)
  lwz       r3, 0x8(r30)
  bl        -0x756C8
  cmplwi    r30, 0
  beq-      .loc_0x48
  lis       r3, 0x804A
  addi      r0, r3, 0x3764
  stw       r0, 0x0(r30)

.loc_0x48:
  extsh.    r0, r31
  ble-      .loc_0x58
  mr        r3, r30
  bl        -0x75710

.loc_0x58:
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
 * Address:	800997E4
 * Size:	000064
 */
void JASBasicBank::setInstCount(unsigned long)
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
  lwz       r3, 0x8(r3)
  bl        -0x7572C
  bl        0x2AF4
  mr        r4, r3
  rlwinm    r3,r31,2,0,29
  li        r5, 0
  bl        -0x757D0
  stw       r3, 0x8(r30)
  rlwinm    r4,r31,2,0,29
  lwz       r3, 0x8(r30)
  bl        0xCA3C
  stw       r31, 0xC(r30)
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
 * Address:	80099848
 * Size:	000010
 */
void JASBasicBank::setInst(int, JASInst *)
{
/*
.loc_0x0:
  lwz       r3, 0x8(r3)
  rlwinm    r0,r4,2,0,29
  stwx      r5, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	80099858
 * Size:	000024
 */
void JASBasicBank::getInst(int) const
{
/*
.loc_0x0:
  lwz       r0, 0xC(r3)
  cmplw     r4, r0
  blt-      .loc_0x14
  li        r3, 0
  blr       

.loc_0x14:
  lwz       r3, 0x8(r3)
  rlwinm    r0,r4,2,0,29
  lwzx      r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8009987C
 * Size:	00000C
 */
void JASBasicBank::getType() const
{
/*
.loc_0x0:
  lis       r3, 0x4253
  addi      r3, r3, 0x4943
  blr
*/
}