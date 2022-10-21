#include "Game/Entities/FireOtakara.h"
#include "LoadResource.h"

namespace Game {
namespace FireOtakara {

static const char fireOtakaraMgrName[] = "246-FireOtakaraMgr";

namespace {
static const char* cOtakaraChangeTexName = "/enemy/data/FireOtakara/otakara_red_s3tc.bti";
} // namespace

/*
 * --INFO--
 * Address:	802B7CCC
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : OtakaraBase::Mgr(objLimit, modelType)
{
	m_name = "火オタカラムシマネージャ"; // fire otakara manager
}

/*
 * --INFO--
 * Address:	802B7D1C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new OtakaraBase::Parms); }

/*
 * --INFO--
 * Address:	802B7EB8
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802B8008
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	802B8018
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

} // namespace FireOtakara
} // namespace Game
