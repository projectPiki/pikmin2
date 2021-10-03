

/*
 * --INFO--
 * Address:	80014FD8
 * Size:	0000C8
 */
void JStudio_JAudio::TAdaptor_sound::__ct( (JAIBasic *, JStage::TSystem const *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x804A
  lis       r7, 0x804A
  stw       r0, 0x24(r1)
  subi      r0, r6, 0xB98
  lis       r6, 0x8000
  stw       r31, 0x1C(r1)
  mr        r31, r5
  subi      r5, r7, 0xE34
  li        r7, 0xA
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r8, r29
  stw       r0, 0x0(r3)
  addi      r3, r8, 0xC
  li        r0, 0xA
  stw       r3, 0x4(r29)
  stw       r0, 0x8(r29)
  addi      r0, r6, 0x5808
  mr        r4, r0
  li        r6, 0x14
  stw       r5, 0x0(r29)
  li        r5, 0
  bl        0xAC7FC
  lis       r3, 0x804A
  li        r4, 0
  subi      r3, r3, 0x6A4
  li        r0, -0x1
  stw       r3, 0x0(r29)
  mr        r3, r29
  stw       r30, 0xD4(r29)
  stw       r4, 0xD8(r29)
  stw       r0, 0xDC(r29)
  stw       r4, 0xE0(r29)
  stw       r4, 0xE4(r29)
  stw       r4, 0xE8(r29)
  stw       r31, 0xF8(r29)
  stw       r4, 0xFC(r29)
  stw       r0, 0x100(r29)
  stb       r4, 0x104(r29)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800150A0
 * Size:	000084
 */
void JStudio_JAudio::TAdaptor_sound::__dt(void)
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
  beq-      .loc_0x68
  lis       r3, 0x804A
  subi      r0, r3, 0x6A4
  stw       r0, 0x0(r30)
  lwz       r3, 0xD8(r30)
  cmplwi    r3, 0
  beq-      .loc_0x4C
  lwz       r12, 0x10(r3)
  li        r4, 0
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x4C:
  mr        r3, r30
  li        r4, 0
  bl        -0x5ED4
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        0xEFB0

.loc_0x68:
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
 * Address:	80015124
 * Size:	0000CC
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_prepare( (JStudio::TObject const *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, -0x78E8(r13)
  extsb.    r0, r0
  bne-      .loc_0x64
  lis       r3, 0x8051
  li        r6, 0
  lis       r5, 0x804F
  lfs       f1, 0x48B0(r3)
  stwu      r6, -0x170(r5)
  li        r4, 0x1
  lfs       f0, -0x7EB0(r2)
  li        r3, 0x2
  li        r0, -0x1
  stw       r4, 0x8(r5)
  stfs      f0, 0x4(r5)
  stfs      f0, 0xC(r5)
  stw       r3, 0x10(r5)
  stfs      f0, 0x14(r5)
  stw       r0, 0x18(r5)
  stfs      f1, 0x1C(r5)
  stb       r4, -0x78E8(r13)

.loc_0x64:
  lis       r4, 0x804F
  mr        r3, r31
  subi      r4, r4, 0x170
  bl        -0x7F1C
  lis       r3, 0x8050
  addi      r0, r3, 0x6D34
  mr        r4, r0
  b         .loc_0xAC

.loc_0x84:
  mulli     r0, r0, 0x14
  lwz       r3, 0x4(r31)
  cmplwi    r4, 0
  add       r3, r3, r0
  beq-      .loc_0xA0
  mr        r0, r4
  b         .loc_0xA4

.loc_0xA0:
  subi      r0, r13, 0x78F0

.loc_0xA4:
  stw       r0, 0x10(r3)
  addi      r4, r4, 0x14

.loc_0xAC:
  lwz       r0, 0x4(r4)
  cmpwi     r0, -0x1
  bne+      .loc_0x84
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800151F0
 * Size:	000058
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_end( (JStudio::TObject const *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0xC000
  stw       r0, 0x14(r1)
  addi      r0, r4, 0xC00
  lwz       r5, 0xDC(r3)
  and.      r0, r5, r0
  bne-      .loc_0x48
  lwz       r0, 0xE0(r3)
  cmpwi     r0, 0x3
  bne-      .loc_0x48
  lwz       r3, 0xD8(r3)
  cmplwi    r3, 0
  beq-      .loc_0x48
  lwz       r12, 0x10(r3)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x48:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80015248
 * Size:	00014C
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_update( (JStudio::TObject const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r5, 0x8047
  stw       r0, 0x64(r1)
  addi      r5, r5, 0x3454
  stw       r31, 0x5C(r1)
  mr        r31, r3
  stw       r30, 0x58(r1)
  lwz       r30, 0x14(r4)
  addi      r4, r1, 0x14
  bl        -0x7F44
  lbz       r0, 0x104(r31)
  cmplwi    r0, 0
  bne-      .loc_0x68
  lbz       r0, 0x74(r30)
  cmplwi    r0, 0
  bne-      .loc_0x4C
  addi      r0, r1, 0x14
  b         .loc_0x60

.loc_0x4C:
  addi      r3, r30, 0x98
  addi      r4, r1, 0x14
  addi      r5, r1, 0x8
  bl        0xD5938
  addi      r0, r1, 0x8

.loc_0x60:
  mr        r4, r0
  b         .loc_0xB4

.loc_0x68:
  lwz       r5, 0xFC(r31)
  addi      r3, r1, 0x20
  lwz       r6, 0x100(r31)
  addi      r4, r1, 0x14
  bl        -0x345C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x8C
  li        r0, 0
  b         .loc_0xA8

.loc_0x8C:
  lfs       f2, 0x2C(r1)
  li        r0, 0x1
  lfs       f1, 0x3C(r1)
  lfs       f0, 0x4C(r1)
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)

.loc_0xA8:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x134
  addi      r4, r1, 0x8

.loc_0xB4:
  lfs       f0, 0x0(r4)
  lis       r3, 0xC000
  addi      r0, r3, 0xC00
  stfs      f0, 0xEC(r31)
  lfs       f0, 0x4(r4)
  stfs      f0, 0xF0(r31)
  lfs       f0, 0x8(r4)
  stfs      f0, 0xF4(r31)
  lwz       r3, 0xDC(r31)
  and.      r0, r3, r0
  bne-      .loc_0x134
  lwz       r0, 0xE0(r31)
  cmpwi     r0, 0x3
  bne-      .loc_0x100
  lwz       r0, 0xD8(r31)
  cmplwi    r0, 0
  bne-      .loc_0x100
  li        r0, 0
  stw       r0, 0xE0(r31)

.loc_0x100:
  lwz       r0, 0xE0(r31)
  cmpwi     r0, 0
  beq-      .loc_0x134
  lwz       r3, 0xD4(r31)
  addi      r5, r31, 0xD8
  lwz       r4, 0xDC(r31)
  li        r8, 0
  lwz       r6, 0xE8(r31)
  li        r9, 0x4
  lwz       r7, 0xE4(r31)
  bl        0x4FC
  li        r0, 0
  stw       r0, 0xE4(r31)

.loc_0x134:
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	80015394
 * Size:	0000A4
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_SOUND( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x19
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x20
  b         .loc_0x90

.loc_0x20:
  lwz       r0, 0x0(r5)
  stw       r0, 0xDC(r31)
  lwz       r0, 0xDC(r31)
  rlwinm.   r0,r0,0,0,1
  beq-      .loc_0x90
  lwz       r3, 0xD8(r31)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x10(r3)
  li        r4, 0
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r0, 0xE0(r31)

.loc_0x5C:
  lwz       r3, 0xD4(r31)
  addi      r5, r31, 0xD8
  lwz       r4, 0xDC(r31)
  li        r7, 0
  lwz       r6, 0xE8(r31)
  li        r8, 0
  li        r9, 0x4
  bl        0x414
  lwz       r0, 0xD8(r31)
  cmplwi    r0, 0
  beq-      .loc_0x90
  li        r0, 0x1
  stw       r0, 0xE0(r31)

.loc_0x90:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80015438
 * Size:	000030
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_BEGIN( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x1
  stw       r0, 0x14(r1)
  beq-      .loc_0x18
  b         .loc_0x20

.loc_0x18:
  li        r4, 0
  bl        0x244

.loc_0x20:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80015468
 * Size:	000048
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_BEGIN_FADE_IN( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x2
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x20
  b         .loc_0x34

.loc_0x20:
  lfs       f1, 0x0(r5)
  bl        0xAC6C0
  mr        r4, r3
  mr        r3, r31
  bl        0x200

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
 * Address:	800154B0
 * Size:	000030
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_END( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x1
  stw       r0, 0x14(r1)
  beq-      .loc_0x18
  b         .loc_0x20

.loc_0x18:
  li        r4, 0
  bl        0x2A4

.loc_0x20:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800154E0
 * Size:	000048
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_END_FADE_OUT( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x2
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x20
  b         .loc_0x34

.loc_0x20:
  lfs       f1, 0x0(r5)
  bl        0xAC648
  mr        r4, r3
  mr        r3, r31
  bl        0x260

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
 * Address:	80015528
 * Size:	000068
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_PARENT( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  cmpwi     r4, 0x18
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  beq-      .loc_0x20
  b         .loc_0x54

.loc_0x20:
  li        r0, 0
  addi      r4, r1, 0x8
  stw       r0, 0xFC(r31)
  li        r6, 0
  lwz       r3, 0xF8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  bne-      .loc_0x54
  lwz       r0, 0x8(r1)
  stw       r0, 0xFC(r31)

.loc_0x54:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80015590
 * Size:	000080
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_PARENT_NODE( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x19
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x64
  bge-      .loc_0x6C
  cmpwi     r4, 0x18
  bge-      .loc_0x2C
  b         .loc_0x6C

.loc_0x2C:
  lwz       r3, 0xFC(r31)
  cmplwi    r3, 0
  beq-      .loc_0x6C
  lwz       r12, 0x0(r3)
  mr        r4, r5
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x100(r31)
  lwz       r3, 0x100(r31)
  addis     r0, r3, 0x1
  cmplwi    r0, 0xFFFF
  bne-      .loc_0x6C
  b         .loc_0x6C

.loc_0x64:
  lwz       r0, 0x0(r5)
  stw       r0, 0x100(r31)

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
 * Address:	80015610
 * Size:	000020
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_PARENT_ENABLE( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  cmpwi     r4, 0x2
  bnelr-    
  lwz       r4, 0x0(r5)
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r0,r0,1,31,31
  stb       r0, 0x104(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80015630
 * Size:	000028
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_LOCATED( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  cmpwi     r4, 0x2
  bnelr-    
  lwz       r4, 0x0(r5)
  li        r0, 0
  stw       r0, 0xE8(r3)
  cmplwi    r4, 0
  beqlr-    
  addi      r0, r3, 0xEC
  stw       r0, 0xE8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JStudio_JAudio::TAdaptor_sound::toString_state_( (int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80015658
 * Size:	000040
 */
void JStudio_JAudio::TAdaptor_sound::TVVOSetValue_::operator()( const(float, JStudio::TAdaptor *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0xD8(r4)
  mr        r4, r3
  cmplwi    r0, 0
  beq-      .loc_0x30
  mr        r3, r0
  addi      r12, r4, 0x8
  li        r4, 0
  bl        0xAC4A4
  nop       

.loc_0x30:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80015698
 * Size:	0000D8
 */
void JStudio_JAudio::TAdaptor_sound::beginSound_fadeIn_( (unsigned long))
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
  stw       r31, 0xE4(r3)
  lwz       r0, 0xDC(r3)
  rlwinm.   r0,r0,0,0,1
  beq-      .loc_0x54
  lwz       r3, 0xD8(r30)
  cmplwi    r3, 0
  beq-      .loc_0xC0
  lwz       r12, 0x10(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x2
  stw       r0, 0xE0(r30)
  b         .loc_0xC0

.loc_0x54:
  lwz       r3, 0xD8(r30)
  cmplwi    r3, 0
  beq-      .loc_0x7C
  lwz       r12, 0x10(r3)
  li        r4, 0
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r0, 0xE0(r30)

.loc_0x7C:
  lis       r3, 0xC000
  lwz       r4, 0xDC(r30)
  addi      r0, r3, 0xC00
  and.      r0, r4, r0
  beq-      .loc_0xB8
  lwz       r3, 0xD4(r30)
  mr        r7, r31
  lwz       r6, 0xE8(r30)
  addi      r5, r30, 0xD8
  li        r8, 0
  li        r9, 0x4
  bl        0x12C
  lwz       r0, 0xD8(r30)
  cmplwi    r0, 0
  beq-      .loc_0xC0

.loc_0xB8:
  li        r0, 0x2
  stw       r0, 0xE0(r30)

.loc_0xC0:
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
 * Address:	80015770
 * Size:	000050
 */
void JStudio_JAudio::TAdaptor_sound::endSound_fadeOut_( (unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0xE4(r3)
  lwz       r3, 0xD8(r3)
  cmplwi    r3, 0
  beq-      .loc_0x3C
  lwz       r12, 0x10(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x3
  stw       r0, 0xE0(r31)

.loc_0x3C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800157C0
 * Size:	000060
 */
void JStudio_JAudio::TAdaptor_sound::TVVOSetValue_::__dt(void)
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
  lis       r5, 0x804A
  li        r4, 0
  subi      r0, r5, 0x6B4
  stw       r0, 0x0(r30)
  bl        -0x8788
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        0xE8B4

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
 * Address:	80015820
 * Size:	00004C
 */
void JAIBasic::prepareSoundVecT<JAISound>(unsigned long, JAISound **, Vec *, unsigned long, unsigned long, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  bl        .loc_0x4C
  lwz       r3, 0x0(r31)
  cmplwi    r3, 0
  beq-      .loc_0x38
  lwz       r12, 0x10(r3)
  li        r4, 0x1
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     

.loc_0x38:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x4C:
*/
}

/*
 * --INFO--
 * Address:	8001586C
 * Size:	000060
 */
void JAIBasic::startSoundVecT<JAISound>(unsigned long, JAISound **, Vec *, unsigned long, unsigned long, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  cmplwi    r6, 0
  stw       r0, 0x24(r1)
  stw       r6, 0x8(r1)
  stw       r6, 0xC(r1)
  stw       r6, 0x10(r1)
  stw       r8, 0x14(r1)
  beq-      .loc_0x30
  addis     r0, r6, 0x1
  cmplwi    r0, 0xFFFF
  bne-      .loc_0x3C

.loc_0x30:
  li        r0, 0x1
  stb       r0, 0x18(r1)
  b         .loc_0x44

.loc_0x3C:
  li        r0, 0
  stb       r0, 0x18(r1)

.loc_0x44:
  mr        r8, r9
  addi      r6, r1, 0x8
  bl        .loc_0x60
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x60:
*/
}

/*
 * --INFO--
 * Address:	800158CC
 * Size:	000068
 */
void JAIBasic::startSoundActorT<JAISound>(unsigned long, JAISound **, JAInter::Actor *, unsigned long, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r27, r4
  mr        r26, r3
  mr        r28, r5
  mr        r29, r6
  mr        r30, r7
  mr        r31, r8
  mr        r3, r27
  bl        0xA1C20
  mr.       r9, r3
  beq-      .loc_0x54
  mr        r3, r26
  mr        r4, r27
  mr        r5, r28
  mr        r6, r29
  mr        r7, r30
  mr        r8, r31
  bl        0x96E60

.loc_0x54:
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80015934
 * Size:	000310
 */
void __sinit_object-sound_cpp(void)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  lis       r4, 0x804A
  lis       r3, 0x804A
  stw       r0, 0x94(r1)
  subi      r5, r4, 0xB68
  lis       r4, 0x8001
  lis       r9, 0x804F
  stw       r31, 0x8C(r1)
  subi      r31, r3, 0x6F0
  lis       r3, 0x8050
  li        r8, 0x5
  stw       r30, 0x88(r1)
  subi      r30, r9, 0x170
  addi      r9, r31, 0x3C
  addi      r4, r4, 0x57C0
  stwu      r5, 0x6D34(r3)
  lwz       r7, 0x0(r31)
  lwz       r6, 0x4(r31)
  lwz       r0, 0x8(r31)
  stw       r5, 0x6C(r1)
  addi      r5, r30, 0x20
  stw       r9, 0x6C(r1)
  stw       r8, 0x70(r1)
  stw       r7, 0x74(r1)
  stw       r6, 0x78(r1)
  stw       r0, 0x7C(r1)
  stw       r9, 0x0(r3)
  stw       r8, 0x4(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0xC(r3)
  stw       r0, 0x10(r3)
  bl        0xABD4C
  addi      r0, r31, 0x3C
  addi      r3, r1, 0x6C
  stw       r0, 0x6C(r1)
  li        r4, 0
  bl        -0x8960
  lis       r4, 0x804A
  lis       r3, 0x8050
  subi      r5, r4, 0xB68
  lwz       r7, 0xC(r31)
  addi      r3, r3, 0x6D34
  lwz       r6, 0x10(r31)
  stwu      r5, 0x14(r3)
  li        r8, 0x6
  lwz       r0, 0x14(r31)
  addi      r9, r31, 0x3C
  stw       r5, 0x58(r1)
  lis       r4, 0x8001
  addi      r4, r4, 0x57C0
  addi      r5, r30, 0x2C
  stw       r9, 0x58(r1)
  stw       r8, 0x5C(r1)
  stw       r7, 0x60(r1)
  stw       r6, 0x64(r1)
  stw       r0, 0x68(r1)
  stw       r9, 0x0(r3)
  stw       r8, 0x4(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0xC(r3)
  stw       r0, 0x10(r3)
  bl        0xABCD4
  addi      r0, r31, 0x3C
  addi      r3, r1, 0x58
  stw       r0, 0x58(r1)
  li        r4, 0
  bl        -0x89D8
  lis       r4, 0x804A
  lis       r3, 0x8050
  subi      r5, r4, 0xB68
  lwz       r7, 0x18(r31)
  addi      r3, r3, 0x6D34
  lwz       r6, 0x1C(r31)
  stwu      r5, 0x28(r3)
  li        r8, 0x7
  lwz       r0, 0x20(r31)
  addi      r9, r31, 0x3C
  stw       r5, 0x44(r1)
  lis       r4, 0x8001
  addi      r4, r4, 0x57C0
  addi      r5, r30, 0x38
  stw       r9, 0x44(r1)
  stw       r8, 0x48(r1)
  stw       r7, 0x4C(r1)
  stw       r6, 0x50(r1)
  stw       r0, 0x54(r1)
  stw       r9, 0x0(r3)
  stw       r8, 0x4(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0xC(r3)
  stw       r0, 0x10(r3)
  bl        0xABC5C
  addi      r0, r31, 0x3C
  addi      r3, r1, 0x44
  stw       r0, 0x44(r1)
  li        r4, 0
  bl        -0x8A50
  lis       r4, 0x804A
  lis       r3, 0x8050
  subi      r5, r4, 0xB68
  lwz       r7, 0x24(r31)
  addi      r3, r3, 0x6D34
  lwz       r6, 0x28(r31)
  stwu      r5, 0x3C(r3)
  li        r8, 0x8
  lwz       r0, 0x2C(r31)
  addi      r9, r31, 0x3C
  stw       r5, 0x30(r1)
  lis       r4, 0x8001
  addi      r4, r4, 0x57C0
  addi      r5, r30, 0x44
  stw       r9, 0x30(r1)
  stw       r8, 0x34(r1)
  stw       r7, 0x38(r1)
  stw       r6, 0x3C(r1)
  stw       r0, 0x40(r1)
  stw       r9, 0x0(r3)
  stw       r8, 0x4(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0xC(r3)
  stw       r0, 0x10(r3)
  bl        0xABBE4
  addi      r0, r31, 0x3C
  addi      r3, r1, 0x30
  stw       r0, 0x30(r1)
  li        r4, 0
  bl        -0x8AC8
  lis       r4, 0x804A
  lis       r3, 0x8050
  subi      r5, r4, 0xB68
  lwz       r7, 0x30(r31)
  addi      r3, r3, 0x6D34
  lwz       r6, 0x34(r31)
  stwu      r5, 0x50(r3)
  li        r8, 0x9
  lwz       r0, 0x38(r31)
  addi      r9, r31, 0x3C
  stw       r5, 0x1C(r1)
  lis       r4, 0x8001
  addi      r4, r4, 0x57C0
  addi      r5, r30, 0x50
  stw       r9, 0x1C(r1)
  stw       r8, 0x20(r1)
  stw       r7, 0x24(r1)
  stw       r6, 0x28(r1)
  stw       r0, 0x2C(r1)
  stw       r9, 0x0(r3)
  stw       r8, 0x4(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0xC(r3)
  stw       r0, 0x10(r3)
  bl        0xABB6C
  addi      r0, r31, 0x3C
  addi      r3, r1, 0x1C
  stw       r0, 0x1C(r1)
  li        r4, 0
  bl        -0x8B40
  lis       r3, 0x804A
  li        r9, -0x1
  subi      r11, r3, 0xB68
  lis       r4, 0x8001
  stw       r11, 0x8(r1)
  addi      r10, r31, 0x3C
  lis       r3, 0x8048
  addi      r4, r4, 0x57C0
  stw       r10, 0x8(r1)
  subi      r8, r3, 0x60F0
  lis       r3, 0x8050
  lwz       r7, 0x0(r8)
  stw       r9, 0xC(r1)
  addi      r3, r3, 0x6D34
  addi      r5, r30, 0x5C
  lwz       r6, 0x4(r8)
  stw       r7, 0x10(r1)
  stw       r6, 0x14(r1)
  lwz       r0, 0x8(r8)
  stwu      r11, 0x64(r3)
  stw       r0, 0x18(r1)
  stw       r10, 0x0(r3)
  stw       r9, 0x4(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0xC(r3)
  stw       r0, 0x10(r3)
  bl        0xABAEC
  addi      r0, r31, 0x3C
  addi      r3, r1, 0x8
  stw       r0, 0x8(r1)
  li        r4, 0
  bl        -0x8BC0
  lwz       r0, 0x94(r1)
  lwz       r31, 0x8C(r1)
  lwz       r30, 0x88(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}
