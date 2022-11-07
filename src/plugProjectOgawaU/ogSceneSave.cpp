#include "og/newScreen/Save.h"
#include "ebi/Save.h"
#include "System.h"
#include "Game/MemoryCard/Mgr.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80324DB4
 * Size:	00003C
 */
Save::Save() { }

/*
 * --INFO--
 * Address:	80324DF0
 * Size:	000078
 */
void Save::doUserCallBackFunc(Resource::MgrCommand*)
{
	m_saveMgr = ebi::Save::TMgr::createInstance();

	ebi::Save::TMgr* saveMgr = getSaveMgr();
	saveMgr->m_saveMenu.loadResource();
	saveMgr->doLoadResource(JKRHeap::sCurrentHeap);

	doCreateObjUserCallBackFunc(nullptr);
}

/*
 * --INFO--
 * Address:	80324E68
 * Size:	000030
 */
void Save::doCreateObj(JKRArchive*) { setColorBG(0, 0, 255, 255); }

/*
 * --INFO--
 * Address:	80324E98
 * Size:	000068
 */
void Save::doCreateObjUserCallBackFunc(JKRArchive* archive)
{
	ObjSave* obj   = new ObjSave("save menu");
	obj->m_saveMgr = m_saveMgr;
	registObj(obj, archive);
}

} // namespace newScreen
} // namespace og
