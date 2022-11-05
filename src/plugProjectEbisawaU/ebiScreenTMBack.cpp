#include "ebi/E2DGraph.h"
#include "ebi/Screen/TTMBack.h"
#include "ebi/Screen/TNintendoLogo.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "Graphics.h"
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
void TTMBack::doOpenScreen(ArgOpen* arg)
{
	P2ASSERTLINE(33, arg != nullptr);
	u32 duration = (u32)(static_cast<ArgOpenTMBack*>(arg)->_04 / sys->m_deltaTime);
	_10          = duration;
	_14          = duration;
}

/*
 * --INFO--
 * Address:	803E9D84
 * Size:	000044
 */
void TTMBack::doCloseScreen(ArgClose* arg)
{
	u32 duration = (u32)(0.5f / sys->m_deltaTime);
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
	Graphics* gfx = sys->m_gfx;

	J2DPerspGraph* context = &gfx->m_perspGraph;
	context->setPort();

	m_mgrTuning->draw(*gfx, *context);
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
	Graphics* gfx = sys->m_gfx;

	J2DPerspGraph* context = &gfx->m_perspGraph;
	context->setPort();

	m_mgrTuning->draw(*gfx, *context);
}
} // namespace Screen
} // namespace ebi
