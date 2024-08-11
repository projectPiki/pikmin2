#include "Game/Entities/Chappy.h"
#include "LoadResource.h"

namespace Game {
namespace Chappy {

static const char chappyMgrName[] = "chappyMgr";

namespace {
static const char* cChappyChangeTexName0 = "/enemy/data/Chappy/moyou_565.1.bti";
static const char* cChappyChangeTexName1 = "/enemy/data/Chappy/swallow_565.1.bti";
} // namespace

/**
 * @note Address: 0x80119784
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : ChappyBase::Mgr(objLimit, modelType)
{
	mName = "赤チャッピーマネージャ"; // chappybase manager
}

/**
 * @note Address: 0x80119884
 * @note Size: 0x6C
 */
void Mgr::loadTexData()
{
	LoadResource::ArgAramOnly loadArg(cChappyChangeTexName0);

	loadArg.mPath                 = cChappyChangeTexName0;
	LoadResource::Node* resource0 = gLoadResourceMgr->load(loadArg);
	mChangeTexture0               = static_cast<ResTIMG*>(resource0->mFile);

	loadArg.mPath                 = cChappyChangeTexName1;
	LoadResource::Node* resource1 = gLoadResourceMgr->load(loadArg);
	mChangeTexture1               = static_cast<ResTIMG*>(resource1->mFile);
}

/**
 * @note Address: 0x801198F0
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new ChappyBase::Parms); }

} // namespace Chappy
} // namespace Game
