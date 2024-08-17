#include "Game/Entities/BlueKochappy.h"
#include "LoadResource.h"

namespace Game {
namespace BlueKochappy {

namespace {
static const char* cKochappyChangeTexName = "/enemy/data/BlueKochappy/kochappy_body_s3tc.3.bti";
} // namespace

/**
 * @note Address: 0x8012CC1C
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : KochappyBase::Mgr(objLimit, modelType)
{
	mName = "青コチャッピーマネージャ"; // blue kochappy manager
}

/**
 * @note Address: 0x8012CC6C
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new KochappyBase::Parms); }

/**
 * @note Address: 0x8012CCB4
 * @note Size: 0x48
 */
void BlueKochappy::Mgr::loadTexData()
{
	LoadResource::ArgAramOnly loadArg(cKochappyChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	mChangeTexture               = static_cast<ResTIMG*>(resource->mFile);
}

} // namespace BlueKochappy
} // namespace Game
