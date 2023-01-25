#include "Game/BaseGameSection.h"
#include "Game/GameSystem.h"
#include "Game/GameLight.h"

#include "Sys/DrawBuffers.h"

#include "JSystem/JUT/JUTTexture.h"
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
	_12C->frameInitAll();
	_130->frameInitAll();

	if (!gameSystem->isMultiplayerMode()) {
		particleMgr->setXfb(mXfbImage->_20);
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
	_12C->get(6)->draw();
	_12C->get(2)->draw();
	_12C->get(9)->draw();
	_12C->get(3)->draw();
	_12C->get(0)->draw();
	doSimpleDraw(vp);
	mLightMgr->set(gfx);
	_130->get(3)->draw();
	_130->get(0)->draw();
	mLightMgr->mFogMgr->off(gfx);
	_12C->get(1)->draw();
	_130->get(1)->draw();
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
	_12C->get(7)->draw();
	_130->get(7)->draw();

	if (!_168 && (mXfbFlags & 3) == 0) {
		mXfbImage->capture(mXfbTexture1, mXfbTexture2, GX_TF_RGB565, true, 0);
	}
	mLightMgr->set(gfx);
	mLightMgr->mFogMgr->off(gfx);

	_12C->get(8)->draw();
	_130->get(8)->draw();

	vp->setJ3DViewMtx(true);

	mLightMgr->mFogMgr->off(gfx);
	_12C->get(4)->draw();
	_130->get(4)->draw();
	mLightMgr->mFogMgr->set(gfx);
	vp->setJ3DViewMtx(true);

	_130->get(2)->draw();
	vp->setJ3DViewMtx(false);
	sys->mTimers->_stop("j3d-etc");
}

} // namespace Game
