#include "types.h"

namespace JStudio {

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void stb::TObject::toString_status(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
stb::TObject::TObject(unsigned long, void const*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80010278
 * Size:	000070
 */
stb::TObject::TObject((JStudio::stb::data::TParse_TBlock_object const&))
{
	/*
	.loc_0x0:
	  lwz       r8, 0x0(r4)
	  lis       r4, 0x804A
	  subi      r0, r4, 0xAA8
	  li        r5, 0
	  lhz       r7, 0xA(r8)
	  addi      r6, r8, 0xC
	  stw       r6, 0x0(r3)
	  stw       r7, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r5, 0xC(r3)
	  stw       r5, 0x10(r3)
	  stw       r5, 0x14(r3)
	  lwz       r0, 0x4(r8)
	  stw       r0, 0x18(r3)
	  lhz       r0, 0x8(r8)
	  sth       r0, 0x1C(r3)
	  stb       r5, 0x1E(r3)
	  stw       r5, 0x20(r3)
	  stw       r5, 0x24(r3)
	  lhz       r4, 0xA(r8)
	  addi      r0, r4, 0x3
	  rlwinm    r4,r0,0,0,29
	  addi      r0, r4, 0xC
	  add       r0, r8, r0
	  stw       r0, 0x28(r3)
	  stw       r5, 0x2C(r3)
	  stw       r5, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800102E8
 * Size:	000048
 */
stb::TObject::~TObject(void)
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
	  subi      r0, r5, 0xAA8
	  stw       r0, 0x8(r31)
	  ble-      .loc_0x30
	  bl        0x13DA0

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
 * Address:	........
 * Size:	000058
 */
void stb::TObject::setFlag_operation(unsigned char, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void stb::TObject::reset(void const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80010330
 * Size:	000238
 */
void stb::TObject::forward(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  li        r29, 0

	.loc_0x24:
	  lhz       r0, 0x1C(r30)
	  rlwinm.   r0,r0,0,16,16
	  beq-      .loc_0x8C
	  lwz       r0, 0x30(r30)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x5C
	  bge-      .loc_0x50
	  cmpwi     r0, 0x2
	  beq-      .loc_0x5C
	  bge-      .loc_0x84
	  b         .loc_0x84

	.loc_0x50:
	  cmpwi     r0, 0x8
	  beq-      .loc_0x84
	  b         .loc_0x84

	.loc_0x5C:
	  li        r0, 0x8
	  stw       r0, 0x30(r30)
	  lbz       r0, 0x1E(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x84
	  mr        r3, r30
	  lwz       r12, 0x8(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x84:
	  li        r3, 0x1
	  b         .loc_0x21C

	.loc_0x8C:
	  lwz       r0, 0x30(r30)
	  cmpwi     r0, 0x8
	  bne-      .loc_0xB4
	  mr        r3, r30
	  lwz       r12, 0x8(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x2
	  stw       r0, 0x30(r30)

	.loc_0xB4:
	  lwz       r3, 0x14(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  lwz       r0, 0x54(r3)
	  cmpwi     r0, 0
	  bgt-      .loc_0xD8

	.loc_0xCC:
	  lwz       r0, 0x20(r30)
	  cmpwi     r0, 0
	  ble-      .loc_0x10C

	.loc_0xD8:
	  lbz       r0, 0x1E(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x104
	  li        r0, 0x4
	  mr        r3, r30
	  stw       r0, 0x30(r30)
	  mr        r4, r31
	  lwz       r12, 0x8(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x104:
	  li        r3, 0x1
	  b         .loc_0x21C

	.loc_0x10C:
	  lwz       r0, 0x28(r30)
	  cmplwi    r0, 0
	  stw       r0, 0x24(r30)
	  bne-      .loc_0x174
	  lbz       r0, 0x1E(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  rlwinm.   r0,r29,0,24,31
	  bne-      .loc_0x148
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x8(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x148:
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x1E(r30)
	  mr        r3, r30
	  stw       r0, 0x30(r30)
	  lwz       r12, 0x8(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x16C:
	  li        r3, 0
	  b         .loc_0x21C

	.loc_0x174:
	  lbz       r0, 0x1E(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x19C
	  li        r0, 0x1
	  mr        r3, r30
	  stb       r0, 0x1E(r30)
	  lwz       r12, 0x8(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x19C:
	  li        r0, 0x2
	  stw       r0, 0x30(r30)
	  lwz       r0, 0x2C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C4
	  mr        r3, r30
	  bl        0x98
	  lwz       r0, 0x2C(r30)
	  cmplwi    r0, 0
	  beq+      .loc_0x24

	.loc_0x1C4:
	  lwz       r4, 0x2C(r30)
	  li        r29, 0x1
	  cmplw     r31, r4
	  blt-      .loc_0x1F8
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x2C(r30)
	  sub       r31, r31, r4
	  lwz       r12, 0x8(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x10C

	.loc_0x1F8:
	  sub       r0, r4, r31
	  mr        r3, r30
	  stw       r0, 0x2C(r30)
	  mr        r4, r31
	  lwz       r12, 0x8(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1

	.loc_0x21C:
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
 * Address:	80010568
 * Size:	000004
 */
void stb::TObject::do_begin(void) { }

/*
 * --INFO--
 * Address:	8001056C
 * Size:	000004
 */
void stb::TObject::do_end(void) { }

/*
 * --INFO--
 * Address:	80010570
 * Size:	000004
 */
void stb::TObject::do_paragraph(unsigned long, void const*, unsigned long) { }

/*
 * --INFO--
 * Address:	80010574
 * Size:	000004
 */
void stb::TObject::do_wait(unsigned long) { }

/*
 * --INFO--
 * Address:	80010578
 * Size:	000004
 */
void stb::TObject::do_data(void const*, unsigned long, void const*,
                           unsigned long)
{
}

/*
 * --INFO--
 * Address:	8001057C
 * Size:	0001A4
 */
void stb::TObject::process_sequence_(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  addi      r4, r1, 0x20
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0xC
	  stw       r30, 0x38(r1)
	  lwz       r0, 0x24(r31)
	  stw       r0, 0xC(r1)
	  bl        -0x7C68
	  lbz       r0, 0x20(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r3, 0x28(r1)
	  cmpwi     r0, 0x3
	  lwz       r30, 0x2C(r1)
	  stw       r30, 0x28(r31)
	  beq-      .loc_0xE0
	  bge-      .loc_0x5C
	  cmpwi     r0, 0x1
	  beq-      .loc_0x74
	  bge-      .loc_0xD8
	  b         .loc_0x18C

	.loc_0x5C:
	  cmpwi     r0, 0x80
	  beq-      .loc_0x128
	  bge-      .loc_0x18C
	  cmpwi     r0, 0x5
	  bge-      .loc_0x18C
	  b         .loc_0x104

	.loc_0x74:
	  rlwinm    r0,r4,16,24,31
	  cmpwi     r0, 0x2
	  beq-      .loc_0xB0
	  bge-      .loc_0x90
	  cmpwi     r0, 0x1
	  bge-      .loc_0x9C
	  b         .loc_0x18C

	.loc_0x90:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x18C
	  b         .loc_0xC4

	.loc_0x9C:
	  lhz       r3, 0x1C(r31)
	  rlwinm    r0,r4,0,16,31
	  or        r0, r3, r0
	  sth       r0, 0x1C(r31)
	  b         .loc_0x18C

	.loc_0xB0:
	  lhz       r3, 0x1C(r31)
	  rlwinm    r0,r4,0,16,31
	  and       r0, r3, r0
	  sth       r0, 0x1C(r31)
	  b         .loc_0x18C

	.loc_0xC4:
	  lhz       r3, 0x1C(r31)
	  rlwinm    r0,r4,0,16,31
	  xor       r0, r3, r0
	  sth       r0, 0x1C(r31)
	  b         .loc_0x18C

	.loc_0xD8:
	  stw       r4, 0x2C(r31)
	  b         .loc_0x18C

	.loc_0xE0:
	  rlwinm.   r0,r4,0,8,8
	  mr        r3, r4
	  beq-      .loc_0xF4
	  lwz       r0, -0x7F28(r2)
	  or        r3, r4, r0

	.loc_0xF4:
	  lwz       r0, 0x24(r31)
	  add       r0, r0, r3
	  stw       r0, 0x28(r31)
	  b         .loc_0x18C

	.loc_0x104:
	  rlwinm.   r0,r4,0,8,8
	  mr        r3, r4
	  beq-      .loc_0x118
	  lwz       r0, -0x7F28(r2)
	  or        r3, r4, r0

	.loc_0x118:
	  lwz       r0, 0x20(r31)
	  add       r0, r0, r3
	  stw       r0, 0x20(r31)
	  b         .loc_0x18C

	.loc_0x128:
	  li        r0, 0
	  stw       r0, 0x8(r1)
	  b         .loc_0x184

	.loc_0x134:
	  stw       r3, 0x8(r1)
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x10
	  bl        -0x7D34
	  lwz       r4, 0x10(r1)
	  cmplwi    r4, 0xFF
	  bgt-      .loc_0x164
	  lwz       r5, 0x18(r1)
	  mr        r3, r31
	  lwz       r6, 0x14(r1)
	  bl        .loc_0x1A4
	  b         .loc_0x180

	.loc_0x164:
	  lwz       r12, 0x8(r31)
	  mr        r3, r31
	  lwz       r5, 0x18(r1)
	  lwz       r12, 0x14(r12)
	  lwz       r6, 0x14(r1)
	  mtctr     r12
	  bctrl

	.loc_0x180:
	  lwz       r3, 0x1C(r1)

	.loc_0x184:
	  cmplw     r3, r30
	  blt+      .loc_0x134

	.loc_0x18C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x1A4:
	*/
}

/*
 * --INFO--
 * Address:	80010720
 * Size:	00013C
 */
void stb::TObject::process_paragraph_reserved_(unsigned long, void const*,
                                               unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x80
	  mr        r8, r5
	  stw       r0, 0x14(r1)
	  mr        r7, r6
	  beq-      .loc_0xDC
	  bge-      .loc_0x44
	  cmpwi     r4, 0x2
	  beq-      .loc_0xBC
	  bge-      .loc_0x38
	  cmpwi     r4, 0x1
	  bge-      .loc_0x54
	  b         .loc_0x12C

	.loc_0x38:
	  cmpwi     r4, 0x4
	  bge-      .loc_0x12C
	  b         .loc_0xC8

	.loc_0x44:
	  cmpwi     r4, 0x82
	  beq-      .loc_0x12C
	  bge-      .loc_0x12C
	  b         .loc_0xFC

	.loc_0x54:
	  lwz       r5, 0x0(r8)
	  rlwinm    r0,r5,16,24,31
	  cmpwi     r0, 0x2
	  beq-      .loc_0x94
	  bge-      .loc_0x74
	  cmpwi     r0, 0x1
	  bge-      .loc_0x80
	  b         .loc_0x12C

	.loc_0x74:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x12C
	  b         .loc_0xA8

	.loc_0x80:
	  lhz       r4, 0x1C(r3)
	  rlwinm    r0,r5,0,16,31
	  or        r0, r4, r0
	  sth       r0, 0x1C(r3)
	  b         .loc_0x12C

	.loc_0x94:
	  lhz       r4, 0x1C(r3)
	  rlwinm    r0,r5,0,16,31
	  and       r0, r4, r0
	  sth       r0, 0x1C(r3)
	  b         .loc_0x12C

	.loc_0xA8:
	  lhz       r4, 0x1C(r3)
	  rlwinm    r0,r5,0,16,31
	  xor       r0, r4, r0
	  sth       r0, 0x1C(r3)
	  b         .loc_0x12C

	.loc_0xBC:
	  lwz       r0, 0x0(r8)
	  stw       r0, 0x2C(r3)
	  b         .loc_0x12C

	.loc_0xC8:
	  lwz       r4, 0x24(r3)
	  lwz       r0, 0x0(r8)
	  add       r0, r4, r0
	  stw       r0, 0x28(r3)
	  b         .loc_0x12C

	.loc_0xDC:
	  lwz       r12, 0x8(r3)
	  mr        r6, r8
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x12C

	.loc_0xFC:
	  lhz       r5, 0x2(r8)
	  addi      r4, r8, 0x4
	  lwz       r12, 0x8(r3)
	  addi      r0, r5, 0x3
	  rlwinm    r6,r0,0,0,29
	  lwz       r12, 0x1C(r12)
	  addi      r6, r6, 0x4
	  add       r6, r8, r6
	  sub       r0, r6, r8
	  sub       r7, r7, r0
	  mtctr     r12
	  bctrl

	.loc_0x12C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
stb::TObject_control::TObject_control(void const*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
stb::TObject_control::TObject_control(
    (JStudio::stb::data::TParse_TBlock_object const&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8001085C
 * Size:	000094
 */
stb::TControl::TControl(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  subi      r0, r4, 0xAD4
	  li        r8, 0
	  stw       r0, 0x0(r3)
	  subi      r6, r5, 0xAA8
	  lis       r4, 0x804A
	  addi      r7, r3, 0x14
	  stw       r8, 0x4(r3)
	  li        r5, -0x1
	  subi      r0, r4, 0xAC8
	  stw       r8, 0x8(r3)
	  stw       r8, 0xC(r3)
	  stw       r8, 0x14(r3)
	  stw       r8, 0x18(r3)
	  stw       r8, 0x10(r3)
	  stw       r7, 0x14(r3)
	  stw       r7, 0x18(r3)
	  stw       r8, 0x20(r3)
	  stw       r8, 0x24(r3)
	  stw       r6, 0x28(r3)
	  stw       r8, 0x2C(r3)
	  stw       r8, 0x30(r3)
	  stw       r8, 0x34(r3)
	  stw       r5, 0x38(r3)
	  sth       r8, 0x3C(r3)
	  stb       r8, 0x3E(r3)
	  stw       r8, 0x40(r3)
	  stw       r8, 0x44(r3)
	  stw       r8, 0x48(r3)
	  stw       r8, 0x4C(r3)
	  stw       r8, 0x50(r3)
	  stw       r0, 0x28(r3)
	  stw       r8, 0x54(r3)
	  stw       r8, 0x1C(r3)
	  stw       r3, 0x34(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800108F0
 * Size:	00005C
 */
stb::TObject_control::~TObject_control(void)
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
	  subi      r0, r3, 0xAC8
	  stw       r0, 0x8(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  subi      r0, r3, 0xAA8
	  stw       r0, 0x8(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        0x13784

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace JStudio

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void __dt__Q27JGadget37TLinkList<JStudio::stb::TObject, -12> Fv(void)
{
	// UNUSED FUNCTION
}

namespace JStudio {

/*
 * --INFO--
 * Address:	8001094C
 * Size:	00009C
 */
stb::TControl::~TControl(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x20
	  subi      r3, r3, 0xAD4
	  li        r0, 0
	  stw       r3, 0x0(r30)
	  stw       r0, 0x34(r30)
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x20
	  subi      r0, r3, 0xAC8
	  stw       r0, 0x28(r30)
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  subi      r0, r3, 0xAA8
	  stw       r0, 0x28(r30)

	.loc_0x5C:
	  addic.    r0, r30, 0x10
	  beq-      .loc_0x70
	  addi      r3, r30, 0x10
	  li        r4, 0
	  bl        0x1692C

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        0x136EC

	.loc_0x80:
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
 * Address:	........
 * Size:	000054
 */
void stb::TControl::appendObject(JStudio::stb::TObject*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void stb::TControl::removeObject(JStudio::stb::TObject*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void stb::TControl::removeObject_all(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void stb::TControl::destroyObject(JStudio::stb::TObject*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void stb::TControl::destroyObject_all(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800109E8
 * Size:	000094
 */
void stb::TControl::getObject(void const*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  addi      r0, r3, 0x14
	  addi      r6, r1, 0x40
	  lwz       r7, 0x14(r3)
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
 * Address:	80010A7C
 * Size:	00009C
 */
void std::find_if<JGadget::TLinkList<JStudio::stb::TObject, -12>::iterator,
                  object::TPRObject_ID_equal>(
    JGadget::TLinkList<JStudio::stb::TObject, -12>::iterator,
    JGadget::TLinkList<JStudio::stb::TObject, -12>::iterator,
    JStudio::object::TPRObject_ID_equal)
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
	  bl        -0x95C
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
 * Address:	........
 * Size:	00007C
 */
void stb::TControl::getObject_index(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void stb::TControl::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80010B18
 * Size:	0000F0
 */
void stb::TControl::forward(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r25, 0x44(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r0, 0x40(r3)
	  addi      r3, r30, 0x20
	  stw       r0, 0x54(r30)
	  bl        -0x80C
	  lwz       r0, 0x14(r30)
	  addi      r4, r30, 0x14
	  stw       r4, 0x24(r1)
	  mr        r27, r3
	  li        r26, 0xF
	  li        r25, 0
	  stw       r4, 0x20(r1)
	  stw       r4, 0x34(r1)
	  stw       r4, 0x30(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x38(r1)
	  stw       r4, 0x3C(r1)
	  b         .loc_0xAC

	.loc_0x68:
	  lwz       r3, 0x38(r1)
	  mr        r4, r31
	  li        r29, 0
	  lwz       r0, 0x0(r3)
	  subi      r28, r3, 0xC
	  mr        r3, r28
	  stw       r0, 0x38(r1)
	  bl        -0x86C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x98
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x9C

	.loc_0x98:
	  li        r29, 0x1

	.loc_0x9C:
	  lwz       r0, 0x30(r28)
	  mr        r27, r29
	  and       r26, r26, r0
	  or        r25, r25, r0

	.loc_0xAC:
	  lwz       r3, 0x3C(r1)
	  lwz       r0, 0x38(r1)
	  stw       r3, 0x14(r1)
	  cmplw     r0, r3
	  stw       r0, 0x10(r1)
	  stw       r3, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bne+      .loc_0x68
	  rlwinm    r0,r25,16,0,15
	  mr        r3, r27
	  or        r0, r26, r0
	  stw       r0, 0x1C(r30)
	  lmw       r25, 0x44(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80010C08
 * Size:	000048
 */
stb::TFactory::~TFactory(void)
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
	  subi      r0, r5, 0xAE8
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        0x13480

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
 * Address:	80010C50
 * Size:	000008
 */
void stb::TFactory::create(JStudio::stb::data::TParse_TBlock_object const&)
{
	return 0x0;
}

/*
 * --INFO--
 * Address:	80010C58
 * Size:	00003C
 */
void stb::TFactory::destroy(JStudio::stb::TObject*)
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
 * Address:	80010C94
 * Size:	000020
 */
stb::TParse::TParse(JStudio::stb::TControl*)
{
	/*
	.loc_0x0:
	  lis       r6, 0x804A
	  lis       r5, 0x804A
	  subi      r6, r6, 0x1CE0
	  stw       r6, 0x0(r3)
	  subi      r0, r5, 0xB08
	  stw       r0, 0x0(r3)
	  stw       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80010CB4
 * Size:	000060
 */
stb::TParse::~TParse(void)
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
	  subi      r0, r5, 0xB08
	  stw       r0, 0x0(r30)
	  bl        0x164AC
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        0x133C0

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
 * Address:	80010D14
 * Size:	0000C8
 */
void stb::TParse::parseHeader_next(void const**, unsigned long*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r7, 0x0(r4)
	  stw       r7, 0x8(r1)
	  addi      r0, r7, 0x20
	  stw       r0, 0x0(r4)
	  subi      r4, r2, 0x7F20
	  lwz       r3, 0x8(r1)
	  lwz       r0, 0xC(r3)
	  stw       r0, 0x0(r5)
	  li        r5, 0x4
	  lwz       r3, 0x8(r1)
	  bl        0xB6290
	  cmpwi     r3, 0
	  beq-      .loc_0x58
	  li        r3, 0
	  b         .loc_0xB0

	.loc_0x58:
	  lwz       r3, 0x8(r1)
	  lhz       r0, 0x4(r3)
	  cmplwi    r0, 0xFEFF
	  beq-      .loc_0x70
	  li        r3, 0
	  b         .loc_0xB0

	.loc_0x70:
	  lhz       r0, 0x6(r3)
	  cmplwi    r0, 0x1
	  bge-      .loc_0x84
	  li        r3, 0
	  b         .loc_0xB0

	.loc_0x84:
	  cmplwi    r0, 0x3
	  ble-      .loc_0x94
	  li        r3, 0
	  b         .loc_0xB0

	.loc_0x94:
	  mr        r3, r30
	  mr        r5, r31
	  lwz       r12, 0x0(r30)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80010DDC
 * Size:	000054
 */
void stb::TParse::parseBlock_next(void const**, unsigned long*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r7, 0x0(r4)
	  stw       r7, 0x8(r1)
	  lwz       r0, 0x0(r7)
	  add       r0, r7, r0
	  stw       r0, 0x0(r4)
	  addi      r4, r1, 0x8
	  lwz       r7, 0x8(r1)
	  lwz       r0, 0x0(r7)
	  stw       r0, 0x0(r5)
	  mr        r5, r6
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	80010E30
 * Size:	000008
 */
void stb::TParse::parseHeader(JStudio::stb::data::TParse_THeader const&,
                               unsigned long)
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	80010E38
 * Size:	000038
 */
void stb::TParse::parseBlock_block(JStudio::stb::data::TParse_TBlock const&,
                                    unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x0(r4)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	80010E70
 * Size:	000154
 */
void stb::TParse::parseBlock_object(
    (JStudio::stb::data::TParse_TBlock_object const&, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lwz       r6, 0x0(r4)
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r5
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  lwz       r31, 0x4(r3)
	  lwz       r3, 0x4(r6)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x68
	  lhz       r4, 0xA(r6)
	  li        r0, 0
	  li        r3, 0x1
	  stb       r0, 0x3E(r31)
	  addi      r4, r4, 0x3
	  rlwinm    r4,r4,0,0,29
	  addi      r4, r4, 0xC
	  stw       r0, 0x50(r31)
	  add       r4, r6, r4
	  stw       r4, 0x48(r31)
	  stw       r0, 0x4C(r31)
	  b         .loc_0x138

	.loc_0x68:
	  rlwinm.   r0,r30,0,27,27
	  beq-      .loc_0xBC
	  lhz       r5, 0xA(r6)
	  mr        r3, r31
	  addi      r4, r6, 0xC
	  bl        -0x504
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lwz       r6, 0x0(r29)
	  li        r4, 0
	  lhz       r5, 0xA(r6)
	  stb       r4, 0x1E(r3)
	  addi      r0, r5, 0x3
	  rlwinm    r5,r0,0,0,29
	  addi      r0, r5, 0xC
	  stw       r4, 0x30(r3)
	  add       r0, r6, r0
	  stw       r0, 0x28(r3)
	  stw       r4, 0x2C(r3)
	  li        r3, 0x1
	  b         .loc_0x138

	.loc_0xBC:
	  rlwinm.   r0,r30,0,26,26
	  beq-      .loc_0xCC
	  li        r3, 0x1
	  b         .loc_0x138

	.loc_0xCC:
	  lwz       r3, 0xC(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0xE0
	  li        r3, 0
	  b         .loc_0x138

	.loc_0xE0:
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr.       r6, r3
	  bne-      .loc_0x104
	  rlwinm    r3,r30,26,31,31
	  b         .loc_0x138

	.loc_0x104:
	  stw       r31, 0x14(r6)
	  addi      r0, r31, 0x14
	  addi      r3, r1, 0x10
	  addi      r4, r31, 0x10
	  stw       r0, 0xC(r1)
	  addi      r5, r1, 0x14
	  addi      r6, r6, 0xC
	  stw       r0, 0x8(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  bl        0x16380
	  li        r3, 0x1

	.loc_0x138:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}
} // namespace JStudio
