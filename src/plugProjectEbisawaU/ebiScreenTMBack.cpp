#include "ebi/E2DGraph.h"
#include "ebi/Screen/TTMBack.h"
#include "ebi/Screen/TNintendoLogo.h"
#include "Graphics.h"
#include "System.h"

namespace ebi {
namespace Screen {

/**
 * @note Address: 0x803E9C60
 * @note Size: 0xB4
 */
void TTMBack::doSetArchive(JKRArchive* archive)
{
	sys->heapStatusStart("TScreenTMBack::setArchive", nullptr);

	mScreenObj = new P2DScreen::Mgr_tuning();
	mScreenObj->set("tm_back.blo", 0x01100000, archive); /* TODO: Obviously flags and not a hex literal. */

	E2DPane_setTreeInfluencedAlpha(mScreenObj, true);
	mScreenObj->setAlpha(0);

	sys->heapStatusEnd("TScreenTMBack::setArchive");
}

/**
 * @note Address: 0x803E9D14
 * @note Size: 0x70
 */
void TTMBack::doOpenScreen(ArgOpen* arg)
{
	P2ASSERTLINE(33, arg != nullptr);
	u32 duration         = (u32)(static_cast<ArgOpenTMBack*>(arg)->_04 / sys->mDeltaTime);
	mOpenCloseCounter    = duration;
	mOpenCloseCounterMax = duration;
}

/**
 * @note Address: 0x803E9D84
 * @note Size: 0x44
 */
void TTMBack::doCloseScreen(ArgClose* arg)
{
	u32 duration         = (u32)(0.5f / sys->mDeltaTime);
	mOpenCloseCounter    = duration;
	mOpenCloseCounterMax = duration;
}

/**
 * @note Address: 0x803E9DC8
 * @note Size: 0xDC
 */
bool TTMBack::doUpdateStateOpen()
{
	if (mOpenCloseCounter > 0) {
		mOpenCloseCounter -= 1;
	}

	f32 factor;
	if (mOpenCloseCounterMax != 0) {
		factor = (f32)mOpenCloseCounter / mOpenCloseCounterMax;
	} else {
		factor = 0.0f;
	}

	mScreenObj->setAlpha(128.0f * (1.0f - factor));
	mScreenObj->update();

	if (mOpenCloseCounter == 0) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803E9EA4
 * @note Size: 0x34
 */
bool TTMBack::doUpdateStateWait()
{
	mScreenObj->update();
	return false;
}

/**
 * @note Address: 0x803E9ED8
 * @note Size: 0xD4
 */
bool TTMBack::doUpdateStateClose()
{
	if (mOpenCloseCounter > 0) {
		mOpenCloseCounter -= 1;
	}

	f32 factor;
	if (mOpenCloseCounterMax != 0) {
		factor = (f32)mOpenCloseCounter / mOpenCloseCounterMax;
	} else {
		factor = 0.0f;
	}

	mScreenObj->setAlpha(128.0f * factor);
	mScreenObj->update();

	if (mOpenCloseCounter == 0) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803E9FAC
 * @note Size: 0x74
 */
void TTMBack::doDraw()
{
	Graphics* gfx = sys->mGfx;

	J2DPerspGraph* context = &gfx->mPerspGraph;
	context->setPort();

	mScreenObj->draw(*gfx, *context);
}

/**
 * @note Address: 0x803EA020
 * @note Size: 0x90
 */
void TNintendoLogo::doSetArchive(JKRArchive* archive)
{
	sys->heapStatusStart("TScreenNintendoLogo::setArchive", nullptr);

	mScreenObj = new P2DScreen::Mgr_tuning();
	mScreenObj->set("tm_2003nintendo.blo", 0x01100000, archive); /* TODO: Obviously flags and not a hex literal. */

	sys->heapStatusEnd("TScreenNintendoLogo::setArchive");
}

/**
 * @note Address: 0x803EA0B0
 * @note Size: 0x34
 */
bool TNintendoLogo::doUpdateStateWait()
{
	mScreenObj->update();
	return false;
}

/**
 * @note Address: 0x803EA0E4
 * @note Size: 0x74
 */
void TNintendoLogo::doDraw()
{
	Graphics* gfx = sys->mGfx;

	J2DPerspGraph* context = &gfx->mPerspGraph;
	context->setPort();

	mScreenObj->draw(*gfx, *context);
}
} // namespace Screen
} // namespace ebi
