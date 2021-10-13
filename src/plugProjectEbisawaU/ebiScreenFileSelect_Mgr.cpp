

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
 * Address:	803DE2C0
 * Size:	0005B0
 */
void ebi::FS::FSMStateMachine::init((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  addi      r30, r4, 0x6F18
	  li        r4, 0xF
	  bl        0x2E78
	  li        r3, 0x10
	  bl        -0x3BA448
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r5, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r5, 0x69C0
	  li        r5, 0
	  stw       r0, 0x0(r4)
	  subi      r3, r3, 0x69E8
	  addi      r0, r2, 0x1898
	  stw       r5, 0x4(r4)
	  stw       r5, 0x8(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        0x2F34
	  li        r3, 0x10
	  bl        -0x3BA48C
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  subi      r6, r5, 0x69E8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x18
	  subi      r0, r3, 0x6C80
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        0x2EE0
	  li        r3, 0x18
	  bl        -0x3BA4E0
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  subi      r6, r5, 0x69E8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x24
	  subi      r0, r3, 0x6CD0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        0x2E8C
	  li        r3, 0x10
	  bl        -0x3BA534
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  subi      r6, r5, 0x69E8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x30
	  subi      r0, r3, 0x6CF8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        0x2E38
	  li        r3, 0x1C
	  bl        -0x3BA588
	  mr.       r4, r3
	  beq-      .loc_0x1BC
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  subi      r6, r5, 0x69E8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x3C
	  subi      r0, r3, 0x6CA8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)
	  stw       r7, 0x14(r4)
	  stw       r7, 0x18(r4)

	.loc_0x1BC:
	  mr        r3, r31
	  bl        0x2DDC
	  li        r3, 0x24
	  bl        -0x3BA5E4
	  mr.       r4, r3
	  beq-      .loc_0x21C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x5
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x69E8
	  addi      r6, r30, 0x48
	  subi      r5, r5, 0x6A18
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6A48
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x21C:
	  mr        r3, r31
	  bl        0x2D7C
	  li        r3, 0x18
	  bl        -0x3BA644
	  mr.       r4, r3
	  beq-      .loc_0x27C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x6
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x69E8
	  addi      r6, r30, 0x54
	  subi      r5, r5, 0x6BD8
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6C18
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x27C:
	  mr        r3, r31
	  bl        0x2D1C
	  li        r3, 0x24
	  bl        -0x3BA6A4
	  mr.       r4, r3
	  beq-      .loc_0x2DC
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x7
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x69E8
	  addi      r6, r30, 0x60
	  subi      r5, r5, 0x6A18
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6A78
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2DC:
	  mr        r3, r31
	  bl        0x2CBC
	  li        r3, 0x18
	  bl        -0x3BA704
	  mr.       r4, r3
	  beq-      .loc_0x330
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  subi      r6, r5, 0x69E8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x6C
	  subi      r0, r3, 0x6D20
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x330:
	  mr        r3, r31
	  bl        0x2C68
	  li        r3, 0x1C
	  bl        -0x3BA758
	  mr.       r4, r3
	  beq-      .loc_0x398
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  lis       r3, 0x804F
	  li        r8, 0
	  stw       r0, 0x4(r4)
	  subi      r7, r6, 0x69E8
	  addi      r6, r30, 0x84
	  subi      r5, r5, 0x6AD8
	  stw       r8, 0x8(r4)
	  subi      r0, r3, 0x6B08
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r8, 0x14(r4)
	  stw       r8, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x398:
	  mr        r3, r31
	  bl        0x2C00
	  li        r3, 0x1C
	  bl        -0x3BA7C0
	  mr.       r4, r3
	  beq-      .loc_0x400
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  lis       r3, 0x804F
	  li        r8, 0
	  stw       r0, 0x4(r4)
	  subi      r7, r6, 0x69E8
	  addi      r6, r30, 0x94
	  subi      r5, r5, 0x6AD8
	  stw       r8, 0x8(r4)
	  subi      r0, r3, 0x6B38
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r8, 0x14(r4)
	  stw       r8, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x400:
	  mr        r3, r31
	  bl        0x2B98
	  li        r3, 0x24
	  bl        -0x3BA828
	  mr.       r4, r3
	  beq-      .loc_0x460
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0xB
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x69E8
	  addi      r6, r30, 0xA4
	  subi      r5, r5, 0x6A18
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6AA8
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x460:
	  mr        r3, r31
	  bl        0x2B38
	  li        r3, 0x1C
	  bl        -0x3BA888
	  mr.       r4, r3
	  beq-      .loc_0x4C8
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0xC
	  lis       r3, 0x804F
	  li        r8, 0
	  stw       r0, 0x4(r4)
	  subi      r7, r6, 0x69E8
	  addi      r6, r30, 0xB4
	  subi      r5, r5, 0x6AD8
	  stw       r8, 0x8(r4)
	  subi      r0, r3, 0x6B68
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r8, 0x14(r4)
	  stw       r8, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x4C8:
	  mr        r3, r31
	  bl        0x2AD0
	  li        r3, 0x18
	  bl        -0x3BA8F0
	  mr.       r4, r3
	  beq-      .loc_0x528
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0xD
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x69E8
	  addi      r6, r2, 0x18A0
	  subi      r5, r5, 0x6BD8
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6C58
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x528:
	  mr        r3, r31
	  bl        0x2A70
	  li        r3, 0x1C
	  bl        -0x3BA950
	  mr.       r4, r3
	  beq-      .loc_0x590
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x69C0
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0xE
	  lis       r3, 0x804F
	  li        r8, 0
	  stw       r0, 0x4(r4)
	  subi      r7, r6, 0x69E8
	  addi      r6, r30, 0xC0
	  subi      r5, r5, 0x6AD8
	  stw       r8, 0x8(r4)
	  subi      r0, r3, 0x6B98
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r8, 0x14(r4)
	  stw       r8, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x590:
	  mr        r3, r31
	  bl        0x2A08
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
 * Address:	803DE870
 * Size:	00002C
 */
void ebi::FS::FSMState::init((ebi::FS::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	803DE89C
 * Size:	00002C
 */
void ebi::FS::FSMState::exec((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
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
 * Address:	803DE8C8
 * Size:	000070
 */
void ebi::FS::FSMState_SelectYesNo::do_init((ebi::FS::TMgr*, Game::StateArg*))
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
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r30)
	  mr        r3, r31
	  bl        -0x66D4
	  mr        r3, r31
	  bl        -0x60D4
	  lbz       r4, 0x10(r30)
	  mr        r3, r31
	  bl        -0x63C0
	  li        r0, 0
	  stb       r0, 0x21(r30)
	  stb       r0, 0x20(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DE938
 * Size:	000204
 */
void ebi::FS::FSMState_SelectYesNo::do_exec((ebi::FS::TMgr*))
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
	  lbz       r0, 0x21(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x148
	  lwz       r3, 0xC00(r31)
	  lwz       r0, 0x18(r3)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x48
	  lfs       f1, 0x4C(r3)
	  lfs       f0, 0x18A8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x50

	.loc_0x48:
	  li        r0, 0x1
	  b         .loc_0x54

	.loc_0x50:
	  li        r0, 0

	.loc_0x54:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x90
	  lbz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  mr        r3, r31
	  li        r4, 0x1
	  bl        -0x6458
	  li        r0, 0x1
	  li        r4, 0x1802
	  stb       r0, 0x10(r30)
	  li        r5, 0
	  lwz       r3, -0x67A8(r13)
	  bl        -0xA6390
	  b         .loc_0xF0

	.loc_0x90:
	  lwz       r0, 0x18(r3)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0xAC
	  lfs       f1, 0x4C(r3)
	  lfs       f0, 0x18AC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB4

	.loc_0xAC:
	  li        r0, 0x1
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r0, 0

	.loc_0xB8:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xF0
	  lbz       r0, 0x10(r30)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xF0
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x64BC
	  li        r0, 0
	  li        r4, 0x1802
	  stb       r0, 0x10(r30)
	  li        r5, 0
	  lwz       r3, -0x67A8(r13)
	  bl        -0xA63F4

	.loc_0xF0:
	  lwz       r3, 0xC00(r31)
	  lwz       r3, 0x1C(r3)
	  rlwinm.   r0,r3,0,23,23
	  beq-      .loc_0x11C
	  li        r0, 0x1
	  li        r4, 0x1800
	  stb       r0, 0x21(r30)
	  li        r5, 0
	  lwz       r3, -0x67A8(r13)
	  bl        -0xA641C
	  b         .loc_0x174

	.loc_0x11C:
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x174
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x10(r30)
	  li        r4, 0x1801
	  li        r5, 0
	  stb       r0, 0x21(r30)
	  lwz       r3, -0x67A8(r13)
	  bl        -0xA6448
	  b         .loc_0x174

	.loc_0x148:
	  lbz       r0, 0x20(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x174
	  li        r0, 0x1
	  stb       r0, 0x20(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x65E0

	.loc_0x174:
	  mr        r3, r31
	  bl        -0x6588
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1EC
	  lbz       r0, 0x21(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1EC
	  lbz       r0, 0x20(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1EC
	  lbz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1CC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x18(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1EC

	.loc_0x1CC:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x1C(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1EC:
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
 * Address:	803DEB3C
 * Size:	000060
 */
void ebi::FS::FSMState01_DataBroken::do_set((ebi::FS::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  li        r5, 0x6
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r0, 0x14(r3)
	  li        r0, 0x4
	  stb       r6, 0x10(r3)
	  stw       r5, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  mr        r3, r31
	  lwz       r4, 0xC30(r4)
	  bl        -0x5D94
	  lwz       r4, 0xC30(r31)
	  mr        r3, r31
	  bl        -0x6D70
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DEB9C
 * Size:	000024
 */
void ebi::FS::FSMState03_DoYouDelete::do_set((ebi::FS::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  li        r0, 0x3
	  li        r5, 0
	  stw       r0, 0x14(r3)
	  li        r4, 0x6
	  li        r0, 0x4
	  stb       r5, 0x10(r3)
	  stw       r4, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DEBC0
 * Size:	000024
 */
void ebi::FS::FSMState03_DoYouDelete::do_decide((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x6AA4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DEBE4
 * Size:	000024
 */
void ebi::FS::FSMState07_DoYouOverwrite::do_set((ebi::FS::TMgr*,
                                                 Game::StateArg*))
{
	/*
	.loc_0x0:
	  li        r0, 0x7
	  li        r5, 0
	  stw       r0, 0x14(r3)
	  li        r4, 0xD
	  li        r0, 0x4
	  stb       r5, 0x10(r3)
	  stw       r4, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DEC08
 * Size:	000038
 */
void ebi::FS::FSMState07_DoYouOverwrite::do_decide((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x7224
	  mr        r3, r31
	  bl        -0x6AFC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DEC40
 * Size:	000060
 */
void ebi::FS::FSMState_Warning::do_init((ebi::FS::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lfs       f1, 0x18B0(r2)
	  stb       r0, 0x11(r31)
	  stb       r0, 0x10(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x31D134
	  stw       r3, 0x14(r31)
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
 * Address:	803DECA0
 * Size:	0000C4
 */
void ebi::FS::FSMState_Warning::do_exec((ebi::FS::TMgr*))
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
	  lwz       r3, 0x14(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  subi      r0, r3, 0x1
	  stw       r0, 0x14(r30)

	.loc_0x30:
	  lbz       r0, 0x11(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x14(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x78
	  mr        r3, r31
	  bl        -0x6824
	  li        r0, 0x1
	  stb       r0, 0x11(r30)
	  b         .loc_0x78

	.loc_0x5C:
	  lbz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x78
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x10(r30)
	  bl        -0x684C

	.loc_0x78:
	  mr        r3, r31
	  bl        -0x67F4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xAC
	  lbz       r0, 0x11(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xAC:
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
 * Address:	803DED64
 * Size:	000028
 */
void ebi::FS::FSMState05_FailToDelete::do_open((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x5
	  stw       r0, 0x14(r1)
	  bl        -0x6B50
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DED8C
 * Size:	000044
 */
void ebi::FS::FSMState05_FailToDelete::do_transit((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0xC3C(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x1
	  bl        0x156C
	  b         .loc_0x34

	.loc_0x28:
	  mr        r3, r4
	  li        r4, 0x2
	  bl        0x155C

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DEDD0
 * Size:	000028
 */
void ebi::FS::FSMState06_FinishDelete::do_open((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x6
	  stw       r0, 0x14(r1)
	  bl        -0x6BBC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DEDF8
 * Size:	000034
 */
void ebi::FS::FSMState06_FinishDelete::do_transit((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
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
 * Address:	803DEE2C
 * Size:	000028
 */
void ebi::FS::FSMState08_FailToCopy::do_open((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x8
	  stw       r0, 0x14(r1)
	  bl        -0x6C18
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DEE54
 * Size:	000044
 */
void ebi::FS::FSMState08_FailToCopy::do_transit((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0xC3C(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x28
	  mr        r3, r4
	  li        r4, 0x1
	  bl        0x14A4
	  b         .loc_0x34

	.loc_0x28:
	  mr        r3, r4
	  li        r4, 0x2
	  bl        0x1494

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DEE98
 * Size:	000028
 */
void ebi::FS::FSMState10_FinishCopy::do_open((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0xA
	  stw       r0, 0x14(r1)
	  bl        -0x6C84
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DEEC0
 * Size:	000034
 */
void ebi::FS::FSMState10_FinishCopy::do_transit((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
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
 * Address:	803DEEF4
 * Size:	00006C
 */
void ebi::FS::FSMState_CardTask::init((ebi::FS::TMgr*, Game::StateArg*))
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
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x18B0(r2)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x31D3E4
	  stw       r3, 0xBF8(r31)
	  li        r0, 0
	  stw       r3, 0xBFC(r31)
	  stw       r0, 0x14(r30)
	  stb       r0, 0xC3C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DEF60
 * Size:	0002C0
 */
void ebi::FS::FSMState_CardTask::exec((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  lwz       r5, -0x6514(r13)
	  lwz       r3, 0x5C(r5)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x48
	  bl        0x62024
	  cmplwi    r3, 0xB
	  beq-      .loc_0x48
	  li        r29, 0x1

	.loc_0x48:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x6C
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x66B54
	  cmpwi     r3, 0
	  bne-      .loc_0x6C
	  li        r0, 0x1
	  b         .loc_0x70

	.loc_0x6C:
	  li        r0, 0

	.loc_0x70:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x90
	  li        r3, 0
	  li        r0, 0x3
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  stw       r0, 0x14(r30)
	  bl        -0x6B24

	.loc_0x90:
	  lwz       r0, 0x14(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x18C
	  bge-      .loc_0xB0
	  cmpwi     r0, 0
	  beq-      .loc_0xBC
	  bge-      .loc_0x134
	  b         .loc_0x2A4

	.loc_0xB0:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x2A4
	  b         .loc_0x1C4

	.loc_0xBC:
	  lwz       r3, -0x6514(r13)
	  li        r29, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xE4
	  bl        0x61F88
	  cmplwi    r3, 0xB
	  beq-      .loc_0xE4
	  li        r29, 0x1

	.loc_0xE4:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x2A4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x128
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6FE4
	  li        r4, 0x131
	  addi      r5, r5, 0x7000
	  crclr     6, 0x6
	  bl        -0x3B4A44

	.loc_0x128:
	  li        r0, 0x1
	  stw       r0, 0x14(r30)
	  b         .loc_0x2A4

	.loc_0x134:
	  lwz       r3, -0x6514(r13)
	  li        r31, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x15C
	  bl        0x61F10
	  cmplwi    r3, 0xB
	  beq-      .loc_0x15C
	  li        r31, 0x1

	.loc_0x15C:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x2A4
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x66A40
	  stw       r3, 0x10(r30)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x66A30
	  li        r0, 0x2
	  stw       r0, 0x14(r30)
	  b         .loc_0x2A4

	.loc_0x18C:
	  lwz       r0, 0xBF8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x2A4
	  mr        r3, r31
	  bl        -0x6C34
	  li        r0, 0x3
	  mr        r3, r30
	  stw       r0, 0x14(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2A4

	.loc_0x1C4:
	  mr        r3, r31
	  bl        -0x6C00
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A4
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x1F0
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x180D
	  li        r5, 0
	  bl        -0xA6B1C

	.loc_0x1F0:
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x218
	  bge-      .loc_0x20C
	  cmpwi     r0, 0
	  beq-      .loc_0x260
	  b         .loc_0x284

	.loc_0x20C:
	  cmpwi     r0, 0xD
	  beq-      .loc_0x23C
	  b         .loc_0x284

	.loc_0x218:
	  li        r0, 0x1
	  mr        r3, r30
	  stb       r0, 0xC3C(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2A4

	.loc_0x23C:
	  li        r0, 0x1
	  mr        r3, r30
	  stb       r0, 0xC3C(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2A4

	.loc_0x260:
	  li        r0, 0
	  mr        r3, r30
	  stb       r0, 0xC3C(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2A4

	.loc_0x284:
	  li        r0, 0x1
	  mr        r3, r30
	  stb       r0, 0xC3C(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2A4:
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
 * Address:	803DF220
 * Size:	000034
 */
void
    ebi::FS::FSMState_CardTask::do_transitCardPlayerDataBroken((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x5
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
 * Address:	803DF254
 * Size:	000040
 */
void ebi::FS::FSMState02_NowDelete::do_init((ebi::FS::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x2
	  mr        r3, r31
	  bl        -0x7048
	  lwz       r4, 0xC30(r31)
	  mr        r3, r31
	  bl        -0x75D8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DF294
 * Size:	000024
 */
void ebi::FS::FSMState02_NowDelete::do_close((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x74E8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DF2B8
 * Size:	00002C
 */
void ebi::FS::FSMState02_NowDelete::do_cardRequest((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0xC30(r4)
	  lwz       r3, 0x5C(r3)
	  bl        0x640E0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DF2E4
 * Size:	000060
 */
void ebi::FS::FSMState02_NowDelete::do_transitCardReady((ebi::FS::TMgr*))
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
	  mr        r3, r31
	  lwz       r4, 0xC30(r4)
	  bl        -0x6774
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xA
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	803DF344
 * Size:	000034
 */
void ebi::FS::FSMState02_NowDelete::do_transitCardNoCard((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x9
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
 * Address:	803DF378
 * Size:	000034
 */
void ebi::FS::FSMState02_NowDelete::do_transitCardIOError((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x9
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
 * Address:	803DF3AC
 * Size:	000024
 */
void ebi::FS::FSMState02_NowDelete::cleanup((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x7600
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DF3D0
 * Size:	000044
 */
void ebi::FS::FSMState09_NowCopy::do_init((ebi::FS::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x9
	  mr        r3, r31
	  bl        -0x71C4
	  lwz       r4, 0xC30(r31)
	  mr        r3, r31
	  lwz       r5, 0xC34(r31)
	  bl        -0x7990
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DF414
 * Size:	000024
 */
void ebi::FS::FSMState09_NowCopy::do_close((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x77D8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DF438
 * Size:	000034
 */
void ebi::FS::FSMState09_NowCopy::do_cardRequest((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0xC30(r4)
	  lwz       r3, 0x5C(r3)
	  lwz       r5, 0xC34(r5)
	  bl        0x6407C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DF46C
 * Size:	000064
 */
void ebi::FS::FSMState09_NowCopy::do_transitCardReady((ebi::FS::TMgr*))
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
	  mr        r3, r31
	  lwz       r4, 0xC30(r4)
	  lwz       r5, 0xC34(r31)
	  bl        -0x6AC0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xE
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	803DF4D0
 * Size:	000034
 */
void ebi::FS::FSMState09_NowCopy::do_transitCardNoCard((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0xC
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
 * Address:	803DF504
 * Size:	000034
 */
void ebi::FS::FSMState09_NowCopy::do_transitCardIOError((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0xC
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
 * Address:	803DF538
 * Size:	000024
 */
void ebi::FS::FSMState09_NowCopy::cleanup((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x78FC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DF55C
 * Size:	00004C
 */
void ebi::FS::FSMState00a_OpenScene::do_init((ebi::FS::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0xC30(r31)
	  stw       r0, 0xC38(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DF5A8
 * Size:	000064
 */
void ebi::FS::FSMState00a_OpenScene::do_exec((ebi::FS::TMgr*))
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
	  mr        r3, r31
	  bl        -0xBC30
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

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
 * Address:	803DF60C
 * Size:	0000AC
 */
void ebi::FS::FSMState00_SelectData::do_init((ebi::FS::TMgr*, Game::StateArg*))
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
	  mr        r3, r31
	  lwz       r4, 0xC30(r4)
	  bl        -0x81A4
	  lwz       r4, 0xC30(r31)
	  mr        r3, r31
	  bl        -0x7828
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x7420
	  lwz       r0, 0xC30(r31)
	  mulli     r3, r0, 0x34
	  addi      r3, r3, 0xB00
	  add       r3, r31, r3
	  lbz       r0, 0x1(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x70

	.loc_0x68:
	  mr        r3, r31
	  bl        -0x6ED4

	.loc_0x70:
	  li        r0, 0
	  lfs       f1, 0x18A8(r2)
	  stb       r0, 0x10(r30)
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x31DB48
	  stw       r3, 0x14(r30)
	  stw       r3, 0x18(r30)
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
 * Address:	803DF6B8
 * Size:	000254
 */
void ebi::FS::FSMState00_SelectData::do_exec((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0xBD3C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x218
	  lwz       r3, 0x14(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  subi      r0, r3, 0x1
	  stw       r0, 0x14(r30)

	.loc_0x3C:
	  lwz       r28, 0xC00(r31)
	  addi      r3, r31, 0xC04
	  lwz       r27, 0xC30(r31)
	  bl        -0x1DC64
	  lwz       r0, 0xC30(r31)
	  li        r29, 0x1
	  mulli     r3, r0, 0x34
	  addi      r3, r3, 0xB00
	  add       r3, r31, r3
	  lbz       r0, 0x1(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x7C
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x7C
	  li        r29, 0

	.loc_0x7C:
	  lwz       r0, 0xC30(r31)
	  cmpw      r27, r0
	  beq-      .loc_0xDC
	  mr        r3, r31
	  mr        r4, r27
	  bl        -0x810C
	  mr        r3, r31
	  bl        -0x7624
	  lwz       r4, 0xC30(r31)
	  mr        r3, r31
	  bl        -0x82D0
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0xBC
	  mr        r3, r31
	  bl        -0x6FC8
	  b         .loc_0xC4

	.loc_0xBC:
	  mr        r3, r31
	  bl        -0x6F48

	.loc_0xC4:
	  li        r0, 0x1
	  li        r4, 0x1802
	  stb       r0, 0x10(r30)
	  li        r5, 0
	  lwz       r3, -0x67A8(r13)
	  bl        -0xA7160

	.loc_0xDC:
	  mr        r3, r31
	  bl        -0x7594
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x10C
	  lbz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x10C
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x10(r30)
	  lwz       r4, 0xC30(r31)
	  bl        -0x79AC

	.loc_0x10C:
	  lwz       r0, 0x14(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x218
	  lwz       r3, 0x1C(r28)
	  rlwinm.   r0,r3,0,23,23
	  beq-      .loc_0x158
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1800
	  li        r5, 0
	  bl        -0xA71D8
	  b         .loc_0x218

	.loc_0x158:
	  rlwinm.   r0,r3,0,20,20
	  beq-      .loc_0x1A4
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x218
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x7718
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1800
	  li        r5, 0
	  bl        -0xA7224
	  b         .loc_0x218

	.loc_0x1A4:
	  rlwinm.   r0,r3,0,21,21
	  beq-      .loc_0x1E8
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x218
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1800
	  li        r5, 0
	  bl        -0xA7268
	  b         .loc_0x218

	.loc_0x1E8:
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x218
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1801
	  li        r5, 0
	  bl        -0xA729C

	.loc_0x218:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x240
	  mr        r3, r31
	  li        r4, 0x5
	  bl        0xA24

	.loc_0x240:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DF90C
 * Size:	000064
 */
void ebi::FS::FSMState00b_CheckData::do_init((ebi::FS::TMgr*, Game::StateArg*))
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
	  mr        r3, r31
	  bl        -0x7464
	  mr        r3, r31
	  bl        -0x7104
	  lwz       r4, 0xC30(r31)
	  mr        r3, r31
	  bl        -0x8304
	  lwz       r4, 0xC30(r31)
	  mr        r3, r31
	  bl        -0x81C8
	  li        r0, 0
	  stw       r0, 0x10(r30)
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
 * Address:	803DF970
 * Size:	0001E0
 */
void ebi::FS::FSMState00b_CheckData::do_exec((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xB8
	  bge-      .loc_0x3C
	  cmpwi     r0, 0
	  bge-      .loc_0x48
	  b         .loc_0x1C4

	.loc_0x3C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x1C4
	  b         .loc_0x104

	.loc_0x48:
	  lwz       r3, -0x6514(r13)
	  li        r30, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x70
	  bl        0x615EC
	  cmplwi    r3, 0xB
	  beq-      .loc_0x70
	  li        r30, 0x1

	.loc_0x70:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x1C4
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0xC30(r29)
	  lwz       r3, 0x5C(r3)
	  bl        0x63898
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xAC
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6FE4
	  li        r4, 0x271
	  addi      r5, r5, 0x7000
	  crclr     6, 0x6
	  bl        -0x3B53D8

	.loc_0xAC:
	  li        r0, 0x1
	  stw       r0, 0x10(r31)
	  b         .loc_0x1C4

	.loc_0xB8:
	  lwz       r3, -0x6514(r13)
	  li        r30, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xE0
	  bl        0x6157C
	  cmplwi    r3, 0xB
	  beq-      .loc_0xE0
	  li        r30, 0x1

	.loc_0xE0:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x1C4
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x660AC
	  stw       r3, 0x14(r31)
	  li        r0, 0x2
	  stw       r0, 0x10(r31)
	  b         .loc_0x1C4

	.loc_0x104:
	  mr        r3, r29
	  bl        -0x7550
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C4
	  lwz       r4, 0xC30(r29)
	  mr        r3, r29
	  bl        -0x81E4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C4
	  lwz       r0, 0x14(r31)
	  cmpwi     r0, 0xD
	  beq-      .loc_0x168
	  bge-      .loc_0x198
	  cmpwi     r0, 0x2
	  beq-      .loc_0x144
	  b         .loc_0x198

	.loc_0x144:
	  mr        r3, r31
	  mr        r4, r29
	  lwz       r12, 0x0(r31)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C4

	.loc_0x168:
	  lwz       r4, 0xC30(r29)
	  mr        r3, r29
	  bl        -0x8654
	  mr        r3, r31
	  mr        r4, r29
	  lwz       r12, 0x0(r31)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C4

	.loc_0x198:
	  lwz       r4, 0xC30(r29)
	  mr        r3, r29
	  bl        -0x8684
	  mr        r3, r31
	  mr        r4, r29
	  lwz       r12, 0x0(r31)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1C4:
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
 * Address:	803DFB50
 * Size:	00003C
 */
void ebi::FS::FSMState00c_DecideData::do_init((ebi::FS::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0xC30(r4)
	  bl        -0x848C
	  mr        r3, r31
	  bl        -0x79DC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DFB8C
 * Size:	0000B4
 */
void ebi::FS::FSMState00c_DecideData::do_exec((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0xC20C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  lwz       r4, 0xC30(r31)
	  mr        r3, r31
	  bl        -0x82E0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA0
	  lwz       r0, 0xC30(r31)
	  mulli     r3, r0, 0x34
	  addi      r0, r3, 0xB01
	  lbzx      r0, r31, r0
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  mr        r3, r31
	  li        r4, 0x4
	  bl        0x700
	  b         .loc_0xA0

	.loc_0x94:
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x6F0

	.loc_0xA0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DFC40
 * Size:	0000B0
 */
void ebi::FS::FSMState04_WhichDataDoYouCopyTo::do_init((ebi::FS::TMgr*,
                                                        Game::StateArg*))
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
	  mr        r3, r31
	  lwz       r4, 0xC30(r4)
	  bl        -0x835C
	  mr        r3, r31
	  li        r4, 0x4
	  bl        -0x7A48
	  mr        r3, r31
	  bl        -0x7448
	  lwz       r0, 0xC30(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x70
	  bge-      .loc_0x58
	  cmpwi     r0, 0
	  bge-      .loc_0x64
	  b         .loc_0x84

	.loc_0x58:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x84
	  b         .loc_0x7C

	.loc_0x64:
	  li        r0, 0x1
	  stw       r0, 0xC34(r31)
	  b         .loc_0x84

	.loc_0x70:
	  li        r0, 0
	  stw       r0, 0xC34(r31)
	  b         .loc_0x84

	.loc_0x7C:
	  li        r0, 0
	  stw       r0, 0xC34(r31)

	.loc_0x84:
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, 0x14(r30)
	  stb       r3, 0x10(r30)
	  stb       r0, 0x11(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DFCF0
 * Size:	00029C
 */
void ebi::FS::FSMState04_WhichDataDoYouCopyTo::do_exec((ebi::FS::TMgr*))
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
	  mr        r29, r3
	  lwz       r0, 0x14(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x220
	  bge-      .loc_0x280
	  cmpwi     r0, 0
	  bge-      .loc_0x3C
	  b         .loc_0x280

	.loc_0x3C:
	  lwz       r3, 0xC00(r30)
	  lwz       r31, 0xC34(r30)
	  lwz       r0, 0x18(r3)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x60
	  lfs       f1, 0x48(r3)
	  lfs       f0, 0x18A8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x68

	.loc_0x60:
	  li        r0, 0x1
	  b         .loc_0x6C

	.loc_0x68:
	  li        r0, 0

	.loc_0x6C:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xC8
	  mr        r3, r30
	  bl        -0x830C
	  lwz       r0, 0xC30(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xB0
	  bge-      .loc_0x98
	  cmpwi     r0, 0
	  bge-      .loc_0xA4
	  b         .loc_0x148

	.loc_0x98:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x148
	  b         .loc_0xBC

	.loc_0xA4:
	  li        r0, 0x2
	  stw       r0, 0xC34(r30)
	  b         .loc_0x148

	.loc_0xB0:
	  li        r0, 0x2
	  stw       r0, 0xC34(r30)
	  b         .loc_0x148

	.loc_0xBC:
	  li        r0, 0x1
	  stw       r0, 0xC34(r30)
	  b         .loc_0x148

	.loc_0xC8:
	  lwz       r0, 0x18(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0xE4
	  lfs       f1, 0x48(r3)
	  lfs       f0, 0x18AC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xEC

	.loc_0xE4:
	  li        r0, 0x1
	  b         .loc_0xF0

	.loc_0xEC:
	  li        r0, 0

	.loc_0xF0:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x148
	  mr        r3, r30
	  bl        -0x83A0
	  lwz       r0, 0xC30(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x134
	  bge-      .loc_0x11C
	  cmpwi     r0, 0
	  bge-      .loc_0x128
	  b         .loc_0x148

	.loc_0x11C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x148
	  b         .loc_0x140

	.loc_0x128:
	  li        r0, 0x1
	  stw       r0, 0xC34(r30)
	  b         .loc_0x148

	.loc_0x134:
	  li        r0, 0
	  stw       r0, 0xC34(r30)
	  b         .loc_0x148

	.loc_0x140:
	  li        r0, 0
	  stw       r0, 0xC34(r30)

	.loc_0x148:
	  lwz       r0, 0xC34(r30)
	  cmpw      r31, r0
	  beq-      .loc_0x174
	  mr        r3, r30
	  bl        -0x7D1C
	  li        r0, 0x1
	  li        r4, 0x1802
	  stb       r0, 0x11(r29)
	  li        r5, 0
	  lwz       r3, -0x67A8(r13)
	  bl        -0xA7830

	.loc_0x174:
	  mr        r3, r30
	  bl        -0x7C64
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A4
	  lbz       r0, 0x11(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x1A4
	  li        r0, 0
	  mr        r3, r30
	  stb       r0, 0x11(r29)
	  lwz       r4, 0xC34(r30)
	  bl        -0x807C

	.loc_0x1A4:
	  lwz       r3, 0xC00(r30)
	  lwz       r3, 0x1C(r3)
	  rlwinm.   r0,r3,0,23,23
	  beq-      .loc_0x1E0
	  mr        r3, r30
	  bl        -0x79E0
	  li        r3, 0x1
	  li        r0, 0
	  stw       r3, 0x14(r29)
	  li        r4, 0x1800
	  li        r5, 0
	  stb       r0, 0x10(r29)
	  lwz       r3, -0x67A8(r13)
	  bl        -0xA7898
	  b         .loc_0x280

	.loc_0x1E0:
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x280
	  mr        r3, r30
	  bl        -0x7A14
	  mr        r3, r30
	  bl        -0x84E8
	  li        r0, 0x1
	  mr        r3, r30
	  stw       r0, 0x14(r29)
	  stb       r0, 0x10(r29)
	  bl        -0x7DCC
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1801
	  li        r5, 0
	  bl        -0xA78D8
	  b         .loc_0x280

	.loc_0x220:
	  mr        r3, r30
	  bl        -0x79EC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x280
	  lbz       r0, 0x10(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x260
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x280

	.loc_0x260:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0xB
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x280:
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
 * Address:	803DFF8C
 * Size:	0000A4
 */
void ebi::FS::TMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0xBB08
	  li        r7, 0
	  lis       r4, 0x804F
	  stw       r7, 0xBF8(r31)
	  lis       r3, 0x804F
	  subi      r6, r4, 0x6D38
	  li        r5, -0x1
	  stw       r7, 0xBFC(r31)
	  subi      r0, r3, 0x69A0
	  addi      r3, r31, 0xC40
	  mr        r4, r31
	  stw       r7, 0xC08(r31)
	  stw       r7, 0xC0C(r31)
	  stw       r6, 0xC40(r31)
	  stw       r5, 0xC58(r31)
	  stw       r0, 0xC40(r31)
	  lwz       r12, 0xC40(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0xC40
	  mr        r4, r31
	  lwz       r12, 0xC40(r31)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0xC30(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E0030
 * Size:	000048
 */
void ebi::FS::TMgr::setController((Controller*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x18B4(r2)
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r7, r5, 0xC30
	  fmr       f2, f1
	  li        r6, 0x2
	  stw       r4, 0xC00(r3)
	  addi      r3, r5, 0xC04
	  li        r8, 0x1
	  lwz       r4, 0xC00(r5)
	  li        r5, 0
	  bl        -0x1E628
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E0078
 * Size:	0000FC
 */
void ebi::FS::TMgr::perseInfo((Game::MemoryCard::PlayerFileInfo&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r5, 0x8889
	  stw       r0, 0x64(r1)
	  stmw      r14, 0x18(r1)
	  mr        r30, r4
	  li        r31, 0
	  mr        r16, r3
	  subi      r29, r5, 0x7777

	.loc_0x24:
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x62888
	  mr        r28, r3
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x628EC
	  lwz       r15, 0x30(r28)
	  mr        r14, r3
	  lwz       r18, 0x2C(r28)
	  mr        r3, r30
	  mulhwu    r0, r29, r15
	  lwz       r19, 0x28(r28)
	  lwz       r20, 0x24(r28)
	  mr        r4, r31
	  lwz       r21, 0x20(r28)
	  lwz       r22, 0x18(r28)
	  rlwinm    r0,r0,27,5,31
	  lwz       r23, 0x1C(r28)
	  mulli     r0, r0, 0x3C
	  lwz       r24, 0x14(r28)
	  lwz       r25, 0xC(r28)
	  lwz       r26, 0x10(r28)
	  lwz       r27, 0x8(r28)
	  sub       r17, r15, r0
	  bl        0x62920
	  stb       r3, 0xB01(r16)
	  mulhwu    r0, r29, r15
	  addi      r4, r1, 0x8
	  stw       r27, 0xB04(r16)
	  stw       r26, 0xB08(r16)
	  stw       r25, 0xB0C(r16)
	  rlwinm    r0,r0,27,5,31
	  stw       r24, 0xB10(r16)
	  stw       r23, 0xB18(r16)
	  stw       r22, 0xB14(r16)
	  stw       r21, 0xB1C(r16)
	  stw       r20, 0xB20(r16)
	  stw       r19, 0xB24(r16)
	  stw       r18, 0xB28(r16)
	  stw       r0, 0xB2C(r16)
	  stw       r17, 0xB30(r16)
	  stb       r14, 0xB00(r16)
	  lwz       r3, 0x28(r28)
	  bl        -0x1E294
	  addi      r31, r31, 0x1
	  addi      r16, r16, 0x34
	  cmpwi     r31, 0x3
	  blt+      .loc_0x24
	  lmw       r14, 0x18(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E0174
 * Size:	000098
 */
void ebi::FS::TMgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0xC40
	  lwz       r12, 0xC40(r31)
	  mr        r4, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x2A4
	  cmpwi     r3, 0
	  beq-      .loc_0x84
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x1AC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xBF8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  subi      r0, r3, 0x1
	  stw       r0, 0xBF8(r31)

	.loc_0x84:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E020C
 * Size:	000048
 */
void ebi::FS::TMgr::draw(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x228
	  cmpwi     r3, 0
	  beq-      .loc_0x34
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E0254
 * Size:	000044
 */
void ebi::FS::TMgr::startSeq(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  li        r6, 0
	  stb       r0, 0xC3C(r3)
	  addi      r3, r4, 0xC40
	  lwz       r12, 0xC40(r4)
	  lwz       r12, 0x14(r12)
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
 * Address:	803E0298
 * Size:	000058
 */
void ebi::FS::TMgr::forceQuitSeq(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0xC40
	  mr        r4, r31
	  lwz       r12, 0xC40(r31)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E02F0
 * Size:	000028
 */
void ebi::FS::TMgr::isFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x14C
	  cntlzw    r0, r3
	  rlwinm    r3,r0,27,24,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E0318
 * Size:	000060
 */
void ebi::FS::TMgr::goEnd_((ebi::FS::TMgr::enumEnd))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0xC38(r3)
	  addi      r3, r31, 0xC40
	  mr        r4, r31
	  lwz       r12, 0xC40(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E0378
 * Size:	0000D0
 */
void ebi::FS::TMgr::checkAndTransitNoCard_(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r0, 0xC3C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  lwz       r3, -0x6514(r13)
	  li        r31, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x4C
	  bl        0x60C08
	  cmplwi    r3, 0xB
	  beq-      .loc_0x4C
	  li        r31, 0x1

	.loc_0x4C:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x70
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x65738
	  cmpwi     r3, 0
	  bne-      .loc_0x70
	  li        r0, 0x1
	  b         .loc_0x74

	.loc_0x70:
	  li        r0, 0

	.loc_0x74:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xB8
	  li        r0, 0x1
	  addi      r3, r30, 0xC40
	  stw       r0, 0xC38(r30)
	  mr        r4, r30
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0xC40(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB8:
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
 * Address:	803E0448
 * Size:	000058
 */
void ebi::FS::TMgr::getStateID(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC5C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6FE4
	  li        r4, 0x3DC
	  addi      r5, r5, 0x7000
	  crclr     6, 0x6
	  bl        -0x3B5E40

	.loc_0x3C:
	  lwz       r3, 0xC5C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x4(r3)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E04A0
 * Size:	000004
 */
void ebi::FS::FSMState::do_init((ebi::FS::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E04A4
 * Size:	000004
 */
void ebi::FS::FSMState::do_exec((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E04A8
 * Size:	000004
 */
void ebi::FS::FSMState_SelectYesNo::do_decide((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E04AC
 * Size:	000004
 */
void ebi::FS::FSMState_CardTask::do_init((ebi::FS::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E04B0
 * Size:	000004
 */
void ebi::FS::FSMState_CardTask::do_close((ebi::FS::TMgr*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E04B4
 * Size:	000030
 */
void transit__Q24Game24FSMState<ebi::FS::TMgr>
FPQ33ebi2FS4TMgriPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	803E04E4
 * Size:	000034
 */
void start__Q24Game28StateMachine<ebi::FS::TMgr>
FPQ33ebi2FS4TMgriPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0xC5C(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	803E0518
 * Size:	000BF4
 */
void ebi::Screen::FileSelect::TMainScreen::__dt(void)
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
	  beq-      .loc_0xBD8
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xAB0
	  subi      r0, r3, 0x7274
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xAB0
	  subi      r3, r3, 0x71B0
	  stw       r3, 0xAB0(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0xAB8(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0xAB8
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0xAB0(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0xAB8(r30)
	  bl        -0x3508E8

	.loc_0x70:
	  addic.    r0, r30, 0xA9C
	  beq-      .loc_0xB4
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xA9C
	  subi      r3, r3, 0x7178
	  stw       r3, 0xA9C(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0xAA4(r30)
	  beq-      .loc_0xB4
	  lis       r4, 0x804E
	  addi      r3, r30, 0xAA4
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0xA9C(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0xAA4(r30)
	  bl        -0x35092C

	.loc_0xB4:
	  addic.    r0, r30, 0xA70
	  beq-      .loc_0x114
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xA70
	  subi      r3, r3, 0x7140
	  stw       r3, 0xA70(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0xA78(r30)
	  beq-      .loc_0x114
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xA70
	  addi      r3, r3, 0x7560
	  stw       r3, 0xA70(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0xA78(r30)
	  beq-      .loc_0x114
	  lis       r4, 0x804E
	  addi      r3, r30, 0xA78
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0xA70(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0xA78(r30)
	  bl        -0x35098C

	.loc_0x114:
	  addic.    r0, r30, 0xA5C
	  beq-      .loc_0x174
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xA5C
	  subi      r3, r3, 0x7108
	  stw       r3, 0xA5C(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0xA64(r30)
	  beq-      .loc_0x174
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xA5C
	  addi      r3, r3, 0x7560
	  stw       r3, 0xA5C(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0xA64(r30)
	  beq-      .loc_0x174
	  lis       r4, 0x804E
	  addi      r3, r30, 0xA64
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0xA5C(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0xA64(r30)
	  bl        -0x3509EC

	.loc_0x174:
	  addic.    r0, r30, 0xA24
	  beq-      .loc_0x1DC
	  addic.    r0, r30, 0xA24
	  beq-      .loc_0x1DC
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xA24
	  addi      r3, r3, 0x7648
	  stw       r3, 0xA24(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0xA2C(r30)
	  beq-      .loc_0x1DC
	  lis       r3, 0x804E
	  addic.    r0, r30, 0xA24
	  addi      r3, r3, 0x73CC
	  stw       r3, 0xA24(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0xA2C(r30)
	  beq-      .loc_0x1DC
	  lis       r4, 0x804E
	  addi      r3, r30, 0xA2C
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0xA24(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0xA2C(r30)
	  bl        -0x350A54

	.loc_0x1DC:
	  addic.    r0, r30, 0x9EC
	  beq-      .loc_0x244
	  addic.    r0, r30, 0x9EC
	  beq-      .loc_0x244
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x9EC
	  addi      r3, r3, 0x7648
	  stw       r3, 0x9EC(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0x9F4(r30)
	  beq-      .loc_0x244
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x9EC
	  addi      r3, r3, 0x73CC
	  stw       r3, 0x9EC(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0x9F4(r30)
	  beq-      .loc_0x244
	  lis       r4, 0x804E
	  addi      r3, r30, 0x9F4
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0x9EC(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0x9F4(r30)
	  bl        -0x350ABC

	.loc_0x244:
	  lis       r4, 0x803D
	  addi      r3, r30, 0x954
	  subi      r4, r4, 0x81C
	  li        r5, 0x40
	  li        r6, 0x2
	  bl        -0x31EFAC
	  addic.    r0, r30, 0x908
	  beq-      .loc_0x2B8
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x908
	  subi      r0, r3, 0x75AC
	  stw       r0, 0x908(r30)
	  beq-      .loc_0x2B8
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x908
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x908(r30)
	  beq-      .loc_0x2B8
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x908
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x908(r30)
	  beq-      .loc_0x2B8
	  lis       r4, 0x804D
	  addi      r3, r30, 0x908
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x908(r30)
	  bl        0x30DBC

	.loc_0x2B8:
	  addic.    r0, r30, 0x8BC
	  beq-      .loc_0x314
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x8BC
	  subi      r0, r3, 0x75AC
	  stw       r0, 0x8BC(r30)
	  beq-      .loc_0x314
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x8BC
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x8BC(r30)
	  beq-      .loc_0x314
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x8BC
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x8BC(r30)
	  beq-      .loc_0x314
	  lis       r4, 0x804D
	  addi      r3, r30, 0x8BC
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x8BC(r30)
	  bl        0x30D60

	.loc_0x314:
	  addic.    r0, r30, 0x89C
	  beq-      .loc_0x370
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x89C
	  subi      r0, r3, 0x77F4
	  stw       r0, 0x89C(r30)
	  beq-      .loc_0x370
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x89C
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x89C(r30)
	  beq-      .loc_0x370
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x89C
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x89C(r30)
	  beq-      .loc_0x370
	  lis       r4, 0x804D
	  addi      r3, r30, 0x89C
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x89C(r30)
	  bl        0x30D04

	.loc_0x370:
	  addic.    r0, r30, 0x860
	  beq-      .loc_0x3E0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x880
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x860(r30)
	  beq-      .loc_0x398
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x880(r30)

	.loc_0x398:
	  addic.    r0, r30, 0x860
	  beq-      .loc_0x3E0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x860
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x860(r30)
	  beq-      .loc_0x3E0
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x860
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x860(r30)
	  beq-      .loc_0x3E0
	  lis       r4, 0x804D
	  addi      r3, r30, 0x860
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x860(r30)
	  bl        0x30C94

	.loc_0x3E0:
	  addic.    r0, r30, 0x824
	  beq-      .loc_0x450
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x844
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x824(r30)
	  beq-      .loc_0x408
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x844(r30)

	.loc_0x408:
	  addic.    r0, r30, 0x824
	  beq-      .loc_0x450
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x824
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x824(r30)
	  beq-      .loc_0x450
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x824
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x824(r30)
	  beq-      .loc_0x450
	  lis       r4, 0x804D
	  addi      r3, r30, 0x824
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x824(r30)
	  bl        0x30C24

	.loc_0x450:
	  addic.    r0, r30, 0x7E8
	  beq-      .loc_0x4C0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x808
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x7E8(r30)
	  beq-      .loc_0x478
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x808(r30)

	.loc_0x478:
	  addic.    r0, r30, 0x7E8
	  beq-      .loc_0x4C0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x7E8
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x7E8(r30)
	  beq-      .loc_0x4C0
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x7E8
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x7E8(r30)
	  beq-      .loc_0x4C0
	  lis       r4, 0x804D
	  addi      r3, r30, 0x7E8
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x7E8(r30)
	  bl        0x30BB4

	.loc_0x4C0:
	  addic.    r0, r30, 0x7AC
	  beq-      .loc_0x530
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x7CC
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x7AC(r30)
	  beq-      .loc_0x4E8
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x7CC(r30)

	.loc_0x4E8:
	  addic.    r0, r30, 0x7AC
	  beq-      .loc_0x530
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x7AC
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x7AC(r30)
	  beq-      .loc_0x530
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x7AC
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x7AC(r30)
	  beq-      .loc_0x530
	  lis       r4, 0x804D
	  addi      r3, r30, 0x7AC
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x7AC(r30)
	  bl        0x30B44

	.loc_0x530:
	  addic.    r0, r30, 0x770
	  beq-      .loc_0x5A0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x790
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x770(r30)
	  beq-      .loc_0x558
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x790(r30)

	.loc_0x558:
	  addic.    r0, r30, 0x770
	  beq-      .loc_0x5A0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x770
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x770(r30)
	  beq-      .loc_0x5A0
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x770
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x770(r30)
	  beq-      .loc_0x5A0
	  lis       r4, 0x804D
	  addi      r3, r30, 0x770
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x770(r30)
	  bl        0x30AD4

	.loc_0x5A0:
	  addic.    r0, r30, 0x734
	  beq-      .loc_0x610
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x754
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x734(r30)
	  beq-      .loc_0x5C8
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x754(r30)

	.loc_0x5C8:
	  addic.    r0, r30, 0x734
	  beq-      .loc_0x610
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x734
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x734(r30)
	  beq-      .loc_0x610
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x734
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x734(r30)
	  beq-      .loc_0x610
	  lis       r4, 0x804D
	  addi      r3, r30, 0x734
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x734(r30)
	  bl        0x30A64

	.loc_0x610:
	  addic.    r0, r30, 0x6F8
	  beq-      .loc_0x680
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x718
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x6F8(r30)
	  beq-      .loc_0x638
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x718(r30)

	.loc_0x638:
	  addic.    r0, r30, 0x6F8
	  beq-      .loc_0x680
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x6F8
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x6F8(r30)
	  beq-      .loc_0x680
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x6F8
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x6F8(r30)
	  beq-      .loc_0x680
	  lis       r4, 0x804D
	  addi      r3, r30, 0x6F8
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x6F8(r30)
	  bl        0x309F4

	.loc_0x680:
	  addic.    r0, r30, 0x6BC
	  beq-      .loc_0x6F0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x6DC
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x6BC(r30)
	  beq-      .loc_0x6A8
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x6DC(r30)

	.loc_0x6A8:
	  addic.    r0, r30, 0x6BC
	  beq-      .loc_0x6F0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x6BC
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x6BC(r30)
	  beq-      .loc_0x6F0
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x6BC
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x6BC(r30)
	  beq-      .loc_0x6F0
	  lis       r4, 0x804D
	  addi      r3, r30, 0x6BC
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x6BC(r30)
	  bl        0x30984

	.loc_0x6F0:
	  addic.    r0, r30, 0x680
	  beq-      .loc_0x760
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x6A0
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x680(r30)
	  beq-      .loc_0x718
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x6A0(r30)

	.loc_0x718:
	  addic.    r0, r30, 0x680
	  beq-      .loc_0x760
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x680
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x680(r30)
	  beq-      .loc_0x760
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x680
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x680(r30)
	  beq-      .loc_0x760
	  lis       r4, 0x804D
	  addi      r3, r30, 0x680
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x680(r30)
	  bl        0x30914

	.loc_0x760:
	  addic.    r0, r30, 0x644
	  beq-      .loc_0x7D0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x664
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x644(r30)
	  beq-      .loc_0x788
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x664(r30)

	.loc_0x788:
	  addic.    r0, r30, 0x644
	  beq-      .loc_0x7D0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x644
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x644(r30)
	  beq-      .loc_0x7D0
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x644
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x644(r30)
	  beq-      .loc_0x7D0
	  lis       r4, 0x804D
	  addi      r3, r30, 0x644
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x644(r30)
	  bl        0x308A4

	.loc_0x7D0:
	  addic.    r0, r30, 0x608
	  beq-      .loc_0x840
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x628
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x608(r30)
	  beq-      .loc_0x7F8
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x628(r30)

	.loc_0x7F8:
	  addic.    r0, r30, 0x608
	  beq-      .loc_0x840
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x608
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x608(r30)
	  beq-      .loc_0x840
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x608
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x608(r30)
	  beq-      .loc_0x840
	  lis       r4, 0x804D
	  addi      r3, r30, 0x608
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x608(r30)
	  bl        0x30834

	.loc_0x840:
	  addic.    r0, r30, 0x5CC
	  beq-      .loc_0x8B0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x5EC
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x5CC(r30)
	  beq-      .loc_0x868
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x5EC(r30)

	.loc_0x868:
	  addic.    r0, r30, 0x5CC
	  beq-      .loc_0x8B0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x5CC
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x5CC(r30)
	  beq-      .loc_0x8B0
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x5CC
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x5CC(r30)
	  beq-      .loc_0x8B0
	  lis       r4, 0x804D
	  addi      r3, r30, 0x5CC
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x5CC(r30)
	  bl        0x307C4

	.loc_0x8B0:
	  lis       r4, 0x803D
	  addi      r3, r30, 0x518
	  subi      r4, r4, 0x6C
	  li        r5, 0x3C
	  li        r6, 0x3
	  bl        -0x31F618
	  lis       r4, 0x803D
	  addi      r3, r30, 0x464
	  subi      r4, r4, 0x6C
	  li        r5, 0x3C
	  li        r6, 0x3
	  bl        -0x31F630
	  lis       r4, 0x803D
	  addi      r3, r30, 0x3B0
	  subi      r4, r4, 0x6C
	  li        r5, 0x3C
	  li        r6, 0x3
	  bl        -0x31F648
	  addic.    r0, r30, 0x374
	  beq-      .loc_0x968
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x394
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x374(r30)
	  beq-      .loc_0x920
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x394(r30)

	.loc_0x920:
	  addic.    r0, r30, 0x374
	  beq-      .loc_0x968
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x374
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x374(r30)
	  beq-      .loc_0x968
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x374
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x374(r30)
	  beq-      .loc_0x968
	  lis       r4, 0x804D
	  addi      r3, r30, 0x374
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x374(r30)
	  bl        0x3070C

	.loc_0x968:
	  addic.    r0, r30, 0x338
	  beq-      .loc_0x9D8
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x358
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x338(r30)
	  beq-      .loc_0x990
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x358(r30)

	.loc_0x990:
	  addic.    r0, r30, 0x338
	  beq-      .loc_0x9D8
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x338
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x338(r30)
	  beq-      .loc_0x9D8
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x338
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x338(r30)
	  beq-      .loc_0x9D8
	  lis       r4, 0x804D
	  addi      r3, r30, 0x338
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x338(r30)
	  bl        0x3069C

	.loc_0x9D8:
	  addic.    r0, r30, 0x2FC
	  beq-      .loc_0xA48
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x31C
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x2FC(r30)
	  beq-      .loc_0xA00
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x31C(r30)

	.loc_0xA00:
	  addic.    r0, r30, 0x2FC
	  beq-      .loc_0xA48
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x2FC
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x2FC(r30)
	  beq-      .loc_0xA48
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x2FC
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x2FC(r30)
	  beq-      .loc_0xA48
	  lis       r4, 0x804D
	  addi      r3, r30, 0x2FC
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x2FC(r30)
	  bl        0x3062C

	.loc_0xA48:
	  addic.    r0, r30, 0x2C0
	  beq-      .loc_0xAB8
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x2E0
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x2C0(r30)
	  beq-      .loc_0xA70
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x2E0(r30)

	.loc_0xA70:
	  addic.    r0, r30, 0x2C0
	  beq-      .loc_0xAB8
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x2C0
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x2C0(r30)
	  beq-      .loc_0xAB8
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x2C0
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x2C0(r30)
	  beq-      .loc_0xAB8
	  lis       r4, 0x804D
	  addi      r3, r30, 0x2C0
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x2C0(r30)
	  bl        0x305BC

	.loc_0xAB8:
	  lis       r4, 0x803D
	  addi      r3, r30, 0x20C
	  subi      r4, r4, 0x6C
	  li        r5, 0x3C
	  li        r6, 0x3
	  bl        -0x31F820
	  lis       r4, 0x803D
	  addi      r3, r30, 0x158
	  subi      r4, r4, 0x6C
	  li        r5, 0x3C
	  li        r6, 0x3
	  bl        -0x31F838
	  addic.    r0, r30, 0x11C
	  beq-      .loc_0xB58
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x13C
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x11C(r30)
	  beq-      .loc_0xB10
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x13C(r30)

	.loc_0xB10:
	  addic.    r0, r30, 0x11C
	  beq-      .loc_0xB58
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x11C
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x11C(r30)
	  beq-      .loc_0xB58
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x11C
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x11C(r30)
	  beq-      .loc_0xB58
	  lis       r4, 0x804D
	  addi      r3, r30, 0x11C
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x11C(r30)
	  bl        0x3051C

	.loc_0xB58:
	  addic.    r0, r30, 0xE0
	  beq-      .loc_0xBC8
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x100
	  subi      r0, r3, 0x75F4
	  stw       r0, 0xE0(r30)
	  beq-      .loc_0xB80
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x100(r30)

	.loc_0xB80:
	  addic.    r0, r30, 0xE0
	  beq-      .loc_0xBC8
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xE0
	  subi      r0, r3, 0x77D0
	  stw       r0, 0xE0(r30)
	  beq-      .loc_0xBC8
	  lis       r3, 0x804D
	  addic.    r0, r30, 0xE0
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0xE0(r30)
	  beq-      .loc_0xBC8
	  lis       r4, 0x804D
	  addi      r3, r30, 0xE0
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0xE0(r30)
	  bl        0x304AC

	.loc_0xBC8:
	  extsh.    r0, r31
	  ble-      .loc_0xBD8
	  mr        r3, r30
	  bl        -0x3BD038

	.loc_0xBD8:
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
 * Address:	803E110C
 * Size:	000004
 */
void init__Q24Game24FSMState<ebi::FS::TMgr>
FPQ33ebi2FS4TMgrPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E1110
 * Size:	000004
 */
void exec__Q24Game24FSMState<ebi::FS::TMgr> FPQ33ebi2FS4TMgr(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E1114
 * Size:	000004
 */
void cleanup__Q24Game24FSMState<ebi::FS::TMgr> FPQ33ebi2FS4TMgr(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E1118
 * Size:	000004
 */
void resume__Q24Game24FSMState<ebi::FS::TMgr> FPQ33ebi2FS4TMgr(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E111C
 * Size:	000004
 */
void restart__Q24Game24FSMState<ebi::FS::TMgr> FPQ33ebi2FS4TMgr(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E1120
 * Size:	000004
 */
void init__Q24Game28StateMachine<ebi::FS::TMgr> FPQ33ebi2FS4TMgr(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E1124
 * Size:	000038
 */
void exec__Q24Game28StateMachine<ebi::FS::TMgr> FPQ33ebi2FS4TMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0xC5C(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E115C
 * Size:	000064
 */
void create__Q24Game28StateMachine<ebi::FS::TMgr> Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0xC(r3)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3BD1D8
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3BD1E8
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3BD1F8
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E11C0
 * Size:	00009C
 */
void transit__Q24Game28StateMachine<ebi::FS::TMgr>
FPQ33ebi2FS4TMgriPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0xC5C(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0xC5C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E125C
 * Size:	000084
 */
void registerState__Q24Game28StateMachine<ebi::FS::TMgr>
FPQ24Game24FSMState<ebi::FS::TMgr>(void)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}
