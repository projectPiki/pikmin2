#include "JSystem/JStudio/object.h"
#include "types.h"

namespace JStudio {

/**
 * @note Address: 0x80010188
 * @note Size: 0xF0
 */
bool object::TIDData::isEqual(JStudio::object::TIDData const& a, JStudio::object::TIDData const& b)
{
	if (a.getIDSize() != b.getIDSize()) {
		return false;
	}

	u32 bytesRemaining = a.mLength;
	const void* aStr   = a.getID();
	const void* bStr   = b.getID();
	u32* aStr32        = (u32*)aStr;
	u32* bStr32        = (u32*)bStr;
	if (aStr == bStr) { // mismatch here
		// they point to the same id
		return true;
	}

	for (bytesRemaining; bytesRemaining >= 4; bytesRemaining -= 4, aStr32++, bStr32++) {
		if (*aStr32 != *bStr32) {
			return false;
		}
	}

	u8* aStrBytes = (u8*)aStr32;
	u8* bStrBytes = (u8*)bStr32;
	switch (bytesRemaining) {
	case 3:
		if (*aStrBytes != *bStrBytes) {
			return false;
		}
		aStrBytes++;
		bStrBytes++;
	case 2:
		if (*aStrBytes != *bStrBytes) {
			return false;
		}
		aStrBytes++;
		bStrBytes++;
	case 1:
		if (*aStrBytes != *bStrBytes) {
			return false;
		}
	}

	return true;
}
} // namespace JStudio
