#include "Game/PikiContainer.h"
#include "Dolphin/os.h"
#include "Dolphin/stl.h"
#include "Game/Piki.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80481428
    lbl_80481428:
        .4byte 0x70696B69
        .4byte 0x436F6E74
        .4byte 0x61696E65
        .4byte 0x72000000
    .global lbl_80481438
    lbl_80481438:
        .4byte 0x70696B69
        .4byte 0x436F6E74
        .4byte 0x61696E65
        .4byte 0x722E6370
        .4byte 0x70000000
    .global lbl_8048144C
    lbl_8048144C:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x23205069
        .4byte 0x6B69436F
        .4byte 0x756E7465
        .4byte 0x720D0A00
        .4byte 0x09232063
        .4byte 0x6F6C2564
        .4byte 0x20686170
        .4byte 0x70612564
        .4byte 0x0D0A0000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game13PikiContainer
    __vt__Q24Game13PikiContainer:
        .4byte 0
        .4byte 0
        .4byte read__Q24Game13PikiContainerFR6Stream
        .4byte write__Q24Game13PikiContainerFR6Stream
*/

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
	// const char* colNames[7] = { nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr };
	// const char* happaNames[3] = { nullptr, nullptr, nullptr };
	m_container = new int[CONTAINER_LENGTH];
	// m_container = new int[PikiColorCount][PikiGrowthStageCount];
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
int& PikiContainer::getCount(int type, int happa)
{
	P2ASSERTBOUNDSLINE(95, 0, type, 7);
	P2ASSERTBOUNDSLINE(96, 0, happa, 3);
	return m_container[happa + type * PikiGrowthStageCount];
}

/*
 * cl__
 * --INFO--
 * Address:	801F14E4
 * Size:	0000CC
 */
int& PikiContainer::operator()(Game::Piki* piki)
{
	int happa = piki->m_pikminGrowth;
	int type  = piki->m_pikminType;
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
	for (int type = 0; type < PikiColorCount; type++) {
		for (int happa = 0; happa < PikiGrowthStageCount; happa++) {
			output.textWriteTab(output.m_tabCount);
			output.writeInt(getCount(type, happa));
			sprintf(buffer, "\t# col%d happa%d\r\n", type, happa);
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
