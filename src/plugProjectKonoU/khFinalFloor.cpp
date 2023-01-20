#include "kh/FinalFloor.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "JSystem/JKR/JKRArchive.h"
#include "PSSystem/PSSystemIF.h"
#include "nans.h"
#include "Game/GameSystem.h"
#include "og/newScreen/Challenge.h"
#include "Screen/Game2DMgr.h"

static const char unused[] = "\0\0\0\0\0\0\0\0";

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	80401D38
 * Size:	00021C
 */
void ObjFinalFloor::doCreate(JKRArchive* arc)
{
	if (!getDispMember()->isID(OWNER_KH, MEMBER_FINAL_FLOOR)) {
		JUT_PANICLINE(57, "disp member err");
	}

	if (static_cast<DispFinalFloor*>(getDispMember())->m_is2Player) {
		m_screenNum  = 2;
		m_yOffset[0] = msVal.m_yOffsetP1;
		m_yOffset[1] = msVal.m_yOffsetP2;
	}

	for (int i = 0; i < m_screenNum; i++) {
		m_screen[i] = new P2DScreen::Mgr_tuning;
		m_screen[i]->set("final_floor.blo", 0x40000, arc);
		void* file = JKRFileLoader::getGlbResource("final_floor.bck", arc);
		m_anim1[i] = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));

		file       = JKRFileLoader::getGlbResource("final_floor.bpk", arc);
		m_anim2[i] = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));

		m_screen[i]->setAnimation(m_anim1[i]);
		m_screen[i]->setAnimation(m_anim2[i]);
	}
	startBGM();
}

/*
 * --INFO--
 * Address:	80401F54
 * Size:	000020
 */
bool ObjFinalFloor::doUpdate() { return updateAnimation(); }

/*
 * --INFO--
 * Address:	80401F74
 * Size:	0000DC
 */
void ObjFinalFloor::doDraw(Graphics& gfx)
{
	gfx.m_orthoGraph.setPort();

	for (int i = 0; i < m_screenNum; i++) {
		m_screen[i]->search('ROOT')->setOffset(0.0f, m_yOffset[i]);
		m_screen[i]->draw(gfx, gfx.m_orthoGraph);
	}
}

/*
 * --INFO--
 * Address:	80402050
 * Size:	000038
 */
bool ObjFinalFloor::doUpdateFadein()
{
	PSSystem::spSysIF->playSystemSe(PSSE_FINALLEVEL_COME, &m_sound, 0);
	return true;
}

/*
 * --INFO--
 * Address:	80402088
 * Size:	0001F8
 */
bool ObjFinalFloor::doUpdateFadeout()
{
	bool isCh = Game::gameSystem && Game::gameSystem->isChallengeMode();

	if (!getDispMember()->isID(OWNER_KH, MEMBER_FINAL_FLOOR)) {
		JUT_PANICLINE(151, "disp member err");
	}

	DispFinalFloor* disp = static_cast<DispFinalFloor*>(getDispMember());
	if (isCh) {
		if (disp->m_is2Player) {
			og::newScreen::SArgChallenge2P arg(1.5f);
			::Screen::SceneBase* scene = getOwner();
			if (scene->setBackupScene()) {
				scene = getOwner();
				scene->startScene(&arg);
			}
		} else {
			og::newScreen::SArgChallenge1P arg(1.5f);
			::Screen::SceneBase* scene = getOwner();
			if (scene->setBackupScene()) {
				scene = getOwner();
				scene->startScene(&arg);
			}
		}
	} else {
		// story mode cave is the default
		::Screen::SceneBase* scene = getOwner();
		if (scene->setBackupScene()) {
			scene = getOwner();
			scene->startScene(nullptr);
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	80402280
 * Size:	000034
 */
void ObjFinalFloor::doUpdateFadeoutFinish() { Game::gameSystem->m_section->startMainBgm(); }

/*
 * --INFO--
 * Address:	804022B4
 * Size:	0001C8
 */
bool ObjFinalFloor::updateAnimation()
{
	bool ret = false;
	for (int i = 0; i < m_screenNum; i++) {
		m_anim1[i]->m_currentFrame = m_animTime1[i];
		m_anim2[i]->m_currentFrame = m_animTime2[i];
		m_screen[i]->animation();

		if (::Screen::gGame2DMgr && ::Screen::gGame2DMgr->m_screenMgr->m_inDemo) {
			m_screen[i]->hide();
			if (m_animTime1[i] > (m_anim1[i]->m_maxFrame * 3) >> 2) {
				m_animTime1[i] = m_anim1[i]->m_maxFrame;
				m_animTime2[i] = m_anim2[i]->m_maxFrame;
			} else {
				m_animTime2[i] = 0.0f;
				m_animTime1[i] = 0.0f;
			}
		} else {
			m_screen[i]->show();
		}
		m_animTime1[i] += msVal.m_animSpeed;
		m_animTime2[i] += msVal.m_animSpeed;

		if (m_animTime1[i] >= m_anim1[i]->m_maxFrame || m_animTime2[i] >= m_anim2[i]->m_maxFrame) {
			ret = true;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	8040247C
 * Size:	000040
 */
void ObjFinalFloor::stopSound()
{
	if (m_sound) {
		m_sound->stop(0);
	}
	PSStop2DStream();
}

/*
 * --INFO--
 * Address:	804024BC
 * Size:	00015C
 */
void ObjFinalFloor::restartSound()
{
	if (m_animTime1[0] <= (m_anim1[0]->m_maxFrame * 3) >> 2) {
		PSSystem::spSysIF->playSystemSe(PSSE_FINALLEVEL_COME, &m_sound, 0);
		startBGM();
	}
}

/*
 * --INFO--
 * Address:	80402618
 * Size:	000040
 */
bool SceneFinalFloor::doConfirmSetScene(::Screen::SetSceneArg& arg) { return arg.getSceneType() != SCENE_PAUSE_MENU; }

ObjFinalFloor::StaticValues ObjFinalFloor::msVal;

} // namespace Screen
} // namespace kh
