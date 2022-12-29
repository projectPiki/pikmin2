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

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_gameflow_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    str_RootMenu:
        .asciz "Root Menu"
        .skip 2
    str_objedit:
        .asciz "Object Editor"
        .skip 2
    str_sgame:
        .asciz "Single Game"
    str_cgame:
        .asciz "Challenge Game"
        .skip 1
    str_test_challenge:
        .asciz "Test Challenge"
        .skip 1
    str_test_teki:
        .asciz "Teki Test"
        .skip 2
    str_animEdit:
        .asciz "Anim Editor"
    str_mapEdit:
        .asciz "Map Parts Editor"
        .skip 3
    str_texview:
        .asciz "Tex Viewer"
        .skip 1
    str_ogtest:
        .asciz "Ogawa Screen Test"
        .skip 2
    str_yamashita:
        .asciz "Yamashita"
        .skip 2
    str_nishimura:
        .asciz "Nishimura"
        .skip 2
    str_nishimura2:
        .asciz "Nishimura2"
        .skip 1
    str_morimura:
        .asciz "Morimura"
        .skip 3
    str_2D_Debug:
        .asciz "2D Debug"
        .skip 3
    str_caveEditor:
        .asciz "Cave Editor"
    str_cameraEditor:
        .asciz "JStudio CameraEditor"
        .skip 3
    str_movieTest:
        .asciz "Movie Test"
        .skip 1
    str_kandoTest:
        .asciz "JStudio Kando Test"
        .skip 1
    str_pelletTest:
        .asciz "Pellet Test"
    str_mainTitle:
        .asciz "Main Title"
        .skip 1
    str_msgPreviewer:
        .asciz "Message Previewer"
        .skip 2
    str_ebiMainTitle:
        .asciz "Ebi Main Title"
        .skip 1
    str_E3_Thanks:
        .asciz "E3 Thanks Section"
        .skip 2
    str_ebimunEff:
        .asciz "Ebimun Effect"
        .skip 2
    str_2D_Debug2:
        .asciz "2D Debug2"
        .skip 2
    .global lbl_80499BC8
    lbl_80499BC8:
        .asciz "gameflow.cpp"
        .skip 3
    .global lbl_80499BD8
    lbl_80499BD8:
        .asciz "Unknown SectionFlag. %d \n"
        .skip 2
    .global lbl_80499BF4
    lbl_80499BF4:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EBBF0
    lbl_804EBBF0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global "sSectionInfo__22@unnamed@gameflow_cpp@"
    "sSectionInfo__22@unnamed@gameflow_cpp@":
        .4byte str_RootMenu
        .4byte 0x00000000
        .4byte str_objedit
        .4byte 0x01010000
        .4byte str_sgame
        .4byte 0x02010000
        .4byte str_cgame
        .4byte 0x03010000
        .4byte str_test_challenge
        .4byte 0x04010100
        .4byte str_test_teki
        .4byte 0x05010000
        .4byte str_animEdit
        .4byte 0x06010000
        .4byte str_mapEdit
        .4byte 0x07010000
        .4byte str_texview
        .4byte 0x08010000
        .4byte str_Ogawa
        .4byte 0x09010000
        .4byte str_ogtest
        .4byte 0x1C010000
        .4byte str_Hikino
        .4byte 0x0A010000
        .4byte str_yamashita
        .4byte 0x0B010000
        .4byte str_nishimura
        .4byte 0x0C010000
        .4byte str_nishimura2
        .4byte 0x0D010000
        .4byte str_morimura
        .4byte 0x0E010000
        .4byte str_2D_Debug
        .4byte 0x1A010100
        .4byte str_Fujino
        .4byte 0x1B010000
        .4byte str_Ebisawa
        .4byte 0x0F010000
        .4byte str_caveEditor
        .4byte 0x10010000
        .4byte str_cameraEditor
        .4byte 0x11010000
        .4byte str_movieTest
        .4byte 0x12010000
        .4byte str_kandoTest
        .4byte 0x13010000
        .4byte str_pelletTest
        .4byte 0x14010000
        .4byte str_boot
        .4byte 0x15000000
        .4byte str_mainTitle
        .4byte 0x16010000
        .4byte str_demo
        .4byte 0x17010000
        .4byte str_msgPreviewer
        .4byte 0x18010100
        .4byte str_ebiMainTitle
        .4byte 0x19010000
        .4byte str_E3_Thanks
        .4byte 0x1D010000
        .4byte str_vsgame
        .4byte 0x1E010000
        .4byte str_ebimunEff
        .4byte 0x1F010000
        .4byte str_2D_Debug2
        .4byte 0x20010100
        .4byte str_exp_c
        .4byte 0x21000000
        .4byte str_exp_s
        .4byte 0x22000000
    .global __vt__8GameFlow
    __vt__8GameFlow:
        .4byte 0
        .4byte 0
        .4byte run__8GameFlowFv
        .4byte getCurrentSection__8GameFlowFv
    .global __vt__11ISectionMgr
    __vt__11ISectionMgr:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte getCurrentSection__11ISectionMgrFv
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global mActiveSectionFlag__8GameFlow
    mActiveSectionFlag__8GameFlow:
        .4byte 0x00000015

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516188
    lbl_80516188:
        .skip 0x4
    .global lbl_8051618C
    lbl_8051618C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    str_Ogawa:
        .asciz "Ogawa"
        .skip 0x2
    str_Hikino:
        .asciz "Hikino"
        .skip 0x1
    str_Fujino:
        .asciz "Fujino"
        .skip 0x1
    str_Ebisawa:
        .asciz "Ebisawa"
    str_boot:
        .asciz "Boot"
        .skip 0x3
    str_demo:
        .asciz "Demo"
        .skip 0x3
    str_vsgame:
        .asciz "VS Game"
    str_exp_c:
        .asciz "EXP_C"
        .skip 0x2
    str_exp_s:
        .asciz "EXP_S"
        .skip 0x2
