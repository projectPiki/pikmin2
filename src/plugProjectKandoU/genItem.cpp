#include "Game/gameGenerator.h"
#include "Game/itemMgr.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "types.h"

/*
 * --INFO--
 * Address:	801ACD20
 * Size:	00009C
 */

Game::GenObject* makeItem() { return new Game::GenItem; }

namespace Game {

/*
 * --INFO--
 * Address:	801ACDBC
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	801ACE80
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	801ACEEC
 * Size:	000068
 */
void GenItem::generatorMakeMatrix(Matrixf& matrix, Vector3f& vec)
{
	float x           = mRotation.x * DEG2RAD * PI;
	float y           = mRotation.y * DEG2RAD * PI;
	float z           = mRotation.z * DEG2RAD * PI;
	Vector3f rotation = Vector3f(x, y, z);

	matrix.makeTR(vec, rotation);
}

/*
 * --INFO--
 * Address:	801ACF54
 * Size:	000050
 */
J3DModelData* GenItem::getShape()
{
	BaseItemMgr* baseMgr = mItemMgr;
	if (baseMgr && mParm) {
		return baseMgr->generatorGetShape(mParm);
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	801ACFA4
 * Size:	000154
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

/*
 * --INFO--
 * Address:	801AD108
 * Size:	000148
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

/*
 * --INFO--
 * Address:	801AD254
 * Size:	000004
 */
void GenItem::ramSaveParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801AD258
 * Size:	000004
 */
void GenItem::ramLoadParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801AD25C
 * Size:	000078
 */
Creature* GenItem::generate(Game::Generator* generator)
{
	Vector3f pos = generator->mPosition + generator->mOffset;
	GenArg arg;
	arg.mPosition = pos;
	birth(&arg);
}

/*
 * --INFO--
 * Address:	801AD2D4
 * Size:	0000A4
 */
Creature* GenItem::birth(Game::GenArg* arg)
{
	BaseItem* baseItem       = nullptr;
	BaseItemMgr* baseItemMgr = mItemMgr;
	if (baseItemMgr) {
		Vector3f pos      = arg->mPosition;
		float z           = mRotation.z * DEG2RAD * PI;
		float y           = mRotation.y * DEG2RAD * PI;
		float x           = mRotation.x * DEG2RAD * PI;
		Vector3f rotation = Vector3f(x, y, z);
		baseItem          = baseItemMgr->generatorBirth(pos, rotation, mParm);
	}
	return baseItem;
}

static const char unusedGenItemStr[] = "オニョンを発生";
} // namespace Game
