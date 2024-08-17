#include "Game/gameGenerator.h"

static const char name[] = "genPellet";

/**
 * @note Address: 0x8020278C
 * @note Size: 0x9C
 */
Game::GenPellet* makePellet() { return new Game::GenPellet; }

namespace Game {

/**
 * @note Address: 0x80202828
 * @note Size: 0x8C
 */
void GenPellet::initialise()
{
	if (GenObjectFactory::factory->mCount >= GenObjectFactory::factory->mLimit)
		return;

	GenObjectFactoryFactory* obj               = GenObjectFactory::factory;
	obj->mFactories[obj->mCount].mTypeID       = 'pelt';
	obj->mFactories[obj->mCount].mMakeFunction = (GenObjectFactory::MakeFunction*)makePellet;
	obj->mFactories[obj->mCount].mName         = "PELLETを発生";
	obj->mFactories[obj->mCount].mVersion      = '0000';
	obj->mCount++;
}

/**
 * @note Address: 0x802028B4
 * @note Size: 0x6C
 */
void GenPellet::doEvent(u32 flag)
{
	// weird check?
	if (flag == (int)&mPelType) {
		if (mGenParm) {
			delete mGenParm;
		}
		mManager = pelletMgr->getMgrByID(mPelType);
		mGenParm = mManager->generatorNewPelletParm();
	}
}

/**
 * @note Address: 0x80202920
 * @note Size: 0x68
 */
void GenPellet::generatorMakeMatrix(Matrixf& mtx, Vector3f& pos)
{
	f32 x, y, z;
	y = mRotation.y * DEG2RAD * PI;
	z = mRotation.z * DEG2RAD * PI;
	x = mRotation.x * DEG2RAD * PI;

	Vector3f ang(x, y, z);
	mtx.makeTR(pos, ang);
}

/**
 * @note Address: 0x80202988
 * @note Size: 0x50
 */
J3DModelData* GenPellet::getShape()
{
	if (mManager && mGenParm) {
		return mManager->generatorGetShape(mGenParm);
	} else {
		return nullptr;
	}
}

/**
 * @note Address: 0x802029D8
 * @note Size: 0x138
 */
void GenPellet::doWrite(Stream& data)
{
	if (mManager) {
		data.textBeginGroup(mManager->getMgrName());
		data.textWriteTab(data.mTabCount);
		data.writeByte(mPelType);
		data.textWriteText("\t# mgr id\r\n");

		data.textWriteTab(data.mTabCount);
		data.writeFloat(mRotation.x);
		data.writeFloat(mRotation.y);
		data.writeFloat(mRotation.z);
		data.textWriteText("\t# rotation\r\n");

		u32 temp = mManager->generatorLocalVersion();
		ID32 id(temp);
		id.write(data);
		data.textWriteText("\t# pellet local version\r\n");

		mManager->generatorWrite(data, mGenParm);
		data.textEndGroup();
	}
}

/**
 * @note Address: 0x80202B10
 * @note Size: 0x118
 */
void GenPellet::doRead(Stream& data)
{
	if (mGenParm) {
		delete mGenParm;
		mGenParm = nullptr;
	}

	mManager = nullptr;
	mPelType = data.readByte();
	mManager = pelletMgr->getMgrByID(mPelType);
	if (!mManager || mPelType == 255) {
		JUT_PANICLINE(161, "no basePelletMgr for %d\n", mPelType);
	}
	mGenParm    = mManager->generatorNewPelletParm();
	mRotation.x = data.readFloat();
	mRotation.y = data.readFloat();
	mRotation.z = data.readFloat();

	ID32 id;
	id.read(data);
	mManager->generatorRead(data, mGenParm, id.getID());
}

/**
 * @note Address: 0x80202C28
 * @note Size: 0x4
 */
void GenPellet::ramSaveParameters(Stream&) { }

/**
 * @note Address: 0x80202C2C
 * @note Size: 0x4
 */
void GenPellet::ramLoadParameters(Stream&) { }

/**
 * @note Address: 0x80202C30
 * @note Size: 0x58
 */
void GenPellet::updateUseList(Generator*, int)
{
	mManager = pelletMgr->getMgrByID(mPelType);
	mManager->setUse(mGenParm->mIndex);
	mManager->getPelletConfig(mGenParm->mIndex);
}

/**
 * @note Address: 0x80202C88
 * @note Size: 0x78
 */
Creature* GenPellet::generate(Generator* gen)
{
	f32 y, z, x;
	z = gen->mPosition.z + gen->mOffset.z;
	y = gen->mPosition.y + gen->mOffset.y;
	x = gen->mPosition.x + gen->mOffset.x;
	GenArg arg;
	arg.mPosition = Vector3f(x, y, z);
	return birth(&arg);
}

/**
 * @note Address: 0x80202D00
 * @note Size: 0x40
 */
void GenPellet::getDebugInfo(char* str) { sprintf(str, "mgr%d:%d", mPelType, mGenParm->mIndex); }

/**
 * @note Address: 0x80202D40
 * @note Size: 0xD4
 */
Creature* GenPellet::birth(Game::GenArg* arg)
{
	Pellet* pelt = nullptr;
	if (mManager) {
		Vector3f pos = arg->mPosition;
		f32 x, y, z;
		z = mRotation.z * DEG2RAD * PI;
		y = mRotation.y * DEG2RAD * PI;
		x = mRotation.x * DEG2RAD * PI;

		Vector3f ang(x, y, z);

		pelt = mManager->generatorBirth(pos, ang, mGenParm);
		if (pelt) {
			pelt->allocateTexCaster();
		} else {
			JUT_PANICLINE(245, "GENERATOR ERR\n");
		}
	}
	return pelt;
}

} // namespace Game
