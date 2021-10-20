

/*
 * --INFO--
 * Address:	8000BB48
 * Size:	00021C
 */
void JStudio::fvb::TObject::prepare(const JStudio::fvb::data::TParse_TBlock &, JStudio::fvb::TControl *)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stmw      r23, 0x3C(r1)
  mr        r23, r4
  mr        r26, r3
  mr        r27, r5
  lwz       r4, 0x14(r3)
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r4)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r5, 0x0(r23)
  lwz       r31, 0x14(r1)
  lhz       r3, 0x6(r5)
  lwz       r4, 0x0(r5)
  addi      r0, r3, 0x3
  lwz       r30, 0x18(r1)
  rlwinm    r0,r0,0,0,29
  lwz       r29, 0x1C(r1)
  add       r3, r5, r0
  add       r28, r5, r4
  addi      r3, r3, 0x8
  b         .loc_0x1EC

.loc_0x64:
  stw       r3, 0x10(r1)
  addi      r3, r1, 0x10
  addi      r4, r1, 0x20
  bl        0xE84
  lwz       r0, 0x24(r1)
  lwz       r4, 0x28(r1)
  cmplwi    r0, 0x16
  bgt-      .loc_0x1E8
  lis       r3, 0x804A
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x1AB8
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  mr        r3, r26
  mr        r5, r27
  lwz       r12, 0x8(r26)
  addi      r4, r1, 0x20
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x1E8
  cmplwi    r31, 0
  beq-      .loc_0x1E8
  lwz       r25, 0x0(r4)
  addi      r24, r4, 0x4
  b         .loc_0x118

.loc_0xD0:
  lwz       r23, 0x0(r24)
  mr        r3, r27
  addi      r4, r24, 0x4
  mr        r5, r23
  bl        0x348
  cmplwi    r3, 0
  beq-      .loc_0x104
  lwz       r0, 0x14(r3)
  mr        r3, r31
  addi      r5, r1, 0xC
  stw       r0, 0xC(r1)
  lwz       r4, 0x8(r31)
  bl        0x1C048

.loc_0x104:
  addi      r0, r23, 0x3
  subi      r25, r25, 0x1
  rlwinm    r0,r0,0,0,29
  add       r24, r0, r24
  addi      r24, r24, 0x4

.loc_0x118:
  cmplwi    r25, 0
  bne+      .loc_0xD0
  b         .loc_0x1E8
  cmplwi    r31, 0
  beq-      .loc_0x1E8
  lwz       r24, 0x0(r4)
  mr        r23, r4
  b         .loc_0x168

.loc_0x138:
  lwz       r4, 0x0(r23)
  mr        r3, r27
  bl        0x418
  cmplwi    r3, 0
  beq-      .loc_0x164
  lwz       r0, 0x14(r3)
  mr        r3, r31
  addi      r5, r1, 0x8
  stw       r0, 0x8(r1)
  lwz       r4, 0x8(r31)
  bl        0x1BFE8

.loc_0x164:
  subi      r24, r24, 0x1

.loc_0x168:
  cmplwi    r24, 0
  addi      r23, r23, 0x4
  bne+      .loc_0x138
  b         .loc_0x1E8
  cmplwi    r30, 0
  beq-      .loc_0x1E8
  lfs       f1, 0x0(r4)
  mr        r3, r30
  lfs       f2, 0x4(r4)
  bl        -0x30F8
  b         .loc_0x1E8
  cmplwi    r30, 0
  beq-      .loc_0x1E8
  lwz       r0, 0x0(r4)
  stb       r0, 0x18(r30)
  b         .loc_0x1E8
  cmplwi    r30, 0
  beq-      .loc_0x1E8
  lwz       r0, 0x0(r4)
  stb       r0, 0x19(r30)
  b         .loc_0x1E8
  cmplwi    r30, 0
  beq-      .loc_0x1E8
  lhz       r3, 0x2(r4)
  lhz       r0, 0x0(r4)
  stw       r0, 0x30(r30)
  stw       r3, 0x34(r30)
  b         .loc_0x1E8
  cmplwi    r29, 0
  beq-      .loc_0x1E8
  lwz       r0, 0x0(r4)
  stw       r0, 0x0(r29)

.loc_0x1E8:
  lwz       r3, 0x2C(r1)

