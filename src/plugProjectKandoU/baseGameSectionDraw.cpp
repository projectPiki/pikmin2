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
		particleMgr->setXfb(m_xfbImage->_20);
	}

	// Draw particles for both viewports
	sys->m_timers->_start("part-draw", true);
	drawParticle(gfx, 0);
	drawParticle(gfx, 1);
	sys->m_timers->_stop("part-draw");

	// Draw counters for both viewports
	// (Life gauge & Carry info)
	sys->m_timers->_start("drct-post", true);
	m_lightMgr->set(gfx);
	Viewport* vp = gfx.getViewport(0);
	if (vp && vp->viewable()) {
		gfx.m_currentViewport = vp;
		directDrawPost(gfx, vp);
	}

	m_lightMgr->set(gfx);
	vp = gfx.getViewport(1);
	if (vp && vp->viewable()) {
		gfx.m_currentViewport = vp;
		directDrawPost(gfx, vp);
	}
	sys->m_timers->_stop("drct-post");
}

/*
 * --INFO--
 * Address:	80239ACC
 * Size:	000360
 */
void BaseGameSection::newdraw_drawAll(Viewport* vp)
{
	sys->m_timers->_start("draw_calc", true);
	Graphics& gfx = *sys->m_gfx;

	doSetView(vp->m_vpId);
	vp->setJ3DViewMtx(true)->setViewCalcModeImm();
	doViewCalc();
	vp->setViewport();
	vp->setProjection();
	sys->m_timers->_stop("draw_calc");

	j3dSys.drawInit();

	sys->m_timers->_start("jdraw", true);
	m_lightMgr->set(gfx);
	_12C->get(6)->draw();
	_12C->get(2)->draw();
	_12C->get(9)->draw();
	_12C->get(3)->draw();
	_12C->get(0)->draw();
	doSimpleDraw(vp);
	m_lightMgr->set(gfx);
	_130->get(3)->draw();
	_130->get(0)->draw();
	m_lightMgr->m_fogMgr->off(gfx);
	_12C->get(1)->draw();
	_130->get(1)->draw();
	m_lightMgr->m_fogMgr->set(gfx);
	sys->m_timers->_stop("jdraw");

	gfx.setToken("direct");

	sys->m_timers->_start("direct", true);
	j3dSys.drawInit();
	directDraw(gfx, vp);
	sys->m_timers->_stop("direct");

	Game::shadowMgr->draw(gfx, vp->m_vpId);
	vp->setViewport();
	vp->setProjection();

	sys->m_timers->_start("j3d-etc", true);
	_12C->get(7)->draw();
	_130->get(7)->draw();

	if (!_168 && (m_xfbFlags & 3) == 0) {
		m_xfbImage->capture(m_xfbTexture1, m_xfbTexture2, GX_TF_RGB565, true, 0);
	}
	m_lightMgr->set(gfx);
	m_lightMgr->m_fogMgr->off(gfx);

	_12C->get(8)->draw();
	_130->get(8)->draw();

	vp->setJ3DViewMtx(true);

	m_lightMgr->m_fogMgr->off(gfx);
	_12C->get(4)->draw();
	_130->get(4)->draw();
	m_lightMgr->m_fogMgr->set(gfx);
	vp->setJ3DViewMtx(true);

	_130->get(2)->draw();
	vp->setJ3DViewMtx(false);
	sys->m_timers->_stop("j3d-etc");
}

} // namespace Game

/*
 * --INFO--
 * Address:	80239E2C
 * Size:	000030
 */
// void Delegate1<Game::BaseGameSection, Viewport*>::invoke(Viewport*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r5, r3
// 	stw      r0, 0x14(r1)
// 	addi     r12, r5, 8
// 	lwz      r3, 4(r3)
// 	bl       __ptmf_scall
// 	nop
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80239E5C
 * Size:	000028
 */
// void __sinit_baseGameSectionDraw_cpp(void)
// {
/*
lis      r4, __float_nan@ha
li       r0, -1
lfs      f0, __float_nan@l(r4)
lis      r3, lbl_804C1590@ha
stw      r0, lbl_80515CB0@sda21(r13)
stfsu    f0, lbl_804C1590@l(r3)
stfs     f0, lbl_80515CB4@sda21(r13)
stfs     f0, 4(r3)
stfs     f0, 8(r3)
blr
*/
// }
