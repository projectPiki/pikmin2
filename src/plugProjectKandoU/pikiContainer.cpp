#include "Game/PikiContainer.h"
#include "Dolphin/os.h"
#include "Dolphin/stl.h"
#include "Game/Piki.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"

#define CONTAINER_LENGTH (PikiColorCount * PikiGrowthStageCount)

static const char fakeMatch__UnitName[] = "pikiContainer";

namespace Game {
/*
 * --INFO--
 * Address:	801F1240
 * Size:	00004C
 */
PikiContainer::PikiContainer()
{
	m_container = new int[CONTAINER_LENGTH];
	clear();
}

/*
 * --INFO--
 * Address:	801F128C
 * Size:	00006C
 */
void PikiContainer::clear()
{
	for (u32 i = 0; i < CONTAINER_LENGTH; i++) {
		m_container[i] = 0;
	}
}

/*
 * as__
 * --INFO--
 * Address:	801F12F8
 * Size:	0000B0
 */
void PikiContainer::operator=(Game::PikiContainer& other)
{
	for (int i = 0; i < CONTAINER_LENGTH; i++) {
		m_container[i] = other.m_container[i];
	}
}

/**
 * @param sourceOfCall A string loosely identifying the caller in some way.
 * --INFO--
 * Address:	801F13A8
 * Size:	000074
 */
void PikiContainer::dump(char* sourceOfCall)
{
#if DEBUG
	OSReport("PikiContainer::dump (from %s):\n", sourceOfCall);
#endif
	for (int type = 0; type < PikiColorCount; type++) {
		int colorTotal = getColorSum(type);
		int colorHappa[3];
		for (int happa = 0; happa < PikiGrowthStageCount; happa++) {
			colorHappa[happa] = getCount(type, happa);
		}
#if DEBUG
		OSReport("\tType %d: %d + %d + %d = %d\n", type, colorHappa[0], colorHappa[1], colorHappa[2], colorTotal);
#endif
	}
}

/*
 * --INFO--
 * Address:	801F141C
 * Size:	0000C8
 */
int& PikiContainer::getCount(int color, int headType)
{
	P2ASSERTBOUNDSLINE(95, 0, color, 7);
	P2ASSERTBOUNDSLINE(96, 0, headType, 3);
	return m_container[headType + color * PikiGrowthStageCount];
}

/*
 * cl__
 * --INFO--
 * Address:	801F14E4
 * Size:	0000CC
 */
int& PikiContainer::operator()(Game::Piki* p)
{
	int happa = p->m_happaKind;
	int type  = p->m_pikiKind;
	return getCount(type, happa);
}

/*
 * --INFO--
 * Address:	801F15B0
 * Size:	0000D4
 */
int PikiContainer::getColorSum(int type)
{
	int sum = 0;
	for (int happa = 0; happa < PikiGrowthStageCount; happa++) {
		sum += getCount(type, happa);
	}
	return sum;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
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

/*
 * --INFO--
 * Address:	801F1684
 * Size:	0000E4
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

/*
 * --INFO--
 * Address:	801F1768
 * Size:	000134
 */
void PikiContainer::write(Stream& output)
{
	char buffer[256];
	output.textWriteTab(output.m_tabCount);
	output.textWriteText("# PikiCounter\r\n");
	for (int col = 0; col < PikiColorCount; col++) {
		for (int happa = 0; happa < PikiGrowthStageCount; happa++) {
			output.textWriteTab(output.m_tabCount);
			output.writeInt(getCount(col, happa));
			sprintf(buffer, "\t# col%d happa%d\r\n", col, happa);
			output.textWriteText(buffer);
		}
	}
}

/*
 * --INFO--
 * Address:	801F189C
 * Size:	00006C
 */
void PikiContainer::read(Stream& input)
{
	for (int i = 0; i < CONTAINER_LENGTH; i++) {
		m_container[i] = input.readInt();
	}
}
} // namespace Game
