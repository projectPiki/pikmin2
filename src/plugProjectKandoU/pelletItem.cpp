#include "Game/Entities/PelletItem.h"
#include "Game/gameGenerator.h"
#include "PSM/Otakara.h"
#include "Game/MapMgr.h"

namespace Game {
namespace PelletItem {

Mgr* mgr;

/**
 * @note Address: 0x80202E14
 * @note Size: 0x4
 */
void Object::do_onInit(CreatureInitArg*) { }

/**
 * @note Address: 0x80202E18
 * @note Size: 0x5C
 */
void Object::onBounce()
{
	if (strcmp("key", mConfig->mParams.mName.mData) == 0) {
		mSoundMgr->startSound(PSSE_EV_KEY_BOUND, 0);
	}
}

/**
 * @note Address: 0x80202E74
 * @note Size: 0x54
 */
void Object::constructor()
{
	mSoundMgr = new PSM::PelletItem(this);
	shadowMgr->createShadow(this);
}

/**
 * @note Address: 0x80202EC8
 * @note Size: 0x74
 */
void Object::sound_otakaraEventStart()
{
	P2ASSERTLINE(102, mSoundMgr->getCastType() == PSM::CCT_PelletItem);
	static_cast<PSM::PelletItem*>(mSoundMgr)->otakaraEventStart();
}

/**
 * @note Address: 0x80202F3C
 * @note Size: 0x74
 */
void PelletItem::Object::sound_otakaraEventRestart()
{
	P2ASSERTLINE(109, mSoundMgr->getCastType() == PSM::CCT_PelletItem);
	static_cast<PSM::PelletItem*>(mSoundMgr)->otakaraEventRestart();
}

/**
 * @note Address: 0x80202FB0
 * @note Size: 0x74
 */
void Object::sound_otakaraEventStop()
{
	P2ASSERTLINE(116, mSoundMgr->getCastType() == PSM::CCT_PelletItem);
	static_cast<PSM::PelletItem*>(mSoundMgr)->otakaraEventStop();
}

/**
 * @note Address: 0x80203024
 * @note Size: 0x74
 */
void Object::sound_otakaraEventFinish()
{
	P2ASSERTLINE(123, mSoundMgr->getCastType() == PSM::CCT_PelletItem);
	static_cast<PSM::PelletItem*>(mSoundMgr)->otakaraEventFinish();
}

/**
 * @note Address: 0x80203098
 * @note Size: 0xB0
 */
Mgr::Mgr()
    : FixedSizePelletMgr<Object>(PelletList::PLK_Item)
{
}

/**
 * @note Address: 0x802033F4
 * @note Size: 0x74
 */
void Mgr::setupResources()
{
	sys->heapStatusStart("Equipment", nullptr);
	alloc(PELLET_ITEM_MAXCOUNT);
	load_texArc("item_texts.szs");
	mCollPartMgr.alloc(PELLET_ITEM_MAXCOLLPART);
	sys->heapStatusEnd("Equipment");
}

/**
 * @note Address: 0x80203468
 * @note Size: 0x24
 */
GenPelletParm* Mgr::generatorNewPelletParm() { return new GenPelletParm; }

/**
 * @note Address: 0x8020348C
 * @note Size: 0x148
 */
Pellet* Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenPelletParm* genParm)
{
	PelletConfig* config = mgr->getPelletConfig(genParm->mIndex);
	PelletInitArg arg;
	arg.mTextIdentifier = config->mParams.mName.mData;
	arg.mPelletType     = PelletType::Upgrade;
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

/**
 * @note Address: 0x802035D4
 * @note Size: 0x30
 */
void Mgr::generatorWrite(Stream& data, GenPelletParm* genParm) { data.writeShort((u16)genParm->mIndex); }

/**
 * @note Address: 0x80203604
 * @note Size: 0x38
 */
void Mgr::generatorRead(Stream& data, GenPelletParm* parm, u32 flag) { parm->mIndex = (u16)data.readShort(); }

} // namespace PelletItem
} // namespace Game
