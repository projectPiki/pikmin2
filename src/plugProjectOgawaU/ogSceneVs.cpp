#include "og/newScreen/Vs.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80327C5C
 * @note Size: 0x3C
 */
Vs::Vs() { }

/**
 * @note Address: 0x80327C98
 * @note Size: 0x4
 */
void Vs::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x80327C9C
 * @note Size: 0x78
 */
void Vs::doCreateObj(JKRArchive* archive)
{
	::Screen::ObjBase* obj = new ObjVs("Vs screen");
	registObj(obj, archive);
	setColorBG(0, 0, 0, 0);
}
} // namespace newScreen
} // namespace og
