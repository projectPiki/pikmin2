

/*
 * --INFO--
 * Address:	8046F2BC
 * Size:	0002D8
 */
void __ct__Q23PSM17DirectorMgr_SceneFPQ23PSM17DirectorMgr_SceneUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r4
  mr        r4, r5
  bl        -0x12BA9C
  addi      r3, r30, 0xC
  bl        -0x452320
  lis       r4, 0x804F
  li        r3, 0
  subi      r4, r4, 0x680
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0xC(r30)
  stw       r28, 0x44(r30)
  stb       r3, 0x68(r30)
  stb       r3, 0x69(r30)
  stb       r3, 0x6A(r30)
  stb       r3, 0x6B(r30)
  stb       r3, 0x6C(r30)
  stb       r3, 0x6D(r30)
  b         .loc_0xF0

.loc_0x6C:
  rlwinm    r4,r3,0,24,31
  addi      r0, r3, 0x1
  addi      r5, r4, 0x6E
  li        r6, 0
  rlwinm    r4,r0,0,24,31
  stbx      r6, r30, r5
  addi      r5, r4, 0x6E
  addi      r0, r3, 0x2
  rlwinm    r4,r0,0,24,31
  stbx      r6, r30, r5
  addi      r5, r4, 0x6E
  addi      r0, r3, 0x3
  rlwinm    r4,r0,0,24,31
  stbx      r6, r30, r5
  addi      r5, r4, 0x6E
  addi      r0, r3, 0x4
  rlwinm    r4,r0,0,24,31
  stbx      r6, r30, r5
  addi      r5, r4, 0x6E
  addi      r0, r3, 0x5
  rlwinm    r4,r0,0,24,31
  stbx      r6, r30, r5
  addi      r5, r4, 0x6E
  addi      r0, r3, 0x6
  rlwinm    r4,r0,0,24,31
  stbx      r6, r30, r5
  addi      r0, r3, 0x7
  addi      r3, r3, 0x8
  addi      r5, r4, 0x6E
  rlwinm    r4,r0,0,24,31
  stbx      r6, r30, r5
  addi      r0, r4, 0x6E
  stbx      r6, r30, r0

.loc_0xF0:
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x10
  blt+      .loc_0x6C
  li        r0, 0
  addi      r3, r30, 0x48
  stb       r0, 0x7E(r30)
  addi      r4, r2, 0x2A00
  stb       r0, 0x7F(r30)
  stb       r0, 0x80(r30)
  stb       r0, 0x81(r30)
  stb       r0, 0x82(r30)
  stb       r0, 0x83(r30)
  stb       r0, 0x84(r30)
  stb       r0, 0x85(r30)
  bl        -0x3A4B8C
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x258
  li        r31, 0
  b         .loc_0x248

.loc_0x150:
  rlwinm    r0,r31,0,24,31
  cmpwi     r0, 0x4
  beq-      .loc_0x1B8
  bge-      .loc_0x16C
  cmpwi     r0, 0
  bge-      .loc_0x178
  b         .loc_0x228

.loc_0x16C:
  cmpwi     r0, 0x8
  bge-      .loc_0x228
  b         .loc_0x1F8

.loc_0x178:
  li        r3, 0x18
  bl        -0x44B594
  mr.       r29, r3
  beq-      .loc_0x1A8
  li        r4, 0
  li        r5, 0
  bl        -0x12B6C8
  addi      r3, r29, 0xC
  bl        -0x448B84
  lis       r3, 0x804F
  subi      r0, r3, 0x20F0
  stw       r0, 0x0(r29)

.loc_0x1A8:
  rlwinm    r3,r31,2,22,29
  addi      r0, r3, 0x24
  stwx      r29, r30, r0
  b         .loc_0x244

.loc_0x1B8:
  li        r3, 0x18
  bl        -0x44B5D4
  mr.       r29, r3
  beq-      .loc_0x1E8
  li        r4, 0
  li        r5, 0
  bl        -0x12B708
  addi      r3, r29, 0xC
  bl        -0x448BC4
  lis       r3, 0x804F
  subi      r0, r3, 0x20F0
  stw       r0, 0x0(r29)

.loc_0x1E8:
  rlwinm    r3,r31,2,22,29
  addi      r0, r3, 0x24
  stwx      r29, r30, r0
  b         .loc_0x244

.loc_0x1F8:
  li        r3, 0xC
  bl        -0x44B614
  mr.       r4, r3
  beq-      .loc_0x218
  li        r4, 0
  li        r5, 0
  bl        -0x12B748
  mr        r4, r3

.loc_0x218:
  rlwinm    r3,r31,2,22,29
  addi      r0, r3, 0x24
  stwx      r4, r30, r0
  b         .loc_0x244

.loc_0x228:
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x2580
  li        r4, 0x3C
  subi      r5, r5, 0x2564
  crclr     6, 0x6
  bl        -0x444EBC

.loc_0x244:
  addi      r31, r31, 0x1

.loc_0x248:
  rlwinm    r0,r31,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x150
  b         .loc_0x2B4

.loc_0x258:
  lis       r4, 0x804A
  lis       r3, 0x804A
  subi      r29, r4, 0x2580
  li        r28, 0
  subi      r31, r3, 0x2564
  b         .loc_0x2A8

.loc_0x270:
  rlwinm    r4,r28,2,22,29
  lwz       r3, 0x44(r30)
  addi      r0, r4, 0x24
  lwzx      r3, r3, r0
  stwx      r3, r30, r0
  lwzx      r0, r30, r0
  cmplwi    r0, 0
  bne-      .loc_0x2A4
  mr        r3, r29
  mr        r5, r31
  li        r4, 0x45
  crclr     6, 0x6
  bl        -0x444F1C

.loc_0x2A4:
  addi      r28, r28, 0x1

.loc_0x2A8:
  rlwinm    r0,r28,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x270

.loc_0x2B4:
  lwz       r0, 0x24(r1)
  mr        r3, r30
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
 * Address:	........
 * Size:	000054
 */
void JSUList<Game::Creature>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8046F594
 * Size:	00008C
 */
void __dt__Q23PSM17DirectorMgr_SceneFv(void)
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
  beq-      .loc_0x70
  lis       r4, 0x804F
  addi      r3, r30, 0xC
  subi      r5, r4, 0x680
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x10
  stw       r0, 0xC(r30)
  bl        -0x45259C
  cmplwi    r30, 0
  beq-      .loc_0x60
  lis       r4, 0x804E
  mr        r3, r30
  subi      r0, r4, 0x5040
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x3B53F4

