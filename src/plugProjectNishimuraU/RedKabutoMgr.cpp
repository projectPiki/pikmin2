#include "types.h"
#include "Game/Entities/Kabuto.h"
#include "LoadResource.h"

namespace Game {
namespace RedKabuto {

namespace {
char* cKabutoChangeTexName = "/enemy/data/Rkabuto/babykabuto_red_s3tc.bti";
}

/*
 * --INFO--
 * Address:	802FFE04
 * Size:	000050
 */
Mgr::Mgr(int p1, u8 p2)
    : Kabuto::Mgr(p1, p2)
{
	m_name = "レッドカブトマネージャ"; // red beetle manager
}

/*
 * --INFO--
 * Address:	802FFE54
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Kabuto::Parms); }

/*
 * --INFO--
 * Address:	802FFE9C
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802FFFE8
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int idx) { return &m_obj[idx]; }

/*
 * --INFO--
 * Address:	802FFFF8
 * Size:	000080
 */
void Mgr::loadTexData()
{
	m_changeTexture = nullptr;

	LoadResource::Arg loadArg(cKabutoChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);

	if (resource) {
		m_changeTexture = static_cast<ResTIMG*>(resource->_30);
	}

	P2ASSERTLINE(82, m_changeTexture != nullptr);
}

} // namespace RedKabuto
} // namespace Game
