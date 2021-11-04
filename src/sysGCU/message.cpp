#include "types.h"

namespace P2JME {

/*
 * --INFO--
 * Address:	8043D32C
 * Size:	000048
 */
void convertU64ToMessageID(unsigned long long, unsigned long*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r7,r4,8,0,23
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r3,8,0,23
	  rlwimi    r0,r4,8,24,31
	  stw       r3, 0x8(r1)
	  addi      r3, r1, 0x8
	  stw       r4, 0xC(r1)
	  mr        r4, r5
	  mr        r5, r6
	  stw       r7, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        .loc_0x48
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x48:
	*/
}

/*
 * --INFO--
 * Address:	8043D374
 * Size:	000128
 */
void convertCharToMessageID(char*, unsigned long*, unsigned long*)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lis       r6, 0x804A
	  stw       r0, 0x0(r5)
	  addi      r7, r6, 0x6BF0
	  stw       r0, 0x0(r4)
	  lbz       r8, 0x0(r3)
	  extsb     r8, r8
	  rlwinm    r0,r8,0,24,31
	  lbzx      r0, r7, r0
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x40
	  lwz       r0, 0x0(r4)
	  mulli     r6, r0, 0xA
	  subi      r0, r6, 0x30
	  add       r0, r8, r0
	  stw       r0, 0x0(r4)

	.loc_0x40:
	  lbz       r8, 0x1(r3)
	  extsb     r8, r8
	  rlwinm    r0,r8,0,24,31
	  lbzx      r0, r7, r0
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x6C
	  lwz       r0, 0x0(r4)
	  mulli     r6, r0, 0xA
	  subi      r0, r6, 0x30
	  add       r0, r8, r0
	  stw       r0, 0x0(r4)

	.loc_0x6C:
	  lbz       r8, 0x2(r3)
	  extsb     r8, r8
	  rlwinm    r0,r8,0,24,31
	  lbzx      r0, r7, r0
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x98
	  lwz       r0, 0x0(r4)
	  mulli     r6, r0, 0xA
	  subi      r0, r6, 0x30
	  add       r0, r8, r0
	  stw       r0, 0x0(r4)

	.loc_0x98:
	  lbz       r8, 0x3(r3)
	  extsb     r8, r8
	  rlwinm    r0,r8,0,24,31
	  lbzx      r0, r7, r0
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0xC4
	  lwz       r0, 0x0(r4)
	  mulli     r6, r0, 0xA
	  subi      r0, r6, 0x30
	  add       r0, r8, r0
	  stw       r0, 0x0(r4)

	.loc_0xC4:
	  lbz       r7, 0x5(r3)
	  lis       r4, 0x804A
	  addi      r6, r4, 0x6BF0
	  extsb     r7, r7
	  rlwinm    r0,r7,0,24,31
	  lbzx      r0, r6, r0
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0xF8
	  lwz       r0, 0x0(r5)
	  mulli     r4, r0, 0xA
	  subi      r0, r4, 0x30
	  add       r0, r7, r0
	  stw       r0, 0x0(r5)

	.loc_0xF8:
	  lbz       r7, 0x6(r3)
	  extsb     r7, r7
	  rlwinm    r0,r7,0,24,31
	  lbzx      r0, r6, r0
	  rlwinm.   r0,r0,0,27,27
	  beqlr-
	  lwz       r0, 0x0(r5)
	  mulli     r4, r0, 0xA
	  subi      r0, r4, 0x30
	  add       r0, r7, r0
	  stw       r0, 0x0(r5)
	  blr
	*/
}
} // namespace P2JME
