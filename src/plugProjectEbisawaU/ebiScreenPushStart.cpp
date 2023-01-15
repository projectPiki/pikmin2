#include "ebi/Screen/TPressStart.h"
#include "System.h"
#include "P2DScreen.h"
#include "ebi/Utility.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "ebi/E2DGraph.h"
#include "PSSystem/PSSystemIF.h"
#include "Graphics.h"
#include "SoundID.h"
#include "Dolphin/rand.h"

static const char name[] = "ebiScreenPushStart";

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803D3B10
 * Size:	000324
 */
void TPressStart::doSetArchive(JKRArchive* arc)
{
	sys->heapStatusStart("TScreenPushStart::setArchive--set_blo_a", nullptr);
	m_screens[0] = new P2DScreen::Mgr_tuning;
	m_screens[0]->set("push_start_a.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenPushStart::setArchive--set_blo_a");

	sys->heapStatusStart("TScreenPushStart::setArchive--set_blo_b", nullptr);
	m_screens[1] = new P2DScreen::Mgr_tuning;
	m_screens[1]->set("push_start_b.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenPushStart::setArchive--set_blo_b");

	sys->heapStatusStart("TScreenPushStart::setArchive--set_blo_c", nullptr);
	m_screens[2] = new P2DScreen::Mgr_tuning;
	m_screens[2]->set("push_start_c.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenPushStart::setArchive--set_blo_c");

	sys->heapStatusStart("TScreenPushStart::setArchive--set_blo_d", nullptr);
	m_screens[3] = new P2DScreen::Mgr_tuning;
	m_screens[3]->set("push_start_d.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenPushStart::setArchive--set_blo_d");

	sys->heapStatusStart("TScreenPushStart::setArchive--makeAnmPointer", nullptr);
	u32 mats;
	J2DScreen* pane;
	u16 j;
	for (int i = 0; i < 4; i++) {
		pane = m_screens[i];
		mats = pane->m_materialCount;
		for (j = 0; j < mats; j++) {
			pane->getMaterial(j)->makeAnmPointer();
		}
	}
	sys->heapStatusEnd("TScreenPushStart::setArchive--makeAnmPointer");

	for (int i = 0; i < 4; i++) {
		static_cast<P2DScreen::Mgr*>(m_screens[i])->addCallBackPane(m_screens[i], &m_anims1[i]);
		static_cast<P2DScreen::Mgr*>(m_screens[i])->addCallBackPane(m_screens[i], &m_anims2[i]);
		static_cast<P2DScreen::Mgr*>(m_screens[i])->addCallBackPane(m_screens[i], &m_anims3[i]);
		E2DPane_setTreeInfluencedAlpha(m_screens[i], true);
		m_screens[i]->setAlpha(255);
	}

	m_anims1[0].loadAnm("push_start_a.bck", arc, 0, 99999);
	m_anims2[0].loadAnm("push_start_a.bpk", arc, 0, 99999);

	m_anims1[1].loadAnm("push_start_b.bck", arc, 0, 99999);
	m_anims2[1].loadAnm("push_start_b.bpk", arc, 0, 99999);

	m_anims1[2].loadAnm("push_start_c.bck", arc, 0, 99999);
	m_anims2[2].loadAnm("push_start_c.bpk", arc, 0, 99999);

	m_anims1[3].loadAnm("push_start_d.bck", arc, 0, 99999);
	m_anims2[3].loadAnm("push_start_d.bpk", arc, 0, 99999);
	/*
stwu     r1, -0x30(r1)
mflr     r0
lis      r5, lbl_80496908@ha
stw      r0, 0x34(r1)
stmw     r24, 0x10(r1)
mr       r29, r3
addi     r31, r5, lbl_80496908@l
mr       r30, r4
li       r5, 0
addi     r4, r31, 0x14
lwz      r3, sys@sda21(r13)
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803D3B58
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803D3B58:
stw      r0, 0x18(r29)
mr       r6, r30
addi     r4, r31, 0x3c
lis      r5, 0x110
lwz      r3, 0x18(r29)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x14
bl       heapStatusEnd__6SystemFPc
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x50
li       r5, 0
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803D3BA4
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803D3BA4:
stw      r0, 0x1c(r29)
mr       r6, r30
addi     r4, r31, 0x78
lis      r5, 0x110
lwz      r3, 0x1c(r29)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x50
bl       heapStatusEnd__6SystemFPc
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x8c
li       r5, 0
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803D3BF0
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803D3BF0:
stw      r0, 0x20(r29)
mr       r6, r30
addi     r4, r31, 0xb4
lis      r5, 0x110
lwz      r3, 0x20(r29)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x8c
bl       heapStatusEnd__6SystemFPc
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0xc8
li       r5, 0
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803D3C3C
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803D3C3C:
stw      r0, 0x24(r29)
mr       r6, r30
addi     r4, r31, 0xf0
lis      r5, 0x110
lwz      r3, 0x24(r29)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0xc8
bl       heapStatusEnd__6SystemFPc
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x104
li       r5, 0
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r24, 0
mr       r25, r29

lbl_803D3C78:
lwz      r27, 0x18(r25)
li       r28, 0
lhz      r26, 0x102(r27)
b        lbl_803D3C9C

lbl_803D3C88:
mr       r3, r27
mr       r4, r28
bl       getMaterial__9J2DScreenFUs
bl       makeAnmPointer__11J2DMaterialFv
addi     r28, r28, 1

lbl_803D3C9C:
clrlwi   r0, r28, 0x10
cmplw    r0, r26
blt      lbl_803D3C88
addi     r24, r24, 1
addi     r25, r25, 4
cmpwi    r24, 4
blt      lbl_803D3C78
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x104
bl       heapStatusEnd__6SystemFPc
mr       r25, r29
mr       r26, r29
mr       r27, r29
li       r24, 0

lbl_803D3CD4:
lwz      r3, 0x18(r26)
addi     r5, r25, 0x30
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x18(r26)
addi     r5, r25, 0x120
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x18(r26)
addi     r5, r27, 0x210
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x18(r26)
li       r4, 1
bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
lwz      r3, 0x18(r26)
li       r4, 0xff
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r24, r24, 1
addi     r26, r26, 4
cmpwi    r24, 4
addi     r27, r27, 0x20
addi     r25, r25, 0x3c
blt      lbl_803D3CD4
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r29, 0x30
addi     r4, r31, 0x134
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r29, 0x120
addi     r4, r31, 0x148
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r29, 0x6c
addi     r4, r31, 0x15c
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r29, 0x15c
addi     r4, r31, 0x170
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r29, 0xa8
addi     r4, r31, 0x184
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r29, 0x198
addi     r4, r31, 0x198
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r29, 0xe4
addi     r4, r31, 0x1ac
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r6, 0x0001869F@ha
mr       r5, r30
addi     r3, r29, 0x1d4
addi     r4, r31, 0x1c0
addi     r7, r6, 0x0001869F@l
li       r6, 0
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lmw      r24, 0x10(r1)
lwz      r0, 0x34(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	803D3E34
 * Size:	000028
 */
void TPressStart::doOpenScreen(ArgOpen*)
{
	m_isOpen = true;
	startLoop_();
}

/*
 * --INFO--
 * Address:	803D3E5C
 * Size:	000044
 */
void TPressStart::doCloseScreen(ArgClose*)
{
	u32 time   = 0.2f / sys->m_deltaTime;
	m_alpha    = time;
	m_alphaMax = time;
}

/*
 * --INFO--
 * Address:	803D3EA0
 * Size:	0000A4
 */
bool TPressStart::doUpdateStateWait()
{
	m_screens[m_currentScreen]->update();
	if (m_isOpen && m_control->m_padButton.m_mask & (Controller::PRESS_START | Controller::PRESS_A)) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
		return true;
	} else {
		if (m_anims1[m_currentScreen].isFinish()) {
			startLoop_();
		}
		return false;
	}
}

