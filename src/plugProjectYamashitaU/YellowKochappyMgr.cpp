#include "Game/Entities/YellowKochappy.h"
#include "LoadResource.h"

namespace Game {
namespace YellowKochappy {

namespace {
static const char* cKochappyChangeTexName = "/enemy/data/YellowKochappy/kochappy_body_s3tc.2.bti";
} // namespace

/*
 * --INFO--
 * Address:	8012D5E4
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : KochappyBase::Mgr(objLimit, modelType)
{
	m_name = "黄コチャッピーマネージャ"; // blue kochappy manager
}

/*
 * --INFO--
 * Address:	8012D634
 * Size:	000048
 */
void Mgr::doAlloc() { init(new KochappyBase::Parms); }

/*
 * --INFO--
 * Address:	8012D67C
 * Size:	000048
 */
void Mgr::loadTexData()
{
	LoadResource::ArgAramOnly loadArg(cKochappyChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	m_changeTexture              = static_cast<ResTIMG*>(resource->_30);
}

} // namespace YellowKochappy
} // namespace Game
