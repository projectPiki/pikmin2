

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
 * Address:	8032208C
 * Size:	0000B0
 */
void __ct__Q32og9newScreen20ObjSMenuPauseDoukutuFPCc(void)
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
  bl        -0xBE98
  lis       r3, 0x804E
  li        r4, 0
  subi      r3, r3, 0x69A0
  li        r0, 0x1
  stw       r3, 0x0(r30)
  addi      r5, r3, 0x10
  lfs       f0, -0x658(r2)
  mr        r3, r30
  stw       r5, 0x18(r30)
  stw       r4, 0xA8(r30)
  stw       r31, 0x14(r30)
  stw       r4, 0xB0(r30)
  stw       r4, 0xB4(r30)
  stw       r0, 0xAC(r30)
  sth       r4, 0xB8(r30)
  stw       r4, 0xBC(r30)
  stw       r4, 0xC0(r30)
  stw       r4, 0xC4(r30)
  stw       r4, 0xC8(r30)
  stw       r4, 0xCC(r30)
  stw       r4, 0xD0(r30)
  stw       r4, 0xD4(r30)
  stw       r4, 0xD8(r30)
  stw       r4, 0xDC(r30)
  stw       r4, 0xE0(r30)
  stb       r4, 0xE8(r30)
  stfs      f0, 0xEC(r30)
  stb       r4, 0xF0(r30)
  stfs      f0, 0xF4(r30)
  stfs      f0, 0xF8(r30)
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
 * Address:	8032213C
 * Size:	0000C4
 */
void __dt__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
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
  beq-      .loc_0xA8
  lis       r4, 0x804E
  subi      r4, r4, 0x69A0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804E
  subi      r4, r4, 0x7650
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xEF418
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x305190
  mr        r3, r30
  li        r4, 0
  bl        0xEF3B8

.loc_0x98:
  extsh.    r0, r31
  ble-      .loc_0xA8
  mr        r3, r30
  bl        -0x2FE12C

.loc_0xA8:
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
 * Address:	80322200
 * Size:	000574
 */
void doCreate__Q32og9newScreen20ObjSMenuPauseDoukutuFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  subi      r31, r5, 0xEA0
  stw       r30, 0x28(r1)
  mr        r30, r4
  stw       r29, 0x24(r1)
  mr        r29, r3
  stw       r28, 0x20(r1)
  bl        0x131D7C
  lis       r4, 0x4F
  lis       r6, 0x5345
  lis       r5, 0x50
  mr        r28, r3
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x5F44
  addi      r5, r5, 0x4155
  bl        -0x12D8C
  stw       r3, 0xA8(r29)
  lwz       r0, 0xA8(r29)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  li        r3, 0x18
  bl        -0x2FE3C0
  cmplwi    r3, 0
  beq-      .loc_0xB0
  lis       r5, 0x804B
  lis       r4, 0x804C
  addi      r0, r5, 0x1148
  li        r7, 0
  stw       r0, 0x0(r3)
  addi      r6, r4, 0x55C
  li        r5, 0x1
  li        r4, 0x56
  stw       r7, 0x4(r3)
  li        r0, 0x9A5
  stw       r6, 0x0(r3)
  stw       r5, 0x14(r3)
  stw       r4, 0x8(r3)
  stw       r0, 0xC(r3)
  stb       r5, 0x10(r3)
  stb       r7, 0x11(r3)

.loc_0xB0:
  lis       r4, 0x4F
  lis       r6, 0x5345
  lis       r5, 0x50
  mr        r28, r3
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x5F44
  addi      r5, r5, 0x4155
  bl        -0x12E0C
  stw       r3, 0xA8(r29)

.loc_0xD4:
  lbz       r0, 0xC0(r28)
  li        r3, 0x148
  stb       r0, 0x50(r29)
  bl        -0x2FE43C
  mr.       r0, r3
  beq-      .loc_0xF4
  bl        0x112AC0
  mr        r0, r3