/*
 * --INFO--
 * Address:	803D3F44
 * Size:	000108
 */
bool TPressStart::doUpdateStateClose()
{
	m_screens[m_currentScreen]->update();
	if (m_alpha) {
		m_alpha--;
	}
	f32 alpha;
	if (m_alphaMax) {
		alpha = (f32)m_alpha / (f32)m_alphaMax;
	} else {
		alpha = 0.0f;
	}

	m_screens[m_currentScreen]->setAlpha(alpha * 255.0f);

	if (!m_alpha || m_anims1[m_currentScreen].isFinish()) {
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	803D404C
 * Size:	000080
 */
void TPressStart::doDraw()
{
	Graphics* gfx       = sys->m_gfx;
	J2DPerspGraph& graf = gfx->m_perspGraph;
	graf.setPort();
	m_screens[m_currentScreen]->draw(*gfx, graf);
}

/*
 * --INFO--
 * Address:	803D40CC
 * Size:	00016C
 */
void TPressStart::startLoop_()
{
	f32 r = randFloat();
	if (r < 0.25f) {
		m_currentScreen = 0;
	} else if (r < 0.5f) {
		m_currentScreen = 1;
	} else if (r < 0.75f) {
		m_currentScreen = 2;
	} else {
		m_currentScreen = 3;
	}

	for (int i = 0; i < 4; i++) {
		m_screens[i]->setAlpha(255);
		m_anims1[i].stop();
		m_anims2[i].stop();
	}
	m_anims1[m_currentScreen].play(sys->m_deltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	m_anims2[m_currentScreen].play(sys->m_deltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	m_screens[m_currentScreen]->animation();
}

/*
 * --INFO--
 * Address:	803D4238
 * Size:	00000C
 */
char* TPressStart::getName() { return "TPressStart"; }
} // namespace Screen
} // namespace ebi