.loc_0x1EC:
  cmplw     r3, r28
  blt+      .loc_0x64
  lwz       r3, 0x14(r26)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lmw       r23, 0x3C(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BD64
 * Size:	00000C
 */
void JStudio::fvb::@unnamed@fvb_cpp@::getCompositeData_raw_(const void *)
{
/*
.loc_0x0:
  lwz       r0, 0x0(r4)
  stw       r0, 0x0(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BD70
 * Size:	00000C
 */
void JStudio::fvb::@unnamed@fvb_cpp@::getCompositeData_index_(const void *)
{
/*
.loc_0x0:
  lwz       r0, 0x0(r4)
  stw       r0, 0x0(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BD7C
 * Size:	00000C
 */
void JStudio::fvb::@unnamed@fvb_cpp@::getCompositeData_parameter_(const void *)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  stfd      f0, 0x0(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BD88
 * Size:	00000C
 */
void JStudio::fvb::@unnamed@fvb_cpp@::getCompositeData_add_(const void *)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  stfd      f0, 0x0(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BD94
 * Size:	00000C
 */
void JStudio::fvb::@unnamed@fvb_cpp@::getCompositeData_subtract_(const void *)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  stfd      f0, 0x0(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BDA0
 * Size:	00000C
 */
void JStudio::fvb::@unnamed@fvb_cpp@::getCompositeData_multiply_(const void *)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  stfd      f0, 0x0(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BDAC
 * Size:	00000C
 */
void JStudio::fvb::@unnamed@fvb_cpp@::getCompositeData_divide_(const void *)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  stfd      f0, 0x0(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BDB8
 * Size:	00006C
 */
void JStudio::fvb::TObject_composite::prepare_data_(const JStudio::fvb::data::TParse_TParagraph::TData &, JStudio::fvb::TControl *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lwz       r5, 0x8(r4)
  lis       r4, 0x8047
  stw       r0, 0x24(r1)
  addi      r0, r4, 0x3300
  addi      r4, r5, 0x4
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  addi      r3, r1, 0x8
  lwz       r6, 0x0(r5)
  rlwinm    r5,r6,3,0,28
  add       r31, r0, r5
  lwz       r12, 0x4(r31)
  mtctr     r12
  bctrl     
  lwz       r0, 0x0(r31)
  stw       r0, 0x30(r30)
  lfd       f0, 0x8(r1)
  stfd      f0, 0x38(r30)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BE24
 * Size:	000010
 */
void JStudio::fvb::TObject_constant::prepare_data_(const JStudio::fvb::data::TParse_TParagraph::TData &, JStudio::fvb::TControl *)
{
/*
.loc_0x0:
  lwz       r4, 0x8(r4)
  lfs       f0, 0x0(r4)
  stfd      f0, 0x20(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BE34
 * Size:	000018
 */
void JStudio::fvb::TObject_transition::prepare_data_(const JStudio::fvb::data::TParse_TParagraph::TData &, JStudio::fvb::TControl *)
{
/*
.loc_0x0:
  lwz       r4, 0x8(r4)
  lfs       f1, 0x4(r4)
  lfs       f0, 0x0(r4)
  stfd      f0, 0x60(r3)
  stfd      f1, 0x68(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BE4C
 * Size:	000020
 */
void JStudio::fvb::TObject_list::prepare_data_(const JStudio::fvb::data::TParse_TParagraph::TData &, JStudio::fvb::TControl *)
{
/*
.loc_0x0:
  lwz       r4, 0x8(r4)
  lfs       f0, 0x0(r4)
  addi      r0, r4, 0x8
  stfd      f0, 0x68(r3)
  lwz       r4, 0x4(r4)
  stw       r0, 0x5C(r3)
  stw       r4, 0x60(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BE6C
 * Size:	000030
 */
void JStudio::fvb::TObject_list_parameter::prepare_data_(const JStudio::fvb::data::TParse_TParagraph::TData &, JStudio::fvb::TControl *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lwz       r4, 0x8(r4)
  addi      r3, r3, 0x18
  stw       r0, 0x14(r1)
  lwz       r5, 0x0(r4)
  addi      r4, r4, 0x4
  bl        -0x1EA0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BE9C
 * Size:	000038
 */
void JStudio::fvb::TObject_hermite::prepare_data_(const JStudio::fvb::data::TParse_TParagraph::TData &, JStudio::fvb::TControl *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lwz       r4, 0x8(r4)
  addi      r3, r3, 0x18
  stw       r0, 0x14(r1)
  lwz       r0, 0x0(r4)
  addi      r4, r4, 0x4
  rlwinm    r5,r0,0,4,31
  rlwinm    r6,r0,4,28,31
  bl        -0x11A0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BED4
 * Size:	000030
 */
void JStudio::fvb::TControl::TControl()
{
/*
.loc_0x0:
  lis       r4, 0x804A
  subi      r0, r4, 0x1A34
  stw       r0, 0x0(r3)
  li        r4, 0
  addi      r0, r3, 0xC
  stw       r4, 0x4(r3)
  stw       r4, 0xC(r3)
  stw       r4, 0x10(r3)
  stw       r4, 0x8(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x10(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8000BF04
 * Size:	00006C
 */
void JStudio::fvb::TControl::~TControl()
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
  beq-      .loc_0x50
  lis       r3, 0x804A
  addic.    r0, r30, 0x8
  subi      r0, r3, 0x1A34
  stw       r0, 0x0(r30)
  beq-      .loc_0x40
  addi      r3, r30, 0x8
  li        r4, 0
  bl        0x1B3A4

.loc_0x40:
  extsh.    r0, r31
  ble-      .loc_0x50
  mr        r3, r30
  bl        0x18164

.loc_0x50:
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
 * Address:	8000BF70
 * Size:	000094
 */
void JStudio::fvb::TControl::getObject(const void *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  addi      r0, r3, 0xC
  addi      r6, r1, 0x40
  lwz       r7, 0xC(r3)
  addi      r3, r1, 0x30
  stw       r0, 0x14(r1)
  stw       r4, 0x40(r1)
  addi      r4, r1, 0x2C
  stw       r5, 0x44(r1)
  addi      r5, r1, 0x28
  stw       r7, 0x1C(r1)
  stw       r7, 0x18(r1)
  stw       r7, 0x3C(r1)
  stw       r0, 0x10(r1)
  stw       r0, 0x38(r1)
  stw       r0, 0x28(r1)
  stw       r7, 0x2C(r1)
  bl        .loc_0x94
  lwz       r6, 0x30(r1)
  lwz       r5, 0x38(r1)
  stw       r6, 0x34(r1)
  subi      r0, r6, 0xC
  sub       r4, r6, r5
  sub       r3, r5, r6
  or        r3, r4, r3
  stw       r5, 0x24(r1)
  srawi     r3, r3, 0x1F
  stw       r6, 0x20(r1)
  and       r3, r0, r3
  stw       r5, 0xC(r1)
  stw       r6, 0x8(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr       

.loc_0x94:
*/
}


/*
 * --INFO--
 * Address:	8000C004
 * Size:	00009C
 */
void std::find_if<JGadget::TLinkList<JStudio::fvb::TObject, -12>::iterator, JStudio::object::TPRObject_ID_equal>(JGadget::TLinkList<JStudio::fvb::TObject, -12>::iterator, JGadget::TLinkList<JStudio::fvb::TObject, -12>::iterator, JStudio::object::TPRObject_ID_equal)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r6
  stw       r30, 0x28(r1)
  mr        r30, r5
  stw       r29, 0x24(r1)
  mr        r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  b         .loc_0x3C

.loc_0x30:
  lwz       r3, 0x0(r29)
  lwz       r0, 0x0(r3)
  stw       r0, 0x0(r29)

.loc_0x3C:
  lwz       r3, 0x0(r30)
  lwz       r0, 0x0(r29)
  stw       r3, 0x14(r1)
  cmplw     r0, r3
  stw       r0, 0x10(r1)
  stw       r3, 0xC(r1)
  stw       r0, 0x8(r1)
  beq-      .loc_0x74
  lwz       r3, 0x0(r29)
  mr        r4, r31
  subi      r3, r3, 0xC
  bl        0x411C
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x30

.loc_0x74:
  lwz       r0, 0x0(r29)
  stw       r0, 0x0(r28)
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
 * Address:	8000C0A0
 * Size:	00007C
 */
void JStudio::fvb::TControl::getObject_index(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  lwz       r0, 0x8(r3)
  cmplw     r4, r0
  blt-      .loc_0x18
  li        r3, 0
  b         .loc_0x74

.loc_0x18:
  lwz       r3, 0xC(r3)
  cmplwi    r4, 0
  stw       r3, 0xC(r1)
  stw       r3, 0x8(r1)
  beq-      .loc_0x70
  rlwinm.   r0,r4,29,3,31
  mtctr     r0
  beq-      .loc_0x64

.loc_0x38:
  lwz       r3, 0x0(r3)
  lwz       r3, 0x0(r3)
  lwz       r3, 0x0(r3)
  lwz       r3, 0x0(r3)
  lwz       r3, 0x0(r3)
  lwz       r3, 0x0(r3)
  lwz       r3, 0x0(r3)
  lwz       r3, 0x0(r3)
  bdnz+     .loc_0x38
  andi.     r4, r4, 0x7
  beq-      .loc_0x70

.loc_0x64:
  mtctr     r4

.loc_0x68:
  lwz       r3, 0x0(r3)
  bdnz+     .loc_0x68

.loc_0x70:
  subi      r3, r3, 0xC

.loc_0x74:
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	8000C11C
 * Size:	000048
 */
void JStudio::fvb::TFactory::~TFactory()
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
  subi      r0, r5, 0x1A48
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        0x17F6C

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
 * Address:	8000C164
 * Size:	000308
 */
void JStudio::fvb::TFactory::create(const JStudio::fvb::data::TParse_TBlock &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lwz       r3, 0x0(r4)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lhz       r0, 0x4(r3)
  cmpwi     r0, 0x4
  beq-      .loc_0x1A0
  bge-      .loc_0x40
  cmpwi     r0, 0x2
  beq-      .loc_0xC0
  bge-      .loc_0x130
  cmpwi     r0, 0x1
  bge-      .loc_0x50
  b         .loc_0x2F0

.loc_0x40:
  cmpwi     r0, 0x6
  beq-      .loc_0x280
  bge-      .loc_0x2F0
  b         .loc_0x210

.loc_0x50:
  li        r3, 0x40
  bl        0x17CEC
  mr.       r7, r3
  beq-      .loc_0xB8
  lwz       r3, 0x0(r31)
  mr        r31, r7
  li        r0, 0
  lhz       r6, 0x6(r3)
  cmplwi    r6, 0
  beq-      .loc_0x7C
  addi      r0, r3, 0x8

.loc_0x7C:
  stw       r0, 0x0(r7)
  lis       r4, 0x804A
  lis       r5, 0x804A
  addi      r3, r31, 0x18
  stw       r6, 0x4(r7)
  subi      r6, r5, 0x19C8
  li        r5, 0
  subi      r0, r4, 0x19D8
  stw       r6, 0x8(r7)
  stw       r5, 0xC(r7)
  stw       r5, 0x10(r7)
  stw       r3, 0x14(r7)
  stw       r0, 0x8(r31)
  bl        -0x3624
  mr        r7, r31

.loc_0xB8:
  mr        r3, r7
  b         .loc_0x2F4

.loc_0xC0:
  li        r3, 0x28
  bl        0x17C7C
  mr.       r7, r3
  beq-      .loc_0x128
  lwz       r3, 0x0(r31)
  mr        r31, r7
  li        r0, 0
  lhz       r6, 0x6(r3)
  cmplwi    r6, 0
  beq-      .loc_0xEC
  addi      r0, r3, 0x8

.loc_0xEC:
  stw       r0, 0x0(r7)
  lis       r4, 0x804A
  lis       r5, 0x804A
  addi      r3, r31, 0x18
  stw       r6, 0x4(r7)
  subi      r6, r5, 0x19C8
  li        r5, 0
  subi      r0, r4, 0x19E8
  stw       r6, 0x8(r7)
  stw       r5, 0xC(r7)
  stw       r5, 0x10(r7)
  stw       r3, 0x14(r7)
  stw       r0, 0x8(r31)
  bl        -0x306C
  mr        r7, r31

.loc_0x128:
  mr        r3, r7
  b         .loc_0x2F4

.loc_0x130:
  li        r3, 0x70
  bl        0x17C0C
  mr.       r7, r3
  beq-      .loc_0x198
  lwz       r3, 0x0(r31)
  mr        r31, r7
  li        r0, 0
  lhz       r6, 0x6(r3)
  cmplwi    r6, 0
  beq-      .loc_0x15C
  addi      r0, r3, 0x8

.loc_0x15C:
  stw       r0, 0x0(r7)
  lis       r4, 0x804A
  lis       r5, 0x804A
  addi      r3, r31, 0x18
  stw       r6, 0x4(r7)
  subi      r6, r5, 0x19C8
  li        r5, 0
  subi      r0, r4, 0x19F8
  stw       r6, 0x8(r7)
  stw       r5, 0xC(r7)
  stw       r5, 0x10(r7)
  stw       r3, 0x14(r7)
  stw       r0, 0x8(r31)
  bl        -0x307C
  mr        r7, r31

.loc_0x198:
  mr        r3, r7
  b         .loc_0x2F4

.loc_0x1A0:
  li        r3, 0x78
  bl        0x17B9C
  mr.       r7, r3
  beq-      .loc_0x208
  lwz       r3, 0x0(r31)
  mr        r31, r7
  li        r0, 0
  lhz       r6, 0x6(r3)
  cmplwi    r6, 0
  beq-      .loc_0x1CC
  addi      r0, r3, 0x8

.loc_0x1CC:
  stw       r0, 0x0(r7)
  lis       r4, 0x804A
  lis       r5, 0x804A
  addi      r3, r31, 0x18
  stw       r6, 0x4(r7)
  subi      r6, r5, 0x19C8
  li        r5, 0
  subi      r0, r4, 0x1A08
  stw       r6, 0x8(r7)
  stw       r5, 0xC(r7)
  stw       r5, 0x10(r7)
  stw       r3, 0x14(r7)
  stw       r0, 0x8(r31)
  bl        -0x2D00
  mr        r7, r31

.loc_0x208:
  mr        r3, r7
  b         .loc_0x2F4

.loc_0x210:
  li        r3, 0x78
  bl        0x17B2C
  mr.       r7, r3
  beq-      .loc_0x278
  lwz       r3, 0x0(r31)
  mr        r31, r7
  li        r0, 0
  lhz       r6, 0x6(r3)
  cmplwi    r6, 0
  beq-      .loc_0x23C
  addi      r0, r3, 0x8

.loc_0x23C:
  stw       r0, 0x0(r7)
  lis       r4, 0x804A
  lis       r5, 0x804A
  addi      r3, r31, 0x18
  stw       r6, 0x4(r7)
  subi      r6, r5, 0x19C8
  li        r5, 0
  subi      r0, r4, 0x1A18
  stw       r6, 0x8(r7)
  stw       r5, 0xC(r7)
  stw       r5, 0x10(r7)
  stw       r3, 0x14(r7)
  stw       r0, 0x8(r31)
  bl        -0x24A8
  mr        r7, r31

.loc_0x278:
  mr        r3, r7
  b         .loc_0x2F4

.loc_0x280:
  li        r3, 0x80
  bl        0x17ABC
  mr.       r7, r3
  beq-      .loc_0x2E8
  lwz       r3, 0x0(r31)
  mr        r31, r7
  li        r0, 0
  lhz       r6, 0x6(r3)
  cmplwi    r6, 0
  beq-      .loc_0x2AC
  addi      r0, r3, 0x8

.loc_0x2AC:
  stw       r0, 0x0(r7)
  lis       r4, 0x804A
  lis       r5, 0x804A
  addi      r3, r31, 0x18
  stw       r6, 0x4(r7)
  subi      r6, r5, 0x19C8
  li        r5, 0
  subi      r0, r4, 0x1A28
  stw       r6, 0x8(r7)
  stw       r5, 0xC(r7)
  stw       r5, 0x10(r7)
  stw       r3, 0x14(r7)
  stw       r0, 0x8(r31)
  bl        -0x17E4
  mr        r7, r31

.loc_0x2E8:
  mr        r3, r7
  b         .loc_0x2F4

.loc_0x2F0:
  li        r3, 0

.loc_0x2F4:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	8000C46C
 * Size:	00003C
 */
void JStudio::fvb::TFactory::destroy(JStudio::fvb::TObject *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  beq-      .loc_0x2C
  mr        r3, r4
  li        r4, 0x1
  lwz       r12, 0x8(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	8000C4A8
 * Size:	000020
 */
void JStudio::fvb::TParse::TParse(JStudio::fvb::TControl *)
{
/*
.loc_0x0:
  lis       r6, 0x804A
  lis       r5, 0x804A
  subi      r6, r6, 0x1CE0
  stw       r6, 0x0(r3)
  subi      r0, r5, 0x1A5C
  stw       r0, 0x0(r3)
  stw       r4, 0x4(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8000C4C8
 * Size:	000060
 */
void JStudio::fvb::TParse::~TParse()
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
  subi      r0, r5, 0x1A5C
  stw       r0, 0x0(r30)
  bl        0x1AC98
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        0x17BAC

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
 * Address:	8000C528
 * Size:	000098
 */
void JStudio::fvb::TParse::parseHeader_next(const void **, unsigned long *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r31, 0x0(r4)
  addi      r0, r31, 0x10
  mr        r3, r31
  stw       r0, 0x0(r4)
  subi      r4, r2, 0x7F70
  lwz       r0, 0xC(r31)
  stw       r0, 0x0(r5)
  li        r5, 0x4
  bl        0xBAA90
  cmpwi     r3, 0
  beq-      .loc_0x44
  li        r3, 0
  b         .loc_0x84

.loc_0x44:
  lhz       r0, 0x4(r31)
  cmplwi    r0, 0xFEFF
  beq-      .loc_0x58
  li        r3, 0
  b         .loc_0x84

.loc_0x58:
  lhz       r4, 0x6(r31)
  cmplwi    r4, 0x2
  bge-      .loc_0x6C
  li        r3, 0
  b         .loc_0x84

.loc_0x6C:
  subfic    r0, r4, 0x100
  li        r3, 0x100
  orc       r3, r3, r4
  rlwinm    r0,r0,31,1,31
  sub       r0, r3, r0
  rlwinm    r3,r0,1,31,31

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
 * Address:	8000C5C0
 * Size:	000118
 */
void JStudio::fvb::TParse::parseBlock_next(const void **, unsigned long *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  rlwinm.   r0,r6,0,27,27
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  stw       r29, 0x34(r1)
  mr        r29, r6
  lwz       r7, 0x0(r4)
  stw       r7, 0x20(r1)
  lwz       r0, 0x0(r7)
  add       r0, r7, r0
  stw       r0, 0x0(r4)
  lwz       r4, 0x20(r1)
  lwz       r0, 0x0(r4)
  stw       r0, 0x0(r5)
  lwz       r30, 0x4(r3)
  beq-      .loc_0x78
  lwz       r3, 0x20(r1)
  li        r4, 0
  lhz       r5, 0x6(r3)
  cmplwi    r5, 0
  beq-      .loc_0x60
  addi      r4, r3, 0x8

.loc_0x60:
  mr        r3, r30
  bl        -0x6B4
  cmplwi    r3, 0
  beq-      .loc_0x78
  li        r3, 0x1
  b         .loc_0xFC

.loc_0x78:
  rlwinm.   r0,r29,0,26,26
  beq-      .loc_0x88
  li        r3, 0x1
  b         .loc_0xFC

.loc_0x88:
  lwz       r3, 0x4(r30)
  cmplwi    r3, 0
  bne-      .loc_0x9C
  li        r3, 0
  b         .loc_0xFC

.loc_0x9C:
  lwz       r12, 0x0(r3)
  addi      r4, r1, 0x20
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr.       r31, r3
  bne-      .loc_0xC0
  rlwinm    r3,r29,26,31,31
  b         .loc_0xFC

.loc_0xC0:
  mr        r5, r30
  addi      r4, r1, 0x20
  bl        -0xB40
  addi      r0, r30, 0xC
  addi      r3, r1, 0x10
  stw       r0, 0xC(r1)
  addi      r4, r30, 0x8
  addi      r5, r1, 0x14
  addi      r6, r31, 0xC
  stw       r0, 0x8(r1)
  stw       r0, 0x1C(r1)
  stw       r0, 0x18(r1)
  stw       r0, 0x14(r1)
  bl        0x1AC6C
  li        r3, 0x1

.loc_0xFC:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}


/*
 * --INFO--
 * Address:	8000C6D8
 * Size:	00008C
 */
void JStudio::fvb::TObject_hermite::~TObject_hermite()
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
  lis       r3, 0x804A
  addic.    r0, r30, 0x18
  subi      r0, r3, 0x1A28
  stw       r0, 0x8(r30)
  beq-      .loc_0x4C
  lis       r4, 0x804A
  addi      r3, r30, 0x18
  subi      r0, r4, 0x1B98
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        -0x3BEC

.loc_0x4C:
  cmplwi    r30, 0
  beq-      .loc_0x60
  lis       r3, 0x804A
  subi      r0, r3, 0x19C8
  stw       r0, 0x8(r30)

.loc_0x60:
  extsh.    r0, r31
  ble-      .loc_0x70
  mr        r3, r30
  bl        0x17970

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
 * Address:	8000C764
 * Size:	00008C
 */
void JStudio::fvb::TObject_list_parameter::~TObject_list_parameter()
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
  lis       r3, 0x804A
  addic.    r0, r30, 0x18
  subi      r0, r3, 0x1A18
  stw       r0, 0x8(r30)
  beq-      .loc_0x4C
  lis       r4, 0x804A
  addi      r3, r30, 0x18
  subi      r0, r4, 0x1B78
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        -0x3C78

.loc_0x4C:
  cmplwi    r30, 0
  beq-      .loc_0x60
  lis       r3, 0x804A
  subi      r0, r3, 0x19C8
  stw       r0, 0x8(r30)

.loc_0x60:
  extsh.    r0, r31
  ble-      .loc_0x70
  mr        r3, r30
  bl        0x178E4

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
 * Address:	8000C7F0
 * Size:	00008C
 */
void JStudio::fvb::TObject_list::~TObject_list()
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
  lis       r3, 0x804A
  addic.    r0, r30, 0x18
  subi      r0, r3, 0x1A08
  stw       r0, 0x8(r30)
  beq-      .loc_0x4C
  lis       r4, 0x804A
  addi      r3, r30, 0x18
  subi      r0, r4, 0x1B58
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        -0x3D04

.loc_0x4C:
  cmplwi    r30, 0
  beq-      .loc_0x60
  lis       r3, 0x804A
  subi      r0, r3, 0x19C8
  stw       r0, 0x8(r30)

.loc_0x60:
  extsh.    r0, r31
  ble-      .loc_0x70
  mr        r3, r30
  bl        0x17858

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
 * Address:	8000C87C
 * Size:	00008C
 */
void JStudio::fvb::TObject_transition::~TObject_transition()
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
  lis       r3, 0x804A
  addic.    r0, r30, 0x18
  subi      r0, r3, 0x19F8
  stw       r0, 0x8(r30)
  beq-      .loc_0x4C
  lis       r4, 0x804A
  addi      r3, r30, 0x18
  subi      r0, r4, 0x1B38
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        -0x3D90

.loc_0x4C:
  cmplwi    r30, 0
  beq-      .loc_0x60
  lis       r3, 0x804A
  subi      r0, r3, 0x19C8
  stw       r0, 0x8(r30)

.loc_0x60:
  extsh.    r0, r31
  ble-      .loc_0x70
  mr        r3, r30
  bl        0x177CC

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
 * Address:	8000C908
 * Size:	00008C
 */
void JStudio::fvb::TObject_constant::~TObject_constant()
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
  lis       r3, 0x804A
  addic.    r0, r30, 0x18
  subi      r0, r3, 0x19E8
  stw       r0, 0x8(r30)
  beq-      .loc_0x4C
  lis       r4, 0x804A
  addi      r3, r30, 0x18
  subi      r0, r4, 0x1B18
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        -0x3E1C

.loc_0x4C:
  cmplwi    r30, 0
  beq-      .loc_0x60
  lis       r3, 0x804A
  subi      r0, r3, 0x19C8
  stw       r0, 0x8(r30)

.loc_0x60:
  extsh.    r0, r31
  ble-      .loc_0x70
  mr        r3, r30
  bl        0x17740

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
 * Address:	8000C994
 * Size:	0000A8
 */
void JStudio::fvb::TObject_composite::~TObject_composite()
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
  beq-      .loc_0x8C
  lis       r3, 0x804A
  addic.    r0, r30, 0x18
  subi      r0, r3, 0x19D8
  stw       r0, 0x8(r30)
  beq-      .loc_0x68
  lis       r3, 0x804A
  addic.    r0, r30, 0x1C
  subi      r0, r3, 0x1AF8
  stw       r0, 0x18(r30)
  beq-      .loc_0x5C
  addic.    r0, r30, 0x1C
  beq-      .loc_0x5C
  addi      r3, r30, 0x1C
  li        r4, 0
  bl        0x1B19C

.loc_0x5C:
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3EC4

.loc_0x68:
  cmplwi    r30, 0
  beq-      .loc_0x7C
  lis       r3, 0x804A
  subi      r0, r3, 0x19C8
  stw       r0, 0x8(r30)

.loc_0x7C:
  extsh.    r0, r31
  ble-      .loc_0x8C
  mr        r3, r30
  bl        0x17698

.loc_0x8C:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
