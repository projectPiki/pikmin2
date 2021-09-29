

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
 * Address:	804313B8
 * Size:	000450
 */
void findCreature__Q34Game5P2JST12ObjectSystemCFPCc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x130(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x134(r1)
  li        r0, 0
  stmw      r25, 0x114(r1)
  subi      r30, r3, 0x5CC8
  addi      r27, r4, 0x1
  addi      r26, r1, 0x8
  li        r29, 0x30
  li        r28, 0
  li        r25, 0
  stb       r0, 0x8(r1)

.loc_0x34:
  lbz       r3, 0x0(r27)
  extsb.    r0, r3
  bne-      .loc_0x4C
  li        r0, 0
  stb       r0, 0x0(r26)
  b         .loc_0xBC

.loc_0x4C:
  extsb     r0, r3
  cmpwi     r0, 0x5F
  bne-      .loc_0x68
  li        r0, 0
  lbz       r29, 0x1(r27)
  stb       r0, 0x0(r26)
  b         .loc_0xBC

.loc_0x68:
  cmpwi     r0, 0x30
  blt-      .loc_0x88
  cmpwi     r0, 0x39
  bgt-      .loc_0x88
  li        r0, 0
  mr        r29, r3
  stb       r0, 0x0(r26)
  b         .loc_0xBC

.loc_0x88:
  lbz       r0, 0x0(r27)
  addi      r25, r25, 0x1
  cmpwi     r25, 0xFF
  addi      r27, r27, 0x1
  stb       r0, 0x0(r26)
  addi      r26, r26, 0x1
  blt+      .loc_0x34
  addi      r3, r30, 0x1C
  addi      r5, r30, 0x30
  li        r4, 0x75
  crclr     6, 0x6
  bl        -0x406E2C
  b         .loc_0x34

.loc_0xBC:
  addi      r3, r1, 0x8
  addi      r4, r30, 0x3C
  bl        -0x366DBC
  cmpwi     r3, 0
  bne-      .loc_0xF0
  lwz       r3, -0x6D20(r13)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3
  b         .loc_0x438

.loc_0xF0:
  addi      r3, r1, 0x8
  addi      r4, r30, 0x48
  bl        -0x366DF0
  cmpwi     r3, 0
  bne-      .loc_0x124
  lwz       r3, -0x6D20(r13)
  li        r4, 0x1
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3
  b         .loc_0x438

.loc_0x124:
  addi      r3, r1, 0x8
  addi      r4, r30, 0x54
  bl        -0x366E24
  cmpwi     r3, 0
  bne-      .loc_0x184
  extsb     r3, r29
  li        r0, 0
  subic.    r25, r3, 0x31
  blt-      .loc_0x154
  cmpwi     r25, 0x1
  bgt-      .loc_0x154
  li        r0, 0x1

.loc_0x154:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x170
  addi      r3, r30, 0x1C
  addi      r5, r30, 0x60
  li        r4, 0x92
  crclr     6, 0x6
  bl        -0x406EE4

.loc_0x170:
  lwz       r3, -0x6D20(r13)
  mr        r4, r25
  bl        -0x2D6264
  mr        r28, r3
  b         .loc_0x438

.loc_0x184:
  addi      r3, r1, 0x8
  addi      r4, r30, 0x6C
  bl        -0x366E84
  cmpwi     r3, 0
  bne-      .loc_0x1E4
  extsb     r3, r29
  li        r0, 0
  subic.    r25, r3, 0x31
  blt-      .loc_0x1B4
  cmpwi     r25, 0x1
  bgt-      .loc_0x1B4
  li        r0, 0x1

.loc_0x1B4:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x1D0
  addi      r3, r30, 0x1C
  addi      r5, r30, 0x60
  li        r4, 0x9E
  crclr     6, 0x6
  bl        -0x406F44

.loc_0x1D0:
  lwz       r3, -0x6D20(r13)
  mr        r4, r25
  bl        -0x2D6310
  mr        r28, r3
  b         .loc_0x438

.loc_0x1E4:
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2368
  bl        -0x366EE4
  cmpwi     r3, 0
  bne-      .loc_0x274
  extsb     r3, r29
  cmpwi     r3, 0x30
  blt-      .loc_0x214
  cmpwi     r3, 0x32
  bgt-      .loc_0x214
  subi      r31, r3, 0x30
  b         .loc_0x244

.loc_0x214:
  extsb     r0, r29
  cmpwi     r0, 0x52
  bne-      .loc_0x228
  li        r31, 0x1
  b         .loc_0x244

.loc_0x228:
  cmpwi     r0, 0x42
  bne-      .loc_0x238
  li        r31, 0
  b         .loc_0x244

.loc_0x238:
  cmpwi     r0, 0x59
  bne-      .loc_0x244
  li        r31, 0x2

.loc_0x244:
  lwz       r3, -0x6CD0(r13)
  mr        r4, r31
  bl        -0x2B5B68
  mr        r0, r3
  lwz       r3, -0x6B70(r13)
  mr        r28, r0
  mr        r4, r31
  bl        -0x24A540
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x438
  li        r28, 0
  b         .loc_0x438

.loc_0x274:
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2370
  bl        -0x366F74
  cmpwi     r3, 0
  bne-      .loc_0x2B4
  lwz       r3, -0x64AC(r13)
  lwz       r3, 0x194(r3)
  lwz       r12, 0x0(r3)
  mr        r28, r3
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x438
  li        r28, 0
  b         .loc_0x438

.loc_0x2B4:
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2378
  bl        -0x366FB4
  cmpwi     r3, 0
  bne-      .loc_0x2D4
  lwz       r3, -0x64AC(r13)
  lwz       r28, 0x194(r3)
  b         .loc_0x438

.loc_0x2D4:
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2380
  bl        -0x366FD4
  cmpwi     r3, 0
  bne-      .loc_0x2F4
  lwz       r3, -0x6CD0(r13)
  lwz       r28, 0xB0(r3)
  b         .loc_0x438

.loc_0x2F4:
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2384
  bl        -0x366FF4
  cmpwi     r3, 0
  bne-      .loc_0x314
  lwz       r3, -0x6CD0(r13)
  lwz       r28, 0xAC(r3)
  b         .loc_0x438

.loc_0x314:
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2388
  bl        -0x367014
  cmpwi     r3, 0
  bne-      .loc_0x338
  lwz       r3, -0x64AC(r13)
  bl        -0x4E08
  mr        r28, r3
  b         .loc_0x438

.loc_0x338:
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2390
  bl        -0x367038
  cmpwi     r3, 0
  bne-      .loc_0x35C
  lwz       r3, -0x64AC(r13)
  bl        -0x4E2C
  mr        r28, r3
  b         .loc_0x438

.loc_0x35C:
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2388
  bl        -0x36705C
  cmpwi     r3, 0
  bne-      .loc_0x394
  lwz       r3, -0x6D20(r13)
  extsb     r4, r29
  subi      r4, r4, 0x30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3
  b         .loc_0x438

.loc_0x394:
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2368
  bl        -0x367094
  cmpwi     r3, 0
  bne-      .loc_0x3E0
  extsb     r4, r29
  lwz       r3, -0x6CD0(r13)
  subi      r25, r4, 0x30
  mr        r4, r25
  bl        -0x2B5CD4
  mr        r0, r3
  lwz       r3, -0x6B70(r13)
  mr        r28, r0
  mr        r4, r25
  bl        -0x24A6AC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x438
  li        r28, 0
  b         .loc_0x438

.loc_0x3E0:
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2380
  bl        -0x3670E0
  cmpwi     r3, 0
  bne-      .loc_0x41C
  lwz       r3, -0x6CD0(r13)
  lwz       r28, 0xB0(r3)
  cmplwi    r28, 0
  bne-      .loc_0x438
  addi      r3, r30, 0x1C
  addi      r5, r30, 0x60
  li        r4, 0xE7
  crclr     6, 0x6
  bl        -0x40718C
  b         .loc_0x438

.loc_0x41C:
  addi      r3, r1, 0x8
  addi      r4, r2, 0x2384
  bl        -0x36711C
  cmpwi     r3, 0
  bne-      .loc_0x438
  lwz       r3, -0x6CD0(r13)
  lwz       r28, 0xAC(r3)

.loc_0x438:
  mr        r3, r28
  lmw       r25, 0x114(r1)
  lwz       r0, 0x134(r1)
  mtlr      r0
  addi      r1, r1, 0x130
  blr
*/
}

/*
 * --INFO--
 * Address:	80431808
 * Size:	000028
 */
void __sinit_JSTFindCreature_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x6478(r13)
  stfsu     f0, -0x3CA8(r3)
  stfs      f0, -0x6474(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}