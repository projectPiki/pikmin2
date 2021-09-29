

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
 * Address:	803ECB40
 * Size:	00005C
 */
void ebi::gCardEMgr_ThreadFunc(void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, -0x6568(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x7988
  li        r4, 0x10
  addi      r5, r5, 0x799C
  crclr     6, 0x6
  bl        -0x3C2538

.loc_0x3C:
  lwz       r3, -0x6568(r13)
  mr        r4, r31
  bl        0x64C
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
 * Size:	000018
 */
void changeEndian__Q23ebi11CardEReaderFUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void roundup4b__Q23ebi11CardEReaderFUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void CardE_probeAGB__Q23ebi11CardEReaderFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803ECB9C
 * Size:	000274
 */
void CardE_uploadToGBA__Q23ebi11CardEReaderFlPUcUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r5
  stw       r30, 0x28(r1)
  mr        r30, r4
  addi      r4, r1, 0x8
  stw       r29, 0x24(r1)
  mr        r29, r3
  stw       r28, 0x20(r1)
  bl        -0x2EDEF8
  cmpwi     r3, 0
  beq-      .loc_0x40
  li        r3, 0
  b         .loc_0x254

.loc_0x40:
  mr        r3, r29
  addi      r4, r1, 0x8
  bl        -0x2EDFA4
  cmpwi     r3, 0
  beq-      .loc_0x5C
  li        r3, 0
  b         .loc_0x254

.loc_0x5C:
  lbz       r0, 0x8(r1)
  cmplwi    r0, 0x28
  beq-      .loc_0x70
  li        r3, 0
  b         .loc_0x254

.loc_0x70:
  mr        r3, r29
  addi      r4, r1, 0x14
  addi      r5, r1, 0x8
  bl        -0x2EDE48
  cmpwi     r3, 0
  beq-      .loc_0x90
  li        r3, 0
  b         .loc_0x254

.loc_0x90:
  subi      r4, r13, 0x7998
  lbz       r3, 0x14(r1)
  lbz       r0, -0x7998(r13)
  cmplw     r3, r0
  beq-      .loc_0xAC
  li        r3, 0
  b         .loc_0x254

.loc_0xAC:
  lbz       r3, 0x15(r1)
  lbzu      r0, 0x1(r4)
  cmplw     r3, r0
  beq-      .loc_0xC4
  li        r3, 0
  b         .loc_0x254

.loc_0xC4:
  lbz       r3, 0x16(r1)
  lbzu      r0, 0x1(r4)
  cmplw     r3, r0
  beq-      .loc_0xDC
  li        r3, 0
  b         .loc_0x254

.loc_0xDC:
  lbz       r3, 0x17(r1)
  lbz       r0, 0x1(r4)
  cmplw     r3, r0
  beq-      .loc_0xF4
  li        r3, 0
  b         .loc_0x254

.loc_0xF4:
  mr        r3, r29
  addi      r4, r1, 0x8
  bl        -0x2EE058
  cmpwi     r3, 0
  beq-      .loc_0x110
  li        r3, 0
  b         .loc_0x254

.loc_0x110:
  lbz       r0, 0x8(r1)
  cmplwi    r0, 0x20
  beq-      .loc_0x124
  li        r3, 0
  b         .loc_0x254

.loc_0x124:
  mr        r3, r29
  addi      r4, r1, 0x14
  addi      r5, r1, 0x8
  bl        -0x2EDE38
  cmpwi     r3, 0
  beq-      .loc_0x144
  li        r3, 0
  b         .loc_0x254

.loc_0x144:
  mr        r3, r29
  addi      r4, r1, 0x8
  bl        -0x2EE0A8
  cmpwi     r3, 0
  beq-      .loc_0x160
  li        r3, 0
  b         .loc_0x254

.loc_0x160:
  lbz       r0, 0x8(r1)
  cmplwi    r0, 0x30
  beq-      .loc_0x174
  li        r3, 0
  b         .loc_0x254

.loc_0x174:
  addi      r0, r1, 0x10
  mr        r3, r29
  stwbrx    r31, r0, r0
  addi      r4, r1, 0x10
  addi      r5, r1, 0x8
  bl        -0x2EDE90
  cmpwi     r3, 0
  beq-      .loc_0x19C
  li        r3, 0
  b         .loc_0x254

.loc_0x19C:
  mr        r3, r29
  addi      r4, r1, 0xC
  addi      r5, r1, 0x8
  bl        -0x2EDF74
  cmpwi     r3, 0
  beq-      .loc_0x1BC
  li        r3, 0
  b         .loc_0x254

.loc_0x1BC:
  lwz       r3, 0xC(r1)
  rlwinm    r0,r3,24,16,23
  rlwimi    r0,r3,8,24,31
  rlwimi    r0,r3,8,8,15
  rlwimi    r0,r3,24,0,7
  cmplw     r31, r0
  beq-      .loc_0x1E0
  li        r3, 0
  b         .loc_0x254

.loc_0x1E0:
  li        r28, 0
  b         .loc_0x248

.loc_0x1E8:
  mr        r3, r29
  addi      r4, r1, 0x8
  bl        -0x2EE14C
  cmpwi     r3, 0
  beq-      .loc_0x204
  li        r3, 0
  b         .loc_0x254

.loc_0x204:
  lbz       r3, 0x8(r1)
  rlwinm.   r0,r3,0,30,30
  beq-      .loc_0x224
  rlwinm    r0,r3,0,26,27
  cmpwi     r0, 0x30
  beq+      .loc_0x1E8
  li        r3, 0
  b         .loc_0x254

.loc_0x224:
  mr        r3, r29
  add       r4, r30, r28
  addi      r5, r1, 0x8
  bl        -0x2EDF38
  cmpwi     r3, 0
  beq-      .loc_0x244
  li        r3, 0
  b         .loc_0x254

.loc_0x244:
  addi      r28, r28, 0x4

.loc_0x248:
  cmplw     r28, r31
  blt+      .loc_0x1E8
  li        r3, 0x1

.loc_0x254:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803ECE10
 * Size:	000068
 */
void __dt__Q33ebi11CardEReader4TMgrFv(void)
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
  beq-      .loc_0x4C
  lis       r4, 0x804F
  li        r0, 0
  subi      r5, r4, 0x5E78
  li        r4, 0
  stw       r5, 0x0(r30)
  stw       r0, -0x6568(r13)
  bl        -0x3CFE14
  extsh.    r0, r31
  ble-      .loc_0x4C
  mr        r3, r30
  bl        -0x3C8DA4

.loc_0x4C:
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
 * Address:	803ECE78
 * Size:	00006C
 */
void globalInstance__Q33ebi11CardEReader4TMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r0, -0x6568(r13)
  cmplwi    r0, 0
  bne-      .loc_0x58
  li        r3, 0x68
  bl        -0x3C8FF4
  mr.       r31, r3
  beq-      .loc_0x54
  bl        -0x3CFED8
  lis       r4, 0x804F
  li        r3, 0
  subi      r4, r4, 0x5E78
  li        r0, -0x1
  stw       r4, 0x0(r31)
  stw       r3, 0x30(r31)
  stw       r3, 0x34(r31)
  stw       r3, 0x3C(r31)
  stw       r0, 0x40(r31)

.loc_0x54:
  stw       r31, -0x6568(r13)

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
 * Address:	........
 * Size:	000048
 */
void deleteInstance__Q33ebi11CardEReader4TMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803ECEE4
 * Size:	00011C
 */
void loadResource__Q33ebi11CardEReader4TMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x124(r1)
  stw       r31, 0x11C(r1)
  addi      r31, r4, 0x7978
  stw       r30, 0x118(r1)
  mr        r30, r3
  stw       r29, 0x114(r1)
  li        r29, 0
  stw       r28, 0x110(r1)

.loc_0x2C:
  cmpwi     r29, 0
  addi      r28, r2, 0x1AF8
  bne-      .loc_0x40
  addi      r28, r31, 0x30
  b         .loc_0x5C

.loc_0x40:
  cmpwi     r29, 0x1
  bne-      .loc_0x50
  addi      r28, r31, 0x54
  b         .loc_0x5C

.loc_0x50:
  cmpwi     r29, 0x2
  bne-      .loc_0x5C
  addi      r28, r31, 0x78

.loc_0x5C:
  addi      r3, r1, 0x10
  bl        -0x3CFE8C
  mr        r4, r28
  addi      r3, r1, 0x10
  bl        -0x3CFBBC
  li        r0, 0
  addi      r3, r1, 0x10
  stw       r0, 0x8(r1)
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0x2
  li        r9, 0
  li        r10, 0
  bl        -0x3CDC8C
  stw       r3, 0x18(r30)
  lwz       r0, 0x18(r30)
  cmplwi    r0, 0
  bne-      .loc_0xC0
  addi      r3, r31, 0x10
  addi      r5, r31, 0x24
  li        r4, 0x1CE
  crclr     6, 0x6
  bl        -0x3C2960

.loc_0xC0:
  lwz       r0, 0xA0(r1)
  addi      r3, r1, 0x10
  stw       r0, 0x24(r30)
  bl        -0x3CFB2C
  lwz       r5, 0x24(r30)
  addi      r3, r1, 0x10
  li        r4, -0x1
  addi      r0, r5, 0x3
  rlwinm    r0,r0,0,0,29
  stw       r0, 0x24(r30)
  bl        -0x3CFD40
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0x3
  blt+      .loc_0x2C
  lwz       r0, 0x124(r1)
  lwz       r31, 0x11C(r1)
  lwz       r30, 0x118(r1)
  lwz       r29, 0x114(r1)
  lwz       r28, 0x110(r1)
  mtlr      r0
  addi      r1, r1, 0x120
  blr
*/
}

/*
 * --INFO--
 * Address:	803ED000
 * Size:	00003C
 */
void init__Q33ebi11CardEReader4TMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2EE494
  addi      r3, r31, 0x48
  bl        -0x2FD4EC
  addi      r3, r31, 0x60
  bl        -0x2FD1EC
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803ED03C
 * Size:	00001C
 */
void uploadToGBA__Q33ebi11CardEReader4TMgrFl(void)
{
/*
.loc_0x0:
  li        r5, 0x1
  li        r0, 0
  stw       r5, 0x38(r3)
  stw       r5, 0x34(r3)
  stw       r0, 0x44(r3)
  stw       r4, 0x30(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803ED058
 * Size:	000018
 */
void probeAGB__Q33ebi11CardEReader4TMgrFv(void)
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, 0x1
  stw       r4, 0x38(r3)
  stw       r0, 0x34(r3)
  stw       r4, 0x44(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803ED070
 * Size:	000150
 */
void update__Q33ebi11CardEReader4TMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x34(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0xF8
  bge-      .loc_0x13C
  cmpwi     r0, 0
  beq-      .loc_0x13C
  bge-      .loc_0x38
  b         .loc_0x13C
  b         .loc_0x13C

.loc_0x38:
  li        r3, 0x1
  bl        -0x2F6974
  subis     r0, r3, 0x4
  cmplwi    r0, 0
  bne-      .loc_0x54
  li        r0, 0x1
  b         .loc_0x90

.loc_0x54:
  li        r3, 0x2
  bl        -0x2F6990
  subis     r0, r3, 0x4
  cmplwi    r0, 0
  bne-      .loc_0x70
  li        r0, 0x2
  b         .loc_0x90

.loc_0x70:
  li        r3, 0x3
  bl        -0x2F69AC
  subis     r0, r3, 0x4
  cmplwi    r0, 0
  bne-      .loc_0x8C
  li        r0, 0x3
  b         .loc_0x90

.loc_0x8C:
  li        r0, -0x1

.loc_0x90:
  stw       r0, 0x40(r31)
  lwz       r3, 0x44(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x44(r31)
  lwz       r0, 0x40(r31)
  cmpwi     r0, -0x1
  beq-      .loc_0xDC
  lwz       r0, 0x38(r31)
  cmpwi     r0, 0
  bne-      .loc_0xC8
  mr        r3, r31
  li        r4, 0
  bl        0x168
  b         .loc_0x13C

.loc_0xC8:
  li        r3, 0
  li        r0, 0x2
  stw       r3, 0x44(r31)
  stw       r0, 0x34(r31)
  b         .loc_0x13C

.loc_0xDC:
  lwz       r0, 0x44(r31)
  cmpwi     r0, 0x2
  blt-      .loc_0x13C
  mr        r3, r31
  li        r4, 0x1
  bl        0x138
  b         .loc_0x13C

.loc_0xF8:
  bl        0xDC
  lwz       r4, 0x44(r31)
  rlwinm.   r0,r3,0,24,31
  addi      r0, r4, 0x1
  stw       r0, 0x44(r31)
  beq-      .loc_0x124
  li        r3, 0
  li        r0, 0x3
  stw       r3, 0x44(r31)
  stw       r0, 0x34(r31)
  b         .loc_0x13C

.loc_0x124:
  lwz       r0, 0x44(r31)
  cmpwi     r0, 0x1
  blt-      .loc_0x13C
  mr        r3, r31
  li        r4, 0x2
  bl        0xF0

.loc_0x13C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803ED1C0
 * Size:	000010
 */
void isFinish__Q33ebi11CardEReader4TMgrFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x34(r3)
  cntlzw    r0, r0
  rlwinm    r3,r0,27,24,31
  blr
*/
}

/*
 * --INFO--
 * Address:	803ED1D0
 * Size:	000074
 */
void threadProc__Q33ebi11CardEReader4TMgrFPv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3

.loc_0x14:
  addi      r3, r31, 0x48
  bl        -0x2FD680
  addi      r3, r31, 0x60
  addi      r4, r31, 0x48
  bl        -0x2FD39C
  lwz       r0, 0x30(r31)
  lwz       r3, 0x40(r31)
  rlwinm    r0,r0,2,0,29
  add       r5, r31, r0
  lwz       r4, 0x18(r5)
  lwz       r5, 0x24(r5)
  bl        -0x674
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  mr        r3, r31
  li        r4, 0
  bl        0x74
  b         .loc_0x68

.loc_0x5C:
  mr        r3, r31
  li        r4, 0x2
  bl        0x64

.loc_0x68:
  addi      r3, r31, 0x48
  bl        -0x2FD5F8
  b         .loc_0x14
*/
}

/*
 * --INFO--
 * Address:	803ED244
 * Size:	000054
 */
void tryUploadToGBA___Q33ebi11CardEReader4TMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x48
  bl        -0x2FD4E0
  cmpwi     r3, 0
  beq-      .loc_0x3C
  addi      r3, r31, 0x48
  bl        -0x2FD628
  addi      r3, r31, 0x60
  bl        -0x2FD348
  li        r3, 0x1
  b         .loc_0x40

.loc_0x3C:
  li        r3, 0

.loc_0x40:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803ED298
 * Size:	000010
 */
void goEnd___Q33ebi11CardEReader4TMgrFQ43ebi11CardEReader4TMgr7enumErr(void)
{
/*
.loc_0x0:
  stw       r4, 0x3C(r3)
  li        r0, 0
  stw       r0, 0x34(r3)
  blr
*/
}