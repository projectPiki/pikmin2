#include "og/newScreen/KanteiDemo.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80319BDC
 * Size:	000044
 */
KanteiDemo::KanteiDemo() { m_objBase = nullptr; }

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
	m_objBase = new ObjKantei("kantei screen");
	registObj(m_objBase, archive);
}
} // namespace newScreen
} // namespace og
