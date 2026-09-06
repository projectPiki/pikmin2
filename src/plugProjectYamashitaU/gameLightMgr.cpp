#include "trig.h"
#include "Game/GameLight.h"
#include "Game/shadowMgr.h"
#include "Game/CameraMgr.h"
#include "Game/TimeMgr.h"
#include "Game/GameSystem.h"
#include "Game/gamePlayData.h"
#include "Viewport.h"
#include "nans.h"

namespace Game {

template <class T>
T complement(T start, T end, T ratio);

static const int unusedGameLightArray[] = { 0, 0, 0 };
static const char unusedGameLightName[] = "gameLightMgr";

/**
 * @note Address: N/A
 * @note Size: 0x1FC
 */
void calcLightColor(Color4* lightColor, Color4& destColor, Color4& srcColor, f32 ratio)
{
	lightColor->r = ROUND_F32_TO_U8(INTERPOLATE_BETWEEN(srcColor.r, destColor.r, ratio));

	lightColor->g = ROUND_F32_TO_U8(INTERPOLATE_BETWEEN(srcColor.g, destColor.g, ratio));

	lightColor->b = ROUND_F32_TO_U8(INTERPOLATE_BETWEEN(srcColor.b, destColor.b, ratio));

	lightColor->a = ROUND_F32_TO_U8(INTERPOLATE_BETWEEN(srcColor.a, destColor.a, ratio));
}

namespace {
const char* GameLightMgrSettinglabel[SUNTIME_Count] = {
	"夜",     // 'night'
	"朝",     // 'morning'
	"昼",     // 'noon'
	"夕",     // 'evening'
	"デモ中", // 'in demo'
};
} // namespace

/**
 * @note Address: 0x8011CCE0
 * @note Size: 0x654
 */
GameLightTimeSetting::GameLightTimeSetting()
    : CNode("")
{
}

/**
 * @note Address: N/A
 * @note Size: 0xC0
 */
void GameLightTimeSetting::read(Stream& stream)
{
	mMainLight.read(stream);
	mSubLight.read(stream);
	mSpecLight.read(stream);
	mAmbientLight.read(stream);
	mFog.read(stream);
	mShadow.read(stream);
}

/**
 * @note Address: N/A
 * @note Size: 0x1A8
 */
GameLightSunSetting::GameLightSunSetting(char* name)
    : CNode(name)
{
	for (int i = 0; i < SUNTIME_Count; i++) {
		mLightTimes[i].mName = GameLightMgrSettinglabel[i];
		add(&mLightTimes[i]);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
void GameLightSunSetting::read(Stream& stream)
{
	mMoveParms.read(stream);
	for (int i = 0; i < SUNTIME_Count; i++) {
		mLightTimes[i].read(stream);
	}
}

/**
 * @note Address: 0x8011D5EC
 * @note Size: 0x738
 */
GameLightSpotSetting::GameLightSpotSetting(char* name)
    : CNode(name)
{
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
void GameLightSpotSetting::read(Stream& stream)
{
	mMoveParms.read(stream);
	mMainLight.read(stream);
	mSubLight.read(stream);
	mSpecLight.read(stream);
	mAmbientLight.read(stream);
	mFog.read(stream);
	mShadow.read(stream);
}

/**
 * @note Address: 0x8011DD68
 * @note Size: 0x1E0
 */
GameLightMgrSetting::GameLightMgrSetting()
    : CNode("設定") // 'setting'
    , mIsCave(false)
    , mSunLight("太陽タイプ設定")
    , mStellarSpotLight("懐中電灯アリ") // 'yes flashlight'
    , mRegularSpotLight("懐中電灯ナシ") // 'no flashlight'
{
	updateNode();
}

/**
 * @note Address: 0x8011E024
 * @note Size: 0x74
 */
void GameLightMgrSetting::updateNode()
{
	mSunLight.del();
	mStellarSpotLight.del();
	mRegularSpotLight.del();

	if (!mIsCave) {
		add(&mSunLight);
	} else {
		add(&mStellarSpotLight);
		add(&mRegularSpotLight);
	}
}

/**
 * @note Address: 0x8011E098
 * @note Size: 0x2F0
 */
void GameLightMgrSetting::read(Stream& stream)
{
	ID32 version;
	version.read(stream);

	if (version != '0001') {
		readOldVersion(version, stream);

	} else {
		mIsCave = stream.readByte();
		if (!mIsCave) {
			mSunLight.read(stream);
		} else {
			mStellarSpotLight.read(stream);
			mRegularSpotLight.read(stream);
		}
	}

	updateNode();
}

/**
 * @note Address: 0x8011E388
 * @note Size: 0x1E0
 */
void GameLightMgrSetting::readOldVersion(ID32 version, Stream& stream)
{
	switch (version.getID()) {
	case '0000':
		mIsCave = stream.readByte();
		if (!mIsCave) {
			mSunLight.read(stream);
		} else {
			mStellarSpotLight.read(stream);
		}
		break;

	default:
		JUT_PANICLINE(427, "Unknown version [%08x]", version.getID());
	}
}

void GameLightEventNode::start(GameLightEventArg& eventArg)
{
	mEventFlag     = eventArg.mEventFlag.typeView;
	mLightTypeFlag = eventArg.mLightTypeFlag;

	mRedScale   = eventArg.mRedScale;
	mGreenScale = eventArg.mGreenScale;
	mBlueScale  = eventArg.mBlueScale;

	mGrowTime = eventArg.mGrowTime;
	mFadeTime = eventArg.mFadeTime;

	mNearZ = eventArg.mNearZ;
	mFarZ  = eventArg.mFarZ;

	mPosition = eventArg.mPosition;
	mRange    = eventArg.mRange;

	mStateTimer = 0.0f;
	mState      = LIGHTSTATE_Grow;
}

/**
 * @note Address: 0x8011E568
 * @note Size: 0x1F4
 */
bool GameLightEventNode::update(GameLightMgr* lightMgr)
{
	bool result = false;

	switch (mState) {
	case LIGHTSTATE_Grow:
		mStateTimer += sys->mDeltaTime;
		if (mStateTimer > mGrowTime) {
			mStateTimer = mGrowTime;
			mColorRatio = 1.0f;

		} else {
			mColorRatio = mStateTimer / mGrowTime;
		}

		if (mColorRatio == 1.0f) {
			mStateTimer = 0.0f;
			mState      = LIGHTSTATE_Steady;
		}

		updateCommon(lightMgr, true);
		break;

	case LIGHTSTATE_Steady:
		mStateTimer += sys->mDeltaTime;
		if (mStateTimer > 4.0f) {
			mStateTimer = 0.0f;
		}

		mColorRatio = 0.9f + 0.1f * pikmin2_cosf(TAU * mStateTimer / 4);

		if (isEvent(LIGHTEVENT_Unk1)) {
			updateCommon(lightMgr, true);
			mPeakRatio  = mColorRatio;
			mStateTimer = 0.0f;
			mState      = LIGHTSTATE_Fade;

		} else {
			updateCommon(lightMgr, true);
		}
		break;

	case LIGHTSTATE_Fade:
		mStateTimer += sys->mDeltaTime;
		if (mStateTimer > mFadeTime) {
			mStateTimer = mFadeTime;
			mColorRatio = 0.0f;

		} else {
			mColorRatio = mPeakRatio * (1.0f - (mStateTimer / mFadeTime));
		}

		updateCommon(lightMgr, false);

		if (mColorRatio == 0.0f) {
			mState = LIGHTSTATE_Inactive;
			result = true;
		}
		break;
	}

	return result;
}

/**
 * @note Address: 0x8011E75C
 * @note Size: 0x37C
 */
void GameLightEventNode::updateCommon(GameLightMgr* lightMgr, bool check)
{
	f32 val = -1.0f;
	if (check) {
		if (isEvent(LIGHTEVENT_Unk4) && mPosition && mRange > 0.0f) {
			PlayCamera* camera = lightMgr->mCamera;
			if (camera) {
				Vector3f cameraPos = camera->getPosition();

				val = 1.0f - (pikmin2_sqrtf(sqrDistance(*mPosition, cameraPos)) / mRange);
				if (val < 0.0f) {
					val = 0.0f;
				}
			}
		}

		mColorRatio = 0.5f * (1.0f - pikmin2_cosf(PI * mColorRatio));

		if (val >= 0.0f) {
			f32 val2 = 0.0f;
			if (val >= 0.0f) {
				val2 = val;
			}
			mColorRatio *= val2;
		}
	}

	Color4 color;

	if (isLightType(LIGHTTYPE_Main)) {
		color = lightMgr->mMainLight->mColor;
		calcColor(&color);
		lightMgr->mMainLight->mColor.set(color);
	}

	if (isLightType(LIGHTTYPE_Sub)) {
		color = lightMgr->mSubLight->mColor;
		calcColor(&color);
		lightMgr->mSubLight->mColor.set(color);
	}

	if (isLightType(LIGHTTYPE_Specular)) {
		color = lightMgr->mSpecLight->mColor;
		calcColor(&color);
		lightMgr->mSpecLight->mColor.set(color);
	}

	if (isLightType(LIGHTTYPE_Ambient)) {
		color = lightMgr->mAmbientLight.mColor;
		calcColor(&color);
		lightMgr->mAmbientLight.mColor = color;
	}

	if (isLightType(LIGHTTYPE_Fog)) {
		lightMgr->mFogMgr->getColor(color);
		calcColor(&color);
		lightMgr->mFogMgr->setColor(color);

		lightMgr->mFogMgr->mNearZ = complement<f32>(lightMgr->mFogMgr->mNearZ, mNearZ, mColorRatio);
		lightMgr->mFogMgr->mFarZ  = complement<f32>(lightMgr->mFogMgr->mFarZ, mFarZ, mColorRatio);
	}

	if (isLightType(LIGHTTYPE_Shadow)) {
		color = lightMgr->mShadowColor;
		calcColor(&color);
		lightMgr->mShadowColor = color;
	}
}

/**
 * @note Address: 0x8011EAD8
 * @note Size: 0x464
 */
void GameLightEventNode::calcColor(Color4* color)
{
	Color4 tempColor;
	if (isEvent(LIGHTEVENT_Unk2)) {
		f32 redF   = mRedScale * color->r;
		f32 greenF = mGreenScale * color->g;
		f32 blueF  = mBlueScale * color->b;

		tempColor.r = (int)(ROUND_F32_TO_U8(CLAMP_VALUE_ABOVE(redF, 255.0f)));
		tempColor.g = (int)(ROUND_F32_TO_U8(CLAMP_VALUE_ABOVE(greenF, 255.0f)));
		tempColor.b = (int)(ROUND_F32_TO_U8(CLAMP_VALUE_ABOVE(blueF, 255.0f)));

	} else {
		tempColor.r = (int)(ROUND_F32_TO_U8(mRedScale));
		tempColor.g = (int)(ROUND_F32_TO_U8(mGreenScale));
		tempColor.b = (int)(ROUND_F32_TO_U8(mBlueScale));
	}

	calcLightColor(color, tempColor, *color, mColorRatio);
}

/**
 * @note Address: 0x8011EF3C
 * @note Size: 0x310
 */
GameLightMgr::GameLightMgr(char* name)
    : LightMgr(name)
    , mTimeMgr(nullptr)
    , mCamera(nullptr)
    , mSunColorRatio(0.0f)
    , mShadowColor(0, 0, 0, 160)
{
	mViewPosition[0] = Vector3f::zero;
	mViewPosition[1] = Vector3f::zero;

	start();

	// setup main light
	mMainLight             = new LightObj("メインライト", GX_LIGHT0, TYPE_Spot, JUtility::TColor(255, 255, 255, 255)); // 'main light'
	mMainLight->mSpotFn    = GX_SP_OFF;
	mMainLight->mElevation = Vector3f(0.0f, -1.0f, 0.0f);
	registLightObj(mMainLight);

	// setup sub light
	mSubLight             = new LightObj("サブライト", GX_LIGHT1, TYPE_Spot, JUtility::TColor(128, 64, 64, 255)); // 'sub light'
	mSubLight->mSpotFn    = GX_SP_OFF;
	mSubLight->mElevation = Vector3f(0.0f, 1.0f, 0.0f);
	registLightObj(mSubLight);

	// setup specular light
	mSpecLight          = new LightObj("スペキュラ-ライト", GX_LIGHT7, TYPE_Spec, JUtility::TColor(255, 255, 255, 255)); // 'specular light'
	mSpecLight->mKScale = 40.0f;
	registLightObj(mSpecLight);

	// setup fog
	mFogMgr        = new FogMgr;
	mFogMgr->mType = GX_FOG_LINEAR;
	add(mFogMgr);

	// setup shadow
	if (shadowMgr) {
		shadowMgr->setShadowColor(&mShadowColor);
	}

	add(&mSettings);

	// setup event nodes
	mEventNodes = new GameLightEventNode[10];
	mRootActiveNodes.clearRelations();
	mRootInactiveNodes.clearRelations();
	for (u32 i = 0; i < 10; i++) {
		mRootInactiveNodes.add(&mEventNodes[i]);
	}
}

/**
 * @note Address: 0x8011F4B8
 * @note Size: 0x2C
 */
void GameLightMgr::start()
{
	mFlags.clear();
	setFlag(GAMELIGHT_Unk1);
	mSunColorRatio     = 0.0f;
	mStellarIncrement  = 0.0f;
	mStellarColorRatio = 0.0f;
}

/**
 * @note Address: 0x8011F4E4
 * @note Size: 0xBC
 */
GameLightEventNode* GameLightMgr::createEventLight(GameLightEventArg& eventArg)
{
	GameLightEventNode* eventNode = static_cast<GameLightEventNode*>(mRootInactiveNodes.mChild);

	if (eventNode) {
		eventNode->start(eventArg);
		eventNode->del();
		mRootActiveNodes.add(eventNode);
	}

	return eventNode;
}

/**
 * @note Address: 0x8011F5A0
 * @note Size: 0x48
 */
void GameLightMgr::loadParm(Stream& stream)
{
	stream.mMode = STREAM_MODE_TEXT;
	if (stream.mMode == STREAM_MODE_TEXT) {
		stream.mTabCount = 0;
	}

	mSettings.read(stream);
}

/**
 * @note Address: 0x8011F5E8
 * @note Size: 0x1AE8
 */
void GameLightMgr::calcSetting(GameLightTimeSetting* time1, GameLightTimeSetting* time2, GameLightTimeSetting* time3)
{
	Color4 lightColor;
	// 0-0.5 = first 'half' of setting, so use color 1 -> color 2
	if (mTimeMgr->mLightSettingRatio < 0.5f) {
		mSunColorRatio = 2.0f * mTimeMgr->mLightSettingRatio;

		// Main light
		Color4 color1main;
		Color4 color2main;

		time1->mMainLight.getColor(color1main);
		time2->mMainLight.getColor(color2main);

		calcLightColor(&lightColor, color2main, color1main, mSunColorRatio);
		mMainLight->setColor(lightColor);

		// Sub light
		Color4 color1sub;
		Color4 color2sub;

		time1->mSubLight.getColor(color1sub);
		time2->mSubLight.getColor(color2sub);

		calcLightColor(&lightColor, color2sub, color1sub, mSunColorRatio);
		mSubLight->setColor(lightColor);

		// Specular light
		Color4 color1spec;
		Color4 color2spec;

		time1->mSpecLight.getColor(color1spec);
		time2->mSpecLight.getColor(color2spec);

		calcLightColor(&lightColor, color2spec, color1spec, mSunColorRatio);
		mSpecLight->setColor(lightColor);

		// Ambient light
		Color4 color1amb;
		Color4 color2amb;

		time1->mAmbientLight.getColor(color1amb);
		time2->mAmbientLight.getColor(color2amb);

		calcLightColor(&lightColor, color2amb, color1amb, mSunColorRatio);
		mAmbientLight.mColor = lightColor;

		// Fog
		Color4 color1fog;
		Color4 color2fog;

		time1->mFog.getColor(color1fog);
		time2->mFog.getColor(color2fog);

		calcLightColor(&lightColor, color2fog, color1fog, mSunColorRatio);

		mFogMgr->setColor(lightColor);

		mFogMgr->mNearZ = INTERPOLATE_BETWEEN(time1->mFog.mFogParms.mStartZ.mValue, time2->mFog.mFogParms.mStartZ.mValue, mSunColorRatio);
		mFogMgr->mFarZ  = INTERPOLATE_BETWEEN(time1->mFog.mFogParms.mEndZ.mValue, time2->mFog.mFogParms.mEndZ.mValue, mSunColorRatio);

		// Shadow
		Color4 color1shadow;
		Color4 color2shadow;

		time1->mShadow.getColor(color1shadow);
		time2->mShadow.getColor(color2shadow);

		calcLightColor(&mShadowColor, color2shadow, color1shadow, mSunColorRatio);

	} else {
		// second 'half' of setting, so use color 2 -> color 3
		mSunColorRatio = 2.0f * (mTimeMgr->mLightSettingRatio - 0.5f);

		// Main light
		Color4 color1main;
		Color4 color2main(0, 0, 0, 255);

		time2->mMainLight.getColor(color1main);
		time3->mMainLight.getColor(color2main);

		calcLightColor(&lightColor, color2main, color1main, mSunColorRatio);
		mMainLight->setColor(lightColor);

		// Sub light
		Color4 color1sub;
		Color4 color2sub;

		time2->mSubLight.getColor(color1sub);
		time3->mSubLight.getColor(color2sub);

		calcLightColor(&lightColor, color2sub, color1sub, mSunColorRatio);
		mSubLight->setColor(lightColor);

		// Specular light
		Color4 color1spec;
		Color4 color2spec;

		time2->mSpecLight.getColor(color1spec);
		time3->mSpecLight.getColor(color2spec);

		calcLightColor(&lightColor, color2spec, color1spec, mSunColorRatio);
		mSpecLight->setColor(lightColor);

		// Ambient light
		Color4 color1amb;
		Color4 color2amb;

		time2->mAmbientLight.getColor(color1amb);
		time3->mAmbientLight.getColor(color2amb);

		calcLightColor(&lightColor, color2amb, color1amb, mSunColorRatio);
		mAmbientLight.mColor = lightColor;

		// Fog
		Color4 color1fog;
		Color4 color2fog;

		time2->mFog.getColor(color1fog);
		time3->mFog.getColor(color2fog);

		calcLightColor(&lightColor, color2fog, color1fog, mSunColorRatio);

		mFogMgr->setColor(lightColor);

		mFogMgr->mNearZ = INTERPOLATE_BETWEEN(time2->mFog.mFogParms.mStartZ.mValue, time3->mFog.mFogParms.mStartZ.mValue, mSunColorRatio);
		mFogMgr->mFarZ  = INTERPOLATE_BETWEEN(time2->mFog.mFogParms.mEndZ.mValue, time3->mFog.mFogParms.mEndZ.mValue, mSunColorRatio);

		// Shadow
		Color4 color1shadow;
		Color4 color2shadow;

		time2->mShadow.getColor(color1shadow);
		time3->mShadow.getColor(color2shadow);

		calcLightColor(&mShadowColor, color2shadow, color1shadow, mSunColorRatio);
	}
}

/**
 * @note Address: 0x801210D0
 * @note Size: 0x1F0
 */
void GameLightMgr::updateSunType()
{
	if (mTimeMgr) {
		switch (mTimeMgr->mLightSetting) {
		case SUNTIME_Night:
			// night -> night -> night, linearly (lol)
			calcSetting(&mSettings.mSunLight.mLightTimes[SUNTIME_Night], &mSettings.mSunLight.mLightTimes[SUNTIME_Night],
			            &mSettings.mSunLight.mLightTimes[SUNTIME_Night]);
			break;

		case SUNTIME_Morning:
			// night -> morning (over 1.75 hrs), morning -> noon (over 1 hr)
			calcSetting(&mSettings.mSunLight.mLightTimes[SUNTIME_Night], &mSettings.mSunLight.mLightTimes[SUNTIME_Morning],
			            &mSettings.mSunLight.mLightTimes[SUNTIME_Noon]);
			break;

		case SUNTIME_Noon:
			// if we're past in-game 'noon' (1pm lol) and certain flag isn't set, create event light
			if (mTimeMgr->mCurrentTimeOfDay > 13.0f && !isFlag(GAMELIGHT_Unk2)) {
				GameLightEventArg eventArg;
				eventArg.init();
				createEventLight(eventArg);
				setFlag(GAMELIGHT_Unk2);
			}

			// noon -> noon -> noon, linearly (lol)
			calcSetting(&mSettings.mSunLight.mLightTimes[SUNTIME_Noon], &mSettings.mSunLight.mLightTimes[SUNTIME_Noon],
			            &mSettings.mSunLight.mLightTimes[SUNTIME_Noon]);
			break;

		case SUNTIME_Evening:
			// noon -> evening (over 0.5 hrs), evening -> evening (3 hrs), evening -> night (over 0.5 hrs)
			calcSetting(&mSettings.mSunLight.mLightTimes[SUNTIME_Noon], &mSettings.mSunLight.mLightTimes[SUNTIME_Evening],
			            &mSettings.mSunLight.mLightTimes[SUNTIME_Night]);
			break;

		case SUNTIME_Demo:
			// demo -> demo -> demo
			calcSetting(&mSettings.mSunLight.mLightTimes[SUNTIME_Demo], &mSettings.mSunLight.mLightTimes[SUNTIME_Demo],
			            &mSettings.mSunLight.mLightTimes[SUNTIME_Demo]);
			break;
		}
	}}

/**
 * @note Address: 0x801212C0
 * @note Size: 0xC00
 */
void GameLightMgr::updateSpotType()
{
	Color4 lightColor;

	if (playData->mOlimarData->hasItem(OlimarData::ODII_StellarOrb)) {
		mStellarIncrement += 0.01f;
		if (mStellarIncrement > 1.0f) {
			mStellarIncrement = 1.0f;
		}

	} else {
		mStellarIncrement -= 0.01f;
		if (mStellarIncrement < 0.0f) {
			mStellarIncrement = 0.0f;
		}
	}

	mStellarColorRatio = 0.5f * (1.0f - pikmin2_cosf(PI * mStellarIncrement));

	// Main light
	Color4 color1main;
	Color4 color2main;

	mSettings.mRegularSpotLight.mMainLight.getColor(color1main);
	mSettings.mStellarSpotLight.mMainLight.getColor(color2main);

	calcLightColor(&lightColor, color2main, color1main, mStellarColorRatio);
	mMainLight->setColor(lightColor);

	mMainLight->mCutoffAngle = complement<f32>(mSettings.mRegularSpotLight.mMainLight.mSpotParms.mCutOff.mValue,
	                                           mSettings.mStellarSpotLight.mMainLight.mSpotParms.mCutOff.mValue, mStellarColorRatio);

	// Sub light
	Color4 color1sub;
	Color4 color2sub;

	mSettings.mRegularSpotLight.mSubLight.getColor(color1sub);
	mSettings.mStellarSpotLight.mSubLight.getColor(color2sub);

	calcLightColor(&lightColor, color2sub, color1sub, mStellarColorRatio);
	mSubLight->setColor(lightColor);

	// Sub light
	Color4 color1spec;
	Color4 color2spec;

	mSettings.mRegularSpotLight.mSpecLight.getColor(color1spec);
	mSettings.mStellarSpotLight.mSpecLight.getColor(color2spec);

	calcLightColor(&lightColor, color2spec, color1spec, mStellarColorRatio);
	mSpecLight->setColor(lightColor);

	// Ambient light
	Color4 color1amb;
	Color4 color2amb;

	mSettings.mRegularSpotLight.mAmbientLight.getColor(color1amb);
	mSettings.mStellarSpotLight.mAmbientLight.getColor(color2amb);

	calcLightColor(&lightColor, color2amb, color1amb, mStellarColorRatio);
	mAmbientLight.mColor = lightColor;

	// Fog
	Color4 color1fog;
	Color4 color2fog;

	mSettings.mRegularSpotLight.mFog.getColor(color1fog);
	mSettings.mStellarSpotLight.mFog.getColor(color2fog);

	calcLightColor(&lightColor, color2fog, color1fog, mStellarColorRatio);

	mFogMgr->setColor(lightColor);

	mFogMgr->mNearZ = complement<f32>(mSettings.mRegularSpotLight.mFog.mFogParms.mStartZ.mValue,
	                                  mSettings.mStellarSpotLight.mFog.mFogParms.mStartZ.mValue, mStellarColorRatio);
	mFogMgr->mFarZ  = complement<f32>(mSettings.mRegularSpotLight.mFog.mFogParms.mEndZ.mValue,
	                                  mSettings.mStellarSpotLight.mFog.mFogParms.mEndZ.mValue, mStellarColorRatio);

	// Shadow
	mSettings.mStellarSpotLight.mShadow.getColor(mShadowColor);
}

/**
 * @note Address: 0x80121EC0
 * @note Size: 0x94
 */
void GameLightMgr::update()
{
	if (!mSettings.mIsCave) {
		updateSunType();
	} else {
		updateSpotType();
	}

	GameLightEventNode* eventNode = static_cast<GameLightEventNode*>(mRootActiveNodes.mChild);
	while (eventNode) {
		GameLightEventNode* nextNode = static_cast<GameLightEventNode*>(eventNode->mNext);
		eventNode->update(this);

		if (eventNode->mState == GameLightEventNode::LIGHTSTATE_Inactive) {
			eventNode->del();
			mRootInactiveNodes.add(eventNode);
		}
		eventNode = nextNode;
	}
}

/**
 * @note Address: 0x80121F54
 * @note Size: 0x54
 */
void GameLightMgr::set(Graphics& gfx)
{
	updatePosition(gfx.mCurrentViewport);
	LightMgr::set(gfx);
	mFogMgr->set(gfx);
}

static const char unusedIniPath[] = "/user/Yamashita/testResource/light/light.ini";

/**
 * @note Address: 0x80121FA8
 * @note Size: 0x2C0
 */
void GameLightMgr::updatePosition(Viewport* viewport)
{
	Vector3f lightPos;
	if (!mSettings.mIsCave) {
		mMainLight->mSpotFn = GX_SP_OFF;
		mSubLight->mSpotFn  = GX_SP_OFF;

		f32 maxAngle = mSettings.mSunLight.mMoveParms.mSunsetAngle() - mSettings.mSunLight.mMoveParms.mSunriseAngle();
		f32 angle    = (180.0f - (maxAngle * mTimeMgr->getSunGaugeRatio() + mSettings.mSunLight.mMoveParms.mSunriseAngle()));
		angle        = PI * (DEG2RAD * angle);

		lightPos.x = pikmin2_cosf(angle) * mSettings.mSunLight.mMoveParms.mDistance();
		lightPos.y = pikmin2_sinf(angle) * mSettings.mSunLight.mMoveParms.mDistance();
		lightPos.z = 0.0f;

		if (gameSystem->isZukanMode()) {
			Mtx mtx;
			PSMTXRotRad(mtx, 'x', 0.872664630413f); // 50 degrees in radians
			PSMTXMultVec(mtx, (Vec*)&lightPos, (Vec*)&lightPos);
		}

		mMainLight->mPosition = lightPos;
		mSpecLight->mPosition = lightPos;
		lightPos *= -1.0f;
		mSubLight->mPosition = lightPos;

	} else {
		mMainLight->mSpotFn      = GX_SP_COS2;
		mMainLight->mCutoffAngle = complement<f32>(mSettings.mRegularSpotLight.mMainLight.mSpotParms.mCutOff.mValue,
		                                           mSettings.mStellarSpotLight.mMainLight.mSpotParms.mCutOff.mValue, mStellarColorRatio);
		mSubLight->mSpotFn       = GX_SP_COS2;
		mSubLight->mCutoffAngle  = complement<f32>(mSettings.mRegularSpotLight.mSubLight.mSpotParms.mCutOff.mValue,
		                                           mSettings.mStellarSpotLight.mSubLight.mSpotParms.mCutOff.mValue, mStellarColorRatio);

		int viewportID = viewport->mVpId;
		if (viewportID < 0 || viewportID > 1) {
			JUT_PANICLINE(1287, "illegal vp-id (%d)\n", viewportID);
		}

		f32 heightOffset = complement<f32>(mSettings.mRegularSpotLight.mMoveParms.mDistance.mValue,
		                                   mSettings.mStellarSpotLight.mMoveParms.mDistance.mValue, mStellarColorRatio);

		getViewPos(lightPos, viewportID);
		lightPos.y += heightOffset;

		mMainLight->mPosition = lightPos;
		mSpecLight->mPosition = lightPos;

		lightPos.y -= 2.0f * heightOffset;
		mSubLight->mPosition = lightPos;

		mViewPosition[viewportID] = viewport->mCamera->getLookAtPosition();
	}
}

/**
 * @note Address: 0x8012241C
 * @note Size: 0xC
 */
template <class T>
T complement(T start, T end, T ratio)
{
	return ratio * (end - start) + start;
}

} // namespace Game
