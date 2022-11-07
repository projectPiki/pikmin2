#include "og/newScreen/FinalMsg.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	803258E8
 * Size:	00003C
 */
FinalMsg::FinalMsg() { }

/*
 * --INFO--
 * Address:	80325924
 * Size:	000004
 */
void FinalMsg::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80325928
 * Size:	000078
 */
void FinalMsg::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjFinalMsg("ObjFinalMessage screen"), archive);
	setColorBG(0, 0, 0, 180);
}

/*
 * --INFO--
 * Address:	803259A0
 * Size:	000064
 */
int FinalMsg::doGetFinishState()
{
	Screen::DispMemberFinalMessage* dispMember = static_cast<Screen::DispMemberFinalMessage*>(m_dispMember);
	int finalState                             = 0;

	if (dispMember->isID(OWNER_OGA, MEMBER_FINAL_MSG)) {
		finalState = dispMember->m_finalState;
	}

	return finalState;
}

} // namespace newScreen
} // namespace og
