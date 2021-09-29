

/*
 * --INFO--
 * Address:	800272E4
 * Size:	00003C
 */
void __dt__Q27JGadget13TNodeLinkListFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x24
  extsh.    r0, r4
  ble-      .loc_0x24
  bl        -0x3250

.loc_0x24:
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
 * Size:	00004C
 */
void erase__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iterator(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void erase__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorQ37JGadget13TNodeLinkList8iterator(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void clear__Q27JGadget13TNodeLinkListFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void splice__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorRQ27JGadget13TNodeLinkList(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void splice__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorRQ27JGadget13TNodeLinkListQ37JGadget13TNodeLinkList8iterator(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void splice__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorRQ27JGadget13TNodeLinkListQ37JGadget13TNodeLinkList8iteratorQ37JGadget13TNodeLinkList8iterator(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void swap__Q27JGadget13TNodeLinkListFRQ27JGadget13TNodeLinkList(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void reverse__Q27JGadget13TNodeLinkListFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void Find__Q27JGadget13TNodeLinkListFPCQ27JGadget13TLinkListNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80027320
 * Size:	00002C
 */
void Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode(void)
{
/*
.loc_0x0:
  lwz       r5, 0x0(r5)
  lwz       r7, 0x4(r5)
  stw       r5, 0x0(r6)
  stw       r7, 0x4(r6)
  stw       r6, 0x4(r5)
  stw       r6, 0x0(r7)
  lwz       r5, 0x0(r4)
  addi      r0, r5, 0x1
  stw       r0, 0x0(r4)
  stw       r6, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8002734C
 * Size:	000024
 */
void Erase__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode(void)
{
/*
.loc_0x0:
  lwz       r6, 0x0(r5)
  lwz       r5, 0x4(r5)
  stw       r5, 0x4(r6)
  stw       r6, 0x0(r5)
  lwz       r5, 0x0(r4)
  subi      r0, r5, 0x1
  stw       r0, 0x0(r4)
  stw       r6, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80027370
 * Size:	00002C
 */
void Remove__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r4, 0x8(r1)
  stw       r4, 0xC(r1)
  addi      r4, r1, 0xC
  bl        .loc_0x2C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x2C:
*/
}

/*
 * --INFO--
 * Address:	8002739C
 * Size:	0000E8
 */
void remove_if<JGadget::@unnamed@linklist_cpp@::TPRIsEqual_pointer_<JGadget::TLinkListNode>>__Q27JGadget13TNodeLinkListFQ37JGadget22@unnamed@linklist_cpp@46TPRIsEqual_pointer_<JGadget::TLinkListNode>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  li        r5, 0
  lwz       r6, 0x0(r4)
  addi      r0, r3, 0x4
  stw       r5, 0x44(r1)
  addi      r8, r1, 0x44
  stw       r5, 0x48(r1)
  stw       r5, 0x40(r1)
  stw       r8, 0x44(r1)
  stw       r8, 0x48(r1)
  lwz       r4, 0x4(r3)
  stw       r6, 0x3C(r1)
  stw       r4, 0x20(r1)
  b         .loc_0xC8

.loc_0x38:
  lwz       r5, 0x20(r1)
  cmplw     r5, r6
  bne-      .loc_0xC0
  lwz       r4, 0x0(r5)
  cmplw     r8, r5
  stw       r5, 0x24(r1)
  stw       r4, 0x20(r1)
  stw       r5, 0x2C(r1)
  stw       r8, 0x28(r1)
  stw       r4, 0x8(r1)
  stw       r5, 0x10(r1)
  stw       r8, 0xC(r1)
  beq-      .loc_0xC8
  cmplw     r8, r4
  stw       r4, 0x18(r1)
  stw       r8, 0x14(r1)
  beq-      .loc_0xC8
  lwz       r7, 0x0(r5)
  lwz       r4, 0x4(r5)
  stw       r8, 0x1C(r1)
  stw       r4, 0x4(r7)
  stw       r7, 0x0(r4)
  lwz       r4, 0x0(r3)
  subi      r4, r4, 0x1
  stw       r4, 0x0(r3)
  lwz       r4, 0x48(r1)
  stw       r8, 0x0(r5)
  stw       r4, 0x4(r5)
  stw       r5, 0x48(r1)
  stw       r5, 0x0(r4)
  lwz       r4, 0x40(r1)
  addi      r4, r4, 0x1
  stw       r4, 0x40(r1)
  b         .loc_0xC8

.loc_0xC0:
  lwz       r4, 0x0(r5)
  stw       r4, 0x20(r1)

.loc_0xC8:
  lwz       r4, 0x20(r1)
  cmplw     r4, r0
  stw       r4, 0x38(r1)
  stw       r4, 0x34(r1)
  stw       r4, 0x30(r1)
  bne+      .loc_0x38
  addi      r1, r1, 0x50
  blr
*/
}