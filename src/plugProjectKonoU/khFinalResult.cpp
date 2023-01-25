#include "kh/khFinalResult.h"
#include "Controller.h"
#include "PSSystem/PSSystemIF.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "Game/gamePlayData.h"
#include "og/newScreen/ogUtil.h"
#include "LoadResource.h"

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	8040C1E8
 * Size:	000034
 */
DispFinalResult::DispFinalResult(TotalResultData* data, DispFinalResult::ResultType type, JKRHeap* heap)
{
	m_totalResultData = data;
	m_resultType      = type;
	m_exitStatus      = 0;
	m_heap            = heap;
}

/*
 * --INFO--
 * Address:	8040C21C
 * Size:	0001A0
 */
ObjFinalResult::ObjFinalResult()
{
	m_screen    = nullptr;
	m_anmTrans6 = nullptr;
	m_anmTrans5 = nullptr;
	m_anmTrans4 = nullptr;
	m_anmTrans3 = nullptr;
	m_anmTrans2 = nullptr;
	m_anmTrans1 = nullptr;
	m_anmCol3   = nullptr;
	m_anmCol2   = nullptr;
	m_anmCol1   = nullptr;
	m_anmSRT    = nullptr;
	m_anmTev    = nullptr;
	for (int i = 7; i >= 0; i--) {
		m_animTimers[i] = 0.0f;
	}
	m_stickAnimMgr    = nullptr;
	m_fadePaneAButton = nullptr;
	m_fadePaneYameL   = nullptr;
	m_fadePaneYameU   = nullptr;
	m_fadePane3DStick = nullptr;

	for (int i = 0; i < 4; i++) {
		m_counterScore2[i]     = nullptr;
		m_counterScore1[i]     = nullptr;
		m_counters2[i]         = nullptr;
		m_counters1[i]         = nullptr;
		m_counterDataScore2[i] = 0;
		m_counterDataScore1[i] = 0;
		m_counterData2[i]      = 0;
		m_counterData1[i]      = 0;
	}

	m_timer = 0.0f;
	m_color.set(0, 0, 0, 0);
	m_scrollYPos         = 0.0f;
	m_scrollMove         = 0.0f;
	m_currentPage        = 1;
	m_scrollTargetPos    = msVal._04;
	m_scrollMoveProgress = 0;
	m_autoScrollDelay    = msVal._08;
	m_state              = StatusForceScroll;
	_14D                 = -1;
	_14C                 = -1;

	m_flags = 0;
	m_flags |= 8;
	m_fadeAlpha = 0;
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       __ct__Q26Screen7ObjBaseFv
lis      r4, __vt__Q32kh6Screen14ObjFinalResult@ha
lis      r3, msVal__Q32kh6Screen14ObjFinalResult@ha
addi     r4, r4, __vt__Q32kh6Screen14ObjFinalResult@l
li       r0, -1
stw      r4, 0(r31)
addi     r4, r4, 0x10
li       r7, 0
lfs      f0, lbl_805201A0@sda21(r2)
stw      r4, 0x18(r31)
li       r5, 1
addi     r6, r3, msVal__Q32kh6Screen14ObjFinalResult@l
li       r4, 3
stw      r0, 0x124(r31)
li       r0, 0xff
mr       r3, r31
stw      r7, 0x3c(r31)
stw      r7, 0x54(r31)
stw      r7, 0x50(r31)
stw      r7, 0x4c(r31)
stw      r7, 0x48(r31)
stw      r7, 0x44(r31)
stw      r7, 0x40(r31)
stw      r7, 0x60(r31)
stw      r7, 0x5c(r31)
stw      r7, 0x58(r31)
stw      r7, 0x64(r31)
stw      r7, 0x68(r31)
stfs     f0, 0x88(r31)
stfs     f0, 0x84(r31)
stfs     f0, 0x80(r31)
stfs     f0, 0x7c(r31)
stfs     f0, 0x78(r31)
stfs     f0, 0x74(r31)
stfs     f0, 0x70(r31)
stfs     f0, 0x6c(r31)
stw      r7, 0x8c(r31)
stw      r7, 0x9c(r31)
stw      r7, 0x98(r31)
stw      r7, 0x94(r31)
stw      r7, 0x90(r31)
stw      r7, 0xd0(r31)
stw      r7, 0xc0(r31)
stw      r7, 0xb0(r31)
stw      r7, 0xa0(r31)
stw      r7, 0x110(r31)
stw      r7, 0x100(r31)
stw      r7, 0xf0(r31)
stw      r7, 0xe0(r31)
stw      r7, 0xd4(r31)
stw      r7, 0xc4(r31)
stw      r7, 0xb4(r31)
stw      r7, 0xa4(r31)
stw      r7, 0x114(r31)
stw      r7, 0x104(r31)
stw      r7, 0xf4(r31)
stw      r7, 0xe4(r31)
stw      r7, 0xd8(r31)
stw      r7, 0xc8(r31)
stw      r7, 0xb8(r31)
stw      r7, 0xa8(r31)
stw      r7, 0x118(r31)
stw      r7, 0x108(r31)
stw      r7, 0xf8(r31)
stw      r7, 0xe8(r31)
stw      r7, 0xdc(r31)
stw      r7, 0xcc(r31)
stw      r7, 0xbc(r31)
stw      r7, 0xac(r31)
stw      r7, 0x11c(r31)
stw      r7, 0x10c(r31)
stw      r7, 0xfc(r31)
stw      r7, 0xec(r31)
stfs     f0, 0x120(r31)
stb      r7, 0x124(r31)
stb      r7, 0x125(r31)
stb      r7, 0x126(r31)
stb      r7, 0x127(r31)
stfs     f0, 0x128(r31)
stfs     f0, 0x12c(r31)
stw      r5, 0x130(r31)
lwz      r5, 4(r6)
stw      r5, 0x134(r31)
stw      r7, 0x138(r31)
lwz      r5, 8(r6)
stw      r5, 0x13c(r31)
stw      r4, 0x148(r31)
stb      r0, 0x14d(r31)
stb      r0, 0x14c(r31)
stb      r7, 0x14e(r31)
lbz      r0, 0x14e(r31)
ori      r0, r0, 8
stb      r0, 0x14e(r31)
stb      r7, 0x14f(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8040C3BC
 * Size:	000B8C
 */
void ObjFinalResult::doCreate(JKRArchive* arc)
{
	JUT_ASSERTLINE(214, getDispMember()->isID(OWNER_KH, MEMBER_FINAL_RESULT), "disp member err");
	DispFinalResult* disp = static_cast<DispFinalResult*>(getDispMember());

	m_screen = new P2DScreen::Mgr_tuning;
	m_screen->set("result_final.blo", 0x1040000, arc);

	void* file  = JKRFileLoader::getGlbResource("result_final.bck", arc);
	m_anmTrans1 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	m_anmTrans2 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	m_anmTrans3 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	m_anmTrans4 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	m_anmTrans5 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	m_anmTrans6 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));

	file      = JKRFileLoader::getGlbResource("result_final.bpk", arc);
	m_anmCol1 = J2DAnmLoaderDataBase::load(file);
	m_anmCol2 = J2DAnmLoaderDataBase::load(file);
	m_anmCol3 = J2DAnmLoaderDataBase::load(file);

	file     = JKRFileLoader::getGlbResource("result_final.btk", arc);
	m_anmSRT = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(file));

	file     = JKRFileLoader::getGlbResource("result_final.brk", arc);
	m_anmTev = static_cast<J2DAnmTevRegKey*>(J2DAnmLoaderDataBase::load(file));

	m_anmCol1->searchUpdateMaterialID(m_screen);
	m_anmCol2->searchUpdateMaterialID(m_screen);
	m_anmCol3->searchUpdateMaterialID(m_screen);

	J2DPane* pane1 = m_screen->search('Nstar');
	J2DPane* pane2 = m_screen->search('Nabtn');
	pane1->setAnimation(m_anmTrans1);
	m_screen->search('Ntitle')->setAnimation(m_anmTrans2);
	m_screen->search('Nmain')->setAnimation(m_anmTrans3);
	m_screen->search('NICON')->setAnimation(m_anmTrans4);
	m_screen->search('Nmeter')->setAnimation(m_anmTrans5);
	pane2->setAnimation(m_anmTrans6);

	setMatAnm(m_screen->search('Nstar'), m_anmCol1);
	setMatAnm(m_screen->search('Nselect'), m_anmCol2);
	setMatAnm(pane2, m_anmCol3);

	m_screen->setAnimation(m_anmSRT);
	m_screen->setAnimation(m_anmTev);
	setInfAlpha(m_screen->search('NICON'));

	for (int i = 0; i <= 7; i++) {
		m_screen->search(getSerialTagName('Nsel00', i))->setAlpha(msVal._21);
		m_screen->search(getSerialTagName('Nicon00', i))->setAlpha(msVal._21);
	}
	JKRHeap* oldHeap = getCurrentHeap();
	if (disp->m_heap) {
		disp->m_heap->becomeCurrentHeap();
	}
	og::Screen::setCallBackMessage(m_screen);

	og::Screen::CallBack_Picture* stick = og::Screen::setCallBack_3DStick(arc, m_screen, 'ota3dl');
	m_stickAnimMgr                      = new og::Screen::StickAnimMgr(stick);
	m_stickAnimMgr->stickUpDown();

	m_fadePaneYameU = khUtilFadePane::create(m_screen, 'Nyame_u', 16);
	m_fadePaneYameU->fadeout();
	m_fadePaneYameL = khUtilFadePane::create(m_screen, 'Nyame_l', 16);
	m_fadePaneYameL->fadeout();
	m_fadePane3DStick = khUtilFadePane::create(m_screen, 'ota3dl', 16);
	m_fadePane3DStick->add(m_screen->search('N_3d'));
	m_fadePane3DStick->fadeout();
	m_fadePaneAButton = khUtilFadePane::create(m_screen, 'Nabtn', 16);
	m_fadePaneAButton->fadeout();

	u64 tags1[4] = { 'Ptokyop1', 'P1st0_1', 'P2nd0_1', 'P3rd0_1' };
	u64 tags2[4] = { 'Ptomadp1', 'P1st1_1', 'P2nd1_1', 'P3rd1_1' };
	for (int i = 0; i < 4; i++) {
		m_counters1[i] = og::Screen::setCallBack_CounterRV(m_screen, tags1[i], &m_counterData1[i], 9, false, false, arc);
		m_counters2[i] = og::Screen::setCallBack_CounterRV(m_screen, tags2[i], &m_counterData2[i], 9, false, false, arc);
	}
	m_counterScore1[0] = og::Screen::setCallBack_CounterRV(m_screen, 'Pkon3', 'Pkon4', 'Pkon4', &m_counterDataScore1[0], 3, 2, false, arc);
	m_counterScore1[1]
	    = og::Screen::setCallBack_CounterRV(m_screen, 'P1stt3', 'P1stt4', 'P1stt4', &m_counterDataScore1[1], 3, 2, false, arc);
	m_counterScore1[2]
	    = og::Screen::setCallBack_CounterRV(m_screen, 'P2ndt3', 'P2ndt4', 'P2ndt4', &m_counterDataScore1[2], 3, 2, false, arc);
	m_counterScore1[3]
	    = og::Screen::setCallBack_CounterRV(m_screen, 'P3rdt3', 'P3rdt4', 'P3rdt4', &m_counterDataScore1[3], 3, 2, false, arc);
	m_counterScore2[0] = og::Screen::setCallBack_CounterRV(m_screen, 'Pkon1', 'Pkon2', 'Pkon2', &m_counterDataScore2[0], 2, 2, false, arc);
	m_counterScore2[1]
	    = og::Screen::setCallBack_CounterRV(m_screen, 'P1stt1', 'P1stt2', 'P1stt2', &m_counterDataScore2[1], 2, 2, false, arc);
	m_counterScore2[2]
	    = og::Screen::setCallBack_CounterRV(m_screen, 'P2ndt1', 'P2ndt2', 'P2ndt2', &m_counterDataScore2[2], 2, 2, false, arc);
	m_counterScore2[3]
	    = og::Screen::setCallBack_CounterRV(m_screen, 'P3rdt1', 'P3rdt2', 'P3rdt2', &m_counterDataScore2[3], 2, 2, false, arc);

	m_counterScore1[0]->setZeroAlpha(255);
	m_counterScore1[1]->setZeroAlpha(255);
	m_counterScore1[2]->setZeroAlpha(255);
	m_counterScore1[3]->setZeroAlpha(255);

	TotalResultData* data = disp->m_totalResultData;
	for (int i = 0; i < 4; i++) {
		int count = data->m_score1;
		if (count > 0) {
			m_counterDataScore1[i] = 0;
			m_counterDataScore2[i] = 0;
			m_counterScore1[i]->setBlind(true);
			m_counterScore2[i]->setBlind(true);
		} else {
			m_counterDataScore1[i] = count / 60;
			m_counterDataScore2[i] = count / 60;
		}
	}

	m_saveMgr = ebi::Save::TMgr::createInstance();
	m_saveMgr->m_saveMenu.loadResource();
	m_saveMgr->doLoadResource(getCurrentHeap());
	m_saveMgr->setControllers(getGamePad());
	m_saveMgr->m_saveType = 1;

	f32 y        = m_screen->search('Nsetp0')->getBounds()->i.y;
	m_scrollMove = (m_screen->search('Nsetp1')->getBounds()->i.y - y) * 2.0f;
	m_screen->search('Ppict0')->hide();
	m_screen->search('Ppict1')->hide();
	m_screen->search('Nsetp_c')->show();
	m_screen->search('Nsetp_d')->hide();

	if (disp->m_resultType == DispFinalResult::PostDebt) {
		m_screen->search('Ntitl_fi')->show();
		m_screen->search('Ntitl_co')->hide();
	} else {
		m_screen->search('Ntitl_fi')->hide();
		m_screen->search('Ntitl_co')->show();
	}

	if (disp->m_heap) {
		oldHeap->becomeCurrentHeap();
	}
	Game::playData->m_mailSaveData.set_history(-2);

	/*
stwu     r1, -0xa0(r1)
mflr     r0
stw      r0, 0xa4(r1)
stfd     f31, 0x90(r1)
psq_st   f31, 152(r1), 0, qr0
stmw     r23, 0x6c(r1)
lis      r5, lbl_80498CD8@ha
mr       r31, r3
mr       r26, r4
addi     r29, r5, lbl_80498CD8@l
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r5, 0x52534C54@ha
li       r4, 0x4b48
addi     r6, r5, 0x52534C54@l
li       r5, 0x465f
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040C418
addi     r3, r29, 0
addi     r5, r29, 0x300
li       r4, 0xd6
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040C418:
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
mr       r30, r3
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_8040C43C
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_8040C43C:
stw      r0, 0x3c(r31)
mr       r6, r26
addi     r4, r29, 0x310
lis      r5, 0x104
lwz      r3, 0x3c(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r4, r26
addi     r3, r29, 0x324
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
mr       r24, r3
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x40(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x44(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x48(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x4c(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x50(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x54(r31)
mr       r4, r26
addi     r3, r29, 0x338
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
mr       r24, r3
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x58(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x5c(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x60(r31)
mr       r4, r26
addi     r3, r29, 0x34c
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x64(r31)
mr       r4, r26
addi     r3, r29, 0x360
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x68(r31)
lwz      r3, 0x58(r31)
lwz      r4, 0x3c(r31)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0x5c(r31)
lwz      r4, 0x3c(r31)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0x60(r31)
lwz      r4, 0x3c(r31)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0x3c(r31)
lis      r4, 0x73746172@ha
addi     r6, r4, 0x73746172@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r0, r3
lwz      r3, 0x3c(r31)
lis      r4, 0x6162746E@ha
li       r5, 0x4e
lwz      r12, 0(r3)
mr       r24, r0
addi     r6, r4, 0x6162746E@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r0, r3
mr       r3, r24
lwz      r12, 0(r24)
mr       r24, r0
lwz      r4, 0x40(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x3c(r31)
lis      r4, 0x69746C65@ha
addi     r6, r4, 0x69746C65@l
li       r5, 0x4e74
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x44(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x3c(r31)
lis      r4, 0x6D61696E@ha
addi     r6, r4, 0x6D61696E@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x48(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x3c(r31)
lis      r4, 0x49434F4E@ha
addi     r6, r4, 0x49434F4E@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x4c(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x3c(r31)
lis      r4, 0x65746572@ha
addi     r6, r4, 0x65746572@l
li       r5, 0x4e6d
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
mr       r3, r24
lwz      r4, 0x54(r31)
lwz      r12, 0(r24)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x3c(r31)
lis      r4, 0x73746172@ha
addi     r6, r4, 0x73746172@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r4, 0x58(r31)
bl       setMatAnm__Q22kh6ScreenFP7J2DPaneP10J2DAnmBase
lwz      r3, 0x3c(r31)
lis      r5, 0x6C656374@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x6C656374@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r4, 0x5c(r31)
bl       setMatAnm__Q22kh6ScreenFP7J2DPaneP10J2DAnmBase
lwz      r4, 0x60(r31)
mr       r3, r24
bl       setMatAnm__Q22kh6ScreenFP7J2DPaneP10J2DAnmBase
lwz      r3, 0x3c(r31)
lwz      r4, 0x64(r31)
lwz      r12, 0(r3)
lwz      r12, 0x6c(r12)
mtctr    r12
bctrl
lwz      r3, 0x3c(r31)
lwz      r4, 0x68(r31)
lwz      r12, 0(r3)
lwz      r12, 0x70(r12)
mtctr    r12
bctrl
lwz      r3, 0x3c(r31)
lis      r4, 0x49434F4E@ha
addi     r6, r4, 0x49434F4E@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       setInfAlpha__Q22kh6ScreenFP7J2DPane
lis      r3, msVal__Q32kh6Screen14ObjFinalResult@ha
li       r23, 0
addi     r24, r3, msVal__Q32kh6Screen14ObjFinalResult@l
lis      r25, 0x656C3030@ha
lis      r28, 0x6f6e
lis      r27, 0x4e

lbl_8040C764:
mr       r5, r23
addi     r4, r25, 0x656C3030@l
li       r3, 0x4e73
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x3c(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lbz      r4, 0x21(r24)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
mr       r5, r23
addi     r4, r28, 0x3030
addi     r3, r27, 0x6963
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x3c(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lbz      r4, 0x21(r24)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r23, r23, 1
cmpwi    r23, 7
ble      lbl_8040C764
lwz      r3, 0x14(r30)
lwz      r28, sCurrentHeap__7JKRHeap@sda21(r13)
cmplwi   r3, 0
beq      lbl_8040C804
bl       becomeCurrentHeap__7JKRHeapFv

lbl_8040C804:
lwz      r3, 0x3c(r31)
bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
lis      r6, 0x6133646C@ha
lwz      r4, 0x3c(r31)
mr       r3, r26
li       r5, 0x6f74
addi     r6, r6, 0x6133646C@l
bl       setCallBack_3DStick__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
mr       r0, r3
li       r3, 8
mr       r23, r0
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_8040C848
mr       r4, r23
bl       __ct__Q32og6Screen12StickAnimMgrFPQ32og6Screen16CallBack_Picture
mr       r0, r3

lbl_8040C848:
stw      r0, 0x8c(r31)
lwz      r3, 0x8c(r31)
bl       stickUpDown__Q32og6Screen12StickAnimMgrFv
lis      r5, 0x6D655F75@ha
lis      r4, 0x004E7961@ha
lwz      r3, 0x3c(r31)
addi     r6, r5, 0x6D655F75@l
addi     r5, r4, 0x004E7961@l
li       r7, 0x10
bl       create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
stw      r3, 0x94(r31)
lwz      r3, 0x94(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
lis      r5, 0x6D655F6C@ha
lis      r4, 0x004E7961@ha
lwz      r3, 0x3c(r31)
addi     r6, r5, 0x6D655F6C@l
addi     r5, r4, 0x004E7961@l
li       r7, 0x10
bl       create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
stw      r3, 0x98(r31)
lwz      r3, 0x98(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
lis      r4, 0x6133646C@ha
lwz      r3, 0x3c(r31)
addi     r6, r4, 0x6133646C@l
li       r5, 0x6f74
li       r7, 0x10
bl       create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
stw      r3, 0x90(r31)
lis      r3, 0x4E5F3364@ha
addi     r6, r3, 0x4E5F3364@l
li       r5, 0
lwz      r3, 0x3c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x90(r31)
bl       add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
lwz      r3, 0x90(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
lis      r4, 0x6162746E@ha
lwz      r3, 0x3c(r31)
addi     r6, r4, 0x6162746E@l
li       r5, 0x4e
li       r7, 0x10
bl       create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
stw      r3, 0x9c(r31)
lwz      r3, 0x9c(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
lfd      f7, 0x280(r29)
mr       r24, r31
lfd      f6, 0x288(r29)
addi     r25, r1, 0x20
lfd      f5, 0x290(r29)
li       r23, 0
lfd      f4, 0x298(r29)
lfd      f3, 0x2a0(r29)
lfd      f2, 0x2a8(r29)
lfd      f1, 0x2b0(r29)
lfd      f0, 0x2b8(r29)
stfd     f7, 0x20(r1)
stfd     f6, 0x28(r1)
stfd     f5, 0x30(r1)
stfd     f4, 0x38(r1)
stfd     f3, 0x40(r1)
stfd     f2, 0x48(r1)
stfd     f1, 0x50(r1)
stfd     f0, 0x58(r1)

lbl_8040C964:
stw      r26, 8(r1)
addi     r7, r24, 0xe0
lwz      r5, 0(r25)
li       r8, 9
lwz      r3, 0x3c(r31)
li       r9, 0
lwz      r6, 4(r25)
li       r10, 0
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive stw
r3, 0xa0(r24) addi     r7, r24, 0xf0 lwz      r5, 0x20(r25) li       r8, 9 stw
r26, 8(r1) li       r9, 0 lwz      r6, 0x24(r25) li       r10, 0 lwz      r3,
0x3c(r31) bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive addi
r23, r23, 1 stw      r3, 0xb0(r24) cmpwi    r23, 4 addi     r24, r24, 4 addi
r25, r25, 8 blt      lbl_8040C964 addi     r0, r31, 0x100 lis      r3,
0x6B6F6E34@ha stw      r0, 8(r1) li       r0, 3 addi     r8, r3, 0x6B6F6E34@l li
r4, 2 stw      r0, 0xc(r1) li       r0, 0 mr       r10, r8 addi     r6, r3,
0x6e33 stw      r4, 0x10(r1) li       r5, 0x50 li       r7, 0x50 li       r9,
0x50 stw      r0, 0x14(r1) stw      r26, 0x18(r1) lwz      r3, 0x3c(r31) bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
stw      r3, 0xc0(r31)
lis      r3, 0x73747434@ha
addi     r0, r31, 0x104
li       r5, 3
stw      r0, 8(r1)
addi     r8, r3, 0x73747434@l
li       r4, 2
li       r0, 0
stw      r5, 0xc(r1)
mr       r10, r8
addi     r6, r3, 0x7433
li       r5, 0x5031
stw      r4, 0x10(r1)
li       r7, 0x5031
li       r9, 0x5031
stw      r0, 0x14(r1)
stw      r26, 0x18(r1)
lwz      r3, 0x3c(r31)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
stw      r3, 0xc4(r31)
lis      r3, 0x6E647434@ha
addi     r0, r31, 0x108
li       r5, 3
stw      r0, 8(r1)
addi     r8, r3, 0x6E647434@l
li       r4, 2
li       r0, 0
stw      r5, 0xc(r1)
mr       r10, r8
addi     r6, r3, 0x7433
li       r5, 0x5032
stw      r4, 0x10(r1)
li       r7, 0x5032
li       r9, 0x5032
stw      r0, 0x14(r1)
stw      r26, 0x18(r1)
lwz      r3, 0x3c(r31)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
stw      r3, 0xc8(r31)
lis      r3, 0x72647434@ha
addi     r0, r31, 0x10c
li       r5, 3
stw      r0, 8(r1)
addi     r8, r3, 0x72647434@l
li       r4, 2
li       r0, 0
stw      r5, 0xc(r1)
mr       r10, r8
addi     r6, r3, 0x7433
li       r5, 0x5033
stw      r4, 0x10(r1)
li       r7, 0x5033
li       r9, 0x5033
stw      r0, 0x14(r1)
stw      r26, 0x18(r1)
lwz      r3, 0x3c(r31)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
stw      r3, 0xcc(r31)
lis      r3, 0x6B6F6E32@ha
addi     r0, r31, 0x110
li       r4, 2
stw      r0, 8(r1)
addi     r8, r3, 0x6B6F6E32@l
li       r0, 0
addi     r6, r3, 0x6e31
stw      r4, 0xc(r1)
mr       r10, r8
li       r5, 0x50
li       r7, 0x50
stw      r4, 0x10(r1)
li       r9, 0x50
stw      r0, 0x14(r1)
stw      r26, 0x18(r1)
lwz      r3, 0x3c(r31)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
stw      r3, 0xd0(r31)
lis      r3, 0x73747432@ha
addi     r0, r31, 0x114
li       r4, 2
stw      r0, 8(r1)
addi     r8, r3, 0x73747432@l
li       r0, 0
addi     r6, r3, 0x7431
stw      r4, 0xc(r1)
mr       r10, r8
li       r5, 0x5031
li       r7, 0x5031
stw      r4, 0x10(r1)
li       r9, 0x5031
stw      r0, 0x14(r1)
stw      r26, 0x18(r1)
lwz      r3, 0x3c(r31)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
stw      r3, 0xd4(r31)
lis      r3, 0x6E647432@ha
addi     r0, r31, 0x118
li       r4, 2
stw      r0, 8(r1)
addi     r8, r3, 0x6E647432@l
li       r0, 0
addi     r6, r3, 0x7431
stw      r4, 0xc(r1)
mr       r10, r8
li       r5, 0x5032
li       r7, 0x5032
stw      r4, 0x10(r1)
li       r9, 0x5032
stw      r0, 0x14(r1)
stw      r26, 0x18(r1)
lwz      r3, 0x3c(r31)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
stw      r3, 0xd8(r31)
lis      r3, 0x72647432@ha
addi     r0, r31, 0x11c
li       r4, 2
stw      r0, 8(r1)
addi     r8, r3, 0x72647432@l
li       r0, 0
addi     r6, r3, 0x7431
stw      r4, 0xc(r1)
mr       r10, r8
li       r5, 0x5033
li       r7, 0x5033
stw      r4, 0x10(r1)
li       r9, 0x5033
stw      r0, 0x14(r1)
stw      r26, 0x18(r1)
lwz      r3, 0x3c(r31)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
stw      r3, 0xdc(r31)
li       r4, 0xff
lwz      r3, 0xd0(r31)
bl       setZeroAlpha__Q32og6Screen18CallBack_CounterRVFUc
lwz      r3, 0xd4(r31)
li       r4, 0xff
bl       setZeroAlpha__Q32og6Screen18CallBack_CounterRVFUc
lwz      r3, 0xd8(r31)
li       r4, 0xff
bl       setZeroAlpha__Q32og6Screen18CallBack_CounterRVFUc
lwz      r3, 0xdc(r31)
li       r4, 0xff
bl       setZeroAlpha__Q32og6Screen18CallBack_CounterRVFUc
lwz      r3, 8(r30)
mr       r27, r31
li       r26, 0
lwz      r3, 0(r3)
lwz      r29, 0x3c(r3)

lbl_8040CC5C:
lwz      r4, 4(r29)
cmpwi    r4, 0
bge      lbl_8040CC90
li       r0, 0
li       r4, 1
stw      r0, 0x100(r27)
stw      r0, 0x110(r27)
lwz      r3, 0xc0(r27)
bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
lwz      r3, 0xd0(r27)
li       r4, 1
bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
b        lbl_8040CCD4

lbl_8040CC90:
lis      r3, 0x88888889@ha
addi     r5, r3, 0x88888889@l
mulhw    r0, r5, r4
add      r0, r0, r4
srawi    r0, r0, 5
srwi     r3, r0, 0x1f
add      r0, r0, r3
stw      r0, 0x100(r27)
lwz      r4, 4(r29)
mulhw    r0, r5, r4
add      r0, r0, r4
srawi    r0, r0, 5
srwi     r3, r0, 0x1f
add      r0, r0, r3
mulli    r0, r0, 0x3c
subf     r0, r0, r4
stw      r0, 0x110(r27)

lbl_8040CCD4:
addi     r26, r26, 1
addi     r27, r27, 4
cmpwi    r26, 4
addi     r29, r29, 4
blt      lbl_8040CC5C
bl       createInstance__Q33ebi4Save4TMgrFv
stw      r3, 0x38(r31)
lwz      r24, 0x38(r31)
addi     r3, r24, 0x18
bl       loadResource__Q33ebi6Screen9TSaveMenuFv
lwz      r25, sCurrentHeap__7JKRHeap@sda21(r13)
addi     r3, r24, 0x100
mr       r4, r25
bl       loadResource__Q33ebi6Screen11TMemoryCardFP7JKRHeap
lwz      r3, sys@sda21(r13)
mr       r4, r25
lwz      r3, 0x5c(r3)
bl       loadResource__Q34Game10MemoryCard3MgrFP7JKRHeap
mr       r3, r31
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r7, 0x38(r31)
lis      r4, 0x65747030@ha
li       r0, 1
li       r5, 0x4e73
stw      r3, 0x3d0(r7)
addi     r6, r4, 0x65747030@l
stw      r3, 0x24(r7)
stw      r3, 0x104(r7)
lwz      r3, 0x38(r31)
stb      r0, 0x478(r3)
lwz      r3, 0x3c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       getBounds__7J2DPaneFv
lfs      f31, 4(r3)
lis      r4, 0x65747031@ha
lwz      r3, 0x3c(r31)
addi     r6, r4, 0x65747031@l
li       r5, 0x4e73
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       getBounds__7J2DPaneFv
lfs      f0, 4(r3)
lis      r3, 0x69637430@ha
lfs      f1, lbl_805201A4@sda21(r2)
addi     r6, r3, 0x69637430@l
fsubs    f0, f0, f31
li       r5, 0x5070
fmuls    f0, f1, f0
stfs     f0, 0x12c(r31)
lwz      r3, 0x3c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r4, 0x69637431@ha
stb      r0, 0xb0(r3)
addi     r6, r4, 0x69637431@l
li       r5, 0x5070
lwz      r3, 0x3c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r5, 0x74705F63@ha
stb      r0, 0xb0(r3)
lis      r4, 0x004E7365@ha
addi     r6, r5, 0x74705F63@l
lwz      r3, 0x3c(r31)
addi     r5, r4, 0x004E7365@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r5, 0x74705F64@ha
stb      r0, 0xb0(r3)
lis      r4, 0x004E7365@ha
addi     r6, r5, 0x74705F64@l
lwz      r3, 0x3c(r31)
addi     r5, r4, 0x004E7365@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)
lwz      r0, 0xc(r30)
cmpwi    r0, 0
bne      lbl_8040CEB0
lwz      r3, 0x3c(r31)
lis      r5, 0x6C5F6669@ha
lis      r4, 0x4E746974@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x6C5F6669@l
addi     r5, r4, 0x4E746974@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r5, 0x6C5F636F@ha
stb      r0, 0xb0(r3)
lis      r4, 0x4E746974@ha
addi     r6, r5, 0x6C5F636F@l
lwz      r3, 0x3c(r31)
addi     r5, r4, 0x4E746974@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)
b        lbl_8040CF08

lbl_8040CEB0:
lwz      r3, 0x3c(r31)
lis      r5, 0x6C5F6669@ha
lis      r4, 0x4E746974@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x6C5F6669@l
addi     r5, r4, 0x4E746974@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r5, 0x6C5F636F@ha
stb      r0, 0xb0(r3)
lis      r4, 0x4E746974@ha
addi     r6, r5, 0x6C5F636F@l
lwz      r3, 0x3c(r31)
addi     r5, r4, 0x4E746974@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)

lbl_8040CF08:
lwz      r0, 0x14(r30)
cmplwi   r0, 0
beq      lbl_8040CF1C
mr       r3, r28
bl       becomeCurrentHeap__7JKRHeapFv

lbl_8040CF1C:
lwz      r3, playData__4Game@sda21(r13)
li       r4, -2
addi     r3, r3, 0x84
bl       set_history__Q32kh6Screen12MailSaveDataFSc
psq_l    f31, 152(r1), 0, qr0
lfd      f31, 0x90(r1)
lmw      r23, 0x6c(r1)
lwz      r0, 0xa4(r1)
mtlr     r0
addi     r1, r1, 0xa0
blr
	*/
}

