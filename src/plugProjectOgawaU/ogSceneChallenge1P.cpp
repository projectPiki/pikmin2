#include "og/newScreen/Challenge.h"
#include "Morimura/Challenge.h"
#include "Game/GameSystem.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80328C30
 * Size:	00003C
 */
Challenge1P::Challenge1P() { }

/*
 * --INFO--
 * Address:	80328C6C
 * Size:	000004
 */
void Challenge1P::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80328C70
 * Size:	00009C
 */
void Challenge1P::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjChallenge1P("challenge1P screen"), archive);
	registObj(new Morimura::TChallengeEndCount, archive);
	setColorBG(0, 0, 0, 0);
}

/*
 * --INFO--
 * Address:	80328D0C
 * Size:	00004C
 */
bool Challenge1P::doStart(::Screen::StartSceneArg* sceneArg)
{
	(::Screen::ObjBase*)(searchObj("challenge1P screen"))->start(sceneArg); // static_cast errors here bc of the :: required
	return true;
}

/*
 * --INFO--
 * Address:	80328D58
 * Size:	000038
 */
void Challenge1P::doUpdateActive()
{
	if (Game::gameSystem) {
		Screen::DispMemberChallenge1P* dispMember = static_cast<Screen::DispMemberChallenge1P*>(m_dispMember);
		updateCountDown(dispMember->_5C, &dispMember->m_dayEndCount);
	}
}

/*
 * --INFO--
 * Address:	80328D90
 * Size:	00003C
 */
void Challenge1P::startCountDown()
{
	(::Screen::ObjBase*)(searchObj("challengeEndCount"))->start(nullptr); // static_cast errors here bc of the :: required
}

} // namespace newScreen
} // namespace og
