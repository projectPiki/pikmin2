#include "Game/Entities/Kochappy.h"
#include "LoadResource.h"

namespace Game {
namespace Kochappy {

static const char kochappyMgrName[] = "kochappyMgr";

namespace {
static const char* cKochappyChangeTexName = "/enemy/data/Kochappy/kochappy_body_s3tc.1.bti";
} // namespace

/*
 * --INFO--
 * Address:	801122B4
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : KochappyBase::Mgr(objLimit, modelType)
{
	m_name = "赤コチャッピーマネージャ"; // red kochappy manager
}

/*
 * --INFO--
 * Address:	801123B4
 * Size:	000048
 */
void Mgr::doAlloc() { init(new KochappyBase::Parms); }

/*
 * --INFO--
 * Address:	80112514
 * Size:	000048
 */
void Mgr::loadTexData()
{
	LoadResource::ArgAramOnly loadArg(cKochappyChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	m_changeTexture              = static_cast<ResTIMG*>(resource->_30);
}

} // namespace Kochappy
} // namespace Game
