#include "CNode.h"
#include "string.h"
#include "Game/Creature.h"
#include "Game/gameGenerator.h"
#include "Game/gameGeneratorCache.h"
#include "Game/GameSystem.h"
#include "Game/TimeMgr.h"
#include "JSystem/JUtility/JUTException.h"
#include "nans.h"
#include "Parameters.h"
#include "types.h"

u32 GeneratorCurrentVersion = 'v0.3';

static const int unusedArray[] = { 0, 0, 0 };

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void _Print(char* name, ...) { OSReport("generator"); }

namespace Game {
GenObjectFactoryFactory* GenObjectFactory::factory;
u8 Generator::ramMode;
GeneratorMgr* generatorMgr;
GeneratorMgr* onceGeneratorMgr;
GeneratorMgr* limitGeneratorMgr;
GeneratorMgr* plantsGeneratorMgr;
GeneratorMgr* dayGeneratorMgr;
Delegate1<BaseGameSection, Vector3f&>* GeneratorMgr::cursorCallback;

/**
 * @note Address: 0x801AA6E4
 * @note Size: 0x50
 */
GenBase::GenBase(u32 typeID, char* labelData, char* objTypeName)
    : Parameters(nullptr, "gen base")
{
	mTypeID      = typeID;
	mLabelData   = labelData;
	mObjTypeName = objTypeName;
	mRawID       = '____';
	mModel       = nullptr;
}

/**
 * @matchedSize
 * @note Address: N/A
 * @note Size: 0x54
 */
void GenBase::writeVersion(Stream& output)
{
	// INLINED FUNCTION
	u32 versionRaw = getLatestVersion();
	ID32 versionID32(versionRaw);
	versionID32.write(output);
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
void GenBase::write(Stream& output)
{
	// INLINED FUNCTION
	ID32 type(mTypeID);
	output.textWriteTab(output.mTabCount);
	type.write(output);
	if (Generator::ramMode == Generator::RM_Disc) {
		writeVersion(output);
	}
	doWrite(output);
	if (Generator::ramMode != Generator::RM_Disc) {
		ramSaveParameters(output);
	} else {
		Parameters::write(output);
	}
}

/**
 * @note Address: 0x801AA744
 * @note Size: 0x20
 */
void GenBase::ramSaveParameters(Stream& output) { Parameters::write(output); }

/**
 * @note Address: 0x801AA764
 * @note Size: 0x20
 */
void GenBase::ramLoadParameters(Stream& input) { Parameters::read(input); }

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void GenBase::readVersion(Stream&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC0
 */
void GenBase::read(Stream& input)
{
	if (Generator::ramMode == Generator::Generator::RM_Disc) {
		ID32 temp2;
		temp2.read(input);
		mRawID = temp2.getID();
	} else {
		mRawID = getLatestVersion();
	}
	doRead(input);
	if (Generator::ramMode != Generator::RM_Disc) {
		ramLoadParameters(input);
	} else {
		Parameters::read(input);
	}
}

/**
 * getLatestVersion__Q24Game9GenObjectFv
 * @note Address: 0x801AA788
 * @note Size: 0x50
 */
u32 GenObject::getLatestVersion() { return GenObjectFactory::factory->checkVersion(mTypeID); }

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void GenObjectFactory::createInstance()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801AA7D8
 * @note Size: 0xC
 */
void Generator::initialiseSystem() { GenObjectFactory::factory = nullptr; }

/**
 * __ct__Q24Game9GeneratorFv
 * @note Address: 0x801AA7E4
 * @note Size: 0xDC
 */
Generator::Generator()
    : CNode()
    , mNameId()
    , mVersion()
    , mPosition(0.0f, 0.0f, 0.0f)
{
	mObject      = nullptr;
	mId          = '____';
	mReservedNum = 0;
	mNameId.setID('    ');
	mVersion.setID(GeneratorCurrentVersion);
	strcpy(mGenObjName, "unset");
	mNextGenerator = 0;
	mPrevGenerator = 0;
	mCreature      = nullptr;
	mUnusedVal     = 0;
	clearRelations();
	mIsInactive           = TRUE;
	mDayLimit             = -1;
	mDeathCount           = 0;
	mDayNum               = 0;
	mDaysTillResurrection = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
Generator::Generator(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801AA8C0
 * @note Size: 0x68
 */
Generator::~Generator() { mNextGenerator = nullptr; }

/**
 * updateUseList__Q24Game9GeneratorFv
 * @note Address: 0x801AA928
 * @note Size: 0x58
 */
void Generator::updateUseList()
{
	if (!isExpired() && (mObject != nullptr)) {
		mObject->updateUseList(this, 1);
	}
}

/**
 * @note Address: 0x801AA984
 * @note Size: 0x34
 */
bool Generator::isExpired()
{
	if (mDayLimit == -1) {
		return false;
	}
	if (mDayLimit < gameSystem->mTimeMgr->mDayCount) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x801AA9B8
 * @note Size: 0xB8
 */
bool Generator::loadCreature(Stream& input)
{
	if (mObject) {
		mCreature = mObject->generate(this);
		if (mCreature) {
			mCreature->getTypeName();
		}
	}
	if (mCreature) {
		mCreature->mGenerator = this;
		u8 flag               = 0;
		if (mReservedNum & 0x8) {
			flag |= 0x1;
		}
		mCreature->load(input, flag);
	} else {
		return false;
	}
	return true;
}

/**
 * @note Address: 0x801AAA78
 * @note Size: 0x7C
 */
bool Generator::need_saveCreature()
{
	bool shouldSave;
	if (mCreature == nullptr) {
		shouldSave = true;
	} else {
		if ((!mCreature->isAlive() && mCreature->isPellet())) {
			shouldSave = false;
		} else {
			shouldSave = true;
		}
	}
	return shouldSave;
}

/**
 * saveCreature__Q24Game9GeneratorFR6Stream
 * @note Address: 0x801AAAF4
 * @note Size: 0xC8
 */
void Generator::saveCreature(Stream& output)
{
	if (mCreature) {
		u8 conversion = 0;
		if (mReservedNum & 8) {
			conversion |= CREATURE_SAVE_FLAG_POSITION;
		}

		mCreature->getTypeName();
		mCreature->getCreatureName();
		mCreature->getCreatureID();
		mCreature->save(output, conversion);
		return;
	}

	JUT_PANICLINE(448, "Generaotr::saveCreature creature is 0\n");
}

/**
 * generate__Q24Game9GeneratorFv
 *
 * @note Address: 0x801AABBC
 * @note Size: 0x138
 */
void Generator::generate()
{
	if (isExpired()) {
		mUnusedVal = 0;
		mCreature  = nullptr;
		return;
	}

	if (ramMode == RM_Disc) {
		mUnusedVal  = 0;
		mDeathCount = 0;
		mDayNum     = gameSystem->mTimeMgr->mDayCount;
	} else if ((mReservedNum & 4) == 0) {
		mUnusedVal = 0;
		return;
	}

	mCreature = nullptr;
	if (mObject) {
		if (ramMode != RM_Disc && (mReservedNum & 4) != 0
		    && (int)gameSystem->mTimeMgr->mDayCount >= (int)(mDayNum + mDaysTillResurrection)) {
			mDayNum     = gameSystem->mTimeMgr->mDayCount;
			mDeathCount = 0;
		}

		mCreature = mObject->generate(this);
		if (mCreature) {
			mCreature->mGenerator = this;
		}
	}
}

/**
 * @note Address: 0x801AACF4
 * @note Size: 0x24
 */
void Generator::informDeath(Game::Creature* creature)
{
	if (creature == mCreature) {
		mCreature = nullptr;
	}

	mDeathCount++;
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void Generator::update()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void Generator::render(Graphics&)
{
	// UNUSED FUNCTION
}

/**
 * read__Q24Game9GeneratorFR6Stream
 *
 * @note Address: 0x801AAD18
 * @note Size: 0x3A4
 */
void Generator::read(Stream& input)
{
	mVersion.read(input);
	if (mVersion.getID() >= 'v0.0') {
		mReservedNum = input.readShort();
	} else {
		mReservedNum = input.readInt();
	}

	if (mVersion.getID() >= 'v0.3') {
		mDaysTillResurrection = input.readShort();
	} else if (mVersion.getID() >= 'v0.1') {
		mDaysTillResurrection = input.readInt();
	} else {
		mDaysTillResurrection = 0;
	}

	if (ramMode == RM_Disc) {
		readName(input);
	} else {
		if (mVersion.getID() >= 'v0.2') {
			if (input.readByte() != '\0') {
				readName(input);

			} else {
				mGenObjName[0] = '\0';
			}
		} else {
			mGenObjName[0] = '\0';
		}
		mDeathCount = input.readShort();
		mDayNum     = input.readShort();
		mDayLimit   = input.readShort();
	}
	if (ramMode != RM_Disc) {
		mPosition.x = input.readShort();
		mPosition.y = input.readShort();
		mPosition.z = input.readShort();
	} else {
		mPosition.x = input.readFloat();
		mPosition.y = input.readFloat();
		mPosition.z = input.readFloat();
	}
	if (ramMode != RM_Disc) {
		mOffset.x = 0.0f;
		mOffset.y = 0.0f;
		mOffset.z = 0.0f;
	} else {
		mOffset.x = input.readFloat();
		mOffset.y = input.readFloat();
		mOffset.z = input.readFloat();
	}
	mObject = nullptr;
	ID32 temp;
	temp.read(input);
	int id = temp.getID();

	mObject = GenObjectFactory::factory->make(id);
	if (mObject) {
		mObject->read(input);
		mId = id;
	} else {
		temp.print();
	}
}

/**
 * write__Q24Game9GeneratorFR6Stream
 *
 * @note Address: 0x801AB0BC
 * @note Size: 0x39C
 */
void Generator::write(Stream& output)
{
	output.textWriteTab(output.mTabCount);
	ID32 id(GeneratorCurrentVersion);
	id.write(output);
	output.textWriteText("\t# version\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeShort(mReservedNum);
	output.textWriteText("\t# reserved\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeShort(mDaysTillResurrection);
	output.textWriteText("\t# 復活日数\r\n"); // 'resurrection days'

	if (ramMode == RM_Disc) {
		// generator files as stored on disc
		output.textWriteTab(output.mTabCount);
		for (int i = 0; i < 32; i++) {
			output.writeByte(mGenObjName[i]);
		}
		output.textWriteText("\t# <%s>\r\n", mGenObjName);
	} else {
		// gencache?
		output.writeByte('\0');
		output.writeShort(mDeathCount);
		output.writeShort(mDayNum);
		output.writeShort(mDayLimit);
	}

	if (ramMode != RM_Disc) {
		output.writeShort((s16)mPosition.x + mOffset.x);
		output.writeShort((s16)mPosition.y + mOffset.y);
		output.writeShort((s16)mPosition.z + mOffset.z);
	} else {
		output.textWriteTab(output.mTabCount);
		output.writeFloat(mPosition.x);
		output.writeFloat(mPosition.y);
		output.writeFloat(mPosition.z);
		output.textWriteText("\t# pos\r\n");

		output.textWriteTab(output.mTabCount);
		output.writeFloat(mOffset.x);
		output.writeFloat(mOffset.y);
		output.writeFloat(mOffset.z);
		output.textWriteText("\t# offset\r\n");
	}
	if (mObject) {
		mObject->write(output);
	} else {
		output.writeInt(0);
	}
}

/**
 * __ct__Q24Game12GeneratorMgrFv
 *
 * @note Address: 0x801AB458
 * @note Size: 0x120
 */
GeneratorMgr::GeneratorMgr()
    : CNode("genMgr")
{
	mParentMgr      = nullptr;
	mChildMgr       = nullptr;
	mNextMgr        = nullptr;
	mUnusedFlag2    = 0;
	mStartPos       = Vector3f(0.0f);
	mStartDir       = 0.0f;
	mGeneratorCount = 0;
	mGenerator      = nullptr;
	mAltVersionID.setID('v0.1');
	mVersionID.setID('v0.0');
	if (!GenObjectFactory::factory) {
		GenObjectFactory::factory = new GenObjectFactoryFactory;
	}
	mUnusedFlag = 0;
	mName       = "GeneratorMgr";
}

/**
 * @note Address: 0x801AB578
 * @note Size: 0x3C
 */
void GeneratorMgr::addMgr(Game::GeneratorMgr* newMgr)
{
	if (mChildMgr == nullptr) {
		mChildMgr          = newMgr;
		newMgr->mParentMgr = this;
		return;
	}
	GeneratorMgr* speculativeChild = mChildMgr;
	while (speculativeChild->mNextMgr) {
		speculativeChild = speculativeChild->mNextMgr;
	}
	speculativeChild->mNextMgr = newMgr;
	newMgr->mParentMgr         = this;
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
bool GeneratorMgr::isRootMgr()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801AB5B4
 * @note Size: 0x148
 */
void GeneratorMgr::generate()
{
	for (Generator* gen = mGenerator; gen != nullptr; gen = gen->mNextGenerator) {
		gen->generate();
	}
}

/**
 * @note Address: 0x801AB6FC
 * @note Size: 0x1C
 */
void GeneratorMgr::setDayLimit(int dayLimit)
{
	for (Generator* gen = mGenerator; gen != nullptr; gen = gen->mNextGenerator) {
		gen->mDayLimit = dayLimit;
	}
}

/**
 * @note Address: 0x801AB718
 * @note Size: 0x98
 */
void GeneratorMgr::updateUseList()
{
	for (Generator* gen = mGenerator; gen != nullptr; gen = gen->mNextGenerator) {
		gen->updateUseList();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void GeneratorMgr::update()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x55C
 */
void GeneratorMgr::render(Graphics& gfx)
{
	// UNUSED FUNCTION
	// obviously more to this, but this is enough to generate the weak functions below it
	GeneratorMgr* mgr = getChild();
	for (mgr; mgr; mgr = mgr->getNext()) {
		mgr->render(gfx);
	}
}

/**
 * @note Address: 0x801AB7C0
 * @note Size: 0x43C
 */
void GeneratorMgr::updateCursorPos(Vector3f& position)
{
	mCursorPosition = (const Vector3f&)position; // forcing it to use the right operator=
	if (getChild()) {
		getChild()->updateCursorPos(position);
	}
	if (getNext()) {
		getNext()->updateCursorPos(position);
	}
}

/**
 * read__Q24Game12GeneratorMgrFR6Streamb
 * @note Address: 0x801ABC18
 * @note Size: 0x2F0
 */
void GeneratorMgr::read(Stream& input, bool)
{
	if (mGenerator) {
		delete mGenerator;
		mGeneratorCount = 0;
	}

	mVersionID.read(input);
	mVersionID == 'v0.0';

	mStartPos.x = input.readFloat();
	mStartPos.y = input.readFloat();
	mStartPos.z = input.readFloat();

	if (mVersionID == 'v0.1') {
		mStartDir = input.readFloat();
	}

	mGeneratorCount = input.readInt();
	mGenerator      = nullptr;
	for (int i = 0; i < mGeneratorCount; i++) {
		if (mGenerator == nullptr) {
			mGenerator = new Generator();
			mGenerator->read(input);
			mGenerator->mMgr = this;
			generatorCache->addGenerator(mGenerator);
		} else {
			Generator* newGenerator = new Generator();
			newGenerator->mMgr      = this;
			newGenerator->read(input);

			Generator* gen = mGenerator;
			for (gen; gen->mNextGenerator; gen = gen->mNextGenerator) {
				;
			}
			gen->mNextGenerator = newGenerator;

			newGenerator->mPrevGenerator = gen;
			generatorCache->addGenerator(newGenerator);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x118
 */
void GeneratorMgr::write(Stream& output)
{
	output.textWriteTab(output.mTabCount);
	output.textWriteText("# generatorMgr <%s>\r\n");

	output.textWriteTab(output.mTabCount);
	output.textWriteText("\t# startPos\r\n");

	output.textWriteTab(output.mTabCount);
	output.textWriteText("\t# startDir\r\n");

	output.textWriteTab(output.mTabCount);
	output.textWriteText("\t# %d generators\r\n");
}

/**
 * @note Address: 0x801ABF08
 * @note Size: 0xD8
 */
void Generator::doAnimation()
{
	GenObject* obj = mObject;
	if (mObject && mObject->mModel) {
		Matrixf mat;
		Vector3f pos = mPosition + mOffset;
		mObject->generatorMakeMatrix(mat, pos);

		PSMTXCopy(mat.mMatrix.mtxView, mObject->mModel->mJ3dModel->mPosMtx);
		mObject->mModel->mJ3dModel->calc();
	}

	if (mNextGenerator) {
		mNextGenerator->doAnimation();
	}
}

/**
 * @note Address: 0x801ABFE0
 * @note Size: 0x70
 */
void Generator::doEntry()
{
	if (mObject && mObject->mModel) {
		mObject->mModel->mJ3dModel->entry();
	}

	if (mNextGenerator) {
		mNextGenerator->doEntry();
	}
}

/**
 * @note Address: 0x801AC050
 * @note Size: 0x70
 */
void Generator::doSetView(int viewportNumber)
{
	if (mObject && mObject->mModel) {
		mObject->mModel->setCurrentViewNo(viewportNumber);
	}

	if (mNextGenerator) {
		mNextGenerator->doSetView(viewportNumber);
	}
}

/**
 * @note Address: 0x801AC0C0
 * @note Size: 0x60
 */
void Generator::doViewCalc()
{
	if (mObject && mObject->mModel) {
		mObject->mModel->viewCalc();
	}

	if (mNextGenerator) {
		mNextGenerator->doViewCalc();
	}
}

/**
 * doAnimation__Q24Game12GeneratorMgrFv
 *
 * @note Address: 0x801AC120
 * @note Size: 0x7C
 */
void GeneratorMgr::doAnimation()
{
	if (mGenerator) {
		mGenerator->doAnimation();
	}

	if (mChildMgr) {
		mChildMgr->doAnimation();
	}

	if (getNext()) {
		getNext()->doAnimation();
	}
}

/**
 * doAnimation__Q24Game12GeneratorMgrFv
 *
 * @note Address: 0x801AC19C
 * @note Size: 0x7C
 */
void GeneratorMgr::doEntry()
{
	if (mGenerator) {
		mGenerator->doEntry();
	}

	if (mChildMgr) {
		mChildMgr->doEntry();
	}

	if (getNext()) {
		getNext()->doEntry();
	}
}

/**
 * doSetView__Q24Game12GeneratorMgrFi
 *
 * @note Address: 0x801AC218
 * @note Size: 0x90
 */
void GeneratorMgr::doSetView(int viewportNumber)
{
	if (mGenerator) {
		mGenerator->doSetView(viewportNumber);
	}

	if (mChildMgr) {
		mChildMgr->doSetView(viewportNumber);
	}

	if (getNext()) {
		getNext()->doSetView(viewportNumber);
	}
}

/**
 * doViewCalc__Q24Game12GeneratorMgrFv
 *
 * @note Address: 0x801AC2A8
 * @note Size: 0x7C
 */
void GeneratorMgr::doViewCalc()
{
	if (mGenerator) {
		mGenerator->doViewCalc();
	}

	if (mChildMgr) {
		mChildMgr->doViewCalc();
	}

	if (getNext()) {
		getNext()->doViewCalc();
	}
}

} // namespace Game
