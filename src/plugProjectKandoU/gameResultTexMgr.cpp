

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
 * Address:	80227418
 * Size:	000050
 */
void __ct__Q34Game12ResultTexMgr3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x20A460
  lis       r3, 0x804C
  li        r0, 0
  addi      r4, r3, 0xDC8
  mr        r3, r31
  stw       r4, 0x0(r31)
  stw       r0, 0x18(r31)
  stw       r0, 0x1C(r31)
  stw       r0, 0x38(r31)
  stw       r0, 0x3C(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80227468
 * Size:	000060
 */
void __dt__Q34Game12ResultTexMgr3MgrFv(void)
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
  beq-      .loc_0x44
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0xDC8
  stw       r0, 0x0(r30)
  bl        -0x20A464
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x2033F4

.loc_0x44:
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
 * Address:	802274C8
 * Size:	000340
 */
void create__Q34Game12ResultTexMgr3MgrFRQ34Game12ResultTexMgr3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x460(r1)
  mflr      r0
  stw       r0, 0x464(r1)
  stmw      r24, 0x440(r1)
  mr        r24, r4
  lis       r4, 0x8048
  mr        r28, r3
  addi      r31, r4, 0x31C8
  li        r29, 0
  lwz       r0, 0x0(r24)
  stw       r0, 0x38(r3)
  lwz       r0, 0x4(r24)
  stw       r0, 0x3C(r3)
  lwz       r0, 0x8(r24)
  stw       r0, 0x18(r3)
  lwz       r30, -0x77D4(r13)
  lwz       r3, 0x18(r3)
  bl        -0x203F68
  lbz       r0, 0xC(r24)
  extsb     r0, r0
  cmpwi     r0, -0x1
  bne-      .loc_0x9C
  lwz       r3, -0x6514(r13)
  lwz       r0, 0xD4(r3)
  cmpwi     r0, 0x5
  beq-      .loc_0x6C
  b         .loc_0x84

.loc_0x6C:
  addi      r3, r1, 0x238
  addi      r4, r31, 0x10
  subi      r5, r2, 0x4130
  crclr     6, 0x6
  bl        -0x16010C
  b         .loc_0x104

.loc_0x84:
  addi      r3, r1, 0x238
  addi      r4, r31, 0x10
  subi      r5, r2, 0x412C
  crclr     6, 0x6
  bl        -0x160124
  b         .loc_0x104

.loc_0x9C:
  cmpwi     r0, 0x1
  beq-      .loc_0xD8
  bge-      .loc_0xB4
  cmpwi     r0, 0
  bge-      .loc_0xC0
  b         .loc_0x104

.loc_0xB4:
  cmpwi     r0, 0x3
  bge-      .loc_0x104
  b         .loc_0xF0

.loc_0xC0:
  addi      r3, r1, 0x238
  addi      r4, r31, 0x10
  subi      r5, r2, 0x4130
  crclr     6, 0x6
  bl        -0x160160
  b         .loc_0x104

.loc_0xD8:
  addi      r3, r1, 0x238
  addi      r4, r31, 0x10
  subi      r5, r2, 0x412C
  crclr     6, 0x6
  bl        -0x160178
  b         .loc_0x104

.loc_0xF0:
  addi      r3, r1, 0x238
  addi      r4, r31, 0x10
  subi      r5, r2, 0x4128
  crclr     6, 0x6
  bl        -0x160190

.loc_0x104:
  addi      r3, r1, 0x8
  addi      r4, r1, 0x238
  bl        0x225004
  lwz       r0, 0x18(r28)
  addi      r4, r1, 0x8
  lwz       r3, -0x63D8(r13)
  stw       r0, 0x20(r1)
  bl        0x22512C
  stw       r3, 0x1C(r28)
  lwz       r3, 0x1C(r28)
  cmplwi    r3, 0
  beq-      .loc_0x13C
  lwz       r29, 0x34(r3)
  b         .loc_0x154

.loc_0x13C:
  addi      r3, r31, 0x34
  addi      r5, r31, 0x4C
  addi      r6, r1, 0x238
  li        r4, 0xC6
  crclr     6, 0x6
  bl        -0x1FCFD8

.loc_0x154:
  lwz       r6, 0x38(r28)
  addi      r3, r28, 0x20
  lwz       r5, 0x3C(r28)
  li        r4, 0x1
  lwz       r27, 0x18(r6)
  lwz       r26, 0x18(r5)
  bl        0x2FC
  mr        r3, r29
  addi      r4, r31, 0x74
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr.       r25, r3
  bne-      .loc_0x1AC
  mr        r3, r29
  addi      r4, r31, 0x90
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r25, r3

.loc_0x1AC:
  addi      r3, r28, 0x20
  li        r4, 0
  bl        0x318
  mr        r4, r25
  li        r5, 0
  bl        -0x1F4604
  mr        r4, r27
  addi      r3, r28, 0x28
  bl        0x29C
  li        r25, 0
  b         .loc_0x26C

.loc_0x1D8:
  lwz       r3, 0x38(r28)
  mr        r4, r25
  bl        -0x73200
  mr        r4, r3
  addi      r3, r1, 0x138
  lwz       r5, 0x40(r4)
  addi      r4, r31, 0xA4
  crclr     6, 0x6
  bl        -0x160288
  mr        r3, r29
  addi      r4, r1, 0x138
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr.       r24, r3
  bne-      .loc_0x248
  addi      r3, r1, 0x138
  addi      r4, r31, 0x90
  crclr     6, 0x6
  bl        -0x1602B8
  mr        r3, r29
  addi      r4, r1, 0x138
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r24, r3

.loc_0x248:
  cmplwi    r24, 0
  beq-      .loc_0x268
  mr        r4, r25
  addi      r3, r28, 0x28
  bl        0x274
  mr        r4, r24
  li        r5, 0
  bl        -0x1F46A8

.loc_0x268:
  addi      r25, r25, 0x1

.loc_0x26C:
  cmpw      r25, r27
  blt+      .loc_0x1D8
  mr        r4, r26
  addi      r3, r28, 0x30
  bl        0x1EC
  li        r24, 0
  b         .loc_0x31C

.loc_0x288:
  lwz       r3, 0x3C(r28)
  mr        r4, r24
  bl        -0x732B0
  mr        r4, r3
  addi      r3, r1, 0x38
  lwz       r5, 0x40(r4)
  addi      r4, r31, 0xA4
  crclr     6, 0x6
  bl        -0x160338
  mr        r3, r29
  addi      r4, r1, 0x38
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr.       r25, r3
  bne-      .loc_0x2F8
  addi      r3, r1, 0x38
  addi      r4, r31, 0x90
  crclr     6, 0x6
  bl        -0x160368
  mr        r3, r29
  addi      r4, r1, 0x38
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r25, r3

.loc_0x2F8:
  cmplwi    r25, 0
  beq-      .loc_0x318
  mr        r4, r24
  addi      r3, r28, 0x30
  bl        0x1C4
  mr        r4, r25
  li        r5, 0
  bl        -0x1F4758

.loc_0x318:
  addi      r24, r24, 0x1

.loc_0x31C:
  cmpw      r24, r26
  blt+      .loc_0x288
  mr        r3, r30
  bl        -0x20424C
  lmw       r24, 0x440(r1)
  lwz       r0, 0x464(r1)
  mtlr      r0
  addi      r1, r1, 0x460
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void getOtakaraNum__Q34Game12ResultTexMgr3MgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void getItemNum__Q34Game12ResultTexMgr3MgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80227808
 * Size:	0000B8
 */
void getOtakaraItemTexture__Q34Game12ResultTexMgr3MgrFi(void)
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
  lwz       r0, 0x38(r3)
  cmplwi    r0, 0
  bne-      .loc_0x44
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x31FC
  li        r4, 0x111
  addi      r5, r5, 0x327C
  crclr     6, 0x6
  bl        -0x1FD208

.loc_0x44:
  lwz       r3, 0x38(r30)
  lwz       r0, 0x18(r3)
  cmpw      r31, r0
  blt-      .loc_0x94
  cmplwi    r3, 0
  bne-      .loc_0x78
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x31FC
  li        r4, 0x111
  addi      r5, r5, 0x327C
  crclr     6, 0x6
  bl        -0x1FD23C

.loc_0x78:
  lwz       r4, 0x38(r30)
  mr        r3, r30
  lwz       r0, 0x18(r4)
  sub       r31, r31, r0
  mr        r4, r31
  bl        0x50
  b         .loc_0xA0

.loc_0x94:
  mr        r3, r30
  mr        r4, r31
  bl        .loc_0xB8

.loc_0xA0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0xB8:
*/
}

