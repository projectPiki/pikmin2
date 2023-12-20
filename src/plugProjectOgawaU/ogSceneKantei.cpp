#include "og/newScreen/KanteiDemo.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80319BDC
 * @note Size: 0x44
 */
KanteiDemo::KanteiDemo() { mObjBase = nullptr; }

/**
 * @note Address: 0x80319C20
 * @note Size: 0x4
 */
void KanteiDemo::doUserCallBackFunc(Resource::MgrCommand*) { }

/**
 * @note Address: 0x80319C24
 * @note Size: 0x68
 */
void KanteiDemo::doCreateObj(JKRArchive* archive)
{
	mObjBase = new ObjKantei("kantei screen");
	registObj(mObjBase, archive);
}
} // namespace newScreen
} // namespace og
