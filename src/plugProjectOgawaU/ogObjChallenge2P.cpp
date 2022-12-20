#include "og/newScreen/Challenge.h"
#include "og/newScreen/Vs.h"
#include "trig.h"
#include "System.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8031EBE8
 * Size:	000064
 */
ObjChallenge2P::ObjChallenge2P(const char* name)
{
	m_name       = name;
	m_disp       = nullptr;
	m_bloGroup   = nullptr;
	m_pokoScreen = nullptr;
}

/*
 * --INFO--
 * Address:	8031EC4C
 * Size:	000068
 */
ObjChallenge2P::~ObjChallenge2P() { }

/*
 * --INFO--
 * Address:	8031ECB4
 * Size:	0006C4
 */
void ObjChallenge2P::doCreate(JKRArchive* arc)
{
	m_screenP1 = new ScreenSet;
	m_screenP2 = new ScreenSet;

	og::Screen::DispMemberChallenge2P* disp = static_cast<og::Screen::DispMemberChallenge2P*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_CHALLENGE_2P)) {
		m_disp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		m_disp = new og::Screen::DispMemberChallenge2P;

	} else {
		JUT_PANICLINE(151, "ERR! in ObjChallenge2P CreateŽ¸”sI\n");
	}

	m_pokoScreen = new P2DScreen::Mgr_tuning;
	m_bloGroup   = new og::Screen::BloGroup(3);
	m_bloGroup->addBlo("challenge_1P.blo", m_screenP1->m_screen, 0x1040000, arc);
	m_bloGroup->addBlo("challenge_2P.blo", m_screenP2->m_screen, 0x1040000, arc);
	m_bloGroup->addBlo("2P_challenge_poko.blo", m_pokoScreen, 0x1040000, arc);
	m_screenP1->init(&m_disp->m_olimarData, arc, m_disp);
	m_screenP2->init(&m_disp->m_louieData, arc, m_disp);

	og::Screen::CallBack_CounterRV* counter = og::Screen::setCallBack_CounterRV(m_pokoScreen, 'Ppoko1', &m_disp->m_pokos, 6, 1, 1, arc);
	counter->m_scaleUpSoundID               = PSSE_SY_REGI_SUM_UP;

	og::Screen::setCallBack_CounterRV(m_pokoScreen, 'PdeadP1', &m_disp->m_deadPiki, 6, 1, 1, arc);
	m_timeLeftInt = m_disp->m_timeLimit;

	counter = og::Screen::setCallBack_CounterRV(m_pokoScreen, 'Ptime1', &m_timeLeftInt, 6, 1, 1, arc);
	counter->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);

	J2DPane* pane  = m_pokoScreen->search('Nmenu01');
	msVal.m_menu01 = pane;
	msVal._48      = pane->_0D4.x;
	msVal._4C      = pane->_0D4.y;
	msVal._50      = pane->m_scale.x;
	msVal._54      = pane->m_scale.y;
	msVal._58      = 0.0f;
	msVal._5C      = 0.0f;
	msVal._60      = 1.0f;
	msVal._64      = 1.0f;
	if (pane) {
		pane->setOffset(msVal._48, 0.0f, msVal._4C, 0.0f);
		msVal.m_menu01->updateScale(msVal._50 * msVal._60, msVal._54 * msVal._64);
	}

	J2DPane* pane2 = m_pokoScreen->search('Nmenu00');
	msVal.m_menu00 = pane2;
	msVal._24      = pane2->_0D4.x;
	msVal._28      = pane2->_0D4.y;
	msVal._2C      = pane2->m_scale.x;
	msVal._30      = pane2->m_scale.y;
	msVal._34      = 0.0f;
	msVal._38      = 0.0f;
	msVal._3C      = 1.0f;
	msVal._40      = 1.0f;
	if (pane2) {
		pane2->setOffset(msVal._24, 0.0f, msVal._28, 0.0f);
		msVal.m_menu00->updateScale(msVal._2C * msVal._3C, msVal._30 * msVal._40);
	}

	J2DPane* pane3 = m_pokoScreen->search('Nmenu02');
	msVal.m_menu02 = pane3;
	msVal._6C      = pane3->_0D4.x;
	msVal._70      = pane3->_0D4.y;
	msVal._74      = pane3->m_scale.x;
	msVal._78      = pane3->m_scale.y;
	msVal._7C      = 0.0f;
	msVal._80      = 0.0f;
	msVal._84      = 1.0f;
	msVal._88      = 1.0f;
	if (pane3) {
		pane3->setOffset(msVal._6C, 0.0f, msVal._70, 0.0f);
		msVal.m_menu02->updateScale(msVal._74 * msVal._84, msVal._78 * msVal._88);
	}

	setSubLevel(m_disp->m_dataGame.m_floorNum);
	doCreateAfter(arc, counter);
}

