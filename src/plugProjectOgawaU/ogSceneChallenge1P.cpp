#include "og/newScreen/Challenge.h"
#include "Morimura/challengeResult2d.h"
#include "Game/GameSystem.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80328C30
 * @note Size: 0x3C
 */
Challenge1P::Challenge1P() { }

/**
 * @note Address: 0x80328C6C
 * @note Size: 0x4
 */
void Challenge1P::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x80328C70
 * @note Size: 0x9C
 */
void Challenge1P::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjChallenge1P("challenge1P screen"), archive);
	registObj(new Morimura::TChallengeEndCount, archive);
	setColorBG(0, 0, 0, 0);
}

/**
 * @note Address: 0x80328D0C
 * @note Size: 0x4C
 */
bool Challenge1P::doStart(::Screen::StartSceneArg* sceneArg)
{
	(::Screen::ObjBase*)(searchObj("challenge1P screen"))->start(sceneArg); // static_cast errors here bc of the :: required
	return true;
}

/**
 * @note Address: 0x80328D58
 * @note Size: 0x38
 */
void Challenge1P::doUpdateActive()
{
	if (Game::gameSystem) {
		Screen::DispMemberChallenge1P* dispMember = static_cast<Screen::DispMemberChallenge1P*>(mDispMember);
		updateCountDown(dispMember->mTimeLimit, &dispMember->mDayEndCount);
	}
}

/**
 * @note Address: 0x80328D90
 * @note Size: 0x3C
 */
void Challenge1P::startCountDown()
{
	(::Screen::ObjBase*)(searchObj("challengeEndCount"))->start(nullptr); // static_cast errors here bc of the :: required
}

} // namespace newScreen
} // namespace og
