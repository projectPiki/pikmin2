#include "kh/khReadyGo.h"
#include "kh/khFinalFloor.h"
#include "kh/khUtil.h"
#include "PSSystem/PSSystemIF.h"
#include "nans.h"
#include "SoundID.h"
#include "utilityU.h"
#include "efx2d/T2DGo.h"
#include "Game/GameSystem.h"
#include "JSystem/J2D/J2DAnmLoader.h"

static const char pad[] = { "\0\0\0\0\0\0\0\0" };
static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	80401268
 * Size:	0000A4
 */
bool ObjReadyGo::doUpdateFadein()
{
	if (!getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
		JUT_PANICLINE(61, "disp member err");
	}

	DispReadyGo* disp = static_cast<DispReadyGo*>(getDispMember());

	if (disp->m_gameType == 0) {
		PSSystem::spSysIF->playSystemSe(PSSE_READYGO_BATTLE_COME, 0);
	} else {
		PSSystem::spSysIF->playSystemSe(PSSE_READYGO_CHALLENGE_COME, 0);
	}
	return true;
}

/*
 * --INFO--
 * Address:	8040130C
 * Size:	0001D4
 */
void ObjReadyGo::doCreate(JKRArchive* arc)
{
	char* nameList[2][3]
	    = { "ready_go.blo", "ready_go.bck", "ready_go.bpk", "ready_go_reverse.blo", "ready_go_reverse.bck", "ready_go_reverse.bpk" };

	if (!getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
		JUT_PANICLINE(89, "disp member err");
	}

	DispReadyGo* disp = static_cast<DispReadyGo*>(getDispMember());
	if (disp->m_is2Player) {
		m_screenNum  = 2;
		m_yOffset[0] = msVal.m_yOffsetP1;
		m_yOffset[1] = msVal.m_yOffsetP2;
	}

	for (int i = 0; i < m_screenNum; i++) {
		m_screen[i] = new P2DScreen::Mgr_tuning;
		m_screen[i]->set(nameList[i][0], 0x40000, arc);
		void* file = JKRFileLoader::getGlbResource(nameList[i][1], arc);
		m_anim1[i] = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));

		file       = JKRFileLoader::getGlbResource(nameList[i][2], arc);
		m_anim2[i] = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));

		m_screen[i]->setAnimation(m_anim1[i]);
		m_screen[i]->setAnimation(m_anim2[i]);
	}

	getOwner()->setColorBG(0, 0, 0, 160);

	if (disp->m_gameType == 0) {
		PSStart2DStream(0xc0011022);
	} else {
		PSStart2DStream(0xc0011023);
	}
}

/*
 * --INFO--
 * Address:	804014E0
 * Size:	000020
 */
bool ObjReadyGo::doUpdate() { return updateAnimation(); }

/*
 * --INFO--
 * Address:	80401500
 * Size:	0000DC
 */
void ObjReadyGo::doDraw(Graphics& gfx)
{
	gfx.m_orthoGraph.setPort();

	for (int i = 0; i < m_screenNum; i++) {
		m_screen[i]->search('ROOT')->setOffset(0.0f, m_yOffset[i]);
		m_screen[i]->draw(gfx, gfx.m_orthoGraph);
	}
}

/*
 * --INFO--
 * Address:	804015DC
 * Size:	00018C
 */
bool ObjReadyGo::doUpdateFadeout()
{
	if (!getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
		JUT_PANICLINE(159, "disp member err");
	}

	DispReadyGo* disp = static_cast<DispReadyGo*>(getDispMember());
	if (disp->m_isFinalFloor) {
		DispFinalFloor disp2;
		disp2.m_is2Player = disp->m_is2Player;
		::Screen::SetSceneArg arg(SCENE_FINAL_FLOOR, &disp2, 0, true);
		arg._09 = false;

		if (getOwner()->setScene(arg)) {
			getOwner()->startScene(nullptr);
		}
	} else {
		if (getOwner()->setBackupScene()) {
			getOwner()->startScene(nullptr);
		}
	}

	getOwner()->setColorBG(0, 0, 0, 0);
	return true;
}

/*
 * --INFO--
 * Address:	80401768
 * Size:	000384
 */
bool ObjReadyGo::updateAnimation()
{
	bool done = false;
	if (!getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
		JUT_PANICLINE(195, "disp member err");
	}

	DispReadyGo* disp = static_cast<DispReadyGo*>(getDispMember());
	f32 goalTime1     = 60.0f;
	f32 goalTime2     = 78.0f;

	for (int i = 0; i < m_screenNum; i++) {
		m_anim1[i]->m_currentFrame = m_animTime1[i];
		m_anim2[i]->m_currentFrame = m_animTime2[i];
		m_screen[i]->animation();
		m_animTime1[i] += msVal.m_animSpeed;
		m_animTime2[i] += msVal.m_animSpeed;

		if (m_animTime1[i] >= m_anim1[i]->m_maxFrame - 2 || m_animTime2[i] >= m_anim2[i]->m_maxFrame - 2) {
			done = true;
		}

		if (m_animTime1[i] > goalTime1 && !m_makeEfx[i]) {
			m_makeEfx[i] = true;

			Vector2f vec(getPaneCenterX(m_screen[i]->search('NALL')) + msVal.m_efxOffsetX,
			             getPaneCenterY(m_screen[i]->search('NALL')) + msVal.m_efxOffsetY);
			efx2d::Arg arg = vec;

			if (disp->m_gameType == 0) {
				efx2d::T2DGoBatl efx;
				efx.create(&arg);
			} else {
				efx2d::T2DGoChal efx;
				efx.create(&arg);
			}
		}

		if (m_animTime1[i] >= goalTime2) {
			m_isAnimComplete = true;
			disp->m_status   = 1;
		}
	}

	if (m_isAnimComplete && !m_isOver && !disp->m_isFinalFloor) {
		Game::gameSystem->m_section->startMainBgm();
		m_isOver = true;
	}
	return done;
}

/*
 * --INFO--
 * Address:	80401AEC
 * Size:	000040
 */
bool SceneReadyGo::doConfirmSetScene(::Screen::SetSceneArg& arg) { return arg.getSceneType() != SCENE_PAUSE_MENU; }

ObjReadyGo::StaticValues ObjReadyGo::msVal;

} // namespace Screen
} // namespace kh
