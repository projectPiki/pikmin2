#include "Game/PikiContainer.h"
#include "Dolphin/os.h"
#include "Game/Piki.h"
#include "P2Macros.h"
#include "types.h"

#define CONTAINER_LENGTH (PikiColorCount * PikiGrowthStageCount)

static const char fakeMatch__UnitName[] = "pikiContainer";

namespace Game {
/**
 * @note Address: 0x801F1240
 * @note Size: 0x4C
 */
PikiContainer::PikiContainer()
{
	mContainer = new int[CONTAINER_LENGTH];
	clear();
}

/**
 * @note Address: 0x801F128C
 * @note Size: 0x6C
 */
void PikiContainer::clear()
{
	for (u32 i = 0; i < CONTAINER_LENGTH; i++) {
		mContainer[i] = 0;
	}
}

/**
 * as__
 * @note Address: 0x801F12F8
 * @note Size: 0xB0
 */
void PikiContainer::operator=(Game::PikiContainer& other)
{
	for (int i = 0; i < CONTAINER_LENGTH; i++) {
		mContainer[i] = other.mContainer[i];
	}
}

/**
 * @param sourceOfCall A string loosely identifying the caller in some way.
 * @note Address: 0x801F13A8
 * @note Size: 0x74
 */
void PikiContainer::dump(char* sourceOfCall)
{
#if DEBUG
	OSReport("PikiContainer::dump (from %s):\n", sourceOfCall);
#endif
	for (int type = 0; type < PikiColorCount; type++) {
		int colorTotal = getColorSum(type);
		int colorHappa[PikiGrowthStageCount];
		for (int happa = 0; happa < PikiGrowthStageCount; happa++) {
			colorHappa[happa] = getCount(type, happa);
		}
#if DEBUG
		OSReport("\tType %d: %d + %d + %d = %d\n", type, colorHappa[0], colorHappa[1], colorHappa[2], colorTotal);
#endif
	}
}

/**
 * @note Address: 0x801F141C
 * @note Size: 0xC8
 */
int& PikiContainer::getCount(int color, int headType)
{
	P2ASSERTBOUNDSLINE(95, 0, color, PikiColorCount);
	P2ASSERTBOUNDSLINE(96, 0, headType, PikiGrowthStageCount);
	return mContainer[headType + color * PikiGrowthStageCount];
}

/**
 * cl__
 * @note Address: 0x801F14E4
 * @note Size: 0xCC
 */
int& PikiContainer::operator()(Game::Piki* p)
{
	int happa = p->mHappaKind;
	int type  = p->mPikiKind;
	return getCount(type, happa);
}

/**
 * @note Address: 0x801F15B0
 * @note Size: 0xD4
 */
int PikiContainer::getColorSum(int type)
{
	int sum = 0;
	for (int happa = 0; happa < PikiGrowthStageCount; happa++) {
		sum += getCount(type, happa);
	}
	return sum;
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
int PikiContainer::getHappaSum(int happa)
{
	// UNUSED FUNCTION
	int sum = 0;
	for (int type = 0; type < PikiColorCount; type++) {
		sum += getCount(type, happa);
	}
	return sum;
}

/**
 * @note Address: 0x801F1684
 * @note Size: 0xE4
 */
int PikiContainer::getTotalSum()
{
	int sum = 0;
	for (int happa = 0; happa < PikiGrowthStageCount; happa++) {
		for (int type = 0; type < PikiColorCount; type++) {
			sum += getCount(type, happa);
		}
	}
	return sum;
}

/**
 * @note Address: 0x801F1768
 * @note Size: 0x134
 */
void PikiContainer::write(Stream& output)
{
	char buffer[256];
	output.textWriteTab(output.mTabCount);
	output.textWriteText("# PikiCounter\r\n");
	for (int col = 0; col < PikiColorCount; col++) {
		for (int happa = 0; happa < PikiGrowthStageCount; happa++) {
			output.textWriteTab(output.mTabCount);
			output.writeInt(getCount(col, happa));
			sprintf(buffer, "\t# col%d happa%d\r\n", col, happa);
			output.textWriteText(buffer);
		}
	}
}

/**
 * @note Address: 0x801F189C
 * @note Size: 0x6C
 */
void PikiContainer::read(Stream& input)
{
	for (int i = 0; i < CONTAINER_LENGTH; i++) {
		mContainer[i] = input.readInt();
	}
}
} // namespace Game
