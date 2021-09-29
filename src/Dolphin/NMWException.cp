

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void __destroy_new_array3(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void __destroy_new_array2(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C1748
 * Size:	00007C
 */
void __destroy_new_array(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr.       r26, r3
  mr        r27, r4
  beq-      .loc_0x68
  cmplwi    r27, 0
  beq-      .loc_0x60
  lwz       r29, -0x10(r26)
  li        r31, 0
  lwz       r30, -0xC(r26)
  mullw     r0, r29, r30
  add       r28, r26, r0
  b         .loc_0x58

.loc_0x3C:
  sub       r28, r28, r29
  mr        r12, r27
  mr        r3, r28
  li        r4, -0x1
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1

.loc_0x58:
  cmplw     r31, r30
  blt+      .loc_0x3C

.loc_0x60:
  subi      r3, r26, 0x10
  bl        -0x9D6D4

.loc_0x68:
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800C17C4
 * Size:	000078
 */
void __destroy_arr(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r5
  mullw     r0, r29, r30
  stw       r28, 0x10(r1)
  mr        r28, r4
  add       r31, r3, r0
  b         .loc_0x50

.loc_0x34:
  sub       r31, r31, r29
  mr        r12, r28
  mr        r3, r31
  li        r4, -0x1
  mtctr     r12
  bctrl     
  subi      r30, r30, 0x1

.loc_0x50:
  cmplwi    r30, 0
  bne+      .loc_0x34
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
 * Address:	800C183C
 * Size:	0000FC
 */
void __construct_array(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  li        r0, 0
  stw       r31, 0x2C(r1)
  mr        r31, r3
  stw       r30, 0x28(r1)
  mr        r30, r7
  stw       r29, 0x24(r1)
  mr        r29, r6
  stw       r30, 0x18(r1)
  stw       r28, 0x20(r1)
  mr        r28, r4
  stw       r3, 0x8(r1)
  stw       r29, 0xC(r1)
  stw       r30, 0x10(r1)
  stw       r5, 0x14(r1)
  stw       r0, 0x18(r1)
  b         .loc_0x70

.loc_0x4C:
  mr        r12, r28
  mr        r3, r31
  li        r4, 0x1
  mtctr     r12
  bctrl     
  lwz       r3, 0x18(r1)
  add       r31, r31, r29
  addi      r0, r3, 0x1
  stw       r0, 0x18(r1)

.loc_0x70:
  lwz       r4, 0x18(r1)
  cmplw     r4, r30
  blt+      .loc_0x4C
  lwz       r0, 0x10(r1)
  cmplw     r4, r0
  bge-      .loc_0xDC
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  beq-      .loc_0xDC
  lwz       r0, 0xC(r1)
  lwz       r3, 0x8(r1)
  mullw     r0, r0, r4
  add       r31, r3, r0
  b         .loc_0xD0

.loc_0xA8:
  lwz       r0, 0xC(r1)
  li        r4, -0x1
  lwz       r12, 0x14(r1)
  sub       r31, r31, r0
  mr        r3, r31
  mtctr     r12
  bctrl     
  lwz       r3, 0x18(r1)
  subi      r0, r3, 0x1
  stw       r0, 0x18(r1)

.loc_0xD0:
  lwz       r0, 0x18(r1)
  cmplwi    r0, 0
  bne+      .loc_0xA8

.loc_0xDC:
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
 * Address:	800C1938
 * Size:	0000B8
 */
void __partial_array_destructor::~__partial_array_destructor()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr.       r29, r3
  beq-      .loc_0x98
  lwz       r4, 0x10(r29)
  lwz       r0, 0x8(r29)
  cmplw     r4, r0
  bge-      .loc_0x88
  lwz       r0, 0xC(r29)
  cmplwi    r0, 0
  beq-      .loc_0x88
  lwz       r0, 0x4(r29)
  lwz       r3, 0x0(r29)
  mullw     r0, r0, r4
  add       r31, r3, r0
  b         .loc_0x7C

.loc_0x54:
  lwz       r0, 0x4(r29)
  li        r4, -0x1
  lwz       r12, 0xC(r29)
  sub       r31, r31, r0
  mr        r3, r31
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r29)
  subi      r0, r3, 0x1
  stw       r0, 0x10(r29)

.loc_0x7C:
  lwz       r0, 0x10(r29)
  cmplwi    r0, 0
  bne+      .loc_0x54

.loc_0x88:
  extsh.    r0, r30
  ble-      .loc_0x98
  mr        r3, r29
  bl        -0x9D918

.loc_0x98:
  lwz       r0, 0x24(r1)
  mr        r3, r29
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
 * Address:	800C19F0
 * Size:	000104
 */
void __construct_new_array(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r27, 0x2C(r1)
  mr.       r30, r3
  mr        r27, r4
  mr        r28, r6
  mr        r29, r7
  beq-      .loc_0xEC
  stw       r28, 0x0(r30)
  cmplwi    r27, 0
  stw       r29, 0x4(r30)
  addi      r30, r30, 0x10
  beq-      .loc_0xEC
  stw       r29, 0x18(r1)
  li        r0, 0
  mr        r31, r30
  stw       r30, 0x8(r1)
  stw       r28, 0xC(r1)
  stw       r29, 0x10(r1)
  stw       r5, 0x14(r1)
  stw       r0, 0x18(r1)
  b         .loc_0x80

.loc_0x5C:
  mr        r12, r27
  mr        r3, r31
  li        r4, 0x1
  mtctr     r12
  bctrl     
  lwz       r3, 0x18(r1)
  add       r31, r31, r28
  addi      r0, r3, 0x1
  stw       r0, 0x18(r1)

.loc_0x80:
  lwz       r4, 0x18(r1)
  cmplw     r4, r29
  blt+      .loc_0x5C
  lwz       r0, 0x10(r1)
  cmplw     r4, r0
  bge-      .loc_0xEC
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  beq-      .loc_0xEC
  lwz       r0, 0xC(r1)
  lwz       r3, 0x8(r1)
  mullw     r0, r0, r4
  add       r31, r3, r0
  b         .loc_0xE0

.loc_0xB8:
  lwz       r0, 0xC(r1)
  li        r4, -0x1
  lwz       r12, 0x14(r1)
  sub       r31, r31, r0
  mr        r3, r31
  mtctr     r12
  bctrl     
  lwz       r3, 0x18(r1)
  subi      r0, r3, 0x1
  stw       r0, 0x18(r1)

.loc_0xE0:
  lwz       r0, 0x18(r1)
  cmplwi    r0, 0
  bne+      .loc_0xB8

.loc_0xEC:
  mr        r3, r30
  lmw       r27, 0x2C(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00022C
 */
void __throw_catch_compare(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void std::unexpected()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void std::set_unexpected(void (*) ())
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void std::terminate()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void std::set_terminate(void (*) ())
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void std::duhandler()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void std::dthandler()
{
	// UNUSED FUNCTION
}