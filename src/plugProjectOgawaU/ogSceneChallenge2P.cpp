#include "og/newScreen/Challenge.h"
#include "Morimura/challengeResult2d.h"
#include "Game/GameSystem.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x8031FD04
 * @note Size: 0x3C
 */
Challenge2P::Challenge2P() { }

/**
 * @note Address: 0x8031FD40
 * @note Size: 0x4
 */
void Challenge2P::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x8031FD44
 * @note Size: 0xC0
 */
void Challenge2P::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjChallenge2P("challenge2P screen"), archive);
	registObj(new Morimura::TChallengeEndCount1p, archive);
	registObj(new Morimura::TChallengeEndCount2p, archive);
	setColorBG(0, 0, 0, 0);
}

/**
 * @note Address: 0x8031FE04
 * @note Size: 0x4C
 */
bool Challenge2P::doStart(::Screen::StartSceneArg* sceneArg)
{
	(::Screen::ObjBase*)(searchObj("challenge2P screen"))->start(sceneArg); // static_cast errors here bc of the :: required
	return true;
}

/**
 * @note Address: 0x8031FE50
 * @note Size: 0x38
 */
void Challenge2P::doUpdateActive()
{
	if (Game::gameSystem) {
		Screen::DispMemberChallenge2P* dispMember = static_cast<Screen::DispMemberChallenge2P*>(mDispMember);
		updateCountDown(dispMember->mTimeLimit, &dispMember->mDayEndCount);
	}
}

/**
 * @note Address: 0x8031FE88
 * @note Size: 0x84
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
