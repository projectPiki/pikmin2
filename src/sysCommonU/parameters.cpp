

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80413658
 * Size:	0000AC
 */
void BaseParm::BaseParm(Parameters *, unsigned long, char *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r7, 0x804F
  stw       r0, 0x24(r1)
  subi      r0, r7, 0x4A88
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  stw       r0, 0x0(r3)
  addi      r3, r28, 0x4
  bl        -0x424
  stw       r31, 0x14(r28)
  li        r4, 0
  lwz       r3, 0x4(r29)
  b         .loc_0x58

.loc_0x50:
  mr        r4, r3
  lwz       r3, 0x10(r3)

.loc_0x58:
  cmplwi    r3, 0
  bne+      .loc_0x50
  cmplwi    r4, 0
  beq-      .loc_0x70
  stw       r28, 0x10(r4)
  b         .loc_0x74

.loc_0x70:
  stw       r28, 0x4(r29)

.loc_0x74:
  mr        r4, r30
  addi      r3, r28, 0x4
  bl        -0x2D0
  li        r0, 0
  mr        r3, r28
  stw       r0, 0x10(r28)
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
 * Address:	80413704
 * Size:	0000EC
 */
void Parameters::write(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  lwz       r4, 0x8(r3)
  mr        r3, r30
  bl        0x8F4
  lwz       r31, 0x4(r31)
  b         .loc_0x98

.loc_0x30:
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0xCF8
  mr        r4, r30
  addi      r3, r31, 0x4
  bl        -0x2E8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r30
  bl        0x2058
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x0(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r5, 0x14(r31)
  mr        r3, r30
  addi      r4, r2, 0x1F70
  crclr     6, 0x6
  bl        0xA48
  lwz       r31, 0x10(r31)

.loc_0x98:
  cmplwi    r31, 0
  bne+      .loc_0x30
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0xC88
  lis       r3, 0x8051
  mr        r4, r30
  addi      r3, r3, 0x41F0
  bl        -0x35C
  mr        r3, r30
  addi      r4, r2, 0x1F78
  crclr     6, 0x6
  bl        0xA10
  mr        r3, r30
  bl        0x8CC
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
 * Address:	804137F0
 * Size:	000004
 */
void BaseParm::write(Stream &)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	804137F4
 * Size:	0000C8
 */
void Parameters::read(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x130(r1)
  mflr      r0
  stw       r0, 0x134(r1)
  stw       r31, 0x12C(r1)
  stw       r30, 0x128(r1)
  mr        r30, r4
  stw       r29, 0x124(r1)
  mr        r29, r3

.loc_0x20:
  addi      r3, r1, 0x8
  bl        -0x5A8
  mr        r4, r30
  addi      r3, r1, 0x8
  bl        -0x334
  addi      r3, r1, 0x8
  bl        -0x5D8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xAC
  addi      r3, r1, 0x8
  addi      r4, r1, 0x14
  bl        -0x260
  mr        r3, r30
  bl        0x1248
  lwz       r4, 0x10(r1)
  mr        r31, r3
  mr        r3, r29
  bl        0x68
  cmplwi    r3, 0
  beq-      .loc_0x88
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x20

.loc_0x88:
  cmpwi     r31, -0x1
  beq-      .loc_0xA0
  mr        r3, r30
  mr        r4, r31
  bl        0xA3C
  b         .loc_0x20

.loc_0xA0:
  mr        r3, r30
  bl        0xAF4
  b         .loc_0x20

.loc_0xAC:
  lwz       r0, 0x134(r1)
  lwz       r31, 0x12C(r1)
  lwz       r30, 0x128(r1)
  lwz       r29, 0x124(r1)
  mtlr      r0
  addi      r1, r1, 0x130
  blr
*/
}

/*
 * --INFO--
 * Address:	804138BC
 * Size:	000004
 */
void BaseParm::read(Stream &)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	804138C0
 * Size:	000064
 */
void Parameters::findParm(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r4
  lwz       r31, 0x4(r3)
  b         .loc_0x40

.loc_0x20:
  mr        r4, r30
  addi      r3, r31, 0x4
  bl        -0x4B4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x3C
  mr        r3, r31
  b         .loc_0x4C

.loc_0x3C:
  lwz       r31, 0x10(r31)

.loc_0x40:
  cmplwi    r31, 0
  bne+      .loc_0x20
  li        r3, 0

.loc_0x4C:
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
 * Address:	80413924
 * Size:	000034
 */
void Parm<int>::read(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  bl        0x1154
  stw       r3, 0x18(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80413958
 * Size:	00002C
 */
void Parm<int>::write(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mr        r0, r4
  lwz       r4, 0x18(r3)
  mr        r3, r0
  bl        0x1E50
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80413984
 * Size:	000034
 */
void Parm<unsigned char>::read(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  bl        0xB00
  stb       r3, 0x18(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804139B8
 * Size:	00002C
 */
void Parm<unsigned char>::write(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, 0x18(r3)
  mr        r3, r4
  mr        r4, r0
  bl        0x1CA0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804139E4
 * Size:	000044
 */
void Parm<bool>::read(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  bl        0xAA0
  rlwinm    r3,r3,0,24,31
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r0,r0,1,31,31
  stb       r0, 0x18(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80413A28
 * Size:	000034
 */
void Parm<bool>::write(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r5, 0x18(r3)
  mr        r3, r4
  neg       r0, r5
  or        r0, r0, r5
  rlwinm    r4,r0,1,31,31
  bl        0x1C28
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80413A5C
 * Size:	000034
 */
void Parm<float>::read(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  bl        0x1338
  stfs      f1, 0x18(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80413A90
 * Size:	000028
 */
void Parm<float>::write(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lfs       f1, 0x18(r3)
  mr        r3, r4
  bl        0x1DA4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80413AB8
 * Size:	0001B0
 */
void ParmString::ParmString(Parameters *, char *, int, unsigned long, char *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r9, 0x804F
  stw       r0, 0x24(r1)
  subi      r0, r9, 0x4A88
  stmw      r26, 0x8(r1)
  mr        r30, r3
  mr        r26, r4
  mr        r31, r5
  mr        r27, r6
  mr        r28, r7
  mr        r29, r8
  stw       r0, 0x0(r3)
  addi      r3, r30, 0x4
  bl        -0x880
  stw       r29, 0x14(r30)
  li        r3, 0
  lwz       r4, 0x4(r26)
  b         .loc_0x54

.loc_0x4C:
  mr        r3, r4
  lwz       r4, 0x10(r4)

.loc_0x54:
  cmplwi    r4, 0
  bne+      .loc_0x4C
  cmplwi    r3, 0
  beq-      .loc_0x6C
  stw       r30, 0x10(r3)
  b         .loc_0x70

.loc_0x6C:
  stw       r30, 0x4(r26)

.loc_0x70:
  mr        r4, r28
  addi      r3, r30, 0x4
  bl        -0x72C
  li        r0, 0
  lis       r3, 0x804F
  stw       r0, 0x10(r30)
  subi      r0, r3, 0x4A9C
  stw       r0, 0x0(r30)
  stw       r27, 0x1C(r30)
  lwz       r3, 0x1C(r30)
  addi      r3, r3, 0x1
  bl        -0x3EFBA8
  stw       r3, 0x18(r30)
  mr        r3, r31
  bl        -0x349250
  cmpwi     r3, 0
  li        r4, 0
  ble-      .loc_0x18C
  cmpwi     r3, 0x8
  subi      r5, r3, 0x8
  ble-      .loc_0x160
  addi      r0, r5, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r5, 0
  ble-      .loc_0x160

.loc_0xD8:
  add       r29, r31, r4
  lwz       r5, 0x18(r30)
  lbz       r0, 0x0(r29)
  addi      r10, r4, 0x1
  addi      r9, r4, 0x2
  addi      r8, r4, 0x3
  stbx      r0, r5, r4
  addi      r7, r4, 0x4
  addi      r6, r4, 0x5
  addi      r5, r4, 0x6
  lbz       r12, 0x1(r29)
  addi      r0, r4, 0x7
  lwz       r11, 0x18(r30)
  addi      r4, r4, 0x8
  stbx      r12, r11, r10
  lbz       r11, 0x2(r29)
  lwz       r10, 0x18(r30)
  stbx      r11, r10, r9
  lbz       r10, 0x3(r29)
  lwz       r9, 0x18(r30)
  stbx      r10, r9, r8
  lbz       r9, 0x4(r29)
  lwz       r8, 0x18(r30)
  stbx      r9, r8, r7
  lbz       r8, 0x5(r29)
  lwz       r7, 0x18(r30)
  stbx      r8, r7, r6
  lbz       r7, 0x6(r29)
  lwz       r6, 0x18(r30)
  stbx      r7, r6, r5
  lbz       r6, 0x7(r29)
  lwz       r5, 0x18(r30)
  stbx      r6, r5, r0
  bdnz+     .loc_0xD8

.loc_0x160:
  sub       r0, r3, r4
  add       r5, r31, r4
  mtctr     r0
  cmpw      r4, r3
  bge-      .loc_0x18C

.loc_0x174:
  lbz       r0, 0x0(r5)
  addi      r5, r5, 0x1
  lwz       r3, 0x18(r30)
  stbx      r0, r3, r4
  addi      r4, r4, 0x1
  bdnz+     .loc_0x174

.loc_0x18C:
  lwz       r5, 0x18(r30)
  li        r0, 0
  mr        r3, r30
  stbx      r0, r5, r4
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80413C68
 * Size:	00002C
 */
void ParmString::write(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mr        r0, r4
  lwz       r4, 0x18(r3)
  mr        r3, r0
  bl        0x194C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80413C94
 * Size:	000030
 */
void ParmString::read(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  mr        r3, r4
  stw       r0, 0x14(r1)
  lwz       r4, 0x18(r5)
  lwz       r5, 0x1C(r5)
  bl        0x1424
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80413CC4
 * Size:	0000B8
 */
void ParmEnum::ParmEnum(Parameters *, char **, unsigned long, int, long, char *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r10, 0x804F
  stw       r0, 0x34(r1)
  subi      r0, r10, 0x4A88
  stmw      r25, 0x14(r1)
  mr        r25, r3
  mr        r26, r4
  mr        r27, r5
  mr        r28, r6
  mr        r29, r7
  mr        r30, r8
  mr        r31, r9
  stw       r0, 0x0(r3)
  addi      r3, r25, 0x4
  bl        -0xA90
  stw       r31, 0x14(r25)
  li        r3, 0
  lwz       r4, 0x4(r26)
  b         .loc_0x58

.loc_0x50:
  mr        r3, r4
  lwz       r4, 0x10(r4)

.loc_0x58:
  cmplwi    r4, 0
  bne+      .loc_0x50
  cmplwi    r3, 0
  beq-      .loc_0x70
  stw       r25, 0x10(r3)
  b         .loc_0x74

.loc_0x70:
  stw       r25, 0x4(r26)

.loc_0x74:
  mr        r4, r30
  addi      r3, r25, 0x4
  bl        -0x93C
  li        r0, 0
  lis       r3, 0x804F
  stw       r0, 0x10(r25)
  subi      r0, r3, 0x4AB0
  mr        r3, r25
  stw       r0, 0x0(r25)
  stw       r28, 0x18(r25)
  stw       r29, 0x1C(r25)
  stw       r27, 0x20(r25)
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80413D7C
 * Size:	00002C
 */
void ParmEnum::write(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mr        r0, r4
  lwz       r4, 0x18(r3)
  mr        r3, r0
  bl        0x1A2C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80413DA8
 * Size:	000034
 */
void ParmEnum::read(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  bl        0xCD0
  stw       r3, 0x18(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80413DDC
 * Size:	000008
 */
void ParmEnum::size()
{
/*
.loc_0x0:
  li        r3, 0x4
  blr
*/
}

/*
 * --INFO--
 * Address:	80413DE4
 * Size:	000008
 */
void ParmString::size()
{
/*
.loc_0x0:
  li        r3, -0x1
  blr
*/
}