/*
 * --INFO--
 * Address:	8040CF48
 * Size:	0001BC
 */
bool ObjFinalResult::doUpdate()
{
	updateCommon();
	if (m_flags & SaveOpen) {
		if (m_fadeAlpha < msVal._1F) {
			m_fadeAlpha += msVal._20;
		}
		m_saveMgr->update();
		if (m_saveMgr->isFinish()) {
			switch (m_saveMgr->m_currStateID) {
			case 0:
			case 2:
				JUT_ASSERTLINE(382, getDispMember()->isID(OWNER_KH, MEMBER_FINAL_RESULT), "disp member err");
				DispFinalResult* disp = static_cast<DispFinalResult*>(getDispMember());
				disp->m_exitStatus    = 1;
				break;
			case 1:
				m_flags &= ~SaveOpen;
				break;
			}
		}

	} else {
		switch (m_state) {
		case StatusNormal:
			statusNormal();
			break;
		case StatusScrollUp:
			statusScrollUp();
			break;
		case StatusScrollDown:
			statusScrollDown();
			break;
		case StatusForceScroll:
			statusForceScroll();
			break;
		}
		if (m_state == StatusNormal && m_currentPage == 7) {
			Controller* pad = getGamePad();
			if (pad->m_padButton.m_buttonDown & Controller::PRESS_A) {
				m_flags |= SaveOpen;
				m_saveMgr->start();
			}
		}
		if (m_fadeAlpha) {
			m_fadeAlpha -= msVal._20;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	8040D104
 * Size:	00007C
 */
bool ObjFinalResult::doUpdateFadein()
{
	updateCommon();
	if (m_autoScrollDelay > 1) {
		m_autoScrollDelay--;
	}

	m_fadeAlpha -= msVal.m_fadeAlphaRate;
	if (m_fadeAlpha < msVal.m_fadeAlphaRate) {
		m_fadeAlpha = 0;
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8040D180
 * Size:	00006C
 */
bool ObjFinalResult::doUpdateFadeout()
{
	updateCommon();
	m_fadeAlpha += msVal.m_fadeAlphaRate;
	if (m_fadeAlpha > (255 - msVal.m_fadeAlphaRate)) {
		m_fadeAlpha = 255;
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8040D1EC
 * Size:	0003F0
 */
void ObjFinalResult::doDraw(Graphics& gfx)
{
	J2DPane* pane1 = m_screen->search('Npre');
	J2DPane* pane2 = m_screen->search('Naft');
	J2DPane* pane3 = m_screen->search('Nmain');
	gfx.m_orthoGraph.setPort();
	pane1->show();
	pane2->hide();
	pane3->hide();
	m_screen->draw(gfx, gfx.m_orthoGraph);
	u32 x1 = 0;
	u32 x2 = 0;
	u32 y1 = 0;
	u32 y2 = 0;
	GXGetScissor(&x1, &x2, &y1, &y2);
	pane1->hide();
	pane2->hide();
	pane3->show();

	JUT_ASSERTLINE(479, getDispMember()->isID(OWNER_KH, MEMBER_FINAL_RESULT), "disp member err");
	DispFinalResult* disp  = static_cast<DispFinalResult*>(getDispMember());
	TotalResultData** data = &disp->m_totalResultData;
	for (int i = 0; i < 16; i++) {
		data[i]->m_screen = nullptr;
	}

	if (m_state == StatusNormal) {
		drawReplace(gfx, m_currentPage);
	} else {
		f32 thing;
		int page;
		if (m_state == StatusScrollUp) {
			thing = -m_scrollMove;
			page  = m_currentPage + 1;
		} else if (m_state == StatusScrollDown) {
			thing = m_scrollMove;
			page  = m_currentPage - 1;
		}
		pane3->add(0.0f, m_scrollYPos);
		drawReplace(gfx, page);
		pane3->add(0.0f, thing);
		drawReplace(gfx, m_currentPage);
	}
	GXSetScissor(x1, x2, y1, y2);
	gfx.m_orthoGraph.setPort();
	pane1->hide();
	pane2->hide();
	pane3->hide();
	m_screen->draw(gfx, gfx.m_orthoGraph);

	if (m_fadeAlpha) {
		gfx.m_orthoGraph.setPort();
		gfx.m_orthoGraph.setColor(JUtility::TColor(m_fadeAlpha));

		f32 zero = 0.0f;
		u16 x    = sys->getRenderModeObj()->fbWidth;
		u16 y    = sys->getRenderModeObj()->efbHeight;
		gfx.m_orthoGraph.fillBox(JGeometry::TBox2f(0.0f, 0.0f, x + zero, y + zero));
	}

	if (m_flags & SaveOpen) {
		gfx.m_perspGraph.setPort();
		m_saveMgr->draw();
	}
	/*
stwu     r1, -0x80(r1)
mflr     r0
stw      r0, 0x84(r1)
stfd     f31, 0x70(r1)
psq_st   f31, 120(r1), 0, qr0
stmw     r26, 0x58(r1)
mr       r27, r3
lis      r5, 0x4E707265@ha
lwz      r3, 0x3c(r3)
mr       r28, r4
addi     r6, r5, 0x4E707265@l
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r30, r3
lwz      r3, 0x3c(r27)
lis      r4, 0x4E616674@ha
li       r5, 0
lwz      r12, 0(r3)
addi     r6, r4, 0x4E616674@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r31, r3
lwz      r3, 0x3c(r27)
lis      r4, 0x6D61696E@ha
li       r5, 0x4e
lwz      r12, 0(r3)
addi     r6, r4, 0x6D61696E@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r0, r3
addi     r3, r28, 0xbc
lwz      r12, 0xbc(r28)
mr       r29, r0
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
li       r3, 1
li       r0, 0
stb      r3, 0xb0(r30)
mr       r4, r28
addi     r5, r28, 0xbc
stb      r0, 0xb0(r31)
stb      r0, 0xb0(r29)
lwz      r3, 0x3c(r27)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
li       r0, 0
addi     r3, r1, 0x28
stw      r0, 0x28(r1)
addi     r4, r1, 0x24
addi     r5, r1, 0x20
addi     r6, r1, 0x1c
stw      r0, 0x24(r1)
stw      r0, 0x20(r1)
stw      r0, 0x1c(r1)
bl       GXGetScissor
li       r4, 0
li       r0, 1
stb      r4, 0xb0(r30)
mr       r3, r27
stb      r4, 0xb0(r31)
stb      r0, 0xb0(r29)
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r5, 0x52534C54@ha
li       r4, 0x4b48
addi     r6, r5, 0x52534C54@l
li       r5, 0x465f
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040D33C
lis      r3, lbl_80498CD8@ha
lis      r5, lbl_80498FD8@ha
addi     r3, r3, lbl_80498CD8@l
li       r4, 0x1df
addi     r5, r5, lbl_80498FD8@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040D33C:
mr       r3, r27
bl       getDispMember__Q26Screen7ObjBaseFv
li       r0, 2
lwz      r4, 8(r3)
li       r3, 0
mtctr    r0

lbl_8040D354:
lwz      r5, 0(r4)
li       r0, 0
addi     r11, r3, 4
addi     r10, r3, 8
lwzx     r5, r5, r3
addi     r9, r3, 0xc
addi     r8, r3, 0x10
addi     r7, r3, 0x14
stb      r0, 0x18(r5)
addi     r6, r3, 0x18
addi     r5, r3, 0x1c
addi     r3, r3, 0x20
lwz      r12, 0(r4)
lwzx     r11, r12, r11
stb      r0, 0x18(r11)
lwz      r11, 0(r4)
lwzx     r10, r11, r10
stb      r0, 0x18(r10)
lwz      r10, 0(r4)
lwzx     r9, r10, r9
stb      r0, 0x18(r9)
lwz      r9, 0(r4)
lwzx     r8, r9, r8
stb      r0, 0x18(r8)
lwz      r8, 0(r4)
lwzx     r7, r8, r7
stb      r0, 0x18(r7)
lwz      r7, 0(r4)
lwzx     r6, r7, r6
stb      r0, 0x18(r6)
lwz      r6, 0(r4)
lwzx     r5, r6, r5
stb      r0, 0x18(r5)
bdnz     lbl_8040D354
lwz      r0, 0x148(r27)
cmpwi    r0, 0
bne      lbl_8040D3FC
lwz      r5, 0x130(r27)
mr       r3, r27
mr       r4, r28
bl       drawReplace__Q32kh6Screen14ObjFinalResultFR8Graphicsi
b        lbl_8040D47C

lbl_8040D3FC:
cmpwi    r0, 1
bne      lbl_8040D418
lfs      f0, 0x12c(r27)
lwz      r3, 0x130(r27)
fneg     f31, f0
addi     r26, r3, 1
b        lbl_8040D424

lbl_8040D418:
lwz      r3, 0x130(r27)
lfs      f31, 0x12c(r27)
addi     r26, r3, -1

lbl_8040D424:
mr       r3, r29
lfs      f1, lbl_805201A0@sda21(r2)
lwz      r12, 0(r29)
lfs      f2, 0x128(r27)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
mr       r3, r27
mr       r4, r28
mr       r5, r26
bl       drawReplace__Q32kh6Screen14ObjFinalResultFR8Graphicsi
mr       r3, r29
fmr      f2, f31
lwz      r12, 0(r29)
lfs      f1, lbl_805201A0@sda21(r2)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r5, 0x130(r27)
mr       r3, r27
mr       r4, r28
bl       drawReplace__Q32kh6Screen14ObjFinalResultFR8Graphicsi

lbl_8040D47C:
lwz      r3, 0x28(r1)
lwz      r4, 0x24(r1)
lwz      r5, 0x20(r1)
lwz      r6, 0x1c(r1)
bl       GXSetScissor
addi     r3, r28, 0xbc
lwz      r12, 0xbc(r28)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
li       r3, 0
li       r0, 1
stb      r3, 0xb0(r30)
mr       r4, r28
addi     r5, r28, 0xbc
stb      r0, 0xb0(r31)
stb      r3, 0xb0(r29)
lwz      r3, 0x3c(r27)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lbz      r0, 0x14f(r27)
cmplwi   r0, 0
beq      lbl_8040D598
addi     r3, r28, 0xbc
lwz      r12, 0xbc(r28)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lbz      r0, 0x14f(r27)
li       r8, 0
stb      r8, 0x18(r1)
addi     r3, r28, 0xbc
addi     r4, r1, 8
addi     r5, r1, 0xc
stb      r8, 0x19(r1)
addi     r6, r1, 0x10
addi     r7, r1, 0x14
stb      r8, 0x1a(r1)
stb      r0, 0x1b(r1)
lwz      r0, 0x18(r1)
stw      r0, 0x14(r1)
stw      r0, 0x10(r1)
stw      r0, 0xc(r1)
stw      r0, 8(r1)
bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
bl       getRenderModeObj__6SystemFv
lhz      r29, 6(r3)
bl       getRenderModeObj__6SystemFv
lhz      r4, 4(r3)
lis      r0, 0x4330
lfs      f3, lbl_805201A0@sda21(r2)
addi     r3, r28, 0xbc
stw      r4, 0x44(r1)
addi     r4, r1, 0x2c
lfd      f2, lbl_805201A8@sda21(r2)
stw      r0, 0x40(r1)
lfd      f0, 0x40(r1)
stw      r29, 0x4c(r1)
fsubs    f1, f0, f2
stw      r0, 0x48(r1)
lfd      f0, 0x48(r1)
fadds    f1, f3, f1
stfs     f3, 0x2c(r1)
fsubs    f0, f0, f2
stfs     f3, 0x30(r1)
fadds    f0, f3, f0
stfs     f1, 0x34(r1)
stfs     f0, 0x38(r1)
bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_8040D598:
lbz      r0, 0x14e(r27)
rlwinm.  r0, r0, 0, 0x1d, 0x1d
beq      lbl_8040D5C0
addi     r3, r28, 0x190
lwz      r12, 0x190(r28)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r27)
bl       draw__Q33ebi4Save4TMgrFv

lbl_8040D5C0:
psq_l    f31, 120(r1), 0, qr0
lfd      f31, 0x70(r1)
lmw      r26, 0x58(r1)
lwz      r0, 0x84(r1)
mtlr     r0
addi     r1, r1, 0x80
blr
	*/
}

/*
 * --INFO--
 * Address:	8040D5DC
 * Size:	0005F4
 */
void ObjFinalResult::updateCommon()
{
	m_screen->animation();
	f32 time = m_timer;
	if (time >= 1.0f) {
		m_color = getClr(time, msVal.m_colors[0], msVal.m_colors[1]);
	} else if (time >= 2.0f) {
		m_color = getClr(time - 1.0f, msVal.m_colors[1], msVal.m_colors[2]);
	} else if (time >= 3.0f) {
		m_color = getClr(time - 2.0f, msVal.m_colors[2], msVal.m_colors[1]);
	} else if (time >= 4.0f) {
		m_color = getClr(time - 3.0f, msVal.m_colors[1], msVal.m_colors[0]);
	}

	m_timer += msVal._0C;
	if (m_timer >= 4.0f) {
		m_timer -= 4.0f;
	}
	m_screen->update();
	/*
stwu     r1, -0x80(r1)
mflr     r0
stw      r0, 0x84(r1)
stfd     f31, 0x70(r1)
psq_st   f31, 120(r1), 0, qr0
stw      r31, 0x6c(r1)
mr       r31, r3
lis      r4, 0x6D61736B@ha
lwz      r3, 0x3c(r3)
addi     r6, r4, 0x6D61736B@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r4, r3
addi     r3, r1, 0x24
li       r5, 0
bl       getGlbVtx__7J2DPaneCFUc
lwz      r3, 0x3c(r31)
lis      r4, 0x6D61736B@ha
lwz      r7, 0x24(r1)
addi     r6, r4, 0x6D61736B@l
lwz      r12, 0(r3)
li       r5, 0x4e
lwz      r4, 0x28(r1)
lwz      r0, 0x2c(r1)
lwz      r12, 0x3c(r12)
stw      r7, 0x3c(r1)
stw      r4, 0x40(r1)
stw      r0, 0x44(r1)
mtctr    r12
bctrl
mr       r4, r3
addi     r3, r1, 0x18
li       r5, 3
bl       getGlbVtx__7J2DPaneCFUc
lfs      f0, lbl_805201B0@sda21(r2)
lfs      f31, 0x40(r1)
lwz      r4, 0x18(r1)
lwz      r3, 0x1c(r1)
fadds    f1, f0, f31
lwz      r0, 0x20(r1)
stw      r4, 0x30(r1)
stw      r3, 0x34(r1)
stw      r0, 0x38(r1)
bl       __cvt_fp2unsigned
lfs      f0, 0x34(r1)
stw      r3, 0x140(r31)
fsubs    f1, f0, f31
bl       __cvt_fp2unsigned
stw      r3, 0x144(r31)
lis      r0, 0x4330
lfs      f0, lbl_805201B4@sda21(r2)
lfs      f2, 0x74(r31)
lwz      r3, 0x50(r31)
stw      r0, 0x48(r1)
lfd      f1, lbl_805201D8@sda21(r2)
stfs     f2, 8(r3)
lfs      f2, 0x74(r31)
fadds    f0, f2, f0
stfs     f0, 0x74(r31)
lwz      r3, 0x50(r31)
lfs      f2, 0x74(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x4c(r1)
lfd      f0, 0x48(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_8040D704
lfs      f0, lbl_805201A0@sda21(r2)
stfs     f0, 0x74(r31)

lbl_8040D704:
lfs      f0, 0x78(r31)
lwz      r3, 0x40(r31)
lfs      f1, lbl_805201B4@sda21(r2)
stfs     f0, 8(r3)
lfs      f0, lbl_805201B8@sda21(r2)
lfs      f2, 0x78(r31)
lwz      r3, 0x58(r31)
stfs     f2, 8(r3)
lfs      f2, 0x78(r31)
fadds    f1, f2, f1
stfs     f1, 0x78(r31)
lfs      f1, 0x78(r31)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_8040D748
lfs      f0, lbl_805201A0@sda21(r2)
stfs     f0, 0x78(r31)

lbl_8040D748:
lfs      f0, 0x7c(r31)
lwz      r3, 0x4c(r31)
lfs      f1, lbl_805201B4@sda21(r2)
stfs     f0, 8(r3)
lfs      f0, lbl_805201BC@sda21(r2)
lfs      f2, 0x7c(r31)
lwz      r3, 0x5c(r31)
stfs     f2, 8(r3)
lfs      f2, 0x7c(r31)
fadds    f1, f2, f1
stfs     f1, 0x7c(r31)
lfs      f1, 0x7c(r31)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_8040D78C
lfs      f0, lbl_805201A0@sda21(r2)
stfs     f0, 0x7c(r31)

lbl_8040D78C:
lfs      f1, 0x80(r31)
lis      r0, 0x4330
lwz      r3, 0x54(r31)
lfs      f0, lbl_805201B4@sda21(r2)
stfs     f1, 8(r3)
lfd      f1, lbl_805201D8@sda21(r2)
lfs      f2, 0x80(r31)
lwz      r3, 0x60(r31)
stw      r0, 0x48(r1)
stfs     f2, 8(r3)
lfs      f2, 0x84(r31)
lwz      r3, 0x64(r31)
stfs     f2, 8(r3)
lfs      f2, 0x88(r31)
lwz      r3, 0x68(r31)
stfs     f2, 8(r3)
lfs      f2, 0x80(r31)
fadds    f0, f2, f0
stfs     f0, 0x80(r31)
lwz      r3, 0x60(r31)
lfs      f2, 0x80(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x4c(r1)
lfd      f0, 0x48(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_8040D808
lfs      f0, lbl_805201A0@sda21(r2)
stfs     f0, 0x80(r31)

lbl_8040D808:
lfs      f1, 0x84(r31)
lis      r0, 0x4330
lfs      f0, lbl_805201B4@sda21(r2)
stw      r0, 0x48(r1)
fadds    f0, f1, f0
lfd      f1, lbl_805201D8@sda21(r2)
stfs     f0, 0x84(r31)
lwz      r3, 0x64(r31)
lfs      f2, 0x84(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x4c(r1)
lfd      f0, 0x48(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_8040D854
lfs      f0, lbl_805201A0@sda21(r2)
stfs     f0, 0x84(r31)

lbl_8040D854:
lfs      f1, 0x88(r31)
lis      r0, 0x4330
lfs      f0, lbl_805201B4@sda21(r2)
stw      r0, 0x48(r1)
fadds    f0, f1, f0
lfd      f1, lbl_805201D8@sda21(r2)
stfs     f0, 0x88(r31)
lwz      r3, 0x68(r31)
lfs      f2, 0x88(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x4c(r1)
lfd      f0, 0x48(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_8040D8A0
lfs      f0, lbl_805201A0@sda21(r2)
stfs     f0, 0x88(r31)

lbl_8040D8A0:
lfs      f0, 0x6c(r31)
lwz      r3, 0x44(r31)
stfs     f0, 8(r3)
lbz      r3, 0x14c(r31)
cmplwi   r3, 0
bne      lbl_8040D95C
lis      r3, msVal__Q32kh6Screen14ObjFinalResult@ha
lfs      f2, 0x6c(r31)
lfs      f1, msVal__Q32kh6Screen14ObjFinalResult@l(r3)
lfs      f0, lbl_805201C0@sda21(r2)
fadds    f1, f2, f1
stfs     f1, 0x6c(r31)
lfs      f1, 0x6c(r31)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_8040D964
lfs      f0, lbl_805201A0@sda21(r2)
stfs     f0, 0x6c(r31)
bl       rand
lis      r5, 0x4330
xoris    r0, r3, 0x8000
stw      r0, 0x4c(r1)
lis      r3, msVal__Q32kh6Screen14ObjFinalResult@ha
addi     r4, r3, msVal__Q32kh6Screen14ObjFinalResult@l
lfd      f2, lbl_805201D8@sda21(r2)
stw      r5, 0x48(r1)
lbz      r3, 0x1d(r4)
lfd      f1, 0x48(r1)
lfs      f0, lbl_805201C4@sda21(r2)
fsubs    f1, f1, f2
lbz      r0, 0x1c(r4)
stw      r3, 0x54(r1)
lfd      f2, lbl_805201A8@sda21(r2)
fdivs    f3, f1, f0
stw      r5, 0x50(r1)
lfd      f1, 0x50(r1)
stw      r0, 0x5c(r1)
stw      r5, 0x58(r1)
lfd      f0, 0x58(r1)
fsubs    f1, f1, f2
fsubs    f0, f0, f2
fmadds   f0, f1, f3, f0
fctiwz   f0, f0
stfd     f0, 0x60(r1)
lwz      r0, 0x64(r1)
stb      r0, 0x14c(r31)
b        lbl_8040D964

lbl_8040D95C:
addi     r0, r3, -1
stb      r0, 0x14c(r31)

lbl_8040D964:
lfs      f0, 0x70(r31)
lwz      r3, 0x48(r31)
stfs     f0, 8(r3)
lbz      r3, 0x14d(r31)
cmplwi   r3, 0
bne      lbl_8040DA20
lis      r3, msVal__Q32kh6Screen14ObjFinalResult@ha
lfs      f2, 0x70(r31)
lfs      f1, msVal__Q32kh6Screen14ObjFinalResult@l(r3)
lfs      f0, lbl_805201C8@sda21(r2)
fadds    f1, f2, f1
stfs     f1, 0x70(r31)
lfs      f1, 0x70(r31)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_8040DA28
lfs      f0, lbl_805201A0@sda21(r2)
stfs     f0, 0x70(r31)
bl       rand
lis      r5, 0x4330
xoris    r0, r3, 0x8000
stw      r0, 0x64(r1)
lis      r3, msVal__Q32kh6Screen14ObjFinalResult@ha
addi     r4, r3, msVal__Q32kh6Screen14ObjFinalResult@l
lfd      f2, lbl_805201D8@sda21(r2)
stw      r5, 0x60(r1)
lbz      r3, 0x1d(r4)
lfd      f1, 0x60(r1)
lfs      f0, lbl_805201C4@sda21(r2)
fsubs    f1, f1, f2
lbz      r0, 0x1c(r4)
stw      r3, 0x5c(r1)
lfd      f2, lbl_805201A8@sda21(r2)
fdivs    f3, f1, f0
stw      r5, 0x58(r1)
lfd      f1, 0x58(r1)
stw      r0, 0x54(r1)
stw      r5, 0x50(r1)
lfd      f0, 0x50(r1)
fsubs    f1, f1, f2
fsubs    f0, f0, f2
fmadds   f0, f1, f3, f0
fctiwz   f0, f0
stfd     f0, 0x48(r1)
lwz      r0, 0x4c(r1)
stb      r0, 0x14d(r31)
b        lbl_8040DA28

lbl_8040DA20:
addi     r0, r3, -1
stb      r0, 0x14d(r31)

lbl_8040DA28:
lwz      r3, 0x3c(r31)
bl       animation__9J2DScreenFv
lfs      f1, 0x120(r31)
lfs      f2, lbl_805201B4@sda21(r2)
fcmpo    cr0, f1, f2
bge      lbl_8040DA80
lis      r3, msVal__Q32kh6Screen14ObjFinalResult@ha
mr       r4, r31
addi     r6, r3, msVal__Q32kh6Screen14ObjFinalResult@l
addi     r5, r6, 0x10
addi     r3, r1, 0x14
addi     r6, r6, 0x14
bl
getClr__Q32kh6Screen14ObjFinalResultFRCQ28JUtility6TColorRCQ28JUtility6TColorf
lbz      r0, 0x14(r1)
stb      r0, 0x124(r31)
lbz      r0, 0x15(r1)
stb      r0, 0x125(r31)
lbz      r0, 0x16(r1)
stb      r0, 0x126(r31)
lbz      r0, 0x17(r1)
stb      r0, 0x127(r31)
b        lbl_8040DB6C

lbl_8040DA80:
lfs      f0, lbl_805201A4@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_8040DAD0
lis      r3, msVal__Q32kh6Screen14ObjFinalResult@ha
fsubs    f1, f1, f2
addi     r6, r3, msVal__Q32kh6Screen14ObjFinalResult@l
mr       r4, r31
addi     r3, r1, 0x10
addi     r5, r6, 0x14
addi     r6, r6, 0x18
bl
getClr__Q32kh6Screen14ObjFinalResultFRCQ28JUtility6TColorRCQ28JUtility6TColorf
lbz      r0, 0x10(r1)
stb      r0, 0x124(r31)
lbz      r0, 0x11(r1)
stb      r0, 0x125(r31)
lbz      r0, 0x12(r1)
stb      r0, 0x126(r31)
lbz      r0, 0x13(r1)
stb      r0, 0x127(r31)
b        lbl_8040DB6C

lbl_8040DAD0:
lfs      f2, lbl_805201CC@sda21(r2)
fcmpo    cr0, f1, f2
bge      lbl_8040DB20
lis      r3, msVal__Q32kh6Screen14ObjFinalResult@ha
fsubs    f1, f1, f0
addi     r6, r3, msVal__Q32kh6Screen14ObjFinalResult@l
mr       r4, r31
addi     r3, r1, 0xc
addi     r5, r6, 0x18
addi     r6, r6, 0x14
bl
getClr__Q32kh6Screen14ObjFinalResultFRCQ28JUtility6TColorRCQ28JUtility6TColorf
lbz      r0, 0xc(r1)
stb      r0, 0x124(r31)
lbz      r0, 0xd(r1)
stb      r0, 0x125(r31)
lbz      r0, 0xe(r1)
stb      r0, 0x126(r31)
lbz      r0, 0xf(r1)
stb      r0, 0x127(r31)
b        lbl_8040DB6C

lbl_8040DB20:
lfs      f0, lbl_805201D0@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_8040DB6C
lis      r3, msVal__Q32kh6Screen14ObjFinalResult@ha
fsubs    f1, f1, f2
addi     r6, r3, msVal__Q32kh6Screen14ObjFinalResult@l
mr       r4, r31
addi     r3, r1, 8
addi     r5, r6, 0x14
addi     r6, r6, 0x10
bl
getClr__Q32kh6Screen14ObjFinalResultFRCQ28JUtility6TColorRCQ28JUtility6TColorf
lbz      r0, 8(r1)
stb      r0, 0x124(r31)
lbz      r0, 9(r1)
stb      r0, 0x125(r31)
lbz      r0, 0xa(r1)
stb      r0, 0x126(r31)
lbz      r0, 0xb(r1)
stb      r0, 0x127(r31)

lbl_8040DB6C:
lis      r3, msVal__Q32kh6Screen14ObjFinalResult@ha
lfs      f2, 0x120(r31)
addi     r3, r3, msVal__Q32kh6Screen14ObjFinalResult@l
lfs      f0, lbl_805201D0@sda21(r2)
lfs      f1, 0xc(r3)
fadds    f1, f2, f1
stfs     f1, 0x120(r31)
lfs      f1, 0x120(r31)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_8040DBA0
fsubs    f0, f1, f0
stfs     f0, 0x120(r31)

lbl_8040DBA0:
lwz      r3, 0x3c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
psq_l    f31, 120(r1), 0, qr0
lwz      r0, 0x84(r1)
lfd      f31, 0x70(r1)
lwz      r31, 0x6c(r1)
mtlr     r0
addi     r1, r1, 0x80
blr
	*/
}

/*
 * --INFO--
 * Address:	8040DBD0
 * Size:	0003A4
 */
void ObjFinalResult::statusNormal()
{
	if (m_currentPage == 0) {
		m_fadePaneYameU->fadeout();
		m_fadePaneYameL->fadein();
		m_stickAnimMgr->stickDown();
		m_fadePaneAButton->fadeout();
	} else if (m_currentPage == 7) {
		m_fadePaneYameU->fadein();
		m_fadePaneYameL->fadeout();
		m_stickAnimMgr->stickUp();
		m_fadePaneAButton->fadein();
	} else {
		m_fadePaneYameU->fadein();
		m_fadePaneYameL->fadein();
		m_stickAnimMgr->stickUpDown();
		m_fadePaneAButton->fadeout();
	}
	m_fadePane3DStick->fadein();
	Controller* pad = getGamePad();
	if (pad->m_padButton.m_mask & (Controller::PRESS_DPAD_UP | Controller::UNKNOWN_32)) {
		if (m_currentPage) {
			m_currentPage--;
			m_screen->search(getSerialTagName('Nsel00', m_currentPage + 1))->setAlpha(msVal._21);
			m_screen->search(getSerialTagName('Nsel00', m_currentPage))->setAlpha(255);
			m_screen->search(getSerialTagName('Nicon00', m_currentPage + 1))->setAlpha(msVal._21);
			m_screen->search(getSerialTagName('Nicon00', m_currentPage))->setAlpha(255);
			m_state = StatusScrollUp;
			statusScrollUp();
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
		}
	}
	pad = getGamePad();
	if (pad->m_padButton.m_mask & (Controller::PRESS_DPAD_DOWN | Controller::UNKNOWN_31)) {
		if (m_currentPage != 7) {
			m_currentPage++;
			m_screen->search(getSerialTagName('Nsel00', m_currentPage - 1))->setAlpha(msVal._21);
			m_screen->search(getSerialTagName('Nsel00', m_currentPage))->setAlpha(255);
			m_screen->search(getSerialTagName('Nicon00', m_currentPage - 1))->setAlpha(msVal._21);
			m_screen->search(getSerialTagName('Nicon00', m_currentPage))->setAlpha(255);
			m_state = StatusScrollDown;
			statusScrollDown();
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
		}
	}
}

/*
 * --INFO--
 * Address:	8040DF74
 * Size:	00008C
 */
void ObjFinalResult::statusScrollUp()
{
	m_scrollYPos = m_scrollMove - (m_scrollMove * (f32)(m_scrollTargetPos - m_scrollMoveProgress)) / (f32)m_scrollTargetPos;

	if (m_scrollMoveProgress++ == m_scrollTargetPos) {
		m_scrollMoveProgress = 1;
		m_state              = StatusNormal;
		m_scrollYPos         = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8040E000
 * Size:	000090
 */
void ObjFinalResult::statusScrollDown()
{
	m_scrollYPos = -m_scrollMove - (m_scrollMove * (f32)(m_scrollMoveProgress - m_scrollTargetPos)) / (f32)m_scrollTargetPos;

	if (m_scrollMoveProgress++ == m_scrollTargetPos) {
		m_scrollMoveProgress = 1;
		m_state              = StatusNormal;
		m_scrollYPos         = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8040E090
 * Size:	0001B8
 */
void ObjFinalResult::statusForceScroll()
{
	if (!m_autoScrollDelay) {
		if (m_flags & 8) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
			m_flags &= ~8;
		}
		m_scrollYPos = -m_scrollMove - (m_scrollMove * (f32)(m_scrollMoveProgress - m_scrollTargetPos)) / (f32)m_scrollTargetPos;
		if (m_scrollMoveProgress++ == m_scrollTargetPos) {
			int page = m_currentPage;
			if (page == 7) {
				m_screen->search(getSerialTagName('Nsel00', page))->setAlpha(255);
				m_screen->search(getSerialTagName('Nicon00', m_currentPage))->setAlpha(255);
				m_scrollTargetPos = msVal._04;
				m_state           = StatusNormal;
			} else {
				m_currentPage++;
			}
			m_scrollMoveProgress = 1;
			m_scrollYPos         = 0.0f;
			m_autoScrollDelay    = msVal._08;
			m_flags |= 8;
		}
	} else {
		m_autoScrollDelay--;
	}
}

/*
 * --INFO--
 * Address:	8040E248
 * Size:	0008C0
 */
void ObjFinalResult::drawReplace(Graphics& gfx, int id)
{
	JUT_ASSERTLINE(726, getDispMember()->isID(OWNER_KH, MEMBER_FINAL_RESULT), "disp member err");
	DispFinalResult* disp = static_cast<DispFinalResult*>(getDispMember());

	if (id == 7) {
		m_screen->search('Nsetp_c')->hide();
		m_screen->search('Nsetp_d')->show();
	} else {
		m_screen->search('Nsetp_c')->show();
		m_screen->search('Nsetp_d')->hide();
	}
	/*
stwu     r1, -0x160(r1)
mflr     r0
lis      r6, lbl_80498CD8@ha
stw      r0, 0x164(r1)
stmw     r18, 0x128(r1)
mr       r28, r3
mr       r29, r4
mr       r18, r5
addi     r25, r6, lbl_80498CD8@l
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r5, 0x52534C54@ha
li       r4, 0x4b48
addi     r6, r5, 0x52534C54@l
li       r5, 0x465f
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040E2A0
addi     r3, r25, 0
addi     r5, r25, 0x300
li       r4, 0x2d6
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040E2A0:
mr       r3, r28
bl       getDispMember__Q26Screen7ObjBaseFv
slwi     r22, r18, 1
li       r0, 0x10
addi     r21, r22, 1
addi     r5, r1, 0xa4
addi     r4, r25, 0x374
lwz      r30, 8(r3)
mtctr    r0

lbl_8040E2C4:
lwz      r3, 4(r4)
lwzu     r0, 8(r4)
stw      r3, 4(r5)
stwu     r0, 8(r5)
bdnz     lbl_8040E2C4
cmpwi    r18, 7
beq      lbl_8040E33C
lwz      r3, 0x3c(r28)
lis      r5, 0x74705F63@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74705F63@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r5, 0x74705F64@ha
stb      r0, 0xb0(r3)
lis      r4, 0x004E7365@ha
addi     r6, r5, 0x74705F64@l
lwz      r3, 0x3c(r28)
addi     r5, r4, 0x004E7365@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)
b        lbl_8040E394

lbl_8040E33C:
lwz      r3, 0x3c(r28)
lis      r5, 0x74705F63@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74705F63@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r5, 0x74705F64@ha
stb      r0, 0xb0(r3)
lis      r4, 0x004E7365@ha
addi     r6, r5, 0x74705F64@l
lwz      r3, 0x3c(r28)
addi     r5, r4, 0x004E7365@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)

lbl_8040E394:
slwi     r0, r22, 3
addi     r24, r1, 0xa8
mr       r27, r28
slwi     r31, r22, 2
add      r24, r24, r0
li       r22, 0
li       r26, 0
lis      r20, 0x6974
lis      r19, 0x746c
lis      r18, 0x54

lbl_8040E3BC:
lwz      r3, 0(r30)
addi     r0, r26, 4
lwzx     r3, r31, r3
lwzx     r0, r3, r0
cmpwi    r0, 0
bge      lbl_8040E3EC
li       r0, 0
li       r4, 1
stw      r0, 0xe0(r27)
lwz      r3, 0xa0(r27)
bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
b        lbl_8040E3FC

lbl_8040E3EC:
stw      r0, 0xe0(r27)
li       r4, 0
lwz      r3, 0xa0(r27)
bl       setBlind__Q32og6Screen18CallBack_CounterRVFb

lbl_8040E3FC:
lwz      r3, 0x3c(r28)
addi     r6, r20, 0x6c30
li       r5, 0x5474
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r0, 0(r24)
addi     r6, r19, 0x3073
lwz      r4, 4(r24)
addi     r5, r18, 0x7469
stw      r4, 0x1c(r3)
stw      r0, 0x18(r3)
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r0, 0(r24)
addi     r22, r22, 1
lwz      r4, 4(r24)
cmpwi    r22, 4
addi     r26, r26, 4
addi     r27, r27, 4
stw      r4, 0x1c(r3)
stw      r0, 0x18(r3)
blt      lbl_8040E3BC
slwi     r0, r21, 3
addi     r22, r1, 0xa8
mr       r23, r28
slwi     r21, r21, 2
add      r22, r22, r0
li       r20, 0
li       r24, 0
lis      r26, 0x746c
lis      r27, 0x54
lis      r18, 0x6c65
lis      r19, 0x5474

lbl_8040E494:
lwz      r3, 0(r30)
addi     r0, r24, 4
lwzx     r3, r21, r3
lwzx     r0, r3, r0
cmpwi    r0, 0
bge      lbl_8040E4C4
li       r0, 0
li       r4, 1
stw      r0, 0xf0(r23)
lwz      r3, 0xb0(r23)
bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
b        lbl_8040E4D4

lbl_8040E4C4:
stw      r0, 0xf0(r23)
li       r4, 0
lwz      r3, 0xb0(r23)
bl       setBlind__Q32og6Screen18CallBack_CounterRVFb

lbl_8040E4D4:
lwz      r3, 0x3c(r28)
addi     r6, r26, 0x6531
addi     r5, r27, 0x7469
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r0, 0(r22)
addi     r6, r18, 0x3173
lwz      r4, 4(r22)
addi     r5, r19, 0x6974
stw      r4, 0x1c(r3)
stw      r0, 0x18(r3)
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r0, 0(r22)
addi     r20, r20, 1
lwz      r4, 4(r22)
cmpwi    r20, 4
addi     r24, r24, 4
addi     r23, r23, 4
stw      r4, 0x1c(r3)
stw      r0, 0x18(r3)
blt      lbl_8040E494
lwz      r0, 0x124(r28)
lis      r4, 0x796F7031@ha
lis      r3, 0x50746F6B@ha
stw      r0, 0x44(r1)
addi     r6, r4, 0x796F7031@l
addi     r5, r3, 0x50746F6B@l
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
addi     r4, r1, 0x44
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
lwz      r0, 0x124(r28)
lis      r4, 0x61647031@ha
lis      r3, 0x50746F6D@ha
stw      r0, 0x40(r1)
addi     r6, r4, 0x61647031@l
addi     r5, r3, 0x50746F6D@l
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
addi     r4, r1, 0x40
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
lwz      r0, 0x124(r28)
lis      r3, 0x6B6F6E31@ha
addi     r6, r3, 0x6B6F6E31@l
li       r5, 0x50
stw      r0, 0x3c(r1)
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
addi     r4, r1, 0x3c
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
lwz      r0, 0x124(r28)
lis      r3, 0x6B6F6E33@ha
addi     r6, r3, 0x6B6F6E33@l
li       r5, 0x50
stw      r0, 0x38(r1)
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
addi     r4, r1, 0x38
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
lfd      f11, 0x3f8(r25)
addi     r22, r1, 0x90
lfd      f10, 0x400(r25)
addi     r23, r1, 0x78
lfd      f9, 0x408(r25)
addi     r24, r1, 0x60
lfd      f8, 0x410(r25)
addi     r26, r1, 0x48
lfd      f7, 0x418(r25)
li       r20, 0
lfd      f6, 0x420(r25)
lfd      f5, 0x428(r25)
lfd      f4, 0x430(r25)
lfd      f3, 0x438(r25)
lfd      f2, 0x440(r25)
lfd      f1, 0x448(r25)
lfd      f0, 0x450(r25)
stfd     f11, 0x90(r1)
stfd     f10, 0x98(r1)
stfd     f9, 0xa0(r1)
stfd     f8, 0x78(r1)
stfd     f7, 0x80(r1)
stfd     f6, 0x88(r1)
stfd     f5, 0x60(r1)
stfd     f4, 0x68(r1)
stfd     f3, 0x70(r1)
stfd     f2, 0x48(r1)
stfd     f1, 0x50(r1)
stfd     f0, 0x58(r1)

lbl_8040E6AC:
lwz      r0, 0(r30)
lwzx     r3, r31, r0
lwz      r0, 0x14(r3)
cmpw     r20, r0
bne      lbl_8040E6FC
lwz      r0, 0x124(r28)
lwz      r5, 0(r22)
stw      r0, 0x34(r1)
lwz      r6, 4(r22)
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
addi     r4, r1, 0x34
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
b        lbl_8040E74C

lbl_8040E6FC:
li       r3, 0
li       r0, 0xff
stb      r3, 0x2c(r1)
lwz      r5, 0(r22)
stb      r0, 0x2d(r1)
lwz      r6, 4(r22)
stb      r0, 0x2e(r1)
stb      r3, 0x2f(r1)
lwz      r0, 0x2c(r1)
stw      r0, 0x30(r1)
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
addi     r4, r1, 0x30
lwz      r12, 0x128(r12)
mtctr    r12
bctrl

lbl_8040E74C:
lwz      r0, 0(r30)
lwzx     r3, r21, r0
lwz      r0, 0x14(r3)
cmpw     r20, r0
bne      lbl_8040E80C
lwz      r0, 0x124(r28)
lwz      r5, 0(r23)
stw      r0, 0x28(r1)
lwz      r6, 4(r23)
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
addi     r4, r1, 0x28
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
lwz      r0, 0x124(r28)
lwz      r5, 0(r24)
stw      r0, 0x24(r1)
lwz      r6, 4(r24)
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
addi     r4, r1, 0x24
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
lwz      r0, 0x124(r28)
lwz      r5, 0(r26)
stw      r0, 0x20(r1)
lwz      r6, 4(r26)
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
addi     r4, r1, 0x20
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
b        lbl_8040E8FC

lbl_8040E80C:
li       r3, 0
li       r0, 0xff
stb      r3, 0x18(r1)
lwz      r5, 0(r23)
stb      r0, 0x19(r1)
lwz      r6, 4(r23)
stb      r0, 0x1a(r1)
stb      r3, 0x1b(r1)
lwz      r0, 0x18(r1)
stw      r0, 0x1c(r1)
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
addi     r4, r1, 0x1c
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
li       r3, 0
li       r0, 0xff
stb      r3, 0x10(r1)
lwz      r5, 0(r24)
stb      r0, 0x11(r1)
lwz      r6, 4(r24)
stb      r0, 0x12(r1)
stb      r3, 0x13(r1)
lwz      r0, 0x10(r1)
stw      r0, 0x14(r1)
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
addi     r4, r1, 0x14
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
li       r3, 0
li       r0, 0xff
stb      r3, 8(r1)
lwz      r5, 0(r26)
stb      r0, 9(r1)
lwz      r6, 4(r26)
stb      r0, 0xa(r1)
stb      r3, 0xb(r1)
lwz      r0, 8(r1)
stw      r0, 0xc(r1)
lwz      r3, 0x3c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
addi     r4, r1, 0xc
lwz      r12, 0x128(r12)
mtctr    r12
bctrl

lbl_8040E8FC:
addi     r20, r20, 1
addi     r23, r23, 8
cmpwi    r20, 3
addi     r24, r24, 8
addi     r26, r26, 8
addi     r22, r22, 8
blt      lbl_8040E6AC
li       r19, 0
mr       r18, r28

lbl_8040E920:
lwz      r3, 0xa0(r18)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r3, 0xb0(r18)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
addi     r19, r19, 1
addi     r18, r18, 4
cmpwi    r19, 4
blt      lbl_8040E920
addi     r3, r29, 0xbc
lwz      r12, 0xbc(r29)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
bl       getRenderModeObj__6SystemFv
lhz      r5, 4(r3)
li       r3, 0
lwz      r4, 0x140(r28)
lwz      r6, 0x144(r28)
bl       GXSetScissor
lwz      r3, 0x3c(r28)
mr       r4, r29
addi     r5, r29, 0xbc
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lwz      r4, 0(r30)
lis      r3, 0x6D616765@ha
li       r0, 1
li       r5, 0x5069
lwzx     r4, r4, r31
addi     r6, r3, 0x6D616765@l
stb      r0, 0x18(r4)
lwz      r3, 0(r30)
lwzx     r3, r3, r31
lwz      r3, 0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r20, r3
lwz      r3, 0x3c(r28)
lis      r4, 0x69637430@ha
li       r5, 0x5070
lwz      r12, 0(r3)
addi     r6, r4, 0x69637430@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
addi     r3, r3, 0x80
addi     r4, r20, 0x50
bl       PSMTXCopy
lwz      r4, 0(r30)
lis      r3, 0x6D616765@ha
li       r0, 1
li       r5, 0x5069
lwzx     r4, r4, r21
addi     r6, r3, 0x6D616765@l
stb      r0, 0x18(r4)
lwz      r3, 0(r30)
lwzx     r3, r3, r21
lwz      r3, 0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r20, r3
lwz      r3, 0x3c(r28)
lis      r4, 0x69637431@ha
li       r5, 0x5070
lwz      r12, 0(r3)
addi     r6, r4, 0x69637431@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
addi     r3, r3, 0x80
addi     r4, r20, 0x50
bl       PSMTXCopy
li       r18, 0
lwz      r20, 0x144(r28)
lwz      r19, 0x140(r28)
mr       r21, r18

lbl_8040EA80:
lwz      r3, 0(r30)
lwzx     r3, r3, r21
lbz      r0, 0x18(r3)
cmplwi   r0, 1
bne      lbl_8040EAE4
addi     r3, r29, 0xbc
lwz      r12, 0xbc(r29)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
bl       getRenderModeObj__6SystemFv
lhz      r5, 4(r3)
mr       r4, r19
mr       r6, r20
li       r3, 0
bl       GXSetScissor
lwz      r3, 0(r30)
mr       r4, r29
addi     r5, r29, 0xbc
lwzx     r3, r3, r21
lwz      r3, 0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl

lbl_8040EAE4:
addi     r18, r18, 1
addi     r21, r21, 4
cmpwi    r18, 0x10
blt      lbl_8040EA80
lmw      r18, 0x128(r1)
lwz      r0, 0x164(r1)
mtlr     r0
addi     r1, r1, 0x160
blr
	*/
}

/*
 * --INFO--
 * Address:	8040EB08
 * Size:	000128
 */
JUtility::TColor ObjFinalResult::getClr(const JUtility::TColor& col1, const JUtility::TColor& col2, f32 factor)
{
	return JUtility::TColor((factor * (f32)(col2.r - col1.r) + (f32)col1.r), (factor * (f32)(col2.g - col1.g) + (f32)col1.g),
	                        (factor * (f32)(col2.b - col1.b) + (f32)col1.b), (factor * (f32)(col2.a - col1.a) + (f32)col1.a));
}

/*
 * --INFO--
 * Address:	8040EC30
 * Size:	0000D8
 */
void SceneFinalResult::doUserCallBackFunc(Resource::MgrCommand*)
{
	JUT_ASSERTLINE(856, m_dispMember->isID(OWNER_KH, MEMBER_FINAL_RESULT), "disp member err");
	og::newScreen::makeLanguageResName(m_name, "result_final.szs");
	LoadResource::Arg arg(m_name);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
	JKRArchive* arc;
	if (node) {
		arc = node->m_archive;
		registObj(new ObjFinalResult, arc);
	} else {
		JUT_PANICLINE(864, "failed");
	}

	/*
stwu     r1, -0x40(r1)
mflr     r0
lis      r5, 0x52534C54@ha
lis      r4, lbl_80498CD8@ha
stw      r0, 0x44(r1)
addi     r6, r5, 0x52534C54@l
li       r5, 0x465f
stw      r31, 0x3c(r1)
addi     r31, r4, lbl_80498CD8@l
li       r4, 0x4b48
stw      r30, 0x38(r1)
mr       r30, r3
lwz      r3, 0x21c(r3)
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040EC84
addi     r3, r31, 0
addi     r5, r31, 0x300
li       r4, 0x358
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040EC84:
addi     r3, r30, 4
addi     r4, r31, 0x458
bl       makeLanguageResName__Q22og9newScreenFPcPCc
addi     r3, r1, 8
addi     r4, r30, 4
bl       __ct__Q212LoadResource3ArgFPCc
lwz      r3, gLoadResourceMgr@sda21(r13)
addi     r4, r1, 8
bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
cmplwi   r3, 0
beq      lbl_8040ECDC
lwz      r31, 0x34(r3)
li       r3, 0x150
bl       __nw__FUl
or.      r4, r3, r3
beq      lbl_8040ECCC
bl       __ct__Q32kh6Screen14ObjFinalResultFv
mr       r4, r3

lbl_8040ECCC:
mr       r3, r30
mr       r5, r31
bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
b        lbl_8040ECF0

lbl_8040ECDC:
addi     r3, r31, 0
li       r4, 0x360
addi     r5, r2, lbl_80520198@sda21
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040ECF0:
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
lwz      r30, 0x38(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	8040ED08
 * Size:	0002E4
 */
TotalResultData** SceneFinalResult::createDispMember(const int*, const int*, Game::Highscore** scores)
{
	TotalResultData** data = new TotalResultData*;
	if (data) {
		char* bloNames[16]
		    = { "result_final_image00.blo", "result_final_image01.blo", "result_final_image02.blo", "result_final_image03.blo",
			    "result_final_image04.blo", "result_final_image05.blo", "result_final_image06.blo", "result_final_image07.blo",
			    "result_final_image08.blo", "result_final_image09.blo", "result_final_image10.blo", "result_final_image11.blo",
			    "result_final_image12.blo", "result_final_image13.blo", "result_final_image14.blo", "result_final_image15.blo" };
		int scoreIDs[16] = { 0, 8, 2, 1, 3, 4, 5, 6, 7, 14, 10, 11, 9, 13, 12 };
		LoadResource::Arg arg("/new_screen/cmn/result_final_image.szs");
		LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
		JKRArchive* arc;
		if (node) {
			arc = node->m_archive;
		} else {
			JUT_PANICLINE(107, "failed");
		}

		for (int i = 0; i < 16; i++) {
			TotalResultData* resdata = new TotalResultData;
			if (resdata) {
				resdata->m_score1 = scores[scoreIDs[i]]->getScore(2);
				resdata->m_score2 = scores[scoreIDs[i]]->getScore(1);
				resdata->m_score3 = scores[scoreIDs[i]]->getScore(0);
				resdata->m_screen = nullptr;
				resdata->_18      = false;
				resdata->m_screen = new P2DScreen::Mgr;
				resdata->m_screen->set(bloNames[i], 0x1040000, arc);
				resdata->m_screen->setBasePosition(POS_CENTER);
			}
			data[i] = resdata;
		}
	}
	return data;
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  lis       r6, 0x804A
	  stw       r0, 0x134(r1)
	  stmw      r14, 0xE8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  subi      r31, r6, 0x7328
	  li        r3, 0x4
	  bl        -0x3EAE8C
	  mr.       r30, r3
	  beq-      .loc_0x2CC
	  lwz       r15, 0x224(r31)
	  addi      r3, r1, 0x88
	  lwz       r0, 0x21C(r31)
	  addi      r4, r31, 0x254
	  stw       r15, 0xE4(r1)
	  li        r29, 0
	  lwz       r15, 0x228(r31)
	  stw       r0, 0x50(r1)
	  lwz       r0, 0xE4(r1)
	  stw       r15, 0xB8(r1)
	  lwz       r15, 0x22C(r31)
	  stw       r0, 0x58(r1)
	  lwz       r0, 0xB8(r1)
	  stw       r15, 0xBC(r1)
	  lwz       r15, 0x230(r31)
	  stw       r0, 0x5C(r1)
	  lwz       r0, 0xBC(r1)
	  stw       r15, 0xC0(r1)
	  lwz       r15, 0x234(r31)
	  stw       r0, 0x60(r1)
	  lwz       r0, 0xC0(r1)
	  stw       r15, 0xC4(r1)
	  lwz       r15, 0x238(r31)
	  stw       r0, 0x64(r1)
	  lwz       r0, 0xC4(r1)
	  stw       r15, 0xC8(r1)
	  lwz       r15, 0x23C(r31)
	  stw       r0, 0x68(r1)
	  lwz       r0, 0xC8(r1)
	  stw       r15, 0xCC(r1)
	  lwz       r15, 0x240(r31)
	  stw       r0, 0x6C(r1)
	  lwz       r0, 0xCC(r1)
	  stw       r15, 0xD0(r1)
	  lwz       r15, 0x244(r31)
	  stw       r0, 0x70(r1)
	  lwz       r0, 0xD0(r1)
	  stw       r15, 0xD4(r1)
	  lwz       r15, 0x248(r31)
	  stw       r0, 0x74(r1)
	  lwz       r0, 0xD4(r1)
	  stw       r15, 0xD8(r1)
	  lwz       r15, 0x24C(r31)
	  stw       r0, 0x78(r1)
	  lwz       r0, 0xD8(r1)
	  stw       r15, 0xDC(r1)
	  lwz       r15, 0x250(r31)
	  stw       r0, 0x7C(r1)
	  lwz       r0, 0xDC(r1)
	  lwz       r16, 0x1D4(r31)
	  lwz       r17, 0x1D8(r31)
	  lwz       r18, 0x1DC(r31)
	  lwz       r19, 0x1E0(r31)
	  lwz       r20, 0x1E4(r31)
	  lwz       r21, 0x1E8(r31)
	  lwz       r22, 0x1EC(r31)
	  lwz       r23, 0x1F0(r31)
	  lwz       r24, 0x1F4(r31)
	  lwz       r25, 0x1F8(r31)
	  lwz       r12, 0x1FC(r31)
	  lwz       r11, 0x200(r31)
	  lwz       r10, 0x204(r31)
	  lwz       r9, 0x208(r31)
	  lwz       r8, 0x20C(r31)
	  lwz       r7, 0x210(r31)
	  lwz       r6, 0x214(r31)
	  lwz       r5, 0x218(r31)
	  lwz       r14, 0x220(r31)
	  stw       r0, 0x80(r1)
	  mr        r0, r15
	  stw       r15, 0xE0(r1)
	  stw       r16, 0x8(r1)
	  stw       r17, 0xC(r1)
	  stw       r18, 0x10(r1)
	  stw       r19, 0x14(r1)
	  stw       r20, 0x18(r1)
	  stw       r21, 0x1C(r1)
	  stw       r22, 0x20(r1)
	  stw       r23, 0x24(r1)
	  stw       r24, 0x28(r1)
	  stw       r25, 0x2C(r1)
	  stw       r12, 0x30(r1)
	  stw       r11, 0x34(r1)
	  stw       r10, 0x38(r1)
	  stw       r9, 0x3C(r1)
	  stw       r8, 0x40(r1)
	  stw       r7, 0x44(r1)
	  stw       r6, 0x48(r1)
	  stw       r5, 0x4C(r1)
	  stw       r14, 0x54(r1)
	  stw       r0, 0x84(r1)
	  bl        0x3D730
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x88
	  bl        0x3D860
	  cmplwi    r3, 0
	  beq-      .loc_0x1C0
	  lwz       r29, 0x34(r3)
	  b         .loc_0x1D4

	.loc_0x1C0:
	  addi      r3, r31, 0
	  li        r4, 0x6B
	  addi      r5, r2, 0x1E38
	  crclr     6, 0x6
	  bl        -0x3E4898

	.loc_0x1D4:
	  li        r3, 0x40
	  bl        -0x3EAF34
	  li        r16, 0
	  stw       r3, 0x0(r30)
	  mr        r20, r16
	  addi      r18, r1, 0x8
	  addi      r19, r1, 0x48

	.loc_0x1F0:
	  li        r3, 0x1C
	  bl        -0x3EB058
	  mr.       r15, r3
	  beq-      .loc_0x2AC
	  lwz       r0, 0x0(r19)
	  li        r4, 0x2
	  lwz       r17, 0x0(r18)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r28, r0
	  bl        -0x1DB1D0
	  lwz       r0, 0x0(r19)
	  mr        r14, r3
	  li        r4, 0x1
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r28, r0
	  bl        -0x1DB1E8
	  lwz       r0, 0x0(r19)
	  mr        r21, r3
	  li        r4, 0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r28, r0
	  bl        -0x1DB200
	  lwz       r4, 0x0(r19)
	  li        r0, 0
	  rlwinm    r5,r4,2,0,29
	  lwzx      r4, r27, r5
	  lwzx      r5, r26, r5
	  stw       r4, 0x14(r15)
	  stb       r0, 0x18(r15)
	  stw       r5, 0x4(r15)
	  stw       r3, 0x8(r15)
	  li        r3, 0x138
	  stw       r21, 0xC(r15)
	  stw       r14, 0x10(r15)
	  bl        -0x3EB0DC
	  cmplwi    r3, 0
	  beq-      .loc_0x288
	  bl        0x25B34

	.loc_0x288:
	  stw       r3, 0x0(r15)
	  mr        r4, r17
	  mr        r6, r29
	  lis       r5, 0x104
	  lwz       r3, 0x0(r15)
	  bl        -0x3CF980
	  lwz       r3, 0x0(r15)
	  li        r4, 0x4
	  bl        -0x3D62F4

	.loc_0x2AC:
	  lwz       r3, 0x0(r30)
	  addi      r16, r16, 0x1
	  cmpwi     r16, 0x10
	  addi      r19, r19, 0x4
	  stwx      r15, r3, r20
	  addi      r20, r20, 0x4
	  addi      r18, r18, 0x4
	  blt+      .loc_0x1F0

	.loc_0x2CC:
	  mr        r3, r30
	  lmw       r14, 0xE8(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

ObjFinalResult::StaticValues ObjFinalResult::msVal;

} // namespace Screen
} // namespace kh
