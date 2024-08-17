#include "Game/Entities/YellowKochappy.h"
#include "LoadResource.h"

namespace Game {
namespace YellowKochappy {

namespace {
static const char* cKochappyChangeTexName = "/enemy/data/YellowKochappy/kochappy_body_s3tc.2.bti";
} // namespace

/**
 * @note Address: 0x8012D5E4
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : KochappyBase::Mgr(objLimit, modelType)
{
	mName = "黄コチャッピーマネージャ"; // yellow kochappy manager
}

/**
 * @note Address: 0x8012D634
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new KochappyBase::Parms); }

/**
 * @note Address: 0x8012D67C
 * @note Size: 0x48
 */
void Mgr::loadTexData()
{
	LoadResource::ArgAramOnly loadArg(cKochappyChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	mChangeTexture               = static_cast<ResTIMG*>(resource->mFile);
}

} // namespace YellowKochappy
} // namespace Game
