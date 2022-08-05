#include "ebi/E2DGraph.h"
#include "ebi/Screen/TTMBack.h"
#include "ebi/Screen/TNintendoLogo.h"
#include "JSystem/JUT/JUTException.h"
#include "System.h"

namespace ebi {

namespace Screen {

/*
 * --INFO--
 * Address:	803E9C60
 * Size:	0000B4
 */
void TTMBack::doSetArchive(JKRArchive* archive)
{
	sys->heapStatusStart("TScreenTMBack::setArchive", nullptr);

	m_mgrTuning = new P2DScreen::Mgr_tuning();
	m_mgrTuning->set("tm_back.blo", 0x01100000, archive); /* TODO: Obviously flags and not a hex literal. */

	E2DPane_setTreeInfluencedAlpha(m_mgrTuning, true);
	m_mgrTuning->setAlpha(0);

	sys->heapStatusEnd("TScreenTMBack::setArchive");
}

/*
 * --INFO--
 * Address:	803E9D14
 * Size:	000070
 */
void TTMBack::doOpenScreen(ebi::Screen::ArgOpenTMBack* arg)
{
	P2ASSERTLINE(33, arg != nullptr);
	u32 duration = (u32)(arg->_04 / sys->m_secondsPerFrame);
	_10          = duration;
	_14          = duration;
}

/*
 * --INFO--
 * Address:	803E9D84
 * Size:	000044
 */
void TTMBack::doCloseScreen(ebi::Screen::ArgClose* arg)
{
	u32 duration = (u32)(0.5f / sys->m_secondsPerFrame);
	_10          = duration;
	_14          = duration;
}

/*
 * --INFO--
 * Address:	803E9DC8
 * Size:	0000DC
 */
bool TTMBack::doUpdateStateOpen()
{
	if (_10 > 0) {
		_10 -= 1;
	}

	f32 factor;
	if (_14 != 0) {
		factor = (f32)_10 / _14;
	} else {
		factor = 0.0f;
	}

	m_mgrTuning->setAlpha(128.0f * (1.0f - factor));
	m_mgrTuning->update();

	if (_10 == 0) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803E9EA4
 * Size:	000034
 */
bool TTMBack::doUpdateStateWait()
{
	m_mgrTuning->update();
	return false;
}

/*
 * --INFO--
 * Address:	803E9ED8
 * Size:	0000D4
 */
bool TTMBack::doUpdateStateClose()
{
	if (_10 > 0) {
		_10 -= 1;
	}

	f32 factor;
	if (_14 != 0) {
		factor = (f32)_10 / _14;
	} else {
		factor = 0.0f;
	}

	m_mgrTuning->setAlpha(128.0f * factor);
	m_mgrTuning->update();

	if (_10 == 0) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803E9FAC
 * Size:	000074
 */
void TTMBack::doDraw()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r3
lwz      r4, sys@sda21(r13)
lwz      r31, 0x24(r4)
addi     r30, r31, 0x190
lwz      r12, 0(r30)
mr       r3, r30
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0xc(r29)
mr       r4, r31
mr       r5, r30
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803EA020
 * Size:	000090
 */
void TNintendoLogo::doSetArchive(JKRArchive* archive)
{
	sys->heapStatusStart("TScreenNintendoLogo::setArchive", nullptr);

	m_mgrTuning = new P2DScreen::Mgr_tuning();
	m_mgrTuning->set("tm_2003nintendo.blo", 0x01100000, archive); /* TODO: Obviously flags and not a hex literal. */

	sys->heapStatusEnd("TScreenNintendoLogo::setArchive");
}

/*
 * --INFO--
 * Address:	803EA0B0
 * Size:	000034
 */
bool TNintendoLogo::doUpdateStateWait()
{
	m_mgrTuning->update();
	return false;
}

/*
 * --INFO--
 * Address:	803EA0E4
 * Size:	000074
 */
void TNintendoLogo::doDraw()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r3
lwz      r4, sys@sda21(r13)
lwz      r31, 0x24(r4)
addi     r30, r31, 0x190
lwz      r12, 0(r30)
mr       r3, r30
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0xc(r29)
mr       r4, r31
mr       r5, r30
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}
} // namespace Screen
} // namespace ebi
