#include "Game/Entities/BlueKochappy.h"
#include "LoadResource.h"

namespace Game {
namespace BlueKochappy {

namespace {
static const char* cKochappyChangeTexName = "/enemy/data/BlueKochappy/kochappy_body_s3tc.3.bti";
} // namespace

/*
 * --INFO--
 * Address:	8012CC1C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : KochappyBase::Mgr(objLimit, modelType)
{
	mName = "青コチャッピーマネージャ"; // blue kochappy manager
}

/*
 * --INFO--
 * Address:	8012CC6C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new KochappyBase::Parms); }

/*
 * --INFO--
 * Address:	8012CCB4
 * Size:	000048
 */
void BlueKochappy::Mgr::loadTexData()
{
	LoadResource::ArgAramOnly loadArg(cKochappyChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	mChangeTexture               = static_cast<ResTIMG*>(resource->mFile);
}

} // namespace BlueKochappy
} // namespace Game
