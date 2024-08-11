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
	mEventFlag     = eventArg.mEventFlag;
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
		Color4 color2main;

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
	/*
	.loc_0x0:
	  stwu      r1, -0x320(r1)
	  mflr      r0
	  lfs       f6, -0x6770(r2)
	  stw       r0, 0x324(r1)
	  stw       r31, 0x31C(r1)
	  mr        r31, r6
	  stw       r30, 0x318(r1)
	  mr        r30, r5
	  stw       r29, 0x314(r1)
	  mr        r29, r4
	  stw       r28, 0x310(r1)
	  mr        r28, r3
	  lwz       r3, 0x2338(r3)
	  lfs       f1, 0x214(r3)
	  fcmpo     cr0, f1, f6
	  bge-      .loc_0xD84
	  lfs       f0, -0x66C8(r2)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  fmuls     f0, f0, f1
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x18(r1)
	  lfs       f1, -0x676C(r2)
	  stfs      f0, 0x2340(r28)
	  lwz       r4, 0x3C(r29)
	  lwz       r3, 0x3C(r30)
	  rlwinm    r6,r4,0,24,31
	  lwz       r5, 0x64(r29)
	  rlwinm    r3,r3,0,24,31
	  stw       r6, 0x1C(r1)
	  lwz       r4, 0x8C(r29)
	  rlwinm    r5,r5,0,24,31
	  stw       r3, 0x14(r1)
	  lfd       f0, 0x18(r1)
	  rlwinm    r7,r4,0,24,31
	  lfd       f2, 0x10(r1)
	  stw       r6, 0x24(r1)
	  fsubs     f3, f0, f5
	  fsubs     f4, f2, f5
	  lwz       r3, 0xB4(r29)
	  stw       r0, 0x20(r1)
	  lfs       f0, 0x2340(r28)
	  rlwinm    r6,r3,0,24,31
	  lfd       f2, 0x20(r1)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x64(r30)
	  fsubs     f2, f2, f5
	  lwz       r3, 0x8C(r30)
	  lwz       r0, 0xB4(r30)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xE8
	  fadds     f1, f6, f2
	  b         .loc_0xEC

	.loc_0xE8:
	  fsubs     f1, f2, f6

	.loc_0xEC:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x34(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x30(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x30(r1)
	  stw       r5, 0x3C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x38(r1)
	  lfd       f2, 0x38(r1)
	  stw       r5, 0x44(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x40(r1)
	  lfd       f2, 0x40(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x28(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x158
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x160

	.loc_0x158:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x160:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x54(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x50(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x50(r1)
	  stw       r7, 0x5C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x58(r1)
	  lfd       f2, 0x58(r1)
	  stw       r7, 0x64(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x60(r1)
	  lfd       f2, 0x60(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x48(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x4C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1CC
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1D4

	.loc_0x1CC:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1D4:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x74(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x70(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x70(r1)
	  stw       r6, 0x7C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x78(r1)
	  lfd       f2, 0x78(r1)
	  stw       r6, 0x84(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x80(r1)
	  lfd       f2, 0x80(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x68(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x6C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x240
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x248

	.loc_0x240:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x248:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r7, 0xA(r1)
	  lbz       r6, 0x9(r1)
	  stfd      f0, 0x88(r1)
	  lbz       r3, 0x8(r1)
	  lwz       r4, 0x8C(r1)
	  stw       r0, 0x90(r1)
	  lfd       f5, -0x6768(r2)
	  stb       r4, 0xB(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r5, 0x50(r28)
	  stw       r0, 0x98(r1)
	  stb       r3, 0x34(r5)
	  stb       r6, 0x35(r5)
	  stb       r7, 0x36(r5)
	  stb       r4, 0x37(r5)
	  lwz       r4, 0xF0(r29)
	  lwz       r3, 0xF0(r30)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0xA0(r1)
	  rlwinm    r3,r3,0,24,31
	  lwz       r4, 0x140(r29)
	  stw       r3, 0x94(r1)
	  lwz       r5, 0x118(r29)
	  rlwinm    r7,r4,0,24,31
	  stw       r6, 0x9C(r1)
	  lfd       f2, 0x90(r1)
	  rlwinm    r5,r5,0,24,31
	  lfd       f0, 0x98(r1)
	  stw       r6, 0xA4(r1)
	  fsubs     f4, f2, f5
	  fsubs     f3, f0, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0xA0(r1)
	  lwz       r0, 0x168(r29)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x118(r30)
	  fsubs     f2, f2, f5
	  rlwinm    r6,r0,0,24,31
	  lwz       r3, 0x140(r30)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  lwz       r0, 0x168(r30)
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x318
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x320

	.loc_0x318:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x320:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0xB4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0xB0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0xB0(r1)
	  stw       r5, 0xBC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0xB8(r1)
	  lfd       f2, 0xB8(r1)
	  stw       r5, 0xC4(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0xC0(r1)
	  lfd       f2, 0xC0(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0xA8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0xAC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x38C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x394

	.loc_0x38C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x394:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0xD4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0xD0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0xD0(r1)
	  stw       r7, 0xDC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0xD8(r1)
	  lfd       f2, 0xD8(r1)
	  stw       r7, 0xE4(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0xE0(r1)
	  lfd       f2, 0xE0(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0xC8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0xCC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x400
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x408

	.loc_0x400:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x408:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0xF4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0xF0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0xF0(r1)
	  stw       r6, 0xFC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0xF8(r1)
	  lfd       f2, 0xF8(r1)
	  stw       r6, 0x104(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x100(r1)
	  lfd       f2, 0x100(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0xE8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0xEC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x474
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x47C

	.loc_0x474:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x47C:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r7, 0xA(r1)
	  lbz       r6, 0x9(r1)
	  stfd      f0, 0x108(r1)
	  lbz       r3, 0x8(r1)
	  lwz       r4, 0x10C(r1)
	  stw       r0, 0x110(r1)
	  lfd       f5, -0x6768(r2)
	  stb       r4, 0xB(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r5, 0x54(r28)
	  stw       r0, 0x118(r1)
	  stb       r3, 0x34(r5)
	  stb       r6, 0x35(r5)
	  stb       r7, 0x36(r5)
	  stb       r4, 0x37(r5)
	  lwz       r4, 0x1A4(r29)
	  lwz       r3, 0x1A4(r30)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x120(r1)
	  rlwinm    r3,r3,0,24,31
	  lwz       r4, 0x1F4(r29)
	  stw       r3, 0x114(r1)
	  lwz       r5, 0x1CC(r29)
	  rlwinm    r7,r4,0,24,31
	  stw       r6, 0x11C(r1)
	  lfd       f2, 0x110(r1)
	  rlwinm    r5,r5,0,24,31
	  lfd       f0, 0x118(r1)
	  stw       r6, 0x124(r1)
	  fsubs     f4, f2, f5
	  fsubs     f3, f0, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x120(r1)
	  lwz       r0, 0x21C(r29)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x1CC(r30)
	  fsubs     f2, f2, f5
	  rlwinm    r6,r0,0,24,31
	  lwz       r3, 0x1F4(r30)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  lwz       r0, 0x21C(r30)
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x54C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x554

	.loc_0x54C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x554:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x134(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x130(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x130(r1)
	  stw       r5, 0x13C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x138(r1)
	  lfd       f2, 0x138(r1)
	  stw       r5, 0x144(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x140(r1)
	  lfd       f2, 0x140(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x128(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x12C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x5C0
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x5C8

	.loc_0x5C0:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x5C8:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x154(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x150(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x150(r1)
	  stw       r7, 0x15C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x158(r1)
	  lfd       f2, 0x158(r1)
	  stw       r7, 0x164(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x160(r1)
	  lfd       f2, 0x160(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x148(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x14C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x634
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x63C

	.loc_0x634:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x63C:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x174(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x170(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x170(r1)
	  stw       r6, 0x17C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x178(r1)
	  lfd       f2, 0x178(r1)
	  stw       r6, 0x184(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x180(r1)
	  lfd       f2, 0x180(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x168(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x16C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x6A8
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x6B0

	.loc_0x6A8:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x6B0:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r7, 0xA(r1)
	  lbz       r6, 0x9(r1)
	  stfd      f0, 0x188(r1)
	  lbz       r3, 0x8(r1)
	  lwz       r4, 0x18C(r1)
	  stw       r0, 0x190(r1)
	  lfd       f5, -0x6768(r2)
	  stb       r4, 0xB(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r5, 0x58(r28)
	  stw       r0, 0x198(r1)
	  stb       r3, 0x34(r5)
	  stb       r6, 0x35(r5)
	  stb       r7, 0x36(r5)
	  stb       r4, 0x37(r5)
	  lwz       r4, 0x258(r29)
	  lwz       r3, 0x258(r30)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x1A0(r1)
	  rlwinm    r3,r3,0,24,31
	  lwz       r4, 0x2A8(r29)
	  stw       r3, 0x194(r1)
	  lwz       r5, 0x280(r29)
	  rlwinm    r7,r4,0,24,31
	  stw       r6, 0x19C(r1)
	  lfd       f2, 0x190(r1)
	  rlwinm    r5,r5,0,24,31
	  lfd       f0, 0x198(r1)
	  stw       r6, 0x1A4(r1)
	  fsubs     f4, f2, f5
	  fsubs     f3, f0, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x1A0(r1)
	  lwz       r0, 0x2D0(r29)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x280(r30)
	  fsubs     f2, f2, f5
	  rlwinm    r6,r0,0,24,31
	  lwz       r3, 0x2A8(r30)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  lwz       r0, 0x2D0(r30)
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x780
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x788

	.loc_0x780:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x788:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x1B4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x1B0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x1B0(r1)
	  stw       r5, 0x1BC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x1B8(r1)
	  lfd       f2, 0x1B8(r1)
	  stw       r5, 0x1C4(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x1C0(r1)
	  lfd       f2, 0x1C0(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x1A8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x1AC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x7F4
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x7FC

	.loc_0x7F4:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x7FC:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x1D4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x1D0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x1D0(r1)
	  stw       r7, 0x1DC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x1D8(r1)
	  lfd       f2, 0x1D8(r1)
	  stw       r7, 0x1E4(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x1E0(r1)
	  lfd       f2, 0x1E0(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x1C8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x1CC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x868
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x870

	.loc_0x868:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x870:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x1F4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x1F0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x1F0(r1)
	  stw       r6, 0x1FC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x1F8(r1)
	  lfd       f2, 0x1F8(r1)
	  stw       r6, 0x204(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x200(r1)
	  lfd       f2, 0x200(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x1E8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x1EC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x8DC
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x8E4

	.loc_0x8DC:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x8E4:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r3, 0x8(r1)
	  stw       r0, 0x210(r1)
	  lfd       f5, -0x6768(r2)
	  stfd      f0, 0x208(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r4, 0x20C(r1)
	  stw       r0, 0x218(r1)
	  stb       r4, 0xB(r1)
	  stb       r3, 0x30(r28)
	  lbz       r3, 0x9(r1)
	  stw       r0, 0x220(r1)
	  stb       r3, 0x31(r28)
	  lbz       r0, 0xA(r1)
	  stb       r0, 0x32(r28)
	  lbz       r0, 0xB(r1)
	  stb       r0, 0x33(r28)
	  lwz       r3, 0x30C(r29)
	  lwz       r0, 0x30C(r30)
	  rlwinm    r5,r3,0,24,31
	  lwz       r4, 0x334(r29)
	  rlwinm    r0,r0,0,24,31
	  stw       r5, 0x21C(r1)
	  lwz       r3, 0x35C(r29)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x214(r1)
	  lfd       f0, 0x218(r1)
	  rlwinm    r7,r3,0,24,31
	  lfd       f2, 0x210(r1)
	  stw       r5, 0x224(r1)
	  fsubs     f3, f0, f5
	  fsubs     f4, f2, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x220(r1)
	  lwz       r5, 0x384(r29)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x334(r30)
	  fsubs     f2, f2, f5
	  lwz       r3, 0x35C(r30)
	  lwz       r0, 0x384(r30)
	  rlwinm    r5,r5,0,24,31
	  fmadds    f2, f0, f3, f2
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x9B4
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x9BC

	.loc_0x9B4:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x9BC:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x234(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x230(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x230(r1)
	  stw       r6, 0x23C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x238(r1)
	  lfd       f2, 0x238(r1)
	  stw       r6, 0x244(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x240(r1)
	  lfd       f2, 0x240(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x228(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x22C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xA28
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xA30

	.loc_0xA28:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xA30:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x254(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x250(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x250(r1)
	  stw       r7, 0x25C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x258(r1)
	  lfd       f2, 0x258(r1)
	  stw       r7, 0x264(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x260(r1)
	  lfd       f2, 0x260(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x248(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x24C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xA9C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xAA4

	.loc_0xA9C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xAA4:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x274(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x270(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x270(r1)
	  stw       r5, 0x27C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x278(r1)
	  lfd       f2, 0x278(r1)
	  stw       r5, 0x284(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x280(r1)
	  lfd       f2, 0x280(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x268(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x26C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xB10
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0xB18

	.loc_0xB10:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0xB18:
	  fctiwz    f0, f0
	  addi      r4, r1, 0x8
	  stfd      f0, 0x288(r1)
	  lwz       r0, 0x28C(r1)
	  stb       r0, 0xB(r1)
	  lwz       r3, 0x2344(r28)
	  bl        0x312990
	  lfs       f2, 0x3BC(r29)
	  lis       r0, 0x4330
	  lfs       f0, 0x3BC(r30)
	  lfs       f1, 0x2340(r28)
	  fsubs     f0, f0, f2
	  lwz       r3, 0x2344(r28)
	  stw       r0, 0x290(r1)
	  lfd       f5, -0x6768(r2)
	  fmadds    f0, f1, f0, f2
	  stw       r0, 0x298(r1)
	  lfs       f1, -0x676C(r2)
	  stw       r0, 0x2A0(r1)
	  stfs      f0, 0x1C(r3)
	  lfs       f3, 0x3E4(r29)
	  lfs       f0, 0x3E4(r30)
	  lfs       f2, 0x2340(r28)
	  fsubs     f0, f0, f3
	  lwz       r3, 0x2344(r28)
	  fmadds    f0, f2, f0, f3
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x420(r29)
	  lwz       r0, 0x420(r30)
	  rlwinm    r5,r3,0,24,31
	  lwz       r4, 0x448(r29)
	  rlwinm    r0,r0,0,24,31
	  stw       r5, 0x29C(r1)
	  lwz       r3, 0x470(r29)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x294(r1)
	  lfd       f0, 0x298(r1)
	  rlwinm    r7,r3,0,24,31
	  lfd       f2, 0x290(r1)
	  stw       r5, 0x2A4(r1)
	  fsubs     f3, f0, f5
	  fsubs     f4, f2, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x2A0(r1)
	  lwz       r5, 0x498(r29)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x448(r30)
	  fsubs     f2, f2, f5
	  lwz       r3, 0x470(r30)
	  lwz       r0, 0x498(r30)
	  rlwinm    r5,r5,0,24,31
	  fmadds    f2, f0, f3, f2
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xC0C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xC14

	.loc_0xC0C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xC14:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x2B4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x2B0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x2B0(r1)
	  stw       r6, 0x2BC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x2B8(r1)
	  lfd       f2, 0x2B8(r1)
	  stw       r6, 0x2C4(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x2C0(r1)
	  lfd       f2, 0x2C0(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x2A8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2AC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x2348(r28)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xC80
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xC88

	.loc_0xC80:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xC88:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x2D4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x2D0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x2D0(r1)
	  stw       r7, 0x2DC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x2D8(r1)
	  lfd       f2, 0x2D8(r1)
	  stw       r7, 0x2E4(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x2E0(r1)
	  lfd       f2, 0x2E0(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x2C8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2CC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x2349(r28)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xCF4
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xCFC

	.loc_0xCF4:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xCFC:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x2F4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x2F0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x2F0(r1)
	  stw       r5, 0x2FC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x2F8(r1)
	  lfd       f2, 0x2F8(r1)
	  stw       r5, 0x304(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x300(r1)
	  lfd       f2, 0x300(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x2E8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2EC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x234A(r28)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xD68
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0xD70

	.loc_0xD68:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0xD70:
	  fctiwz    f0, f0
	  stfd      f0, 0x308(r1)
	  lwz       r0, 0x30C(r1)
	  stb       r0, 0x234B(r28)
	  b         .loc_0x1AC8

	.loc_0xD84:
	  fsubs     f0, f1, f6
	  lis       r0, 0x4330
	  lfs       f1, -0x66C8(r2)
	  stw       r0, 0x308(r1)
	  fmuls     f0, f1, f0
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x300(r1)
	  lfs       f1, -0x676C(r2)
	  stfs      f0, 0x2340(r28)
	  lwz       r4, 0x3C(r30)
	  lwz       r3, 0x3C(r31)
	  rlwinm    r6,r4,0,24,31
	  lwz       r5, 0x64(r30)
	  rlwinm    r3,r3,0,24,31
	  stw       r6, 0x304(r1)
	  lwz       r4, 0x8C(r30)
	  rlwinm    r7,r5,0,24,31
	  stw       r3, 0x30C(r1)
	  lfd       f0, 0x300(r1)
	  rlwinm    r8,r4,0,24,31
	  lfd       f2, 0x308(r1)
	  stw       r6, 0x2FC(r1)
	  fsubs     f3, f0, f5
	  fsubs     f4, f2, f5
	  lwz       r3, 0xB4(r30)
	  stw       r0, 0x2F8(r1)
	  lfs       f0, 0x2340(r28)
	  rlwinm    r6,r3,0,24,31
	  lfd       f2, 0x2F8(r1)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x64(r31)
	  fsubs     f2, f2, f5
	  lwz       r3, 0x8C(r31)
	  lwz       r0, 0xB4(r31)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r5,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xE30
	  fadds     f1, f6, f2
	  b         .loc_0xE34

	.loc_0xE30:
	  fsubs     f1, f2, f6

	.loc_0xE34:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x2EC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x2E8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x2E8(r1)
	  stw       r7, 0x2E4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x2E0(r1)
	  lfd       f2, 0x2E0(r1)
	  stw       r7, 0x2DC(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x2D8(r1)
	  lfd       f2, 0x2D8(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x2F0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2F4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xEA0
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xEA8

	.loc_0xEA0:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xEA8:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x2CC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x2C8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x2C8(r1)
	  stw       r8, 0x2C4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x2C0(r1)
	  lfd       f2, 0x2C0(r1)
	  stw       r8, 0x2BC(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x2B8(r1)
	  lfd       f2, 0x2B8(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x2D0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2D4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xF14
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xF1C

	.loc_0xF14:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xF1C:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r5, 0x2AC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x2A8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x2A8(r1)
	  stw       r6, 0x2A4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x2A0(r1)
	  lfd       f2, 0x2A0(r1)
	  stw       r6, 0x29C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x298(r1)
	  lfd       f2, 0x298(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x2B0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2B4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xF88
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0xF90

	.loc_0xF88:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0xF90:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r7, 0xA(r1)
	  lbz       r6, 0x9(r1)
	  stfd      f0, 0x290(r1)
	  lbz       r3, 0x8(r1)
	  lwz       r4, 0x294(r1)
	  stw       r0, 0x288(r1)
	  lfd       f5, -0x6768(r2)
	  stb       r4, 0xB(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r5, 0x50(r28)
	  stw       r0, 0x280(r1)
	  stb       r3, 0x34(r5)
	  stb       r6, 0x35(r5)
	  stb       r7, 0x36(r5)
	  stb       r4, 0x37(r5)
	  lwz       r4, 0xF0(r30)
	  lwz       r3, 0xF0(r31)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x278(r1)
	  rlwinm    r3,r3,0,24,31
	  lwz       r4, 0x140(r30)
	  stw       r3, 0x28C(r1)
	  lwz       r5, 0x118(r30)
	  rlwinm    r7,r4,0,24,31
	  stw       r6, 0x284(r1)
	  lfd       f2, 0x288(r1)
	  rlwinm    r5,r5,0,24,31
	  lfd       f0, 0x280(r1)
	  stw       r6, 0x27C(r1)
	  fsubs     f4, f2, f5
	  fsubs     f3, f0, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x278(r1)
	  lwz       r0, 0x168(r30)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x118(r31)
	  fsubs     f2, f2, f5
	  rlwinm    r6,r0,0,24,31
	  lwz       r3, 0x140(r31)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  lwz       r0, 0x168(r31)
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1060
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1068

	.loc_0x1060:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1068:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x26C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x268(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x268(r1)
	  stw       r5, 0x264(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x260(r1)
	  lfd       f2, 0x260(r1)
	  stw       r5, 0x25C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x258(r1)
	  lfd       f2, 0x258(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x270(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x274(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x10D4
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x10DC

	.loc_0x10D4:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x10DC:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x24C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x248(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x248(r1)
	  stw       r7, 0x244(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x240(r1)
	  lfd       f2, 0x240(r1)
	  stw       r7, 0x23C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x238(r1)
	  lfd       f2, 0x238(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x250(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x254(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1148
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1150

	.loc_0x1148:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1150:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x22C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x228(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x228(r1)
	  stw       r6, 0x224(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x220(r1)
	  lfd       f2, 0x220(r1)
	  stw       r6, 0x21C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x218(r1)
	  lfd       f2, 0x218(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x230(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x234(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x11BC
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x11C4

	.loc_0x11BC:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x11C4:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r7, 0xA(r1)
	  lbz       r6, 0x9(r1)
	  stfd      f0, 0x210(r1)
	  lbz       r3, 0x8(r1)
	  lwz       r4, 0x214(r1)
	  stw       r0, 0x208(r1)
	  lfd       f5, -0x6768(r2)
	  stb       r4, 0xB(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r5, 0x54(r28)
	  stw       r0, 0x200(r1)
	  stb       r3, 0x34(r5)
	  stb       r6, 0x35(r5)
	  stb       r7, 0x36(r5)
	  stb       r4, 0x37(r5)
	  lwz       r4, 0x1A4(r30)
	  lwz       r3, 0x1A4(r31)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x1F8(r1)
	  rlwinm    r3,r3,0,24,31
	  lwz       r4, 0x1F4(r30)
	  stw       r3, 0x20C(r1)
	  lwz       r5, 0x1CC(r30)
	  rlwinm    r7,r4,0,24,31
	  stw       r6, 0x204(r1)
	  lfd       f2, 0x208(r1)
	  rlwinm    r5,r5,0,24,31
	  lfd       f0, 0x200(r1)
	  stw       r6, 0x1FC(r1)
	  fsubs     f4, f2, f5
	  fsubs     f3, f0, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x1F8(r1)
	  lwz       r0, 0x21C(r30)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x1CC(r31)
	  fsubs     f2, f2, f5
	  rlwinm    r6,r0,0,24,31
	  lwz       r3, 0x1F4(r31)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  lwz       r0, 0x21C(r31)
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1294
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x129C

	.loc_0x1294:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x129C:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x1EC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x1E8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x1E8(r1)
	  stw       r5, 0x1E4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x1E0(r1)
	  lfd       f2, 0x1E0(r1)
	  stw       r5, 0x1DC(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x1D8(r1)
	  lfd       f2, 0x1D8(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x1F0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x1F4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1308
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1310

	.loc_0x1308:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1310:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x1CC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x1C8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x1C8(r1)
	  stw       r7, 0x1C4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x1C0(r1)
	  lfd       f2, 0x1C0(r1)
	  stw       r7, 0x1BC(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x1B8(r1)
	  lfd       f2, 0x1B8(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x1D0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x1D4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x137C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1384

	.loc_0x137C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1384:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x1AC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x1A8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x1A8(r1)
	  stw       r6, 0x1A4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x1A0(r1)
	  lfd       f2, 0x1A0(r1)
	  stw       r6, 0x19C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x198(r1)
	  lfd       f2, 0x198(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x1B0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x1B4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x13F0
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x13F8

	.loc_0x13F0:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x13F8:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r7, 0xA(r1)
	  lbz       r6, 0x9(r1)
	  stfd      f0, 0x190(r1)
	  lbz       r3, 0x8(r1)
	  lwz       r4, 0x194(r1)
	  stw       r0, 0x188(r1)
	  lfd       f5, -0x6768(r2)
	  stb       r4, 0xB(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r5, 0x58(r28)
	  stw       r0, 0x180(r1)
	  stb       r3, 0x34(r5)
	  stb       r6, 0x35(r5)
	  stb       r7, 0x36(r5)
	  stb       r4, 0x37(r5)
	  lwz       r4, 0x258(r30)
	  lwz       r3, 0x258(r31)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x178(r1)
	  rlwinm    r3,r3,0,24,31
	  lwz       r4, 0x2A8(r30)
	  stw       r3, 0x18C(r1)
	  lwz       r5, 0x280(r30)
	  rlwinm    r7,r4,0,24,31
	  stw       r6, 0x184(r1)
	  lfd       f2, 0x188(r1)
	  rlwinm    r5,r5,0,24,31
	  lfd       f0, 0x180(r1)
	  stw       r6, 0x17C(r1)
	  fsubs     f4, f2, f5
	  fsubs     f3, f0, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x178(r1)
	  lwz       r0, 0x2D0(r30)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x280(r31)
	  fsubs     f2, f2, f5
	  rlwinm    r6,r0,0,24,31
	  lwz       r3, 0x2A8(r31)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  lwz       r0, 0x2D0(r31)
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x14C8
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x14D0

	.loc_0x14C8:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x14D0:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x16C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x168(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x168(r1)
	  stw       r5, 0x164(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x160(r1)
	  lfd       f2, 0x160(r1)
	  stw       r5, 0x15C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x158(r1)
	  lfd       f2, 0x158(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x170(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x174(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x153C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1544

	.loc_0x153C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1544:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x14C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x148(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x148(r1)
	  stw       r7, 0x144(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x140(r1)
	  lfd       f2, 0x140(r1)
	  stw       r7, 0x13C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x138(r1)
	  lfd       f2, 0x138(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x150(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x154(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x15B0
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x15B8

	.loc_0x15B0:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x15B8:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x12C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x128(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x128(r1)
	  stw       r6, 0x124(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x120(r1)
	  lfd       f2, 0x120(r1)
	  stw       r6, 0x11C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x118(r1)
	  lfd       f2, 0x118(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x130(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x134(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1624
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x162C

	.loc_0x1624:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x162C:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r3, 0x8(r1)
	  stw       r0, 0x108(r1)
	  lfd       f5, -0x6768(r2)
	  stfd      f0, 0x110(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r4, 0x114(r1)
	  stw       r0, 0x100(r1)
	  stb       r4, 0xB(r1)
	  stb       r3, 0x30(r28)
	  lbz       r3, 0x9(r1)
	  stw       r0, 0xF8(r1)
	  stb       r3, 0x31(r28)
	  lbz       r0, 0xA(r1)
	  stb       r0, 0x32(r28)
	  lbz       r0, 0xB(r1)
	  stb       r0, 0x33(r28)
	  lwz       r3, 0x30C(r30)
	  lwz       r0, 0x30C(r31)
	  rlwinm    r5,r3,0,24,31
	  lwz       r4, 0x334(r30)
	  rlwinm    r0,r0,0,24,31
	  stw       r5, 0x104(r1)
	  lwz       r3, 0x35C(r30)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x10C(r1)
	  lfd       f0, 0x100(r1)
	  rlwinm    r7,r3,0,24,31
	  lfd       f2, 0x108(r1)
	  stw       r5, 0xFC(r1)
	  fsubs     f3, f0, f5
	  fsubs     f4, f2, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0xF8(r1)
	  lwz       r5, 0x384(r30)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x334(r31)
	  fsubs     f2, f2, f5
	  lwz       r3, 0x35C(r31)
	  lwz       r0, 0x384(r31)
	  rlwinm    r5,r5,0,24,31
	  fmadds    f2, f0, f3, f2
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x16FC
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1704

	.loc_0x16FC:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1704:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0xEC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0xE8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0xE8(r1)
	  stw       r6, 0xE4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0xE0(r1)
	  lfd       f2, 0xE0(r1)
	  stw       r6, 0xDC(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0xD8(r1)
	  lfd       f2, 0xD8(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0xF0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0xF4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1770
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1778

	.loc_0x1770:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1778:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0xCC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0xC8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0xC8(r1)
	  stw       r7, 0xC4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0xC0(r1)
	  lfd       f2, 0xC0(r1)
	  stw       r7, 0xBC(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0xB8(r1)
	  lfd       f2, 0xB8(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0xD0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0xD4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x17E4
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x17EC

	.loc_0x17E4:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x17EC:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0xAC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0xA8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0xA8(r1)
	  stw       r5, 0xA4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0xA0(r1)
	  lfd       f2, 0xA0(r1)
	  stw       r5, 0x9C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x98(r1)
	  lfd       f2, 0x98(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0xB0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0xB4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1858
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x1860

	.loc_0x1858:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x1860:
	  fctiwz    f0, f0
	  addi      r4, r1, 0x8
	  stfd      f0, 0x90(r1)
	  lwz       r0, 0x94(r1)
	  stb       r0, 0xB(r1)
	  lwz       r3, 0x2344(r28)
	  bl        0x311C48
	  lfs       f2, 0x3BC(r30)
	  lis       r0, 0x4330
	  lfs       f0, 0x3BC(r31)
	  lfs       f1, 0x2340(r28)
	  fsubs     f0, f0, f2
	  lwz       r3, 0x2344(r28)
	  stw       r0, 0x88(r1)
	  lfd       f5, -0x6768(r2)
	  fmadds    f0, f1, f0, f2
	  stw       r0, 0x80(r1)
	  lfs       f1, -0x676C(r2)
	  stw       r0, 0x78(r1)
	  stfs      f0, 0x1C(r3)
	  lfs       f3, 0x3E4(r30)
	  lfs       f0, 0x3E4(r31)
	  lfs       f2, 0x2340(r28)
	  fsubs     f0, f0, f3
	  lwz       r3, 0x2344(r28)
	  fmadds    f0, f2, f0, f3
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x420(r30)
	  lwz       r0, 0x420(r31)
	  rlwinm    r5,r3,0,24,31
	  lwz       r4, 0x448(r30)
	  rlwinm    r0,r0,0,24,31
	  stw       r5, 0x84(r1)
	  lwz       r3, 0x470(r30)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x8C(r1)
	  lfd       f0, 0x80(r1)
	  rlwinm    r7,r3,0,24,31
	  lfd       f2, 0x88(r1)
	  stw       r5, 0x7C(r1)
	  fsubs     f3, f0, f5
	  fsubs     f4, f2, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x78(r1)
	  lwz       r5, 0x498(r30)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x448(r31)
	  fsubs     f2, f2, f5
	  lwz       r3, 0x470(r31)
	  lwz       r0, 0x498(r31)
	  rlwinm    r5,r5,0,24,31
	  fmadds    f2, f0, f3, f2
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1954
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x195C

	.loc_0x1954:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x195C:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x6C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x68(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x68(r1)
	  stw       r6, 0x64(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x60(r1)
	  lfd       f2, 0x60(r1)
	  stw       r6, 0x5C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x58(r1)
	  lfd       f2, 0x58(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x70(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x74(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x2348(r28)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x19C8
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x19D0

	.loc_0x19C8:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x19D0:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x4C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x48(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x48(r1)
	  stw       r7, 0x44(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x40(r1)
	  lfd       f2, 0x40(r1)
	  stw       r7, 0x3C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x38(r1)
	  lfd       f2, 0x38(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x50(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x54(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x2349(r28)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1A3C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1A44

	.loc_0x1A3C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1A44:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x2C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x28(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x28(r1)
	  stw       r5, 0x24(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x20(r1)
	  lfd       f2, 0x20(r1)
	  stw       r5, 0x1C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x18(r1)
	  lfd       f2, 0x18(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x30(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x34(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x234A(r28)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1AB0
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x1AB8

	.loc_0x1AB0:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x1AB8:
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stb       r0, 0x234B(r28)

	.loc_0x1AC8:
	  lwz       r0, 0x324(r1)
	  lwz       r31, 0x31C(r1)
	  lwz       r30, 0x318(r1)
	  lwz       r29, 0x314(r1)
	  lwz       r28, 0x310(r1)
	  mtlr      r0
	  addi      r1, r1, 0x320
	  blr
	*/
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
				// this isn't loading correctly
				GameLightEventArg eventArg;
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
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	stw      r30, 0x38(r1)
	lwz      r4, 0x2338(r3)
	cmplwi   r4, 0
	beq      lbl_801212A8
	lwz      r0, 0x210(r4)
	cmpwi    r0, 2
	beq      lbl_8012114C
	bge      lbl_80121114
	cmpwi    r0, 0
	beq      lbl_80121124
	bge      lbl_80121138
	b        lbl_801212A8

