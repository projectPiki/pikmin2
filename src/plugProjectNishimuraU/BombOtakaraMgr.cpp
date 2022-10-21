#include "Game/Entities/BombOtakara.h"
#include "LoadResource.h"

namespace Game {
namespace BombOtakara {

namespace {
static const char* cOtakaraChangeTexName = "/enemy/data/BombOtakara/otakara_bomb_s3tc.bti";
} // namespace

/*
 * --INFO--
 * Address:	802F92D0
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : OtakaraBase::Mgr(objLimit, modelType)
{
	m_name = "バクダンオタカラムシマネージャ"; // starburst otakara manager
}

/*
 * --INFO--
 * Address:	802F9320
 * Size:	000048
 */
void Mgr::doAlloc() { init(new OtakaraBase::Parms); }

/*
 * --INFO--
 * Address:	802F9368
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802F94B4
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	802F94C4
 * Size:	000080
 */
void Mgr::loadTexData()
{
	m_changeTexture = nullptr;
	LoadResource::Arg loadArg(cOtakaraChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	if (resource) {
		m_changeTexture = static_cast<ResTIMG*>(resource->_30);
	}
	P2ASSERTLINE(83, m_changeTexture);
}

} // namespace BombOtakara
} // namespace Game
