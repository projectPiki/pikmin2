#include "types.h"

#define WRITE(dst, add, n_dst, n_src) ((u##n_dst*)dst) = ((u##n_dst*)(((u##n_src*)dst) + add)) - 1
#define WRITE_BYTE(dst, add)          WRITE(dst, add, 8, 32)
#define WRITE_WORD(dst, add)          WRITE(dst, add, 32, 8)

DECL_SECT(".init") void* TRK_memcpy(void* dst, const void* src, size_t n);
DECL_SECT(".init") void* TRK_memset(void* dst, int val, size_t n);

/**
 * @note Address: 0x800BDDF0
 * @note Size: 0xB8
 */
#pragma dont_inline on
void TRK_fill_mem(void* dst, int val, size_t n)
{
	u32 v = (u8)val;
	u32 i, j;

	WRITE_BYTE(dst, 0);

	if (n >= 32) {
		i = (~(u32)dst) & 3;

		if (i) {
			n -= i;

			do {
				*++(((u8*)dst)) = v;
			} while (--i);
		}

		if (v)
			v |= v << 24 | v << 16 | v << 8;

		WRITE_WORD(dst, 4);
		WRITE_WORD(dst, 1);

		i = n / 32;

		if (i) {
			do {
				for (j = 0; j < 8; j++)
					*++((u32*)dst) = v;
			} while (--i);
		}

		i = (n / 4) % 8;

		if (i) {
			do {
				*++((u32*)dst) = v;
			} while (--i);
		}

		WRITE_BYTE(dst, 1);

		n %= 4;
	}

	if (n)
		do {
			*++((u8*)dst) = v;
		} while (--n);

	return;
}
#pragma dont_inline reset

void* TRK_memcpy(void* dst, const void* src, size_t n)
{
	const u8* s = (const u8*)src - 1;
	u8* d       = (u8*)dst - 1;

	n++;
	while (--n != 0)
		*++d = *++s;
	return dst;
}

void* TRK_memset(void* dst, int val, size_t n)
{
	TRK_fill_mem(dst, val, n);
	return dst;
}
