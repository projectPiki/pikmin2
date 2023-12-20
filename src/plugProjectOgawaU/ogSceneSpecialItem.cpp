#include "og/newScreen/SpecialItem.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x8031A2A0
 * @note Size: 0x3C
 */
SpecialItem::SpecialItem() { }

/**
 * @note Address: 0x8031A2DC
 * @note Size: 0x4
 */
void SpecialItem::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x8031A2E0
 * @note Size: 0x60
 */
void SpecialItem::doCreateObj(JKRArchive* archive) { registObj(new ObjSpecialItem("special item screen"), archive); }

/**
 * @note Address: 0x8031A340
 * @note Size: 0x4C
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
