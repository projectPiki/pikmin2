

/*
 * --INFO--
 * Address:	80006D0C
 * Size:	000048
 */
void JMessage::TReference::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  subi      r0, r5, 0x1BB8
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        0x1D37C

.loc_0x30:
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
 * Address:	80006D54
 * Size:	000008
 */
void JMessage::TReference::do_word( const(unsigned long))
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80006D5C
 * Size:	000048
 */
void JMessage::TProcessor::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  subi      r0, r5, 0x1BF8
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        0x1D32C

.loc_0x30:
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
 * Address:	80006DA4
 * Size:	0000BC
 */
void JMessage::TProcessor::setBegin_messageCode( (unsigned short, unsigned short))
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
  mr        r29, r3
  bl        0x1A0
  cmplwi    r3, 0
  bne-      .loc_0x34
  li        r31, 0
  b         .loc_0x60

.loc_0x34:
  lwz       r3, 0xC(r3)
  rlwinm    r4,r30,0,16,31
  lhz       r0, 0x8(r3)
  cmplw     r4, r0
  bge-      .loc_0x5C
  lhz       r0, 0xA(r3)
  mullw     r0, r4, r0
  add       r31, r3, r0
  addi      r31, r31, 0x10
  b         .loc_0x60

.loc_0x5C:
  li        r31, 0

.loc_0x60:
  cmplwi    r31, 0
  beq-      .loc_0xA0
  lwz       r5, 0x8(r29)
  mr        r3, r29
  lwz       r0, 0x0(r31)
  lwz       r4, 0x10(r5)
  add       r30, r4, r0
  mr        r4, r30
  bl        0x334
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  mr        r5, r30
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     

.loc_0xA0:
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
 * Address:	80006E60
 * Size:	000044
 */
