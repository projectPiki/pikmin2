#include "og/newScreen/Challenge.h"
#include "Morimura/Challenge.h"
#include "Game/GameSystem.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8031FD04
 * Size:	00003C
 */
Challenge2P::Challenge2P() { }

/*
 * --INFO--
 * Address:	8031FD40
 * Size:	000004
 */
void Challenge2P::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	8031FD44
 * Size:	0000C0
 */
void Challenge2P::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjChallenge2P("challenge2P screen"), archive);
	registObj(new Morimura::TChallengeEndCount1p, archive);
	registObj(new Morimura::TChallengeEndCount2p, archive);
	setColorBG(0, 0, 0, 0);
}

/*
 * --INFO--
 * Address:	8031FE04
 * Size:	00004C
 */
bool Challenge2P::doStart(::Screen::StartSceneArg* sceneArg)
{
	(::Screen::ObjBase*)(searchObj("challenge2P screen"))->start(sceneArg); // static_cast errors here bc of the :: required
	return true;
}

/*
 * --INFO--
 * Address:	8031FE50
 * Size:	000038
 */
void Challenge2P::doUpdateActive()
{
	if (Game::gameSystem) {
		Screen::DispMemberChallenge2P* dispMember = static_cast<Screen::DispMemberChallenge2P*>(m_dispMember);
		updateCountDown(dispMember->_5C, &dispMember->m_dayEndCount);
	}
}

/*
 * --INFO--
 * Address:	8031FE88
 * Size:	000084
 */
void Challenge2P::startCountDown()
{
	::Screen::ObjBase* endCount1p = (::Screen::ObjBase*)(searchObj("challengeEndCount1p")); // static_cast errors here bc of the :: required
	::Screen::ObjBase* endCount2p = (::Screen::ObjBase*)(searchObj("challengeEndCount2p")); // static_cast errors here bc of the :: required
	endCount1p->start(nullptr);
	endCount2p->start(nullptr);
}

} // namespace newScreen
} // namespace og
