

/*
 * --INFO--
 * Address:	800C2B1C
 * Size:	001080
 */
void __dec2num(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1F0(r1)
	  mflr      r0
	  stw       r0, 0x1F4(r1)
	  lbz       r0, 0x4(r3)
	  stw       r31, 0x1EC(r1)
	  cmplwi    r0, 0
	  stw       r30, 0x1E8(r1)
	  stw       r29, 0x1E4(r1)
	  bne-      .loc_0x48
	  lbz       r0, 0x0(r3)
	  lfd       f1, -0x72C8(r2)
	  extsb.    r0, r0
	  bne-      .loc_0x3C
	  lfd       f2, -0x72C0(r2)
	  b         .loc_0x40

	.loc_0x3C:
	  lfd       f2, -0x72B8(r2)

	.loc_0x40:
	  bl        0xC730
	  b         .loc_0x1064

	.loc_0x48:
	  lbz       r0, 0x5(r3)
	  cmpwi     r0, 0x49
	  beq-      .loc_0x94
	  bge-      .loc_0x64
	  cmpwi     r0, 0x30
	  beq-      .loc_0x70
	  b         .loc_0x1E4

	.loc_0x64:
	  cmpwi     r0, 0x4E
	  beq-      .loc_0xBC
	  b         .loc_0x1E4

	.loc_0x70:
	  lbz       r0, 0x0(r3)
	  lfd       f1, -0x72C8(r2)
	  extsb.    r0, r0
	  bne-      .loc_0x88
	  lfd       f2, -0x72C0(r2)
	  b         .loc_0x8C

	.loc_0x88:
	  lfd       f2, -0x72B8(r2)

	.loc_0x8C:
	  bl        0xC6E4
	  b         .loc_0x1064

	.loc_0x94:
	  lbz       r0, 0x0(r3)
	  lis       r3, 0x8051
	  lfs       f1, 0x48B4(r3)
	  extsb.    r0, r0
	  bne-      .loc_0xB0
	  lfd       f2, -0x72C0(r2)
	  b         .loc_0xB4

	.loc_0xB0:
	  lfd       f2, -0x72B8(r2)

	.loc_0xB4:
	  bl        0xC6BC
	  b         .loc_0x1064

	.loc_0xBC:
	  lbz       r0, 0x0(r3)
	  li        r5, 0
	  lis       r4, 0x7FF0
	  stw       r5, 0x3C(r1)
	  extsb.    r0, r0
	  stw       r4, 0x38(r1)
	  beq-      .loc_0xE8
	  lis       r0, 0x8000
	  stw       r5, 0x3C(r1)
	  or        r0, r4, r0
	  stw       r0, 0x38(r1)

	.loc_0xE8:
	  lbz       r0, 0x4(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x108
	  lwz       r3, 0x38(r1)
	  lis       r0, 0x8
	  or        r0, r3, r0
	  stw       r0, 0x38(r1)
	  b         .loc_0x1DC

	.loc_0x108:
	  cmpwi     r0, 0xE
	  mr        r6, r0
	  addi      r7, r1, 0x39
	  li        r8, 0
	  li        r9, 0x1
	  ble-      .loc_0x124
	  li        r6, 0xE

	.loc_0x124:
	  lis       r4, 0x804A
	  subi      r0, r6, 0x1
	  addi      r5, r4, 0x6BF0
	  li        r10, 0x1
	  mtctr     r0
	  cmpwi     r6, 0x1
	  ble-      .loc_0x1C4

	.loc_0x140:
	  addi      r0, r10, 0x5
	  lbzx      r6, r3, r0
	  lbzx      r0, r5, r6
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x15C
	  subi      r4, r6, 0x30
	  b         .loc_0x180

	.loc_0x15C:
	  cmpwi     r6, -0x1
	  bne-      .loc_0x16C
	  li        r4, -0x1
	  b         .loc_0x178

	.loc_0x16C:
	  lis       r4, 0x804A
	  addi      r4, r4, 0x6CF0
	  lbzx      r4, r4, r6

	.loc_0x178:
	  subi      r0, r4, 0x57
	  rlwinm    r4,r0,0,24,31

	.loc_0x180:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x18C
	  li        r8, 0x1

	.loc_0x18C:
	  cmpwi     r9, 0
	  beq-      .loc_0x1A8
	  lbz       r0, 0x0(r7)
	  or        r0, r0, r4
	  stb       r0, 0x0(r7)
	  addi      r7, r7, 0x1
	  b         .loc_0x1B0

	.loc_0x1A8:
	  rlwinm    r0,r4,4,24,27
	  stb       r0, 0x0(r7)

	.loc_0x1B0:
	  cntlzw    r0, r9
	  addi      r10, r10, 0x1
	  rlwinm    r0,r0,27,5,31
	  mr        r9, r0
	  bdnz+     .loc_0x140

	.loc_0x1C4:
	  cmpwi     r8, 0
	  bne-      .loc_0x1DC
	  lwz       r3, 0x38(r1)
	  lis       r0, 0x8
	  or        r0, r3, r0
	  stw       r0, 0x38(r1)

	.loc_0x1DC:
	  lfd       f1, 0x38(r1)
	  b         .loc_0x1064

	.loc_0x1E4:
	  lwz       r0, 0x4(r3)
	  addi      r30, r1, 0x1A5
	  lwz       r29, 0x0(r3)
	  mr        r31, r30
	  stw       r0, 0x1A4(r1)
	  lwz       r12, 0x8(r3)
	  lbz       r0, 0x1A4(r1)
	  lwz       r11, 0xC(r3)
	  add       r0, r30, r0
	  lwz       r10, 0x10(r3)
	  lwz       r9, 0x14(r3)
	  cmplw     r30, r0
	  lwz       r8, 0x18(r3)
	  sub       r4, r0, r30
	  lwz       r7, 0x1C(r3)
	  lwz       r6, 0x20(r3)
	  lwz       r5, 0x24(r3)
	  lhz       r3, 0x28(r3)
	  stw       r29, 0x1A0(r1)
	  stw       r12, 0x1A8(r1)
	  stw       r11, 0x1AC(r1)
	  stw       r10, 0x1B0(r1)
	  stw       r9, 0x1B4(r1)
	  stw       r8, 0x1B8(r1)
	  stw       r7, 0x1BC(r1)
	  stw       r6, 0x1C0(r1)
	  stw       r5, 0x1C4(r1)
	  sth       r3, 0x1C8(r1)
	  bge-      .loc_0x2EC
	  rlwinm.   r3,r4,29,3,31
	  mtctr     r3
	  beq-      .loc_0x2D4

	.loc_0x264:
	  lbz       r3, 0x0(r31)
	  subi      r3, r3, 0x30
	  stb       r3, 0x0(r31)
	  lbz       r3, 0x1(r31)
	  subi      r3, r3, 0x30
	  stb       r3, 0x1(r31)
	  lbz       r3, 0x2(r31)
	  subi      r3, r3, 0x30
	  stb       r3, 0x2(r31)
	  lbz       r3, 0x3(r31)
	  subi      r3, r3, 0x30
	  stb       r3, 0x3(r31)
	  lbz       r3, 0x4(r31)
	  subi      r3, r3, 0x30
	  stb       r3, 0x4(r31)
	  lbz       r3, 0x5(r31)
	  subi      r3, r3, 0x30
	  stb       r3, 0x5(r31)
	  lbz       r3, 0x6(r31)
	  subi      r3, r3, 0x30
	  stb       r3, 0x6(r31)
	  lbz       r3, 0x7(r31)
	  subi      r3, r3, 0x30
	  stb       r3, 0x7(r31)
	  addi      r31, r31, 0x8
	  bdnz+     .loc_0x264
	  andi.     r4, r4, 0x7
	  beq-      .loc_0x2EC

	.loc_0x2D4:
	  mtctr     r4

	.loc_0x2D8:
	  lbz       r3, 0x0(r31)
	  subi      r3, r3, 0x30
	  stb       r3, 0x0(r31)
	  addi      r31, r31, 0x1
	  bdnz+     .loc_0x2D8

	.loc_0x2EC:
	  lbz       r4, 0x1A5(r1)
	  lis       r7, 0x4330
	  lis       r3, 0x804A
	  stw       r7, 0x1D0(r1)
	  lfd       f3, -0x72A8(r2)
	  addi      r8, r30, 0x1
	  stw       r4, 0x1D4(r1)
	  addi      r5, r3, 0x6A88
	  lha       r4, 0x1A2(r1)
	  lfd       f0, 0x1D0(r1)
	  lbz       r3, 0x1A4(r1)
	  fsub      f0, f0, f3
	  add       r3, r3, r4
	  subi      r4, r3, 0x1
	  extsh     r3, r4
	  sth       r4, 0x1A2(r1)
	  mr        r31, r3
	  stfd      f0, 0x30(r1)
	  b         .loc_0x43C

	.loc_0x338:
	  sub       r4, r0, r8
	  li        r9, 0
	  rlwinm    r3,r4,29,0,2
	  rlwinm    r4,r4,1,31,31
	  sub       r3, r3, r4
	  rlwinm    r3,r3,3,0,31
	  add.      r10, r3, r4
	  bne-      .loc_0x35C
	  li        r10, 0x8

	.loc_0x35C:
	  cmpwi     r10, 0
	  mr        r4, r10
	  ble-      .loc_0x3FC
	  rlwinm.   r3,r10,29,3,31
	  mtctr     r3
	  beq-      .loc_0x3E4

	.loc_0x374:
	  mulli     r3, r9, 0xA
	  lbz       r6, 0x0(r8)
	  add       r9, r6, r3
	  lbz       r6, 0x1(r8)
	  mulli     r3, r9, 0xA
	  add       r9, r6, r3
	  lbz       r6, 0x2(r8)
	  mulli     r3, r9, 0xA
	  add       r9, r6, r3
	  lbz       r6, 0x3(r8)
	  mulli     r3, r9, 0xA
	  add       r9, r6, r3
	  lbz       r6, 0x4(r8)
	  mulli     r3, r9, 0xA
	  add       r9, r6, r3
	  lbz       r6, 0x5(r8)
	  mulli     r3, r9, 0xA
	  add       r9, r6, r3
	  lbz       r6, 0x6(r8)
	  mulli     r3, r9, 0xA
	  add       r9, r6, r3
	  lbz       r6, 0x7(r8)
	  mulli     r3, r9, 0xA
	  addi      r8, r8, 0x8
	  add       r9, r6, r3
	  bdnz+     .loc_0x374
	  andi.     r4, r4, 0x7
	  beq-      .loc_0x3FC

	.loc_0x3E4:
	  mtctr     r4

	.loc_0x3E8:
	  mulli     r3, r9, 0xA
	  lbz       r6, 0x0(r8)
	  addi      r8, r8, 0x1
	  add       r9, r6, r3
	  bdnz+     .loc_0x3E8

	.loc_0x3FC:
	  rlwinm    r3,r10,3,0,28
	  stw       r9, 0x1D4(r1)
	  add       r3, r5, r3
	  lfd       f2, 0x30(r1)
	  stw       r7, 0x1D0(r1)
	  cmplwi    r9, 0
	  lfd       f1, -0x8(r3)
	  lfd       f0, 0x1D0(r1)
	  fmul      f1, f2, f1
	  fsub      f0, f0, f3
	  fadd      f0, f1, f0
	  beq-      .loc_0x434
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x444

	.loc_0x434:
	  stfd      f0, 0x30(r1)
	  sub       r31, r31, r10

	.loc_0x43C:
	  cmplw     r8, r0
	  blt+      .loc_0x338

	.loc_0x444:
	  cmpwi     r31, 0
	  bge-      .loc_0x480
	  neg       r3, r31
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x1D0(r1)
	  lfd       f2, -0x72A0(r2)
	  stw       r3, 0x1D4(r1)
	  lfd       f1, -0x72B0(r2)
	  lfd       f0, 0x1D0(r1)
	  fsub      f2, f0, f2
	  bl        0xCA80
	  lfd       f0, 0x30(r1)
	  fdiv      f1, f0, f1
	  b         .loc_0x4AC

	.loc_0x480:
	  xoris     r3, r31, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1DC(r1)
	  lfd       f2, -0x72A0(r2)
	  stw       r0, 0x1D8(r1)
	  lfd       f1, -0x72B0(r2)
	  lfd       f0, 0x1D8(r1)
	  fsub      f2, f0, f2
	  bl        0xCA50
	  lfd       f0, 0x30(r1)
	  fmul      f1, f0, f1

	.loc_0x4AC:
	  stfd      f1, 0x30(r1)
	  mr        r3, r31
	  bl        0xC58C
	  stfd      f1, 0x18(r1)
	  lis       r0, 0x7FF0
	  lwz       r4, 0x18(r1)
	  stfd      f1, 0x30(r1)
	  rlwinm    r3,r4,0,1,11
	  cmpw      r3, r0
	  beq-      .loc_0x4E4
	  bge-      .loc_0x52C
	  cmpwi     r3, 0
	  beq-      .loc_0x508
	  b         .loc_0x52C

	.loc_0x4E4:
	  rlwinm.   r0,r4,0,12,31
	  bne-      .loc_0x4F8
	  lwz       r0, 0x1C(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x500

	.loc_0x4F8:
	  li        r0, 0x1
	  b         .loc_0x530

	.loc_0x500:
	  li        r0, 0x2
	  b         .loc_0x530

	.loc_0x508:
	  rlwinm.   r0,r4,0,12,31
	  bne-      .loc_0x51C
	  lwz       r0, 0x1C(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x524

	.loc_0x51C:
	  li        r0, 0x5
	  b         .loc_0x530

	.loc_0x524:
	  li        r0, 0x3
	  b         .loc_0x530

	.loc_0x52C:
	  li        r0, 0x4

	.loc_0x530:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x750
	  li        r5, 0
	  li        r0, 0x134
	  lis       r3, 0x8048
	  stb       r5, 0x174(r1)
	  subi      r6, r3, 0x6038
	  sth       r0, 0x176(r1)
	  addi      r3, r1, 0x174
	  b         .loc_0x570

	.loc_0x558:
	  lbz       r4, 0x0(r6)
	  addi      r0, r5, 0x5
	  addi      r6, r6, 0x1
	  addi      r5, r5, 0x1
	  subi      r4, r4, 0x30
	  stbx      r4, r3, r0

	.loc_0x570:
	  cmpwi     r5, 0x24
	  bge-      .loc_0x584
	  lbz       r0, 0x0(r6)
	  extsb.    r0, r0
	  bne+      .loc_0x558

	.loc_0x584:
	  lbz       r3, 0x0(r6)
	  stb       r5, 0x178(r1)
	  extsb.    r0, r3
	  beq-      .loc_0x630
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x630
	  bgt-      .loc_0x5D8
	  addi      r3, r6, 0x1
	  b         .loc_0x5BC

	.loc_0x5AC:
	  extsb     r0, r4
	  cmpwi     r0, 0x30
	  bne-      .loc_0x5D8
	  addi      r3, r3, 0x1

	.loc_0x5BC:
	  lbz       r4, 0x0(r3)
	  extsb.    r0, r4
	  bne+      .loc_0x5AC
	  addi      r3, r1, 0x178
	  lbzx      r0, r3, r5
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x630

	.loc_0x5D8:
	  lbz       r3, 0x178(r1)
	  addi      r5, r1, 0x179
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x5EC:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x604
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x630

	.loc_0x604:
	  cmplw     r4, r5
	  bne-      .loc_0x624
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x176(r1)
	  addi      r0, r3, 0x1
	  sth       r0, 0x176(r1)
	  b         .loc_0x630

	.loc_0x624:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x5EC

	.loc_0x630:
	  lbz       r0, 0x179(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x658
	  lbz       r0, 0x1A5(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x650
	  li        r0, 0x1
	  b         .loc_0x73C

	.loc_0x650:
	  li        r0, 0
	  b         .loc_0x73C

	.loc_0x658:
	  lbz       r0, 0x1A5(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x66C
	  li        r0, 0
	  b         .loc_0x73C

	.loc_0x66C:
	  lha       r0, 0x176(r1)
	  lha       r4, 0x1A2(r1)
	  cmpw      r0, r4
	  bne-      .loc_0x728
	  lbz       r9, 0x178(r1)
	  lbz       r6, 0x1A4(r1)
	  mr        r0, r9
	  cmpw      r9, r6
	  ble-      .loc_0x694
	  mr        r0, r6

	.loc_0x694:
	  addi      r4, r1, 0x1A0
	  addi      r5, r1, 0x174
	  li        r3, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x6E4

	.loc_0x6AC:
	  lbz       r7, 0x5(r5)
	  lbz       r8, 0x5(r4)
	  cmplw     r7, r8
	  bge-      .loc_0x6C4
	  li        r0, 0x1
	  b         .loc_0x73C

	.loc_0x6C4:
	  cmplw     r8, r7
	  bge-      .loc_0x6D4
	  li        r0, 0
	  b         .loc_0x73C

	.loc_0x6D4:
	  addi      r4, r4, 0x1
	  addi      r5, r5, 0x1
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0x6AC

	.loc_0x6E4:
	  cmpw      r0, r9
	  bne-      .loc_0x720
	  addi      r4, r1, 0x1A0
	  sub       r0, r6, r3
	  add       r4, r4, r3
	  mtctr     r0
	  cmpw      r3, r6
	  bge-      .loc_0x720

	.loc_0x704:
	  lbz       r0, 0x5(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x718
	  li        r0, 0x1
	  b         .loc_0x73C

	.loc_0x718:
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x704

	.loc_0x720:
	  li        r0, 0
	  b         .loc_0x73C

	.loc_0x728:
	  xor       r0, r4, r0
	  srawi     r3, r0, 0x1
	  and       r0, r0, r4
	  sub       r0, r3, r0
	  rlwinm    r0,r0,1,31,31

	.loc_0x73C:
	  cmpwi     r0, 0
	  bne-      .loc_0x1048
	  lis       r3, 0x8051
	  lfd       f0, 0x48B8(r3)
	  stfd      f0, 0x30(r1)

	.loc_0x750:
	  lfd       f1, 0x30(r1)
	  addi      r3, r1, 0x148
	  bl        0xACC
	  addi      r3, r1, 0x148
	  addi      r4, r1, 0x1A0
	  bl        0x1370
	  cmpwi     r3, 0
	  bne-      .loc_0x1048
	  lbz       r0, 0x14D(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x798
	  lbz       r0, 0x1A5(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x790
	  li        r0, 0x1
	  b         .loc_0x87C

	.loc_0x790:
	  li        r0, 0
	  b         .loc_0x87C

	.loc_0x798:
	  lbz       r0, 0x1A5(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x7AC
	  li        r0, 0
	  b         .loc_0x87C

	.loc_0x7AC:
	  lha       r0, 0x14A(r1)
	  lha       r4, 0x1A2(r1)
	  cmpw      r0, r4
	  bne-      .loc_0x868
	  lbz       r9, 0x14C(r1)
	  lbz       r6, 0x1A4(r1)
	  mr        r0, r9
	  cmpw      r9, r6
	  ble-      .loc_0x7D4
	  mr        r0, r6

	.loc_0x7D4:
	  addi      r4, r1, 0x1A0
	  addi      r5, r1, 0x148
	  li        r3, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x824

	.loc_0x7EC:
	  lbz       r7, 0x5(r5)
	  lbz       r8, 0x5(r4)
	  cmplw     r7, r8
	  bge-      .loc_0x804
	  li        r0, 0x1
	  b         .loc_0x87C

	.loc_0x804:
	  cmplw     r8, r7
	  bge-      .loc_0x814
	  li        r0, 0
	  b         .loc_0x87C

	.loc_0x814:
	  addi      r4, r4, 0x1
	  addi      r5, r5, 0x1
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0x7EC

	.loc_0x824:
	  cmpw      r0, r9
	  bne-      .loc_0x860
	  addi      r4, r1, 0x1A0
	  sub       r0, r6, r3
	  add       r4, r4, r3
	  mtctr     r0
	  cmpw      r3, r6
	  bge-      .loc_0x860

	.loc_0x844:
	  lbz       r0, 0x5(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x858
	  li        r0, 0x1
	  b         .loc_0x87C

	.loc_0x858:
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x844

	.loc_0x860:
	  li        r0, 0
	  b         .loc_0x87C

	.loc_0x868:
	  xor       r0, r4, r0
	  srawi     r3, r0, 0x1
	  and       r0, r0, r4
	  sub       r0, r3, r0
	  rlwinm    r0,r0,1,31,31

	.loc_0x87C:
	  cmpwi     r0, 0
	  beq-      .loc_0xCF0
	  lfd       f0, 0x30(r1)
	  li        r4, 0x1
	  li        r3, 0
	  lis       r0, 0x7FF0
	  stfd      f0, 0x28(r1)
	  lwz       r6, 0x2C(r1)
	  lwz       r5, 0x28(r1)
	  addc      r4, r6, r4
	  adde      r3, r5, r3
	  stw       r4, 0x2C(r1)
	  stw       r3, 0x28(r1)
	  lfd       f1, 0x28(r1)
	  stfd      f1, 0x10(r1)
	  lwz       r4, 0x10(r1)
	  rlwinm    r3,r4,0,1,11
	  cmpw      r3, r0
	  beq-      .loc_0x8D8
	  bge-      .loc_0x920
	  cmpwi     r3, 0
	  beq-      .loc_0x8FC
	  b         .loc_0x920

	.loc_0x8D8:
	  rlwinm.   r0,r4,0,12,31
	  bne-      .loc_0x8EC
	  lwz       r0, 0x14(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x8F4

	.loc_0x8EC:
	  li        r0, 0x1
	  b         .loc_0x924

	.loc_0x8F4:
	  li        r0, 0x2
	  b         .loc_0x924

	.loc_0x8FC:
	  rlwinm.   r0,r4,0,12,31
	  bne-      .loc_0x910
	  lwz       r0, 0x14(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x918

	.loc_0x910:
	  li        r0, 0x5
	  b         .loc_0x924

	.loc_0x918:
	  li        r0, 0x3
	  b         .loc_0x924

	.loc_0x920:
	  li        r0, 0x4

	.loc_0x924:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x934
	  stfd      f1, 0x30(r1)
	  b         .loc_0x1048

	.loc_0x934:
	  addi      r3, r1, 0x11C
	  bl        0x8EC
	  lis       r29, 0x7FF0
	  b         .loc_0xA50

	.loc_0x944:
	  lwz       r5, 0x2C(r1)
	  li        r3, 0x1
	  lwz       r4, 0x28(r1)
	  li        r0, 0
	  addc      r3, r5, r3
	  lfd       f0, 0x28(r1)
	  adde      r0, r4, r0
	  lwz       r30, 0x11C(r1)
	  stw       r3, 0x2C(r1)
	  lwz       r12, 0x120(r1)
	  stw       r0, 0x28(r1)
	  lwz       r11, 0x124(r1)
	  lfd       f1, 0x28(r1)
	  lwz       r10, 0x128(r1)
	  stfd      f1, 0x8(r1)
	  lwz       r9, 0x12C(r1)
	  lwz       r31, 0x8(r1)
	  lwz       r8, 0x130(r1)
	  rlwinm    r0,r31,0,1,11
	  lwz       r7, 0x134(r1)
	  lwz       r6, 0x138(r1)
	  cmpw      r0, r29
	  lwz       r5, 0x13C(r1)
	  lwz       r4, 0x140(r1)
	  lhz       r3, 0x144(r1)
	  stw       r30, 0x148(r1)
	  stw       r12, 0x14C(r1)
	  stw       r11, 0x150(r1)
	  stw       r10, 0x154(r1)
	  stw       r9, 0x158(r1)
	  stw       r8, 0x15C(r1)
	  stw       r7, 0x160(r1)
	  stw       r6, 0x164(r1)
	  stw       r5, 0x168(r1)
	  stw       r4, 0x16C(r1)
	  sth       r3, 0x170(r1)
	  stfd      f0, 0x30(r1)
	  beq-      .loc_0x9EC
	  bge-      .loc_0xA34
	  cmpwi     r0, 0
	  beq-      .loc_0xA10
	  b         .loc_0xA34

	.loc_0x9EC:
	  rlwinm.   r0,r31,0,12,31
	  bne-      .loc_0xA00
	  lwz       r0, 0xC(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0xA08

	.loc_0xA00:
	  li        r0, 0x1
	  b         .loc_0xA38

	.loc_0xA08:
	  li        r0, 0x2
	  b         .loc_0xA38

	.loc_0xA10:
	  rlwinm.   r0,r31,0,12,31
	  bne-      .loc_0xA24
	  lwz       r0, 0xC(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0xA2C

	.loc_0xA24:
	  li        r0, 0x5
	  b         .loc_0xA38

	.loc_0xA2C:
	  li        r0, 0x3
	  b         .loc_0xA38

	.loc_0xA34:
	  li        r0, 0x4

	.loc_0xA38:
	  cmpwi     r0, 0x2
	  bne-      .loc_0xA48
	  stfd      f1, 0x30(r1)
	  b         .loc_0x1048

	.loc_0xA48:
	  addi      r3, r1, 0x11C
	  bl        0x7D8

	.loc_0xA50:
	  lbz       r0, 0x121(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xA78
	  lbz       r0, 0x1A5(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0xA70
	  li        r0, 0x1
	  b         .loc_0xB60

	.loc_0xA70:
	  li        r0, 0
	  b         .loc_0xB60

	.loc_0xA78:
	  lbz       r0, 0x1A5(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xA8C
	  li        r0, 0
	  b         .loc_0xB60

	.loc_0xA8C:
	  lha       r0, 0x11E(r1)
	  lha       r4, 0x1A2(r1)
	  cmpw      r0, r4
	  bne-      .loc_0xB4C
	  lbz       r9, 0x120(r1)
	  lbz       r6, 0x1A4(r1)
	  mr        r0, r9
	  cmpw      r9, r6
	  ble-      .loc_0xAB4
	  mr        r0, r6

	.loc_0xAB4:
	  addi      r4, r1, 0x1A0
	  addi      r5, r1, 0x11C
	  li        r3, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0xB04

	.loc_0xACC:
	  lbz       r7, 0x5(r5)
	  lbz       r8, 0x5(r4)
	  cmplw     r7, r8
	  bge-      .loc_0xAE4
	  li        r0, 0x1
	  b         .loc_0xB60

	.loc_0xAE4:
	  cmplw     r8, r7
	  bge-      .loc_0xAF4
	  li        r0, 0
	  b         .loc_0xB60

	.loc_0xAF4:
	  addi      r4, r4, 0x1
	  addi      r5, r5, 0x1
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0xACC

	.loc_0xB04:
	  cmpw      r0, r9
	  bne-      .loc_0xB44
	  addi      r4, r1, 0x1A0
	  sub       r0, r6, r3
	  add       r4, r4, r3
	  mtctr     r0
	  cmpw      r3, r6
	  bge-      .loc_0xB44

	.loc_0xB24:
	  lbz       r0, 0x5(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0xB38
	  li        r0, 0x1
	  b         .loc_0xB60

	.loc_0xB38:
	  addi      r4, r4, 0x1
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0xB24

	.loc_0xB44:
	  li        r0, 0
	  b         .loc_0xB60

	.loc_0xB4C:
	  xor       r0, r4, r0
	  srawi     r3, r0, 0x1
	  and       r0, r0, r4
	  sub       r0, r3, r0
	  rlwinm    r0,r0,1,31,31

	.loc_0xB60:
	  cmpwi     r0, 0
	  bne+      .loc_0x944
	  addi      r3, r1, 0xF0
	  addi      r4, r1, 0x1A0
	  addi      r5, r1, 0x148
	  bl        0xA64
	  addi      r3, r1, 0xC4
	  addi      r4, r1, 0x11C
	  addi      r5, r1, 0x1A0
	  bl        0xA54
	  addi      r3, r1, 0xF0
	  addi      r4, r1, 0xC4
	  bl        0xF44
	  cmpwi     r3, 0
	  beq-      .loc_0xBD0
	  lwz       r0, 0x30(r1)
	  li        r4, 0
	  lwz       r5, 0x34(r1)
	  li        r3, 0x1
	  and       r0, r0, r4
	  and       r3, r5, r3
	  xor       r3, r3, r4
	  xor       r0, r0, r4
	  or.       r0, r3, r0
	  beq-      .loc_0x1048
	  lfd       f0, 0x28(r1)
	  stfd      f0, 0x30(r1)
	  b         .loc_0x1048

	.loc_0xBD0:
	  lbz       r0, 0xF5(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xBF8
	  lbz       r0, 0xC9(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0xBF0
	  li        r0, 0x1
	  b         .loc_0xCDC

	.loc_0xBF0:
	  li        r0, 0
	  b         .loc_0xCDC

	.loc_0xBF8:
	  lbz       r0, 0xC9(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xC0C
	  li        r0, 0
	  b         .loc_0xCDC

	.loc_0xC0C:
	  lha       r0, 0xF2(r1)
	  lha       r4, 0xC6(r1)
	  cmpw      r0, r4
	  bne-      .loc_0xCC8
	  lbz       r9, 0xF4(r1)
	  lbz       r6, 0xC8(r1)
	  mr        r0, r9
	  cmpw      r9, r6
	  ble-      .loc_0xC34
	  mr        r0, r6

	.loc_0xC34:
	  addi      r4, r1, 0xC4
	  addi      r5, r1, 0xF0
	  li        r3, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0xC84

	.loc_0xC4C:
	  lbz       r7, 0x5(r5)
	  lbz       r8, 0x5(r4)
	  cmplw     r7, r8
	  bge-      .loc_0xC64
	  li        r0, 0x1
	  b         .loc_0xCDC

	.loc_0xC64:
	  cmplw     r8, r7
	  bge-      .loc_0xC74
	  li        r0, 0
	  b         .loc_0xCDC

	.loc_0xC74:
	  addi      r4, r4, 0x1
	  addi      r5, r5, 0x1
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0xC4C

	.loc_0xC84:
	  cmpw      r0, r9
	  bne-      .loc_0xCC0
	  addi      r4, r1, 0xC4
	  sub       r0, r6, r3
	  add       r4, r4, r3
	  mtctr     r0
	  cmpw      r3, r6
	  bge-      .loc_0xCC0

	.loc_0xCA4:
	  lbz       r0, 0x5(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0xCB8
	  li        r0, 0x1
	  b         .loc_0xCDC

	.loc_0xCB8:
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0xCA4

	.loc_0xCC0:
	  li        r0, 0
	  b         .loc_0xCDC

	.loc_0xCC8:
	  xor       r0, r4, r0
	  srawi     r3, r0, 0x1
	  and       r0, r0, r4
	  sub       r0, r3, r0
	  rlwinm    r0,r0,1,31,31

	.loc_0xCDC:
	  cmpwi     r0, 0
	  bne-      .loc_0x1048
	  lfd       f0, 0x28(r1)
	  stfd      f0, 0x30(r1)
	  b         .loc_0x1048

	.loc_0xCF0:
	  lfd       f0, 0x30(r1)
	  li        r0, -0x1
	  addi      r3, r1, 0x98
	  stfd      f0, 0x20(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r5, 0x20(r1)
	  addc      r4, r4, r0
	  adde      r0, r5, r0
	  stw       r4, 0x24(r1)
	  stw       r0, 0x20(r1)
	  lfd       f1, 0x20(r1)
	  bl        0x508
	  b         .loc_0xDAC

	.loc_0xD24:
	  lwz       r4, 0x24(r1)
	  li        r0, -0x1
	  lwz       r5, 0x20(r1)
	  addi      r3, r1, 0x98
	  addc      r4, r4, r0
	  lfd       f0, 0x20(r1)
	  adde      r0, r5, r0
	  lwz       r29, 0x98(r1)
	  lwz       r30, 0x9C(r1)
	  lwz       r31, 0xA0(r1)
	  lwz       r12, 0xA4(r1)
	  lwz       r11, 0xA8(r1)
	  lwz       r10, 0xAC(r1)
	  lwz       r9, 0xB0(r1)
	  lwz       r8, 0xB4(r1)
	  lwz       r7, 0xB8(r1)
	  lwz       r6, 0xBC(r1)
	  lhz       r5, 0xC0(r1)
	  stw       r4, 0x24(r1)
	  stw       r0, 0x20(r1)
	  stw       r29, 0x148(r1)
	  lfd       f1, 0x20(r1)
	  stw       r30, 0x14C(r1)
	  stw       r31, 0x150(r1)
	  stw       r12, 0x154(r1)
	  stw       r11, 0x158(r1)
	  stw       r10, 0x15C(r1)
	  stw       r9, 0x160(r1)
	  stw       r8, 0x164(r1)
	  stw       r7, 0x168(r1)
	  stw       r6, 0x16C(r1)
	  sth       r5, 0x170(r1)
	  stfd      f0, 0x30(r1)
	  bl        0x47C

	.loc_0xDAC:
	  lbz       r0, 0x1A5(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xDD4
	  lbz       r0, 0x9D(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0xDCC
	  li        r0, 0x1
	  b         .loc_0xEBC

	.loc_0xDCC:
	  li        r0, 0
	  b         .loc_0xEBC

	.loc_0xDD4:
	  lbz       r0, 0x9D(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xDE8
	  li        r0, 0
	  b         .loc_0xEBC

	.loc_0xDE8:
	  lha       r0, 0x1A2(r1)
	  lha       r4, 0x9A(r1)
	  cmpw      r0, r4
	  bne-      .loc_0xEA8
	  lbz       r9, 0x1A4(r1)
	  lbz       r6, 0x9C(r1)
	  mr        r0, r9
	  cmpw      r9, r6
	  ble-      .loc_0xE10
	  mr        r0, r6

	.loc_0xE10:
	  addi      r4, r1, 0x98
	  addi      r5, r1, 0x1A0
	  li        r3, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0xE60

	.loc_0xE28:
	  lbz       r7, 0x5(r5)
	  lbz       r8, 0x5(r4)
	  cmplw     r7, r8
	  bge-      .loc_0xE40
	  li        r0, 0x1
	  b         .loc_0xEBC

	.loc_0xE40:
	  cmplw     r8, r7
	  bge-      .loc_0xE50
	  li        r0, 0
	  b         .loc_0xEBC

	.loc_0xE50:
	  addi      r4, r4, 0x1
	  addi      r5, r5, 0x1
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0xE28

	.loc_0xE60:
	  cmpw      r0, r9
	  bne-      .loc_0xEA0
	  addi      r4, r1, 0x98
	  sub       r0, r6, r3
	  add       r4, r4, r3
	  mtctr     r0
	  cmpw      r3, r6
	  bge-      .loc_0xEA0

	.loc_0xE80:
	  lbz       r0, 0x5(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0xE94
	  li        r0, 0x1
	  b         .loc_0xEBC

	.loc_0xE94:
	  addi      r4, r4, 0x1
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0xE80

	.loc_0xEA0:
	  li        r0, 0
	  b         .loc_0xEBC

	.loc_0xEA8:
	  xor       r0, r4, r0
	  srawi     r3, r0, 0x1
	  and       r0, r0, r4
	  sub       r0, r3, r0
	  rlwinm    r0,r0,1,31,31

	.loc_0xEBC:
	  cmpwi     r0, 0
	  bne+      .loc_0xD24
	  addi      r3, r1, 0x6C
	  addi      r4, r1, 0x1A0
	  addi      r5, r1, 0x98
	  bl        0x708
	  addi      r3, r1, 0x40
	  addi      r4, r1, 0x148
	  addi      r5, r1, 0x1A0
	  bl        0x6F8
	  addi      r3, r1, 0x6C
	  addi      r4, r1, 0x40
	  bl        0xBE8
	  cmpwi     r3, 0
	  beq-      .loc_0xF2C
	  lwz       r0, 0x30(r1)
	  li        r4, 0
	  lwz       r5, 0x34(r1)
	  li        r3, 0x1
	  and       r0, r0, r4
	  and       r3, r5, r3
	  xor       r3, r3, r4
	  xor       r0, r0, r4
	  or.       r0, r3, r0
	  beq-      .loc_0x1048
	  lfd       f0, 0x20(r1)
	  stfd      f0, 0x30(r1)
	  b         .loc_0x1048

	.loc_0xF2C:
	  lbz       r0, 0x71(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xF54
	  lbz       r0, 0x45(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0xF4C
	  li        r0, 0x1
	  b         .loc_0x1038

	.loc_0xF4C:
	  li        r0, 0
	  b         .loc_0x1038

	.loc_0xF54:
	  lbz       r0, 0x45(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xF68
	  li        r0, 0
	  b         .loc_0x1038

	.loc_0xF68:
	  lha       r0, 0x6E(r1)
	  lha       r4, 0x42(r1)
	  cmpw      r0, r4
	  bne-      .loc_0x1024
	  lbz       r9, 0x70(r1)
	  lbz       r6, 0x44(r1)
	  mr        r0, r9
	  cmpw      r9, r6
	  ble-      .loc_0xF90
	  mr        r0, r6

	.loc_0xF90:
	  addi      r4, r1, 0x40
	  addi      r5, r1, 0x6C
	  li        r3, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0xFE0

	.loc_0xFA8:
	  lbz       r7, 0x5(r5)
	  lbz       r8, 0x5(r4)
	  cmplw     r7, r8
	  bge-      .loc_0xFC0
	  li        r0, 0x1
	  b         .loc_0x1038

	.loc_0xFC0:
	  cmplw     r8, r7
	  bge-      .loc_0xFD0
	  li        r0, 0
	  b         .loc_0x1038

	.loc_0xFD0:
	  addi      r4, r4, 0x1
	  addi      r5, r5, 0x1
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0xFA8

	.loc_0xFE0:
	  cmpw      r0, r9
	  bne-      .loc_0x101C
	  addi      r4, r1, 0x40
	  sub       r0, r6, r3
	  add       r4, r4, r3
	  mtctr     r0
	  cmpw      r3, r6
	  bge-      .loc_0x101C

	.loc_0x1000:
	  lbz       r0, 0x5(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x1014
	  li        r0, 0x1
	  b         .loc_0x1038

	.loc_0x1014:
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x1000

	.loc_0x101C:
	  li        r0, 0
	  b         .loc_0x1038

	.loc_0x1024:
	  xor       r0, r4, r0
	  srawi     r3, r0, 0x1
	  and       r0, r0, r4
	  sub       r0, r3, r0
	  rlwinm    r0,r0,1,31,31

	.loc_0x1038:
	  cmpwi     r0, 0
	  beq-      .loc_0x1048
	  lfd       f0, 0x20(r1)
	  stfd      f0, 0x30(r1)

	.loc_0x1048:
	  lbz       r0, 0x1A0(r1)
	  extsb.    r0, r0
	  beq-      .loc_0x1060
	  lfd       f0, 0x30(r1)
	  fneg      f0, f0
	  stfd      f0, 0x30(r1)

	.loc_0x1060:
	  lfd       f1, 0x30(r1)

	.loc_0x1064:
	  lwz       r0, 0x1F4(r1)
	  lwz       r31, 0x1EC(r1)
	  lwz       r30, 0x1E8(r1)
	  lwz       r29, 0x1E4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1F0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C3B9C
 * Size:	0001A4
 */
void __num2dec(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  lha       r30, 0x2(r3)
	  mr        r3, r31
	  bl        .loc_0x1A4
	  lbz       r0, 0x5(r31)
	  cmplwi    r0, 0x9
	  bgt-      .loc_0x18C
	  extsh     r0, r30
	  cmpwi     r0, 0x24
	  ble-      .loc_0x40
	  li        r30, 0x24

	.loc_0x40:
	  extsh.    r6, r30
	  ble-      .loc_0x12C
	  lbz       r0, 0x4(r31)
	  cmpw      r6, r0
	  bge-      .loc_0x12C
	  add       r5, r31, r6
	  lbz       r0, 0x5(r5)
	  cmplwi    r0, 0x5
	  ble-      .loc_0x6C
	  li        r0, 0x1
	  b         .loc_0xCC

	.loc_0x6C:
	  bge-      .loc_0x78
	  li        r0, -0x1
	  b         .loc_0xCC

	.loc_0x78:
	  lbz       r3, 0x4(r31)
	  addi      r4, r5, 0x6
	  addi      r3, r3, 0x5
	  add       r3, r31, r3
	  sub       r0, r3, r4
	  mtctr     r0
	  cmplw     r4, r3
	  bge-      .loc_0xB4

	.loc_0x98:
	  lbz       r0, 0x0(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  li        r0, 0x1
	  b         .loc_0xCC

	.loc_0xAC:
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x98

	.loc_0xB4:
	  lbz       r0, 0x4(r5)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xC8
	  li        r0, 0x1
	  b         .loc_0xCC

	.loc_0xC8:
	  li        r0, -0x1

	.loc_0xCC:
	  cmpwi     r0, 0
	  stb       r6, 0x4(r31)
	  blt-      .loc_0x12C
	  addi      r5, r31, 0x5
	  subi      r4, r6, 0x1
	  add       r4, r5, r4
	  li        r0, 0

	.loc_0xE8:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x100
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x12C

	.loc_0x100:
	  cmplw     r4, r5
	  bne-      .loc_0x120
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x12C

	.loc_0x120:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0xE8

	.loc_0x12C:
	  li        r5, 0
	  b         .loc_0x148

	.loc_0x134:
	  lbz       r4, 0x4(r31)
	  addi      r3, r4, 0x1
	  addi      r0, r4, 0x5
	  stb       r3, 0x4(r31)
	  stbx      r5, r31, r0

	.loc_0x148:
	  lbz       r3, 0x4(r31)
	  cmpw      r3, r6
	  blt+      .loc_0x134
	  lha       r0, 0x2(r31)
	  subi      r3, r3, 0x1
	  li        r5, 0
	  sub       r0, r0, r3
	  sth       r0, 0x2(r31)
	  b         .loc_0x180

	.loc_0x16C:
	  addi      r4, r5, 0x5
	  addi      r5, r5, 0x1
	  lbzx      r3, r31, r4
	  addi      r0, r3, 0x30
	  stbx      r0, r31, r4

	.loc_0x180:
	  lbz       r0, 0x4(r31)
	  cmpw      r5, r0
	  blt+      .loc_0x16C

	.loc_0x18C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x1A4:
	*/
}

/*
 * --INFO--
 * Address:	800C3D40
 * Size:	0003B4
 */
void __num2dec_internal(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  lfd       f0, -0x72C8(r2)
	  stw       r0, 0xB4(r1)
	  fcmpu     cr0, f0, f1
	  stfd      f31, 0xA8(r1)
	  stmw      r26, 0x90(r1)
	  mr        r30, r3
	  stfd      f1, 0x8(r1)
	  lwz       r0, 0x8(r1)
	  rlwinm    r0,r0,1,31,31
	  extsb     r31, r0
	  bne-      .loc_0x50
	  stb       r31, 0x0(r30)
	  li        r3, 0
	  li        r0, 0x1
	  sth       r3, 0x2(r30)
	  stb       r0, 0x4(r30)
	  stb       r3, 0x5(r30)
	  b         .loc_0x39C

	.loc_0x50:
	  stfd      f1, 0x28(r1)
	  lis       r0, 0x7FF0
	  lwz       r4, 0x28(r1)
	  rlwinm    r3,r4,0,1,11
	  cmpw      r3, r0
	  beq-      .loc_0x78
	  bge-      .loc_0xC0
	  cmpwi     r3, 0
	  beq-      .loc_0x9C
	  b         .loc_0xC0

	.loc_0x78:
	  rlwinm.   r0,r4,0,12,31
	  bne-      .loc_0x8C
	  lwz       r0, 0x2C(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x94

	.loc_0x8C:
	  li        r0, 0x1
	  b         .loc_0xC4

	.loc_0x94:
	  li        r0, 0x2
	  b         .loc_0xC4

	.loc_0x9C:
	  rlwinm.   r0,r4,0,12,31
	  bne-      .loc_0xB0
	  lwz       r0, 0x2C(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0xB8

	.loc_0xB0:
	  li        r0, 0x5
	  b         .loc_0xC4

	.loc_0xB8:
	  li        r0, 0x3
	  b         .loc_0xC4

	.loc_0xC0:
	  li        r0, 0x4

	.loc_0xC4:
	  cmpwi     r0, 0x2
	  bgt-      .loc_0x170
	  lfd       f0, 0x8(r1)
	  li        r3, 0
	  stb       r31, 0x0(r30)
	  lis       r0, 0x7FF0
	  li        r4, 0x1
	  stfd      f0, 0x20(r1)
	  lwz       r5, 0x20(r1)
	  sth       r3, 0x2(r30)
	  rlwinm    r3,r5,0,1,11
	  cmpw      r3, r0
	  stb       r4, 0x4(r30)
	  beq-      .loc_0x10C
	  bge-      .loc_0x154
	  cmpwi     r3, 0
	  beq-      .loc_0x130
	  b         .loc_0x154

	.loc_0x10C:
	  rlwinm.   r0,r5,0,12,31
	  bne-      .loc_0x120
	  lwz       r0, 0x24(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x128

	.loc_0x120:
	  li        r0, 0x1
	  b         .loc_0x158

	.loc_0x128:
	  li        r0, 0x2
	  b         .loc_0x158

	.loc_0x130:
	  rlwinm.   r0,r5,0,12,31
	  bne-      .loc_0x144
	  lwz       r0, 0x24(r1)
	  cmpwi     r0, 0
	  beq-      .loc_0x14C

	.loc_0x144:
	  li        r0, 0x5
	  b         .loc_0x158

	.loc_0x14C:
	  li        r0, 0x3
	  b         .loc_0x158

	.loc_0x154:
	  li        r0, 0x4

	.loc_0x158:
	  cmpwi     r0, 0x1
	  li        r0, 0x49
	  bne-      .loc_0x168
	  li        r0, 0x4E

	.loc_0x168:
	  stb       r0, 0x5(r30)
	  b         .loc_0x39C

	.loc_0x170:
	  extsb.    r0, r31
	  beq-      .loc_0x180
	  fneg      f0, f1
	  stfd      f0, 0x8(r1)

	.loc_0x180:
	  lfd       f1, 0x8(r1)
	  addi      r3, r1, 0x10
	  bl        0xB608
	  fmr       f31, f1
	  stfd      f31, 0x18(r1)
	  lwz       r8, 0x1C(r1)
	  cmplwi    r8, 0
	  beq-      .loc_0x20C
	  li        r5, 0x10
	  lis       r3, 0x1
	  li        r7, 0
	  li        r6, 0x20
	  mr        r4, r5
	  subi      r3, r3, 0x1
	  b         .loc_0x200

	.loc_0x1BC:
	  and.      r0, r8, r3
	  bne-      .loc_0x1D4
	  add       r7, r7, r4
	  srw       r8, r8, r4
	  sub       r6, r6, r4
	  b         .loc_0x1DC

	.loc_0x1D4:
	  cmplwi    r3, 0x1
	  beq-      .loc_0x280

	.loc_0x1DC:
	  cmpwi     r5, 0x1
	  ble-      .loc_0x1F0
	  rlwinm    r0,r5,1,31,31
	  add       r0, r0, r5
	  srawi     r5, r0, 0x1

	.loc_0x1F0:
	  cmplwi    r3, 0x1
	  ble-      .loc_0x200
	  srw       r3, r3, r5
	  sub       r4, r4, r5

	.loc_0x200:
	  cmpwi     r6, 0
	  bne+      .loc_0x1BC
	  b         .loc_0x280

	.loc_0x20C:
	  lwz       r0, 0x18(r1)
	  li        r5, 0x10
	  lis       r3, 0x1
	  li        r7, 0
	  mr        r4, r5
	  oris      r8, r0, 0x10
	  subi      r3, r3, 0x1
	  li        r6, 0x20
	  b         .loc_0x274

	.loc_0x230:
	  and.      r0, r8, r3
	  bne-      .loc_0x248
	  add       r7, r7, r4
	  srw       r8, r8, r4
	  sub       r6, r6, r4
	  b         .loc_0x250

	.loc_0x248:
	  cmplwi    r3, 0x1
	  beq-      .loc_0x27C

	.loc_0x250:
	  cmpwi     r5, 0x1
	  ble-      .loc_0x264
	  rlwinm    r0,r5,1,31,31
	  add       r0, r0, r5
	  srawi     r5, r0, 0x1

	.loc_0x264:
	  cmplwi    r3, 0x1
	  ble-      .loc_0x274
	  srw       r3, r3, r5
	  sub       r4, r4, r5

	.loc_0x274:
	  cmpwi     r6, 0
	  bne+      .loc_0x230

	.loc_0x27C:
	  addi      r7, r7, 0x20

	.loc_0x280:
	  lwz       r0, 0x10(r1)
	  subfic    r26, r7, 0x35
	  addi      r3, r1, 0x38
	  sub       r4, r0, r26
	  bl        0x72C
	  fmr       f1, f31
	  mr        r3, r26
	  bl        0xB580
	  addi      r3, r1, 0x30
	  bl        0xB73C
	  lfd       f1, 0x30(r1)
	  bl        -0x1DF4
	  li        r28, 0
	  mr        r27, r3
	  mr        r26, r4
	  stb       r28, 0x64(r1)
	  xor       r3, r26, r28
	  xor       r0, r27, r28
	  or.       r0, r3, r0
	  bne-      .loc_0x2E4
	  li        r0, 0x1
	  sth       r28, 0x66(r1)
	  stb       r0, 0x68(r1)
	  stb       r28, 0x69(r1)
	  b         .loc_0x388

	.loc_0x2E4:
	  stb       r28, 0x68(r1)
	  addi      r29, r1, 0x64
	  b         .loc_0x334

	.loc_0x2F0:
	  mr        r3, r27
	  mr        r4, r26
	  li        r5, 0
	  li        r6, 0xA
	  bl        -0x2144
	  lbz       r8, 0x68(r1)
	  mr        r3, r27
	  li        r5, 0
	  li        r6, 0xA
	  addi      r7, r8, 0x1
	  addi      r0, r8, 0x5
	  stb       r7, 0x68(r1)
	  stbx      r4, r29, r0
	  mr        r4, r26
	  bl        -0x2390
	  mr        r26, r4
	  mr        r27, r3

	.loc_0x334:
	  xor       r3, r26, r28
	  xor       r0, r27, r28
	  or.       r0, r3, r0
	  bne+      .loc_0x2F0
	  lbz       r3, 0x68(r1)
	  addi      r0, r1, 0x64
	  addi      r5, r1, 0x69
	  addi      r4, r3, 0x5
	  add       r4, r0, r4
	  b         .loc_0x370

	.loc_0x35C:
	  lbz       r3, 0x0(r5)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r5)
	  addi      r5, r5, 0x1
	  stb       r3, 0x0(r4)

	.loc_0x370:
	  subi      r4, r4, 0x1
	  cmplw     r5, r4
	  blt+      .loc_0x35C
	  lbz       r3, 0x68(r1)
	  subi      r0, r3, 0x1
	  sth       r0, 0x66(r1)

	.loc_0x388:
	  mr        r3, r30
	  addi      r4, r1, 0x64
	  addi      r5, r1, 0x38
	  bl        0x1DAC
	  stb       r31, 0x0(r30)

	.loc_0x39C:
	  lfd       f31, 0xA8(r1)
	  lmw       r26, 0x90(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C40F4
 * Size:	0004FC
 */
void __minus_dec(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r4)
	  lwz       r6, 0x4(r4)
	  stw       r0, 0x0(r3)
	  lwz       r0, 0x8(r4)
	  stw       r6, 0x4(r3)
	  lwz       r6, 0xC(r4)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0x10(r4)
	  stw       r6, 0xC(r3)
	  lwz       r6, 0x14(r4)
	  stw       r0, 0x10(r3)
	  lwz       r0, 0x18(r4)
	  stw       r6, 0x14(r3)
	  lwz       r6, 0x1C(r4)
	  stw       r0, 0x18(r3)
	  lwz       r0, 0x20(r4)
	  stw       r6, 0x1C(r3)
	  lwz       r6, 0x24(r4)
	  stw       r0, 0x20(r3)
	  lhz       r0, 0x28(r4)
	  stw       r6, 0x24(r3)
	  sth       r0, 0x28(r3)
	  lbz       r0, 0x5(r5)
	  cmplwi    r0, 0
	  beqlr-
	  lbz       r4, 0x4(r3)
	  lbz       r0, 0x4(r5)
	  mr        r8, r4
	  cmpw      r4, r0
	  bge-      .loc_0x7C
	  mr        r8, r0

	.loc_0x7C:
	  lha       r4, 0x2(r5)
	  lha       r0, 0x2(r3)
	  sub       r0, r0, r4
	  add       r8, r8, r0
	  cmpwi     r8, 0x24
	  ble-      .loc_0x98
	  li        r8, 0x24

	.loc_0x98:
	  li        r7, 0
	  b         .loc_0xB4

	.loc_0xA0:
	  lbz       r4, 0x4(r3)
	  addi      r6, r4, 0x1
	  addi      r4, r4, 0x5
	  stb       r6, 0x4(r3)
	  stbx      r7, r3, r4

	.loc_0xB4:
	  lbz       r4, 0x4(r3)
	  cmpw      r4, r8
	  blt+      .loc_0xA0
	  lbz       r7, 0x4(r5)
	  addi      r4, r3, 0x5
	  add       r6, r4, r8
	  add       r7, r7, r0
	  cmpw      r7, r8
	  bge-      .loc_0xDC
	  add       r6, r4, r7

	.loc_0xDC:
	  sub       r7, r6, r4
	  addi      r9, r5, 0x5
	  sub       r7, r7, r0
	  add       r10, r9, r7
	  mr        r11, r10
	  b         .loc_0x230

	.loc_0xF4:
	  lbzu      r8, -0x1(r6)
	  lbzu      r7, -0x1(r10)
	  cmplw     r8, r7
	  bge-      .loc_0x220
	  subi      r12, r6, 0x1
	  b         .loc_0x110

	.loc_0x10C:
	  subi      r12, r12, 0x1

	.loc_0x110:
	  lbz       r7, 0x0(r12)
	  cmplwi    r7, 0
	  beq+      .loc_0x10C
	  cmplw     r12, r6
	  sub       r8, r6, r12
	  beq-      .loc_0x220
	  rlwinm.   r7,r8,29,3,31
	  mtctr     r7
	  beq-      .loc_0x200

	.loc_0x134:
	  lbz       r7, 0x0(r12)
	  subi      r7, r7, 0x1
	  stb       r7, 0x0(r12)
	  lbz       r7, 0x1(r12)
	  addi      r7, r7, 0xA
	  stb       r7, 0x1(r12)
	  lbz       r7, 0x1(r12)
	  subi      r7, r7, 0x1
	  stb       r7, 0x1(r12)
	  lbz       r7, 0x2(r12)
	  addi      r7, r7, 0xA
	  stb       r7, 0x2(r12)
	  lbz       r7, 0x2(r12)
	  subi      r7, r7, 0x1
	  stb       r7, 0x2(r12)
	  lbz       r7, 0x3(r12)
	  addi      r7, r7, 0xA
	  stb       r7, 0x3(r12)
	  lbz       r7, 0x3(r12)
	  subi      r7, r7, 0x1
	  stb       r7, 0x3(r12)
	  lbz       r7, 0x4(r12)
	  addi      r7, r7, 0xA
	  stb       r7, 0x4(r12)
	  lbz       r7, 0x4(r12)
	  subi      r7, r7, 0x1
	  stb       r7, 0x4(r12)
	  lbz       r7, 0x5(r12)
	  addi      r7, r7, 0xA
	  stb       r7, 0x5(r12)
	  lbz       r7, 0x5(r12)
	  subi      r7, r7, 0x1
	  stb       r7, 0x5(r12)
	  lbz       r7, 0x6(r12)
	  addi      r7, r7, 0xA
	  stb       r7, 0x6(r12)
	  lbz       r7, 0x6(r12)
	  subi      r7, r7, 0x1
	  stb       r7, 0x6(r12)
	  lbz       r7, 0x7(r12)
	  addi      r7, r7, 0xA
	  stb       r7, 0x7(r12)
	  lbz       r7, 0x7(r12)
	  subi      r7, r7, 0x1
	  stb       r7, 0x7(r12)
	  lbz       r7, 0x8(r12)
	  addi      r7, r7, 0xA
	  stbu      r7, 0x8(r12)
	  bdnz+     .loc_0x134
	  andi.     r8, r8, 0x7
	  beq-      .loc_0x220

	.loc_0x200:
	  mtctr     r8

	.loc_0x204:
	  lbz       r7, 0x0(r12)
	  subi      r7, r7, 0x1
	  stb       r7, 0x0(r12)
	  lbz       r7, 0x1(r12)
	  addi      r7, r7, 0xA
	  stbu      r7, 0x1(r12)
	  bdnz+     .loc_0x204

	.loc_0x220:
	  lbz       r8, 0x0(r10)
	  lbz       r7, 0x0(r6)
	  sub       r7, r7, r8
	  stb       r7, 0x0(r6)

	.loc_0x230:
	  cmplw     r6, r4
	  ble-      .loc_0x240
	  cmplw     r10, r9
	  bgt+      .loc_0xF4

	.loc_0x240:
	  lbz       r8, 0x4(r5)
	  sub       r9, r11, r9
	  cmpw      r9, r8
	  bge-      .loc_0x3F4
	  lbz       r7, 0x0(r11)
	  li        r10, 0
	  cmplwi    r7, 0x5
	  bge-      .loc_0x268
	  li        r10, 0x1
	  b         .loc_0x2B8

	.loc_0x268:
	  bne-      .loc_0x2B8
	  addi      r7, r8, 0x5
	  addi      r6, r11, 0x1
	  add       r7, r5, r7
	  sub       r5, r7, r6
	  mtctr     r5
	  cmplw     r6, r7
	  bge-      .loc_0x29C

	.loc_0x288:
	  lbz       r5, 0x0(r6)
	  cmplwi    r5, 0
	  bne-      .loc_0x3F4
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x288

	.loc_0x29C:
	  add       r5, r9, r0
	  subi      r6, r5, 0x1
	  add       r6, r4, r6
	  lbz       r0, 0x0(r6)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x2B8
	  li        r10, 0x1

	.loc_0x2B8:
	  cmpwi     r10, 0
	  beq-      .loc_0x3F4
	  lbz       r0, 0x0(r6)
	  cmplwi    r0, 0x1
	  bge-      .loc_0x3E8
	  subi      r8, r6, 0x1
	  b         .loc_0x2D8

	.loc_0x2D4:
	  subi      r8, r8, 0x1

	.loc_0x2D8:
	  lbz       r0, 0x0(r8)
	  cmplwi    r0, 0
	  beq+      .loc_0x2D4
	  cmplw     r8, r6
	  sub       r5, r6, r8
	  beq-      .loc_0x3E8
	  rlwinm.   r0,r5,29,3,31
	  mtctr     r0
	  beq-      .loc_0x3C8

	.loc_0x2FC:
	  lbz       r7, 0x0(r8)
	  subi      r0, r7, 0x1
	  stb       r0, 0x0(r8)
	  lbz       r7, 0x1(r8)
	  addi      r0, r7, 0xA
	  stb       r0, 0x1(r8)
	  lbz       r7, 0x1(r8)
	  subi      r0, r7, 0x1
	  stb       r0, 0x1(r8)
	  lbz       r7, 0x2(r8)
	  addi      r0, r7, 0xA
	  stb       r0, 0x2(r8)
	  lbz       r7, 0x2(r8)
	  subi      r0, r7, 0x1
	  stb       r0, 0x2(r8)
	  lbz       r7, 0x3(r8)
	  addi      r0, r7, 0xA
	  stb       r0, 0x3(r8)
	  lbz       r7, 0x3(r8)
	  subi      r0, r7, 0x1
	  stb       r0, 0x3(r8)
	  lbz       r7, 0x4(r8)
	  addi      r0, r7, 0xA
	  stb       r0, 0x4(r8)
	  lbz       r7, 0x4(r8)
	  subi      r0, r7, 0x1
	  stb       r0, 0x4(r8)
	  lbz       r7, 0x5(r8)
	  addi      r0, r7, 0xA
	  stb       r0, 0x5(r8)
	  lbz       r7, 0x5(r8)
	  subi      r0, r7, 0x1
	  stb       r0, 0x5(r8)
	  lbz       r7, 0x6(r8)
	  addi      r0, r7, 0xA
	  stb       r0, 0x6(r8)
	  lbz       r7, 0x6(r8)
	  subi      r0, r7, 0x1
	  stb       r0, 0x6(r8)
	  lbz       r7, 0x7(r8)
	  addi      r0, r7, 0xA
	  stb       r0, 0x7(r8)
	  lbz       r7, 0x7(r8)
	  subi      r0, r7, 0x1
	  stb       r0, 0x7(r8)
	  lbz       r7, 0x8(r8)
	  addi      r0, r7, 0xA
	  stbu      r0, 0x8(r8)
	  bdnz+     .loc_0x2FC
	  andi.     r5, r5, 0x7
	  beq-      .loc_0x3E8

	.loc_0x3C8:
	  mtctr     r5

	.loc_0x3CC:
	  lbz       r7, 0x0(r8)
	  subi      r0, r7, 0x1
	  stb       r0, 0x0(r8)
	  lbz       r7, 0x1(r8)
	  addi      r0, r7, 0xA
	  stbu      r0, 0x1(r8)
	  bdnz+     .loc_0x3CC

	.loc_0x3E8:
	  lbz       r5, 0x0(r6)
	  subi      r0, r5, 0x1
	  stb       r0, 0x0(r6)

	.loc_0x3F4:
	  mr        r6, r4
	  b         .loc_0x400

	.loc_0x3FC:
	  addi      r6, r6, 0x1

	.loc_0x400:
	  lbz       r0, 0x0(r6)
	  cmplwi    r0, 0
	  beq+      .loc_0x3FC
	  cmplw     r6, r4
	  ble-      .loc_0x4C0
	  sub       r5, r6, r4
	  lha       r0, 0x2(r3)
	  rlwinm    r7,r5,0,24,31
	  sub       r0, r0, r7
	  sth       r0, 0x2(r3)
	  lbz       r0, 0x4(r3)
	  add       r0, r4, r0
	  cmplw     r6, r0
	  sub       r5, r0, r6
	  bge-      .loc_0x4B4
	  rlwinm.   r0,r5,29,3,31
	  mtctr     r0
	  beq-      .loc_0x49C

	.loc_0x448:
	  lbz       r0, 0x0(r6)
	  stb       r0, 0x0(r4)
	  lbz       r0, 0x1(r6)
	  stb       r0, 0x1(r4)
	  lbz       r0, 0x2(r6)
	  stb       r0, 0x2(r4)
	  lbz       r0, 0x3(r6)
	  stb       r0, 0x3(r4)
	  lbz       r0, 0x4(r6)
	  stb       r0, 0x4(r4)
	  lbz       r0, 0x5(r6)
	  stb       r0, 0x5(r4)
	  lbz       r0, 0x6(r6)
	  stb       r0, 0x6(r4)
	  lbz       r0, 0x7(r6)
	  addi      r6, r6, 0x8
	  stb       r0, 0x7(r4)
	  addi      r4, r4, 0x8
	  bdnz+     .loc_0x448
	  andi.     r5, r5, 0x7
	  beq-      .loc_0x4B4

	.loc_0x49C:
	  mtctr     r5

	.loc_0x4A0:
	  lbz       r0, 0x0(r6)
	  addi      r6, r6, 0x1
	  stb       r0, 0x0(r4)
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x4A0

	.loc_0x4B4:
	  lbz       r0, 0x4(r3)
	  sub       r0, r0, r7
	  stb       r0, 0x4(r3)

	.loc_0x4C0:
	  lbz       r0, 0x4(r3)
	  addi      r4, r3, 0x5
	  add       r5, r4, r0
	  sub       r0, r5, r4
	  mtctr     r0
	  cmplw     r5, r4
	  ble-      .loc_0x4EC

	.loc_0x4DC:
	  lbzu      r0, -0x1(r5)
	  cmplwi    r0, 0
	  bne-      .loc_0x4EC
	  bdnz+     .loc_0x4DC

	.loc_0x4EC:
	  sub       r4, r5, r4
	  addi      r0, r4, 0x1
	  stb       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F8
 */
void __less_dec(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C45F0
 * Size:	00010C
 */
void __equals_dec(void)
{
	/*
	.loc_0x0:
	  lbz       r5, 0x5(r3)
	  cmplwi    r5, 0
	  bne-      .loc_0x1C
	  lbz       r0, 0x5(r4)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr

	.loc_0x1C:
	  lbz       r0, 0x5(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x34
	  cntlzw    r0, r5
	  rlwinm    r3,r0,27,5,31
	  blr

	.loc_0x34:
	  lha       r5, 0x2(r3)
	  lha       r0, 0x2(r4)
	  cmpw      r5, r0
	  bne-      .loc_0x104
	  lbz       r7, 0x4(r3)
	  lbz       r6, 0x4(r4)
	  mr        r9, r7
	  cmpw      r7, r6
	  ble-      .loc_0x5C
	  mr        r9, r6

	.loc_0x5C:
	  li        r8, 0
	  mtctr     r9
	  cmpwi     r9, 0
	  ble-      .loc_0x90

	.loc_0x6C:
	  addi      r0, r8, 0x5
	  lbzx      r5, r3, r0
	  lbzx      r0, r4, r0
	  cmplw     r5, r0
	  beq-      .loc_0x88
	  li        r3, 0
	  blr

	.loc_0x88:
	  addi      r8, r8, 0x1
	  bdnz+     .loc_0x6C

	.loc_0x90:
	  cmpw      r9, r7
	  bne-      .loc_0xCC
	  sub       r0, r6, r8
	  mtctr     r0
	  cmpw      r8, r6
	  bge-      .loc_0xFC

	.loc_0xA8:
	  addi      r0, r8, 0x5
	  lbzx      r0, r4, r0
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  li        r3, 0
	  blr

	.loc_0xC0:
	  addi      r8, r8, 0x1
	  bdnz+     .loc_0xA8
	  b         .loc_0xFC

	.loc_0xCC:
	  sub       r0, r7, r8
	  mtctr     r0
	  cmpw      r8, r7
	  bge-      .loc_0xFC

	.loc_0xDC:
	  addi      r0, r8, 0x5
	  lbzx      r0, r3, r0
	  cmplwi    r0, 0
	  beq-      .loc_0xF4
	  li        r3, 0
	  blr

	.loc_0xF4:
	  addi      r8, r8, 0x1
	  bdnz+     .loc_0xDC

	.loc_0xFC:
	  li        r3, 0x1
	  blr

	.loc_0x104:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C46FC
 * Size:	001784
 */
void __two_exp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r3
	  stw       r30, 0x68(r1)
	  mr        r30, r4
	  addi      r0, r30, 0x40
	  cmplwi    r0, 0x48
	  bgt-      .loc_0x14DC
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x6AC8
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r0, -0x14
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0x25
	  b         .loc_0x78

	.loc_0x60:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x78:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x8C
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x60

	.loc_0x8C:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0xE0
	  addi      r3, r5, 0x1
	  b         .loc_0xC4

	.loc_0xB4:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0xE0
	  addi      r3, r3, 0x1

	.loc_0xC4:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0xB4
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0xE0:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0xF4:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x10C
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x10C:
	  cmplw     r4, r5
	  bne-      .loc_0x12C
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x12C:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0xF4
	  b         .loc_0x176C
	  li        r0, -0x10
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0x53
	  b         .loc_0x174

	.loc_0x15C:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x174:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x188
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x15C

	.loc_0x188:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x1DC
	  addi      r3, r5, 0x1
	  b         .loc_0x1C0

	.loc_0x1B0:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x1DC
	  addi      r3, r3, 0x1

	.loc_0x1C0:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x1B0
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x1DC:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x1F0:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x208
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x208:
	  cmplw     r4, r5
	  bne-      .loc_0x228
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x228:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x1F0
	  b         .loc_0x176C
	  li        r0, -0xA
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0x7A
	  b         .loc_0x270

	.loc_0x258:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x270:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x284
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x258

	.loc_0x284:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x2D8
	  addi      r3, r5, 0x1
	  b         .loc_0x2BC

	.loc_0x2AC:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x2D8
	  addi      r3, r3, 0x1

	.loc_0x2BC:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x2AC
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x2D8:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x2EC:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x304
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x304:
	  cmplw     r4, r5
	  bne-      .loc_0x324
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x324:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x2EC
	  b         .loc_0x176C
	  li        r0, -0x5
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0x92
	  b         .loc_0x36C

	.loc_0x354:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x36C:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x380
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x354

	.loc_0x380:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x3D4
	  addi      r3, r5, 0x1
	  b         .loc_0x3B8

	.loc_0x3A8:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x3D4
	  addi      r3, r3, 0x1

	.loc_0x3B8:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x3A8
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x3D4:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x3E8:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x400
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x400:
	  cmplw     r4, r5
	  bne-      .loc_0x420
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x420:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x3E8
	  b         .loc_0x176C
	  li        r0, -0x3
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0x9F
	  b         .loc_0x468

	.loc_0x450:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x468:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x47C
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x450

	.loc_0x47C:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x4D0
	  addi      r3, r5, 0x1
	  b         .loc_0x4B4

	.loc_0x4A4:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x4D0
	  addi      r3, r3, 0x1

	.loc_0x4B4:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x4A4
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x4D0:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x4E4:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x4FC
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x4FC:
	  cmplw     r4, r5
	  bne-      .loc_0x51C
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x51C:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x4E4
	  b         .loc_0x176C
	  li        r0, -0x3
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0xA6
	  b         .loc_0x564

	.loc_0x54C:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x564:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x578
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x54C

	.loc_0x578:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x5CC
	  addi      r3, r5, 0x1
	  b         .loc_0x5B0

	.loc_0x5A0:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x5CC
	  addi      r3, r3, 0x1

	.loc_0x5B0:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x5A0
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x5CC:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x5E0:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x5F8
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x5F8:
	  cmplw     r4, r5
	  bne-      .loc_0x618
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x618:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x5E0
	  b         .loc_0x176C
	  li        r0, -0x2
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0xAC
	  b         .loc_0x660

	.loc_0x648:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x660:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x674
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x648

	.loc_0x674:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x6C8
	  addi      r3, r5, 0x1
	  b         .loc_0x6AC

	.loc_0x69C:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x6C8
	  addi      r3, r3, 0x1

	.loc_0x6AC:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x69C
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x6C8:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x6DC:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x6F4
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x6F4:
	  cmplw     r4, r5
	  bne-      .loc_0x714
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x714:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x6DC
	  b         .loc_0x176C
	  li        r0, -0x2
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0xB2
	  b         .loc_0x75C

	.loc_0x744:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x75C:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x770
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x744

	.loc_0x770:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x7C4
	  addi      r3, r5, 0x1
	  b         .loc_0x7A8

	.loc_0x798:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x7C4
	  addi      r3, r3, 0x1

	.loc_0x7A8:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x798
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x7C4:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x7D8:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x7F0
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x7F0:
	  cmplw     r4, r5
	  bne-      .loc_0x810
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x810:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x7D8
	  b         .loc_0x176C
	  li        r0, -0x2
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0xB7
	  b         .loc_0x858

	.loc_0x840:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x858:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x86C
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x840

	.loc_0x86C:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x8C0
	  addi      r3, r5, 0x1
	  b         .loc_0x8A4

	.loc_0x894:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x8C0
	  addi      r3, r3, 0x1

	.loc_0x8A4:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x894
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x8C0:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x8D4:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x8EC
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x8EC:
	  cmplw     r4, r5
	  bne-      .loc_0x90C
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x90C:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x8D4
	  b         .loc_0x176C
	  li        r0, -0x1
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0xBB
	  b         .loc_0x954

	.loc_0x93C:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x954:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x968
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x93C

	.loc_0x968:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x9BC
	  addi      r3, r5, 0x1
	  b         .loc_0x9A0

	.loc_0x990:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x9BC
	  addi      r3, r3, 0x1

	.loc_0x9A0:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x990
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x9BC:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x9D0:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x9E8
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x9E8:
	  cmplw     r4, r5
	  bne-      .loc_0xA08
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0xA08:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x9D0
	  b         .loc_0x176C
	  li        r0, -0x1
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0xBF
	  b         .loc_0xA50

	.loc_0xA38:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0xA50:
	  cmpwi     r4, 0x24
	  bge-      .loc_0xA64
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0xA38

	.loc_0xA64:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0xAB8
	  addi      r3, r5, 0x1
	  b         .loc_0xA9C

	.loc_0xA8C:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0xAB8
	  addi      r3, r3, 0x1

	.loc_0xA9C:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0xA8C
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0xAB8:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0xACC:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0xAE4
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0xAE4:
	  cmplw     r4, r5
	  bne-      .loc_0xB04
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0xB04:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0xACC
	  b         .loc_0x176C
	  li        r0, -0x1
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0xC2
	  b         .loc_0xB4C

	.loc_0xB34:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0xB4C:
	  cmpwi     r4, 0x24
	  bge-      .loc_0xB60
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0xB34

	.loc_0xB60:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0xBB4
	  addi      r3, r5, 0x1
	  b         .loc_0xB98

	.loc_0xB88:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0xBB4
	  addi      r3, r3, 0x1

	.loc_0xB98:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0xB88
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0xBB4:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0xBC8:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0xBE0
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0xBE0:
	  cmplw     r4, r5
	  bne-      .loc_0xC00
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0xC00:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0xBC8
	  b         .loc_0x176C
	  li        r4, 0
	  lis       r3, 0x8048
	  sth       r4, 0x2(r31)
	  subi      r3, r3, 0x6038
	  addi      r5, r3, 0xC4
	  stb       r4, 0x0(r31)
	  b         .loc_0xC44

	.loc_0xC2C:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0xC44:
	  cmpwi     r4, 0x24
	  bge-      .loc_0xC58
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0xC2C

	.loc_0xC58:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0xCAC
	  addi      r3, r5, 0x1
	  b         .loc_0xC90

	.loc_0xC80:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0xCAC
	  addi      r3, r3, 0x1

	.loc_0xC90:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0xC80
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0xCAC:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0xCC0:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0xCD8
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0xCD8:
	  cmplw     r4, r5
	  bne-      .loc_0xCF8
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0xCF8:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0xCC0
	  b         .loc_0x176C
	  li        r4, 0
	  lis       r3, 0x8048
	  sth       r4, 0x2(r31)
	  subi      r3, r3, 0x6038
	  addi      r5, r3, 0xC6
	  stb       r4, 0x0(r31)
	  b         .loc_0xD3C

	.loc_0xD24:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0xD3C:
	  cmpwi     r4, 0x24
	  bge-      .loc_0xD50
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0xD24

	.loc_0xD50:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0xDA4
	  addi      r3, r5, 0x1
	  b         .loc_0xD88

	.loc_0xD78:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0xDA4
	  addi      r3, r3, 0x1

	.loc_0xD88:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0xD78
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0xDA4:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0xDB8:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0xDD0
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0xDD0:
	  cmplw     r4, r5
	  bne-      .loc_0xDF0
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0xDF0:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0xDB8
	  b         .loc_0x176C
	  li        r4, 0
	  lis       r3, 0x8048
	  sth       r4, 0x2(r31)
	  subi      r3, r3, 0x6038
	  addi      r5, r3, 0xC8
	  stb       r4, 0x0(r31)
	  b         .loc_0xE34

	.loc_0xE1C:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0xE34:
	  cmpwi     r4, 0x24
	  bge-      .loc_0xE48
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0xE1C

	.loc_0xE48:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0xE9C
	  addi      r3, r5, 0x1
	  b         .loc_0xE80

	.loc_0xE70:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0xE9C
	  addi      r3, r3, 0x1

	.loc_0xE80:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0xE70
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0xE9C:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0xEB0:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0xEC8
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0xEC8:
	  cmplw     r4, r5
	  bne-      .loc_0xEE8
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0xEE8:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0xEB0
	  b         .loc_0x176C
	  li        r4, 0
	  lis       r3, 0x8048
	  sth       r4, 0x2(r31)
	  subi      r3, r3, 0x6038
	  addi      r5, r3, 0xCA
	  stb       r4, 0x0(r31)
	  b         .loc_0xF2C

	.loc_0xF14:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0xF2C:
	  cmpwi     r4, 0x24
	  bge-      .loc_0xF40
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0xF14

	.loc_0xF40:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0xF94
	  addi      r3, r5, 0x1
	  b         .loc_0xF78

	.loc_0xF68:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0xF94
	  addi      r3, r3, 0x1

	.loc_0xF78:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0xF68
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0xF94:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0xFA8:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0xFC0
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0xFC0:
	  cmplw     r4, r5
	  bne-      .loc_0xFE0
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0xFE0:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0xFA8
	  b         .loc_0x176C
	  li        r0, 0x1
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0xCC
	  b         .loc_0x1028

	.loc_0x1010:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x1028:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x103C
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x1010

	.loc_0x103C:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x1090
	  addi      r3, r5, 0x1
	  b         .loc_0x1074

	.loc_0x1064:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x1090
	  addi      r3, r3, 0x1

	.loc_0x1074:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x1064
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x1090:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x10A4:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x10BC
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x10BC:
	  cmplw     r4, r5
	  bne-      .loc_0x10DC
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x10DC:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x10A4
	  b         .loc_0x176C
	  li        r0, 0x1
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0xCF
	  b         .loc_0x1124

	.loc_0x110C:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x1124:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x1138
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x110C

	.loc_0x1138:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x118C
	  addi      r3, r5, 0x1
	  b         .loc_0x1170

	.loc_0x1160:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x118C
	  addi      r3, r3, 0x1

	.loc_0x1170:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x1160
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x118C:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x11A0:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x11B8
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x11B8:
	  cmplw     r4, r5
	  bne-      .loc_0x11D8
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x11D8:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x11A0
	  b         .loc_0x176C
	  li        r0, 0x1
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0xD2
	  b         .loc_0x1220

	.loc_0x1208:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x1220:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x1234
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x1208

	.loc_0x1234:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x1288
	  addi      r3, r5, 0x1
	  b         .loc_0x126C

	.loc_0x125C:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x1288
	  addi      r3, r3, 0x1

	.loc_0x126C:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x125C
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x1288:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x129C:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x12B4
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x12B4:
	  cmplw     r4, r5
	  bne-      .loc_0x12D4
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x12D4:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x129C
	  b         .loc_0x176C
	  li        r0, 0x2
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0xD5
	  b         .loc_0x131C

	.loc_0x1304:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x131C:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x1330
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x1304

	.loc_0x1330:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x1384
	  addi      r3, r5, 0x1
	  b         .loc_0x1368

	.loc_0x1358:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x1384
	  addi      r3, r3, 0x1

	.loc_0x1368:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x1358
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x1384:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x1398:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x13B0
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x13B0:
	  cmplw     r4, r5
	  bne-      .loc_0x13D0
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x13D0:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x1398
	  b         .loc_0x176C
	  li        r0, 0x2
	  lis       r3, 0x8048
	  sth       r0, 0x2(r31)
	  li        r4, 0
	  subi      r3, r3, 0x6038
	  stb       r4, 0x0(r31)
	  addi      r5, r3, 0xD9
	  b         .loc_0x1418

	.loc_0x1400:
	  lbz       r3, 0x0(r5)
	  addi      r0, r4, 0x5
	  addi      r5, r5, 0x1
	  addi      r4, r4, 0x1
	  subi      r3, r3, 0x30
	  stbx      r3, r31, r0

	.loc_0x1418:
	  cmpwi     r4, 0x24
	  bge-      .loc_0x142C
	  lbz       r0, 0x0(r5)
	  extsb.    r0, r0
	  bne+      .loc_0x1400

	.loc_0x142C:
	  stb       r4, 0x4(r31)
	  lbz       r3, 0x0(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x176C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x176C
	  bgt-      .loc_0x1480
	  addi      r3, r5, 0x1
	  b         .loc_0x1464

	.loc_0x1454:
	  extsb     r0, r5
	  cmpwi     r0, 0x30
	  bne-      .loc_0x1480
	  addi      r3, r3, 0x1

	.loc_0x1464:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0x1454
	  add       r3, r31, r4
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x176C

	.loc_0x1480:
	  lbz       r3, 0x4(r31)
	  addi      r5, r31, 0x5
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x1494:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x14AC
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x176C

	.loc_0x14AC:
	  cmplw     r4, r5
	  bne-      .loc_0x14CC
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x2(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x2(r31)
	  b         .loc_0x176C

	.loc_0x14CC:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x1494
	  b         .loc_0x176C

	.loc_0x14DC:
	  rlwinm    r0,r30,1,31,31
	  addi      r3, r1, 0x34
	  add       r0, r0, r30
	  srawi     r4, r0, 0x1
	  bl        .loc_0x0
	  addi      r4, r1, 0x34
	  mr        r3, r31
	  mr        r5, r4
	  bl        .loc_0x1784
	  rlwinm.   r0,r30,0,31,31
	  beq-      .loc_0x176C
	  lwz       r3, 0x0(r31)
	  cmpwi     r30, 0
	  lwz       r0, 0x4(r31)
	  stw       r3, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lwz       r3, 0x8(r31)
	  lwz       r0, 0xC(r31)
	  stw       r3, 0x10(r1)
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x10(r31)
	  lwz       r0, 0x14(r31)
	  stw       r3, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r0, 0x1C(r31)
	  stw       r3, 0x20(r1)
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x20(r31)
	  lwz       r0, 0x24(r31)
	  stw       r3, 0x28(r1)
	  stw       r0, 0x2C(r1)
	  lhz       r0, 0x28(r31)
	  sth       r0, 0x30(r1)
	  ble-      .loc_0x1660
	  li        r5, 0
	  lis       r3, 0x8048
	  subi      r4, r3, 0x6038
	  sth       r5, 0x36(r1)
	  addi      r3, r1, 0x34
	  stb       r5, 0x34(r1)
	  addi      r6, r4, 0xC6
	  b         .loc_0x15A0

	.loc_0x1588:
	  lbz       r4, 0x0(r6)
	  addi      r0, r5, 0x5
	  addi      r6, r6, 0x1
	  addi      r5, r5, 0x1
	  subi      r4, r4, 0x30
	  stbx      r4, r3, r0

	.loc_0x15A0:
	  cmpwi     r5, 0x24
	  bge-      .loc_0x15B4
	  lbz       r0, 0x0(r6)
	  extsb.    r0, r0
	  bne+      .loc_0x1588

	.loc_0x15B4:
	  stb       r5, 0x38(r1)
	  lbz       r3, 0x0(r6)
	  extsb.    r0, r3
	  beq-      .loc_0x175C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x175C
	  bgt-      .loc_0x1608
	  addi      r3, r6, 0x1
	  b         .loc_0x15EC

	.loc_0x15DC:
	  extsb     r0, r4
	  cmpwi     r0, 0x30
	  bne-      .loc_0x1608
	  addi      r3, r3, 0x1

	.loc_0x15EC:
	  lbz       r4, 0x0(r3)
	  extsb.    r0, r4
	  bne+      .loc_0x15DC
	  addi      r3, r1, 0x38
	  lbzx      r0, r3, r5
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x175C

	.loc_0x1608:
	  lbz       r3, 0x38(r1)
	  addi      r5, r1, 0x39
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x161C:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x1634
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x175C

	.loc_0x1634:
	  cmplw     r4, r5
	  bne-      .loc_0x1654
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x36(r1)
	  addi      r0, r3, 0x1
	  sth       r0, 0x36(r1)
	  b         .loc_0x175C

	.loc_0x1654:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x161C

	.loc_0x1660:
	  li        r5, 0
	  lis       r3, 0x8048
	  li        r0, -0x1
	  stb       r5, 0x34(r1)
	  subi      r3, r3, 0x6038
	  addi      r6, r3, 0xC2
	  sth       r0, 0x36(r1)
	  addi      r3, r1, 0x34
	  b         .loc_0x169C

	.loc_0x1684:
	  lbz       r4, 0x0(r6)
	  addi      r0, r5, 0x5
	  addi      r6, r6, 0x1
	  addi      r5, r5, 0x1
	  subi      r4, r4, 0x30
	  stbx      r4, r3, r0

	.loc_0x169C:
	  cmpwi     r5, 0x24
	  bge-      .loc_0x16B0
	  lbz       r0, 0x0(r6)
	  extsb.    r0, r0
	  bne+      .loc_0x1684

	.loc_0x16B0:
	  stb       r5, 0x38(r1)
	  lbz       r3, 0x0(r6)
	  extsb.    r0, r3
	  beq-      .loc_0x175C
	  extsb     r0, r3
	  cmpwi     r0, 0x5
	  blt-      .loc_0x175C
	  bgt-      .loc_0x1704
	  addi      r3, r6, 0x1
	  b         .loc_0x16E8

	.loc_0x16D8:
	  extsb     r0, r4
	  cmpwi     r0, 0x30
	  bne-      .loc_0x1704
	  addi      r3, r3, 0x1

	.loc_0x16E8:
	  lbz       r4, 0x0(r3)
	  extsb.    r0, r4
	  bne+      .loc_0x16D8
	  addi      r3, r1, 0x38
	  lbzx      r0, r3, r5
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x175C

	.loc_0x1704:
	  lbz       r3, 0x38(r1)
	  addi      r5, r1, 0x39
	  li        r0, 0
	  subi      r4, r3, 0x1
	  add       r4, r5, r4

	.loc_0x1718:
	  lbz       r3, 0x0(r4)
	  cmplwi    r3, 0x9
	  bge-      .loc_0x1730
	  addi      r0, r3, 0x1
	  stb       r0, 0x0(r4)
	  b         .loc_0x175C

	.loc_0x1730:
	  cmplw     r4, r5
	  bne-      .loc_0x1750
	  li        r0, 0x1
	  stb       r0, 0x0(r4)
	  lha       r3, 0x36(r1)
	  addi      r0, r3, 0x1
	  sth       r0, 0x36(r1)
	  b         .loc_0x175C

	.loc_0x1750:
	  stb       r0, 0x0(r4)
	  subi      r4, r4, 0x1
	  b         .loc_0x1718

	.loc_0x175C:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  addi      r5, r1, 0x34
	  bl        .loc_0x1784

	.loc_0x176C:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr

	.loc_0x1784:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void __str2dec(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C5E80
 * Size:	000278
 */
void __timesdec(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  lis       r7, 0xCCCD
	  lbz       r12, 0x4(r5)
	  li        r0, 0
	  stmw      r27, 0x5C(r1)
	  addi      r8, r1, 0x8
	  lbz       r31, 0x4(r4)
	  subi      r29, r12, 0x1
	  subi      r9, r7, 0x3333
	  li        r30, 0
	  add       r29, r31, r29
	  addi      r6, r29, 0x1
	  add       r6, r8, r6
	  stb       r0, 0x0(r3)
	  mr        r0, r6
	  b         .loc_0x168

	.loc_0x40:
	  subi      r8, r12, 0x1
	  sub       r7, r29, r8
	  subic.    r7, r7, 0x1
	  bge-      .loc_0x58
	  li        r7, 0
	  subi      r8, r29, 0x1

	.loc_0x58:
	  addi      r10, r8, 0x1
	  sub       r11, r31, r7
	  cmpw      r10, r11
	  addi      r28, r7, 0x5
	  addi      r27, r8, 0x5
	  add       r28, r4, r28
	  add       r27, r5, r27
	  ble-      .loc_0x7C
	  mr        r10, r11

	.loc_0x7C:
	  cmpwi     r10, 0
	  mr        r8, r10
	  ble-      .loc_0x148
	  rlwinm.   r7,r10,29,3,31
	  mtctr     r7
	  beq-      .loc_0x128

	.loc_0x94:
	  lbz       r11, 0x0(r28)
	  lbz       r10, 0x0(r27)
	  mullw     r7, r11, r10
	  lbz       r11, 0x1(r28)
	  lbz       r10, -0x1(r27)
	  add       r30, r30, r7
	  mullw     r7, r11, r10
	  lbz       r11, 0x2(r28)
	  lbz       r10, -0x2(r27)
	  add       r30, r30, r7
	  mullw     r7, r11, r10
	  lbz       r11, 0x3(r28)
	  lbz       r10, -0x3(r27)
	  add       r30, r30, r7
	  mullw     r7, r11, r10
	  lbz       r11, 0x4(r28)
	  lbz       r10, -0x4(r27)
	  add       r30, r30, r7
	  mullw     r7, r11, r10
	  lbz       r11, 0x5(r28)
	  lbz       r10, -0x5(r27)
	  add       r30, r30, r7
	  mullw     r7, r11, r10
	  lbz       r11, 0x6(r28)
	  lbz       r10, -0x6(r27)
	  add       r30, r30, r7
	  mullw     r7, r11, r10
	  lbz       r11, 0x7(r28)
	  lbz       r10, -0x7(r27)
	  addi      r28, r28, 0x8
	  subi      r27, r27, 0x8
	  add       r30, r30, r7
	  mullw     r7, r11, r10
	  add       r30, r30, r7
	  bdnz+     .loc_0x94
	  andi.     r8, r8, 0x7
	  beq-      .loc_0x148

	.loc_0x128:
	  mtctr     r8

	.loc_0x12C:
	  lbz       r11, 0x0(r28)
	  addi      r28, r28, 0x1
	  lbz       r10, 0x0(r27)
	  subi      r27, r27, 0x1
	  mullw     r7, r11, r10
	  add       r30, r30, r7
	  bdnz+     .loc_0x12C

	.loc_0x148:
	  mulhwu    r8, r9, r30
	  subi      r29, r29, 0x1
	  mr        r7, r8
	  rlwinm    r8,r8,29,3,31
	  mulli     r8, r8, 0xA
	  sub       r8, r30, r8
	  rlwinm    r30,r7,29,3,31
	  stbu      r8, -0x1(r6)

	.loc_0x168:
	  cmpwi     r29, 0
	  bgt+      .loc_0x40
	  lha       r7, 0x2(r4)
	  cmplwi    r30, 0
	  lha       r4, 0x2(r5)
	  add       r4, r7, r4
	  sth       r4, 0x2(r3)
	  beq-      .loc_0x198
	  stbu      r30, -0x1(r6)
	  lha       r4, 0x2(r3)
	  addi      r4, r4, 0x1
	  sth       r4, 0x2(r3)

	.loc_0x198:
	  li        r7, 0
	  b         .loc_0x1B4

	.loc_0x1A0:
	  lbz       r5, 0x0(r6)
	  addi      r4, r7, 0x5
	  addi      r7, r7, 0x1
	  addi      r6, r6, 0x1
	  stbx      r5, r3, r4

	.loc_0x1B4:
	  cmpwi     r7, 0x24
	  bge-      .loc_0x1C4
	  cmplw     r6, r0
	  blt+      .loc_0x1A0

	.loc_0x1C4:
	  cmplw     r6, r0
	  stb       r7, 0x4(r3)
	  bge-      .loc_0x26C
	  lbz       r4, 0x0(r6)
	  cmplwi    r4, 0x5
	  blt-      .loc_0x26C
	  bne-      .loc_0x214
	  addi      r5, r6, 0x1
	  sub       r4, r0, r5
	  mtctr     r4
	  cmplw     r5, r0
	  bge-      .loc_0x208

	.loc_0x1F4:
	  lbz       r0, 0x0(r5)
	  cmplwi    r0, 0
	  bne-      .loc_0x214
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x1F4

	.loc_0x208:
	  lbz       r0, -0x1(r6)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x26C

	.loc_0x214:
	  lbz       r4, 0x4(r3)
	  addi      r6, r3, 0x5
	  li        r0, 0
	  subi      r5, r4, 0x1
	  add       r5, r6, r5

	.loc_0x228:
	  lbz       r4, 0x0(r5)
	  cmplwi    r4, 0x9
	  bge-      .loc_0x240
	  addi      r0, r4, 0x1
	  stb       r0, 0x0(r5)
	  b         .loc_0x26C

	.loc_0x240:
	  cmplw     r5, r6
	  bne-      .loc_0x260
	  li        r0, 0x1
	  stb       r0, 0x0(r5)
	  lha       r4, 0x2(r3)
	  addi      r0, r4, 0x1
	  sth       r0, 0x2(r3)
	  b         .loc_0x26C

	.loc_0x260:
	  stb       r0, 0x0(r5)
	  subi      r5, r5, 0x1
	  b         .loc_0x228

	.loc_0x26C:
	  lmw       r27, 0x5C(r1)
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void __ull2dec(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void __rounddec(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void __dorounddecup(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void __must_round(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void __count_trailing_zero(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __count_trailing_zerol(void)
{
	// UNUSED FUNCTION
}