/*
 * --INFO--
 * Address:	802278C0
 * Size:	000024
 */
void getOtakaraTexture__Q34Game12ResultTexMgr3MgrFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x28
  stw       r0, 0x14(r1)
  bl        0xC4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802278E4
 * Size:	000024
 */
void getItemTexture__Q34Game12ResultTexMgr3MgrFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x30
  stw       r0, 0x14(r1)
  bl        0xA0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80227908
 * Size:	000028
 */
void getCarcassTexture__Q34Game12ResultTexMgr3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  addi      r3, r3, 0x20
  stw       r0, 0x14(r1)
  bl        0x78
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80227930
 * Size:	000064
 */
void alloc__Q44Game12ResultTexMgr3Mgr8TexturesFi(void)
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
  stw       r4, 0x4(r3)
  rlwinm    r3,r4,6,0,25
  addi      r3, r3, 0x10
  bl        -0x2039AC
  lis       r4, 0x8001
  lis       r5, 0x8003
  addi      r4, r4, 0x77D0
  mr        r7, r31
  addi      r5, r5, 0x3010
  li        r6, 0x40
  bl        -0x165F84
  stw       r3, 0x0(r30)
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
 * Address:	80227994
 * Size:	000074
 */
void getTexture__Q44Game12ResultTexMgr3Mgr8TexturesFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  bge-      .loc_0x40
  lis       r3, 0x8048
  lis       r4, 0x8048
  addi      r5, r4, 0x3288
  mr        r6, r31
  addi      r3, r3, 0x31FC
  li        r4, 0x13D
  crclr     6, 0x6
  bl        -0x1FD390

