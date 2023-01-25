#include "og/newScreen/KanteiDemo.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80319BDC
 * Size:	000044
 */
KanteiDemo::KanteiDemo() { mObjBase = nullptr; }

/*
 * --INFO--
 * Address:	80319C20
 * Size:	000004
 */
void KanteiDemo::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	80319C24
 * Size:	000068
 */
void KanteiDemo::doCreateObj(JKRArchive* archive)
{
	mObjBase = new ObjKantei("kantei screen");
	registObj(mObjBase, archive);
}
} // namespace newScreen
} // namespace og
