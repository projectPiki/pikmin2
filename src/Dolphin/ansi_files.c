#include "types.h"

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;
typedef struct _IO_FILE FILE;
extern int fflush(FILE* __stream);

static FILE __files;

struct _IO_FILE {
	u16 _00;
	u16 _02;
	u16 _04;
	u8 _05;
	char* _08;
	u8 _0C;
	char* _10;
	char* _14;
	char* _18;
	char* _1C;
	char* _20;
	char* _24;
	char* _28;
	char* _2C;
	u32 _30;
	u32 _34;
	u32 _38;
	u32 _3C;
	u16 _40;
	char _42;
	u32 _44;
	s32 _48;
	struct _IO_FILE* _chain; // _4C
};

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void __flush_line_buffered_output_files(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C2A04
 * Size:	000070
 */

u32 __flush_all(void)
{
	u32 retval = 0;
	FILE* __stream;
	__stream = &__files;
	while (__stream) {
		if ((__stream->_04 >> 6 & 7) && (fflush(__stream))) {
			retval = -1;
		}
		__stream = __stream->_chain;
	};
	return retval;
}

/*
 * --INFO--
 * Address:	800C2A74
 * Size:	0000A8
 */
void __close_all(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  li        r3, 0x2
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x6948
	  stw       r31, 0xC(r1)
	  mr        r31, r0
	  bl        0x37C8
	  b         .loc_0x84

	.loc_0x28:
	  lhz       r0, 0x4(r31)
	  rlwinm.   r0,r0,26,29,31
	  beq-      .loc_0x3C
	  mr        r3, r31
	  bl        0x3C9C

	.loc_0x3C:
	  mr        r3, r31
	  lwz       r31, 0x4C(r31)
	  lbz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  bl        -0x574
	  b         .loc_0x84

	.loc_0x58:
	  lhz       r0, 0x4(r3)
	  li        r4, 0x3
	  rlwimi    r0,r4,6,23,25
	  cmplwi    r31, 0
	  sth       r0, 0x4(r3)
	  beq-      .loc_0x84
	  lbz       r0, 0xC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x84
	  li        r0, 0
	  stw       r0, 0x4C(r3)

	.loc_0x84:
	  cmplwi    r31, 0
	  bne+      .loc_0x28
	  li        r3, 0x2
	  bl        0x3754
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
 * Size:	0000DC
 */
void __init_file(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void __find_unopened_file(void)
{
	// UNUSED FUNCTION
}
