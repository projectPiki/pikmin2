#include "og/newScreen/Contena.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80321F08
 * Size:	000044
 */
Contena::Contena() { m_sceneType = SCENE_2714; }

/*
 * --INFO--
 * Address:	80321F4C
 * Size:	000004
 */
void Contena::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80321F50
 * Size:	000100
 */
void Contena::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjContena("contena screen"), archive);

	Screen::DispMemberBase* dispMember = m_dispMember;
	if (dispMember->isID(OWNER_OGA, MEMBER_CONTENA)) {
		m_sceneType = SCENE_2714;
	} else {
		Screen::DispMemberUfoMenu* ufoMenu = static_cast<Screen::DispMemberUfoMenu*>(dispMember->getSubMember(OWNER_OGA, MEMBER_UFO_MENU));
		switch (ufoMenu->_08) {
		case 1:
			m_sceneType = SCENE_2717;
			break;
		case 2:
			m_sceneType = SCENE_2718;
			break;
		}
	}

	setColorBG(0, 0, 0, 160);
}

} // namespace newScreen
} // namespace og