.loc_0xF4:
  stw       r0, 0xBC(r29)
  mr        r6, r30
  addi      r4, r31, 0x1C
  lis       r5, 0x104
  lwz       r3, 0xBC(r29)
  bl        -0x2E2CE4
  lwz       r3, 0xA8(r29)
  lbz       r0, 0x11(r3)
  cmplwi    r0, 0
  beq-      .loc_0x1C4
  lwz       r3, 0xBC(r29)
  lis       r4, 0x685F
  addi      r6, r4, 0x3033
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x305F
  lis       r5, 0x38
  addi      r0, r4, 0x3030
  lis       r4, 0x685F
  stw       r0, 0x1C(r3)
  addi      r0, r5, 0x3631
  addi      r6, r4, 0x3034
  li        r5, 0
  stw       r0, 0x18(r3)
  lwz       r3, 0xBC(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x315F
  lis       r5, 0x38
  addi      r0, r4, 0x3030
  lis       r4, 0x685F
  stw       r0, 0x1C(r3)
  addi      r0, r5, 0x3631
  addi      r6, r4, 0x3035
  li        r5, 0
  stw       r0, 0x18(r3)
  lwz       r3, 0xBC(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r5, 0x325F
  lis       r4, 0x38
  addi      r0, r5, 0x3030
  stw       r0, 0x1C(r3)
  addi      r0, r4, 0x3631
  stw       r0, 0x18(r3)

.loc_0x1C4:
  li        r3, 0x78
  bl        -0x2FE524
  mr.       r0, r3
  beq-      .loc_0x1DC
  bl        -0x185AC
  mr        r0, r3

.loc_0x1DC:
  stw       r0, 0xC0(r29)
  li        r3, 0x78
  bl        -0x2FE540
  mr.       r0, r3
  beq-      .loc_0x1F8
  bl        -0x185C8
  mr        r0, r3

.loc_0x1F8:
  stw       r0, 0xC4(r29)
  li        r0, 0x1
  lis       r3, 0x735F
  lis       r6, 0x696C
  stw       r0, 0xAC(r29)
  addi      r0, r3, 0x3030
  lis       r5, 0x6972
  lis       r4, 0x755F
  stw       r0, 0xC(r1)
  li        r11, 0
  lis       r3, 0x685F
  addi      r6, r6, 0x3030
  stw       r11, 0x8(r1)
  addi      r0, r5, 0x3030
  addi      r8, r4, 0x3030
  addi      r10, r3, 0x3030
  stw       r6, 0x14(r1)
  li        r5, 0x2
  li        r7, 0x6E
  li        r9, 0
  stw       r11, 0x10(r1)
  stw       r0, 0x1C(r1)
  stw       r11, 0x18(r1)
  lwz       r3, 0xC0(r29)
  lwz       r4, 0xBC(r29)
  bl        -0x17E20
  li        r11, 0
  lis       r3, 0x735F
  stw       r11, 0xB0(r29)
  addi      r0, r3, 0x3034
  lis       r6, 0x696C
  lis       r5, 0x6972
  stw       r0, 0xC(r1)
  lis       r4, 0x755F
  lis       r3, 0x685F
  addi      r6, r6, 0x3034
  stw       r11, 0x8(r1)
  addi      r0, r5, 0x3034
  addi      r8, r4, 0x3034
  addi      r10, r3, 0x3034
  stw       r6, 0x14(r1)
  li        r5, 0x2
  li        r7, 0x6E
  li        r9, 0
  stw       r11, 0x10(r1)
  stw       r0, 0x1C(r1)
  stw       r11, 0x18(r1)
  lwz       r3, 0xC4(r29)
  lwz       r4, 0xBC(r29)
  bl        -0x17E80
  li        r0, 0x1
  lis       r3, 0x656E
  stw       r0, 0xB4(r29)
  addi      r6, r3, 0x7531
  li        r5, 0x4E6D
  lwz       r3, 0xBC(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC8(r29)
  lis       r6, 0x685F
  mr        r3, r30
  li        r5, 0
  lwz       r4, 0xBC(r29)
  addi      r6, r6, 0x3030
  bl        -0x19C14
  stw       r3, 0xCC(r29)
  lis       r6, 0x685F
  mr        r3, r30
  li        r5, 0
  lwz       r4, 0xBC(r29)
  addi      r6, r6, 0x3031
  bl        -0x19C30
  stw       r3, 0xD0(r29)
  lis       r6, 0x685F
  mr        r3, r30
  li        r5, 0
  lwz       r4, 0xBC(r29)
  addi      r6, r6, 0x3033
  bl        -0x19B10
  stw       r3, 0xD4(r29)
  lis       r6, 0x685F
  mr        r3, r30
  li        r5, 0
  lwz       r4, 0xBC(r29)
  addi      r6, r6, 0x3034
  bl        -0x19C68
  stw       r3, 0xD8(r29)
  lis       r6, 0x685F
  mr        r3, r30
  li        r5, 0
  lwz       r4, 0xBC(r29)
  addi      r6, r6, 0x3035
  bl        -0x19C84
  stw       r3, 0xDC(r29)
  mr        r3, r29
  bl        0xCC4
  lwz       r3, 0xCC(r29)
  lfs       f1, -0x654(r2)
  bl        -0x19134
  lwz       r3, 0xD0(r29)
  lfs       f1, -0x650(r2)
  bl        -0x19140
  stw       r30, 0x8(r1)
  lis       r3, 0x6E61
  addi      r6, r3, 0x3031
  li        r5, 0x5061
  lwz       r4, 0xA8(r29)
  li        r8, 0xA
  lwz       r3, 0xBC(r29)
  li        r9, 0
  addi      r7, r4, 0x8
  li        r10, 0x1
  bl        -0x15FB8
  lwz       r4, 0xA8(r29)
  lis       r3, 0x696E
  addi      r6, r3, 0x3031
  addi      r7, r29, 0xE4
  lwz       r3, 0xC(r4)
  li        r5, 0x5066
  lwz       r0, 0x8(r4)
  li        r8, 0xA
  li        r9, 0
  li        r10, 0x1
  add       r0, r3, r0
  stw       r0, 0xE4(r29)
  stw       r30, 0x8(r1)
  lwz       r3, 0xBC(r29)
  bl        -0x15FF4
  stw       r30, 0x8(r1)
  lis       r5, 0x6D70
  lis       r4, 0x50
  addi      r7, r29, 0xE4
  lwz       r3, 0xBC(r29)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x636F
  li        r8, 0xA
  li        r9, 0
  li        r10, 0x1
  bl        -0x16020
  lwz       r3, 0xA8(r29)
  lbz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x478
  lis       r4, 0x4E66
  lwz       r3, 0xBC(r29)
  addi      r6, r4, 0x696E
  li        r5, 0
  bl        -0x1F7A0
  li        r0, 0x1
  lis       r4, 0x636F
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x6D70
  li        r5, 0x4E
  lwz       r3, 0xBC(r29)
  bl        -0x1F7BC
  li        r0, 0
  stb       r0, 0xB0(r3)
  b         .loc_0x4B0

.loc_0x478:
  lis       r4, 0x636F
  lwz       r3, 0xBC(r29)
  addi      r6, r4, 0x6D70
  li        r5, 0x4E
  bl        -0x1F7DC
  li        r0, 0x1
  lis       r4, 0x4E66
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x696E
  li        r5, 0
  lwz       r3, 0xBC(r29)
  bl        -0x1F7F8
  li        r0, 0
  stb       r0, 0xB0(r3)

.loc_0x4B0:
  li        r3, 0x1C
  bl        -0x2FE810
  mr.       r0, r3
  beq-      .loc_0x4CC
  li        r4, 0x4
  bl        -0x1D26C
  mr        r0, r3

.loc_0x4CC:
  stw       r0, 0xE0(r29)
  lis       r3, 0x8051
  addi      r7, r3, 0x3CF4
  mr        r4, r30
  lwz       r3, 0xE0(r29)
  addi      r6, r31, 0x38
  lwz       r5, 0xBC(r29)
  lfs       f1, 0x0(r7)
  bl        -0x1CD54
  lis       r4, 0x8051
  lwz       r3, 0xE0(r29)
  lfs       f1, 0x3CF4(r4)
  mr        r4, r30
  lwz       r5, 0xBC(r29)
  addi      r6, r31, 0x54
  bl        -0x1CD70
  lis       r4, 0x8051
  lwz       r3, 0xE0(r29)
  lfs       f1, 0x3CF4(r4)
  mr        r4, r30
  lwz       r5, 0xBC(r29)
  addi      r6, r31, 0x74
  bl        -0x1CD8C
  lis       r4, 0x8051
  lwz       r3, 0xE0(r29)
  lfs       f1, 0x3CF4(r4)
  mr        r4, r30
  lwz       r5, 0xBC(r29)
  addi      r6, r31, 0x94
  bl        -0x1CDA8
  lwz       r5, 0xBC(r29)
  mr        r3, r29
  mr        r4, r30
  bl        -0xC3D8
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
 * Address:	80322774
 * Size:	000094
 */
void commonUpdate__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0xC24C
  lis       r4, 0x8051
  lfsu      f1, 0x3F0C(r4)
  mr        r3, r31
  lfs       f2, 0x4(r4)
  bl        -0xC464
  lwz       r4, 0xA8(r31)
  lwz       r3, 0xC(r4)
  lwz       r0, 0x8(r4)
  add       r0, r3, r0
  stw       r0, 0xE4(r31)
  lwz       r3, 0xE0(r31)
  bl        -0x1D2D0
  lfs       f3, 0x40(r31)
  lfs       f2, 0x243C(r2)
  lfs       f1, -0x658(r2)
  lfs       f0, 0x2440(r2)
  fadds     f2, f3, f2
  lwz       r3, 0xBC(r31)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
  lwz       r3, 0xBC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
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
 * Address:	80322808
 * Size:	0000B0
 */
void doUpdate__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x48(r30)
  cmplwi    r0, 0
  beq-      .loc_0x40
  li        r31, 0x1
  b         .loc_0x94

.loc_0x40:
  lwz       r0, 0x38(r30)
  cmpwi     r0, 0x4
  bne-      .loc_0x80
  lwz       r0, 0xAC(r30)
  cmpwi     r0, 0x1
  bne-      .loc_0x70
  lwz       r3, 0xC0(r30)
  lbz       r0, 0x2C(r3)
  cmplwi    r0, 0
  bne-      .loc_0x70
  lfs       f1, -0x658(r2)
  bl        -0x18774

.loc_0x70:
  mr        r3, r30
  bl        0x890
  mr        r31, r3
  b         .loc_0x94

.loc_0x80:
  lwz       r3, 0xC0(r30)
  lbz       r0, 0x2C(r3)
  cmplwi    r0, 0
  beq-      .loc_0x94
  bl        -0x18704

.loc_0x94:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803228B8
 * Size:	00008C
 */
void doDraw__Q32og9newScreen20ObjSMenuPauseDoukutuFR8Graphics(void)
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
  lwz       r0, 0xBC(r3)
  cmplwi    r0, 0
  beq-      .loc_0x64
  addi      r31, r30, 0x190
  lwz       r3, 0xC0(r29)
  mr        r4, r31
  bl        -0x17764
  lwz       r3, 0xC4(r29)
  mr        r4, r31
  bl        -0x17770
  lwz       r3, 0xBC(r29)
  mr        r4, r30
  mr        r5, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     

.loc_0x64:
  mr        r3, r29
  mr        r4, r30
  bl        -0xBA98
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
 * Address:	80322944
 * Size:	0000A4
 */
void doStart__Q32og9newScreen20ObjSMenuPauseDoukutuFPCQ26Screen13StartSceneArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x658(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0xE0(r3)
  bl        -0x1D208
  lwz       r3, 0xE0(r30)
  li        r4, 0x1
  bl        -0x1D270
  lwz       r3, 0xE0(r30)
  lfs       f1, -0x64C(r2)
  bl        -0x1D2D8
  lwz       r3, 0xE0(r30)
  bl        -0x1D0D0
  lis       r3, 0x36
  lis       r6, 0x305F
  addi      r5, r3, 0x3035
  lis       r8, 0x315F
  lis       r4, 0x325F
  mr        r3, r30
  mr        r7, r5
  mr        r9, r5
  addi      r6, r6, 0x3030
  addi      r8, r8, 0x3030
  addi      r10, r4, 0x3030
  bl        -0xBEA8
  mr        r3, r30
  bl        -0xBE44
  mr        r3, r30
  mr        r4, r31
  bl        -0xC00C
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
 * Address:	803229E8
 * Size:	000008
 */
void doEnd__Q32og9newScreen20ObjSMenuPauseDoukutuFPCQ26Screen11EndSceneArg(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	803229F0
 * Size:	00003C
 */
void doUpdateFinish__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0xC37C
  lwz       r3, 0xC0(r31)
  bl        -0x18878
  lwz       r3, 0xC4(r31)
  bl        -0x18880
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80322A2C
 * Size:	00004C
 */
void doUpdateFadeout__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA0(r12)
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
 * Address:	80322A78
 * Size:	000158
 */
void doUpdateFadeoutFinish__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r0, 0x3C(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0x78
  bge-      .loc_0x38
  cmpwi     r0, 0
  beq-      .loc_0x98
  bge-      .loc_0x44
  b         .loc_0x124

.loc_0x38:
  cmpwi     r0, 0x4
  bge-      .loc_0x124
  b         .loc_0x58

.loc_0x44:
  bl        -0xC364
  mr        r3, r30
  li        r4, 0x2
  bl        -0xC7CC
  b         .loc_0x140

.loc_0x58:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x94(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  li        r4, 0x1
  bl        -0xC7EC
  b         .loc_0x140

.loc_0x78:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x98(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  li        r4, 0x1
  bl        -0xC80C
  b         .loc_0x140

.loc_0x98:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xA8(r30)
  mr        r31, r3
  lwz       r0, 0x14(r4)
  cmpwi     r0, 0x6
  beq-      .loc_0xE8
  bge-      .loc_0x110
  cmpwi     r0, 0x5
  bge-      .loc_0xCC
  b         .loc_0x110

.loc_0xCC:
  bl        0x12F47C
  mr        r3, r31
  li        r4, 0
  bl        0x12F410
  mr        r3, r30
  bl        0x57C
  b         .loc_0x110

.loc_0xE8:
  li        r4, 0
  bl        0x12F42C
  mr        r3, r30
  bl        0x568
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0
  bl        0x12F700

.loc_0x110:
  lwz       r4, 0xA8(r30)
  mr        r3, r30
  lwz       r4, 0x14(r4)
  bl        -0xC898
  b         .loc_0x140

.loc_0x124:
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0xEA0
  li        r4, 0x1C8
  subi      r5, r5, 0xDEC
  crclr     6, 0x6
  bl        -0x2F8574

.loc_0x140:
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
 * Address:	80322BD0
 * Size:	0001D8
 */
void menu_pause__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  lbz       r0, 0xE8(r3)
  cmplwi    r0, 0
  bne-      .loc_0x5C
  lwz       r3, -0x6514(r13)
  lfs       f2, 0xEC(r30)
  lfs       f1, 0x54(r3)
  lfs       f0, -0x64C(r2)
  fadds     f1, f2, f1
  stfs      f1, 0xEC(r30)
  lfs       f1, 0xEC(r30)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x5C
  li        r0, 0x1
  stb       r0, 0xE8(r30)

.loc_0x5C:
  mr        r3, r30
  bl        0x131410
  mr        r29, r3
  lwz       r3, 0xC0(r30)
  bl        -0x18030
  lis       r3, 0x800
  lwz       r4, 0x1C(r29)
  addi      r0, r3, 0x8
  and.      r0, r4, r0
  beq-      .loc_0xB4
  lwz       r3, 0xB0(r30)
  cmpwi     r3, 0
  ble-      .loc_0x1B8
  subi      r0, r3, 0x1
  stw       r0, 0xB0(r30)
  lwz       r0, 0xB0(r30)
  lwz       r3, 0xC0(r30)
  rlwinm    r4,r0,0,16,31
  bl        -0x18114
  mr        r3, r30
  bl        0x5C4
  b         .loc_0x1B8

.loc_0xB4:
  lis       r3, 0x400
  addi      r0, r3, 0x4
  and.      r0, r4, r0
  beq-      .loc_0xF4
  lwz       r3, 0xB0(r30)
  cmpwi     r3, 0x1
  bge-      .loc_0x1B8
  addi      r0, r3, 0x1
  stw       r0, 0xB0(r30)
  lwz       r0, 0xB0(r30)
  lwz       r3, 0xC0(r30)
  rlwinm    r4,r0,0,16,31
  bl        -0x18154
  mr        r3, r30
  bl        0x584
  b         .loc_0x1B8

.loc_0xF4:
  lbz       r0, 0xE8(r30)
  cmplwi    r0, 0
  beq-      .loc_0x1AC
  rlwinm.   r0,r4,0,23,23
  beq-      .loc_0x1AC
  lwz       r0, 0xB0(r30)
  cmpwi     r0, 0x1
  bne-      .loc_0x16C
  lbz       r0, 0x50(r30)
  cmplwi    r0, 0
  beq-      .loc_0x12C
  lwz       r3, -0x6858(r13)
  bl        -0x16080
  b         .loc_0x1B8

.loc_0x12C:
  lwz       r3, 0xC0(r30)
  bl        -0x18B6C
  li        r0, 0x1
  stw       r0, 0xB4(r30)
  lwz       r0, 0xB4(r30)
  lwz       r3, 0xC4(r30)
  rlwinm    r4,r0,0,16,31
  bl        -0x18120
  lwz       r3, 0xC4(r30)
  lfs       f1, -0x654(r2)
  bl        -0x18C24
  mr        r3, r30
  bl        0x75C
  lwz       r3, -0x6858(r13)
  bl        -0x16210
  b         .loc_0x1B8

.loc_0x16C:
  cmpwi     r0, 0
  bne-      .loc_0x1B8
  lwz       r3, 0xC0(r30)
  bl        -0x18BB4
  lwz       r4, 0xA8(r30)
  li        r0, 0x5
  mr        r3, r30
  stw       r0, 0x14(r4)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x84(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6858(r13)
  li        r31, 0x1
  bl        -0x16250
  b         .loc_0x1B8

.loc_0x1AC:
  mr        r3, r30
  bl        -0xC824
  mr        r31, r3

.loc_0x1B8:
  lwz       r0, 0x24(r1)
  mr        r3, r31
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
 * Address:	80322DA8
 * Size:	000010
 */
void doUpdateCancelAction__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0xA8(r3)
  li        r0, 0x5
  stw       r0, 0x14(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80322DB8
 * Size:	00006C
 */
void doUpdateLAction__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  bl        0x1311DC
  lis       r5, 0x804E
  lis       r4, 0x804E
  subi      r0, r5, 0x7B98
  li        r6, 0x271D
  stw       r0, 0x8(r1)
  subi      r7, r4, 0x7BA8
  li        r5, 0
  li        r0, 0x1
  stw       r3, 0x14(r1)
  mr        r3, r31
  addi      r4, r1, 0x8
  stw       r7, 0x8(r1)
  stw       r6, 0xC(r1)
  stb       r5, 0x10(r1)
  stb       r0, 0x11(r1)
  bl        -0xC614
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80322E24
 * Size:	0000C8
 */
void doUpdateRAction__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x34(r1)
  addi      r4, r4, 0x3CF4
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lbz       r0, 0x18(r4)
  cmplwi    r0, 0
  beq-      .loc_0x70
  bl        0x13115C
  lis       r5, 0x804E
  lis       r4, 0x804E
  subi      r0, r5, 0x7B98
  li        r6, 0x272B
  stw       r0, 0x18(r1)
  subi      r7, r4, 0x7BA8
  li        r5, 0
  li        r0, 0x1
  stw       r3, 0x24(r1)
  mr        r3, r31
  addi      r4, r1, 0x18
  stw       r7, 0x18(r1)
  stw       r6, 0x1C(r1)
  stb       r5, 0x20(r1)
  stb       r0, 0x21(r1)
  bl        -0xC5B0
  b         .loc_0xB4

.loc_0x70:
  bl        0x131114
  lis       r5, 0x804E
  lis       r4, 0x804E
  subi      r0, r5, 0x7B98
  li        r6, 0x271C
  stw       r0, 0x8(r1)
  subi      r7, r4, 0x7BA8
  li        r5, 0
  li        r0, 0x1
  stw       r3, 0x14(r1)
  mr        r3, r31
  addi      r4, r1, 0x8
  stw       r7, 0x8(r1)
  stw       r6, 0xC(r1)
  stb       r5, 0x10(r1)
  stb       r0, 0x11(r1)
  bl        -0xC5F8

.loc_0xB4:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80322EEC
 * Size:	0001E8
 */
void menu_giveup__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  lbz       r0, 0xF0(r3)
  cmplwi    r0, 0
  bne-      .loc_0x5C
  lwz       r3, -0x6514(r13)
  lfs       f2, 0xF4(r30)
  lfs       f1, 0x54(r3)
  lfs       f0, -0x64C(r2)
  fadds     f1, f2, f1
  stfs      f1, 0xF4(r30)
  lfs       f1, 0xF4(r30)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x5C
  li        r0, 0x1
  stb       r0, 0xF0(r30)

.loc_0x5C:
  mr        r3, r30
  bl        0x1310F4
  mr        r29, r3
  lwz       r3, 0xC4(r30)
  bl        -0x1834C
  lis       r3, 0x800
  lwz       r4, 0x1C(r29)
  addi      r0, r3, 0x8
  and.      r0, r4, r0
  beq-      .loc_0xB4
  lwz       r3, 0xB4(r30)
  cmpwi     r3, 0
  ble-      .loc_0x1C8
  subi      r0, r3, 0x1
  stw       r0, 0xB4(r30)
  lwz       r0, 0xB4(r30)
  lwz       r3, 0xC4(r30)
  rlwinm    r4,r0,0,16,31
  bl        -0x18430
  mr        r3, r30
  bl        0x36C
  b         .loc_0x1C8

.loc_0xB4:
  lis       r3, 0x400
  addi      r0, r3, 0x4
  and.      r0, r4, r0
  beq-      .loc_0xF4
  lwz       r3, 0xB4(r30)
  cmpwi     r3, 0x1
  bge-      .loc_0x1C8
  addi      r0, r3, 0x1
  stw       r0, 0xB4(r30)
  lwz       r0, 0xB4(r30)
  lwz       r3, 0xC4(r30)
  rlwinm    r4,r0,0,16,31
  bl        -0x18470
  mr        r3, r30
  bl        0x32C
  b         .loc_0x1C8

.loc_0xF4:
  lbz       r3, 0xF0(r30)
  cmplwi    r3, 0
  beq-      .loc_0x140
  rlwinm.   r0,r4,0,22,22
  beq-      .loc_0x140
  mr        r3, r30
  bl        0x384
  lwz       r0, 0xB0(r30)
  lwz       r3, 0xC0(r30)
  rlwinm    r4,r0,0,16,31
  bl        -0x18410
  lwz       r3, 0xC0(r30)
  lfs       f1, -0x654(r2)
  bl        -0x18F14
  lwz       r3, 0xC4(r30)
  bl        -0x18E88
  lwz       r3, -0x6858(r13)
  bl        -0x164D4
  b         .loc_0x1C8

.loc_0x140:
  cmplwi    r3, 0
  beq-      .loc_0x1BC
  rlwinm.   r0,r4,0,23,23
  beq-      .loc_0x1BC
  lwz       r0, 0xB4(r30)
  cmpwi     r0, 0
  bne-      .loc_0x184
  lwz       r4, 0xA8(r30)
  li        r0, 0x6
  mr        r3, r30
  stw       r0, 0x14(r4)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x84(r12)
  mtctr     r12
  bctrl     
  li        r31, 0x1
  b         .loc_0x1B0

.loc_0x184:
  mr        r3, r30
  bl        0x308
  lwz       r0, 0xB0(r30)
  lwz       r3, 0xC0(r30)
  rlwinm    r4,r0,0,16,31
  bl        -0x1848C
  lwz       r3, 0xC0(r30)
  lfs       f1, -0x654(r2)
  bl        -0x18F90
  lwz       r3, 0xC4(r30)
  bl        -0x18F04

.loc_0x1B0:
  lwz       r3, -0x6858(r13)
  bl        -0x1657C
  b         .loc_0x1C8

.loc_0x1BC:
  mr        r3, r30
  bl        -0xCB50
  mr        r31, r3

.loc_0x1C8:
  lwz       r0, 0x24(r1)
  mr        r3, r31
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
 * Address:	803230D4
 * Size:	000038
 */
void finishPause__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xC0(r3)
  bl        -0x18F58
  lwz       r3, 0xC4(r31)
  bl        -0x18F60
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8032310C
 * Size:	0000A8
 */
void menu__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0xAC(r3)
  cmpwi     r0, 0x6
  beq-      .loc_0x40
  bge-      .loc_0x90
  cmpwi     r0, 0x1
  beq-      .loc_0x34
  b         .loc_0x90

.loc_0x34:
  bl        -0x570
  mr        r4, r3
  b         .loc_0x90

.loc_0x40:
  lwz       r3, 0xA8(r31)
  lbz       r0, 0x11(r3)
  cmplwi    r0, 0
  beq-      .loc_0x84
  lfs       f2, 0xF8(r31)
  lfs       f1, -0x658(r2)
  fcmpo     cr0, f2, f1
  ble-      .loc_0x84
  lwz       r3, -0x6514(r13)
  lfs       f0, 0x54(r3)
  fsubs     f0, f2, f0
  stfs      f0, 0xF8(r31)
  lfs       f0, 0xF8(r31)
  fcmpo     cr0, f0, f1
  bge-      .loc_0x84
  lwz       r3, -0x6858(r13)
  bl        -0x15F00

.loc_0x84:
  mr        r3, r31
  bl        -0x2A8
  mr        r4, r3

.loc_0x90:
  lwz       r0, 0x14(r1)
  mr        r3, r4
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803231B4
 * Size:	000014
 */
void in_L__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  lfs       f0, -0x648(r2)
  stw       r0, 0x38(r3)
  stfs      f0, 0x4C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803231C8
 * Size:	000014
 */
void in_R__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  li        r0, 0x1
  lfs       f0, -0x648(r2)
  stw       r0, 0x38(r3)
  stfs      f0, 0x4C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803231DC
 * Size:	00000C
 */
void wait__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  li        r0, 0x4
  stw       r0, 0x38(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803231E8
 * Size:	00002C
 */
void out_L__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x2
  stw       r0, 0x38(r3)
  lwz       r3, -0x6858(r13)
  bl        -0x165B8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80323214
 * Size:	00002C
 */
void out_R__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x3
  stw       r0, 0x38(r3)
  lwz       r3, -0x6858(r13)
  bl        -0x165E4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80323240
 * Size:	0000C4
 */
void set_Blink_Normal__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x50(r3)
  cmplwi    r0, 0
  beq-      .loc_0x60
  lwz       r0, 0xB0(r31)
  cmpwi     r0, 0
  bne-      .loc_0x40
  lwz       r3, 0xCC(r31)
  lfs       f1, -0x650(r2)
  lfs       f2, -0x658(r2)
  bl        -0x19DA0
  b         .loc_0x50

.loc_0x40:
  lfs       f1, -0x658(r2)
  lwz       r3, 0xCC(r31)
  fmr       f2, f1
  bl        -0x19DB4

.loc_0x50:
  lwz       r3, 0xD0(r31)
  li        r0, 0x2
  stw       r0, 0x34(r3)
  b         .loc_0xB0

.loc_0x60:
  lwz       r0, 0xB0(r31)
  cmpwi     r0, 0
  bne-      .loc_0x90
  lwz       r3, 0xCC(r31)
  lfs       f1, -0x650(r2)
  lfs       f2, -0x658(r2)
  bl        -0x19DE0
  lfs       f1, -0x658(r2)
  lwz       r3, 0xD0(r31)
  fmr       f2, f1
  bl        -0x19DF0
  b         .loc_0xB0

.loc_0x90:
  lfs       f1, -0x658(r2)
  lwz       r3, 0xCC(r31)
  fmr       f2, f1
  bl        -0x19E04
  lwz       r3, 0xD0(r31)
  lfs       f1, -0x650(r2)
  lfs       f2, -0x658(r2)
  bl        -0x19E14

.loc_0xB0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80323304
 * Size:	000078
 */
void set_Blink_YesNo__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0xB4(r3)
  cmpwi     r0, 0
  bne-      .loc_0x44
  lwz       r3, 0xD8(r31)
  lfs       f1, -0x650(r2)
  lfs       f2, -0x658(r2)
  bl        -0x19E58
  lfs       f1, -0x658(r2)
  lwz       r3, 0xDC(r31)
  fmr       f2, f1
  bl        -0x19E68
  b         .loc_0x64

.loc_0x44:
  lfs       f1, -0x658(r2)
  lwz       r3, 0xD8(r31)
  fmr       f2, f1
  bl        -0x19E7C
  lwz       r3, 0xDC(r31)
  lfs       f1, -0x650(r2)
  lfs       f2, -0x658(r2)
  bl        -0x19E8C

.loc_0x64:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8032337C
 * Size:	00010C
 */
void set_Menu_Normal__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x650(r2)
  stw       r0, 0x14(r1)
  li        r0, 0x1
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r0, 0xAC(r3)
  lwz       r3, 0xCC(r3)
  bl        -0x19F4C
  lwz       r3, 0xD0(r31)
  lfs       f1, -0x644(r2)
  bl        -0x19F58
  lwz       r3, 0xD4(r31)
  bl        -0x19F24
  lwz       r3, 0xD8(r31)
  bl        -0x19F2C
  lwz       r3, 0xDC(r31)
  bl        -0x19F34
  lbz       r0, 0x50(r31)
  cmplwi    r0, 0
  beq-      .loc_0x98
  lwz       r0, 0xB0(r31)
  cmpwi     r0, 0
  bne-      .loc_0x78
  lwz       r3, 0xCC(r31)
  lfs       f1, -0x650(r2)
  lfs       f2, -0x658(r2)
  bl        -0x19F14
  b         .loc_0x88

.loc_0x78:
  lfs       f1, -0x658(r2)
  lwz       r3, 0xCC(r31)
  fmr       f2, f1
  bl        -0x19F28

.loc_0x88:
  lwz       r3, 0xD0(r31)
  li        r0, 0x2
  stw       r0, 0x34(r3)
  b         .loc_0xE8

.loc_0x98:
  lwz       r0, 0xB0(r31)
  cmpwi     r0, 0
  bne-      .loc_0xC8
  lwz       r3, 0xCC(r31)
  lfs       f1, -0x650(r2)
  lfs       f2, -0x658(r2)
  bl        -0x19F54
  lfs       f1, -0x658(r2)
  lwz       r3, 0xD0(r31)
  fmr       f2, f1
  bl        -0x19F64
  b         .loc_0xE8

.loc_0xC8:
  lfs       f1, -0x658(r2)
  lwz       r3, 0xCC(r31)
  fmr       f2, f1
  bl        -0x19F78
  lwz       r3, 0xD0(r31)
  lfs       f1, -0x650(r2)
  lfs       f2, -0x658(r2)
  bl        -0x19F88

.loc_0xE8:
  li        r0, 0
  lfs       f0, -0x658(r2)
  stb       r0, 0xE8(r31)
  stfs      f0, 0xEC(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80323488
 * Size:	0000D4
 */
void set_Menu_YesNo__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x6
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r0, 0xAC(r3)
  lwz       r3, 0xCC(r3)
  bl        -0x1A018
  lwz       r3, 0xD0(r31)
  bl        -0x1A020
  lwz       r3, 0xD4(r31)
  lfs       f1, -0x650(r2)
  bl        -0x1A068
  lwz       r3, 0xD8(r31)
  lfs       f1, -0x644(r2)
  bl        -0x1A074
  lwz       r3, 0xDC(r31)
  lfs       f1, -0x640(r2)
  bl        -0x1A080
  lwz       r0, 0xB4(r31)
  cmpwi     r0, 0
  bne-      .loc_0x80
  lwz       r3, 0xD8(r31)
  lfs       f1, -0x650(r2)
  lfs       f2, -0x658(r2)
  bl        -0x1A018
  lfs       f1, -0x658(r2)
  lwz       r3, 0xDC(r31)
  fmr       f2, f1
  bl        -0x1A028
  b         .loc_0xA0

.loc_0x80:
  lfs       f1, -0x658(r2)
  lwz       r3, 0xD8(r31)
  fmr       f2, f1
  bl        -0x1A03C
  lwz       r3, 0xDC(r31)
  lfs       f1, -0x650(r2)
  lfs       f2, -0x658(r2)
  bl        -0x1A04C

.loc_0xA0:
  li        r0, 0
  lis       r3, 0x8051
  stb       r0, 0xF0(r31)
  addi      r3, r3, 0x3F0C
  lfs       f0, -0x658(r2)
  stfs      f0, 0xF4(r31)
  lfs       f0, 0x8(r3)
  stfs      f0, 0xF8(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8032355C
 * Size:	000020
 */
void __sinit_ogObjSMenuPauseDoukutu_cpp(void)
{
/*
.loc_0x0:
  lfs       f2, -0x64C(r2)
  lis       r3, 0x8051
  lfs       f1, -0x63C(r2)
  stfsu     f2, 0x3F0C(r3)
  lfs       f0, -0x654(r2)
  stfs      f1, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8032357C
 * Size:	000008
 */
void @24@__dt__Q32og9newScreen20ObjSMenuPauseDoukutuFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x1444
*/
}