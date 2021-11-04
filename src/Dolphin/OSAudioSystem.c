

/*
 * --INFO--
 * Address:	800EC444
 * Size:	0001BC
 */
void __OSInitAudioSystem(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r25, 0x14(r1)
	  bl        -0x30
	  lis       r4, 0x8100
	  li        r5, 0x80
	  subi      r3, r3, 0x80
	  bl        -0xE72C8
	  lis       r3, 0x804B
	  subi      r4, r3, 0x74F8
	  lis       r3, 0x8100
	  li        r5, 0x80
	  bl        -0xE72DC
	  lis       r3, 0x8100
	  li        r4, 0x80
	  bl        0x294
	  lis       r3, 0xCC00
	  addi      r3, r3, 0x5000
	  li        r0, 0x43
	  sth       r0, 0x12(r3)
	  addi      r31, r3, 0xA
	  li        r0, 0x8AC
	  sth       r0, 0xA(r3)
	  lhz       r0, 0xA(r3)
	  ori       r0, r0, 0x1
	  sth       r0, 0xA(r3)

	.loc_0x6C:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,31,31
	  bne+      .loc_0x6C
	  li        r0, 0
	  lis       r4, 0xCC00
	  sth       r0, 0x5000(r4)

	.loc_0x84:
	  addi      r30, r4, 0x5000
	  lhzu      r3, 0x4(r30)
	  addi      r29, r4, 0x5000
	  lhzu      r0, 0x6(r29)
	  rlwimi    r0,r3,16,0,15
	  rlwinm.   r0,r0,0,0,0
	  bne+      .loc_0x84
	  lis       r3, 0xCC00
	  lis       r0, 0x100
	  addi      r27, r3, 0x5000
	  stwu      r0, 0x20(r27)
	  li        r0, 0
	  addi      r26, r3, 0x5000
	  stwu      r0, 0x24(r26)
	  li        r0, 0x20
	  addi      r25, r3, 0x5000
	  stwu      r0, 0x28(r25)
	  lhz       r3, 0x0(r31)
	  b         .loc_0xD4

	.loc_0xD0:
	  lhz       r3, 0x0(r31)

	.loc_0xD4:
	  rlwinm.   r0,r3,0,26,26
	  beq+      .loc_0xD0
	  sth       r3, 0x0(r31)
	  bl        0x6684
	  mr        r28, r3

	.loc_0xE8:
	  bl        0x667C
	  sub       r0, r3, r28
	  cmpwi     r0, 0x892
	  blt+      .loc_0xE8
	  lis       r0, 0x100
	  stw       r0, 0x0(r27)
	  li        r3, 0
	  li        r0, 0x20
	  stw       r3, 0x0(r26)
	  stw       r0, 0x0(r25)
	  lhz       r3, 0x0(r31)
	  b         .loc_0x11C

	.loc_0x118:
	  lhz       r3, 0x0(r31)

	.loc_0x11C:
	  rlwinm.   r0,r3,0,26,26
	  beq+      .loc_0x118
	  sth       r3, 0x0(r31)
	  lhz       r0, 0x0(r31)
	  rlwinm    r0,r0,0,21,19
	  sth       r0, 0x0(r31)

	.loc_0x134:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,21,21
	  bne+      .loc_0x134
	  lhz       r0, 0x0(r31)
	  rlwinm    r0,r0,0,30,28
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r30)
	  b         .loc_0x158

	.loc_0x154:
	  lhz       r0, 0x0(r30)

	.loc_0x158:
	  rlwinm    r5,r0,0,16,31
	  rlwinm.   r0,r0,0,16,16
	  beq+      .loc_0x154
	  lhz       r0, 0x0(r31)
	  lhz       r4, 0x0(r29)
	  ori       r0, r0, 0x4
	  sth       r0, 0x0(r31)
	  li        r0, 0x8AC
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r31)
	  ori       r0, r0, 0x1
	  sth       r0, 0x0(r31)

	.loc_0x188:
	  lhz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,31,31
	  bne+      .loc_0x188
	  bl        -0x1B4
	  subi      r4, r3, 0x80
	  lis       r3, 0x8100
	  li        r5, 0x80
	  bl        -0xE744C
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC600
 * Size:	0000D8
 */
void __OSStopAudioSystem(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0xCC00
	  stw       r0, 0x4(r1)
	  li        r0, 0x804
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x5000
	  addi      r3, r3, 0x5000
	  stw       r30, 0x8(r1)
	  sth       r0, 0xA(r31)
	  lhz       r0, 0x36(r3)
	  rlwinm    r0,r0,0,17,15
	  sth       r0, 0x36(r3)
	  lhzu      r0, 0xA(r31)
	  b         .loc_0x40

	.loc_0x3C:
	  lhz       r0, 0x0(r31)

	.loc_0x40:
	  rlwinm.   r0,r0,0,21,21
	  bne+      .loc_0x3C
	  lhz       r0, 0x0(r31)
	  b         .loc_0x54

	.loc_0x50:
	  lhz       r0, 0x0(r31)

	.loc_0x54:
	  rlwinm.   r0,r0,0,22,22
	  bne+      .loc_0x50
	  li        r0, 0x8AC
	  lis       r3, 0xCC00
	  sth       r0, 0x0(r31)
	  li        r0, 0
	  sth       r0, 0x5000(r3)
	  addi      r4, r3, 0x5000

	.loc_0x74:
	  lhz       r3, 0x4(r4)
	  lhz       r0, 0x6(r4)
	  rlwimi    r0,r3,16,0,15
	  rlwinm.   r0,r0,0,0,0
	  bne+      .loc_0x74
	  bl        0x6520
	  mr        r30, r3

	.loc_0x90:
	  bl        0x6518
	  sub       r0, r3, r30
	  cmpwi     r0, 0x2C
	  blt+      .loc_0x90
	  lhz       r0, 0x0(r31)
	  ori       r0, r0, 0x1
	  sth       r0, 0x0(r31)
	  lhz       r0, 0x0(r31)
	  b         .loc_0xB8

	.loc_0xB4:
	  lhz       r0, 0x0(r31)

	.loc_0xB8:
	  rlwinm.   r0,r0,0,31,31
	  bne+      .loc_0xB4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}
