#include "types.h"

/*
 * --INFO--
 * Address:	800177D0
 * Size:	00001C
 */
JUTTexture::JUTTexture()
{
	/*
	.loc_0x0:
	  lbz       r4, 0x3B(r3)
	  li        r0, 0
	  rlwinm    r4,r4,0,30,30
	  stb       r4, 0x3B(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x20(r3)
	  blr
	*/
}
