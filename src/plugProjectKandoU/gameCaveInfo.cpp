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
void BaseGen::draw(Graphics&, Matrixf*)
{
}

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
	char* parsedString = inputBuffer;
	int parsedVarIndex = 0;
	u32 parsedIntValue = 0;

	while (strlen(inputString) > parsedIntValue) {
		bool isUnderscore = false;

		if (inputString[parsedIntValue] == '_') {
			if (parsedString == inputBuffer) {
				parsedString[parsedVarIndex] = '\0';
				int enemyIndex               = 0;

				while (gEnemyInfoNum > enemyIndex) {
					if (strcmp(gEnemyInfo[enemyIndex].mName, parsedString) == 0) {
						isUnderscore = true;
						break;
					}

					enemyIndex++;
				}
			}
		}

		if (isUnderscore) {
			parsedString   = parsedBuffer;
			parsedVarIndex = 0;
		} else {
			parsedString[parsedVarIndex] = inputString[parsedIntValue];
			parsedVarIndex++;
		}

		parsedIntValue++;
	}
	parsedString[parsedVarIndex] = '\0';
	mEnemyID                     = static_cast<EnemyTypeID::EEnemyTypeID>(generalEnemyMgr->getEnemyID(inputBuffer, EFlag_CanBeSpawned));

	if (parsedBuffer[0] != '\0') {
		pelletMgr->makeOtakaraItemCode(parsedBuffer, mOtakaraItemCode);
	}

	mWeight = stream.readInt();
	mType   = static_cast<BaseGen::CaveGenType>(stream.readInt());
	mName   = generalEnemyMgr->getEnemyName(mEnemyID, EFlag_CanBeSpawned);
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
TekiInfo* CapInfo::getTekiInfo()
{
	return (!mIsTekiEmpty) ? mTekiInfo : nullptr;
}

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
bool FloorInfo::hasHiddenCollision()
{
	return mParms.mFloorHidden == TRUE;
}

/**
 * @note Address: 0x801D6CE4
 * @note Size: 0x8
 */
int FloorInfo::getTekiMax()
{
	return mParms.mTekiMax;
}

/**
 * @note Address: 0x801D6CEC
 * @note Size: 0x2C
 */
int FloorInfo::getTekiInfoNum()
{
	return mTekiInfo.getChildCount();
}

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
	FOREACH_NODE(TekiInfo, mTekiInfo.mChild, node)
	{
		total += node->mWeight;
	}
	return total;
}

/**
 * @note Address: 0x801D6DD0
 * @note Size: 0x8
 */
int FloorInfo::getItemMax()
{
	return mParms.mItemMax;
}

/**
 * @note Address: 0x801D6DD8
 * @note Size: 0x2C
 */
int FloorInfo::getItemInfoNum()
{
	return mItemInfo.getChildCount();
}

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
	FOREACH_NODE(ItemInfo, mItemInfo.mChild, node)
	{
		total += node->mWeight;
	}
	return total;
}

/**
 * @note Address: 0x801D6EBC
 * @note Size: 0x8
 */
int FloorInfo::getGateMax()
{
	return mParms.mGateMax;
}

/**
 * @note Address: 0x801D6EC4
 * @note Size: 0x2C
 */
int FloorInfo::getGateInfoNum()
{
	return mGateInfo.getChildCount();
}

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
	FOREACH_NODE(GateInfo, mGateInfo.mChild, node)
	{
		total += node->mWeight;
	}
	return total;
}

/**
 * @note Address: 0x801D6FA8
 * @note Size: 0x8
 */
int FloorInfo::getCapMax()
{
	return mParms.mCapMax;
}

/**
 * @note Address: 0x801D6FB0
 * @note Size: 0x2C
 */
int FloorInfo::getCapInfoNum()
{
	return mCapInfo.getChildCount();
}

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
int FloorInfo::getRoomNum()
{
	return mParms.mRoomCount;
}

/**
 * @note Address: 0x801D7078
 * @note Size: 0x8
 */
f32 FloorInfo::getRouteRatio()
{
	return mParms.mRouteRatio;
}

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
bool FloorInfo::useKaidanBarrel()
{
	return mParms.mIsHoleClogged == 1;
}

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
int CaveInfo::getFloorMax()
{
	return mParms.mFloorMax;
}

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