.loc_0x60:
  extsh.    r0, r31
  ble-      .loc_0x70
  mr        r3, r30
  bl        -0x44B54C

.loc_0x70:
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
 * Address:	8046F620
 * Size:	000294
 */
void initTrackMap__Q23PSM17DirectorMgr_SceneFRQ28PSSystem11DirectedBgm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x94(r1)
  stmw      r27, 0x7C(r1)
  mr        r31, r3
  mr        r27, r4
  addi      r3, r1, 0x48
  subi      r30, r5, 0x2580
  li        r4, 0
  bl        0x2288
  lwz       r29, 0x14(r27)
  addi      r4, r30, 0x28
  mr        r28, r29
  mr        r3, r29
  bl        -0x3A4F9C
  cmpwi     r3, 0
  beq-      .loc_0x5C
  mr        r3, r29
  addi      r4, r30, 0x38
  bl        -0x3A4FB0
  cmpwi     r3, 0
  bne-      .loc_0x64

.loc_0x5C:
  addi      r29, r30, 0x48
  b         .loc_0x184

.loc_0x64:
  mr        r3, r29
  addi      r4, r30, 0x68
  bl        -0x3A4FCC
  cmpwi     r3, 0
  bne-      .loc_0xB8
  mr        r3, r27
  addi      r29, r30, 0x78
  lwz       r12, 0x10(r27)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  beq-      .loc_0xB0
  addi      r3, r30, 0
  addi      r5, r30, 0x1C
  li        r4, 0x74
  crclr     6, 0x6
  bl        -0x44508C

.loc_0xB0:
  lwz       r28, 0x330(r27)
  b         .loc_0x184

.loc_0xB8:
  addi      r3, r2, 0x2A04
  bl        -0x3A4DCC
  mr        r5, r3
  mr        r4, r29
  addi      r3, r2, 0x2A04
  bl        -0x3A506C
  cmpwi     r3, 0
  bne-      .loc_0x118
  mr        r3, r27
  addi      r29, r30, 0x78
  lwz       r12, 0x10(r27)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  beq-      .loc_0x110
  addi      r3, r30, 0
  addi      r5, r30, 0x1C
  li        r4, 0x7E
  crclr     6, 0x6
  bl        -0x4450EC

.loc_0x110:
  lwz       r28, 0x330(r27)
  b         .loc_0x184

.loc_0x118:
  mr        r3, r29
  addi      r4, r30, 0x9C
  bl        -0x3A5080
  cmpwi     r3, 0
  beq-      .loc_0x140
  mr        r3, r29
  addi      r4, r30, 0xAC
  bl        -0x3A5094
  cmpwi     r3, 0
  bne-      .loc_0x180

.loc_0x140:
  mr        r3, r27
  addi      r29, r30, 0xBC
  lwz       r12, 0x10(r27)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  beq-      .loc_0x178
  addi      r3, r30, 0
  addi      r5, r30, 0x1C
  li        r4, 0x8B
  crclr     6, 0x6
  bl        -0x445154

.loc_0x178:
  lwz       r28, 0x330(r27)
  b         .loc_0x184

.loc_0x180:
  addi      r29, r30, 0xDC

.loc_0x184:
  mr        r4, r29
  addi      r3, r1, 0x48
  li        r5, 0x2
  bl        -0x136D00
  mr        r5, r28
  addi      r3, r1, 0x8
  addi      r4, r1, 0x48
  bl        0x21B8
  lwz       r0, 0x8(r1)
  lis       r3, 0x804F
  lwz       r4, 0xC(r1)
  addic.    r5, r1, 0x64
  subi      r3, r3, 0x558
  stw       r0, 0x48(r31)
  addi      r0, r3, 0x10
  stw       r4, 0x4C(r31)
  lwz       r5, 0x10(r1)
  lwz       r4, 0x14(r1)
  stw       r5, 0x50(r31)
  stw       r4, 0x54(r31)
  lwz       r5, 0x18(r1)
  lwz       r4, 0x1C(r1)
  stw       r5, 0x58(r31)
  stw       r4, 0x5C(r31)
  lwz       r5, 0x20(r1)
  lwz       r4, 0x24(r1)
  stw       r5, 0x60(r31)
  stw       r4, 0x64(r31)
  lbz       r4, 0x28(r1)
  stb       r4, 0x68(r31)
  lbz       r4, 0x29(r1)
  stb       r4, 0x69(r31)
  lbz       r4, 0x2A(r1)
  stb       r4, 0x6A(r31)
  lbz       r4, 0x2B(r1)
  stb       r4, 0x6B(r31)
  lbz       r4, 0x2C(r1)
  stb       r4, 0x6C(r31)
  lbz       r4, 0x2D(r1)
  stb       r4, 0x6D(r31)
  lwz       r5, 0x2E(r1)
  lwz       r4, 0x32(r1)
  stw       r5, 0x6E(r31)
  stw       r4, 0x72(r31)
  lwz       r5, 0x36(r1)
  lwz       r4, 0x3A(r1)
  stw       r5, 0x76(r31)
  stw       r4, 0x7A(r31)
  lwz       r5, 0x3E(r1)
  lwz       r4, 0x42(r1)
  stw       r5, 0x7E(r31)
  stw       r4, 0x82(r31)
  stw       r3, 0x48(r1)
  stw       r0, 0x64(r1)
  beq-      .loc_0x274
  lis       r3, 0x804F
  li        r0, 0
  subi      r3, r3, 0x68C
  stw       r0, -0x6E40(r13)
  stw       r3, 0x64(r1)

