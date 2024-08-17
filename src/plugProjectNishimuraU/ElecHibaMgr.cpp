#include "Game/Entities/ElecHiba.h"

namespace Game {
namespace ElecHiba {

static const char elecHibaMgrName[] = "246-ElecHibaMgr";

/**
 * @note Address: 0x8026EA08
 * @note Size: 0x8C
 */
Generator::Generator()
    : EnemyGeneratorBase("電撃ヒバジェネレータ") // electric hiba generator
    , mDistance(100.0f)
{
}

/**
 * @note Address: 0x8026EA94
 * @note Size: 0xC
 */
u32 Generator::getLatestVersion() { return '0000'; }

/**
 * @note Address: 0x8026EAA0
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
 * @note Address: 0x8026EB14
 * @note Size: 0x60
 */
void Generator::doWrite(Stream& stream)
{
	stream.textWriteTab(stream.mTabCount);
	stream.writeFloat(mDistance);
	stream.textWriteText("\t\t# distance \r\n");
}

/**
 * @note Address: 0x8026EB74
 * @note Size: 0x34
 */
void Generator::doReadLatestVersion(Stream& stream) { mDistance = stream.readFloat(); }

/**
 * @note Address: 0x8026EBA8
 * @note Size: 0x4
 */
void Generator::doReadOldVersion(Stream&) { }

/**
 * @note Address: 0x8026EBAC
 * @note Size: 0x64
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	mName = "電撃ヒバマネージャ"; // electric hiba manager
}

/**
 * @note Address: 0x8026EC10
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x8026EE24
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8026EF64
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x8026EF74
 * @note Size: 0xE4
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg)
{
	TeamList* teamList;
	InitialParam param;
	param.mSeperation = 100.0f;
	Obj* elecHiba     = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	if (elecHiba) {
		elecHiba->mBirthPosition = birthArg.mPosition;
		elecHiba->setElecHibaPosition(&param, 1.0f);
		teamList = &elecHiba->mTeamList;
		elecHiba->createEffect(true);

		EnemyBase* potentialPartner = EnemyMgrBase::birth(birthArg);
		if (potentialPartner) {
			Obj* elecHibaPartner            = static_cast<Obj*>(potentialPartner);
			elecHibaPartner->mBirthPosition = birthArg.mPosition;
			elecHibaPartner->setElecHibaPosition(&param, -1.0f);
			elecHibaPartner->createEffect(false);
			teamList->add(&elecHibaPartner->mTeamList);
		}
	}

	return elecHiba;
}

} // namespace ElecHiba
} // namespace Game
