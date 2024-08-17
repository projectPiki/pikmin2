#include "Game/Entities/BlueChappy.h"
#include "LoadResource.h"

namespace Game {
namespace BlueChappy {

namespace {
static const char* cChappyChangeTexName0 = "/enemy/data/BlueChappy/moyou_565.3.bti";
static const char* cChappyChangeTexName1 = "/enemy/data/BlueChappy/swallow_565.3.bti";
} // namespace

/**
 * @note Address: 0x8012B8AC
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : ChappyBase::Mgr(objLimit, modelType)
{
	mName = "青チャッピーマネージャ"; // blue chappy manager
}

/**
 * @note Address: 0x8012B8FC
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
 * @note Address: 0x8012B968
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new ChappyBase::Parms); }

} // namespace BlueChappy
} // namespace Game
