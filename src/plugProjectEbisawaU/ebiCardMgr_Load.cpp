

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803E2520
 * Size:	00004C
 */
void ebi::CardError::FSMState_W00_NoCard::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x1
	  bl        -0x1FC48
	  b         .loc_0x3C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r4
	  li        r4, 0x14
	  bl        -0x1FC60

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E256C
 * Size:	000058
 */
void ebi::CardError::FSMState_W00_NoCard::do_transit((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x17
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x48

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x48
	  mr        r3, r4
	  li        r4, 0x3
	  bl        -0xF1A8

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E25C4
 * Size:	00004C
 */
void ebi::CardError::FSMState_W00_NoCard::do_transitOnCard(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x2
	  bl        -0xF1DC
	  b         .loc_0x3C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r4
	  li        r4, 0x4
	  bl        -0xF1F4

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2610
 * Size:	000054
 */
void ebi::CardError::FSMState_W01_IOError::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x2
	  bl        -0x1FD40
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x15
	  bl        -0x1FD58

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2664
 * Size:	000058
 */
void ebi::CardError::FSMState_W01_IOError::do_transit((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x17
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x48

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x48
	  mr        r3, r4
	  li        r4, 0x3
	  bl        -0xF2A0

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E26BC
 * Size:	000054
 */
void ebi::CardError::FSMState_W02_WrongDevice::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x3
	  bl        -0x1FDEC
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x16
	  bl        -0x1FE04

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2710
 * Size:	000058
 */
void ebi::CardError::FSMState_W02_WrongDevice::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x17
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x48

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x48
	  mr        r3, r4
	  li        r4, 0x3
	  bl        -0xF34C

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2768
 * Size:	000054
 */
void ebi::CardError::FSMState_W03_WrongSector::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x4
	  bl        -0x1FE98
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x17
	  bl        -0x1FEB0

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E27BC
 * Size:	000058
 */
void ebi::CardError::FSMState_W03_WrongSector::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x17
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x48

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x48
	  mr        r3, r4
	  li        r4, 0x3
	  bl        -0xF3F8

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2814
 * Size:	000054
 */
void ebi::CardError::FSMState_W04_OverCapacity::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x6
	  bl        -0x1FF44
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x19
	  bl        -0x1FF5C

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2868
 * Size:	000064
 */
void ebi::CardError::FSMState_W04_OverCapacity::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E28CC
 * Size:	000054
 */
void
    ebi::CardError::FSMState_W05_InitCardOnIPL::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x7
	  bl        -0x1FFFC
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x1A
	  bl        -0x20014

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2920
 * Size:	000064
 */
void ebi::CardError::FSMState_W05_InitCardOnIPL::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x14
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x14
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2984
 * Size:	000054
 */
void
    ebi::CardError::FSMState_W06_CardNotUsable::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0xC
	  bl        -0x200B4
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x1F
	  bl        -0x200CC

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E29D8
 * Size:	000058
 */
void ebi::CardError::FSMState_W06_CardNotUsable::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x17
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x48

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x48
	  mr        r3, r4
	  li        r4, 0x3
	  bl        -0xF614

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2A30
 * Size:	000054
 */
void
    ebi::CardError::FSMState_W07_NoFileForSave::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x10
	  bl        -0x20160
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x23
	  bl        -0x20178

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2A84
 * Size:	000058
 */
void ebi::CardError::FSMState_W07_NoFileForSave::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x17
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x48

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x48
	  mr        r3, r4
	  li        r4, 0x3
	  bl        -0xF6C0

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2ADC
 * Size:	000054
 */
void ebi::CardError::FSMState_W08_FinishFormat::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x9
	  bl        -0x2020C
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x1C
	  bl        -0x20224

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2B30
 * Size:	00004C
 */
void ebi::CardError::FSMState_W08_FinishFormat::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x2
	  bl        -0xF748
	  b         .loc_0x3C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r4
	  li        r4, 0x4
	  bl        -0xF760

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2B7C
 * Size:	000054
 */
void ebi::CardError::FSMState_W09_FinishCreateNewFile::do_open(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x13
	  bl        -0x202AC
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x26
	  bl        -0x202C4

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2BD0
 * Size:	00004C
 */
void ebi::CardError::FSMState_W09_FinishCreateNewFile::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x2
	  bl        -0xF7E8
	  b         .loc_0x3C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r4
	  li        r4, 0x4
	  bl        -0xF800

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2C1C
 * Size:	000064
 */
void
    ebi::CardError::FSMState_W10_SerialNoError::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x40
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7118
	  li        r4, 0xEC
	  addi      r5, r5, 0x712C
	  crclr     6, 0x6
	  bl        -0x3B8614
	  b         .loc_0x54

	.loc_0x40:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  mr        r3, r4
	  li        r4, 0x27
	  bl        -0x20374

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2C80
 * Size:	00005C
 */
void ebi::CardError::FSMState_W10_SerialNoError::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x38
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7118
	  li        r4, 0xF5
	  addi      r5, r5, 0x712C
	  crclr     6, 0x6
	  bl        -0x3B8670
	  b         .loc_0x4C

	.loc_0x38:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x4C
	  mr        r3, r4
	  li        r4, 0x3
	  bl        -0xF8C0

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2CDC
 * Size:	000054
 */
void ebi::CardError::FSMState_WF0_FailToFormat_NoCard::do_open(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x8
	  bl        -0x2040C
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x1B
	  bl        -0x20424

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2D30
 * Size:	00004C
 */
void ebi::CardError::FSMState_WF0_FailToFormat_NoCard::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x2
	  bl        -0xF948
	  b         .loc_0x3C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r4
	  li        r4, 0x4
	  bl        -0xF960

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2D7C
 * Size:	000054
 */
void ebi::CardError::FSMState_WF1_FailToFormat_IOError::do_open(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x8
	  bl        -0x204AC
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x1B
	  bl        -0x204C4

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2DD0
 * Size:	00004C
 */
void ebi::CardError::FSMState_WF1_FailToFormat_IOError::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x2
	  bl        -0xF9E8
	  b         .loc_0x3C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r4
	  li        r4, 0x4
	  bl        -0xFA00

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2E1C
 * Size:	000054
 */
void ebi::CardError::FSMState_WF2_FailToCreateNewFile_NoCard::do_open(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x11
	  bl        -0x2054C
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x25
	  bl        -0x20564

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2E70
 * Size:	00004C
 */
void ebi::CardError::FSMState_WF2_FailToCreateNewFile_NoCard::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x2
	  bl        -0xFA88
	  b         .loc_0x3C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r4
	  li        r4, 0x4
	  bl        -0xFAA0

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2EBC
 * Size:	000054
 */
void ebi::CardError::FSMState_WF3_FailToCreateNewFile_IOError::do_open(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x11
	  bl        -0x205EC
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x25
	  bl        -0x20604

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2F10
 * Size:	00004C
 */
void ebi::CardError::FSMState_WF3_FailToCreateNewFile_IOError::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x2
	  bl        -0xFB28
	  b         .loc_0x3C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r4
	  li        r4, 0x4
	  bl        -0xFB40

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2F5C
 * Size:	000064
 */
void ebi::CardError::FSMState_WF4_FailToSave_NoCard::do_open(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x40
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7118
	  li        r4, 0x156
	  addi      r5, r5, 0x712C
	  crclr     6, 0x6
	  bl        -0x3B8954
	  b         .loc_0x54

	.loc_0x40:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  mr        r3, r4
	  li        r4, 0x2B
	  bl        -0x206B4

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2FC0
 * Size:	00004C
 */
void ebi::CardError::FSMState_WF4_FailToSave_NoCard::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x2
	  bl        -0xFBD8
	  b         .loc_0x3C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r4
	  li        r4, 0x4
	  bl        -0xFBF0

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E300C
 * Size:	000064
 */
void ebi::CardError::FSMState_WF5_FailToSave_IOError::do_open(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x12(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x40
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7118
	  li        r4, 0x16B
	  addi      r5, r5, 0x712C
	  crclr     6, 0x6
	  bl        -0x3B8A04
	  b         .loc_0x54

	.loc_0x40:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  mr        r3, r4
	  li        r4, 0x2B
	  bl        -0x20764

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3070
 * Size:	00004C
 */
void ebi::CardError::FSMState_WF5_FailToSave_IOError::do_transit(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x2
	  bl        -0xFC88
	  b         .loc_0x3C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r4
	  li        r4, 0x4
	  bl        -0xFCA0

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E30BC
 * Size:	000054
 */
void ebi::CardError::FSMState_Q00_DataBrokenAndDoYouFormat::do_open(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x10(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0x5
	  bl        -0x207EC
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x18
	  bl        -0x20804

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3110
 * Size:	000064
 */
void ebi::CardError::FSMState_Q00_DataBrokenAndDoYouFormat::do_transitYes(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x15
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x15
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3174
 * Size:	000064
 */
void ebi::CardError::FSMState_Q00_DataBrokenAndDoYouFormat::do_transitNo(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E31D8
 * Size:	000054
 */
void ebi::CardError::FSMState_Q01_DoYouOpenIPL::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x10(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0xD
	  bl        -0x20908
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x21
	  bl        -0x20920

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E322C
 * Size:	000058
 */
void ebi::CardError::FSMState_Q01_DoYouOpenIPL::do_transitYes(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  lwz       r3, -0x6514(r13)
	  li        r4, 0x1
	  bl        0x40128
	  b         .loc_0x48

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  li        r5, 0x18
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3284
 * Size:	000058
 */
void ebi::CardError::FSMState_Q01_DoYouOpenIPL::do_transitNo(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x17
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x48

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x48
	  mr        r3, r4
	  li        r4, 0x3
	  bl        -0xFEC0

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E32DC
 * Size:	000054
 */
void ebi::CardError::FSMState_Q02_DoYouFormat::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x10(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0xB
	  bl        -0x20A0C
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x1E
	  bl        -0x20A24

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3330
 * Size:	000064
 */
void ebi::CardError::FSMState_Q02_DoYouFormat::do_transitYes(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x19
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x19
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3394
 * Size:	000064
 */
void ebi::CardError::FSMState_Q02_DoYouFormat::do_transitNo(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E33F8
 * Size:	000054
 */
void ebi::CardError::FSMState_Q03_DoYouCreateNewFile::do_open(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stb       r0, 0x10(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0xF
	  bl        -0x20B28
	  b         .loc_0x44

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44
	  mr        r3, r4
	  li        r4, 0x22
	  bl        -0x20B40

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E344C
 * Size:	000064
 */
void ebi::CardError::FSMState_Q03_DoYouCreateNewFile::do_transitYes(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x1A
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x1A
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E34B0
 * Size:	000064
 */
void ebi::CardError::FSMState_Q03_DoYouCreateNewFile::do_transitNo(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x34:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3514
 * Size:	000064
 */
void ebi::CardError::FSMState_Q04_DoYouStartGameWithoutSave::do_open(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stb       r0, 0x10(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  mr        r3, r4
	  li        r4, 0xE
	  bl        -0x20C44
	  b         .loc_0x54

	.loc_0x30:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7118
	  li        r4, 0x1FD
	  addi      r5, r5, 0x712C
	  crclr     6, 0x6
	  bl        -0x3B8F24

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3578
 * Size:	00005C
 */
void ebi::CardError::FSMState_Q04_DoYouStartGameWithoutSave::do_transitYes(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x1
	  bl        -0x10190
	  b         .loc_0x4C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x4C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7118
	  li        r4, 0x206
	  addi      r5, r5, 0x712C
	  crclr     6, 0x6
	  bl        -0x3B8F80

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E35D4
 * Size:	00005C
 */
void ebi::CardError::FSMState_Q04_DoYouStartGameWithoutSave::do_transitNo(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x2
	  bl        -0x101EC
	  b         .loc_0x4C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x4C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7118
	  li        r4, 0x20F
	  addi      r5, r5, 0x712C
	  crclr     6, 0x6
	  bl        -0x3B8FDC

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3630
 * Size:	000064
 */
void ebi::CardError::FSMState_Q05_GameCantSave::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stb       r0, 0x10(r3)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x40
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7118
	  li        r4, 0x219
	  addi      r5, r5, 0x712C
	  crclr     6, 0x6
	  bl        -0x3B9028
	  b         .loc_0x54

	.loc_0x40:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x54
	  mr        r3, r4
	  li        r4, 0x20
	  bl        -0x20D88

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3694
 * Size:	00005C
 */
void ebi::CardError::FSMState_Q05_GameCantSave::do_transitYes(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x38
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7118
	  li        r4, 0x222
	  addi      r5, r5, 0x712C
	  crclr     6, 0x6
	  bl        -0x3B9084
	  b         .loc_0x4C

	.loc_0x38:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x4C
	  lwz       r3, -0x6514(r13)
	  li        r4, 0x1
	  bl        0x3FC98

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E36F0
 * Size:	00005C
 */
void ebi::CardError::FSMState_Q05_GameCantSave::do_transitNo(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x38
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7118
	  li        r4, 0x22B
	  addi      r5, r5, 0x712C
	  crclr     6, 0x6
	  bl        -0x3B90E0
	  b         .loc_0x4C

	.loc_0x38:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x4C
	  mr        r3, r4
	  li        r4, 0x3
	  bl        -0x10330

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E374C
 * Size:	000028
 */
void ebi::CardError::FSMState_WN0_NowFormat::do_cardRequest(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x5F5BC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3774
 * Size:	00004C
 */
void ebi::CardError::FSMState_WN0_NowFormat::do_open((ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0xA
	  bl        -0x20E9C
	  b         .loc_0x3C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r4
	  li        r4, 0x1D
	  bl        -0x20EB4

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E37C0
 * Size:	000034
 */
void ebi::CardError::FSMState_WN0_NowFormat::do_transitCardReady(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0xA
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E37F4
 * Size:	000034
 */
void ebi::CardError::FSMState_WN0_NowFormat::do_transitCardNoCard(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0xD
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3828
 * Size:	000034
 */
void ebi::CardError::FSMState_WN0_NowFormat::do_transitCardIOError(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0xE
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E385C
 * Size:	00004C
 */
void ebi::CardError::FSMState_WN1_NowCreateNewFile::do_open(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2A4(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x12
	  bl        -0x20F84
	  b         .loc_0x3C

	.loc_0x28:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3C
	  mr        r3, r4
	  li        r4, 0x24
	  bl        -0x20F9C

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E38A8
 * Size:	000028
 */
void ebi::CardError::FSMState_WN1_NowCreateNewFile::do_cardRequest(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x5F5B4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E38D0
 * Size:	000034
 */
void ebi::CardError::FSMState_WN1_NowCreateNewFile::do_transitCardReady(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0xB
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3904
 * Size:	000034
 */
void ebi::CardError::FSMState_WN1_NowCreateNewFile::do_transitCardNoCard(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0xF
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E3938
 * Size:	000034
 */
void ebi::CardError::FSMState_WN1_NowCreateNewFile::do_transitCardIOError(
    (ebi::CardError::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x10
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
