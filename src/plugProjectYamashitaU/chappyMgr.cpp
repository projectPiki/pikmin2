#include "Game/Entities/Chappy.h"
#include "LoadResource.h"

namespace Game {
namespace Chappy {

static const char chappyMgrName[] = "chappyMgr";

namespace {
static const char* cChappyChangeTexName0 = "/enemy/data/Chappy/moyou_565.1.bti";
static const char* cChappyChangeTexName1 = "/enemy/data/Chappy/swallow_565.1.bti";
} // namespace

/*
 * --INFO--
 * Address:	80119784
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : ChappyBase::Mgr(objLimit, modelType)
{
	m_name = "赤チャッピーマネージャ"; // chappybase manager
}

/*
 * --INFO--
 * Address:	80119884
 * Size:	00006C
 */
void Mgr::loadTexData()
{
	LoadResource::ArgAramOnly loadArg(cChappyChangeTexName0);

	loadArg._00                   = cChappyChangeTexName0;
	LoadResource::Node* resource0 = gLoadResourceMgr->load(loadArg);
	m_changeTexture0              = static_cast<ResTIMG*>(resource0->_30);

	loadArg._00                   = cChappyChangeTexName1;
	LoadResource::Node* resource1 = gLoadResourceMgr->load(loadArg);
	m_changeTexture1              = static_cast<ResTIMG*>(resource1->_30);
}

/*
 * --INFO--
 * Address:	801198F0
 * Size:	000048
 */
void Mgr::doAlloc() { init(new ChappyBase::Parms); }

} // namespace Chappy
} // namespace Game