lbl_80121114:
	cmpwi    r0, 4
	beq      lbl_80121298
	bge      lbl_801212A8
	b        lbl_80121284

lbl_80121124:
	addi     r4, r31, 0x118
	mr       r5, r4
	mr       r6, r4
	bl
calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
	b        lbl_801212A8

lbl_80121138:
	addi     r4, r31, 0x118
	addi     r5, r31, 0x5c8
	addi     r6, r31, 0xa78
	bl
calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
	b        lbl_801212A8

lbl_8012114C:
	lfs      f1, 0x20c(r4)
	lfs      f0, lbl_80517CA4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8012126C
	lhz      r0, 0x234c(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_8012126C
	li       r7, 0
	lfs      f6, lbl_80517C94@sda21(r2)
	stb      r7, 8(r1)
	ori      r6, r7, 3
	clrlwi   r0, r6, 0x18
	lfs      f0, lbl_80517BF0@sda21(r2)
	stb      r7, 9(r1)
	ori      r5, r7, 1
	lfs      f5, lbl_80517C98@sda21(r2)
	ori      r3, r0, 1
	stb      r7, 8(r1)
	clrlwi   r4, r5, 0x18
	lwz      r30, 0x2384(r31)
	clrlwi   r0, r3, 0x18
	stb      r6, 8(r1)
	ori      r4, r4, 1
	lfs      f4, lbl_80517BF4@sda21(r2)
	cmplwi   r30, 0
	stb      r7, 9(r1)
	ori      r0, r0, 2
	lfs      f3, lbl_80517C9C@sda21(r2)
	stb      r5, 9(r1)
	lfs      f2, lbl_80517CA0@sda21(r2)
	stb      r3, 8(r1)
	lfs      f1, lbl_80517CA8@sda21(r2)
	stfs     f0, 0x18(r1)
	lfs      f0, lbl_80517CAC@sda21(r2)
	stfs     f6, 0xc(r1)
	stfs     f6, 0x10(r1)
	stfs     f6, 0x14(r1)
	stfs     f5, 0x1c(r1)
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stw      r7, 0x28(r1)
	stfs     f2, 0x2c(r1)
	stb      r4, 9(r1)
	stfs     f1, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stb      r0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f0, 0x10(r1)
	stfs     f0, 0x14(r1)
	beq      lbl_80121260
	stb      r0, 0x18(r30)
	li       r0, 1
	mr       r3, r30
	stb      r4, 0x19(r30)
	stfs     f0, 0x1c(r30)
	stfs     f0, 0x20(r30)
	stfs     f0, 0x24(r30)
	stfs     f1, 0x28(r30)
	stfs     f1, 0x2c(r30)
	stfs     f4, 0x30(r30)
	stfs     f3, 0x34(r30)
	stw      r7, 0x38(r30)
	stfs     f2, 0x3c(r30)
	stfs     f4, 0x40(r30)
	stw      r0, 0x4c(r30)
	bl       del__5CNodeFv
	mr       r4, r30
	addi     r3, r31, 0x235c
	bl       add__5CNodeFP5CNode

lbl_80121260:
	lhz      r0, 0x234c(r31)
	ori      r0, r0, 2
	sth      r0, 0x234c(r31)

lbl_8012126C:
	addi     r4, r31, 0xa78
	mr       r3, r31
	mr       r5, r4
	mr       r6, r4
	bl
calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
	b        lbl_801212A8

lbl_80121284:
	addi     r4, r31, 0xa78
	addi     r5, r31, 0xf28
	addi     r6, r31, 0x118
	bl
calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
	b        lbl_801212A8

lbl_80121298:
	addi     r4, r31, 0x13d8
	mr       r5, r4
	mr       r6, r4
	bl
calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting

lbl_801212A8:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

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