void JMessage::TProcessor::setBegin_messageID( (unsigned long, unsigned long, bool *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x170
  mr        r4, r3
  addis     r0, r4, 0x1
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x30
  mr        r3, r31
  bl        .loc_0x44

.loc_0x30:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x44:
*/
}

/*
 * --INFO--
 * Address:	80006EA4
 * Size:	0000C0
 */
void JMessage::TProcessor::setBegin_messageCode( (unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  rlwinm    r4,r4,16,16,31
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        .loc_0xC0
  cmplwi    r3, 0
  bne-      .loc_0x38
  li        r30, 0
  b         .loc_0x64

.loc_0x38:
  lwz       r4, 0xC(r3)
  rlwinm    r3,r30,0,16,31
  lhz       r0, 0x8(r4)
  cmplw     r3, r0
  bge-      .loc_0x60
  lhz       r0, 0xA(r4)
  mullw     r0, r3, r0
  add       r30, r4, r0
  addi      r30, r30, 0x10
  b         .loc_0x64

.loc_0x60:
  li        r30, 0

.loc_0x64:
  cmplwi    r30, 0
  beq-      .loc_0xA4
  lwz       r5, 0x8(r29)
  mr        r3, r29
  lwz       r0, 0x0(r30)
  lwz       r4, 0x10(r5)
  add       r31, r4, r0
  mr        r4, r31
  bl        0x230
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  mr        r5, r31
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     

.loc_0xA4:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xC0:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JMessage::TProcessor::pushCurrent( (char const *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JMessage::TProcessor::popCurrent(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80006F64
 * Size:	000080
 */
void JMessage::TProcessor::getResource_groupID( const(unsigned short))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r7, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x8(r3)
  cmplwi    r3, 0
  beq-      .loc_0x3C
  lwz       r5, 0xC(r3)
  rlwinm    r6,r4,0,16,31
  lhz       r0, 0xC(r5)
  cmplw     r6, r0
  bne-      .loc_0x3C
  li        r7, 0x1

.loc_0x3C:
  rlwinm.   r0,r7,0,24,31
  beq-      .loc_0x48
  b         .loc_0x6C

.loc_0x48:
  lwz       r3, 0x4(r31)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0x60
  li        r3, 0
  b         .loc_0x68

.loc_0x60:
  addi      r3, r3, 0x8
  bl        -0x9AC

.loc_0x68:
  stw       r3, 0x8(r31)

.loc_0x6C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80006FE4
 * Size:	000150
 */
void JMessage::TProcessor::toMessageCode_messageID( const(unsigned long, unsigned long, bool *))
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stmw      r26, 0x58(r1)
  mr        r31, r3
  lwz       r29, 0x8(r3)
  mr        r26, r4
  mr        r27, r5
  mr        r28, r6
  cmplwi    r29, 0
  beq-      .loc_0x58
  mr        r3, r29
  bl        -0xC50
  mr        r4, r3
  rlwinm    r0,r3,0,16,31
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x58
  lwz       r3, 0xC(r29)
  lhz       r0, 0xC(r3)
  rlwinm    r3,r0,16,0,15
  rlwimi    r3,r4,0,16,31
  b         .loc_0x13C

.loc_0x58:
  lwz       r3, 0x4(r31)
  cmplwi    r3, 0
  bne-      .loc_0x6C
  li        r3, 0
  b         .loc_0x70

.loc_0x6C:
  lwz       r3, 0x4(r3)

.loc_0x70:
  cmplwi    r3, 0
  bne-      .loc_0x80
  li        r3, -0x1
  b         .loc_0x13C

.loc_0x80:
  lwzu      r0, 0xC(r3)
  stw       r3, 0x24(r1)
  stw       r3, 0x20(r1)
  stw       r3, 0x3C(r1)
  stw       r3, 0x38(r1)
  stw       r3, 0x1C(r1)
  stw       r3, 0x4C(r1)
  stw       r3, 0x48(r1)
  stw       r0, 0x18(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0x34(r1)
  stw       r0, 0x30(r1)
  stw       r0, 0x10(r1)
  stw       r0, 0x44(r1)
  stw       r0, 0x40(r1)
  stw       r0, 0x50(r1)
  stw       r3, 0x54(r1)
  b         .loc_0x118

.loc_0xC8:
  lwz       r30, 0x50(r1)
  lwz       r0, 0x0(r30)
  cmplw     r30, r29
  stw       r0, 0x50(r1)
  beq-      .loc_0x118
  mr        r3, r30
  mr        r4, r26
  mr        r5, r27
  mr        r6, r28
  bl        -0xD0C
  mr        r4, r3
  rlwinm    r0,r3,0,16,31
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x118
  lwz       r3, 0xC(r30)
  stw       r30, 0x8(r31)
  lhz       r0, 0xC(r3)
  rlwinm    r3,r0,16,0,15
  rlwimi    r3,r4,0,16,31
  b         .loc_0x13C

.loc_0x118:
  lwz       r3, 0x54(r1)
  lwz       r0, 0x50(r1)
  stw       r3, 0x2C(r1)
  cmplw     r0, r3
  stw       r0, 0x28(r1)
  stw       r3, 0xC(r1)
  stw       r0, 0x8(r1)
  bne+      .loc_0xC8
  li        r3, -0x1

.loc_0x13C:
  lmw       r26, 0x58(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void JMessage::TProcessor::on_select_begin( (char const *(*)(JMessage::TProcessor *), void const *, char const *, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JMessage::TProcessor::on_select_end(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void JMessage::TProcessor::on_select_separate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80007134
 * Size:	000004
 */
void JMessage::TProcessor::do_reset(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80007138
 * Size:	000004
 */
void JMessage::TProcessor::do_character( (int))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8000713C
 * Size:	000008
 */
void JMessage::TProcessor::do_tag( (unsigned long, void const *, unsigned long))
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80007144
 * Size:	000008
 */
void JMessage::TProcessor::do_systemTagCode( (unsigned short, void const *, unsigned long))
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8000714C
 * Size:	000004
 */
void JMessage::TProcessor::do_select_begin( (unsigned long))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80007150
 * Size:	000004
 */
void JMessage::TProcessor::do_select_end(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80007154
 * Size:	000004
 */
void JMessage::TProcessor::do_select_separate(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80007158
 * Size:	000064
 */
void JMessage::TProcessor::reset_( (char const *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r6, 0
  lis       r5, 0x8000
  stw       r0, 0x14(r1)
  addi      r0, r5, 0x7650
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0xC(r3)
  stw       r6, 0x10(r3)
  stw       r0, 0x24(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xC(r12)
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
 * Address:	........
 * Size:	0000B0
 */
void JMessage::TProcessor::on_tag_(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800071BC
 * Size:	000008
 */
void JMessage::TProcessor::do_setBegin_isReady_( const
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	800071C4
 * Size:	000260
 */
void JMessage::TProcessor::do_tag_( (unsigned long, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm    r0,r4,16,24,31
  cmpwi     r0, 0xFD
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  rlwinm    r29,r4,0,16,31
  stw       r28, 0x10(r1)
  mr        r28, r6
  beq-      .loc_0xF4
  bge-      .loc_0x54
  cmpwi     r0, 0xF6
  beq-      .loc_0x134
  bge-      .loc_0x240
  cmpwi     r0, 0xF5
  bge-      .loc_0x1BC
  b         .loc_0x240

.loc_0x54:
  cmpwi     r0, 0xFF
  beq-      .loc_0x64
  bge-      .loc_0x240
  b         .loc_0xA4

.loc_0x64:
  lwz       r12, 0x0(r3)
  mr        r4, r29
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x240
  mr        r3, r30
  mr        r4, r29
  lwz       r12, 0x0(r30)
  mr        r5, r31
  mr        r6, r28
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x240

.loc_0xA4:
  lwz       r3, 0x4(r30)
  mr        r4, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x240
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0x4
  bge-      .loc_0x240
  rlwinm    r0,r0,2,0,29
  lwz       r5, 0xC(r30)
  add       r4, r30, r0
  stw       r5, 0x14(r4)
  lwz       r4, 0x10(r30)
  addi      r0, r4, 0x1
  stw       r0, 0x10(r30)
  stw       r3, 0xC(r30)
  b         .loc_0x240

.loc_0xF4:
  mr        r4, r29
  bl        .loc_0x260
  cmplwi    r3, 0
  beq-      .loc_0x240
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0x4
  bge-      .loc_0x240
  rlwinm    r0,r0,2,0,29
  lwz       r5, 0xC(r30)
  add       r4, r30, r0
  stw       r5, 0x14(r4)
  lwz       r4, 0x10(r30)
  addi      r0, r4, 0x1
  stw       r0, 0x10(r30)
  stw       r3, 0xC(r30)
  b         .loc_0x240

.loc_0x134:
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0x4
  bge-      .loc_0x240
  lis       r5, 0x8000
  lis       r4, 0x8000
  addi      r5, r5, 0x76B0
  add       r0, r31, r28
  stw       r5, 0x24(r30)
  addi      r4, r4, 0x77AC
  stw       r4, 0x28(r30)
  stw       r0, 0x2C(r30)
  stw       r31, 0x30(r30)
  stw       r29, 0x34(r30)
  bl        0x480
  cmplwi    r3, 0
  beq-      .loc_0x1A0
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0x4
  bge-      .loc_0x1A0
  rlwinm    r0,r0,2,0,29
  lwz       r5, 0xC(r30)
  add       r4, r30, r0
  stw       r5, 0x14(r4)
  lwz       r4, 0x10(r30)
  addi      r0, r4, 0x1
  stw       r0, 0x10(r30)
  stw       r3, 0xC(r30)

.loc_0x1A0:
  mr        r3, r30
  mr        r4, r29
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x240

.loc_0x1BC:
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0x4
  bge-      .loc_0x240
  lis       r5, 0x8000
  lis       r4, 0x8000
  addi      r5, r5, 0x76B0
  add       r0, r31, r28
  stw       r5, 0x24(r30)
  addi      r4, r4, 0x77C8
  stw       r4, 0x28(r30)
  stw       r0, 0x2C(r30)
  stw       r31, 0x30(r30)
  stw       r29, 0x34(r30)
  bl        0x414
  cmplwi    r3, 0
  beq-      .loc_0x228
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0x4
  bge-      .loc_0x228
  rlwinm    r0,r0,2,0,29
  lwz       r5, 0xC(r30)
  add       r4, r30, r0
  stw       r5, 0x14(r4)
  lwz       r4, 0x10(r30)
  addi      r0, r4, 0x1
  stw       r0, 0x10(r30)
  stw       r3, 0xC(r30)

.loc_0x228:
  mr        r3, r30
  mr        r4, r29
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x240:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x260:
*/
}

/*
 * --INFO--
 * Address:	80007424
 * Size:	000050
 */
void JMessage::TProcessor::on_message_limited( const(unsigned short))
{
/*
.loc_0x0:
  lwz       r3, 0x8(r3)
  rlwinm    r5,r4,0,16,31
  lwz       r4, 0xC(r3)
  lhz       r0, 0x8(r4)
  cmplw     r5, r0
  bge-      .loc_0x2C
  lhz       r0, 0xA(r4)
  mullw     r0, r5, r0
  add       r4, r4, r0
  addi      r4, r4, 0x10
  b         .loc_0x30

.loc_0x2C:
  li        r4, 0

.loc_0x30:
  cmplwi    r4, 0
  bne-      .loc_0x40
  li        r3, 0
  blr       

.loc_0x40:
  lwz       r3, 0x10(r3)
  lwz       r0, 0x0(r4)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	80007474
 * Size:	0000D0
 */
void JMessage::TProcessor::do_systemTagCode_( (unsigned short, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,0,16,31
  cmpwi     r0, 0x5
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x80
  bge-      .loc_0xBC
  cmpwi     r0, 0x4
  bge-      .loc_0x30
  b         .loc_0xBC

.loc_0x30:
  lwz       r3, 0x4(r31)
  lwz       r4, 0x0(r5)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0xBC
  lwz       r0, 0x10(r31)
  cmplwi    r0, 0x4
  bge-      .loc_0xBC
  rlwinm    r0,r0,2,0,29
  lwz       r5, 0xC(r31)
  add       r4, r31, r0
  stw       r5, 0x14(r4)
  lwz       r4, 0x10(r31)
  addi      r0, r4, 0x1
  stw       r0, 0x10(r31)
  stw       r3, 0xC(r31)
  b         .loc_0xBC

.loc_0x80:
  lwz       r4, 0x0(r5)
  bl        .loc_0xD0
  cmplwi    r3, 0
  beq-      .loc_0xBC
  lwz       r0, 0x10(r31)
  cmplwi    r0, 0x4
  bge-      .loc_0xBC
  rlwinm    r0,r0,2,0,29
  lwz       r5, 0xC(r31)
  add       r4, r31, r0
  stw       r5, 0x14(r4)
  lwz       r4, 0x10(r31)
  addi      r0, r4, 0x1
  stw       r0, 0x10(r31)
  stw       r3, 0xC(r31)

.loc_0xBC:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0xD0:
*/
}

/*
 * --INFO--
 * Address:	80007544
 * Size:	000020
 */
void JMessage::TProcessor::on_message( const(unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        .loc_0x20
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x20:
*/
}

/*
 * --INFO--
 * Address:	80007564
 * Size:	0000EC
 */
void JMessage::TProcessor::getMessageText_messageCode( const(unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r6, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x8(r3)
  stw       r30, 0x8(r1)
  mr        r30, r4
  cmplwi    r3, 0
  beq-      .loc_0x44
  lwz       r4, 0xC(r3)
  rlwinm    r5,r30,16,16,31
  lhz       r0, 0xC(r4)
  cmplw     r5, r0
  bne-      .loc_0x44
  li        r6, 0x1

.loc_0x44:
  rlwinm.   r0,r6,0,24,31
  beq-      .loc_0x50
  b         .loc_0x78

.loc_0x50:
  lwz       r3, 0x4(r31)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0x68
  li        r3, 0
  b         .loc_0x74

.loc_0x68:
  rlwinm    r4,r30,16,16,31
  addi      r3, r3, 0x8
  bl        -0xFB8

.loc_0x74:
  stw       r3, 0x8(r31)

.loc_0x78:
  cmplwi    r3, 0
  bne-      .loc_0x88
  li        r4, 0
  b         .loc_0xB4

.loc_0x88:
  lwz       r4, 0xC(r3)
  rlwinm    r3,r30,0,16,31
  lhz       r0, 0x8(r4)
  cmplw     r3, r0
  bge-      .loc_0xB0
  lhz       r0, 0xA(r4)
  mullw     r0, r3, r0
  add       r4, r4, r0
  addi      r4, r4, 0x10
  b         .loc_0xB4

.loc_0xB0:
  li        r4, 0

.loc_0xB4:
  cmplwi    r4, 0
  bne-      .loc_0xC4
  li        r3, 0
  b         .loc_0xD4

.loc_0xC4:
  lwz       r3, 0x8(r31)
  lwz       r0, 0x0(r4)
  lwz       r3, 0x10(r3)
  add       r3, r3, r0

.loc_0xD4:
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
 * Address:	........
 * Size:	000154
 */
void JMessage::TProcessor::process_character_(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80007650
 * Size:	000060
 */
void JMessage::TProcessor::process_onCharacterEnd_normal_( (JMessage::TProcessor *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  rlwinm    r0,r0,2,0,29
  add       r4, r3, r0
  lwz       r0, 0x10(r4)
  stw       r0, 0xC(r3)
  lwz       r4, 0x10(r3)
  subi      r0, r4, 0x1
  stw       r0, 0x10(r3)
  li        r3, 0x1
  b         .loc_0x50

.loc_0x3C:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  li        r3, 0

.loc_0x50:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800076B0
 * Size:	0000FC
 */
void JMessage::TProcessor::process_onCharacterEnd_select_( (JMessage::TProcessor *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, 0x34(r3)
  subi      r0, r4, 0x1
  stw       r0, 0x34(r3)
  lwz       r0, 0x34(r3)
  cmplwi    r0, 0
  beq-      .loc_0xA8
  lwz       r0, 0x10(r31)
  rlwinm    r0,r0,2,0,29
  add       r4, r31, r0
  lwz       r0, 0x10(r4)
  stw       r0, 0xC(r31)
  lwz       r4, 0x10(r31)
  subi      r0, r4, 0x1
  stw       r0, 0x10(r31)
  lwz       r12, 0x28(r31)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x8C
  lwz       r0, 0x10(r31)
  cmplwi    r0, 0x4
  bge-      .loc_0x8C
  rlwinm    r0,r0,2,0,29
  lwz       r5, 0xC(r31)
  add       r4, r31, r0
  stw       r5, 0x14(r4)
  lwz       r4, 0x10(r31)
  addi      r0, r4, 0x1
  stw       r0, 0x10(r31)
  stw       r3, 0xC(r31)

.loc_0x8C:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0xE8

.loc_0xA8:
  lis       r4, 0x8000
  addi      r0, r4, 0x7650
  stw       r0, 0x24(r31)
  lwz       r0, 0x10(r31)
  rlwinm    r0,r0,2,0,29
  add       r4, r31, r0
  lwz       r0, 0x10(r4)
  stw       r0, 0xC(r31)
  lwz       r4, 0x10(r31)
  subi      r0, r4, 0x1
  stw       r0, 0x10(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1

.loc_0xE8:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800077AC
 * Size:	00001C
 */
void JMessage::TProcessor::process_onSelect_limited_( (JMessage::TProcessor *))
{
/*
.loc_0x0:
  lwz       r5, 0x30(r3)
  lhz       r4, 0x0(r5)
  addi      r0, r5, 0x2
  stw       r0, 0x30(r3)
  lwz       r0, 0x2C(r3)
  add       r3, r0, r4
  blr
*/
}

/*
 * --INFO--
 * Address:	800077C8
 * Size:	00001C
 */
void JMessage::TProcessor::process_onSelect_( (JMessage::TProcessor *))
{
/*
.loc_0x0:
  lwz       r5, 0x30(r3)
  lwz       r4, 0x0(r5)
  addi      r0, r5, 0x4
  stw       r0, 0x30(r3)
  lwz       r0, 0x2C(r3)
  add       r3, r0, r4
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JMessage::TSequenceProcessor::toString_status( (int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JMessage::TSequenceProcessor::toValue_status( (char const *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800077E4
 * Size:	000044
 */
void JMessage::TSequenceProcessor::__ct( (JMessage::TReference const *, JMessage::TControl *))
{
/*
.loc_0x0:
  lis       r8, 0x804A
  lis       r7, 0x8000
  subi      r0, r8, 0x1BF8
  lis       r6, 0x804A
  stw       r0, 0x0(r3)
  li        r8, 0
  addi      r7, r7, 0x7650
  subi      r0, r6, 0x1C58
  stw       r4, 0x4(r3)
  stw       r8, 0x8(r3)
  stw       r8, 0xC(r3)
  stw       r8, 0x10(r3)
  stw       r7, 0x24(r3)
  stw       r0, 0x0(r3)
  stw       r5, 0x38(r3)
  stw       r8, 0x3C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80007828
 * Size:	00005C
 */
void JMessage::TSequenceProcessor::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0x1C58
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0x1BF8
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x1C84C

.loc_0x44:
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
 * Address:	80007884
 * Size:	000278
 */
void JMessage::TSequenceProcessor::process( (char const *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r30, r3
  mr        r31, r4

.loc_0x18:
  lwz       r0, 0x3C(r30)
  cmpwi     r0, 0x3
  beq-      .loc_0x38
  bge-      .loc_0x2C
  b         .loc_0x100

.loc_0x2C:
  cmpwi     r0, 0x5
  bge-      .loc_0x100
  b         .loc_0x84

.loc_0x38:
  mr        r3, r30
  bl        0x268
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x50
  lwz       r3, 0xC(r30)
  b         .loc_0x264

.loc_0x50:
  li        r0, 0x2
  mr        r3, r30
  stw       r0, 0x3C(r30)
  lwz       r12, 0x40(r30)
  mtctr     r12
  bctrl     
  mr.       r4, r3
  beq-      .loc_0x100
  lwz       r5, 0x38(r30)
  mr        r3, r30
  lwz       r5, 0x18(r5)
  bl        0x254
  b         .loc_0x100

.loc_0x84:
  mr        r3, r30
  bl        0x2E4
  mr        r4, r3
  cmplwi    r4, 0xFFFF
  ble-      .loc_0xC4
  cmpwi     r4, -0x1
  beq-      .loc_0xB0
  bge-      .loc_0x100
  cmpwi     r4, -0x2
  bge-      .loc_0xB8
  b         .loc_0x100

.loc_0xB0:
  lwz       r3, 0xC(r30)
  b         .loc_0x264

.loc_0xB8:
  li        r0, 0x2
  stw       r0, 0x3C(r30)
  b         .loc_0x100

.loc_0xC4:
  li        r0, 0x2
  stw       r0, 0x3C(r30)
  lwz       r0, 0x48(r30)
  cmplw     r4, r0
  bge-      .loc_0x100
  lwz       r12, 0x40(r30)
  mr        r3, r30
  mtctr     r12
  bctrl     
  mr.       r4, r3
  beq-      .loc_0x100
  lwz       r5, 0x38(r30)
  mr        r3, r30
  lwz       r5, 0x18(r5)
  bl        0x29C

.loc_0x100:
  lwz       r0, 0xC(r30)
  cmplw     r0, r31
  bne-      .loc_0x128
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  li        r3, 0
  b         .loc_0x264

.loc_0x128:
  mr        r3, r30
  bl        .loc_0x278
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x140
  lwz       r3, 0xC(r30)
  b         .loc_0x264

.loc_0x140:
  lwz       r7, 0xC(r30)
  lbz       r29, 0x0(r7)
  cmpwi     r29, 0x1A
  beq-      .loc_0x180
  bge-      .loc_0x1F4
  cmpwi     r29, 0
  beq-      .loc_0x160
  b         .loc_0x1F4

.loc_0x160:
  lwz       r12, 0x24(r30)
  mr        r3, r30
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x254
  li        r0, 0
  b         .loc_0x258

.loc_0x180:
  lbz       r29, 0x1(r7)
  addi      r27, r7, 0x5
  mr        r3, r30
  add       r0, r7, r29
  mr        r5, r27
  stw       r0, 0xC(r30)
  subi      r6, r29, 0x5
  lbz       r0, 0x3(r7)
  lwz       r12, 0x0(r30)
  rlwinm    r28,r0,8,16,23
  lbz       r4, 0x2(r7)
  lbz       r0, 0x4(r7)
  rlwimi    r28,r4,16,8,15
  lwz       r12, 0x14(r12)
  or        r28, r28, r0
  mr        r4, r28
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x254
  mr        r3, r30
  mr        r4, r28
  lwz       r12, 0x0(r30)
  mr        r5, r27
  subi      r6, r29, 0x5
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x254

.loc_0x1F4:
  lwz       r4, 0x4(r30)
  mr        r3, r29
  lwz       r4, 0x4(r4)
  lwz       r12, 0x4(r4)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x230
  lwz       r3, 0xC(r30)
  rlwinm    r29,r29,8,0,23
  addi      r0, r3, 0x1
  stw       r0, 0xC(r30)
  lwz       r3, 0xC(r30)
  lbz       r0, 0x0(r3)
  or        r29, r29, r0

.loc_0x230:
  lwz       r5, 0xC(r30)
  mr        r3, r30
  mr        r4, r29
  addi      r0, r5, 0x1
  stw       r0, 0xC(r30)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x254:
  li        r0, 0x1

.loc_0x258:
  rlwinm.   r0,r0,0,24,31
  bne+      .loc_0x18
  li        r3, 0

.loc_0x264:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x278:
*/
}

/*
 * --INFO--
 * Address:	80007AFC
 * Size:	00002C
 */
void JMessage::TSequenceProcessor::on_isReady(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
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
 * Address:	........
 * Size:	000014
 */
void JMessage::TSequenceProcessor::on_jump_register( (void const *(*)(JMessage::TSequenceProcessor const *), unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80007B28
 * Size:	00002C
 */
void JMessage::TSequenceProcessor::on_jump_isReady(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x4C(r12)
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
 * Address:	80007B54
 * Size:	00009C
 */
void JMessage::TSequenceProcessor::on_jump( (void const *, char const *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  mr        r31, r5
  lis       r5, 0x8000
  stw       r30, 0x18(r1)
  mr        r30, r4
  mr        r4, r31
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r31, 0xC(r3)
  stw       r0, 0x10(r3)
  addi      r0, r5, 0x7650
  stw       r0, 0x24(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  mr        r5, r31
  lwz       r12, 0x50(r12)
  mtctr     r12
  bctrl     
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
 * Address:	........
 * Size:	000010
 */
void JMessage::TSequenceProcessor::on_branch_register( (void const *(*)(JMessage::TSequenceProcessor const *, unsigned long), void const *, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JMessage::TSequenceProcessor::on_branch_query( (unsigned short))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80007BF0
 * Size:	00002C
 */
void JMessage::TSequenceProcessor::on_branch_queryResult(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x58(r12)
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
 * Address:	80007C1C
 * Size:	00009C
 */
void JMessage::TSequenceProcessor::on_branch( (void const *, char const *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  mr        r31, r5
  lis       r5, 0x8000
  stw       r30, 0x18(r1)
  mr        r30, r4
  mr        r4, r31
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r31, 0xC(r3)
  stw       r0, 0x10(r3)
  addi      r0, r5, 0x7650
  stw       r0, 0x24(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  mr        r5, r31
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     
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
 * Address:	80007CB8
 * Size:	000004
 */
void JMessage::TSequenceProcessor::do_begin( (void const *, char const *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80007CBC
 * Size:	000004
 */
void JMessage::TSequenceProcessor::do_end(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80007CC0
 * Size:	000008
 */
void JMessage::TSequenceProcessor::do_isReady(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80007CC8
 * Size:	000008
 */
void JMessage::TSequenceProcessor::do_jump_isReady(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80007CD0
 * Size:	000004
 */
void JMessage::TSequenceProcessor::do_jump( (void const *, char const *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80007CD4
 * Size:	000004
 */
void JMessage::TSequenceProcessor::do_branch_query( (unsigned short))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80007CD8
 * Size:	000008
 */
void JMessage::TSequenceProcessor::do_branch_queryResult(void)
{
/*
.loc_0x0:
  li        r3, -0x2
  blr
*/
}

/*
 * --INFO--
 * Address:	80007CE0
 * Size:	000004
 */
void JMessage::TSequenceProcessor::do_branch( (void const *, char const *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80007CE4
 * Size:	00001C
 */
void JMessage::TSequenceProcessor::do_reset_( (char const *))
{
/*
.loc_0x0:
  li        r0, 0
  cmplwi    r4, 0
  stw       r0, 0x3C(r3)
  beqlr-    
  li        r0, 0x2
  stw       r0, 0x3C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80007D00
 * Size:	000010
 */
void JMessage::TSequenceProcessor::do_setBegin_isReady_( const
{
/*
.loc_0x0:
  lwz       r0, 0x3C(r3)
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}

/*
 * --INFO--
 * Address:	80007D10
 * Size:	00002C
 */
void JMessage::TSequenceProcessor::do_begin_( (void const *, char const *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
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
 * Address:	80007D3C
 * Size:	000034
 */
void JMessage::TSequenceProcessor::do_end_(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x1
  stw       r0, 0x3C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
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
 * Address:	80007D70
 * Size:	000140
 */
void JMessage::TSequenceProcessor::do_tag_( (unsigned long, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  rlwinm    r7,r4,0,16,31
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,16,24,31
  cmpwi     r0, 0xFA
  beq-      .loc_0x7C
  bge-      .loc_0x38
  cmpwi     r0, 0xF8
  beq-      .loc_0xB4
  bge-      .loc_0x94
  cmpwi     r0, 0xF7
  bge-      .loc_0xF0
  b         .loc_0x12C

.loc_0x38:
  cmpwi     r0, 0xFC
  beq-      .loc_0x48
  bge-      .loc_0x12C
  b         .loc_0x64

.loc_0x48:
  li        r0, 0x3
  lis       r4, 0x8000
  stw       r0, 0x3C(r3)
  addi      r0, r4, 0x7F14
  stw       r0, 0x40(r3)
  stw       r7, 0x44(r3)
  b         .loc_0x130

.loc_0x64:
  lis       r4, 0x8000
  addi      r0, r4, 0x7FE4
  stw       r0, 0x40(r3)
  stw       r5, 0x44(r3)
  stw       r7, 0x48(r3)
  b         .loc_0x130

.loc_0x7C:
  lis       r4, 0x8001
  subi      r0, r4, 0x7FAC
  stw       r0, 0x40(r3)
  stw       r5, 0x44(r3)
  stw       r7, 0x48(r3)
  b         .loc_0x130

.loc_0x94:
  li        r0, 0x4
  mr        r4, r7
  stw       r0, 0x3C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x130

.loc_0xB4:
  lis       r4, 0x8000
  addi      r6, r5, 0x2
  addi      r0, r4, 0x7FE4
  lhz       r5, 0x0(r5)
  stw       r0, 0x40(r3)
  li        r0, 0x4
  mr        r4, r7
  stw       r6, 0x44(r3)
  stw       r5, 0x48(r3)
  stw       r0, 0x3C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x130

.loc_0xF0:
  lis       r4, 0x8001
  addi      r6, r5, 0x2
  subi      r0, r4, 0x7FAC
  lhz       r5, 0x0(r5)
  stw       r0, 0x40(r3)
  li        r0, 0x4
  mr        r4, r7
  stw       r6, 0x44(r3)
  stw       r5, 0x48(r3)
  stw       r0, 0x3C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x130

.loc_0x12C:
  bl        -0xCD8

.loc_0x130:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80007EB0
 * Size:	000064
 */
void JMessage::TSequenceProcessor::do_systemTagCode_( (unsigned short, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,0,16,31
  cmpwi     r0, 0x6
  beq-      .loc_0x30
  bge-      .loc_0x50
  cmpwi     r0, 0x4
  bge-      .loc_0x50
  cmpwi     r0, 0
  bge-      .loc_0x54
  b         .loc_0x50

.loc_0x30:
  li        r0, 0x3
  lis       r4, 0x8000
  stw       r0, 0x3C(r3)
  addi      r0, r4, 0x7F80
  lwz       r4, 0x0(r5)
  stw       r0, 0x40(r3)
  stw       r4, 0x44(r3)
  b         .loc_0x54

.loc_0x50:
  bl        -0xA8C

.loc_0x54:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void JMessage::TSequenceProcessor::process_setMessageIndex_reserved_( (unsigned short))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void JMessage::TSequenceProcessor::process_setMessageCode_( (JMessage::TSequenceProcessor const *, unsigned short, unsigned short))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80007F14
 * Size:	00006C
 */
void JMessage::TSequenceProcessor::process_onJump_limited_( (JMessage::TSequenceProcessor const *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lwz       r4, 0x8(r3)
  stw       r0, 0x14(r1)
  lwz       r0, 0x44(r3)
  stw       r31, 0xC(r1)
  rlwinm    r6,r0,0,16,31
  lwz       r4, 0xC(r4)
  cmplwi    r6, 0xFF00
  lhz       r5, 0xC(r4)
  blt-      .loc_0x34
  li        r3, 0
  b         .loc_0x58

.loc_0x34:
  lwz       r31, 0x38(r3)
  mr        r4, r3
  mr        r3, r31
  bl        0x900
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x54
  li        r3, 0
  b         .loc_0x58

.loc_0x54:
  lwz       r3, 0x14(r31)

.loc_0x58:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80007F80
 * Size:	000064
 */
void JMessage::TSequenceProcessor::process_onJump_( (JMessage::TSequenceProcessor const *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x44(r3)
  stw       r31, 0xC(r1)
  rlwinm    r6,r0,0,16,31
  cmplwi    r6, 0xFF00
  blt-      .loc_0x28
  li        r3, 0
  b         .loc_0x50

.loc_0x28:
  lwz       r31, 0x38(r3)
  mr        r4, r3
  rlwinm    r5,r0,16,16,31
  mr        r3, r31
  bl        0x89C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x4C
  li        r3, 0
  b         .loc_0x50

.loc_0x4C:
  lwz       r3, 0x14(r31)

.loc_0x50:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80007FE4
 * Size:	000070
 */
void JMessage::TSequenceProcessor::process_onBranch_limited_( (JMessage::TSequenceProcessor const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lwz       r5, 0x44(r3)
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,1,0,30
  lwz       r4, 0x8(r3)
  stw       r31, 0xC(r1)
  lhzx      r6, r5, r0
  lwz       r4, 0xC(r4)
  cmplwi    r6, 0xFF00
  lhz       r5, 0xC(r4)
  blt-      .loc_0x38
  li        r3, 0
  b         .loc_0x5C

.loc_0x38:
  lwz       r31, 0x38(r3)
  mr        r4, r3
  mr        r3, r31
  bl        0x82C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0x5C

.loc_0x58:
  lwz       r3, 0x14(r31)

.loc_0x5C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80008054
 * Size:	00006C
 */
void JMessage::TSequenceProcessor::process_onBranch_( (JMessage::TSequenceProcessor const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,2,0,29
  lwz       r4, 0x44(r3)
  stw       r31, 0xC(r1)
  lwzx      r0, r4, r0
  rlwinm    r6,r0,0,16,31
  cmplwi    r6, 0xFF00
  blt-      .loc_0x30
  li        r3, 0
  b         .loc_0x58

.loc_0x30:
  lwz       r31, 0x38(r3)
  mr        r4, r3
  rlwinm    r5,r0,16,16,31
  mr        r3, r31
  bl        0x7C0
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x54
  li        r3, 0
  b         .loc_0x58

.loc_0x54:
  lwz       r3, 0x14(r31)

.loc_0x58:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800080C0
 * Size:	00003C
 */
void JMessage::TRenderingProcessor::__ct( (JMessage::TReference const *))
{
/*
.loc_0x0:
  lis       r7, 0x804A
  lis       r6, 0x8000
  subi      r0, r7, 0x1BF8
  lis       r5, 0x804A
  stw       r0, 0x0(r3)
  li        r7, 0
  addi      r6, r6, 0x7650
  subi      r0, r5, 0x1CA0
  stw       r4, 0x4(r3)
  stw       r7, 0x8(r3)
  stw       r7, 0xC(r3)
  stw       r7, 0x10(r3)
  stw       r6, 0x24(r3)
  stw       r0, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800080FC
 * Size:	00005C
 */
void JMessage::TRenderingProcessor::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  subi      r0, r3, 0x1CA0
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0x1BF8
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x1BF78

.loc_0x44:
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
 * Address:	80008158
 * Size:	000174
 */
void JMessage::TRenderingProcessor::process( (char const *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r30, r3
  mr        r31, r4

.loc_0x18:
  lwz       r7, 0xC(r30)
  cmplw     r7, r31
  bne-      .loc_0x40
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  li        r3, 0
  b         .loc_0x160

.loc_0x40:
  lbz       r29, 0x0(r7)
  cmpwi     r29, 0x1A
  beq-      .loc_0x7C
  bge-      .loc_0xF0
  cmpwi     r29, 0
  beq-      .loc_0x5C
  b         .loc_0xF0

.loc_0x5C:
  lwz       r12, 0x24(r30)
  mr        r3, r30
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x150
  li        r0, 0
  b         .loc_0x154

.loc_0x7C:
  lbz       r29, 0x1(r7)
  addi      r27, r7, 0x5
  mr        r3, r30
  add       r0, r7, r29
  mr        r5, r27
  stw       r0, 0xC(r30)
  subi      r6, r29, 0x5
  lbz       r0, 0x3(r7)
  lwz       r12, 0x0(r30)
  rlwinm    r28,r0,8,16,23
  lbz       r4, 0x2(r7)
  lbz       r0, 0x4(r7)
  rlwimi    r28,r4,16,8,15
  lwz       r12, 0x14(r12)
  or        r28, r28, r0
  mr        r4, r28
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x150
  mr        r3, r30
  mr        r4, r28
  lwz       r12, 0x0(r30)
  mr        r5, r27
  subi      r6, r29, 0x5
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x150

.loc_0xF0:
  lwz       r4, 0x4(r30)
  mr        r3, r29
  lwz       r4, 0x4(r4)
  lwz       r12, 0x4(r4)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x12C
  lwz       r3, 0xC(r30)
  rlwinm    r29,r29,8,0,23
  addi      r0, r3, 0x1
  stw       r0, 0xC(r30)
  lwz       r3, 0xC(r30)
  lbz       r0, 0x0(r3)
  or        r29, r29, r0

.loc_0x12C:
  lwz       r5, 0xC(r30)
  mr        r3, r30
  mr        r4, r29
  addi      r0, r5, 0x1
  stw       r0, 0xC(r30)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x150:
  li        r0, 0x1

.loc_0x154:
  rlwinm.   r0,r0,0,24,31
  bne+      .loc_0x18
  li        r3, 0

.loc_0x160:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800082CC
 * Size:	000004
 */
void JMessage::TRenderingProcessor::do_begin( (void const *, char const *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800082D0
 * Size:	000004
 */
void JMessage::TRenderingProcessor::do_end(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800082D4
 * Size:	000004
 */
void JMessage::TRenderingProcessor::do_reset_( (char const *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800082D8
 * Size:	00002C
 */
void JMessage::TRenderingProcessor::do_begin_( (void const *, char const *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
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
 * Address:	80008304
 * Size:	00002C
 */
void JMessage::TRenderingProcessor::do_end_(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
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
 * Address:	80008330
 * Size:	000034
 */
void JMessage::TRenderingProcessor::do_tag_( (unsigned long, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,16,24,31
  cmpwi     r0, 0xFD
  bge-      .loc_0x20
  cmpwi     r0, 0xF7
  bge-      .loc_0x24

.loc_0x20:
  bl        -0x118C

.loc_0x24:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80008364
 * Size:	000040
 */
void JMessage::TRenderingProcessor::do_systemTagCode_( (unsigned short, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,0,16,31
  cmpwi     r0, 0x6
  beq-      .loc_0x30
  bge-      .loc_0x2C
  cmpwi     r0, 0x4
  bge-      .loc_0x2C
  cmpwi     r0, 0
  bge-      .loc_0x30

.loc_0x2C:
  bl        -0xF1C

.loc_0x30:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
