#include "Game/Entities/Kochappy.h"
#include "LoadResource.h"

namespace Game {
namespace Kochappy {

static const char kochappyMgrName[] = "kochappyMgr";

namespace {
static const char* cKochappyChangeTexName = "/enemy/data/Kochappy/kochappy_body_s3tc.1.bti";
} // namespace

/**
 * @note Address: 0x801122B4
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : KochappyBase::Mgr(objLimit, modelType)
{
	mName = "赤コチャッピーマネージャ"; // red kochappy manager
}

/**
 * @note Address: 0x801123B4
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new KochappyBase::Parms); }

/**
 * @note Address: 0x80112514
 * @note Size: 0x48
 */
void Mgr::loadTexData()
{
	LoadResource::ArgAramOnly loadArg(cKochappyChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	mChangeTexture               = static_cast<ResTIMG*>(resource->mFile);
}

} // namespace Kochappy
} // namespace Game
