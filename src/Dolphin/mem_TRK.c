#include "types.h"

__declspec(section ".init") void* TRK_memcpy(void* dst, const void* src, size_t n);
__declspec(section ".init") void* TRK_memset(void* dst, int val, size_t n);

void TRK_fill_mem(void* dst, int val, size_t n);

void* TRK_memset(void* dst, int val, size_t n)
{
	TRK_fill_mem(dst, val, n);
	return dst;
}

void* TRK_memcpy(void* dst, const void* src, size_t n)
{
	const unsigned char* s = (const unsigned char*)src - 1;
	unsigned char* d       = (unsigned char*)dst - 1;

	n++;
	while (--n != 0)
		*++d = *++s;
	return dst;
}

/*
 * --INFO--
 * Address:	800BDDF0
 * Size:	0000B8
 */
// void TRK_fill_mem(void)
//{
/*
.loc_0x0:
  cmplwi    r5, 0x20
  rlwinm    r4,r4,0,24,31
  subi      r6, r3, 0x1
  mr        r7, r4
  blt-      .loc_0xA0
  not       r0, r6
  rlwinm.   r3,r0,0,30,31
  beq-      .loc_0x30
  sub       r5, r5, r3

.loc_0x24:
  subic.    r3, r3, 0x1
  stbu      r7, 0x1(r6)
  bne+      .loc_0x24

.loc_0x30:
  cmplwi    r7, 0
  beq-      .loc_0x50
  rlwinm    r3,r7,24,0,7
  rlwinm    r0,r7,16,0,15
  rlwinm    r4,r7,8,0,23
  or        r0, r3, r0
  or        r0, r4, r0
  or        r7, r7, r0

.loc_0x50:
  rlwinm.   r4,r5,27,5,31
  subi      r3, r6, 0x3
  beq-      .loc_0x84

.loc_0x5C:
  stw       r7, 0x4(r3)
  subic.    r4, r4, 0x1
  stw       r7, 0x8(r3)
  stw       r7, 0xC(r3)
  stw       r7, 0x10(r3)
  stw       r7, 0x14(r3)
  stw       r7, 0x18(r3)
  stw       r7, 0x1C(r3)
  stwu      r7, 0x20(r3)
  bne+      .loc_0x5C

.loc_0x84:
  rlwinm.   r4,r5,30,29,31
  beq-      .loc_0x98

.loc_0x8C:
  subic.    r4, r4, 0x1
  stwu      r7, 0x4(r3)
  bne+      .loc_0x8C

.loc_0x98:
  addi      r6, r3, 0x3
  rlwinm    r5,r5,0,30,31

.loc_0xA0:
  cmplwi    r5, 0
  beqlr-

.loc_0xA8:
  subic.    r5, r5, 0x1
  stbu      r7, 0x1(r6)
  bne+      .loc_0xA8
  blr
*/
//}
