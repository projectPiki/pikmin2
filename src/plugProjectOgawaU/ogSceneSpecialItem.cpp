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

/*
 * --INFO--
 * Address:	8031A38C
 * Size:	00000C
 */
const char* SpecialItem::getResName() const { return "res_special_item.szs"; }

/*
 * --INFO--
 * Address:	8031A398
 * Size:	000008
 */
SceneType SpecialItem::getSceneType() { return SCENE_SPECIAL_ITEM; }

/*
 * --INFO--
 * Address:	8031A3A0
 * Size:	00000C
 */
ScreenOwnerID SpecialItem::getOwnerID() { return OWNER_OGA; }

/*
 * --INFO--
 * Address:	8031A3AC
 * Size:	000014
 */
ScreenMemberID SpecialItem::getMemberID() { return MEMBER_SPECIAL_ITEM; }

/*
 * --INFO--
 * Address:	8031A3C0
 * Size:	000008
 */
bool SpecialItem::isUseBackupSceneInfo() { return true; }
} // namespace newScreen
} // namespace og