/*
 * --INFO--
 * Address:	8031F378
 * Size:	0002BC
 */
void ObjChallenge2P::ScreenSet::init(og::Screen::DataNavi* data, JKRArchive* arc, og::Screen::DispMemberChallenge2P* disp)
{
	og::Screen::CallBack_CatchPiki* callback = new og::Screen::CallBack_CatchPiki;
	callback->init(m_screen, 'piki', &data->m_nextThrowPiki, arc);
	m_screen->addCallBack('piki', callback);

	og::Screen::setCallBack_CounterRV(m_screen, 'c_mr', 'c_ml', 'c_ml', &data->m_followPikis, 3, 2, 1, arc);
	og::Screen::CallBack_CounterRV* counter
	    = og::Screen::setCallBack_CounterRV(m_screen, 'c_lr', 'c_ll', 'c_ll', (u32*)&disp->m_dataGame.m_mapPikminCount, 3, 2, 1, arc);
	counter->m_scaleUpSoundID   = PSSE_SY_PIKI_INCREMENT;
	counter->m_scaleDownSoundID = PSSE_SY_PIKI_DECREMENT;

	counter = og::Screen::setCallBack_CounterRV(m_screen, 'dr_r', 'dr_l', 'dr_l', &data->m_dope1Count, 3, 2, 1, arc);
	counter->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);
	m_screen->search('dr_c')->hide();

	counter = og::Screen::setCallBack_CounterRV(m_screen, 'dy_r', 'dy_l', 'dy_l', &data->m_dope0Count, 3, 2, 1, arc);
	counter->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);
	m_screen->search('dy_c')->hide();

	m_paneToyo01 = og::Screen::TagSearch(m_screen, 'toyo_01');
	m_paneToyo00 = og::Screen::TagSearch(m_screen, 'toyo_00');

	m_doping->init(m_paneToyo01, m_paneToyo00, m_scaleMgr1, m_scaleMgr2);
	m_lifeGauge->init(m_screen, data, og::Screen::CallBack_LifeGauge::LIFEGAUGE_OLIMAR);
	m_screen->addCallBack('back', m_lifeGauge);
	m_lifeGauge->setOffset(ObjVs::msVal.m_lifeGaugeXOffs, ObjVs::msVal.m_lifeGaugeYOffs);

	og::Screen::setCallBack_DrawAfter(m_screen, 'mete');
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void ObjChallenge2P::ScreenSet::update(og::Screen::DataNavi& data)
{
	f32 scale1 = m_scaleMgr1->calc();
	f32 scale2 = m_scaleMgr2->calc();
	if (m_paneToyo01)
		m_paneToyo01->updateScale(scale1);
	if (m_paneToyo00)
		m_paneToyo00->updateScale(scale2);

	og::Screen::DopingCheck* dope = m_doping;
	dope->m_naviLifeRatio         = data.m_naviLifeRatio;
	dope->m_followPiki            = data.m_followPikis;
	dope->m_nextThrowPiki         = data.m_nextThrowPiki;
	dope->m_spicySprayCount       = data.m_dope1Count;
	dope->m_bitterSprayCount      = data.m_dope0Count;
	dope->m_activeNaviID          = data.m_activeNaviID;
	dope->update();
}

