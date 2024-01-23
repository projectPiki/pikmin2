#include "JSystem/JAudio/JAS/JASCalc.h"
#include "Dolphin/os.h"

namespace JASCalc {

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void mixcopy(const s16*, const s16*, s16*, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A5EBC
 * @note Size: 0xD4
 */
void imixcopy(const s16* s1, const s16* s2, s16* dst, u32 n)
{
	for (n; n != 0; n--) {
		*dst++ = *((s16*)s1)++; // could this use const_cast?
		*dst++ = *((s16*)s2)++;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
void bcopyfast(const void* src, void* dest, u32 size)
{
	u32 copy1, copy2, copy3, copy4;

	u32* usrc  = (u32*)src;
	u32* udest = (u32*)dest;

	for (size = size / (4 * sizeof(u32)); size != 0; size--) {
		copy1 = *((u32*)usrc)++;
		copy2 = *((u32*)usrc)++;
		copy3 = *((u32*)usrc)++;
		copy4 = *((u32*)usrc)++;

		*udest++ = copy1;
		*udest++ = copy2;
		*udest++ = copy3;
		*udest++ = copy4;
	}
}

/**
 * @note Address: 0x800A5F90
 * @note Size: 0x2D4
 */
void bcopy(const void* src, void* dest, u32 size)
{
	u32* usrc;
	u32* udest;

	u8* bsrc  = (u8*)src;
	u8* bdest = (u8*)dest;

	u8 endbitsSrc = (reinterpret_cast<u32>(bsrc) & 0x03);
	u8 enbitsDst  = (reinterpret_cast<u32>(bdest) & 0x03);
	if ((endbitsSrc) == (enbitsDst) && (size & 0x0f) == 0) {
		bcopyfast(src, dest, size);
	} else if ((endbitsSrc == enbitsDst) && (size >= 16)) {
		if (endbitsSrc != 0) {
			for (endbitsSrc = 4 - endbitsSrc; endbitsSrc != 0; endbitsSrc--) {
				*bdest++ = (u32)*bsrc++;
				size--;
			}
		}

		udest = (u32*)bdest;
		usrc  = (u32*)bsrc;

		for (; size >= 4; size -= 4) {
			*udest++ = *usrc++;
		}

		if (size != 0) {
			bdest = (u8*)udest;
			bsrc  = (u8*)usrc;

			for (; size != 0; size--) {
				*bdest++ = (u32)*bsrc++;
			}
		}
	} else {
		for (; size != 0; size--) {
			*bdest++ = (u32)*bsrc++;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
void bzerofast(void* dest, u32 size)
{
	u32* udest = (u32*)dest;

	for (size = size / (4 * sizeof(u32)); size != 0; size--) {
		*udest++ = 0;
		*udest++ = 0;
		*udest++ = 0;
		*udest++ = 0;
	}
}

/**
 * @note Address: 0x800A6264
 * @note Size: 0x274
 * bzero__7JASCalcFPvUl
 */
void bzero(void* dest, u32 size)
{
	u32* udest;
	u8* bdest = (u8*)dest;
	if ((size & 0x1f) == 0 && (reinterpret_cast<u32>(dest) & 0x1f) == 0) {
		DCZeroRange(dest, size);
		return;
	}

	u8 alignedbitsDst = reinterpret_cast<u32>(bdest) & 0x3;

	if ((size & 0xf) == 0 && alignedbitsDst == 0) {
		bzerofast(dest, size);
		return;
	}

	if (size >= 16) {
		if (alignedbitsDst != 0) {
			for (alignedbitsDst = 4 - alignedbitsDst; alignedbitsDst != 0; alignedbitsDst--) {
				*bdest++ = 0;
				size--;
			}
		}

		udest = (u32*)bdest;
		for (; size >= 4; size -= 4) {
			*udest++ = 0;
		}

		if (size != 0) {
			bdest = (u8*)udest;
			for (; size != 0; size--) {
				*bdest++ = 0;
			}
		}
	} else {
		for (; size != 0; size--) {
			*bdest++ = 0;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x104
 */
void hannWindow(s16*, u32 x)
{
	// UNUSED FUNCTION
}

// required to get clamp to generate
void fake(s32 x) { clamp<s16, s32>(x); }

/**
 * @note Address: N/A
 * @note Size: 0x118
 */
void hammWindow(s16*, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4CC
 */
void fft(f32*, f32*, u32, s32)
{
	// UNUSED FUNCTION
}
} // namespace JASCalc
