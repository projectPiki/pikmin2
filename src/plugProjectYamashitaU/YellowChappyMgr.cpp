#include "Game/Entities/YellowChappy.h"
#include "LoadResource.h"

namespace Game {
namespace YellowChappy {

namespace {
static const char* cChappyChangeTexName0 = "/enemy/data/YellowChappy/moyou_565.2.bti";
static const char* cChappyChangeTexName1 = "/enemy/data/YellowChappy/swallow_565.2.bti";
} // namespace

/**
 * @note Address: 0x8012BFF0
 * @note Size: 0x58
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : ChappyBase::Mgr(objLimit, modelType)
{
	mName = "黄チャッピーマネージャ"; // yellow chappy manager
}

/**
 * @note Address: 0x8012C048
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
 * @note Address: 0x8012C0B4
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new ChappyBase::Parms); }

/**
 * @note Address: 0x8012C0FC
 * @note Size: 0x34
 */
void YellowChappy::Mgr::loadAnimData()
{
	ChappyBase::Mgr::loadAnimData();
	mEffectAnimMgr.setup();
}

} // namespace YellowChappy
} // namespace Game
