#include "Game/Entities/Qurione.h"

namespace Game {
namespace Qurione {

static const char qurioneMgrName[] = "246-QurioneMgr";

/**
 * @note Address: 0x8025FA8C
 * @note Size: 0x94
 */
Generator::Generator()
    : EnemyGeneratorBase("クリオネジェネレータ") // clione (sea angel) generator
    , mInitialParam(200.0f, 30.0f)
{
}

/**
 * @note Address: 0x8025FB20
 * @note Size: 0xC
 */
u32 Generator::getLatestVersion() { return '0000'; }

/**
 * @note Address: 0x8025FB2C
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
 * @note Address: 0x8025FBA0
 * @note Size: 0x80
 */
void Generator::doWrite(Stream& stream)
{
	stream.textWriteTab(stream.mTabCount);
	stream.writeFloat(mInitialParam.mFlyDist);
	stream.textWriteText("\t\t# fly \r\n");
	stream.writeFloat(mInitialParam.mSlideDist);
	stream.textWriteText("\t\t# slide \r\n");
}

/**
 * @note Address: 0x8025FC20
 * @note Size: 0x4C
 */
void Generator::doReadLatestVersion(Stream& stream)
{
	mInitialParam.mFlyDist   = stream.readFloat();
	mInitialParam.mSlideDist = stream.readFloat();
}

/**
 * @note Address: 0x8025FC6C
 * @note Size: 0x4
 */
void Generator::doReadOldVersion(Stream&) { }

/**
 * @note Address: 0x8025FC70
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "クリオネマネージャ"; // clione (sea angel) manager
}

/**
 * @note Address: 0x8025FCC0
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x8025FE98
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8025FFB4
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Qurione
} // namespace Game
