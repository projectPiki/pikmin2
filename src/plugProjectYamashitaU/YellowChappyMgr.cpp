#include "Game/Entities/YellowChappy.h"
#include "LoadResource.h"

namespace Game {
namespace YellowChappy {

namespace {
static const char* cChappyChangeTexName0 = "/enemy/data/YellowChappy/moyou_565.2.bti";
static const char* cChappyChangeTexName1 = "/enemy/data/YellowChappy/swallow_565.2.bti";
} // namespace

/*
 * --INFO--
 * Address:	8012BFF0
 * Size:	000058
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : ChappyBase::Mgr(objLimit, modelType)
{
	mName = "黄チャッピーマネージャ"; // yellow chappy manager
}

/*
 * --INFO--
 * Address:	8012C048
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	8012C0B4
 * Size:	000048
 */
void Mgr::doAlloc() { init(new ChappyBase::Parms); }

/*
 * --INFO--
 * Address:	8012C0FC
 * Size:	000034
 */
void YellowChappy::Mgr::loadAnimData()
{
	ChappyBase::Mgr::loadAnimData();
	mEffectAnimMgr.setup();
}

} // namespace YellowChappy
} // namespace Game
