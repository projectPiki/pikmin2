#include "JSystem/JADHioNode.h"

/*
 * --INFO--
 * Address:	800BA1EC
 * Size:	000010
 */
JADHioNode::JADHioNode(const char*)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804A
	  addi      r0, r4, 0x66D0
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BA1FC
 * Size:	000048
 */
JADHioNode::~JADHioNode()
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
	  addi      r0, r5, 0x66D0
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x96174

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}