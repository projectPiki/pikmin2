#include "og/Screen/PikminCounter.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8030421C
 * Size:	0000BC
 */
PikminCounter::PikminCounter()
{
	m_catchPiki         = nullptr;
	_180                = 0;
	_184                = 0;
	_188                = 0;
	m_isTotalPokoActive = false;
	m_paneSublevel      = nullptr;
	m_scaleMgr          = nullptr;
	m_standardPos.x     = 0.0f;
	m_standardPos.y     = 0.0f;
	m_currPos.x         = 0.0f;
	m_currPos.y         = 0.0f;
}

/*
 * --INFO--
 * Address:	803042D8
 * Size:	00006C
 */
void PikminCounter::setParam(og::Screen::DataGame& game, og::Screen::DataNavi& navi)
{
	m_dataGame = game;
	m_dataNavi = navi;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000188
 */
void PikminCounter::setCallBackCommon(JKRArchive* arc, bool flag)
{
	og::Screen::setAlphaScreen(this);
	m_catchPiki = new og::Screen::CallBack_CatchPiki;
	m_catchPiki->init(this, 'piki', &m_dataNavi.m_nextThrowPiki, arc);
	addCallBack('piki', m_catchPiki);
	og::Screen::setCallBack_CounterRV(this, 'c_mr', 'c_mc', 'c_ml', &m_dataNavi.m_followPikis, 4, 3, 1, arc);
	m_isTotalPokoActive = flag;
}

/*
 * --INFO--
 * Address:	80304344
 * Size:	0000F8
 */
void PikminCounter::update()
{
	if (m_paneSublevel) {
		if (m_isTotalPokoActive) {
			if (m_currPos.x < 700.0f)
				m_currPos.x += 20.0f;
		} else {
			if (m_currPos.x > m_standardPos.x) {
				m_currPos.x -= 20.0f;
				if (m_currPos.x <= m_standardPos.x) {
					m_currPos.x = m_standardPos.x;
					m_scaleMgr->up(0.2f, 20.0f, 0.5f, 0.0f);
				}
			}
		}
		m_paneSublevel->setOffset(m_currPos.x, m_currPos.y);
		m_paneSublevel->updateScale(m_scaleMgr->calc());
	}
	P2DScreen::Mgr::update();
}

/*
 * --INFO--
 * Address:	8030443C
 * Size:	000230
 */
void PikminCounter::setCallBack(JKRArchive* arc)
{
	setCallBackCommon(arc, false);

	u32* days = &m_dataGame.m_dayNum;
	setCallBack_CounterDay(this, 'dcsr', 'dcsl', 'dcsc', days, 10, arc);
	setCallBack_CounterDay(this, 'dc_r', 'dc_l', 'dc_c', days, 10, arc);

	setCallBack_CounterRV(this, 'c_lr', 'c_lc', 'c_ll', &m_dataGame.m_mapPikminCount, 10, 3, 1, arc);
	CallBack_CounterRV* counter = setCallBack_CounterRV(this, 'c_s1', 'c_sr', 'c_sl', &m_dataGame.m_totalPikminCount, 10, 4, 1, arc);
	counter->m_scaleUpSoundID   = PSSE_SY_PIKI_INCREMENT;
	counter->m_scaleDownSoundID = PSSE_SY_PIKI_DECREMENT;

	J2DPane* pane = search('c_sc');
	if (pane->getParentPane()) {
		pane->getParentPane()->removeChild(pane);
	}

	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stw      r31, 0x2c(r1)
mr       r31, r4
stw      r30, 0x28(r1)
mr       r30, r3
stw      r29, 0x24(r1)
bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
li       r3, 0x44
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_80304478
bl       __ct__Q32og6Screen18CallBack_CatchPikiFv
mr       r0, r3

lbl_80304478:
stw      r0, 0x17c(r30)
lis      r5, 0x70696B69@ha
mr       r4, r30
mr       r8, r31
lwz      r3, 0x17c(r30)
addi     r6, r5, 0x70696B69@l
addi     r7, r30, 0x16c
li       r5, 0
bl init__Q32og6Screen18CallBack_CatchPikiFP9J2DScreenUxPUlP10JKRArchive lis
r4, 0x70696B69@ha lwz      r7, 0x17c(r30) mr       r3, r30 li       r5, 0 addi
r6, r4, 0x70696B69@l bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
addi     r0, r30, 0x168
lis      r4, 0x635F6D72@ha
stw      r0, 8(r1)
li       r3, 4
li       r5, 3
li       r0, 1
stw      r3, 0xc(r1)
mr       r3, r30
addi     r6, r4, 0x635F6D72@l
addi     r8, r4, 0x6d63
stw      r5, 0x10(r1)
addi     r10, r4, 0x6d6c
li       r5, 0
li       r7, 0
stw      r0, 0x14(r1)
li       r9, 0
stw      r31, 0x18(r1)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
li       r0, 0
lis      r4, 0x64637372@ha
stb      r0, 0x18c(r30)
addi     r29, r30, 0x14c
li       r0, 0xa
mr       r3, r30
stw      r29, 8(r1)
addi     r6, r4, 0x64637372@l
addi     r8, r4, 0x736c
addi     r10, r4, 0x7363
stw      r0, 0xc(r1)
li       r5, 0
li       r7, 0
li       r9, 0
stw      r31, 0x10(r1)
bl
setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
stw      r29, 8(r1)
lis      r4, 0x64635F72@ha
li       r0, 0xa
mr       r3, r30
stw      r0, 0xc(r1)
addi     r6, r4, 0x64635F72@l
addi     r8, r4, 0x5f6c
addi     r10, r4, 0x5f63
stw      r31, 0x10(r1)
li       r5, 0
li       r7, 0
li       r9, 0
bl
setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
addi     r0, r30, 0x158
lis      r4, 0x635F6C72@ha
stw      r0, 8(r1)
li       r3, 0xa
li       r5, 3
li       r0, 1
stw      r3, 0xc(r1)
mr       r3, r30
addi     r6, r4, 0x635F6C72@l
addi     r8, r4, 0x6c63
stw      r5, 0x10(r1)
addi     r10, r4, 0x6c6c
li       r5, 0
li       r7, 0
stw      r0, 0x14(r1)
li       r9, 0
stw      r31, 0x18(r1)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
addi     r0, r30, 0x150
lis      r4, 0x635F7331@ha
stw      r0, 8(r1)
li       r3, 0xa
li       r5, 4
li       r0, 1
stw      r3, 0xc(r1)
mr       r3, r30
addi     r6, r4, 0x635F7331@l
addi     r8, r4, 0x7372
stw      r5, 0x10(r1)
addi     r10, r4, 0x736c
li       r5, 0
li       r7, 0
stw      r0, 0x14(r1)
li       r9, 0
stw      r31, 0x18(r1)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
li       r0, 0x1828
lis      r4, 0x635F7363@ha
stw      r0, 0x94(r3)
li       r0, 0x182a
addi     r6, r4, 0x635F7363@l
li       r5, 0
stw      r0, 0x98(r3)
mr       r3, r30
lwz      r12, 0(r30)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r30, r3
bl       getParentPane__7J2DPaneFv
cmplwi   r3, 0
beq      lbl_80304650
mr       r3, r30
bl       getParentPane__7J2DPaneFv
mr       r4, r30
bl       removeChild__7J2DPaneFP7J2DPane

lbl_80304650:
lwz      r0, 0x34(r1)
lwz      r31, 0x2c(r1)
lwz      r30, 0x28(r1)
lwz      r29, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	8030466C
 * Size:	000240
 */
void PikminCounterCave::setCallBack(JKRArchive* arc)
{
	setCallBackCommon(arc, false);
	m_paneSublevel = search('Ndayicon');
	if (m_paneSublevel) {
		m_standardPos.x = m_paneSublevel->_0D4.x;
		m_standardPos.y = m_paneSublevel->_0D4.y;
		m_currPos       = m_standardPos;
		m_paneSublevel->setOffset(m_currPos.x, m_currPos.y);
		m_scaleMgr = new ScaleMgr;
	}

	u32* days = &m_dataGame.m_floorNum;
	setCallBack_CounterDay(this, 'dc_r', 'dc_l', 'dc_c', days, 4, arc);
	setCallBack_CounterDay(this, 'dcsr', 'dcsl', 'dcsc', days, 4, arc);

	CallBack_CounterRV* counter = setCallBack_CounterRV(this, 'c_lr', 'c_lc', 'c_ll', &m_dataGame.m_mapPikminCount, 10, 3, 1, arc);
	counter->m_scaleUpSoundID   = PSSE_SY_PIKI_INCREMENT;
	counter->m_scaleDownSoundID = PSSE_SY_PIKI_DECREMENT;
}

/*
 * --INFO--
 * Address:	803048AC
 * Size:	0001F8
 */
void PikminCounterChallenge1P::setCallBack(JKRArchive* arc)
{
	setCallBackCommon(arc, false);
	m_paneSublevel = search('Ndayicon');
	if (m_paneSublevel) {
		m_standardPos.x = m_paneSublevel->_0D4.x;
		m_standardPos.y = m_paneSublevel->_0D4.y;
		m_currPos       = m_standardPos;
		m_paneSublevel->setOffset(m_currPos.x, m_currPos.y);
		m_scaleMgr = new ScaleMgr;
	}

	search('Ndayicon')->hide();

	CallBack_CounterRV* counter = setCallBack_CounterRV(this, 'c_lr', 'c_lc', 'c_ll', &m_dataGame.m_mapPikminCount, 10, 3, 1, arc);
	counter->m_scaleUpSoundID   = PSSE_SY_PIKI_INCREMENT;
	counter->m_scaleDownSoundID = PSSE_SY_PIKI_DECREMENT;
}

/*
 * --INFO--
 * Address:	80304AA4
 * Size:	0000B4
 */
PikminCounterChallenge1P::~PikminCounterChallenge1P()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80304B3C
lis      r3, __vt__Q32og6Screen24PikminCounterChallenge1P@ha
addi     r0, r3, __vt__Q32og6Screen24PikminCounterChallenge1P@l
stw      r0, 0(r30)
beq      lbl_80304B2C
lis      r3, __vt__Q32og6Screen13PikminCounter@ha
addi     r0, r3, __vt__Q32og6Screen13PikminCounter@l
stw      r0, 0(r30)
beq      lbl_80304B2C
lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
stw      r0, 0(r30)
beq      lbl_80304B2C
lis      r3, __vt__Q29P2DScreen3Mgr@ha
addic.   r0, r30, 0x118
addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
stw      r0, 0(r30)
beq      lbl_80304B20
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x118
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x118(r30)
bl       __dt__5CNodeFv

lbl_80304B20:
mr       r3, r30
li       r4, 0
bl       __dt__9J2DScreenFv

lbl_80304B2C:
extsh.   r0, r31
ble      lbl_80304B3C
mr       r3, r30
bl       __dl__FPv

lbl_80304B3C:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80304B58
 * Size:	0000B4
 */
PikminCounterCave::~PikminCounterCave()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80304BF0
lis      r3, __vt__Q32og6Screen17PikminCounterCave@ha
addi     r0, r3, __vt__Q32og6Screen17PikminCounterCave@l
stw      r0, 0(r30)
beq      lbl_80304BE0
lis      r3, __vt__Q32og6Screen13PikminCounter@ha
addi     r0, r3, __vt__Q32og6Screen13PikminCounter@l
stw      r0, 0(r30)
beq      lbl_80304BE0
lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
stw      r0, 0(r30)
beq      lbl_80304BE0
lis      r3, __vt__Q29P2DScreen3Mgr@ha
addic.   r0, r30, 0x118
addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
stw      r0, 0(r30)
beq      lbl_80304BD4
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x118
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x118(r30)
bl       __dt__5CNodeFv

lbl_80304BD4:
mr       r3, r30
li       r4, 0
bl       __dt__9J2DScreenFv

lbl_80304BE0:
extsh.   r0, r31
ble      lbl_80304BF0
mr       r3, r30
bl       __dl__FPv

lbl_80304BF0:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80304C0C
 * Size:	0000A4
 */
PikminCounter::~PikminCounter() { }
} // namespace Screen
} // namespace og
