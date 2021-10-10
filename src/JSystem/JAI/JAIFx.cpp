

/*
 * --INFO--
 * Address:	800AD6CC
 * Size:	000160
 */
void JAInter::Fx::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r0, -0x7460(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x144
	  lwz       r4, -0x7494(r13)
	  li        r3, 0x10
	  li        r5, 0x4
	  bl        -0x896B4
	  stw       r3, -0x7458(r13)
	  li        r3, 0x10
	  lwz       r4, -0x7494(r13)
	  li        r5, 0x4
	  bl        -0x896C8
	  stw       r3, -0x7454(r13)
	  lwz       r31, -0x7460(r13)
	  lwz       r0, 0x0(r31)
	  rlwinm    r3,r0,0,24,31
	  bl        .loc_0x160
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x8(r31)
	  lwz       r5, 0xC(r31)
	  lwz       r6, 0x10(r31)
	  bl        0xFC
	  lwz       r30, -0x7494(r13)
	  bl        0x140
	  rlwinm    r3,r3,2,22,29
	  mr        r4, r30
	  li        r5, 0x20
	  bl        -0x89708
	  bl        0x104
	  li        r30, 0
	  b         .loc_0xB4

	.loc_0x94:
	  rlwinm    r3,r30,2,22,29
	  lwz       r4, -0x7460(r13)
	  addi      r0, r3, 0x14
	  lwzx      r0, r31, r0
	  mr        r3, r30
	  add       r4, r4, r0
	  bl        0xF8
	  addi      r30, r30, 0x1

	.loc_0xB4:
	  bl        0x100
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r0,r30,0,24,31
	  cmplw     r0, r3
	  blt+      .loc_0x94
	  li        r29, 0
	  b         .loc_0x138

	.loc_0xD0:
	  mr        r3, r29
	  bl        0xE8
	  cmplwi    r3, 0
	  beq-      .loc_0x134
	  lwz       r30, -0x7494(r13)
	  mr        r3, r29
	  bl        0xD4
	  mulli     r0, r3, 0xA0
	  mr        r4, r30
	  li        r5, 0x20
	  rlwinm    r3,r0,0,0,30
	  bl        -0x89780
	  mr        r0, r3
	  mr        r3, r29
	  mr        r4, r0
	  bl        0x88
	  bl        0xCC
	  lwz       r30, 0x0(r3)
	  mr        r3, r29
	  rlwinm    r31,r29,5,19,26
	  bl        0xAC
	  mr        r4, r3
	  mr        r3, r29
	  add       r5, r30, r31
	  bl        -0x8318

	.loc_0x134:
	  addi      r29, r29, 0x1

	.loc_0x138:
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0xD0

	.loc_0x144:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x160:
	*/
}

/*
 * --INFO--
 * Address:	800AD82C
 * Size:	000008
 */
void JAInter::Fx::setSceneMax((unsigned char))
{
	/*
	.loc_0x0:
	  stb       r3, -0x745C(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AD834
 * Size:	000024
 */
void JAInter::Fx::setBufferMax((unsigned long, unsigned long, unsigned long,
                                unsigned long))
{
	/*
	.loc_0x0:
	  lwz       r7, -0x7458(r13)
	  stw       r3, 0x0(r7)
	  lwz       r3, -0x7458(r13)
	  stw       r4, 0x4(r3)
	  lwz       r3, -0x7458(r13)
	  stw       r5, 0x8(r3)
	  lwz       r3, -0x7458(r13)
	  stw       r6, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AD858
 * Size:	000008
 */
void JAInter::Fx::setTablePointer((void**))
{
	/*
	.loc_0x0:
	  stw       r3, -0x7450(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AD860
 * Size:	000010
 */
void JAInter::Fx::setBufferPointer((unsigned char, short*))
{
	/*
	.loc_0x0:
	  lwz       r5, -0x7454(r13)
	  rlwinm    r0,r3,2,22,29
	  stwx      r4, r5, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AD870
 * Size:	000010
 */
void JAInter::Fx::setScenePointer((unsigned char, void*))
{
	/*
	.loc_0x0:
	  lwz       r5, -0x7450(r13)
	  rlwinm    r0,r3,2,22,29
	  stwx      r4, r5, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AD880
 * Size:	000008
 */
void JAInter::Fx::getSceneMax(void)
{
	/*
	.loc_0x0:
	  lbz       r3, -0x745C(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AD888
 * Size:	000010
 */
void JAInter::Fx::getBufferSizeMax((unsigned char))
{
	/*
	.loc_0x0:
	  lwz       r4, -0x7458(r13)
	  rlwinm    r0,r3,2,22,29
	  lwzx      r3, r4, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AD898
 * Size:	000010
 */
void JAInter::Fx::getBufferPointer((unsigned char))
{
	/*
	.loc_0x0:
	  lwz       r4, -0x7454(r13)
	  rlwinm    r0,r3,2,22,29
	  lwzx      r3, r4, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AD8A8
 * Size:	000008
 */
void JAInter::Fx::getFxconfigTable(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7450(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JAInter::Fx::clearBuffer((unsigned char))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD8B0
 * Size:	0000A0
 */
void JAInter::Fx::clearAllBuffer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  b         .loc_0x80

	.loc_0x18:
	  lwz       r0, -0x7454(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x7C
	  li        r5, 0
	  rlwinm    r7,r31,2,22,29
	  mr        r6, r5
	  mr        r4, r5
	  b         .loc_0x4C

	.loc_0x38:
	  lwz       r0, -0x7454(r13)
	  addi      r5, r5, 0x1
	  lwzx      r3, r7, r0
	  sthx      r4, r3, r6
	  addi      r6, r6, 0x2

	.loc_0x4C:
	  lwz       r3, -0x7458(r13)
	  lwzx      r0, r7, r3
	  mulli     r0, r0, 0xA0
	  rlwinm    r0,r0,31,1,31
	  cmplw     r5, r0
	  blt+      .loc_0x38
	  lwzx      r0, r3, r7
	  lwz       r3, -0x7454(r13)
	  mulli     r0, r0, 0xA0
	  lwzx      r3, r3, r7
	  rlwinm    r4,r0,31,1,31
	  bl        0x3EDF0

	.loc_0x7C:
	  addi      r31, r31, 0x1

	.loc_0x80:
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x18
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
