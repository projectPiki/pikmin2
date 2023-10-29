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

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
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

/*
 * --INFO--
 * Address:	801AA6E4
 * Size:	000050
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

/*
 * @matchedSize
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void GenBase::writeVersion(Stream& output)
{
	// INLINED FUNCTION
	u32 versionRaw = getLatestVersion();
	ID32 versionID32(versionRaw);
	versionID32.write(output);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void GenBase::write(Stream& output)
{
	// INLINED FUNCTION
	ID32 type(mTypeID);
	output.textWriteTab(output.mTabCount);
	type.write(output);
	if (Generator::ramMode == 0) {
		writeVersion(output);
	}
	doWrite(output);
	if (Generator::ramMode != 0) {
		ramSaveParameters(output);
	} else {
		Parameters::write(output);
	}
}

/*
 * --INFO--
 * Address:	801AA744
 * Size:	000020
 */
void GenBase::ramSaveParameters(Stream& output) { Parameters::write(output); }

/*
 * --INFO--
 * Address:	801AA764
 * Size:	000020
 */
void GenBase::ramLoadParameters(Stream& input) { Parameters::read(input); }

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void GenBase::readVersion(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void GenBase::read(Stream& input)
{
	if (Generator::ramMode == 0) {
		ID32 temp2;
		temp2.read(input);
		mRawID = temp2.getID();
	} else {
		mRawID = getLatestVersion();
	}
	doRead(input);
	if (Generator::ramMode != 0) {
		ramLoadParameters(input);
	} else {
		Parameters::read(input);
	}
}

/*
 * getLatestVersion__Q24Game9GenObjectFv
 * --INFO--
 * Address:	801AA788
 * Size:	000050
 */
u32 GenObject::getLatestVersion() { return GenObjectFactory::factory->checkVersion(mTypeID); }

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void GenObjectFactory::createInstance()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AA7D8
 * Size:	00000C
 */
void Generator::initialiseSystem() { GenObjectFactory::factory = nullptr; }

/*
 * __ct__Q24Game9GeneratorFv
 * --INFO--
 * Address:	801AA7E4
 * Size:	0000DC
 */
Generator::Generator()
    : CNode()
    , _40()
    , mVersion()
    , mPosition(0.0f, 0.0f, 0.0f)
{
	mObject      = nullptr;
	_1C          = '____';
	mReservedNum = 0;
	_40.setID('    ');
	mVersion.setID(GeneratorCurrentVersion);
	strcpy(mGenObjName, "unset");
	_64                   = 0;
	_60                   = 0;
	mCreature             = nullptr;
	_7C                   = 0;
	mChild                = nullptr;
	mParent               = nullptr;
	mPrev                 = nullptr;
	mNext                 = nullptr;
	_AC                   = 1;
	mDayLimit             = -1;
	_74                   = 0;
	_78                   = 0;
	mDaysTillResurrection = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
Generator::Generator(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AA8C0
 * Size:	000068
 */
Generator::~Generator() { _64 = nullptr; }

/*
 * updateUseList__Q24Game9GeneratorFv
 * --INFO--
 * Address:	801AA928
 * Size:	000058
 */
void Generator::updateUseList()
{
	if (!isExpired() && (mObject != nullptr)) {
		mObject->updateUseList(this, 1);
	}
}

/*
 * --INFO--
 * Address:	801AA984
 * Size:	000034
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

/*
 * --INFO--
 * Address:	801AA9B8
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	801AAA78
 * Size:	00007C
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

/*
 * saveCreature__Q24Game9GeneratorFR6Stream
 * --INFO--
 * Address:	801AAAF4
 * Size:	0000C8
 */
void Generator::saveCreature(Stream& output)
{
	if (mCreature) {
		u8 conversion = 0;
		if (mReservedNum & 8) {
			conversion |= 0x1;
		}
		mCreature->getTypeName();
		mCreature->getCreatureName();
		mCreature->getCreatureID();
		mCreature->save(output, conversion);
		return;
	}
	// sic
	JUT_PANICLINE(448, "Generaotr::saveCreature creature is 0\n");
}

/*
 * generate__Q24Game9GeneratorFv
 *
 * --INFO--
 * Address:	801AABBC
 * Size:	000138
 */
void Generator::generate()
{
	if (isExpired()) {
		_7C       = 0;
		mCreature = nullptr;
	} else {
		if (ramMode == 0) {
			_7C = 0;
			_74 = 0;
			_78 = gameSystem->mTimeMgr->mDayCount;
		} else if ((mReservedNum & 4) == 0) {
			_7C = 0;
			return;
		}
		mCreature = nullptr;
		if (mObject) {
			if (ramMode != 0 && (mReservedNum & 4) != 0 && (int)gameSystem->mTimeMgr->mDayCount >= (int)(_78 + mDaysTillResurrection)) {
				_78 = gameSystem->mTimeMgr->mDayCount;
				_74 = 0;
			}
			mCreature = mObject->generate(this);
			if (mCreature) {
				mCreature->mGenerator = this;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	801AACF4
 * Size:	000024
 */
void Generator::informDeath(Game::Creature* creature)
{
	if (creature == mCreature) {
		mCreature = nullptr;
	}
	_74++;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Generator::update()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Generator::render(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * read__Q24Game9GeneratorFR6Stream
 *
 * --INFO--
 * Address:	801AAD18
 * Size:	0003A4
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
	} else {
		if (mVersion.getID() >= 'v0.1') {
			mDaysTillResurrection = input.readInt();
		} else {
			mDaysTillResurrection = 0;
		}
	}
	if (ramMode == 0) {
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
		_74       = input.readShort();
		_78       = input.readShort();
		mDayLimit = input.readShort();
	}
	if (ramMode != 0) {
		mPosition.x = input.readShort();
		mPosition.y = input.readShort();
		mPosition.z = input.readShort();
	} else {
		mPosition.x = input.readFloat();
		mPosition.y = input.readFloat();
		mPosition.z = input.readFloat();
	}
	if (ramMode != 0) {
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
		_1C = id;
	} else {
		temp.print();
	}
}

/*
 * write__Q24Game9GeneratorFR6Stream
 *
 * --INFO--
 * Address:	801AB0BC
 * Size:	00039C
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
	output.textWriteText("\t# ïúäàì˙êî\r\n"); // 'resurrection days'

	if (ramMode == 0) {
		// generator files as stored on disc
		output.textWriteTab(output.mTabCount);
		for (int i = 0; i < 32; i++) {
			output.writeByte(mGenObjName[i]);
		}
		output.textWriteText("\t# <%s>\r\n", mGenObjName);
	} else {
		// gencache?
		output.writeByte('\0');
		output.writeShort(_74);
		output.writeShort(_78);
		output.writeShort(mDayLimit);
	}
	if (ramMode != 0) {
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

/*
 * __ct__Q24Game12GeneratorMgrFv
 *
 * --INFO--
 * Address:	801AB458
 * Size:	000120
 */
GeneratorMgr::GeneratorMgr()
    : CNode("genMgr")
    , _34()
    , mVersionID()
    , _50()
{
	mParentMgr      = nullptr;
	mChildMgr       = nullptr;
	mNextMgr        = nullptr;
	_6D             = 0;
	mStartPos       = Vector3f(0.0f);
	mStartDir       = 0.0f;
	mGeneratorCount = 0;
	mGenerator      = nullptr;
	_34.setID('v0.1');
	mVersionID.setID('v0.0');
	if (!GenObjectFactory::factory) {
		GenObjectFactory::factory = new GenObjectFactoryFactory();
	}
	_6C   = 0;
	mName = "GeneratorMgr";
}

/*
 * --INFO--
 * Address:	801AB578
 * Size:	00003C
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

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
bool GeneratorMgr::isRootMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AB5B4
 * Size:	000148
 */
void GeneratorMgr::generate()
{
	for (Generator* gen = mGenerator; gen != nullptr; gen = gen->_64) {
		gen->generate();
	}
}

/*
 * --INFO--
 * Address:	801AB6FC
 * Size:	00001C
 */
void GeneratorMgr::setDayLimit(int dayLimit)
{
	for (Generator* generator = mGenerator; generator != nullptr; generator = generator->_64) {
		generator->mDayLimit = dayLimit;
	}
}

/*
 * --INFO--
 * Address:	801AB718
 * Size:	000098
 */
void GeneratorMgr::updateUseList()
{
	for (Generator* gen = mGenerator; gen != nullptr; gen = gen->_64) {
		gen->updateUseList();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void GeneratorMgr::update()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00055C
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

/*
 * --INFO--
 * Address:	801AB7C0
 * Size:	00043C
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

/*
 * read__Q24Game12GeneratorMgrFR6Streamb
 * --INFO--
 * Address:	801ABC18
 * Size:	0002F0
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
			for (gen; gen->_64; gen = gen->_64) {
				;
			}
			gen->_64          = newGenerator;
			newGenerator->_60 = gen;
			generatorCache->addGenerator(newGenerator);
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
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
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801ABF08
 * Size:	0000D8
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

	if (_64) {
		_64->doAnimation();
	}
}

/*
 * --INFO--
 * Address:	801ABFE0
 * Size:	000070
 */
void Generator::doEntry()
{
	if (mObject && mObject->mModel) {
		mObject->mModel->mJ3dModel->entry();
	}

	if (_64) {
		_64->doEntry();
	}
}

/*
 * --INFO--
 * Address:	801AC050
 * Size:	000070
 */
void Generator::doSetView(int viewportNumber)
{
	if (mObject && mObject->mModel) {
		mObject->mModel->setCurrentViewNo(viewportNumber);
	}

	if (_64) {
		_64->doSetView(viewportNumber);
	}
}

/*
 * --INFO--
 * Address:	801AC0C0
 * Size:	000060
 */
void Generator::doViewCalc()
{
	if (mObject && mObject->mModel) {
		mObject->mModel->viewCalc();
	}

	if (_64) {
		_64->doViewCalc();
	}
}

/*
 * doAnimation__Q24Game12GeneratorMgrFv
 *
 * --INFO--
 * Address:	801AC120
 * Size:	00007C
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

/*
 * doAnimation__Q24Game12GeneratorMgrFv
 *
 * --INFO--
 * Address:	801AC19C
 * Size:	00007C
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

/*
 * doSetView__Q24Game12GeneratorMgrFi
 *
 * --INFO--
 * Address:	801AC218
 * Size:	000090
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

/*
 * doViewCalc__Q24Game12GeneratorMgrFv
 *
 * --INFO--
 * Address:	801AC2A8
 * Size:	00007C
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
