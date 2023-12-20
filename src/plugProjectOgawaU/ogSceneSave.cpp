#include "og/newScreen/Save.h"
#include "ebi/Save.h"
#include "System.h"
#include "Game/MemoryCard/Mgr.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80324DB4
 * @note Size: 0x3C
 */
Save::Save() { }

/**
 * @note Address: 0x80324DF0
 * @note Size: 0x78
 */
void Save::doUserCallBackFunc(Resource::MgrCommand*)
{
	mSaveMgr = ebi::Save::TMgr::createInstance();

	ebi::Save::TMgr* saveMgr = getSaveMgr();
	saveMgr->mSaveMenu.loadResource();
	saveMgr->doLoadResource(JKRHeap::sCurrentHeap);

	doCreateObjUserCallBackFunc(nullptr);
}

/**
 * @note Address: 0x80324E68
 * @note Size: 0x30
 */
void Save::doCreateObj(JKRArchive*) { setColorBG(0, 0, 255, 255); }

/**
 * @note Address: 0x80324E98
 * @note Size: 0x68
 */
void Save::doCreateObjUserCallBackFunc(JKRArchive* archive)
{
	ObjSave* obj  = new ObjSave("save menu");
	obj->mSaveMgr = mSaveMgr;
	registObj(obj, archive);
}

} // namespace newScreen
} // namespace og
