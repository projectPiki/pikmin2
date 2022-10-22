#include "JSystem/JGadget/binary.h"
#include "types.h"

/*
    Generated from dpostproc
*/

namespace JGadget {
namespace binary {

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JGadget::binary::parseVariableUInt_16_32(void const**, JGadget::binary::TEBit*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
// void JGadget::binary::parseVariableUInt_8_16_32(void const**, JGadget::binary::TEBit*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JGadget::binary::parseVariableUInt_8_16(void const**, JGadget::binary::TEBit*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80027128
 * Size:	000068
 */
u16* parseVariableUInt_16_32_following(void const*, u32*, u32*, JGadget::binary::TEBit*)
{
	/*
	.loc_0x0:
	  cmplwi    r6, 0
	  stwu      r1, -0x10(r1)
	  mr        r8, r3
	  bne-      .loc_0x14
	  addi      r6, r1, 0x8

	.loc_0x14:
	  lhz       r7, 0x0(r8)
	  rlwinm.   r0,r7,0,16,16
	  bne-      .loc_0x3C
	  li        r3, 0x10
	  lhz       r0, 0x2(r8)
	  stw       r3, 0x0(r6)
	  addi      r3, r8, 0x4
	  stw       r7, 0x0(r4)
	  stw       r0, 0x0(r5)
	  b         .loc_0x60

	.loc_0x3C:
	  li        r3, 0x20
	  lhz       r0, 0x2(r8)
	  rlwinm    r7,r7,16,1,15
	  stw       r3, 0x0(r6)
	  or        r7, r7, r0
	  lwz       r0, 0x4(r8)
	  stw       r7, 0x0(r4)
	  addi      r3, r8, 0x8
	  stw       r0, 0x0(r5)

	.loc_0x60:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80027190
 * Size:	000048
 */
TParse_header_block::~TParse_header_block() { }

/*
 * --INFO--
 * Address:	800271D8
 * Size:	00010C
 */
bool TParse_header_block::parse_next(void const**, u32)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r26, 0x18(r1)
	  mr.       r27, r4
	  mr        r26, r3
	  mr        r28, r5
	  beq-      .loc_0x2C
	  lwz       r0, 0x0(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x34

	.loc_0x2C:
	  li        r3, 0
	  b         .loc_0xF8

	.loc_0x34:
	  lwz       r12, 0x0(r3)
	  mr        r6, r28
	  addi      r5, r1, 0xC
	  li        r31, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  li        r31, 0x1

	.loc_0x5C:
	  rlwinm.   r0,r28,0,31,31
	  mr        r29, r31
	  bne-      .loc_0xF0
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xF0
	  mr        r3, r31
	  b         .loc_0xF8
	  b         .loc_0xDC

	.loc_0x7C:
	  mr        r3, r26
	  mr        r4, r27
	  lwz       r12, 0x0(r26)
	  mr        r6, r28
	  addi      r5, r1, 0x8
	  li        r31, 0
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0xB4
	  li        r31, 0x1

	.loc_0xB4:
	  cmplwi    r30, 0
	  mr        r29, r31
	  bne-      .loc_0xD0
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xD0
	  mr        r3, r31
	  b         .loc_0xF8

	.loc_0xD0:
	  lwz       r3, 0xC(r1)
	  subi      r0, r3, 0x1
	  stw       r0, 0xC(r1)

	.loc_0xDC:
	  lwz       r0, 0xC(r1)
	  cmplwi    r0, 0
	  bne+      .loc_0x7C
	  mr        r3, r29
	  b         .loc_0xF8

	.loc_0xF0:
	  rlwinm    r30,r28,0,30,30
	  b         .loc_0xDC

	.loc_0xF8:
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

} // namespace binary
} // namespace JGadget
