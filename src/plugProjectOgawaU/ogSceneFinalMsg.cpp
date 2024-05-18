#include "og/newScreen/FinalMsg.h"
#include "Screen/Game2DMgr.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x803258E8
 * @note Size: 0x3C
 */
FinalMsg::FinalMsg() { }

/**
 * @note Address: 0x80325924
 * @note Size: 0x4
 */
void FinalMsg::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x80325928
 * @note Size: 0x78
 */
void FinalMsg::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjFinalMsg("ObjFinalMessage screen"), archive);
	setColorBG(0, 0, 0, 180);
}

/**
 * @note Address: 0x803259A0
 * @note Size: 0x64
 */
int FinalMsg::doGetFinishState()
{
	Screen::DispMemberFinalMessage* dispMember = static_cast<Screen::DispMemberFinalMessage*>(mDispMember);
	int finalState                             = ::Screen::Game2DMgr::CHECK2D_FinalMessage_NotOpen;

	if (dispMember->isID(OWNER_OGA, MEMBER_FINAL_MSG)) {
		finalState = dispMember->mFinalState;
	}

	return finalState;
}

} // namespace newScreen
} // namespace og
