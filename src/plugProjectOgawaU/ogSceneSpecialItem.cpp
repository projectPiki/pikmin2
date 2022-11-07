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
void SpecialItem::doCreateObj(JKRArchive* archive) { registObj(new ObjSpecialItem("special item screen"), archive); }

/*
 * --INFO--
 * Address:	8031A340
 * Size:	00004C
 */
bool SpecialItem::doConfirmSetScene(::Screen::SetSceneArg& arg)
{
	bool result = false;
	if (arg.getSceneType() != SCENE_SPECIAL_ITEM) {
		result = true;
	}
	return result;
}
} // namespace newScreen
} // namespace og