.loc_0x40:
  lwz       r3, 0x4(r30)
  cmpw      r31, r3
  blt-      .loc_0x50
  subi      r31, r3, 0x1

.loc_0x50:
  lwz       r3, 0x0(r30)
  rlwinm    r0,r31,6,0,25
  add       r3, r3, r0
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
 * Address:	80227A08
 * Size:	00005C
 */
void __ct__Q34Game6Result5TNodeFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x100
  lis       r3, 0x804C
  li        r0, 0
  addi      r4, r3, 0x6E4
  mr        r3, r31
  stw       r4, 0x0(r31)
  stw       r0, 0x2C(r31)
  stw       r0, 0x30(r31)
  stw       r0, 0x34(r31)
  stw       r0, 0x38(r31)
  stw       r0, 0x3C(r31)
  stw       r0, 0x44(r31)
  stw       r0, 0x40(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80227A64
 * Size:	00001C
 */
void setTNode__Q34Game6Result5TNodeFUxP10JUTTextureiii(void)
{
/*
.loc_0x0:
  stw       r6, 0x44(r3)
  stw       r5, 0x40(r3)
  stw       r7, 0x2C(r3)
  stw       r8, 0x30(r3)
  stw       r9, 0x38(r3)
  stw       r10, 0x3C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80227A80
 * Size:	000024
 */
void setTNode__Q34Game6Result5TNodeFUxP10JUTTextureiiii(void)
{
/*
.loc_0x0:
  stw       r6, 0x44(r3)
  lwz       r0, 0x8(r1)
  stw       r5, 0x40(r3)
  stw       r7, 0x2C(r3)
  stw       r8, 0x30(r3)
  stw       r9, 0x38(r3)
  stw       r10, 0x3C(r3)
  stw       r0, 0x34(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80227AA4
 * Size:	000078
 */
void convertByMorimun__Q34Game6Result5TNodeFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  lis       r6, 0x305F
  lis       r5, 0x30
  stw       r0, 0x74(r1)
  lis       r4, 0x8048
  addi      r6, r6, 0x3030
  addi      r5, r5, 0x3130
  stw       r31, 0x6C(r1)
  mr        r31, r3
  addi      r3, r1, 0x18
  addi      r8, r1, 0x30
  lfdu      f2, 0x32A0(r4)
  addi      r9, r1, 0x8
  li        r7, 0x3
  lfd       f1, 0x8(r4)
  lfd       f0, 0x10(r4)
  addi      r4, r1, 0x48
  stfd      f2, 0x48(r1)
  stfd      f1, 0x50(r1)
  stfd      f0, 0x58(r1)
  bl        0x1796AC
  mr        r4, r31
  addi      r3, r1, 0x18
  bl        0x179708
  lwz       r0, 0x74(r1)
  lwz       r31, 0x6C(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	80227B1C
 * Size:	00005C
 */
void __ct__Q24Game5DNodeFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x20AB64
  lis       r3, 0x804C
  li        r4, 0
  addi      r3, r3, 0xDB8
  subi      r0, r2, 0x4124
  stw       r3, 0x0(r31)
  mr        r3, r31
  stw       r4, 0x24(r31)
  stw       r4, 0x20(r31)
  stw       r4, 0x1C(r31)
  stw       r4, 0x18(r31)
  stw       r0, 0x28(r31)
  stw       r0, 0x28(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void addHead__Q24Game5DNodeFPQ24Game5DNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80227B78
 * Size:	0000B0
 */
void add__Q24Game5DNodeFPQ24Game5DNode(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r4
  lwz       r5, 0x24(r3)
  cmplwi    r5, 0
  beq-      .loc_0x40
  b         .loc_0x28

.loc_0x24:
  mr        r5, r0

.loc_0x28:
  lwz       r0, 0x18(r5)
  cmplwi    r0, 0
  bne+      .loc_0x24
  stw       r27, 0x18(r5)
  stw       r5, 0x1C(r27)
  b         .loc_0x44

.loc_0x40:
  stw       r27, 0x24(r3)

.loc_0x44:
  stw       r3, 0x20(r27)
  lis       r5, 0x8048
  lis       r4, 0x8048
  li        r28, 0
  lwz       r29, 0x24(r3)
  addi      r30, r5, 0x31FC
  addi      r31, r4, 0x32B8
  b         .loc_0x94

.loc_0x64:
  cmplw     r29, r27
  bne-      .loc_0x70
  addi      r28, r28, 0x1

.loc_0x70:
  cmpwi     r28, 0x1
  ble-      .loc_0x90
  mr        r3, r30
  mr        r5, r31
  mr        r6, r28
  li        r4, 0x1A8
  crclr     6, 0x6
  bl        -0x1FD5C4

.loc_0x90:
  lwz       r29, 0x18(r29)

.loc_0x94:
  cmplwi    r29, 0
  bne+      .loc_0x64
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void calcNextCount__Q24Game5DNodeFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void concat__Q24Game5DNodeFPQ24Game5DNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80227C28
 * Size:	000068
 */
void __dt__Q24Game5DNodeFv(void)
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
  beq-      .loc_0x4C
  lis       r4, 0x804C
  addi      r0, r4, 0xDB8
  stw       r0, 0x0(r30)
  bl        .loc_0x68
  mr        r3, r30
  li        r4, 0
  bl        -0x20AC2C
  extsh.    r0, r31
  ble-      .loc_0x4C
  mr        r3, r30
  bl        -0x203BBC

.loc_0x4C:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x68:
*/
}

/*
 * --INFO--
 * Address:	80227C90
 * Size:	000098
 */
void del__Q24Game5DNodeFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0x20(r3)
  cmplwi    r4, 0
  beqlr-    
  lwz       r5, 0x24(r4)
  li        r6, 0
  b         .loc_0x8C

.loc_0x18:
  cmplw     r5, r3
  bne-      .loc_0x84
  cmplwi    r6, 0
  beq-      .loc_0x54
  lwz       r0, 0x18(r5)
  stw       r0, 0x18(r6)
  lwz       r4, 0x18(r5)
  cmplwi    r4, 0
  beq-      .loc_0x40
  stw       r6, 0x1C(r4)

.loc_0x40:
  li        r0, 0
  stw       r0, 0x1C(r3)
  stw       r0, 0x18(r3)
  stw       r0, 0x20(r3)
  blr       

.loc_0x54:
  lwz       r0, 0x18(r5)
  stw       r0, 0x24(r4)
  lwz       r4, 0x18(r5)
  cmplwi    r4, 0
  beq-      .loc_0x70
  li        r0, 0
  stw       r0, 0x1C(r4)

.loc_0x70:
  li        r0, 0
  stw       r0, 0x1C(r3)
  stw       r0, 0x18(r3)
  stw       r0, 0x20(r3)
  blr       

.loc_0x84:
  mr        r6, r5
  lwz       r5, 0x18(r5)

.loc_0x8C:
  cmplwi    r5, 0
  bne+      .loc_0x18
  blr
*/
}

/*
 * --INFO--
 * Address:	80227D28
 * Size:	000034
 */
void getChildCount__Q24Game5DNodeFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0x2C
  mr        r4, r0
  li        r3, 0
  b         .loc_0x20

.loc_0x18:
  lwz       r4, 0x18(r4)
  addi      r3, r3, 0x1

.loc_0x20:
  cmplwi    r4, 0
  bne+      .loc_0x18
  blr       

.loc_0x2C:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void getChildAt__Q24Game5DNodeFi(void)
{
	// UNUSED FUNCTION
}