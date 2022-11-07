#include "og/newScreen/Cave.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8031CC90
 * Size:	00003C
 */
Cave::Cave() { }

/*
 * --INFO--
 * Address:	8031CCCC
 * Size:	000004
 */
void Cave::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	8031CCD0
 * Size:	000078
 */
void Cave::doCreateObj(JKRArchive* archive)
{
	registObj(new ObjCave("cave screen"), archive);
	setColorBG(0, 0, 0, 0);
}
} // namespace newScreen
} // namespace og
