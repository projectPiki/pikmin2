#include "Game/Entities/Rock.h"
#include "Game/generalEnemyMgr.h"

namespace Game {
namespace Rock {

static const char rockMgrName[] = "246-RockMgr";

/**
 * @note Address: 0x802628F0
 * @note Size: 0x9C
 */
Generator::Generator()
    : EnemyGeneratorBase("落石ジェネレータ") // falling rock generator
    , mSpeed(100.0f)
    , mOffset(500.0f)
    , mScale(0.4f)
{
}

/**
 * @note Address: 0x8026298C
 * @note Size: 0xC
 */
u32 Generator::getLatestVersion() { return '0000'; }

/**
 * @note Address: 0x80262998
 * @note Size: 0x74
 */
void Generator::doRead(Stream& stream)
{
	if (mVersion == getLatestVersion()) {
		doReadLatestVersion(stream);
		return;
	}
	// if not latest version, use old read function
	doReadOldVersion(stream);
}

/**
 * @note Address: 0x80262A0C
 * @note Size: 0xA4
 */
void Generator::doWrite(Stream& stream)
{
	stream.textWriteTab(stream.mTabCount);
	stream.writeFloat(mSpeed);
	stream.textWriteText("\t\t# velocity \r\n");
	stream.writeFloat(mOffset);
	stream.textWriteText("\t\t# offset \r\n");
	stream.writeFloat(mScale);
	stream.textWriteText("\t\t# scale \r\n");
}

/**
 * @note Address: 0x80262AB0
 * @note Size: 0x58
 */
void Generator::doReadLatestVersion(Stream& stream)
{
	mSpeed  = stream.readFloat();
	mOffset = stream.readFloat();
	mScale  = stream.readFloat();
}

/**
 * @note Address: 0x80262B08
 * @note Size: 0x4
 */
void Generator::doReadOldVersion(Stream&) { }

/**
 * @note Address: 0x80262B0C
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "落石マネージャ"; // rockfall manager
}

/**
 * @note Address: 0x80262B5C
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x80262C3C
 * @note Size: 0x160
 */
void Mgr::createObj(int count)
{
	mObj = new Obj[count];

	EnemyTypeID::EEnemyTypeID ids[] = { EnemyTypeID::EnemyID_Rock, EnemyTypeID::EnemyID_Stone };

	int id_count = sizeof(ids) / sizeof(EnemyTypeID::EEnemyTypeID);
	int counter  = 0;
	for (int i = 0; i < id_count; i++) {
		int enemyNum = generalEnemyMgr->getEnemyNum(ids[i], false);
		for (int j = 0; j < enemyNum; j++, counter++) {
			mObj[counter].mRockType = ids[i];
		}
	}
}

/**
 * @note Address: 0x80262E58
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Rock
} // namespace Game
