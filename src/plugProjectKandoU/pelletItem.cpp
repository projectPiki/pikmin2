#include "Game/Entities/PelletItem.h"
#include "Game/gameGenerator.h"
#include "PSM/Otakara.h"
#include "Game/MapMgr.h"

namespace Game {
namespace PelletItem {

Mgr* mgr;

/*
 * --INFO--
 * Address:	80202E14
 * Size:	000004
 */
void Object::do_onInit(CreatureInitArg*) { }

/*
 * --INFO--
 * Address:	80202E18
 * Size:	00005C
 */
void Object::onBounce()
{
	if (strcmp("key", mConfig->mParams.mName.mData) == 0) {
		mSoundMgr->startSound(PSSE_EV_KEY_BOUND, 0);
	}
}

/*
 * --INFO--
 * Address:	80202E74
 * Size:	000054
 */
void Object::constructor()
{
	mSoundMgr = new PSM::PelletItem(this);
	shadowMgr->createShadow(this);
}

/*
 * --INFO--
 * Address:	80202EC8
 * Size:	000074
 */
void Object::sound_otakaraEventStart()
{
	P2ASSERTLINE(102, mSoundMgr->getCastType() == PSM::CCT_PelletItem);
	static_cast<PSM::PelletItem*>(mSoundMgr)->otakaraEventStart();
}

/*
 * --INFO--
 * Address:	80202F3C
 * Size:	000074
 */
void PelletItem::Object::sound_otakaraEventRestart()
{
	P2ASSERTLINE(109, mSoundMgr->getCastType() == PSM::CCT_PelletItem);
	static_cast<PSM::PelletItem*>(mSoundMgr)->otakaraEventRestart();
}

/*
 * --INFO--
 * Address:	80202FB0
 * Size:	000074
 */
void Object::sound_otakaraEventStop()
{
	P2ASSERTLINE(116, mSoundMgr->getCastType() == PSM::CCT_PelletItem);
	static_cast<PSM::PelletItem*>(mSoundMgr)->otakaraEventStop();
}

/*
 * --INFO--
 * Address:	80203024
 * Size:	000074
 */
void Object::sound_otakaraEventFinish()
{
	P2ASSERTLINE(123, mSoundMgr->getCastType() == PSM::CCT_PelletItem);
	static_cast<PSM::PelletItem*>(mSoundMgr)->otakaraEventFinish();
}

/*
 * --INFO--
 * Address:	80203098
 * Size:	0000B0
 */
Mgr::Mgr()
    : FixedSizePelletMgr<Object>(PelletList::ITEM)
{
}

/*
 * --INFO--
 * Address:	802033F4
 * Size:	000074
 */
void Mgr::setupResources()
{
	sys->heapStatusStart("Equipment", nullptr);
	alloc(PELLET_ITEM_MAXCOUNT);
	load_texArc("item_texts.szs");
	mCollPartMgr.alloc(PELLET_ITEM_MAXCOLLPART);
	sys->heapStatusEnd("Equipment");
}

/*
 * --INFO--
 * Address:	80203468
 * Size:	000024
 */
GenPelletParm* Mgr::generatorNewPelletParm() { return new GenPelletParm; }

/*
 * --INFO--
 * Address:	8020348C
 * Size:	000148
 */
Pellet* Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenPelletParm* genParm)
{
	PelletConfig* config = mgr->getPelletConfig(genParm->mIndex);
	PelletInitArg arg;
	arg.mTextIdentifier = config->mParams.mName.mData;
	arg.mPelletType     = PELTYPE_UPGRADE;
	arg.mPelletIndex    = genParm->mIndex;
	arg.mPelView        = nullptr;

	Pellet* obj = pelletMgr->birth(&arg);
	if (obj) {
		if (mapMgr) {
			f32 y = mapMgr->getMinY(pos);
			pos.y = obj->getCylinderHeight() * 0.5f + y;
		}
		obj->setPosition(pos, false);
		Matrixf mtx;
		mtx.makeTR(pos, rot);
		obj->setOrientation(mtx);
	}
	return obj;
}

/*
 * --INFO--
 * Address:	802035D4
 * Size:	000030
 */
void Mgr::generatorWrite(Stream& data, GenPelletParm* genParm) { data.writeShort((u16)genParm->mIndex); }

/*
 * --INFO--
 * Address:	80203604
 * Size:	000038
 */
void Mgr::generatorRead(Stream& data, GenPelletParm* parm, u32 flag) { parm->mIndex = (u16)data.readShort(); }

} // namespace PelletItem
} // namespace Game
