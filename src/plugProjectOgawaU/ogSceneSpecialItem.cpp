#include "og/newScreen/SpecialItem.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8031A2A0
 * Size:	00003C
 */
SpecialItem::SpecialItem() { }

/*
 * --INFO--
 * Address:	8031A2DC
 * Size:	000004
 */
void SpecialItem::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	8031A2E0
 * Size:	000060
 */
void SpecialItem::doCreateObj(JKRArchive* archive)
{
	::Screen::ObjBase* obj = new ObjSpecialItem("special item screen");
	registObj(obj, archive);
}

/*
 * --INFO--
 * Address:	8031A340
 * Size:	00004C
 */
bool SpecialItem::doConfirmSetScene(::Screen::SetSceneArg& arg)
{
	bool b = false;
	if (arg.getSceneType() != SCENE_SPECIAL_ITEM) {
		b = true;
	}
	return b;
}
} // namespace newScreen
} // namespace og
