

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JUTCacheFont::JUTCacheFont()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void JUTCacheFont::JUTCacheFont(const ResFONT *, void *, unsigned long, JKRHeap *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80033F94
 * Size:	000090
 */
void JUTCacheFont::JUTCacheFont(const ResFONT *, unsigned long, JKRHeap *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  bl        -0x2E40
  lis       r4, 0x804A
  mr        r3, r28
  addi      r0, r4, 0x5B0
  stw       r0, 0x0(r28)
  bl        0x168
  mr        r3, r28
  bl        -0x2CEC
  mr        r3, r28
  bl        -0x6E74
  mr        r3, r28
  mr        r4, r29
  mr        r6, r30
  mr        r7, r31
  li        r5, 0
  bl        0x304
  lwz       r0, 0x24(r1)
  mr        r3, r28
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
 * Address:	80034024
 * Size:	000094
 */
void JUTCacheFont::~JUTCacheFont()
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
  beq-      .loc_0x78
  lis       r4, 0x804A
  addi      r0, r4, 0x5B0
  stw       r0, 0x0(r30)
  lbz       r0, 0x4(r30)
  cmplwi    r0, 0
  beq-      .loc_0x5C
  bl        .loc_0x94
  mr        r3, r30
  bl        0xD8
  mr        r3, r30
  bl        -0x2DA0
  mr        r3, r30
  bl        -0x2D84
  mr        r3, r30
  bl        -0x6F0C

.loc_0x5C:
  mr        r3, r30
  li        r4, 0
  bl        -0x2E48
  extsh.    r0, r31
  ble-      .loc_0x78
  mr        r3, r30
  bl        -0xFFE4

.loc_0x78:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x94:
*/
}

/*
 * --INFO--
 * Address:	800340B8
 * Size:	000084
 */
void JUTCacheFont::deleteMemBlocks_CacheFont()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0xB0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x28
  lwz       r3, 0x90(r31)
  bl        -0x10004

.loc_0x28:
  lwz       r3, 0xAC(r31)
  cmplwi    r3, 0
  beq-      .loc_0x48
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x48:
  lwz       r3, 0x4C(r31)
  bl        -0x10050
  lwz       r3, 0x50(r31)
  bl        -0x10058
  lwz       r3, 0x7C(r31)
  bl        -0x10060
  lwz       r3, 0x80(r31)
  bl        -0x10068
  lwz       r3, 0x84(r31)
  bl        -0x10070
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8003413C
 * Size:	00003C
 */
void JUTCacheFont::initialize_state()
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0xB0(r3)
  stw       r0, 0x90(r3)
  stw       r0, 0xAC(r3)
  stw       r0, 0x4C(r3)
  stw       r0, 0x7C(r3)
  stw       r0, 0x80(r3)
  stw       r0, 0x84(r3)
  stw       r0, 0x50(r3)
  stw       r0, 0x8C(r3)
  stw       r0, 0x88(r3)
  stw       r0, 0x90(r3)
  stw       r0, 0x9C(r3)
  stw       r0, 0xA0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80034178
 * Size:	000188
 */
void JUTCacheFont::getMemorySize(const ResFONT *, unsigned short *, unsigned long *, unsigned short *, unsigned long *, unsigned short *, unsigned long *, unsigned long *)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stmw      r14, 0x8(r1)
  mr.       r31, r4
  lwz       r14, 0x58(r1)
  mr        r15, r5
  mr        r16, r6
  mr        r17, r7
  mr        r18, r8
  mr        r19, r9
  mr        r20, r10
  bne-      .loc_0x3C
  li        r3, 0
  b         .loc_0x174

.loc_0x3C:
  lis       r3, 0x4D41
  addi      r22, r31, 0x20
  addi      r30, r3, 0x5031
  li        r29, 0
  li        r28, 0
  li        r27, 0
  li        r26, 0
  li        r25, 0
  li        r24, 0
  li        r23, 0
  li        r21, 0
  b         .loc_0x110

.loc_0x6C:
  lwz       r4, 0x0(r22)
  cmpw      r4, r30
  beq-      .loc_0xE8
  bge-      .loc_0xA4
  lis       r3, 0x494E
  addi      r0, r3, 0x4631
  cmpw      r4, r0
  beq-      .loc_0x104
  bge-      .loc_0xF8
  lis       r3, 0x474C
  addi      r0, r3, 0x5931
  cmpw      r4, r0
  beq-      .loc_0xC8
  b         .loc_0xF8

.loc_0xA4:
  lis       r3, 0x5749
  addi      r0, r3, 0x4431
  cmpw      r4, r0
  beq-      .loc_0xB8
  b         .loc_0xF8

.loc_0xB8:
  lwz       r0, 0x4(r22)
  addi      r29, r29, 0x1
  add       r26, r26, r0
  b         .loc_0x104

.loc_0xC8:
  lwz       r3, 0x10(r22)
  addi      r28, r28, 0x1
  lwz       r0, 0x4(r22)
  cmplw     r3, r23
  add       r25, r25, r0
  ble-      .loc_0x104
  mr        r23, r3
  b         .loc_0x104

.loc_0xE8:
  lwz       r0, 0x4(r22)
  addi      r27, r27, 0x1
  add       r24, r24, r0
  b         .loc_0x104

.loc_0xF8:
  lis       r3, 0x8048
  subi      r3, r3, 0x7BE0
  bl        -0xAED8

.loc_0x104:
  lwz       r0, 0x4(r22)
  addi      r21, r21, 0x1
  add       r22, r22, r0

.loc_0x110:
  lwz       r0, 0xC(r31)
  cmplw     r21, r0
  blt+      .loc_0x6C
  cmplwi    r15, 0
  beq-      .loc_0x128
  sth       r29, 0x0(r15)

.loc_0x128:
  cmplwi    r17, 0
  beq-      .loc_0x134
  sth       r28, 0x0(r17)

.loc_0x134:
  cmplwi    r19, 0
  beq-      .loc_0x140
  sth       r27, 0x0(r19)

.loc_0x140:
  cmplwi    r16, 0
  beq-      .loc_0x14C
  stw       r26, 0x0(r16)

.loc_0x14C:
  cmplwi    r18, 0
  beq-      .loc_0x158
  stw       r25, 0x0(r18)

.loc_0x158:
  cmplwi    r20, 0
  beq-      .loc_0x164
  stw       r24, 0x0(r20)

.loc_0x164:
  cmplwi    r14, 0
  beq-      .loc_0x170
  stw       r23, 0x0(r14)

.loc_0x170:
  li        r3, 0x1

.loc_0x174:
  lmw       r14, 0x8(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	80034300
 * Size:	0000B4
 */
void JUTCacheFont::initiate(const ResFONT *, void *, unsigned long, JKRHeap *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        .loc_0xB4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x9C
  lbz       r0, 0xB0(r31)
  cmplwi    r0, 0
  beq-      .loc_0x34
  lwz       r3, 0x90(r31)
  bl        -0x10258

.loc_0x34:
  lwz       r3, 0xAC(r31)
  cmplwi    r3, 0
  beq-      .loc_0x54
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x54:
  lwz       r3, 0x4C(r31)
  bl        -0x102A4
  lwz       r3, 0x50(r31)
  bl        -0x102AC
  lwz       r3, 0x7C(r31)
  bl        -0x102B4
  lwz       r3, 0x80(r31)
  bl        -0x102BC
  lwz       r3, 0x84(r31)
  bl        -0x102C4
  mr        r3, r31
  bl        -0x30B4
  mr        r3, r31
  bl        -0x7218
  li        r0, 0
  li        r3, 0
  stb       r0, 0x4(r31)
  b         .loc_0xA0

.loc_0x9C:
  li        r3, 0x1

.loc_0xA0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0xB4:
*/
}

/*
 * --INFO--
 * Address:	800343B4
 * Size:	000184
 */
void JUTCacheFont::internal_initiate(const ResFONT *, void *, unsigned long, JKRHeap *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  mr        r30, r6
  mr        r31, r7
  lbz       r0, 0xB0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x38
  lwz       r3, 0x90(r27)
  bl        -0x10310

.loc_0x38:
  lwz       r3, 0xAC(r27)
  cmplwi    r3, 0
  beq-      .loc_0x58
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x58:
  lwz       r3, 0x4C(r27)
  bl        -0x1035C
  lwz       r3, 0x50(r27)
  bl        -0x10364
  lwz       r3, 0x7C(r27)
  bl        -0x1036C
  lwz       r3, 0x80(r27)
  bl        -0x10374
  lwz       r3, 0x84(r27)
  bl        -0x1037C
  li        r0, 0
  mr        r3, r27
  stb       r0, 0xB0(r27)
  stw       r0, 0x90(r27)
  stw       r0, 0xAC(r27)
  stw       r0, 0x4C(r27)
  stw       r0, 0x7C(r27)
  stw       r0, 0x80(r27)
  stw       r0, 0x84(r27)
  stw       r0, 0x50(r27)
  stw       r0, 0x8C(r27)
  stw       r0, 0x88(r27)
  stw       r0, 0x90(r27)
  stw       r0, 0x9C(r27)
  stw       r0, 0xA0(r27)
  bl        -0x31A4
  mr        r3, r27
  bl        -0x3188
  mr        r3, r27
  bl        -0x7310
  cmplwi    r28, 0
  bne-      .loc_0xE0
  li        r3, 0
  b         .loc_0x170

.loc_0xE0:
  stw       r28, 0x48(r27)
  li        r4, 0x1
  addi      r0, r27, 0x88
  mr        r3, r27
  stb       r4, 0x4(r27)
  mr        r4, r28
  addi      r5, r27, 0x60
  addi      r6, r27, 0x70
  stw       r0, 0x8(r1)
  addi      r7, r27, 0x62
  addi      r8, r27, 0x74
  addi      r9, r27, 0x64
  addi      r10, r27, 0x78
  bl        -0x350
  mr        r3, r27
  mr        r4, r29
  mr        r5, r30
  mr        r6, r31
  bl        .loc_0x184
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x13C
  li        r3, 0
  b         .loc_0x170

.loc_0x13C:
  mr        r3, r27
  mr        r4, r31
  bl        0x204
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x158
  li        r3, 0
  b         .loc_0x170

.loc_0x158:
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1

.loc_0x170:
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x184:
*/
}

/*
 * --INFO--
 * Address:	80034538
 * Size:	0001C4
 */
void JUTCacheFont::allocArea(void *, unsigned long, JKRHeap *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  li        r5, 0
  stw       r29, 0x14(r1)
  mr        r29, r4
  mr        r4, r31
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r3, 0x20
  bl        -0x10630
  stw       r3, 0x4C(r28)
  lwz       r0, 0x4C(r28)
  cmplwi    r0, 0
  bne-      .loc_0x54
  li        r3, 0
  b         .loc_0x1A4

.loc_0x54:
  lwz       r3, 0x70(r28)
  cmplwi    r3, 0
  beq-      .loc_0x84
  mr        r4, r31
  li        r5, 0
  bl        -0x10558
  stw       r3, 0x7C(r28)
  lwz       r0, 0x7C(r28)
  cmplwi    r0, 0
  bne-      .loc_0x84
  li        r3, 0
  b         .loc_0x1A4

.loc_0x84:
  lhz       r0, 0x62(r28)
  cmplwi    r0, 0
  beq-      .loc_0xF0
  mr        r4, r31
  rlwinm    r3,r0,5,11,26
  li        r5, 0
  bl        -0x1058C
  stw       r3, 0x80(r28)
  lwz       r0, 0x80(r28)
  cmplwi    r0, 0
  bne-      .loc_0xB8
  li        r3, 0
  b         .loc_0x1A4

.loc_0xB8:
  lwz       r6, -0x78E0(r13)
  li        r5, 0
  lhz       r3, 0x62(r28)
  lwz       r0, 0x74(r28)
  rlwinm    r4,r3,5,0,26
  lwz       r3, 0x94(r6)
  sub       r4, r0, r4
  bl        -0x1ADC4
  stw       r3, 0xAC(r28)
  lwz       r0, 0xAC(r28)
  cmplwi    r0, 0
  bne-      .loc_0xF0
  li        r3, 0
  b         .loc_0x1A4

.loc_0xF0:
  lwz       r3, 0x78(r28)
  cmplwi    r3, 0
  beq-      .loc_0x120
  mr        r4, r31
  li        r5, 0
  bl        -0x105F4
  stw       r3, 0x84(r28)
  lwz       r0, 0x84(r28)
  cmplwi    r0, 0
  bne-      .loc_0x120
  li        r3, 0
  b         .loc_0x1A4

.loc_0x120:
  lwz       r3, 0x88(r28)
  addi      r0, r3, 0x40
  stw       r0, 0x94(r28)
  lwz       r0, 0x94(r28)
  divwu     r0, r30, r0
  stw       r0, 0x98(r28)
  lwz       r3, 0x98(r28)
  lwz       r0, 0x94(r28)
  cmplwi    r3, 0
  mullw     r3, r0, r3
  bne-      .loc_0x154
  li        r3, 0
  b         .loc_0x1A4

.loc_0x154:
  cmplwi    r29, 0
  beq-      .loc_0x16C
  stw       r29, 0x90(r28)
  li        r0, 0
  stb       r0, 0xB0(r28)
  b         .loc_0x198

.loc_0x16C:
  mr        r4, r31
  li        r5, 0x20
  bl        -0x10664
  stw       r3, 0x90(r28)
  lwz       r0, 0x90(r28)
  cmplwi    r0, 0
  bne-      .loc_0x190
  li        r3, 0
  b         .loc_0x1A4

.loc_0x190:
  li        r0, 0x1
  stb       r0, 0xB0(r28)

.loc_0x198:
  mr        r3, r28
  bl        0x73C
  li        r3, 0x1

.loc_0x1A4:
  lwz       r0, 0x24(r1)
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
 * Address:	800346FC
 * Size:	0000E8
 */
void JUTCacheFont::allocArray(JKRHeap *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lhz       r6, 0x64(r3)
  lhz       r0, 0x62(r3)
  lhz       r3, 0x60(r3)
  add       r0, r0, r6
  add       r0, r3, r0
  rlwinm    r3,r0,2,0,29
  bl        -0x106E4
  stw       r3, 0x50(r31)
  lwz       r3, 0x50(r31)
  cmplwi    r3, 0
  bne-      .loc_0x4C
  li        r3, 0
  b         .loc_0xD4

.loc_0x4C:
  lhz       r0, 0x60(r31)
  mr        r6, r3
  cmplwi    r0, 0
  beq-      .loc_0x6C
  stw       r3, 0x54(r31)
  lhz       r0, 0x60(r31)
  rlwinm    r0,r0,2,0,29
  add       r6, r3, r0

.loc_0x6C:
  lhz       r0, 0x62(r31)
  cmplwi    r0, 0
  beq-      .loc_0xC0
  stw       r6, 0x58(r31)
  li        r7, 0
  li        r5, 0
  lhz       r0, 0x62(r31)
  rlwinm    r0,r0,2,0,29
  add       r6, r6, r0
  b         .loc_0xB4

.loc_0x94:
  lwz       r0, 0x94(r31)
  lwz       r4, 0x90(r31)
  mullw     r0, r0, r7
  lwz       r3, 0x58(r31)
  addi      r7, r7, 0x1
  add       r0, r4, r0
  stwx      r0, r3, r5
  addi      r5, r5, 0x4

.loc_0xB4:
  lhz       r0, 0x62(r31)
  cmpw      r7, r0
  blt+      .loc_0x94

.loc_0xC0:
  lhz       r0, 0x64(r31)
  cmplwi    r0, 0
  beq-      .loc_0xD0
  stw       r6, 0x5C(r31)

.loc_0xD0:
  li        r3, 0x1

.loc_0xD4:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800347E4
 * Size:	000210
 */
void JUTCacheFont::setBlock()
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r4, 0x1
  lis       r6, 0x8048
  stw       r0, 0x44(r1)
  subi      r0, r4, 0x1
  stmw      r20, 0x10(r1)
  mr        r20, r3
  li        r29, 0
  subi      r30, r6, 0x7BE0
  mr        r28, r29
  li        r21, 0
  mr        r27, r29
  lwz       r5, 0xAC(r3)
  lis       r3, 0x4D41
  lwz       r26, 0x7C(r20)
  addi      r31, r3, 0x5031
  lwz       r25, 0x80(r20)
  lwz       r24, 0x84(r20)
  lwz       r23, 0x14(r5)
  sth       r0, 0x68(r20)
  lwz       r3, 0x48(r20)
  addi      r22, r3, 0x20
  b         .loc_0x1EC

.loc_0x60:
  lwz       r4, 0x0(r22)
  cmpw      r4, r31
  beq-      .loc_0x194
  bge-      .loc_0x98
  lis       r3, 0x494E
  addi      r0, r3, 0x4631
  cmpw      r4, r0
  beq-      .loc_0xAC
  bge-      .loc_0x1D8
  lis       r3, 0x474C
  addi      r0, r3, 0x5931
  cmpw      r4, r0
  beq-      .loc_0x104
  b         .loc_0x1D8

.loc_0x98:
  lis       r3, 0x5749
  addi      r0, r3, 0x4431
  cmpw      r4, r0
  beq-      .loc_0xDC
  b         .loc_0x1D8

.loc_0xAC:
  lwz       r3, 0x4C(r20)
  mr        r4, r22
  li        r5, 0x20
  bl        -0x2F700
  lwz       r4, 0x4C(r20)
  lis       r3, 0x8047
  addi      r0, r3, 0x4180
  lhz       r3, 0x8(r4)
  rlwinm    r3,r3,2,0,29
  add       r0, r0, r3
  stw       r0, 0x6C(r20)
  b         .loc_0x1E0

.loc_0xDC:
  lwz       r5, 0x4(r22)
  mr        r3, r26
  mr        r4, r22
  bl        -0x2F730
  lwz       r3, 0x54(r20)
  stwx      r26, r3, r29
  addi      r29, r29, 0x4
  lwz       r0, 0x4(r22)
  add       r26, r26, r0
  b         .loc_0x1E0

.loc_0x104:
  mr        r3, r25
  mr        r4, r22
  li        r5, 0x20
  bl        -0x2F758
  lwz       r5, 0x4(r22)
  mr        r4, r23
  addi      r3, r22, 0x20
  li        r6, 0
  subi      r5, r5, 0x20
  li        r7, 0
  li        r8, 0
  li        r9, -0x1
  li        r10, 0
  bl        -0x1CC5C
  cmplwi    r3, 0
  bne-      .loc_0x15C
  addi      r3, r30, 0x24
  addi      r6, r30, 0x38
  li        r4, 0x1DD
  subi      r5, r2, 0x7C40
  crclr     6, 0x6
  bl        -0xA2FC

.loc_0x15C:
  stw       r23, 0x0(r25)
  lwz       r3, 0x10(r25)
  lwz       r0, 0x88(r20)
  cmplw     r3, r0
  ble-      .loc_0x174
  stw       r3, 0x88(r20)

.loc_0x174:
  lwz       r3, 0x58(r20)
  stwx      r25, r3, r28
  addi      r28, r28, 0x4
  addi      r25, r25, 0x20
  lwz       r0, 0x4(r22)
  add       r23, r0, r23
  subi      r23, r23, 0x20
  b         .loc_0x1E0

.loc_0x194:
  lwz       r5, 0x4(r22)
  mr        r3, r24
  mr        r4, r22
  bl        -0x2F7E8
  lwz       r3, 0x5C(r20)
  stwx      r24, r3, r27
  lwz       r3, 0x5C(r20)
  lhz       r0, 0x68(r20)
  lwzx      r3, r3, r27
  lhz       r3, 0xA(r3)
  cmplw     r0, r3
  ble-      .loc_0x1C8
  sth       r3, 0x68(r20)

.loc_0x1C8:
  lwz       r0, 0x4(r22)
  addi      r27, r27, 0x4
  add       r24, r24, r0
  b         .loc_0x1E0

.loc_0x1D8:
  addi      r3, r30, 0x60
  bl        -0xB620

.loc_0x1E0:
  lwz       r0, 0x4(r22)
  addi      r21, r21, 0x1
  add       r22, r22, r0

.loc_0x1EC:
  lwz       r3, 0x48(r20)
  lwz       r0, 0xC(r3)
  cmplw     r21, r0
  blt+      .loc_0x60
  lmw       r20, 0x10(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JUTCacheFont::determineBlankPage()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void JUTCacheFont::getGlyphFromAram(JUTCacheFont::TGlyphCacheInfo *, JUTCacheFont::TCachePage *, int *, int *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800349F4
 * Size:	0000BC
 */
void JUTCacheFont::loadImage(int, _GXTexMapID)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r5
  li        r5, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r4, 0x8(r1)
  addi      r4, r1, 0x8
  bl        .loc_0xBC
  mr.       r31, r3
  beq-      .loc_0xA0
  lwz       r6, 0x8(r1)
  mr        r4, r30
  lhz       r5, 0x16(r31)
  addi      r3, r31, 0x20
  lhz       r7, 0xC(r31)
  divw      r0, r6, r5
  mullw     r0, r0, r5
  sub       r0, r6, r0
  mullw     r0, r7, r0
  stw       r0, 0x1C(r29)
  lwz       r5, 0x8(r1)
  lhz       r0, 0x16(r31)
  lhz       r6, 0xE(r31)
  divw      r0, r5, r0
  mullw     r0, r6, r0
  stw       r0, 0x20(r29)
  bl        0xB2CA4
  lwz       r0, 0x8C(r29)
  cmpwi     r0, 0x1
  bne-      .loc_0xA0
  mr        r3, r29
  mr        r4, r31
  bl        0x414
  mr        r3, r29
  mr        r4, r31
  bl        0x44C

.loc_0xA0:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xBC:
*/
}

/*
 * --INFO--
 * Address:	80034AB0
 * Size:	000298
 */
void JUTCacheFont::loadCache_char_subroutine(int *, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r24, 0x10(r1)
  mr        r25, r3
  mr        r26, r4
  mr        r27, r5
  lwz       r6, 0x9C(r3)
  li        r3, 0
  b         .loc_0x58

.loc_0x28:
  lhz       r5, 0x8(r6)
  lwz       r4, 0x0(r26)
  cmpw      r5, r4
  bgt-      .loc_0x54
  lhz       r0, 0xA(r6)
  cmpw      r4, r0
  bgt-      .loc_0x54
  sub       r0, r4, r5
  mr        r3, r6
  stw       r0, 0x0(r26)
  b         .loc_0x60

.loc_0x54:
  lwz       r6, 0x4(r6)

.loc_0x58:
  cmplwi    r6, 0
  bne+      .loc_0x28

.loc_0x60:
  cmplwi    r3, 0
  bne-      .loc_0x274
  lhz       r0, 0x62(r25)
  li        r28, 0
  li        r3, 0
  mtctr     r0
  cmpwi     r0, 0
  ble-      .loc_0xC8

.loc_0x80:
  lwz       r6, 0x58(r25)
  lwz       r5, 0x0(r26)
  lwzx      r4, r6, r3
  lhz       r0, 0x8(r4)
  cmpw      r0, r5
  bgt-      .loc_0xBC
  lhz       r0, 0xA(r4)
  cmpw      r5, r0
  bgt-      .loc_0xBC
  rlwinm    r0,r28,2,0,29
  lwzx      r3, r6, r0
  lhz       r0, 0x8(r3)
  sub       r0, r5, r0
  stw       r0, 0x0(r26)
  b         .loc_0xC8

.loc_0xBC:
  addi      r3, r3, 0x4
  addi      r28, r28, 0x1
  bdnz+     .loc_0x80

.loc_0xC8:
  lhz       r0, 0x62(r25)
  cmpw      r28, r0
  bge-      .loc_0x26C
  lwz       r29, 0xA4(r25)
  cmplwi    r29, 0
  beq-      .loc_0x10C
  lwz       r0, 0x4(r29)
  stw       r0, 0xA4(r25)
  lwz       r3, 0x4(r29)
  cmplwi    r3, 0
  bne-      .loc_0x100
  li        r0, 0
  stw       r0, 0xA8(r25)
  b         .loc_0x150

.loc_0x100:
  li        r0, 0
  stw       r0, 0x0(r3)
  b         .loc_0x150

.loc_0x10C:
  lwz       r29, 0xA0(r25)
  b         .loc_0x144

.loc_0x114:
  lhz       r0, 0x1E(r29)
  lwz       r3, 0x0(r29)
  cmplwi    r0, 0
  bne-      .loc_0x140
  mr        r3, r25
  mr        r4, r29
  bl        0x2BC
  lwz       r3, 0xB4(r25)
  addi      r0, r3, 0x1
  stw       r0, 0xB4(r25)
  b         .loc_0x150

.loc_0x140:
  mr        r29, r3

.loc_0x144:
  cmplwi    r29, 0
  bne+      .loc_0x114
  li        r29, 0

.loc_0x150:
  cmplwi    r29, 0
  bne-      .loc_0x160
  li        r3, 0
  b         .loc_0x284

.loc_0x160:
  lwz       r4, 0x58(r25)
  rlwinm    r0,r28,2,0,29
  mr        r3, r29
  li        r5, 0x20
  lwzx      r30, r4, r0
  mr        r4, r30
  bl        -0x2FA8C
  mr        r3, r25
  mr        r4, r29
  bl        0x2A8
  lhz       r4, 0x16(r29)
  lhz       r3, 0x18(r29)
  lwz       r0, 0x0(r26)
  mullw     r4, r4, r3
  lhz       r3, 0x8(r29)
  divw      r31, r0, r4
  subi      r0, r4, 0x1
  mullw     r5, r31, r4
  add       r3, r3, r5
  sth       r3, 0x8(r29)
  lhz       r3, 0x8(r29)
  lhz       r4, 0xA(r29)
  add       r0, r3, r0
  rlwinm    r0,r0,0,16,31
  cmplw     r4, r0
  bge-      .loc_0x1CC
  mr        r0, r4

.loc_0x1CC:
  sth       r0, 0xA(r29)
  addi      r24, r29, 0x40
  mr        r4, r24
  li        r6, 0
  lwz       r0, 0x0(r26)
  li        r7, 0
  li        r8, 0
  li        r9, -0x1
  sub       r0, r0, r5
  li        r10, 0
  stw       r0, 0x0(r26)
  lwz       r5, 0x10(r29)
  lwz       r3, 0x0(r30)
  mullw     r0, r5, r31
  add       r3, r3, r0
  bl        -0x1CD6C
  addi      r26, r29, 0x20
  lhz       r5, 0x1A(r29)
  lhz       r6, 0x1C(r29)
  mr        r3, r26
  lhz       r7, 0x14(r29)
  mr        r4, r24
  li        r8, 0
  li        r9, 0
  li        r10, 0
  bl        0xB249C
  lfs       f1, -0x7C3C(r2)
  mr        r3, r26
  li        r4, 0x1
  li        r5, 0x1
  fmr       f2, f1
  li        r6, 0
  fmr       f3, f1
  li        r7, 0
  li        r8, 0
  bl        0xB2708
  stw       r31, 0x44(r25)
  mr        r3, r29
  sth       r28, 0x66(r25)
  b         .loc_0x274

.loc_0x26C:
  li        r3, 0
  b         .loc_0x284

.loc_0x274:
  rlwinm.   r0,r27,0,24,31
  beq-      .loc_0x284
  li        r0, 0x1
  sth       r0, 0x1E(r3)

.loc_0x284:
  lmw       r24, 0x10(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JUTCacheFont::loadCache_char(int, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80034D48
 * Size:	0000C8
 */
void JUTCacheFont::loadCache_string(const char *, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3

.loc_0x28:
  lwz       r12, 0x0(r28)
  mr        r3, r28
  lbz       r4, 0x0(r29)
  lwz       r12, 0x40(r12)
  mr        r31, r4
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  lbzu      r0, 0x1(r29)
  rlwinm    r3,r31,8,0,23
  mr        r31, r3
  rlwimi    r31,r0,0,24,31

.loc_0x5C:
  cmpwi     r31, 0
  beq-      .loc_0xA4
  mr        r3, r28
  mr        r4, r31
  bl        -0x2CCC
  stw       r3, 0x8(r1)
  mr        r3, r28
  mr        r5, r30
  addi      r4, r1, 0x8
  bl        -0x318
  neg       r0, r3
  or        r0, r0, r3
  rlwinm.   r0,r0,1,31,31
  bne-      .loc_0x9C
  li        r3, 0
  b         .loc_0xA8

.loc_0x9C:
  addi      r29, r29, 0x1
  b         .loc_0x28

.loc_0xA4:
  li        r3, 0x1

.loc_0xA8:
  lwz       r0, 0x24(r1)
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
 * Size:	0000BC
 */
void JUTCacheFont::loadCache_string_size(const char *, unsigned long, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JUTCacheFont::unlockCache_all()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void JUTCacheFont::unlockCache_char(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JUTCacheFont::unlockCache_string(const char *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void JUTCacheFont::unlockCache_string_size(const char *, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80034E10
 * Size:	000088
 */
void JUTCacheFont::invalidiateAllCache()
{
/*
.loc_0x0:
  lwz       r5, 0x90(r3)
  li        r6, 0
  b         .loc_0x58

.loc_0xC:
  cmpwi     r6, 0
  bne-      .loc_0x1C
  li        r0, 0
  b         .loc_0x24

.loc_0x1C:
  lwz       r0, 0x94(r3)
  sub       r0, r5, r0

.loc_0x24:
  stw       r0, 0x0(r5)
  lwz       r4, 0x98(r3)
  subi      r0, r4, 0x1
  cmplw     r6, r0
  bne-      .loc_0x40
  li        r0, 0
  b         .loc_0x48

.loc_0x40:
  lwz       r0, 0x94(r3)
  add       r0, r5, r0

.loc_0x48:
  stw       r0, 0x4(r5)
  addi      r6, r6, 0x1
  lwz       r0, 0x94(r3)
  add       r5, r5, r0

.loc_0x58:
  lwz       r0, 0x98(r3)
  cmplw     r6, r0
  blt+      .loc_0xC
  lwz       r4, 0x94(r3)
  li        r0, 0
  sub       r4, r5, r4
  stw       r4, 0xA8(r3)
  lwz       r4, 0x90(r3)
  stw       r4, 0xA4(r3)
  stw       r0, 0x9C(r3)
  stw       r0, 0xA0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80034E98
 * Size:	000044
 */
void JUTCacheFont::unlink(JUTCacheFont::TGlyphCacheInfo *)
{
/*
.loc_0x0:
  lwz       r5, 0x0(r4)
  cmplwi    r5, 0
  bne-      .loc_0x18
  lwz       r0, 0x4(r4)
  stw       r0, 0x9C(r3)
  b         .loc_0x20

.loc_0x18:
  lwz       r0, 0x4(r4)
  stw       r0, 0x4(r5)

.loc_0x20:
  lwz       r5, 0x4(r4)
  cmplwi    r5, 0
  bne-      .loc_0x38
  lwz       r0, 0x0(r4)
  stw       r0, 0xA0(r3)
  blr       

.loc_0x38:
  lwz       r0, 0x0(r4)
  stw       r0, 0x0(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	80034EDC
 * Size:	00002C
 */
void JUTCacheFont::prepend(JUTCacheFont::TGlyphCacheInfo *)
{
/*
.loc_0x0:
  lwz       r5, 0x9C(r3)
  li        r0, 0
  stw       r4, 0x9C(r3)
  cmplwi    r5, 0
  stw       r0, 0x0(r4)
  stw       r5, 0x4(r4)
  bne-      .loc_0x24
  stw       r4, 0xA0(r3)
  blr       

.loc_0x24:
  stw       r4, 0x0(r5)
  blr
*/
}