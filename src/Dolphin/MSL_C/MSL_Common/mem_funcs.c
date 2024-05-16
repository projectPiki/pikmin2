#include "PowerPC_EABI_Support/MSL_C/MSL_Common/mem_funcs.h"

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void __copy_mem(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1FC
 */
void __move_mem(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800C736C
 * @note Size: 0xBC
 */
void __copy_longs_aligned(void* pDest, const void* pSrc, u32 len)
{
	u32 i       = (-(u32)pDest) & 3;
	srcCharPtr  = ((u8*)pSrc) - 1;
	destCharPtr = ((u8*)pDest) - 1;

	if (i != 0) {
		len -= i;

		do {
			*++(destCharPtr) = *++(srcCharPtr);
		} while (--i);
	}

	srcLongPtr  = ((u32*)(srcCharPtr + 1)) - 1;
	destLongPtr = ((u32*)(destCharPtr + 1)) - 1;

	i = len >> 5;

	if (i != 0) {
		do {
			*++(destLongPtr) = *++(srcLongPtr);
			*++(destLongPtr) = *++(srcLongPtr);
			*++(destLongPtr) = *++(srcLongPtr);
			*++(destLongPtr) = *++(srcLongPtr);
			*++(destLongPtr) = *++(srcLongPtr);
			*++(destLongPtr) = *++(srcLongPtr);
			*++(destLongPtr) = *++(srcLongPtr);
			*++(destLongPtr) = *++(srcLongPtr);
		} while (--i);
	}

	i = (len & 31) >> 2;

	if (i != 0) {
		do {
			*++(destLongPtr) = *++(srcLongPtr);
		} while (--i);
	}

	srcCharPtr  = ((u8*)(srcLongPtr + 1)) - 1;
	destCharPtr = ((u8*)(destLongPtr + 1)) - 1;

	len &= 3;

	if (len != 0) {
		do
			*++(destCharPtr) = *++(srcCharPtr);
		while (--len);
	}
}

/**
 * @note Address: 0x800C72C4
 * @note Size: 0xA8
 */
void __copy_longs_rev_aligned(void* pDest, const void* pSrc, u32 len)
{
	u32 i;
	srcCharPtr  = ((u8*)pSrc) + len;
	destCharPtr = ((u8*)pDest) + len;
	i           = ((u32)destCharPtr) & 3;

	if (i != 0) {
		len -= i;

		do {
			*--destCharPtr = *--srcCharPtr;
		} while (--i);
	}

	i = len >> 5;

	if (i != 0) {
		do {
			*--destLongPtr = *--srcLongPtr;
			*--destLongPtr = *--srcLongPtr;
			*--destLongPtr = *--srcLongPtr;
			*--destLongPtr = *--srcLongPtr;
			*--destLongPtr = *--srcLongPtr;
			*--destLongPtr = *--srcLongPtr;
			*--destLongPtr = *--srcLongPtr;
			*--destLongPtr = *--srcLongPtr;
		} while (--i);
	}

	i = (len & 31) >> 2;

	if (i != 0) {
		do {
			*--destLongPtr = *--srcLongPtr;
		} while (--i);
	}

	len &= 3;

	if (len != 0) {
		do {
			*--destCharPtr = *--srcCharPtr;
		} while (--len);
	}
}

/**
 * @note Address: 0x800C7204
 * @note Size: 0xC0
 */
void __copy_longs_unaligned(void* pDest, const void* pSrc, u32 len)
{
	u32 i, v1, v2;
	uint src, ls, rs;

	i           = (-(u32)pDest) & 3;
	srcCharPtr  = ((u8*)pSrc) - 1;
	destCharPtr = ((u8*)pDest) - 1;

	if (i != 0) {
		len -= i;

		do {
			*++destCharPtr = *++srcCharPtr;
		} while (--i);
	}

	src = ((uint)(srcCharPtr + 1)) & 3;
	ls  = src << 3;
	rs  = 32 - ls;

	srcCharPtr -= src;

	srcLongPtr  = ((u32*)(srcCharPtr + 1)) - 1;
	destLongPtr = ((u32*)(destCharPtr + 1)) - 1;

	i  = len >> 3;
	v1 = *++srcLongPtr;

	do {
		v2             = *++srcLongPtr;
		*++destLongPtr = (v1 << ls) | (v2 >> rs);
		v1             = *++srcLongPtr;
		*++destLongPtr = (v2 << ls) | (v1 >> rs);
	} while (--i);

	if (len & 4) {
		v2             = *++srcLongPtr;
		*++destLongPtr = (v1 << ls) | (v2 >> rs);
	}

	srcCharPtr  = ((u8*)(srcLongPtr + 1)) - 1;
	destCharPtr = ((u8*)(destLongPtr + 1)) - 1;

	len &= 3;

	if (len != 0) {
		srcCharPtr -= 4 - src;
		do {
			*++destCharPtr = *++srcCharPtr;
		} while (--len);
	}
}

/**
 * @note Address: 0x800C7158
 * @note Size: 0xAC
 */
void __copy_longs_rev_unaligned(void* pDest, const void* pSrc, u32 len)
{
	u32 i, v1, v2;
	uint src, ls, rs;

	srcCharPtr  = ((u8*)pSrc) + len;
	destCharPtr = ((u8*)pDest) + len;
	i           = ((u32)pDest) & 3;

	if (i != 0) {
		len -= i;

		do {
			*--destCharPtr = *--srcCharPtr;
		} while (--i);
	}

	src = ((uint)(srcCharPtr)) & 3;
	ls  = src << 3;
	rs  = 32 - ls;

	srcCharPtr += 4 - src;

	i  = len >> 3;
	v1 = *--srcLongPtr;

	do {
		v2             = *--srcLongPtr;
		*--destLongPtr = (v2 << ls) | (v1 >> rs);
		v1             = *--srcLongPtr;
		*--destLongPtr = (v1 << ls) | (v2 >> rs);
	} while (--i);

	if (len & 4) {
		v2             = *--srcLongPtr;
		*--destLongPtr = (v2 << ls) | (v1 >> rs);
	}

	len &= 3;

	if (len != 0) {
		srcCharPtr += src;
		do {
			*--destCharPtr = *--srcCharPtr;
		} while (--len);
	}
}
