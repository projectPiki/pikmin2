#include "Game/IllustratedBook.h"
#include "Game/GameSystem.h"
#include "Game/SingleGame.h"
#include "nans.h"

namespace Game {
namespace IllustratedBook {

Game::SingleGame::ZukanState* Parms::sZukanState;
Camera* Parms::sCamera;

static const int unusedIllustratedBookArray[] = { 0, 0, 0 };

/**
 * @note Address: 0x80130B9C
 * @note Size: 0x1D0
 */
ColorSetting::ColorSetting()
    : CNode("色設定")
{
	mBgGradientColors[SUNTIME_Night][BGGRAD_Top]      = Color4(88, 91, 153, 255);
	mBgGradientColors[SUNTIME_Night][BGGRAD_Bottom]   = Color4(64, 64, 64, 255);
	mBgGradientColors[SUNTIME_Morning][BGGRAD_Top]    = Color4(166, 232, 253, 255);
	mBgGradientColors[SUNTIME_Morning][BGGRAD_Bottom] = Color4(255, 255, 255, 255);
	mBgGradientColors[SUNTIME_Noon][BGGRAD_Top]       = Color4(166, 232, 253, 255);
	mBgGradientColors[SUNTIME_Noon][BGGRAD_Bottom]    = Color4(255, 255, 255, 255);
	mBgGradientColors[SUNTIME_Evening][BGGRAD_Top]    = Color4(255, 192, 128, 255);
	mBgGradientColors[SUNTIME_Evening][BGGRAD_Bottom] = Color4(255, 255, 143, 255);
	mBgGradientColors[SUNTIME_Demo][BGGRAD_Top]       = Color4(255, 255, 255, 255);
	mBgGradientColors[SUNTIME_Demo][BGGRAD_Bottom]    = Color4(255, 255, 255, 255);

	mGlowColors[SUNTIME_Night]   = Color4(73, 73, 73, 255);
	mGlowColors[SUNTIME_Morning] = Color4(8, 8, 8, 255);
	mGlowColors[SUNTIME_Noon]    = Color4(50, 50, 40, 255);
	mGlowColors[SUNTIME_Evening] = Color4(52, 32, 10, 255);
	mGlowColors[SUNTIME_Demo]    = Color4(32, 32, 10, 255);
}

/**
 * @note Address: 0x80130D70
 * @note Size: 0x98
 */
void ColorSetting::read(Stream& stream)
{
	for (int i = 0; i < SUNTIME_Demo; i++) {
		mBgGradientColors[i][BGGRAD_Top].read(stream);
		mBgGradientColors[i][BGGRAD_Bottom].read(stream);
	}

	for (int i = 0; i < SUNTIME_Demo; i++) {
		mGlowColors[i].read(stream);
	}
}

/**
 * @note Address: 0x80130E08
 * @note Size: 0x8CC
 */
void ColorSetting::update()
{
	int start, middle, stop;
	switch (gameSystem->mTimeMgr->mLightSetting) {
	case SUNTIME_Night:
		start  = SUNTIME_Night;
		middle = SUNTIME_Night;
		stop   = SUNTIME_Night;
		break;
	case SUNTIME_Morning:
		start  = SUNTIME_Night;
		middle = SUNTIME_Morning;
		stop   = SUNTIME_Noon;
		break;
	case SUNTIME_Noon:
		start  = SUNTIME_Noon;
		middle = SUNTIME_Noon;
		stop   = SUNTIME_Noon;
		break;
	case SUNTIME_Evening:
		start  = SUNTIME_Noon;
		middle = SUNTIME_Evening;
		stop   = SUNTIME_Night;
		break;
	default:
		JUT_PANICLINE(205, "Illegal slot.\n");
		break;
	}

	Color4* startBgTop     = getBgColor(start, BGGRAD_Top);
	Color4* middleBgTop    = getBgColor(middle, BGGRAD_Top);
	Color4* stopBgTop      = getBgColor(stop, BGGRAD_Top);
	Color4* startBgBottom  = getBgColor(start, BGGRAD_Bottom);
	Color4* middleBgBottom = getBgColor(middle, BGGRAD_Bottom);
	Color4* stopBgBottom   = getBgColor(stop, BGGRAD_Bottom);
	Color4* startGlow      = getGlowColor(start);
	Color4* middleGlow     = getGlowColor(middle);
	Color4* stopGlow       = getGlowColor(stop);

	f32 ratio = gameSystem->mTimeMgr->mLightSettingRatio;
	f32 t     = ratio;

	if (ratio < 0.5f) {
		// first half of the slot: start -> middle
		t *= 2.0f;
		mActiveBgTopColor.r = INTERPOLATE_BETWEEN(startBgTop->r, middleBgTop->r, t);
		mActiveBgTopColor.g = INTERPOLATE_BETWEEN(startBgTop->g, middleBgTop->g, t);
		mActiveBgTopColor.b = INTERPOLATE_BETWEEN(startBgTop->b, middleBgTop->b, t);
		mActiveBgTopColor.a = INTERPOLATE_BETWEEN(startBgTop->a, middleBgTop->a, t);

		mActiveBgBottomColor.r = INTERPOLATE_BETWEEN(startBgBottom->r, middleBgBottom->r, t);
		mActiveBgBottomColor.g = INTERPOLATE_BETWEEN(startBgBottom->g, middleBgBottom->g, t);
		mActiveBgBottomColor.b = INTERPOLATE_BETWEEN(startBgBottom->b, middleBgBottom->b, t);
		mActiveBgBottomColor.a = INTERPOLATE_BETWEEN(startBgBottom->a, middleBgBottom->a, t);

		mActiveGlowColor.r = INTERPOLATE_BETWEEN(startGlow->r, middleGlow->r, t);
		mActiveGlowColor.g = INTERPOLATE_BETWEEN(startGlow->g, middleGlow->g, t);
		mActiveGlowColor.b = INTERPOLATE_BETWEEN(startGlow->b, middleGlow->b, t);
		mActiveGlowColor.a = INTERPOLATE_BETWEEN(startGlow->a, middleGlow->a, t);
	} else {
		// second half of the slot: middle -> stop
		t                   = 2.0f * (ratio - 0.5f);
		mActiveBgTopColor.r = INTERPOLATE_BETWEEN(middleBgTop->r, stopBgTop->r, t);
		mActiveBgTopColor.g = INTERPOLATE_BETWEEN(middleBgTop->g, stopBgTop->g, t);
		mActiveBgTopColor.b = INTERPOLATE_BETWEEN(middleBgTop->b, stopBgTop->b, t);
		mActiveBgTopColor.a = INTERPOLATE_BETWEEN(middleBgTop->a, stopBgTop->a, t);

		mActiveBgBottomColor.r = INTERPOLATE_BETWEEN(middleBgBottom->r, stopBgBottom->r, t);
		mActiveBgBottomColor.g = INTERPOLATE_BETWEEN(middleBgBottom->g, stopBgBottom->g, t);
		mActiveBgBottomColor.b = INTERPOLATE_BETWEEN(middleBgBottom->b, stopBgBottom->b, t);
		mActiveBgBottomColor.a = INTERPOLATE_BETWEEN(middleBgBottom->a, stopBgBottom->a, t);

		mActiveGlowColor.r = INTERPOLATE_BETWEEN(middleGlow->r, stopGlow->r, t);
		mActiveGlowColor.g = INTERPOLATE_BETWEEN(middleGlow->g, stopGlow->g, t);
		mActiveGlowColor.b = INTERPOLATE_BETWEEN(middleGlow->b, stopGlow->b, t);
		mActiveGlowColor.a = INTERPOLATE_BETWEEN(middleGlow->a, stopGlow->a, t);
	}
}

/**
 * @note Address: 0x801316D4
 * @note Size: 0x148
 */
PositionParms::PositionParms()
    : CNode(mEnemyName)
{
	sprintf(mEnemyName, "出現場所名"); // 'appearance location name'
}

/**
 * @note Address: 0x8013181C
 * @note Size: 0x50
 */
void PositionParms::read(Stream& stream)
{
	stream.readString(mEnemyName, sizeof(mEnemyName));
	mParms.read(stream);
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
PositionParmsList::PositionParmsList()
    : CNode("出現位置リスト")
{
	for (u32 i = 0; i < 10; i++) {
		add(&mParms[i]);
	}
}

/**
 * @note Address: 0x801318CC
 * @note Size: 0x68
 */
void PositionParmsList::read(Stream& stream)
{
	for (u32 i = 0; i < 10; i++) {
		mParms[i].read(stream);
	}
}

/**
 * @note Address: 0x80131934
 * @note Size: 0x20
 */
void CameraParms::read(Stream& stream)
{
	mParms.read(stream);
}

/**
 * @note Address: 0x80131954
 * @note Size: 0x130
 */
EnemyParms::EnemyParms()
    : CNode("")
{
}

/**
 * @note Address: 0x80131DA8
 * @note Size: 0x64
 */
void EnemyParms::read(Stream& stream)
{
	mGroupID = stream.readByte();
	mParms.read(stream);
	mCameraParms.read(stream);
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
EnemyModeParms::EnemyModeParms(PositionParmsList* list)
    : CNode("敵図鑑") // 'enemy encyclopedia'
{
	for (int i = 0; i < EnemyTypeID::EnemyID_COUNT; i++) {
		mEnemyParms[i].mName         = EnemyInfoFunc::getEnemyName(i, 0xFFFF);
		mEnemyParms[i].mPosParmsList = list;
		add(&mEnemyParms[i]);
	}
}

/**
 * @note Address: 0x80131E6C
 * @note Size: 0x84
 */
void EnemyModeParms::read(Stream& stream)
{
	int max = stream.readInt();

	for (u32 i = 0; i < max; i++) {
		mEnemyParms[i].read(stream);
	}
}

/**
 * @note Address: 0x80131EF0
 * @note Size: 0x148
 */
ItemParms::ItemParms()
    : CNode("設定") // 'setting'
{
	mIndex = -1;
}

/**
 * @note Address: 0x80132038
 * @note Size: 0x64
 */
void ItemParms::read(Stream& stream)
{
	mGroupID = stream.readByte();
	mParms.read(stream);
	mCameraParms.read(stream);
}

/**
 * @note Address: N/A
 * @note Size: 0x118
 */
ItemModeParms::ItemModeParms(PositionParmsList* list)
    : CNode("お宝図鑑") // 'treasure book'
{
	mItemCount = SingleGame::ZukanState::getMaxPelletID();
	mItemParms = new ItemParms[mItemCount];

	for (int i = 0; i < mItemCount; i++) {
		PelletConfig* config        = SingleGame::ZukanState::getCurrentPelletConfig(i);
		mItemParms[i].mIndex        = i;
		mItemParms[i].mName         = config->mParams.mName.mData;
		mItemParms[i].mPosParmsList = list;
		add(&mItemParms[i]);
	}
}

/**
 * @note Address: 0x801320FC
 * @note Size: 0x80
 */
void ItemModeParms::read(Stream& stream)
{
	for (int i = 0; i < mItemCount; i++) {
		mItemParms[i].read(stream);
	}
}

/**
 * @note Address: 0x8013217C
 * @note Size: 0x29C
 */
Parms::Parms()
    : CNode("図鑑設定") // 'picture book setting'
    , mEnemyParms(&mPosParmsList)
    , mItemParms(&mPosParmsList)
{
	add(&mColorSetting);
	add(&mPosParmsList);
	add(&mEnemyParms);
	add(&mItemParms);
}

/**
 * @note Address: 0x801325D0
 * @note Size: 0x90
 */
void Parms::read(Stream& stream)
{
	mColorSetting.read(stream);
	mPosParmsList.read(stream);
	mEnemyParms.read(stream);
	mItemParms.read(stream);
}

/**
 * @note Address: 0x80132660
 * @note Size: 0xD0
 */
void Parms::loadFile(JKRArchive* archive)
{
	P2ASSERTLINE(734, archive);
	void* resource = archive->getResource("setting.ini");
	P2ASSERTLINE(736, resource);
	RamStream stream(resource, -1);
	stream.setMode(STREAM_MODE_TEXT, 1);
	read(stream);
}

// these are from Parms::loadFile(const char* fileName), which is stripped:
static const char unusedLoadFileStr1[] = "load error.[%s]\n";
static const char unusedLoadFileStr2[] = "no fileName";

} // namespace IllustratedBook
} // namespace Game