*/

// TODO: Finish
// NOTE: Fabricated name.
namespace {
static SectionInfo sSectionInfo[] = { { "Root Menu", 0x00000000 },         { "Object Editor", 0x01010000 },
	                                  { "Single Game", 0x02010000 },       { "Challenge Game", 0x03010000 },
	                                  { "Test Challenge", 0x04010100 },    { "Teki Test", 0x05010000 },
	                                  { "Anim Editor", 0x06010000 },       { "Map Parts Editor", 0x07010000 },
	                                  { "Tex Viewer", 0x08010000 },        { "Ogawa", 0x09010000 },
	                                  { "Ogawa Screen Test", 0x1C010000 }, { "Hikino", 0x0A010000 },
	                                  { "Yamashita", 0x0B010000 },         { "Nishimura", 0x0C010000 },
	                                  { "Nishimura2", 0x0D010000 },        { "Morimura", 0x0E010000 },
	                                  { "2D Debug", 0x1A010100 },          { "Fujino", 0x1A010100 },
	                                  { "Cave Editor", 0x06010000 },       { "JStudio CameraEditor", 0x07010000 },
	                                  { "Movie Test", 0x06010000 },        { "JStudio Kando Test", 0x07010000 },
	                                  { "Pellet Test", 0x06010000 },       { "Main Title", 0x07010000 },
	                                  { "Message Previewer", 0x06010000 }, { "Ebi Main Title", 0x07010000 },
	                                  { "E3 Thanks Section", 0x06010000 }, { "Ebimun Effect", 0x07010000 },
	                                  { "2D Debug2", 0x07010000 } };
} // namespace
u32 GameFlow::mActiveSectionFlag;

/*
 * --INFO--
 * Address:	804241A4
 * Size:	00002C
 */
GameFlow::GameFlow()
{
	mActiveSectionFlag = 21;
	m_section          = nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 * Matches size.
 */
GameFlow::~GameFlow()
{
	// UNUSED FUNCTION
}

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
		JKRHeap::sCurrentHeap->state_register(state._00, state._04);
		JKRExpHeap* heap = JKRExpHeap::create(parentHeap->getFreeSize(), parentHeap, true);

		setSection();
		m_section->init();
		m_section->run();
		m_section->exit();

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
		m_section          = new BootSection(JKRHeap::sCurrentHeap);
		mActiveSectionFlag = 0;
		break;
	case 0x00:
		m_section          = new RootMenuSection(JKRHeap::sCurrentHeap);
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
		if (id == sSectionInfo[i].id.m_sectionId) {
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
ISection* GameFlow::getCurrentSection() { return (m_section) ? m_section->getCurrentSection() : nullptr; }
