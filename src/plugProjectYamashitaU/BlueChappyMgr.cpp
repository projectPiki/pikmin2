#include "Game/Entities/BlueChappy.h"
#include "LoadResource.h"

namespace Game {
namespace BlueChappy {

namespace {
static const char* cChappyChangeTexName0 = "/enemy/data/BlueChappy/moyou_565.3.bti";
static const char* cChappyChangeTexName1 = "/enemy/data/BlueChappy/swallow_565.3.bti";
} // namespace

/*
 * --INFO--
 * Address:	8012B8AC
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : ChappyBase::Mgr(objLimit, modelType)
{
	m_name = "青チャッピーマネージャ"; // blue chappy manager
}

/*
 * --INFO--
 * Address:	8012B8FC
 * Size:	00006C
 */
void Mgr::loadTexData()
{
	LoadResource::ArgAramOnly loadArg(cChappyChangeTexName0);

	loadArg._00                   = cChappyChangeTexName0;
	LoadResource::Node* resource0 = gLoadResourceMgr->load(loadArg);
	m_changeTexture0              = static_cast<ResTIMG*>(resource0->_30);

	loadArg._00                   = cChappyChangeTexName1;
	LoadResource::Node* resource1 = gLoadResourceMgr->load(loadArg);
	m_changeTexture1              = static_cast<ResTIMG*>(resource1->_30);
}

/*
 * --INFO--
 * Address:	8012B968
 * Size:	000048
 */
void Mgr::doAlloc() { init(new ChappyBase::Parms); }

} // namespace BlueChappy
} // namespace Game
