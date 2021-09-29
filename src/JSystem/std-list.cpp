

/*
 * --INFO--
 * Address:	80027484
 * Size:	000020
 */
void __ct__Q27JGadget18TList_pointer_voidFRCQ27JGadget14TAllocator<void *>(void)
{
/*
.loc_0x0:
  lbz       r0, 0x0(r4)
  li        r4, 0
  stb       r0, 0x0(r3)
  addi      r0, r3, 0x8
  stw       r4, 0x4(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void __dt__Q27JGadget36TList<void *, JGadget::TAllocator<void *>>Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void __ct__Q27JGadget18TList_pointer_voidFUlRCPvRCQ27JGadget14TAllocator<void *>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800274A4
 * Size:	0000C0
 */
void __dt__Q27JGadget18TList_pointer_voidFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  stw       r29, 0x34(r1)
  mr        r29, r4
  stw       r28, 0x30(r1)
  mr.       r28, r3
  beq-      .loc_0x9C
  beq-      .loc_0x8C
  lwz       r0, 0x8(r28)
  addi      r31, r28, 0x8
  stw       r31, 0x20(r1)
  stw       r31, 0x1C(r1)
  stw       r0, 0x18(r1)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  b         .loc_0x7C

.loc_0x4C:
  lwz       r3, 0x14(r1)
  lwz       r30, 0x0(r3)
  lwz       r4, 0x4(r3)
  stw       r3, 0x10(r1)
  stw       r30, 0x0(r4)
  lwz       r0, 0x4(r3)
  stw       r0, 0x4(r30)
  bl        -0x3458
  lwz       r3, 0x4(r28)
  stw       r30, 0x14(r1)
  subi      r0, r3, 0x1
  stw       r0, 0x4(r28)

.loc_0x7C:
  lwz       r0, 0x14(r1)
  cmplw     r0, r31
  stw       r0, 0x8(r1)
  bne+      .loc_0x4C

.loc_0x8C:
  extsh.    r0, r29
  ble-      .loc_0x9C
  mr        r3, r28
  bl        -0x3488

.loc_0x9C:
  lwz       r0, 0x44(r1)
  mr        r3, r28
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  lwz       r28, 0x30(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80027564
 * Size:	000098
 */
void insert__Q27JGadget18TList_pointer_voidFQ37JGadget36TList<void *, JGadget::TAllocator<void *>>8iteratorRCPv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r27, r3
  lwz       r31, 0x0(r5)
  mr        r28, r4
  mr        r29, r6
  li        r3, 0xC
  stw       r31, 0x8(r1)
  lwz       r30, 0x4(r31)
  bl        -0x36EC
  cmplwi    r3, 0
  bne-      .loc_0x40
  li        r3, 0
  b         .loc_0x58

.loc_0x40:
  stw       r31, 0x0(r3)
  addic.    r4, r3, 0x8
  stw       r30, 0x4(r3)
  beq-      .loc_0x58
  lwz       r0, 0x0(r29)
  stw       r0, 0x0(r4)

.loc_0x58:
  cmplwi    r3, 0
  bne-      .loc_0x6C
  addi      r0, r28, 0x8
  stw       r0, 0x0(r27)
  b         .loc_0x84

.loc_0x6C:
  stw       r3, 0x4(r31)
  stw       r3, 0x0(r30)
  lwz       r4, 0x4(r28)
  addi      r0, r4, 0x1
  stw       r0, 0x4(r28)
  stw       r3, 0x0(r27)

.loc_0x84:
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void insert__Q27JGadget18TList_pointer_voidFQ37JGadget36TList<void *, JGadget::TAllocator<void *>>8iteratorUlRCPv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800275FC
 * Size:	000070
 */
void erase__Q27JGadget18TList_pointer_voidFQ37JGadget36TList<void *, JGadget::TAllocator<void *>>8iterator(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lwz       r5, 0x0(r5)
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r5
  lwz       r31, 0x0(r5)
  lwz       r4, 0x4(r5)
  stw       r5, 0x8(r1)
  stw       r31, 0x0(r4)
  lwz       r0, 0x4(r5)
  stw       r0, 0x4(r31)
  bl        -0x3588
  lwz       r3, 0x4(r30)
  subi      r0, r3, 0x1
  stw       r0, 0x4(r30)
  stw       r31, 0x0(r29)
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
 * Address:	........
 * Size:	0000A0
 */
void erase__Q27JGadget18TList_pointer_voidFQ37JGadget36TList<void *, JGadget::TAllocator<void *>>8iteratorQ37JGadget36TList<void *, JGadget::TAllocator<void *>>8iterator(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void remove__Q27JGadget18TList_pointer_voidFRCPv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void assign__Q27JGadget18TList_pointer_voidFUlRCPv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void assign__Q27JGadget36TList<void *, JGadget::TAllocator<void *>>FUlRCPv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void resize__Q27JGadget18TList_pointer_voidFUlRCPv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void unique__Q27JGadget18TList_pointer_voidFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void __as__Q27JGadget18TList_pointer_voidFRCQ27JGadget18TList_pointer_void(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000194
 */
void __as__Q27JGadget36TList<void *, JGadget::TAllocator<void *>>FRCQ27JGadget36TList<void *, JGadget::TAllocator<void *>>(void)
{
	// UNUSED FUNCTION
}