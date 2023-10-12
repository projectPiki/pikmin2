#include "types.h"
#include "GameFlow.h"
#include "BootSection.h"
#include "Demo.h"
#include "Game/SingleGameSection.h"
#include "Game/VsGameSection.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "P2Macros.h"
#include "RootMenuSection.h"
#include "Title.h"
#include "nans.h"

// NOTE: Fabricated struct name.
namespace {
static SectionInfo sSectionInfo[] = {
	{ "Root Menu", 0x00000000 },
	{ "Object Editor", 0x01010000 },
	{ "Single Game", 0x02010000 },
	{ "Challenge Game", 0x03010000 },
	{ "Test Challenge", 0x04010100 },
	{ "Teki Test", 0x05010000 },
	{ "Anim Editor", 0x06010000 },
	{ "Map Parts Editor", 0x07010000 },
	{ "Tex Viewer", 0x08010000 },
	{ "Ogawa", 0x09010000 },
	{ "Ogawa Screen Test", 0x1C010000 },
	{ "Hikino", 0x0A010000 },
	{ "Yamashita", 0x0B010000 },
	{ "Nishimura", 0x0C010000 },
	{ "Nishimura2", 0x0D010000 },
	{ "Morimura", 0x0E010000 },
	{ "2D Debug", 0x1A010100 },
	{ "Fujino", 0x1B010000 },
	{ "Ebisawa", 0x0F010000 },
	{ "Cave Editor", 0x10010000 },
	{ "JStudio CameraEditor", 0x11010000 },
	{ "Movie Test", 0x12010000 },
	{ "JStudio Kando Test", 0x13010000 },
	{ "Pellet Test", 0x14010000 },
	{ "Boot", 0x15000000 },
	{ "Main Title", 0x16010000 },
	{ "Demo", 0x17010000 },
	{ "Message Previewer", 0x18010100 },
	{ "Ebi Main Title", 0x19010000 },
	{ "E3 Thanks Section", 0x1D010000 },
	{ "VS Game", 0x1E010000 },
	{ "Ebimun Effect", 0x1F010000 },
	{ "2D Debug2", 0x20010100 },
	{ "EXP_C", 0x21000000 },
	{ "EXP_S", 0x22000000 },
};
} // namespace
u32 GameFlow::mActiveSectionFlag = Boot;

/*
 * --INFO--
 * Address:	804241A4
 * Size:	00002C
 */
GameFlow::GameFlow()
{
	mActiveSectionFlag = Boot;
	mSection           = nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 * Matches size.
 */
GameFlow::~GameFlow() { }

/*
 * --INFO--
 * Address:	804241D0
 * Size:	0000DC
 */
void GameFlow::run()
{
	while (true) {
		runGame();
	}
}

/*
 * --INFO--
 * Address:	804242AC
 * Size:	0000C0
 */
void GameFlow::setSection()
{
	JKRHeap::sCurrentHeap->getFreeSize();

	switch (mActiveSectionFlag) {
	case Boot:
		mSection           = new BootSection(JKRHeap::sCurrentHeap);
		mActiveSectionFlag = RootMenu;
		break;
	case RootMenu:
		mSection           = new RootMenuSection(JKRHeap::sCurrentHeap);
		mActiveSectionFlag = MainTitle;
		break;
	default:
		JUT_PANICLINE(188, "Unknown SectionFlag. %d \n", mActiveSectionFlag);
		break;
	}
}

/*
 * --INFO--
 * Address:	8042436C
 * Size:	0000B0
 */
SectionInfo* GameFlow::getSectionInfo(int id)
{
	SectionInfo* sectionInfo = nullptr;

	P2ASSERTBOUNDSLINE(201, 0, id, SECTION_COUNT);

	for (u32 i = 0; i < SECTION_COUNT; i++) {
		if (id == sSectionInfo[i].id.mSectionId) {
			sectionInfo = &sSectionInfo[i];
			break;
		}
	}

	return sectionInfo;
}

/*
 * --INFO--
 * Address:	8042441C
 * Size:	000148
 */
ISection* GameFlow::createSection(JKRHeap* heap)
{
	ISection* section;
	switch (mActiveSectionFlag) {
	case Demo:
		section = new Demo::Section(heap);
		break;
	case MainTitle:
		section = new Title::Section(heap);
		break;
	case SingleGame:
		section = new Game::SingleGameSection(heap);
		break;
	case ChallengeGame:
		section = new Game::VsGameSection(heap, false);
		break;
	case VSGame:
		section = new Game::VsGameSection(heap, true);
		break;
	default:
		section = new Title::Section(heap);
		break;
	}

	mActiveSectionFlag = MainTitle;
	return section;
}
