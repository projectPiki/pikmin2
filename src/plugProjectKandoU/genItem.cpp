#include "Game/gameGenerator.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "types.h"

/**
 * @note Address: 0x801ACD20
 * @note Size: 0x9C
 */

Game::GenObject* makeItem() { return new Game::GenItem; }

namespace Game {

/**
 * @note Address: 0x801ACDBC
 * @note Size: 0x8C
 */
void GenItem::initialise()
{
	GenObjectFactoryFactory* factory = GenObjectFactory::factory;
	if (GenObjectFactory::factory->mCount >= GenObjectFactory::factory->mLimit) {
		return;
	}
	GenObjectFactory::factory->mFactories[GenObjectFactory::factory->mCount].mTypeID = 'item';
	factory->mFactories[factory->mCount].mMakeFunction                               = makeItem;
	factory->mFactories[factory->mCount].mName                                       = "アイテムを発生"; // spawn item
	factory->mFactories[factory->mCount].mVersion                                    = '0002';

	factory->mCount++;
}

void GenItem::updateUseList(Generator* gen, int i) { mItemMgr = itemMgr->getMgrByIndex(mMgrIndex); }

/**
 * @note Address: 0x801ACE80
 * @note Size: 0x6C
 */
void GenItem::doEvent(u32 idx)
{
	if ((int*)idx == &mMgrIndex) {
		if (mParm) {
			delete mParm;
		}
		mItemMgr = itemMgr->getMgrByIndex(mMgrIndex);
		mParm    = mItemMgr->generatorNewItemParm();
	}
}

/**
 * @note Address: 0x801ACEEC
 * @note Size: 0x68
 */
void GenItem::generatorMakeMatrix(Matrixf& matrix, Vector3f& pos)
{
	f32 x             = mRotation.x * DEG2RAD * PI;
	f32 y             = mRotation.y * DEG2RAD * PI;
	f32 z             = mRotation.z * DEG2RAD * PI;
	Vector3f rotation = Vector3f(x, y, z);

	matrix.makeTR(pos, rotation);
}

/**
 * @note Address: 0x801ACF54
 * @note Size: 0x50
 */
J3DModelData* GenItem::getShape()
{
	BaseItemMgr* baseMgr = mItemMgr;
	if (baseMgr && mParm) {
		return baseMgr->generatorGetShape(mParm);
	}
	return nullptr;
}

/**
 * @note Address: 0x801ACFA4
 * @note Size: 0x154
 */
void GenItem::doWrite(Stream& stream)
{
	if (mItemMgr) {
		u32 id    = mItemMgr->generatorGetID();
		ID32 id32 = id;
		stream.textBeginGroup(id32.getStr());
		stream.textWriteTab(stream.mTabCount);
		id32.write(stream);
		stream.textWriteText("\t# item id\r\n");
		stream.textWriteTab(stream.mTabCount);
		stream.writeFloat(mRotation.x);
		stream.writeFloat(mRotation.y);
		stream.writeFloat(mRotation.z);
		stream.textWriteText("\t# rotation\r\n");
		u32 localVer = mItemMgr->generatorLocalVersion();
		ID32 localID = localVer;
		stream.textWriteTab(stream.mTabCount);
		localID.write(stream);
		stream.textWriteText("\t# item local version\r\n");
		mItemMgr->generatorWrite(stream, mParm);
		stream.textEndGroup();
	}
}

/**
 * @note Address: 0x801AD108
 * @note Size: 0x148
 */
void GenItem::doRead(Stream& stream)
{
	if (mParm) {
		delete mParm;
		mParm = nullptr;
	}

	mItemMgr = nullptr;

	ID32 id32;
	id32.read(stream);

	mItemMgr  = itemMgr->getMgrByID(id32);
	mMgrIndex = itemMgr->getIndexByMgr(mItemMgr);

	JUT_ASSERTLINE(175, mItemMgr && mMgrIndex != -1, "no baseItemMgr for %s\n", &id32);

	mParm       = mItemMgr->generatorNewItemParm();
	mRotation.x = stream.readFloat();
	mRotation.y = stream.readFloat();
	mRotation.z = stream.readFloat();
	u32 version = '0000';
	if (mRawID >= '0002') {
		ID32 localID;
		localID.read(stream);
		version = localID.getID();
	}
	mItemMgr->generatorRead(stream, mParm, version);
}

/**
 * @note Address: 0x801AD254
 * @note Size: 0x4
 */
void GenItem::ramSaveParameters(Stream&) { }

/**
 * @note Address: 0x801AD258
 * @note Size: 0x4
 */
void GenItem::ramLoadParameters(Stream&) { }

/**
 * @note Address: 0x801AD25C
 * @note Size: 0x78
 */
Creature* GenItem::generate(Game::Generator* generator)
{
	GenArg arg(generator->mPosition + generator->mOffset);
	birth(&arg);
}

/**
 * @note Address: 0x801AD2D4
 * @note Size: 0xA4
 */
Creature* GenItem::birth(Game::GenArg* arg)
{
	BaseItem* baseItem       = nullptr;
	BaseItemMgr* baseItemMgr = mItemMgr;
	if (baseItemMgr) {
		Vector3f pos      = arg->mPosition;
		Vector3f rotation = getRadiansRotation();
		baseItem          = baseItemMgr->generatorBirth(pos, rotation, mParm);
	}
	return baseItem;
}

static const char unusedGenItemStr[] = "オニョンを発生";
} // namespace Game
