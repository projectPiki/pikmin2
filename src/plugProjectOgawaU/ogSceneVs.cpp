#include "og/newScreen/Vs.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80327C5C
 * Size:	00003C
 */
Vs::Vs() { }

/*
 * --INFO--
 * Address:	80327C98
 * Size:	000004
 */
void Vs::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80327C9C
 * Size:	000078
 */
void Vs::doCreateObj(JKRArchive* archive)
{
	::Screen::ObjBase* obj = new ObjVs("Vs screen");
	registObj(obj, archive);
	setColorBG(0, 0, 0, 0);
}
} // namespace newScreen
} // namespace og
