#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	803015F8
 * Size:	000090
 */
NormMiniHoudai::Obj::Obj()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x308
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x308(r31)
	  stw       r0, 0x30C(r31)
	  stw       r0, 0x310(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x15644
	  lis       r3, 0x804D
	  addi      r0, r31, 0x308
	  addi      r5, r3, 0x7288
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x2FC
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
} // namespace Game
