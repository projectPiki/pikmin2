#include "Game/BaseGameSection.h"
#include "Game/GameSystem.h"
#include "Game/GameLight.h"

#include "Sys/DrawBuffers.h"

#include "JSystem/JUtility/JUTTexture.h"
#include "JSystem/J3D/J3DSys.h"

#include "ParticleMgr.h"
#include "SysTimers.h"
#include "IDelegate.h"
#include "System.h"
#include "Light.h"
#include "nans.h"

const char* message = "drct-post";

namespace Game {
/*
 * --INFO--
 * Address:	802398D8
 * Size:	0001F4
 * Matches
 */
void BaseGameSection::newdraw_draw3D_all(Graphics& gfx)
{
	// Setup viewport callback to be newdraw_drawAll
	Delegate1<BaseGameSection, Viewport*> vpDelegate(this, &BaseGameSection::newdraw_drawAll);
	gfx.mapViewport(&vpDelegate);

	// Initialise both draw buffers for the frame
	mDrawBuffer1->frameInitAll();
	mDrawBuffer2->frameInitAll();

	if (!gameSystem->isMultiplayerMode()) {
		particleMgr->setXfb(mXfbImage->mTexInfo);
	}

	// Draw particles for both viewports
	sys->mTimers->_start("part-draw", true);
	drawParticle(gfx, 0);
	drawParticle(gfx, 1);
	sys->mTimers->_stop("part-draw");

	// Draw counters for both viewports
	// (Life gauge & Carry info)
	sys->mTimers->_start("drct-post", true);
	mLightMgr->set(gfx);
	Viewport* vp = gfx.getViewport(0);
	if (vp && vp->viewable()) {
		gfx.mCurrentViewport = vp;
		directDrawPost(gfx, vp);
	}

	mLightMgr->set(gfx);
	vp = gfx.getViewport(1);
	if (vp && vp->viewable()) {
		gfx.mCurrentViewport = vp;
		directDrawPost(gfx, vp);
	}
	sys->mTimers->_stop("drct-post");
}

/*
 * --INFO--
 * Address:	80239ACC
 * Size:	000360
 */
void BaseGameSection::newdraw_drawAll(Viewport* vp)
{
	sys->mTimers->_start("draw_calc", true);
	Graphics& gfx = *sys->mGfx;

	doSetView(vp->mVpId);
	vp->setJ3DViewMtx(true)->setViewCalcModeImm();
	doViewCalc();
	vp->setViewport();
	vp->setProjection();
	sys->mTimers->_stop("draw_calc");

	j3dSys.drawInit();

	sys->mTimers->_start("jdraw", true);
	mLightMgr->set(gfx);
	mDrawBuffer1->get(6)->draw();
	mDrawBuffer1->get(2)->draw();
	mDrawBuffer1->get(9)->draw();
	mDrawBuffer1->get(3)->draw();
	mDrawBuffer1->get(0)->draw();
	doSimpleDraw(vp);
	mLightMgr->set(gfx);
	mDrawBuffer2->get(3)->draw();
	mDrawBuffer2->get(0)->draw();
	mLightMgr->mFogMgr->off(gfx);
	mDrawBuffer1->get(1)->draw();
	mDrawBuffer2->get(1)->draw();
	mLightMgr->mFogMgr->set(gfx);
	sys->mTimers->_stop("jdraw");

	gfx.setToken("direct");

	sys->mTimers->_start("direct", true);
	j3dSys.drawInit();
	directDraw(gfx, vp);
	sys->mTimers->_stop("direct");

	Game::shadowMgr->draw(gfx, vp->mVpId);
	vp->setViewport();
	vp->setProjection();

	sys->mTimers->_start("j3d-etc", true);
	mDrawBuffer1->get(7)->draw();
	mDrawBuffer2->get(7)->draw();

	if (!_168 && (mXfbFlags & 3) == 0) {
		mXfbImage->capture(mXfbBoundsX, mXfbBoundsY, GX_TF_RGB565, true, 0);
	}
	mLightMgr->set(gfx);
	mLightMgr->mFogMgr->off(gfx);

	mDrawBuffer1->get(8)->draw();
	mDrawBuffer2->get(8)->draw();

	vp->setJ3DViewMtx(true);

	mLightMgr->mFogMgr->off(gfx);
	mDrawBuffer1->get(4)->draw();
	mDrawBuffer2->get(4)->draw();
	mLightMgr->mFogMgr->set(gfx);
	vp->setJ3DViewMtx(true);

	mDrawBuffer2->get(2)->draw();
	vp->setJ3DViewMtx(false);
	sys->mTimers->_stop("j3d-etc");
}

} // namespace Game
