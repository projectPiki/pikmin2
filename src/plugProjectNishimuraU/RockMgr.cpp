#include "Game/Entities/Rock.h"
#include "Game/generalEnemyMgr.h"

namespace Game {
namespace Rock {

static const char rockMgrName[] = "246-RockMgr";

/*
 * --INFO--
 * Address:	802628F0
 * Size:	00009C
 */
Generator::Generator()
    : EnemyGeneratorBase("落石ジェネレータ") // falling rock generator
    , mSpeed(100.0f)
    , mOffset(500.0f)
    , mScale(0.4f)
{
}

/*
 * --INFO--
 * Address:	8026298C
 * Size:	00000C
 */
u32 Generator::getLatestVersion() { return '0000'; }

/*
 * --INFO--
 * Address:	80262998
 * Size:	000074
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

/*
 * --INFO--
 * Address:	80262A0C
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	80262AB0
 * Size:	000058
 */
void Generator::doReadLatestVersion(Stream& stream)
{
	mSpeed  = stream.readFloat();
	mOffset = stream.readFloat();
	mScale  = stream.readFloat();
}

/*
 * --INFO--
 * Address:	80262B08
 * Size:	000004
 */
void Generator::doReadOldVersion(Stream&) { }

/*
 * --INFO--
 * Address:	80262B0C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "落石マネージャ"; // rockfall manager
}

/*
 * --INFO--
 * Address:	80262B5C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	80262C3C
 * Size:	000160
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

/*
 * --INFO--
 * Address:	80262E58
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Rock
} // namespace Game
