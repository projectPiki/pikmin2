#include "kh/WinLose.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "kh/khUtil.h"
#include "JSystem/JKR/JKRArchive.h"
#include "utilityU.h"

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	8040FCE8
 * Size:	0000B8
 */
ObjWinLose::ObjWinLose()
{
	for (int i = 0; i < 2; i++) {
		m_screenA[i]   = nullptr;
		m_screenB[i]   = nullptr;
		m_anim1[i]     = nullptr;
		m_anim2[i]     = nullptr;
		m_anim3[i]     = nullptr;
		m_anim4[i]     = nullptr;
		m_animTime4[i] = 0.0f;
		m_animTime3[i] = 0.0f;
		m_animTime2[i] = 0.0f;
		m_animTime1[i] = 0.0f;
		m_yOffset[i]   = 0.0f;
	}

	m_doUpdateAnim = false;
	m_frameTimer   = 0;
	m_screenNum    = 2;
	m_alpha        = 0;
}

/*
 * --INFO--
 * Address:	8040FDA0
 * Size:	000418
 */
void ObjWinLose::doCreate(JKRArchive* arc)
{

	char* winLoseList[3][3]
	    = { "win.blo", "win.bck", "win.bpk", "lose.blo", "lose.bck", "lose.bpk", "time_up.blo", "time_up.bck", "time_up.bpk" };

	char* drawList[4][3] = { "win_wait.blo",     "win_wait.bck",     "win_wait.bpk",     "lose_wait.blo", "lose_wait.bck", "lose_wait.bpk",
		                     "time_up_wait.blo", "time_up_wait.bck", "time_up_wait.bpk", "draw.blo",      "draw.bck",      "draw.bpk" };

	int arg[2] = { 0, 0 };

	if (!getDispMember()->isID(OWNER_KH, MEMBER_WIN_LOSE)) {
		JUT_PANICLINE(79, "disp member err");
	}

	DispWinLose* disp = static_cast<DispWinLose*>(getDispMember());
	switch (disp->m_outcome) {
	case WinPlayer1:
		arg[0] = 0;
		arg[1] = 1;
		break;
	case WinPlayer2:
		arg[0] = 1;
		arg[1] = 0;
		break;
	case Draw: // draw
		arg[0] = 3;
		arg[1] = 3;
		break;
	case Timeup1P: // time out 1p
		arg[0]      = 2;
		arg[1]      = -1;
		m_screenNum = 1;
		break;
	case Timeup2P: // time out 2p
		arg[0] = 2;
		arg[1] = 2;
		break;
	}

	for (int i = 0; i < m_screenNum; i++) {
		if (disp->m_outcome != Draw) {
			m_screenA[i] = new P2DScreen::Mgr_tuning;
			m_screenA[i]->set(winLoseList[arg[i]][0], 0x40000, arc);

			void* file = JKRFileLoader::getGlbResource(winLoseList[arg[i]][1], arc);
			m_anim1[i] = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));

			file       = JKRFileLoader::getGlbResource(winLoseList[arg[i]][2], arc);
			m_anim3[i] = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));
			m_screenA[i]->setAnimation(m_anim1[i]);
			m_screenA[i]->setAnimation(m_anim3[i]);

		} else {
			m_doUpdateAnim = true;
		}

		m_screenB[i] = new P2DScreen::Mgr_tuning;
		m_screenB[i]->set(drawList[arg[i]][0], 0x40000, arc);

		void* file = JKRFileLoader::getGlbResource(drawList[arg[i]][1], arc);
		m_anim2[i] = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));

		file       = JKRFileLoader::getGlbResource(drawList[arg[i]][2], arc);
		m_anim4[i] = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));
		m_screenB[i]->setAnimation(m_anim2[i]);
		m_screenB[i]->setAnimation(m_anim4[i]);

		setInfAlpha(m_screenB[i]->search('ROOT'));
		m_screenB[i]->search('ROOT')->setAlpha(m_alpha);
	}

	if (m_screenNum == 2) {
		m_yOffset[0] = msVal.m_yOffsetP1;
		m_yOffset[1] = msVal.m_yOffsetP2;
	}

	getOwner()->setColorBG(0, 0, 0, 160);
	switch (disp->m_outcome) {
	case Timeup1P:
	case Timeup2P:
		PSStartChallengeTimeUpStream();
		break;
	}
}

/*
 * --INFO--
 * Address:	804101B8
 * Size:	000020
 */
bool ObjWinLose::doUpdate() { return updateAnimation(); }

/*
 * --INFO--
 * Address:	804101D8
 * Size:	0000B8
 */
void ObjWinLose::doDraw(Graphics& gfx)
{
	gfx.m_orthoGraph.setPort();

	for (int i = 0; i < m_screenNum; i++) {
		if (m_screenA[i])
			m_screenA[i]->draw(gfx, gfx.m_orthoGraph);

		m_screenB[i]->draw(gfx, gfx.m_orthoGraph);
	}
}

/*
 * --INFO--
 * Address:	80410290
 * Size:	00038C
 */
bool ObjWinLose::updateAnimation()
{
	for (int i = 0; i < m_screenNum; i++) {
		if (m_screenA[i]) {
			m_anim1[i]->m_currentFrame = m_animTime1[i];
			m_anim3[i]->m_currentFrame = m_animTime3[i];
			m_screenA[i]->animation();
			m_animTime1[i] += msVal.m_animSpeed;
			m_animTime3[i] += msVal.m_animSpeed;

			if (m_animTime1[i] >= msVal.m_duration) {
				m_doUpdateAnim = true;
			}

			if (m_animTime1[i] >= m_anim1[i]->m_maxFrame || m_animTime3[i] >= m_anim3[i]->m_maxFrame) {
				m_animTime3[i] = 0.0f;
				m_animTime1[i] = 0.0f;
				m_screenA[i]->hide();
			}
			m_screenA[i]->search('ROOT')->add(0.0f, m_yOffset[i]);
		}

		if (m_doUpdateAnim) {
			m_anim2[i]->m_currentFrame = m_animTime2[i];
			m_anim4[i]->m_currentFrame = m_animTime4[i];
			m_screenB[i]->animation();
			m_animTime2[i] += 1.0f;
			m_animTime4[i] += 1.0f;

			if (m_animTime2[i] >= m_anim2[i]->m_maxFrame) {
				m_animTime2[i] = 0.0f;
			}
			if (m_animTime4[i] >= m_anim4[i]->m_maxFrame) {
				m_animTime4[i] = 0.0f;
			}
			m_screenB[i]->search('ROOT')->setOffset(0.0f, m_yOffset[i]);
			m_screenB[i]->search('ROOT')->setAlpha(m_alpha);
			if (m_alpha < 255 - msVal.m_alphaInc) {
				m_alpha += msVal.m_alphaInc;
			} else {
				m_alpha = 255;
			}
		}
	}

	if (!getDispMember()->isID(OWNER_KH, MEMBER_WIN_LOSE)) {
		JUT_PANICLINE(276, "disp member err");
	}

	DispWinLose* disp = static_cast<DispWinLose*>(getDispMember());
	int old           = m_frameTimer + 1;
	m_frameTimer      = old;
	if (old > msVal.m_endBGMFrame) {
		disp->_0C = 3;
		PSStop2DStream();
		PSMuteOffSE_on2D();
	} else if (m_frameTimer > msVal.m_finishFrame) {
		disp->_0C = 2;
	}
	return false;
}

ObjWinLose::StaticValues ObjWinLose::msVal;

} // namespace Screen
} // namespace kh
