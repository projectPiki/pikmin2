#include "CNode.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "stream.h"
#include "string.h"
#include "stl/stdarg.h"
#include "Game/Cave/Info.h"
#include "Game/generalEnemyMgr.h"
#include "Game/pelletMgr.h"
#include "Game/Entities/ItemGate.h"
#include "P2Macros.h"
#include "types.h"

static const char caveInfoName[] = "caveInfo";

namespace Game {
namespace Cave {
/**
 * __ct__Q34Game4Cave7BaseGenFv
 * @note Address: 0x801D60A4
 * @note Size: 0x70
 */
BaseGen::BaseGen()
{
	mName      = "BaseGen";
	mPosition  = Vector3f(0.0f);
	mRadius    = 0.0f;
	mAngle     = 0.0f;
	mMinimum   = 1;
	mMaximum   = 1;
	mSpawnType = CGT_EnemyEasy;
}

/**
 * @note Address: 0x801D6114
 * @note Size: 0xF4
 */
void BaseGen::read(Stream& stream)
{
	int childCount = stream.readInt();
	for (int i = 0; i < childCount; i++) {
		BaseGen* child    = new BaseGen();
		child->mSpawnType = static_cast<BaseGen::CaveGenType>(stream.readInt());
		child->mPosition.read(stream);
		child->mAngle   = stream.readFloat();
		child->mRadius  = stream.readFloat();
		child->mMinimum = stream.readInt();
		child->mMaximum = stream.readInt();
		add(child);
	}
}

/**
 * @note Address: 0x801D6208
 * @note Size: 0x4
 */
void BaseGen::draw(Graphics&, Matrixf*) { }

/**
 * read__Q34Game4Cave8TekiInfoFR6Stream
 *
 * @note Address: 0x801D620C
 * @note Size: 0x1A8
 */
void TekiInfo::read(Stream& stream)
{
	char inputBuffer[128];
	char parsedBuffer[128];
	char* inputString = stream.readString(nullptr, 0);

	if (inputString[0] == '$') {
		char dropModeChar = inputString[1];

		if (dropModeChar >= '1' && '9' >= dropModeChar) {
			inputString += 2;
			mDropMode = dropModeChar - '0';
		} else {
			inputString++;
			mDropMode = DROP_PikminOrLeader;
		}
	} else {
		mDropMode = DROP_NoDrop;
	}

	parsedBuffer[0]    = '\0';
	char* parsedString = parsedBuffer;
	int parsedVarIndex = 0;
	u32 parsedIntValue = 0;
	char* inputPtr     = inputString;

	while (strlen(inputString) > parsedIntValue) {
		bool isUnderscore = false;

		if (*inputPtr == '_') {
			if (parsedString == parsedBuffer) {
				parsedString[parsedVarIndex] = '\0';
				EnemyInfo* enemyInfoPtr      = gEnemyInfo;
				int enemyIndex               = 0;

				while (gEnemyInfoNum > enemyIndex) {
					if (strcmp(enemyInfoPtr->mName, parsedString) == 0) {
						isUnderscore = true;
						break;
					}

					enemyInfoPtr++;
					enemyIndex++;
				}
			}
		}

		if (isUnderscore) {
			parsedString   = inputBuffer;
			parsedVarIndex = 0;
		} else {
			parsedString[parsedVarIndex] = *inputPtr;
			parsedVarIndex++;
		}

		parsedIntValue++;
		inputPtr++;
	}
	parsedString[parsedVarIndex] = '\0';
	mEnemyID                     = static_cast<EnemyTypeID::EEnemyTypeID>(generalEnemyMgr->getEnemyID(parsedBuffer, EFlag_CanBeSpawned));

	if (parsedBuffer[0] != '\0') {
		pelletMgr->makeOtakaraItemCode(parsedBuffer, mOtakaraItemCode);
	}

	parsedIntValue = stream.readInt();
	mWeight        = parsedIntValue;
	mType          = static_cast<BaseGen::CaveGenType>(stream.readInt());
	inputPtr       = generalEnemyMgr->getEnemyName(mEnemyID, EFlag_CanBeSpawned);
	mName          = inputPtr;
	return;

	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x134(r1)
	  stmw      r22, 0x108(r1)
	  mr        r30, r4
	  mr        r29, r3
	  li        r4, 0
	  mr        r3, r30
	  bl        0x23EEA4
	  lbz       r0, 0x0(r3)
	  mr        r31, r3
	  cmpwi     r0, 0x24
	  bne-      .loc_0x70
	  lbz       r3, 0x1(r31)
	  extsb     r0, r3
	  cmpwi     r0, 0x31
	  blt-      .loc_0x60
	  cmpwi     r0, 0x39
	  bgt-      .loc_0x60
	  subi      r0, r3, 0x30
	  addi      r31, r31, 0x2
	  stb       r0, 0x24(r29)
	  b         .loc_0x78

	.loc_0x60:
	  li        r0, 0x1
	  addi      r31, r31, 0x1
	  stb       r0, 0x24(r29)
	  b         .loc_0x78

	.loc_0x70:
	  li        r0, 0
	  stb       r0, 0x24(r29)

	.loc_0x78:
	  li        r0, 0
	  mr        r28, r31
	  stb       r0, 0x8(r1)
	  addi      r26, r1, 0x88
	  li        r25, 0
	  li        r24, 0
	  b         .loc_0x120

	.loc_0x94:
	  lbz       r0, 0x0(r28)
	  li        r23, 0
	  cmpwi     r0, 0x5F
	  bne-      .loc_0xF8
	  addi      r0, r1, 0x88
	  cmplw     r26, r0
	  bne-      .loc_0xF8
	  li        r0, 0
	  lis       r3, 0x804B
	  stbx      r0, r26, r25
	  subi      r27, r3, 0x3AC8
	  li        r22, 0
	  b         .loc_0xEC

	.loc_0xC8:
	  lwz       r3, 0x0(r27)
	  mr        r4, r26
	  bl        -0x10BC1C
	  cmpwi     r3, 0
	  bne-      .loc_0xE4
	  li        r23, 0x1
	  b         .loc_0xF8

	.loc_0xE4:
	  addi      r27, r27, 0x34
	  addi      r22, r22, 0x1

	.loc_0xEC:
	  lwz       r0, -0x7C30(r13)
	  cmpw      r22, r0
	  blt+      .loc_0xC8

	.loc_0xF8:
	  rlwinm.   r0,r23,0,24,31
	  beq-      .loc_0x10C
	  addi      r26, r1, 0x8
	  li        r25, 0
	  b         .loc_0x118

	.loc_0x10C:
	  lbz       r0, 0x0(r28)
	  stbx      r0, r26, r25
	  addi      r25, r25, 0x1

	.loc_0x118:
	  addi      r24, r24, 0x1
	  addi      r28, r28, 0x1

	.loc_0x120:
	  mr        r3, r31
	  bl        -0x10BA20
	  cmplw     r24, r3
	  blt+      .loc_0x94
	  li        r0, 0
	  addi      r4, r1, 0x88
	  stbx      r0, r26, r25
	  li        r5, 0x4
	  lwz       r3, -0x6E20(r13)
	  bl        -0xC8DAC
	  stw       r3, 0x18(r29)
	  lbz       r0, 0x8(r1)
	  extsb.    r0, r0
	  beq-      .loc_0x168
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x8
	  addi      r5, r29, 0x26
	  bl        -0x684F4

	.loc_0x168:
	  mr        r3, r30
	  bl        0x23E718
	  stw       r3, 0x1C(r29)
	  mr        r3, r30
	  bl        0x23E70C
	  stw       r3, 0x20(r29)
	  li        r5, 0x4
	  lwz       r3, -0x6E20(r13)
	  lwz       r4, 0x18(r29)
	  bl        -0xC8E1C
	  stw       r3, 0x14(r29)
	  lmw       r22, 0x108(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/**
 * @note Address: 0x801D63B4
 * @note Size: 0xA8
 */
void ItemInfo::read(Stream& input)
{
	char* name = input.readString(nullptr, 0);
	mCaveID    = pelletMgr->getCaveID(name);
	JUT_ASSERTLINE(659, mCaveID != -1, "変なペレットネームです!\n");
	mWeight = input.readInt();
	mName   = name;
}

/**
 * @note Address: 0x801D645C
 * @note Size: 0x8C
 */
void GateInfo::read(Stream& input)
{
	char* name = input.readString(nullptr, 0);
	mCaveID    = Game::itemGateMgr->getCaveID(name);
	mLife      = input.readFloat();
	mWeight    = input.readInt();
	mName      = name;
}

/**
 * @note Address: 0x801D64E8
 * @note Size: 0x1C
 */
TekiInfo* CapInfo::getTekiInfo() { return (!mIsTekiEmpty) ? mTekiInfo : nullptr; }

/**
 * @note Address: 0x801D6504
 * @note Size: 0xC8
 */
void CapInfo::read(Stream& input)
{
	mIsTekiEmpty = input.readByte();
	if (mIsTekiEmpty == 0) {
		mTekiInfo          = new TekiInfo();
		mTekiInfo->mParent = mTekiInfo;
		getTekiInfo()->read(input);
	}
}

/**
 * @note Address: 0x801D65CC
 * @note Size: 0x174
 */
FloorInfo::FloorInfo()
    : CNode("floorInfo")
    , mParms()
    , mTekiInfo()
    , mItemInfo()
    , mGateInfo()
    , mCapInfo()
{
	mTekiInfo.clearRelations();
	mItemInfo.clearRelations();
	mGateInfo.clearRelations();
	mCapInfo.clearRelations();
}
} // namespace Cave
} // namespace Game

namespace {
static char* enum_floor_alpha_types[]
    = { "土", "メタル", "コンクリーツ", "タイル", nullptr, nullptr };  // 'soil', 'metal', 'concrete', 'tile', -, -
static char* enum_floor_beta_types[] = { "通常", "ボス", "やすらぎ" }; // 'normal', 'boss', 'rest'
static char* enum_floor_hiddens[]    = { "なし", "あり" };             // 'none', 'available'
} // namespace

namespace Game {
namespace Cave {

/**
 * @note Address: 0x801D68C0
 * @note Size: 0x410
 */
FloorInfo::Parms::Parms()
    : Parameters(nullptr, "FloorInfo")
    , mFloorIndex1(this, 'f000', "階はじめ", 0, 0, 127)                          // 'first floor'
    , mFloorIndex2(this, 'f001', "階おわり", 1, 0, 127)                          // 'end of floor'
    , mTekiMax(this, 'f002', "敵最大数", 0, 0, 128)                              // 'maximum number of enemies'
    , mItemMax(this, 'f003', "アイテム最大数", 0, 0, 128)                        // 'maximum number of items'
    , mGateMax(this, 'f004', "ゲート最大数", 0, 0, 32)                           // 'maximum number of gates'
    , mCapMax(this, 'f014', "キャップ最大数", 0, 0, 128)                         // 'maximum number of caps'
    , mRoomCount(this, 'f005', "ルーム数", 4, 1, 15)                             // 'number of rooms'
    , mRouteRatio(this, 'f006', "ルートの割合", 0.0f, 0.0f, 1.0f)                // 'root percentage'
    , mHasEscapeFountain(this, 'f007', "帰還噴水(1=あり)", 0, 0, 1)              // 'return fountain (1=yes)'
    , mCaveUnitFile(this, "units.txt", 64, 'f008', "使用ユニット")               // 'unit used'
    , mLightingFile(this, "light.ini", 64, 'f009', "使用ライト")                 // 'light used'
    , mVrBox(this, "test", 64, 'f00A', "VRBOX")                                  // 'VRBOX'
    , mIsHoleClogged(this, 'f010', "階段を壊す岩で隠す(0=オフ 1=オン)", 0, 0, 1) // 'hide stairs with rocks that break (0=off 1=on)'
    , mFloorAlphaType(this, enum_floor_alpha_types, 0, 6, 'f011', "α属性")       // 'alpha attribute'
    , mFloorBetaType(this, enum_floor_beta_types, 0, 3, 'f012', "β属性")         // 'beta attribute'
    , mFloorHidden(this, enum_floor_hiddens, 0, 2, 'f013', "隠し床")             // 'hidden floor'
    , mVersion(this, 'f015', "Version", 0, 0, 10000)                             // 'Version'
    , mWaterwraithTimer(this, 'f016', "BlackManTimer", 0.0f, 0.0f, 10000.0f)     // 'BlackManTimer'
    , mGlitchySeesaw(this, 'f017', "沈む壁", 0, 0, 1)                            // 'sinking wall'
{
}

/**
 * @note Address: 0x801D6CD0
 * @note Size: 0x14
 */
bool FloorInfo::hasHiddenCollision() { return mParms.mFloorHidden == TRUE; }

/**
 * @note Address: 0x801D6CE4
 * @note Size: 0x8
 */
int FloorInfo::getTekiMax() { return mParms.mTekiMax; }

/**
 * @note Address: 0x801D6CEC
 * @note Size: 0x2C
 */
int FloorInfo::getTekiInfoNum() { return mTekiInfo.getChildCount(); }

/**
 * @note Address: 0x801D6D18
 * @note Size: 0x94
 */
TekiInfo* FloorInfo::getTekiInfo(int index)
{
	P2ASSERTBOUNDSINCLUSIVELINE(904, 0, index, mTekiInfo.getChildCount());
	return static_cast<TekiInfo*>(mTekiInfo.getChildAt(index));
}

/**
 * @note Address: 0x801D6DAC
 * @note Size: 0x24
 */
int FloorInfo::getTekiWeightSum()
{
	int total = 0;
	FOREACH_NODE(TekiInfo, mTekiInfo.mChild, node) { total += node->mWeight; }
	return total;
}

/**
 * @note Address: 0x801D6DD0
 * @note Size: 0x8
 */
int FloorInfo::getItemMax() { return mParms.mItemMax; }

/**
 * @note Address: 0x801D6DD8
 * @note Size: 0x2C
 */
int FloorInfo::getItemInfoNum() { return mItemInfo.getChildCount(); }

/**
 * @note Address: 0x801D6E04
 * @note Size: 0x94
 */
ItemInfo* FloorInfo::getItemInfo(int index)
{
	P2ASSERTBOUNDSINCLUSIVELINE(929, 0, index, mItemInfo.getChildCount());
	return static_cast<ItemInfo*>(mItemInfo.getChildAt(index));
}

/**
 * @note Address: 0x801D6E98
 * @note Size: 0x24
 */
int FloorInfo::getItemWeightSum()
{
	int total = 0;
	FOREACH_NODE(ItemInfo, mItemInfo.mChild, node) { total += node->mWeight; }
	return total;
}

/**
 * @note Address: 0x801D6EBC
 * @note Size: 0x8
 */
int FloorInfo::getGateMax() { return mParms.mGateMax; }

/**
 * @note Address: 0x801D6EC4
 * @note Size: 0x2C
 */
int FloorInfo::getGateInfoNum() { return mGateInfo.getChildCount(); }

/**
 * @note Address: 0x801D6EF0
 * @note Size: 0x94
 */
GateInfo* FloorInfo::getGateInfo(int index)
{
	P2ASSERTBOUNDSINCLUSIVELINE(954, 0, index, mGateInfo.getChildCount());
	return static_cast<GateInfo*>(mGateInfo.getChildAt(index));
}

/**
 * @note Address: 0x801D6F84
 * @note Size: 0x24
 */
int FloorInfo::getGateWeightSum()
{
	int total = 0;
	FOREACH_NODE(GateInfo, mGateInfo.mChild, node) { total += node->mWeight; }
	return total;
}

/**
 * @note Address: 0x801D6FA8
 * @note Size: 0x8
 */
int FloorInfo::getCapMax() { return mParms.mCapMax; }

/**
 * @note Address: 0x801D6FB0
 * @note Size: 0x2C
 */
int FloorInfo::getCapInfoNum() { return mCapInfo.getChildCount(); }

/**
 * @note Address: 0x801D6FDC
 * @note Size: 0x94
 */
CapInfo* FloorInfo::getCapInfo(int index)
{
	P2ASSERTBOUNDSINCLUSIVELINE(979, 0, index, mCapInfo.getChildCount());
	return static_cast<CapInfo*>(mCapInfo.getChildAt(index));
}

/**
 * @note Address: 0x801D7070
 * @note Size: 0x8
 */
int FloorInfo::getRoomNum() { return mParms.mRoomCount; }

/**
 * @note Address: 0x801D7078
 * @note Size: 0x8
 */
f32 FloorInfo::getRouteRatio() { return mParms.mRouteRatio; }

/**
 * @note Address: 0x801D7080
 * @note Size: 0x44
 */
bool FloorInfo::hasEscapeFountain(int floorIndex)
{
	bool hasEscapeFountain = mParms.mHasEscapeFountain == 1;

	if (floorIndex == -1) {
		return hasEscapeFountain;
	}

	if (hasEscapeFountain && floorIndex == mParms.mFloorIndex2) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x801D70C4
 * @note Size: 0x14
 */
bool FloorInfo::useKaidanBarrel() { return mParms.mIsHoleClogged == 1; }

/**
 * @note Address: 0x801D70D8
 * @note Size: 0x224
 * TODO: inline here
 */
void FloorInfo::read(Stream& input)
{
	mParms.read(input);
	int count = input.readInt();
	for (int i = 0; i < count; i++) {
		TekiInfo* info = new TekiInfo();
		info->read(input);
		mTekiInfo.add(info);
	}
	count = input.readInt();
	for (int i = 0; i < count; i++) {
		ItemInfo* info = new ItemInfo();
		info->read(input);
		mItemInfo.add(info);
	}
	count = input.readInt();
	for (int i = 0; i < count; i++) {
		GateInfo* info = new GateInfo();
		info->read(input);
		mGateInfo.add(info);
	}
	if (mParms.mVersion >= 1) {
		count = input.readInt();
		for (int i = 0; i < count; i++) {
			CapInfo* info = new CapInfo();
			info->read(input);
			mCapInfo.add(info);
		}
	}
}

/**
 * @note Address: 0x801D72FC
 * @note Size: 0xD0
 */
CaveInfo::CaveInfo()
    : CNode(const_cast<char*>(caveInfoName))
    , mParms()
    , mFloorInfo()
{
	mFloorInfo.clearRelations();
}

/**
 * @note Address: 0x801D74B0
 * @note Size: 0x40
 */
void CaveInfo::disablePelplant()
{
	FOREACH_NODE(FloorInfo, mFloorInfo.mChild, floorInfo)
	{
		FOREACH_NODE(TekiInfo, floorInfo->mTekiInfo.mChild, tekiInfo)
		{
			if (tekiInfo->mEnemyID == EnemyTypeID::EnemyID_Pelplant) {
				tekiInfo->mWeight = 0;
			}
		}
	}
}

/**
 * @note Address: 0x801D74F0
 * @note Size: 0x8
 */
int CaveInfo::getFloorMax() { return mParms.mFloorMax; }

/**
 * @note Address: 0x801D74F8
 * @note Size: 0x34
 */
FloorInfo* CaveInfo::getFloorInfo(int floorIndex)
{
	FOREACH_NODE(FloorInfo, mFloorInfo.mChild, floorInfo)
	{
		if (floorInfo->mParms.mFloorIndex1 <= floorIndex && floorIndex <= floorInfo->mParms.mFloorIndex2) {
			return floorInfo;
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x801D752C
 * @note Size: 0xF8
 */
CaveInfo* CaveInfo::load(char* path)
{
	char pathCopyBuffer[512];
	sprintf(pathCopyBuffer, "%s", path);
	void* data = JKRDvdToMainRam(pathCopyBuffer, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	JUT_ASSERTLINE(1249, data != nullptr, "%s not found !\n", pathCopyBuffer);
	RamStream input(data, -1);
	input.setMode(STREAM_MODE_TEXT, 1);
	CaveInfo* caveInfo = new CaveInfo;
	caveInfo->read(input);
	delete[] data;
	return caveInfo;
}

/**
 * @note Address: 0x801D7624
 * @note Size: 0x90
 */
void CaveInfo::read(Stream& input)
{
	mParms.read(input);
	int count = input.readInt();
	for (int i = 0; i < count; i++) {
		FloorInfo* info = new FloorInfo();
		info->read(input);
		mFloorInfo.add(info);
	}
}
} // namespace Cave
} // namespace Game
