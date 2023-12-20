#include "og/newScreen/Cave.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x8031CC90
 * @note Size: 0x3C
 */
Cave::Cave() { }

/**
 * @note Address: 0x8031CCCC
 * @note Size: 0x4
 */
void Cave::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x8031CCD0
 * @note Size: 0x78
 */
void Cave::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjCave("cave screen"), archive);
	setColorBG(0, 0, 0, 0);
}
} // namespace newScreen
} // namespace og
