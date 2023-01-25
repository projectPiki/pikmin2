#include "og/newScreen/Contena.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80321F08
 * Size:	000044
 */
Contena::Contena() { mSceneType = SCENE_CONTENA_BLUE; }

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

	Screen::DispMemberBase* dispMember = mDispMember;
	if (dispMember->isID(OWNER_OGA, MEMBER_CONTENA)) {
		mSceneType = SCENE_CONTENA_BLUE;
	} else {
		Screen::DispMemberUfoMenu* ufoMenu = static_cast<Screen::DispMemberUfoMenu*>(dispMember->getSubMember(OWNER_OGA, MEMBER_UFO_MENU));
		switch (ufoMenu->mContenaType) {
		case 1:
			mSceneType = SCENE_CONTENA_WHITE;
			break;
		case 2:
			mSceneType = SCENE_CONTENA_PURPLE;
			break;
		}
	}

	setColorBG(0, 0, 0, 160);
}

} // namespace newScreen
} // namespace og
