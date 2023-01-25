#include "types.h"
#include "GameFlow.h"
#include "BootSection.h"
#include "Demo.h"
#include "Game/SingleGameSection.h"
#include "Game/VsGameSection.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTException.h"
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
	{ "Fujino", 0x1A010100 },
	{ "Ebisawa", 0x0F010000 },
	{ "Cave Editor", 0x06010000 },
	{ "JStudio CameraEditor", 0x07010000 },
	{ "Movie Test", 0x06010000 },
	{ "JStudio Kando Test", 0x07010000 },
	{ "Pellet Test", 0x06010000 },
	{ "Boot", 0x15000000 },
	{ "Main Title", 0x07010000 },
	{ "Demo", 0x17010000 },
	{ "Message Previewer", 0x06010000 },
	{ "Ebi Main Title", 0x07010000 },
	{ "E3 Thanks Section", 0x06010000 },
	{ "VS Game", 0x1E010000 },
	{ "Ebimun Effect", 0x07010000 },
	{ "2D Debug2", 0x07010000 },
	{ "EXP_C", 0x21000000 },
	{ "EXP_S", 0x22000000 },
};
} // namespace
u32 GameFlow::mActiveSectionFlag = 1;

/*
 * --INFO--
 * Address:	804241A4
 * Size:	00002C
 */
GameFlow::GameFlow()
{
	mActiveSectionFlag = 21;
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
		JKRHeap* parentHeap = getCurrentHeap();

		JKRHeap::TState state(parentHeap);
		JKRHeap::sCurrentHeap->state_register(&state, -1);
		JKRExpHeap* heap = JKRExpHeap::create(parentHeap->getFreeSize(), parentHeap, true);

		setSection();
		mSection->init();
		mSection->run();
		mSection->exit();

		heap->destroy();
		parentHeap->becomeCurrentHeap();
	}

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r3

lbl_804241EC:
	lwz      r31, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r0, 0
	stw      r0, 8(r1)
	cmplwi   r31, 0
	stw      r0, 0xc(r1)
	li       r7, -1
	li       r6, 1
	li       r0, 0
	stw      r31, 0x18(r1)
	mr       r3, r31
	addi     r4, r1, 8
	stw      r7, 0x1c(r1)
	li       r5, -1
	stb      r6, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r7, 0x28(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r31
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	mr       r30, r3
	mr       r3, r29
	bl       setSection__8GameFlowFv
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r29)
	bl       exit__7SectionFv
	mr       r3, r30
	bl       destroy__7JKRHeapFv
	mr       r3, r31
	bl       becomeCurrentHeap__7JKRHeapFv
	addi     r3, r1, 8
	li       r4, -1
	bl       __dt__Q27JKRHeap6TStateFv
	b        lbl_804241EC
	*/
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
	case 0x15:
		mSection           = new BootSection(JKRHeap::sCurrentHeap);
		mActiveSectionFlag = 0;
		break;
	case 0x00:
		mSection           = new RootMenuSection(JKRHeap::sCurrentHeap);
		mActiveSectionFlag = 0x16;
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
void* GameFlow::getSectionInfo(int id)
{
	void* sectionInfo = nullptr;

	P2ASSERTBOUNDSLINE(201, 0, id, 0x23);

	for (u32 i = 0; i < 0x23; i++) {
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
	case 0x17:
		section = new Demo::Section(heap);
		break;
	case 0x16:
		section = new Title::Section(heap);
		break;
	case 0x2:
		section = new Game::SingleGameSection(heap);
		break;
	case 0x3:
		section = new Game::VsGameSection(heap, false);
		break;
	case 0x1E:
		section = new Game::VsGameSection(heap, true);
		break;
	default:
		section = new Title::Section(heap);
		break;
	}

	mActiveSectionFlag = 22;
	return section;
}

/*
 * --INFO--
 * Address:	80424564
 * Size:	000040
 */
ISection* GameFlow::getCurrentSection() { return (mSection) ? mSection->getCurrentSection() : nullptr; }