.loc_0x274:
  addi      r3, r1, 0x48
  li        r4, 0
  bl        -0x136ED8
  lmw       r27, 0x7C(r1)
  lwz       r0, 0x94(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	8046F8B4
 * Size:	000770
 */
void newDirector__Q23PSM17DirectorMgr_SceneFUcRQ28PSSystem11DirectedBgm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r22, 0x8(r1)
  mr        r29, r3
  lis       r3, 0x804A
  mr        r27, r4
  addi      r26, r29, 0x48
  mr        r30, r5
  subi      r31, r3, 0x2580
  lbz       r0, 0x68(r29)
  cmplwi    r0, 0
  bne-      .loc_0x48
  addi      r3, r31, 0
  addi      r5, r31, 0xFC
  li        r4, 0xA1
  crclr     6, 0x6
  bl        -0x4452B8

.loc_0x48:
  rlwinm    r0,r27,0,24,31
  li        r25, 0
  cmplwi    r0, 0x7
  li        r28, 0
  bgt-      .loc_0x6C8
  lis       r3, 0x804F
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x780
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  li        r3, 0x68
  bl        -0x44BA88
  mr.       r0, r3
  beq-      .loc_0xA8
  lbz       r5, 0x21(r26)
  addi      r4, r2, 0x2A0C
  lfs       f1, 0x2A14(r2)
  li        r6, 0x64
  lfs       f2, 0x2A18(r2)
  li        r7, 0x64
  li        r8, 0x64
  bl        -0x181FC
  mr        r0, r3

.loc_0xA8:
  cmplwi    r0, 0
  mr        r25, r0
  bne-      .loc_0xC8
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xAD
  crclr     6, 0x6
  bl        -0x445338

.loc_0xC8:
  li        r23, 0
  b         .loc_0x110

.loc_0xD0:
  lbz       r0, 0x20(r26)
  add       r24, r3, r0
  cmpwi     r24, 0x10
  blt-      .loc_0xF4
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x445364

.loc_0xF4:
  rlwinm    r4,r24,2,0,29
  mr        r3, r25
  addi      r0, r4, 0x74
  mr        r4, r23
  lwzx      r5, r30, r0
  bl        -0x12C8E4
  addi      r23, r23, 0x1

.loc_0x110:
  lbz       r0, 0x21(r26)
  rlwinm    r3,r23,0,24,31
  cmpw      r3, r0
  blt+      .loc_0xD0
  b         .loc_0x6C8
  li        r3, 0x6C
  bl        -0x44BB38
  mr.       r24, r3
  beq-      .loc_0x158
  lbz       r5, 0x23(r26)
  addi      r4, r31, 0x11C
  li        r6, 0x64
  li        r7, 0x64
  li        r8, 0x64
  bl        -0x17AC0
  lis       r3, 0x804F
  subi      r0, r3, 0x2240
  stw       r0, 0x0(r24)

.loc_0x158:
  cmplwi    r24, 0
  mr        r25, r24
  bne-      .loc_0x178
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xBC
  crclr     6, 0x6
  bl        -0x4453E8

.loc_0x178:
  li        r23, 0
  b         .loc_0x1D0

.loc_0x180:
  lbz       r4, 0x22(r26)
  lbz       r0, 0x20(r26)
  lbz       r3, 0x21(r26)
  add       r0, r0, r4
  add       r24, r0, r5
  add       r24, r3, r24
  cmpwi     r24, 0x10
  blt-      .loc_0x1B4
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x445424

.loc_0x1B4:
  rlwinm    r4,r24,2,0,29
  mr        r3, r25
  addi      r0, r4, 0x74
  mr        r4, r23
  lwzx      r5, r30, r0
  bl        -0x12C9A4
  addi      r23, r23, 0x1

.loc_0x1D0:
  lbz       r0, 0x23(r26)
  rlwinm    r5,r23,0,24,31
  cmpw      r5, r0
  blt+      .loc_0x180
  b         .loc_0x6C8
  li        r3, 0x6C
  bl        -0x44BBF8
  mr.       r24, r3
  beq-      .loc_0x218
  lbz       r5, 0x24(r26)
  addi      r4, r31, 0x128
  li        r6, 0x64
  li        r7, 0x64
  li        r8, 0x64
  bl        -0x17B80
  lis       r3, 0x804F
  subi      r0, r3, 0x21F8
  stw       r0, 0x0(r24)

.loc_0x218:
  cmplwi    r24, 0
  mr        r25, r24
  bne-      .loc_0x238
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xCE
  crclr     6, 0x6
  bl        -0x4454A8

.loc_0x238:
  li        r24, 0
  b         .loc_0x298

.loc_0x240:
  lbz       r3, 0x22(r26)
  lbz       r0, 0x20(r26)
  lbz       r4, 0x23(r26)
  add       r0, r0, r3
  lbz       r3, 0x21(r26)
  add       r0, r0, r4
  add       r23, r0, r5
  add       r23, r3, r23
  cmpwi     r23, 0x10
  blt-      .loc_0x27C
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x4454EC

.loc_0x27C:
  rlwinm    r4,r23,2,0,29
  mr        r3, r25
  addi      r0, r4, 0x74
  mr        r4, r24
  lwzx      r5, r30, r0
  bl        -0x12CA6C
  addi      r24, r24, 0x1

.loc_0x298:
  lbz       r0, 0x24(r26)
  rlwinm    r5,r24,0,24,31
  cmpw      r5, r0
  blt+      .loc_0x240
  b         .loc_0x6C8
  li        r3, 0x58
  bl        -0x44BCC0
  mr.       r0, r3
  beq-      .loc_0x2D4
  lbz       r5, 0x22(r26)
  addi      r4, r31, 0x134
  li        r6, 0x64
  li        r7, 0x64
  bl        -0x184FC
  mr        r0, r3

.loc_0x2D4:
  cmplwi    r0, 0
  mr        r25, r0
  bne-      .loc_0x2F4
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xDB
  crclr     6, 0x6
  bl        -0x445564

.loc_0x2F4:
  li        r24, 0
  b         .loc_0x344

.loc_0x2FC:
  lbz       r0, 0x20(r26)
  lbz       r3, 0x21(r26)
  add       r23, r0, r4
  add       r23, r3, r23
  cmpwi     r23, 0x10
  blt-      .loc_0x328
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x445598

.loc_0x328:
  rlwinm    r4,r23,2,0,29
  mr        r3, r25
  addi      r0, r4, 0x74
  mr        r4, r24
  lwzx      r5, r30, r0
  bl        -0x12CB18
  addi      r24, r24, 0x1

.loc_0x344:
  lbz       r0, 0x22(r26)
  rlwinm    r4,r24,0,24,31
  cmpw      r4, r0
  blt+      .loc_0x2FC
  b         .loc_0x6C8
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0x3B0
  li        r3, 0x58
  bl        -0x44BD8C
  mr.       r23, r3
  beq-      .loc_0x3A8
  lbz       r5, 0x25(r26)
  addi      r4, r31, 0x140
  li        r6, 0x64
  li        r7, 0x64
  bl        -0x185C8
  lis       r3, 0x804F
  subi      r0, r3, 0x6C4
  stw       r0, 0x0(r23)

.loc_0x3A8:
  mr        r25, r23
  b         .loc_0x3E8

.loc_0x3B0:
  li        r3, 0x68
  bl        -0x44BDC4
  mr.       r0, r3
  beq-      .loc_0x3E4
  lbz       r5, 0x25(r26)
  addi      r4, r31, 0x140
  lfs       f1, 0x2A24(r2)
  li        r6, 0xC8
  lfs       f2, 0x2A28(r2)
  li        r7, 0xC8
  li        r8, 0xA
  bl        -0x18538
  mr        r0, r3

.loc_0x3E4:
  mr        r25, r0

.loc_0x3E8:
  cmplwi    r25, 0
  bne-      .loc_0x404
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x113
  crclr     6, 0x6
  bl        -0x445674

.loc_0x404:
  li        r24, 0
  b         .loc_0x46C

.loc_0x40C:
  lbz       r3, 0x22(r26)
  lbz       r0, 0x20(r26)
  lbz       r4, 0x23(r26)
  add       r0, r0, r3
  lbz       r5, 0x24(r26)
  add       r0, r0, r4
  lbz       r3, 0x21(r26)
  add       r0, r0, r5
  add       r23, r0, r6
  add       r23, r3, r23
  cmpwi     r23, 0x10
  blt-      .loc_0x450
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x4456C0

.loc_0x450:
  rlwinm    r4,r23,2,0,29
  mr        r3, r25
  addi      r0, r4, 0x74
  mr        r4, r24
  lwzx      r5, r30, r0
  bl        -0x12CC40
  addi      r24, r24, 0x1

.loc_0x46C:
  lbz       r0, 0x25(r26)
  rlwinm    r6,r24,0,24,31
  cmpw      r6, r0
  blt+      .loc_0x40C
  b         .loc_0x6C8
  li        r4, 0
  mr        r5, r4
  b         .loc_0x4A8

.loc_0x48C:
  rlwinm    r3,r5,0,24,31
  addi      r0, r3, 0x26
  lbzx      r0, r26, r0
  cmplwi    r0, 0
  beq-      .loc_0x4A4
  addi      r4, r4, 0x1

.loc_0x4A4:
  addi      r5, r5, 0x1

.loc_0x4A8:
  rlwinm    r0,r5,0,24,31
  cmplwi    r0, 0x10
  blt+      .loc_0x48C
  li        r5, 0
  mr        r6, r5
  b         .loc_0x4E8

.loc_0x4C0:
  rlwinm    r3,r6,0,24,31
  addi      r0, r3, 0x36
  lbzx      r0, r26, r0
  cmplwi    r0, 0
  beq-      .loc_0x4E4
  rlwinm    r0,r0,0,24,31
  slw       r0, r0, r3
  or        r0, r5, r0
  rlwinm    r5,r0,0,24,31

.loc_0x4E4:
  addi      r6, r6, 0x1

.loc_0x4E8:
  rlwinm    r0,r6,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x4C0
  lwz       r12, 0x0(r29)
  mr        r3, r29
  mr        r6, r30
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr.       r25, r3
  bne-      .loc_0x528
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x122
  crclr     6, 0x6
  bl        -0x445798

.loc_0x528:
  li        r23, 0
  li        r22, 0
  b         .loc_0x584

.loc_0x534:
  rlwinm    r24,r22,0,24,31
  addi      r0, r24, 0x26
  lbzx      r0, r26, r0
  cmplwi    r0, 0
  beq-      .loc_0x580
  cmpwi     r24, 0x10
  blt-      .loc_0x564
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x4457D4

.loc_0x564:
  rlwinm    r3,r24,2,0,29
  mr        r4, r23
  addi      r0, r3, 0x74
  mr        r3, r25
  lwzx      r5, r30, r0
  addi      r23, r23, 0x1
  bl        -0x12CD58

.loc_0x580:
  addi      r22, r22, 0x1

.loc_0x584:
  rlwinm    r0,r22,0,24,31
  cmplwi    r0, 0x10
  blt+      .loc_0x534
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0x6C8
  li        r5, 0
  mr        r4, r5
  b         .loc_0x5E0

.loc_0x5BC:
  rlwinm    r3,r4,0,24,31
  addi      r0, r3, 0x26
  lbzx      r0, r26, r0
  cmplwi    r0, 0
  beq-      .loc_0x5DC
  slw       r0, r0, r3
  or        r0, r5, r0
  rlwinm    r5,r0,0,16,31

.loc_0x5DC:
  addi      r4, r4, 0x1

.loc_0x5E0:
  rlwinm    r0,r4,0,24,31
  cmplwi    r0, 0x10
  blt+      .loc_0x5BC
  sth       r5, 0x34C(r30)
  b         .loc_0x6C8
  li        r3, 0x58
  bl        -0x44C008
  mr.       r4, r3
  beq-      .loc_0x60C
  bl        -0x193C0
  mr        r4, r3

.loc_0x60C:
  lbz       r0, 0xB4(r30)
  mr        r28, r4
  li        r3, 0
  cmplwi    r0, 0x1
  bne-      .loc_0x630
  lwz       r0, 0x70(r30)
  cmplwi    r0, 0
  beq-      .loc_0x630
  li        r3, 0x1

.loc_0x630:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x64C
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x19F
  crclr     6, 0x6
  bl        -0x4458BC

.loc_0x64C:
  lwz       r5, 0x70(r30)
  mr        r3, r28
  li        r4, 0
  bl        -0x12CE34
  b         .loc_0x6C8
  li        r3, 0x54
  bl        -0x44C074
  mr.       r4, r3
  beq-      .loc_0x678
  bl        -0x191DC
  mr        r4, r3

.loc_0x678:
  lbz       r0, 0xB4(r30)
  mr        r25, r4
  li        r3, 0
  cmplwi    r0, 0x1
  bne-      .loc_0x69C
  lwz       r0, 0x70(r30)
  cmplwi    r0, 0
  beq-      .loc_0x69C
  li        r3, 0x1

.loc_0x69C:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x6B8
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x19F
  crclr     6, 0x6
  bl        -0x445928

.loc_0x6B8:
  lwz       r5, 0x70(r30)
  mr        r3, r25
  li        r4, 0
  bl        -0x12CEA0

.loc_0x6C8:
  cmplwi    r25, 0
  li        r22, 0
  bne-      .loc_0x6E4
  cmplwi    r28, 0
  beq-      .loc_0x6E4
  mr        r22, r28
  b         .loc_0x6F8

.loc_0x6E4:
  cmplwi    r25, 0
  beq-      .loc_0x6F8
  cmplwi    r28, 0
  bne-      .loc_0x6F8
  mr        r22, r25

.loc_0x6F8:
  cmplwi    r22, 0
  bne-      .loc_0x714
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x14E
  crclr     6, 0x6
  bl        -0x445984

.loc_0x714:
  lwz       r12, 0x0(r29)
  rlwinm    r0,r27,2,22,29
  add       r4, r29, r0
  mr        r3, r29
  lwz       r12, 0x1C(r12)
  lwz       r23, 0x24(r4)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x744
  stw       r22, 0x8(r23)
  b         .loc_0x748

.loc_0x744:
  stw       r22, 0x4(r23)

.loc_0x748:
  mr        r3, r29
  mr        r4, r22
  mr        r5, r27
  bl        .loc_0x770
  mr        r3, r22
  lmw       r22, 0x8(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x770:
*/
}

/*
 * --INFO--
 * Address:	80470024
 * Size:	0000A8
 */
void adaptDirectorActor__Q23PSM17DirectorMgr_SceneFPQ28PSSystem12DirectorBaseUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  rlwinm    r6,r5,0,24,31
  stw       r0, 0x14(r1)
  rlwinm    r0,r5,2,22,29
  add       r3, r3, r0
  cmplwi    r6, 0x7
  lwz       r5, 0x24(r3)
  bgt-      .loc_0x7C
  lis       r3, 0x804F
  rlwinm    r0,r6,2,0,29
  subi      r3, r3, 0x760
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  stw       r5, 0x64(r4)
  b         .loc_0x98
  stw       r5, 0x54(r4)
  b         .loc_0x98
  stw       r5, 0x64(r4)
  b         .loc_0x98
  stw       r5, 0x64(r4)
  b         .loc_0x98
  stw       r5, 0x64(r4)
  b         .loc_0x98
  stw       r5, 0x48(r4)
  b         .loc_0x98
  stw       r5, 0x48(r4)
  b         .loc_0x98
  stw       r5, 0x50(r4)
  b         .loc_0x98

.loc_0x7C:
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x2580
  li        r4, 0x195
  subi      r5, r5, 0x2564
  crclr     6, 0x6
  bl        -0x445A78

.loc_0x98:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804700CC
 * Size:	000094
 */
void newPikminNumberDirector__Q23PSM17DirectorMgr_SceneFiUcRQ28PSSystem11DirectedBgm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r3, 0x50
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r4
  bl        -0x44C254
  mr.       r31, r3
  beq-      .loc_0x4C
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        -0x19278
  mr        r31, r3

.loc_0x4C:
  cmplwi    r31, 0
  bne-      .loc_0x70
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x2580
  li        r4, 0x19C
  subi      r5, r5, 0x2564
  crclr     6, 0x6
  bl        -0x445AF8

.loc_0x70:
  lwz       r0, 0x24(r1)
  mr        r3, r31
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
 * Address:	80470160
 * Size:	000090
 */
void newPikminNumberDirector__Q23PSM25DirectorMgr_Scene_AutoBgmFiUcRQ28PSSystem11DirectedBgm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r3, 0x54
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  bl        -0x44C2E4
  mr.       r0, r3
  beq-      .loc_0x48
  mr        r4, r29
  mr        r5, r30
  mr        r6, r31
  bl        -0x191DC
  mr        r0, r3

.loc_0x48:
  cmplwi    r0, 0
  mr        r31, r0
  bne-      .loc_0x70
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x2580
  li        r4, 0x1A9
  subi      r5, r5, 0x2564
  crclr     6, 0x6
  bl        -0x445B8C

.loc_0x70:
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
 * Address:	804701F0
 * Size:	000050
 */
void __ct__Q23PSM18DirectorMgr_BattleFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x2
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x12C9C0
  addi      r3, r31, 0xC
  bl        -0x453244
  lis       r4, 0x804F
  mr        r3, r31
  subi      r4, r4, 0x704
  stw       r4, 0x0(r31)
  addi      r0, r4, 0x10
  stw       r0, 0xC(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80470240
 * Size:	000244
 */
void newDirector__Q23PSM18DirectorMgr_BattleFUcRQ28PSSystem11DirectedBgm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x34(r1)
  stmw      r25, 0x14(r1)
  mr        r25, r4
  mr        r27, r5
  subi      r31, r3, 0x2580
  li        r30, 0
  li        r29, 0xFF
  li        r28, 0xFF
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x4C
  addi      r3, r31, 0x14C
  addi      r5, r31, 0x1C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x445C48

.loc_0x4C:
  lwz       r26, -0x6780(r13)
  cmplwi    r26, 0
  bne-      .loc_0x6C
  addi      r3, r31, 0x14C
  addi      r5, r31, 0x1C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x445C68

.loc_0x6C:
  mr        r3, r26
  lwz       r12, 0x0(r26)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r25,0,24,31
  cmpwi     r0, 0x1
  beq-      .loc_0x138
  bge-      .loc_0x174
  cmpwi     r0, 0
  bge-      .loc_0x9C
  b         .loc_0x174

.loc_0x9C:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xB0
  li        r28, 0xE
  li        r29, 0x1
  b         .loc_0xB8

.loc_0xB0:
  li        r28, 0xA
  li        r29, 0x1

.loc_0xB8:
  li        r3, 0x54
  bl        -0x44C458
  mr.       r0, r3
  beq-      .loc_0xD4
  rlwinm    r4,r29,0,24,31
  bl        -0x17F54
  mr        r0, r3

.loc_0xD4:
  lwz       r26, -0x6E50(r13)
  mr        r30, r0
  cmplwi    r26, 0
  beq-      .loc_0x174
  bne-      .loc_0xFC
  addi      r3, r31, 0x158
  addi      r5, r31, 0x1C
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x445CF8

.loc_0xFC:
  lwz       r3, -0x6E50(r13)
  lwz       r0, 0xC(r3)
  rlwinm.   r25,r0,0,24,31
  beq-      .loc_0x174
  li        r3, 0x10
  bl        -0x44C4AC
  mr.       r0, r3
  beq-      .loc_0x130
  mr        r4, r30
  mr        r5, r25
  li        r6, 0
  bl        -0x17EB8
  mr        r0, r3

.loc_0x130:
  stw       r0, 0x34(r26)
  b         .loc_0x174

.loc_0x138:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x14C
  li        r28, 0xF
  li        r29, 0x1
  b         .loc_0x154

.loc_0x14C:
  li        r28, 0xB
  li        r29, 0x1

.loc_0x154:
  li        r3, 0x54
  bl        -0x44C4F4
  mr.       r0, r3
  beq-      .loc_0x170
  rlwinm    r4,r29,0,24,31
  bl        -0x17F74
  mr        r0, r3

.loc_0x170:
  mr        r30, r0

.loc_0x174:
  rlwinm    r0,r29,0,24,31
  cmplwi    r0, 0xFF
  bne-      .loc_0x194
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x1EF
  crclr     6, 0x6
  bl        -0x445D90

.loc_0x194:
  rlwinm    r0,r28,0,24,31
  cmplwi    r0, 0xFF
  bne-      .loc_0x1B4
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x1F0
  crclr     6, 0x6
  bl        -0x445DB0

.loc_0x1B4:
  cmplwi    r30, 0
  bne-      .loc_0x1D0
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x1F1
  crclr     6, 0x6
  bl        -0x445DCC

.loc_0x1D0:
  rlwinm    r26,r28,0,24,31
  rlwinm    r28,r29,0,24,31
  li        r25, 0
  b         .loc_0x220

.loc_0x1E0:
  rlwinm    r0,r25,0,24,31
  add       r29, r26, r0
  cmpwi     r29, 0x10
  blt-      .loc_0x204
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x445E00

.loc_0x204:
  rlwinm    r4,r29,2,0,29
  mr        r3, r30
  addi      r0, r4, 0x74
  mr        r4, r25
  lwzx      r5, r27, r0
  bl        -0x12D380
  addi      r25, r25, 0x1

.loc_0x220:
  rlwinm    r0,r25,0,24,31
  cmplw     r0, r28
  blt+      .loc_0x1E0
  mr        r3, r30
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80470484
 * Size:	000050
 */
void __ct__Q23PSM20DirectorMgr_2PBattleFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x8
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x12CC54
  addi      r3, r31, 0xC
  bl        -0x4534D8
  lis       r4, 0x804F
  mr        r3, r31
  subi      r4, r4, 0x720
  stw       r4, 0x0(r31)
  addi      r0, r4, 0x10
  stw       r0, 0xC(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804704D4
 * Size:	0006B8
 */
void newDirector__Q23PSM20DirectorMgr_2PBattleFUcRQ28PSSystem11DirectedBgm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x24(r1)
  rlwinm    r0,r4,0,24,31
  cmplwi    r0, 0x7
  stmw      r27, 0xC(r1)
  mr        r29, r5
  subi      r31, r3, 0x2580
  li        r30, 0
  bgt-      .loc_0x670
  lis       r3, 0x804F
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x740
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  li        r3, 0x68
  bl        -0x44C678
  mr.       r0, r3
  beq-      .loc_0x78
  lfs       f1, 0x2A14(r2)
  addi      r4, r31, 0x164
  lfs       f2, 0x2A18(r2)
  li        r5, 0x1
  li        r6, 0x64
  li        r7, 0x64
  li        r8, 0x64
  bl        -0x18DEC
  mr        r0, r3

.loc_0x78:
  cmplwi    r0, 0
  mr        r30, r0
  bne-      .loc_0x98
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x267
  crclr     6, 0x6
  bl        -0x445F28

.loc_0x98:
  li        r27, 0
  b         .loc_0xE0

.loc_0xA0:
  rlwinm    r28,r27,0,24,31
  addi      r0, r28, 0x8
  cmpwi     r0, 0x10
  blt-      .loc_0xC4
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x445F54

.loc_0xC4:
  rlwinm    r4,r28,2,0,29
  mr        r3, r30
  addi      r0, r4, 0x94
  mr        r4, r27
  lwzx      r5, r29, r0
  bl        -0x12D4D4
  addi      r27, r27, 0x1

.loc_0xE0:
  rlwinm    r0,r27,0,24,31
  cmplwi    r0, 0x1
  blt+      .loc_0xA0
  li        r3, 0x18
  bl        -0x44C720
  mr.       r29, r3
  beq-      .loc_0x11C
  mr        r4, r30
  li        r5, 0
  bl        -0x12C854
  addi      r3, r29, 0xC
  bl        -0x449D10
  lis       r3, 0x804F
  subi      r0, r3, 0x20F0
  stw       r0, 0x0(r29)

.loc_0x11C:
  stw       r29, 0x64(r30)
  b         .loc_0x684
  li        r3, 0x6C
  bl        -0x44C758
  mr.       r30, r3
  beq-      .loc_0x158
  addi      r4, r31, 0x11C
  li        r5, 0x1
  li        r6, 0x64
  li        r7, 0x64
  li        r8, 0x64
  bl        -0x186E0
  lis       r3, 0x804F
  subi      r0, r3, 0x2240
  stw       r0, 0x0(r30)

.loc_0x158:
  cmplwi    r30, 0
  bne-      .loc_0x174
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x273
  crclr     6, 0x6
  bl        -0x446004

.loc_0x174:
  li        r27, 0
  b         .loc_0x1BC

.loc_0x17C:
  rlwinm    r28,r27,0,24,31
  addi      r0, r28, 0x9
  cmpwi     r0, 0x10
  blt-      .loc_0x1A0
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x446030

.loc_0x1A0:
  rlwinm    r4,r28,2,0,29
  mr        r3, r30
  addi      r0, r4, 0x98
  mr        r4, r27
  lwzx      r5, r29, r0
  bl        -0x12D5B0
  addi      r27, r27, 0x1

.loc_0x1BC:
  rlwinm    r0,r27,0,24,31
  cmplwi    r0, 0x1
  blt+      .loc_0x17C
  li        r3, 0x18
  bl        -0x44C7FC
  mr.       r29, r3
  beq-      .loc_0x1F8
  mr        r4, r30
  li        r5, 0
  bl        -0x12C930
  addi      r3, r29, 0xC
  bl        -0x449DEC
  lis       r3, 0x804F
  subi      r0, r3, 0x20F0
  stw       r0, 0x0(r29)

.loc_0x1F8:
  stw       r29, 0x64(r30)
  b         .loc_0x684
  li        r3, 0x6C
  bl        -0x44C834
  mr.       r30, r3
  beq-      .loc_0x234
  addi      r4, r31, 0x128
  li        r5, 0x1
  li        r6, 0x64
  li        r7, 0x64
  li        r8, 0x64
  bl        -0x187BC
  lis       r3, 0x804F
  subi      r0, r3, 0x21F8
  stw       r0, 0x0(r30)

.loc_0x234:
  cmplwi    r30, 0
  bne-      .loc_0x250
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x27F
  crclr     6, 0x6
  bl        -0x4460E0

.loc_0x250:
  li        r27, 0
  b         .loc_0x298

.loc_0x258:
  rlwinm    r28,r27,0,24,31
  addi      r0, r28, 0xA
  cmpwi     r0, 0x10
  blt-      .loc_0x27C
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x44610C

.loc_0x27C:
  rlwinm    r4,r28,2,0,29
  mr        r3, r30
  addi      r0, r4, 0x9C
  mr        r4, r27
  lwzx      r5, r29, r0
  bl        -0x12D68C
  addi      r27, r27, 0x1

.loc_0x298:
  rlwinm    r0,r27,0,24,31
  cmplwi    r0, 0x1
  blt+      .loc_0x258
  li        r3, 0x18
  bl        -0x44C8D8
  mr.       r29, r3
  beq-      .loc_0x2D4
  mr        r4, r30
  li        r5, 0
  bl        -0x12CA0C
  addi      r3, r29, 0xC
  bl        -0x449EC8
  lis       r3, 0x804F
  subi      r0, r3, 0x20F0
  stw       r0, 0x0(r29)

.loc_0x2D4:
  stw       r29, 0x64(r30)
  b         .loc_0x684
  li        r3, 0x58
  bl        -0x44C910
  mr.       r0, r3
  beq-      .loc_0x304
  addi      r4, r31, 0x170
  li        r5, 0x1
  li        r6, 0x64
  li        r7, 0x64
  bl        -0x1914C
  mr        r0, r3

.loc_0x304:
  cmplwi    r0, 0
  mr        r30, r0
  bne-      .loc_0x324
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x296
  crclr     6, 0x6
  bl        -0x4461B4

.loc_0x324:
  li        r27, 0
  b         .loc_0x36C

.loc_0x32C:
  rlwinm    r28,r27,0,24,31
  addi      r0, r28, 0xB
  cmpwi     r0, 0x10
  blt-      .loc_0x350
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x4461E0

.loc_0x350:
  rlwinm    r4,r28,2,0,29
  mr        r3, r30
  addi      r0, r4, 0xA0
  mr        r4, r27
  lwzx      r5, r29, r0
  bl        -0x12D760
  addi      r27, r27, 0x1

.loc_0x36C:
  rlwinm    r0,r27,0,24,31
  cmplwi    r0, 0x1
  blt+      .loc_0x32C
  b         .loc_0x684
  li        r3, 0x58
  bl        -0x44C9B0
  mr.       r0, r3
  beq-      .loc_0x3A4
  addi      r4, r31, 0x17C
  li        r5, 0x1
  li        r6, 0x64
  li        r7, 0x64
  bl        -0x191EC
  mr        r0, r3

.loc_0x3A4:
  cmplwi    r0, 0
  mr        r30, r0
  bne-      .loc_0x3C4
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x2BB
  crclr     6, 0x6
  bl        -0x446254

.loc_0x3C4:
  li        r27, 0
  b         .loc_0x40C

.loc_0x3CC:
  rlwinm    r28,r27,0,24,31
  addi      r0, r28, 0xC
  cmpwi     r0, 0x10
  blt-      .loc_0x3F0
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x446280

.loc_0x3F0:
  rlwinm    r4,r28,2,0,29
  mr        r3, r30
  addi      r0, r4, 0xA4
  mr        r4, r27
  lwzx      r5, r29, r0
  bl        -0x12D800
  addi      r27, r27, 0x1

.loc_0x40C:
  rlwinm    r0,r27,0,24,31
  cmplwi    r0, 0x1
  blt+      .loc_0x3CC
  b         .loc_0x684
  li        r3, 0x58
  bl        -0x44CA50
  mr.       r0, r3
  beq-      .loc_0x444
  addi      r4, r31, 0x188
  li        r5, 0x1
  li        r6, 0x64
  li        r7, 0x64
  bl        -0x1928C
  mr        r0, r3

.loc_0x444:
  cmplwi    r0, 0
  mr        r30, r0
  bne-      .loc_0x464
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x2D9
  crclr     6, 0x6
  bl        -0x4462F4

.loc_0x464:
  li        r27, 0
  b         .loc_0x4AC

.loc_0x46C:
  rlwinm    r28,r27,0,24,31
  addi      r0, r28, 0xD
  cmpwi     r0, 0x10
  blt-      .loc_0x490
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x446320

.loc_0x490:
  rlwinm    r4,r28,2,0,29
  mr        r3, r30
  addi      r0, r4, 0xA8
  mr        r4, r27
  lwzx      r5, r29, r0
  bl        -0x12D8A0
  addi      r27, r27, 0x1

.loc_0x4AC:
  rlwinm    r0,r27,0,24,31
  cmplwi    r0, 0x1
  blt+      .loc_0x46C
  li        r3, 0x18
  bl        -0x44CAEC
  mr.       r29, r3
  beq-      .loc_0x4E8
  mr        r4, r30
  li        r5, 0
  bl        -0x12CC20
  addi      r3, r29, 0xC
  bl        -0x44A0DC
  lis       r3, 0x804F
  subi      r0, r3, 0x20F0
  stw       r0, 0x0(r29)

.loc_0x4E8:
  stw       r29, 0x54(r30)
  b         .loc_0x684
  li        r3, 0x58
  bl        -0x44CB24
  mr.       r0, r3
  beq-      .loc_0x518
  addi      r4, r31, 0x194
  li        r5, 0x1
  li        r6, 0x64
  li        r7, 0x64
  bl        -0x19360
  mr        r0, r3

.loc_0x518:
  cmplwi    r0, 0
  mr        r30, r0
  bne-      .loc_0x538
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x2F5
  crclr     6, 0x6
  bl        -0x4463C8

.loc_0x538:
  li        r27, 0
  b         .loc_0x580

.loc_0x540:
  rlwinm    r28,r27,0,24,31
  addi      r0, r28, 0xE
  cmpwi     r0, 0x10
  blt-      .loc_0x564
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x4463F4

.loc_0x564:
  rlwinm    r4,r28,2,0,29
  mr        r3, r30
  addi      r0, r4, 0xAC
  mr        r4, r27
  lwzx      r5, r29, r0
  bl        -0x12D974
  addi      r27, r27, 0x1

.loc_0x580:
  rlwinm    r0,r27,0,24,31
  cmplwi    r0, 0x1
  blt+      .loc_0x540
  li        r3, 0x18
  bl        -0x44CBC0
  mr.       r29, r3
  beq-      .loc_0x5BC
  mr        r4, r30
  li        r5, 0
  bl        -0x12CCF4
  addi      r3, r29, 0xC
  bl        -0x44A1B0
  lis       r3, 0x804F
  subi      r0, r3, 0x20F0
  stw       r0, 0x0(r29)

.loc_0x5BC:
  stw       r29, 0x54(r30)
  b         .loc_0x684
  li        r3, 0x58
  bl        -0x44CBF8
  mr.       r30, r3
  beq-      .loc_0x5FC
  addi      r5, r31, 0x1A0
  li        r4, 0x1
  li        r6, 0x64
  li        r7, 0x64
  bl        -0x19808
  lis       r3, 0x804F
  li        r0, 0
  subi      r3, r3, 0x20A0
  stw       r3, 0x0(r30)
  stb       r0, 0x54(r30)

.loc_0x5FC:
  cmplwi    r30, 0
  bne-      .loc_0x618
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x310
  crclr     6, 0x6
  bl        -0x4464A8

.loc_0x618:
  li        r27, 0
  b         .loc_0x660

.loc_0x620:
  rlwinm    r28,r27,0,24,31
  addi      r0, r28, 0xF
  cmpwi     r0, 0x10
  blt-      .loc_0x644
  addi      r5, r31, 0x1C
  addi      r3, r2, 0x2A1C
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x4464D4

.loc_0x644:
  rlwinm    r4,r28,2,0,29
  mr        r3, r30
  addi      r0, r4, 0xB0
  mr        r4, r27
  lwzx      r5, r29, r0
  bl        -0x12DA54
  addi      r27, r27, 0x1

.loc_0x660:
  rlwinm    r0,r27,0,24,31
  cmplwi    r0, 0x1
  blt+      .loc_0x620
  b         .loc_0x684

.loc_0x670:
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x317
  crclr     6, 0x6
  bl        -0x446514

.loc_0x684:
  cmplwi    r30, 0
  bne-      .loc_0x6A0
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x31D
  crclr     6, 0x6
  bl        -0x446530

.loc_0x6A0:
  mr        r3, r30
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80470B8C
 * Size:	00008C
 */
void __dt__Q23PSM20DirectorMgr_2PBattleFv(void)
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
  beq-      .loc_0x70
  lis       r4, 0x804F
  addi      r3, r30, 0xC
  subi      r5, r4, 0x720
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x10
  stw       r0, 0xC(r30)
  bl        -0x453B94
  cmplwi    r30, 0
  beq-      .loc_0x60
  lis       r4, 0x804E
  mr        r3, r30
  subi      r0, r4, 0x5040
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x3B69EC

.loc_0x60:
  extsh.    r0, r31
  ble-      .loc_0x70
  mr        r3, r30
  bl        -0x44CB44

.loc_0x70:
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
 * Address:	80470C18
 * Size:	00008C
 */
void __dt__Q23PSM18DirectorMgr_BattleFv(void)
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
  beq-      .loc_0x70
  lis       r4, 0x804F
  addi      r3, r30, 0xC
  subi      r5, r4, 0x704
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x10
  stw       r0, 0xC(r30)
  bl        -0x453C20
  cmplwi    r30, 0
  beq-      .loc_0x60
  lis       r4, 0x804E
  mr        r3, r30
  subi      r0, r4, 0x5040
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x3B6A78

.loc_0x60:
  extsh.    r0, r31
  ble-      .loc_0x70
  mr        r3, r30
  bl        -0x44CBD0

.loc_0x70:
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
 * Address:	80470CA4
 * Size:	0000A4
 */
void __dt__Q23PSM25DirectorMgr_Scene_AutoBgmFv(void)
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
  beq-      .loc_0x88
  lis       r3, 0x804F
  subi      r3, r3, 0x6E8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x10
  stw       r0, 0xC(r30)
  beq-      .loc_0x78
  lis       r4, 0x804F
  addi      r3, r30, 0xC
  subi      r5, r4, 0x680
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x10
  stw       r0, 0xC(r30)
  bl        -0x453CC4
  cmplwi    r30, 0
  beq-      .loc_0x78
  lis       r4, 0x804E
  mr        r3, r30
  subi      r0, r4, 0x5040
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x3B6B1C

.loc_0x78:
  extsh.    r0, r31
  ble-      .loc_0x88
  mr        r3, r30
  bl        -0x44CC74

.loc_0x88:
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
 * Address:	80470D48
 * Size:	000014
 */
void isSlave__Q23PSM17DirectorMgr_SceneFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	80470D5C
 * Size:	000088
 */
void __dt__Q23PSM15BgmTrackMapFileFv(void)
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
  beq-      .loc_0x6C
  lis       r3, 0x804F
  addic.    r0, r30, 0x1C
  subi      r3, r3, 0x558
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x10
  stw       r0, 0x1C(r30)
  beq-      .loc_0x50
  lis       r3, 0x804F
  li        r0, 0
  subi      r3, r3, 0x68C
  stw       r3, 0x1C(r30)
  stw       r0, -0x6E40(r13)

.loc_0x50:
  mr        r3, r30
  li        r4, 0
  bl        -0x1383F0
  extsh.    r0, r31
  ble-      .loc_0x6C
  mr        r3, r30
  bl        -0x44CD10

.loc_0x6C:
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
 * Address:	80470DE4
 * Size:	0000B0
 */
void __dt__Q23PSM19GroundDirector_CaveFv(void)
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
  beq-      .loc_0x94
  lis       r4, 0x804F
  subi      r0, r4, 0x6C4
  stw       r0, 0x0(r30)
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x2128
  stw       r0, 0x0(r30)
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x2068
  stw       r0, 0x0(r30)
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x84
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x84
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x3B6C68

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x44CDC0

.loc_0x94:
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
 * Address:	80470E94
 * Size:	000004
 */
void directOn__Q23PSM19GroundDirector_CaveFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80470E98
 * Size:	000004
 */
void directOff__Q23PSM19GroundDirector_CaveFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80470E9C
 * Size:	000050
 */
void __dt__Q28PSSystem38SingletonBase<PSM::BgmTrackMapFile>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x38
  lis       r5, 0x804F
  extsh.    r0, r4
  subi      r4, r5, 0x68C
  li        r0, 0
  stw       r4, 0x0(r31)
  stw       r0, -0x6E40(r13)
  ble-      .loc_0x38
  bl        -0x44CE1C

.loc_0x38:
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
 * Address:	80470EEC
 * Size:	000008
 */
void @12@__dt__Q23PSM17DirectorMgr_SceneFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0xC
  b         -0x195C
*/
}

/*
 * --INFO--
 * Address:	80470EF4
 * Size:	000008
 */
void @12@__dt__Q23PSM25DirectorMgr_Scene_AutoBgmFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0xC
  b         -0x254
*/
}

/*
 * --INFO--
 * Address:	80470EFC
 * Size:	000008
 */
void @12@__dt__Q23PSM18DirectorMgr_BattleFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0xC
  b         -0x2E8
*/
}

/*
 * --INFO--
 * Address:	80470F04
 * Size:	000008
 */
void @12@__dt__Q23PSM20DirectorMgr_2PBattleFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0xC
  b         -0x37C
*/
}