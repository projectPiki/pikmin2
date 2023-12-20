#include "og/newScreen/Contena.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80321F08
 * @note Size: 0x44
 */
Contena::Contena() { mSceneType = SCENE_CONTENA_BLUE; }

/**
 * @note Address: 0x80321F4C
 * @note Size: 0x4
 */
void Contena::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x80321F50
 * @note Size: 0x100
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
