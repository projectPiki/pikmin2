#include "Game/Entities/Koganemushi.h"
#include "LoadResource.h"

namespace Game {
namespace Koganemushi {

namespace {
static const char* cKoganeChangeTexName = "/enemy/data/Kogane/kogane_s3tc.bti";
} // namespace

/*
 * --INFO--
 * Address:	8029D9F0
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : Kogane::Mgr(objLimit, modelType)
{
	m_name = "コガネマネージャ"; // kogane manager
}

/*
 * --INFO--
 * Address:	8029DA40
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Kogane::Parms); }

/*
 * --INFO--
 * Address:	8029DA88
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8029DBD4
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	8029DBE4
 * Size:	000080
 */
void Mgr::loadTexData()
{
	m_changeTexture = nullptr;
	LoadResource::Arg loadArg(cKoganeChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	if (resource) {
		m_changeTexture = static_cast<ResTIMG*>(resource->_30);
	}
	P2ASSERTLINE(83, m_changeTexture);
}

} // namespace Koganemushi
} // namespace Game