/*
 * --INFO--
 * Address:	8031F634
 * Size:	000260
 */
void ObjChallenge2P::commonUpdate()
{
	m_screenP1->update(m_disp->m_olimarData);
	m_screenP2->update(m_disp->m_louieData);

	f32 calc = (pikmin2_cosf(m_scale * PI) + 1.0f) / 2;
	m_screenP1->m_screen->setXY(0.0f, calc * -300.0f);
	m_screenP2->m_screen->setXY(0.0f, calc * 300.0f);
	m_pokoScreen->setXY(calc * 300.0f, 0.0f);

	updateTimer(m_disp->m_timeLimit, m_disp->_60);
	m_bloGroup->update();
}

/*
 * --INFO--
 * Address:	8031F894
 * Size:	000024
 */
bool ObjChallenge2P::doUpdate()
{
	commonUpdate();
	return false;
}

/*
 * --INFO--
 * Address:	8031F8B8
 * Size:	0001F8
 */
void ObjChallenge2P::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.m_perspGraph;
	graf->setPort();

	JUtility::TColor color1 = msVal._20;
	int test                = (f32)color1.a * m_scale;
	color1.a                = test;
	graf->setColor(color1);

	JGeometry::TBox2f box;
	box.i   = JGeometry::TVec2f(msVal._08, msVal._0C);
	box.f.x = box.i.x + msVal._10;
	box.f.y = box.i.y + msVal._14;

	graf->fillBox(box);

	JGeometry::TBox2f box2;
	box2.i   = JGeometry::TVec2f(msVal._18, msVal._0C);
	box2.f.x = box2.i.x + msVal._1C;
	box2.f.y = box2.i.y + msVal._14;

	graf->fillBox(box2);

	m_bloGroup->draw(graf);

	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	addi     r30, r4, 0x190
	stw      r29, 0x94(r1)
	mr       r29, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r3, msVal__Q32og9newScreen14ObjChallenge2P@ha
	lis      r0, 0x4330
	addi     r3, r3, msVal__Q32og9newScreen14ObjChallenge2P@l
	stw      r0, 0x40(r1)
	lwz      r0, 0x20(r3)
	mr       r3, r30
	lfd      f2, lbl_8051DC70@sda21(r2)
	addi     r4, r1, 0xc
	stw      r0, 0x1c(r1)
	addi     r5, r1, 0x10
	lfs      f0, 0x3c(r29)
	addi     r6, r1, 0x14
	lbz      r0, 0x1f(r1)
	addi     r7, r1, 0x18
	stw      r0, 0x44(r1)
	lfd      f1, 0x40(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	stb      r0, 0x1f(r1)
	lwz      r0, 0x1c(r1)
	stw      r0, 8(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	bl
	setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	lis      r3, msVal__Q32og9newScreen14ObjChallenge2P@ha
	lis      r7, 0x4330
	addi     r31, r3, msVal__Q32og9newScreen14ObjChallenge2P@l
	stw      r7, 0x50(r1)
	lwz      r0, 0xc(r31)
	mr       r3, r30
	lwz      r6, 8(r31)
	addi     r4, r1, 0x30
	lwz      r5, 0x10(r31)
	xoris    r8, r0, 0x8000
	lwz      r0, 0x14(r31)
	xoris    r6, r6, 0x8000
	xoris    r5, r5, 0x8000
	stw      r8, 0x54(r1)
	xoris    r0, r0, 0x8000
	lfd      f2, lbl_8051DC78@sda21(r2)
	lfd      f0, 0x50(r1)
	stw      r6, 0x5c(r1)
	fsubs    f4, f0, f2
	stw      r7, 0x58(r1)
	lfd      f0, 0x58(r1)
	stw      r5, 0x64(r1)
	fsubs    f3, f0, f2
	stw      r7, 0x60(r1)
	lfd      f0, 0x60(r1)
	stw      r0, 0x6c(r1)
	fsubs    f1, f0, f2
	stw      r7, 0x68(r1)
	lfd      f0, 0x68(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x30(r1)
	fsubs    f0, f0, f2
	stfs     f4, 0x34(r1)
	fadds    f0, f4, f0
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	lis      r3, msVal__Q32og9newScreen14ObjChallenge2P@ha
	lis      r7, 0x4330
	addi     r4, r3, msVal__Q32og9newScreen14ObjChallenge2P@l
	lwz      r0, 0xc(r31)
	lwz      r5, 0x18(r4)
	mr       r3, r30
	lwz      r4, 0x1c(r4)
	xoris    r8, r0, 0x8000
	lwz      r0, 0x14(r31)
	xoris    r6, r5, 0x8000
	xoris    r5, r4, 0x8000
	stw      r8, 0x74(r1)
	xoris    r0, r0, 0x8000
	lfd      f2, lbl_8051DC78@sda21(r2)
	stw      r7, 0x70(r1)
	addi     r4, r1, 0x20
	lfd      f0, 0x70(r1)
	stw      r6, 0x7c(r1)
	fsubs    f4, f0, f2
	stw      r7, 0x78(r1)
	lfd      f0, 0x78(r1)
	stw      r5, 0x84(r1)
	fsubs    f3, f0, f2
	stw      r7, 0x80(r1)
	lfd      f0, 0x80(r1)
	stw      r0, 0x8c(r1)
	fsubs    f1, f0, f2
	stw      r7, 0x88(r1)
	lfd      f0, 0x88(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x20(r1)
	fsubs    f0, f0, f2
	stfs     f4, 0x24(r1)
	fadds    f0, f4, f0
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	lwz      r3, 0x64(r29)
	mr       r4, r30
	bl       draw__Q32og6Screen8BloGroupFP13J2DPerspGraph
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031FAB0
 * Size:	000004
 */
void ObjChallenge2P::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	8031FAB4
 * Size:	00000C
 */
void ObjChallenge2P::doUpdateFinish() { m_fadeLevel = 0.0f; }

/*
 * --INFO--
 * Address:	8031FAC0
 * Size:	000004
 */
void ObjChallenge2P::doUpdateFadeoutFinish() { }

/*
 * --INFO--
 * Address:	8031FAC4
 * Size:	000074
 */
bool ObjChallenge2P::doUpdateFadein()
{
	bool check = false;
	m_fadeLevel += sys->m_deltaTime;

	if (m_fadeLevel > msVal._00) {
		m_fadeLevel = msVal._00;
		check       = true;
	}
	m_scale = m_fadeLevel / msVal._00;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	8031FB38
 * Size:	00007C
 */
bool ObjChallenge2P::doUpdateFadeout()
{
	bool check = false;
	m_fadeLevel += sys->m_deltaTime;
	if (m_fadeLevel > msVal._04) {
		m_fadeLevel = msVal._04;
		check       = true;
	}
	m_scale = 1.0f - m_fadeLevel / msVal._04;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	8031FBB4
 * Size:	000074
 */
bool ObjChallenge2P::doStart(::Screen::StartSceneArg const* arg)
{
	ObjChallengeBase::doStart(arg);
	SArgChallenge2P* challArg = static_cast<SArgChallenge2P*>((::Screen::StartSceneArg*)(arg));
	if (challArg && challArg->getSceneType() == SCENE_CHALLENGE_2P) {
		m_incTimeLeftDelay = (challArg->_04);
	} else {
		m_incTimeLeftDelay = 0.0f;
	}
	return true;
}

ObjChallenge2P::StaticValues ObjChallenge2P::msVal;

} // namespace newScreen
} // namespace og
