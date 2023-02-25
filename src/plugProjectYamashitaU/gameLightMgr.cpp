#include "Game/GameLight.h"
#include "Game/shadowMgr.h"
#include "Game/CameraMgr.h"
#include "Game/TimeMgr.h"
#include "Game/GameSystem.h"
#include "Viewport.h"
#include "nans.h"

namespace Game {

template <class T>
T complement(T, T, T);

static const int unusedGameLightArray[] = { 0, 0, 0 };
static const char unusedGameLightName[] = "gameLightMgr";

/*
 * --INFO--
 * Address:	........
 * Size:	0001FC
 */
void calcLightColor(Color4* lightColor, Color4& color1, Color4& color2, f32 scale)
{
	f32 tempRed   = scale * ((f32)color1.r - (f32)color2.r) + (f32)color2.r;
	lightColor->r = (tempRed >= 0.0f) ? tempRed + 0.5f : tempRed - 0.5f;

	f32 tempGreen = scale * ((f32)color1.g - (f32)color2.g) + (f32)color2.g;
	lightColor->g = (tempGreen >= 0.0f) ? tempGreen + 0.5f : tempGreen - 0.5f;

	f32 tempBlue  = scale * ((f32)color1.b - (f32)color2.b) + (f32)color2.b;
	lightColor->b = (tempBlue >= 0.0f) ? tempBlue + 0.5f : tempBlue - 0.5f;

	f32 tempAlpha = scale * ((f32)(color1.a) - (f32)color2.a) + (f32)color2.a;
	lightColor->a = (tempAlpha >= 0.0f) ? tempAlpha + 0.5f : tempAlpha - 0.5f;
}

namespace {
const char* GameLightMgrSettinglabel[5] = {
	"夜",     // 'night'
	"朝",     // 'morning'
	"昼",     // 'noon'
	"夕",     // 'evening'
	"デモ中", // 'in demo'
};
} // namespace

/*
 * --INFO--
 * Address:	8011CCE0
 * Size:	000654
 */
GameLightTimeSetting::GameLightTimeSetting()
    : CNode("")
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void GameLightTimeSetting::read(Stream& stream)
{
	mDiffuseLight1.read(stream);
	mDiffuseLight2.read(stream);
	mSpecLight.read(stream);
	mAmbientLight.read(stream);
	mFog.read(stream);
	mShadow.read(stream);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A8
 */
GameLightSunSetting::GameLightSunSetting(char* name)
    : CNode(name)
{
	for (int i = 0; i < 5; i++) {
		mLightTimes[i].mName = GameLightMgrSettinglabel[i];
		add(&mLightTimes[i]);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void GameLightSunSetting::read(Stream& stream)
{
	mMoveParms.read(stream);
	for (int i = 0; i < 5; i++) {
		mLightTimes[i].read(stream);
	}
}

/*
 * --INFO--
 * Address:	8011D5EC
 * Size:	000738
 */
GameLightSpotSetting::GameLightSpotSetting(char* name)
    : CNode(name)
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void GameLightSpotSetting::read(Stream& stream)
{
	mMoveParms.read(stream);
	mSpotLight1.read(stream);
	mSpotLight2.read(stream);
	mSpecLight.read(stream);
	mAmbientLight.read(stream);
	mFog.read(stream);
	mShadow.read(stream);
}

/*
 * --INFO--
 * Address:	8011DD68
 * Size:	0001E0
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

/*
 * --INFO--
 * Address:	8011E024
 * Size:	000074
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

/*
 * --INFO--
 * Address:	8011E098
 * Size:	0002F0
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

/*
 * --INFO--
 * Address:	8011E388
 * Size:	0001E0
 */
void GameLightMgrSetting::readOldVersion(ID32 id, Stream& stream)
{
	switch (id.getID()) {
	case '0000':
		mIsCave = stream.readByte();
		if (!mIsCave) {
			mSunLight.read(stream);
		} else {
			mStellarSpotLight.read(stream);
		}
		break;

	default:
		JUT_PANICLINE(427, "Unknown version [%08x]", id.getID());
	}
}

/*
 * --INFO--
 * Address:	8011E568
 * Size:	0001F4
 */
bool GameLightEventNode::update(GameLightMgr* lightMgr)
{
	bool result = false;

	switch (_4C) {
	case 1:
		_40 += sys->mDeltaTime;
		if (_40 > _28) {
			_40 = _28;
			_44 = 1.0f;
		} else {
			_44 = _40 / _28;
		}

		if (_44 == 1.0f) {
			_40 = 0.0f;
			_4C = 2;
		}

		updateCommon(lightMgr, true);
		break;

	case 2:
		_40 += sys->mDeltaTime;
		if (_40 > 4.0f) {
			_40 = 0.0f;
		}

		_44 = 0.9f + 0.1f * pikmin2_cosf(TAU * _40 / 4);

		if (_18 & 1) {
			updateCommon(lightMgr, true);
			_48 = _44;
			_40 = 0.0f;
			_4C = 3;
		} else {
			updateCommon(lightMgr, true);
		}
		break;

	case 3:
		_40 += sys->mDeltaTime;
		if (_40 > _2C) {
			_40 = _2C;
			_44 = 0.0f;
		} else {
			_44 = _48 * (1.0f - (_40 / _2C));
		}

		updateCommon(lightMgr, false);
		if (_44 == 0.0f) {
			_4C    = 0;
			result = true;
		}
		break;
	}

	return result;
}

/*
 * --INFO--
 * Address:	8011E75C
 * Size:	00037C
 */
void GameLightEventNode::updateCommon(GameLightMgr* lightMgr, bool check)
{
	f32 val = -1.0f;
	if (check) {
		if (_18 & 0x8 && _38 && _3C > 0.0f) {
			PlayCamera* camera = lightMgr->mCamera;
			if (camera) {
				Vector3f cameraPos = camera->getPosition();
				val                = 1.0f - (pikmin2_sqrtf(sqrDistance(*_38, cameraPos)) / _3C);
				if (val < 0.0f) {
					val = 0.0f;
				}
			}
		}

		_44 = 0.5f * (1.0f - pikmin2_cosf(PI * _44));

		if (val >= 0.0f) {
			f32 val2 = 0.0f;
			if (val >= 0.0f) {
				val2 = val;
			}
			_44 *= val2;
		}
	}

	Color4 color;

	if (_19 & 0x1) {
		color = lightMgr->mMainLight->mColor;
		calcColor(&color);
		lightMgr->mMainLight->mColor.set(color);
	}

	if (_19 & 0x2) {
		color = lightMgr->mSubLight->mColor;
		calcColor(&color);
		lightMgr->mSubLight->mColor.set(color);
	}

	if (_19 & 0x4) {
		color = lightMgr->mSpecLight->mColor;
		calcColor(&color);
		lightMgr->mSpecLight->mColor.set(color);
	}

	if (_19 & 0x8) {
		color = lightMgr->mAmbientLight.mColor;
		calcColor(&color);
		lightMgr->mAmbientLight.mColor = color;
	}

	if (_19 & 0x10) {
		lightMgr->mFogMgr->getColor(color);
		calcColor(&color);
		lightMgr->mFogMgr->setColor(color);

		lightMgr->mFogMgr->mNearZ = complement<f32>(lightMgr->mFogMgr->mNearZ, _30, _44);
		lightMgr->mFogMgr->mFarZ  = complement<f32>(lightMgr->mFogMgr->mFarZ, _34, _44);
	}

	if (_19 & 0x20) {
		color = lightMgr->mShadowColor;
		calcColor(&color);
		lightMgr->mShadowColor = color;
	}
}

/*
 * --INFO--
 * Address:	8011EAD8
 * Size:	000464
 */
void GameLightEventNode::calcColor(Color4* color)
{
	Color4 tempColor;
	if (_18 & 0x2) {
		f32 redF   = _1C * color->r;
		f32 greenF = _20 * color->g;
		f32 blueF  = _24 * color->b;

		f32 limitR = (redF > 255.0f) ? 255.0f : redF;
		f32 limitR2;
		if (limitR >= 0.0f) {
			limitR2 = ((redF > 255.0f) ? 255.0f : redF) + 0.5f;
		} else {
			limitR2 = ((redF > 255.0f) ? 255.0f : redF) - 0.5f;
		}
		tempColor.r = (int)limitR2;

		f32 limitG = (greenF > 255.0f) ? 255.0f : greenF;
		f32 limitG2;
		if (limitG >= 0.0f) {
			limitG2 = ((greenF > 255.0f) ? 255.0f : greenF) + 0.5f;
		} else {
			limitG2 = ((greenF > 255.0f) ? 255.0f : greenF) - 0.5f;
		}
		tempColor.g = (int)limitG2;

		f32 limitB = (blueF > 255.0f) ? 255.0f : blueF;
		f32 limitB2;
		if (limitB >= 0.0f) {
			limitB2 = ((blueF > 255.0f) ? 255.0f : blueF) + 0.5f;
		} else {
			limitB2 = ((blueF > 255.0f) ? 255.0f : blueF) - 0.5f;
		}
		tempColor.b = (int)limitB2;

	} else {
		f32 limitR  = (_1C >= 0.0f) ? _1C + 0.5f : _1C - 0.5f;
		tempColor.r = (int)limitR;

		f32 limitG  = (_20 >= 0.0f) ? _20 + 0.5f : _20 - 0.5f;
		tempColor.g = (int)limitG;

		f32 limitB  = (_24 >= 0.0f) ? _24 + 0.5f : _24 - 0.5f;
		tempColor.b = (int)limitB;
	}

	calcLightColor(color, tempColor, *color, _44);
}

/*
 * --INFO--
 * Address:	8011EF3C
 * Size:	000310
 */
GameLightMgr::GameLightMgr(char* p1)
    : LightMgr(p1)
    , mTimeMgr(nullptr)
    , mCamera(nullptr)
    , _2340(0.0f)
    , mShadowColor(0, 0, 0, 160)
{
	_238C[0] = Vector3f::zero;
	_238C[1] = Vector3f::zero;

	start();

	mMainLight             = new LightObj("メインライト", GX_LIGHT0, TYPE_2, JUtility::TColor(255, 255, 255, 255)); // 'main light'
	mMainLight->mSpotFn    = GX_SP_OFF;
	mMainLight->mElevation = Vector3f(0.0f, -1.0f, 0.0f);
	registLightObj(mMainLight);

	mSubLight             = new LightObj("サブライト", GX_LIGHT1, TYPE_2, JUtility::TColor(128, 64, 64, 255)); // 'sub light'
	mSubLight->mSpotFn    = GX_SP_OFF;
	mSubLight->mElevation = Vector3f(0.0f, 1.0f, 0.0f);
	registLightObj(mSubLight);

	mSpecLight          = new LightObj("スペキュラ-ライト", GX_LIGHT7, TYPE_4, JUtility::TColor(255, 255, 255, 255)); // 'specular light'
	mSpecLight->mKScale = 40.0f;
	registLightObj(mSpecLight);

	mFogMgr        = new FogMgr;
	mFogMgr->mType = GX_FOG_LINEAR;
	add(mFogMgr);
	if (shadowMgr) {
		shadowMgr->setShadowColor(&mShadowColor);
	}

	add(&mSettings);

	mEventNodes = new GameLightEventNode[10];
	_235C.clearRelations();
	_2374.clearRelations();

	for (u32 i = 0; i < 10; i++) {
		_2374.add(&mEventNodes[i]);
	}
}

/*
 * --INFO--
 * Address:	8011F4B8
 * Size:	00002C
 */
void GameLightMgr::start()
{
	mFlags.clear();
	mFlags.typeView |= 0x1;
	_2340 = 0.0f;
	_2350 = 0.0f;
	_2354 = 0.0f;
}

/*
 * --INFO--
 * Address:	8011F4E4
 * Size:	0000BC
 */
GameLightEventNode* GameLightMgr::createEventLight(GameLightEventArg& eventArg)
{
	GameLightEventNode* eventNode = static_cast<GameLightEventNode*>(_2374.mChild);

	if (eventNode) {
		eventNode->_18 = eventArg._00;
		eventNode->_19 = eventArg._01;
		eventNode->_1C = eventArg._04;
		eventNode->_20 = eventArg._08;
		eventNode->_24 = eventArg._0C;
		eventNode->_28 = eventArg._10;
		eventNode->_2C = eventArg._14;
		eventNode->_30 = eventArg._18;
		eventNode->_34 = eventArg._1C;
		eventNode->_38 = eventArg._20;
		eventNode->_3C = eventArg._24;
		eventNode->_40 = 0.0f;
		eventNode->_4C = 1;
		eventNode->del();

		_235C.add(eventNode);
	}

	return eventNode;
}

/*
 * --INFO--
 * Address:	8011F5A0
 * Size:	000048
 */
void GameLightMgr::loadParm(Stream& stream)
{
	stream.mMode = STREAM_MODE_TEXT;
	if (stream.mMode == STREAM_MODE_TEXT) {
		stream.mTabCount = 0;
	}

	mSettings.read(stream);
}

/*
 * --INFO--
 * Address:	8011F5E8
 * Size:	001AE8
 */
void GameLightMgr::calcSetting(GameLightTimeSetting* time1, GameLightTimeSetting* time2, GameLightTimeSetting* time3)
{
	Color4 lightColor;
	if (mTimeMgr->_214 < 0.5f) {
		_2340 = 2.0f * mTimeMgr->_214;

		// Main light
		Color4 color1diff1;
		color1diff1.r = *time1->mDiffuseLight1.mSettings.mRed();
		color1diff1.g = *time1->mDiffuseLight1.mSettings.mGreen();
		color1diff1.b = *time1->mDiffuseLight1.mSettings.mBlue();
		color1diff1.a = *time1->mDiffuseLight1.mSettings.mAlpha();

		Color4 color2diff1;
		color2diff1.r = *time2->mDiffuseLight1.mSettings.mRed();
		color2diff1.g = *time2->mDiffuseLight1.mSettings.mGreen();
		color2diff1.b = *time2->mDiffuseLight1.mSettings.mBlue();
		color2diff1.a = *time2->mDiffuseLight1.mSettings.mAlpha();

		calcLightColor(&lightColor, color2diff1, color1diff1, _2340);
		mMainLight->setColor(lightColor);

		// Sub light
		Color4 color1diff2;
		color1diff2.r = *time1->mDiffuseLight2.mSettings.mRed();
		color1diff2.g = *time1->mDiffuseLight2.mSettings.mGreen();
		color1diff2.b = *time1->mDiffuseLight2.mSettings.mBlue();
		color1diff2.a = *time1->mDiffuseLight2.mSettings.mAlpha();

		Color4 color2diff2;
		color2diff2.r = *time2->mDiffuseLight2.mSettings.mRed();
		color2diff2.g = *time2->mDiffuseLight2.mSettings.mGreen();
		color2diff2.b = *time2->mDiffuseLight2.mSettings.mBlue();
		color2diff2.a = *time2->mDiffuseLight2.mSettings.mAlpha();

		calcLightColor(&lightColor, color2diff2, color1diff2, _2340);
		mSubLight->setColor(lightColor);

		// Specular light
		Color4 color1spec;
		color1spec.r = *time1->mSpecLight.mSettings.mRed();
		color1spec.g = *time1->mSpecLight.mSettings.mGreen();
		color1spec.b = *time1->mSpecLight.mSettings.mBlue();
		color1spec.a = *time1->mSpecLight.mSettings.mAlpha();

		Color4 color2spec;
		color2spec.r = *time2->mSpecLight.mSettings.mRed();
		color2spec.g = *time2->mSpecLight.mSettings.mGreen();
		color2spec.b = *time2->mSpecLight.mSettings.mBlue();
		color2spec.a = *time2->mSpecLight.mSettings.mAlpha();

		calcLightColor(&lightColor, color2spec, color1spec, _2340);
		mSpecLight->setColor(lightColor);

		// Ambient light
		Color4 color1amb;
		color1amb.r = *time1->mAmbientLight.mSettings.mRed();
		color1amb.g = *time1->mAmbientLight.mSettings.mGreen();
		color1amb.b = *time1->mAmbientLight.mSettings.mBlue();
		color1amb.a = *time1->mAmbientLight.mSettings.mAlpha();

		Color4 color2amb;
		color2amb.r = *time2->mAmbientLight.mSettings.mRed();
		color2amb.g = *time2->mAmbientLight.mSettings.mGreen();
		color2amb.b = *time2->mAmbientLight.mSettings.mBlue();
		color2amb.a = *time2->mAmbientLight.mSettings.mAlpha();

		calcLightColor(&lightColor, color2amb, color1amb, _2340);
		mAmbientLight.mColor = lightColor;

		// Fog
		Color4 color1fog;
		color1fog.r = *time1->mFog.mSettings.mRed();
		color1fog.g = *time1->mFog.mSettings.mGreen();
		color1fog.b = *time1->mFog.mSettings.mBlue();
		color1fog.a = *time1->mFog.mSettings.mAlpha();

		Color4 color2fog;
		color2fog.r = *time2->mFog.mSettings.mRed();
		color2fog.g = *time2->mFog.mSettings.mGreen();
		color2fog.b = *time2->mFog.mSettings.mBlue();
		color2fog.a = *time2->mFog.mSettings.mAlpha();

		calcLightColor(&lightColor, color2fog, color1fog, _2340);

		mFogMgr->setColor(lightColor);

		mFogMgr->mNearZ
		    = _2340 * (time2->mFog.mFogParms.mStartZ.mValue - time1->mFog.mFogParms.mStartZ.mValue) + time1->mFog.mFogParms.mStartZ.mValue;
		mFogMgr->mFarZ
		    = _2340 * (time2->mFog.mFogParms.mEndZ.mValue - time1->mFog.mFogParms.mEndZ.mValue) + time1->mFog.mFogParms.mEndZ.mValue;

		// Shadow
		Color4 color1shadow;
		color1shadow.r = *time1->mShadow.mSettings.mRed();
		color1shadow.g = *time1->mShadow.mSettings.mGreen();
		color1shadow.b = *time1->mShadow.mSettings.mBlue();
		color1shadow.a = *time1->mShadow.mSettings.mAlpha();

		Color4 color2shadow;
		color2shadow.r = *time2->mShadow.mSettings.mRed();
		color2shadow.g = *time2->mShadow.mSettings.mGreen();
		color2shadow.b = *time2->mShadow.mSettings.mBlue();
		color2shadow.a = *time2->mShadow.mSettings.mAlpha();

		calcLightColor(&mShadowColor, color2shadow, color1shadow, _2340);
		return;
	}

	_2340 = 2.0f * (mTimeMgr->_214 - 0.5f);

	// Main light
	Color4 color1diff1;
	color1diff1.r = time2->mDiffuseLight1.mSettings.mRed.mValue;
	color1diff1.g = time2->mDiffuseLight1.mSettings.mGreen.mValue;
	color1diff1.b = time2->mDiffuseLight1.mSettings.mBlue.mValue;
	color1diff1.a = time2->mDiffuseLight1.mSettings.mAlpha.mValue;

	Color4 color2diff1;
	color2diff1.r = time3->mDiffuseLight1.mSettings.mRed.mValue;
	color2diff1.g = time3->mDiffuseLight1.mSettings.mGreen.mValue;
	color2diff1.b = time3->mDiffuseLight1.mSettings.mBlue.mValue;
	color2diff1.a = time3->mDiffuseLight1.mSettings.mAlpha.mValue;

	calcLightColor(&lightColor, color2diff1, color1diff1, _2340);
	mMainLight->setColor(lightColor);

	// Sub light
	Color4 color1diff2;
	color1diff2.r = *time2->mDiffuseLight2.mSettings.mRed();
	color1diff2.g = *time2->mDiffuseLight2.mSettings.mGreen();
	color1diff2.b = *time2->mDiffuseLight2.mSettings.mBlue();
	color1diff2.a = *time2->mDiffuseLight2.mSettings.mAlpha();

	Color4 color2diff2;
	color2diff2.r = *time3->mDiffuseLight2.mSettings.mRed();
	color2diff2.g = *time3->mDiffuseLight2.mSettings.mGreen();
	color2diff2.b = *time3->mDiffuseLight2.mSettings.mBlue();
	color2diff2.a = *time3->mDiffuseLight2.mSettings.mAlpha();

	calcLightColor(&lightColor, color2diff2, color1diff2, _2340);
	mSubLight->setColor(lightColor);

	// Specular light
	Color4 color1spec;
	color1spec.r = *time2->mSpecLight.mSettings.mRed();
	color1spec.g = *time2->mSpecLight.mSettings.mGreen();
	color1spec.b = *time2->mSpecLight.mSettings.mBlue();
	color1spec.a = *time2->mSpecLight.mSettings.mAlpha();

	Color4 color2spec;
	color2spec.r = *time3->mSpecLight.mSettings.mRed();
	color2spec.g = *time3->mSpecLight.mSettings.mGreen();
	color2spec.b = *time3->mSpecLight.mSettings.mBlue();
	color2spec.a = *time3->mSpecLight.mSettings.mAlpha();

	calcLightColor(&lightColor, color2spec, color1spec, _2340);
	mSpecLight->setColor(lightColor);

	// Ambient light
	Color4 color1amb;
	color1amb.r = *time2->mAmbientLight.mSettings.mRed();
	color1amb.g = *time2->mAmbientLight.mSettings.mGreen();
	color1amb.b = *time2->mAmbientLight.mSettings.mBlue();
	color1amb.a = *time2->mAmbientLight.mSettings.mAlpha();

	Color4 color2amb;
	color2amb.r = *time3->mAmbientLight.mSettings.mRed();
	color2amb.g = *time3->mAmbientLight.mSettings.mGreen();
	color2amb.b = *time3->mAmbientLight.mSettings.mBlue();
	color2amb.a = *time3->mAmbientLight.mSettings.mAlpha();

	calcLightColor(&lightColor, color2amb, color1amb, _2340);
	mAmbientLight.mColor = lightColor;

	// Fog
	Color4 color1fog;
	color1fog.r = *time2->mFog.mSettings.mRed();
	color1fog.g = *time2->mFog.mSettings.mGreen();
	color1fog.b = *time2->mFog.mSettings.mBlue();
	color1fog.a = *time2->mFog.mSettings.mAlpha();

	Color4 color2fog;
	color2fog.r = *time3->mFog.mSettings.mRed();
	color2fog.g = *time3->mFog.mSettings.mGreen();
	color2fog.b = *time3->mFog.mSettings.mBlue();
	color2fog.a = *time3->mFog.mSettings.mAlpha();

	calcLightColor(&lightColor, color2fog, color1fog, _2340);

	mFogMgr->setColor(lightColor);

	mFogMgr->mNearZ
	    = _2340 * (time3->mFog.mFogParms.mStartZ.mValue - time2->mFog.mFogParms.mStartZ.mValue) + time2->mFog.mFogParms.mStartZ.mValue;
	mFogMgr->mFarZ = _2340 * (time3->mFog.mFogParms.mEndZ.mValue - time2->mFog.mFogParms.mEndZ.mValue) + time2->mFog.mFogParms.mEndZ.mValue;

	// Shadow
	Color4 color1shadow;
	color1shadow.r = *time2->mShadow.mSettings.mRed();
	color1shadow.g = *time2->mShadow.mSettings.mGreen();
	color1shadow.b = *time2->mShadow.mSettings.mBlue();
	color1shadow.a = *time2->mShadow.mSettings.mAlpha();

	Color4 color2shadow;
	color2shadow.r = *time3->mShadow.mSettings.mRed();
	color2shadow.g = *time3->mShadow.mSettings.mGreen();
	color2shadow.b = *time3->mShadow.mSettings.mBlue();
	color2shadow.a = *time3->mShadow.mSettings.mAlpha();

	calcLightColor(&mShadowColor, color2shadow, color1shadow, _2340);

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

/*
 * --INFO--
 * Address:	801210D0
 * Size:	0001F0
 */
void GameLightMgr::updateSunType()
{
	if (mTimeMgr) {
		switch (mTimeMgr->mSlotPosition) {
		case 0:
			calcSetting(&mSettings.mSunLight.mLightTimes[0], &mSettings.mSunLight.mLightTimes[0], &mSettings.mSunLight.mLightTimes[0]);
			break;
		case 1:
			calcSetting(&mSettings.mSunLight.mLightTimes[0], &mSettings.mSunLight.mLightTimes[1], &mSettings.mSunLight.mLightTimes[2]);
			break;
		case 2:
			if (mTimeMgr->mCurrentTimeOfDay > 13.0f && !(mFlags.typeView & 0x2)) {
				GameLightEventArg eventArg;
				eventArg._01 = 1;
				eventArg._10 = 3.0f;
				eventArg._14 = 3.0f;
				eventArg._00 |= 0x2;
				eventArg._04 = 1.25f;
				eventArg._08 = 1.25f;
				eventArg._0C = 1.25f;

				createEventLight(eventArg);
				mFlags.typeView |= 0x2;
			}
			calcSetting(&mSettings.mSunLight.mLightTimes[2], &mSettings.mSunLight.mLightTimes[2], &mSettings.mSunLight.mLightTimes[2]);
			break;
		case 3:
			calcSetting(&mSettings.mSunLight.mLightTimes[2], &mSettings.mSunLight.mLightTimes[3], &mSettings.mSunLight.mLightTimes[0]);
			break;
		case 4:
			calcSetting(&mSettings.mSunLight.mLightTimes[4], &mSettings.mSunLight.mLightTimes[4], &mSettings.mSunLight.mLightTimes[4]);
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

/*
 * --INFO--
 * Address:	801212C0
 * Size:	000C00
 */
void GameLightMgr::updateSpotType()
{
	/*
	stwu     r1, -0x2a0(r1)
	mflr     r0
	li       r4, 4
	stw      r0, 0x2a4(r1)
	stw      r31, 0x29c(r1)
	mr       r31, r3
	lwz      r5, playData__4Game@sda21(r13)
	addi     r3, r5, 0x48
	bl       hasItem__Q24Game10OlimarDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80121314
	lfs      f2, 0x2350(r31)
	lfs      f1, lbl_80517CB0@sda21(r2)
	lfs      f0, lbl_80517C64@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2350(r31)
	lfs      f1, 0x2350(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_80121338
	stfs     f0, 0x2350(r31)
	b        lbl_80121338

lbl_80121314:
	lfs      f2, 0x2350(r31)
	lfs      f1, lbl_80517CB0@sda21(r2)
	lfs      f0, lbl_80517BF4@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x2350(r31)
	lfs      f1, 0x2350(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80121338
	stfs     f0, 0x2350(r31)

lbl_80121338:
	lfs      f1, lbl_80517C80@sda21(r2)
	lfs      f0, 0x2350(r31)
	fmuls    f1, f1, f0
	bl       pikmin2_cosf__Ff
	lfs      f0, lbl_80517C64@sda21(r2)
	lis      r0, 0x4330
	lfs      f6, lbl_80517BF0@sda21(r2)
	fsubs    f0, f0, f1
	stw      r0, 0x10(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x18(r1)
	fmuls    f0, f6, f0
	lfs      f1, lbl_80517BF4@sda21(r2)
	stw      r0, 0x20(r1)
	stfs     f0, 0x2354(r31)
	lwz      r3, 0x1e54(r31)
	lwz      r0, 0x18fc(r31)
	clrlwi   r5, r3, 0x18
	lwz      r4, 0x1e7c(r31)
	clrlwi   r0, r0, 0x18
	stw      r5, 0x1c(r1)
	lwz      r3, 0x1ea4(r31)
	clrlwi   r6, r4, 0x18
	stw      r0, 0x14(r1)
	lfd      f0, 0x18(r1)
	clrlwi   r7, r3, 0x18
	lfd      f2, 0x10(r1)
	stw      r5, 0x24(r1)
	fsubs    f3, f0, f5
	fsubs    f4, f2, f5
	lwz      r0, 0x1ecc(r31)
	lfd      f2, 0x20(r1)
	lfs      f0, 0x2354(r31)
	clrlwi   r5, r0, 0x18
	fsubs    f3, f4, f3
	fsubs    f2, f2, f5
	lwz      r4, 0x1924(r31)
	lwz      r3, 0x194c(r31)
	lwz      r0, 0x1974(r31)
	clrlwi   r4, r4, 0x18
	fmadds   f2, f0, f3, f2
	clrlwi   r3, r3, 0x18
	clrlwi   r8, r0, 0x18
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_801213F8
	fadds    f1, f6, f2
	b        lbl_801213FC

lbl_801213F8:
	fsubs    f1, f2, f6

lbl_801213FC:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r4, 0x34(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x30(r1)
	stw      r6, 0x3c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x38(r1)
	lfd      f2, 0x38(r1)
	stw      r6, 0x44(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x40(r1)
	lfd      f2, 0x40(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x28(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x2c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 8(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121468
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121470

lbl_80121468:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121470:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r3, 0x54(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x50(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x50(r1)
	stw      r7, 0x5c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x58(r1)
	lfd      f2, 0x58(r1)
	stw      r7, 0x64(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x60(r1)
	lfd      f2, 0x60(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x48(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x4c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 9(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_801214DC
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_801214E4

lbl_801214DC:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_801214E4:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r8, 0x74(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x70(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x70(r1)
	stw      r5, 0x7c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x78(r1)
	lfd      f2, 0x78(r1)
	stw      r5, 0x84(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x80(r1)
	lfd      f2, 0x80(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x68(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x6c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 0xa(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121550
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_80121558

lbl_80121550:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_80121558:
	fctiwz   f0, f0
	lbz      r6, 0xa(r1)
	lbz      r5, 9(r1)
	lbz      r0, 8(r1)
	stfd     f0, 0x88(r1)
	lwz      r3, 0x8c(r1)
	stb      r3, 0xb(r1)
	lwz      r4, 0x50(r31)
	stb      r0, 0x34(r4)
	stb      r5, 0x35(r4)
	stb      r6, 0x36(r4)
	stb      r3, 0x37(r4)
	lfs      f1, 0x1f08(r31)
	lfs      f2, 0x19b0(r31)
	lfs      f3, 0x2354(r31)
	bl       "complement<f>__4GameFfff"
	lwz      r3, 0x50(r31)
	lis      r0, 0x4330
	stw      r0, 0x90(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stfs     f1, 0x44(r3)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lwz      r4, 0x1f40(r31)
	lwz      r3, 0x19e8(r31)
	clrlwi   r5, r4, 0x18
	stw      r0, 0x98(r1)
	clrlwi   r3, r3, 0x18
	lwz      r4, 0x1f68(r31)
	stw      r3, 0x94(r1)
	lwz      r3, 0x1f90(r31)
	clrlwi   r6, r4, 0x18
	stw      r5, 0x9c(r1)
	lfd      f2, 0x90(r1)
	clrlwi   r7, r3, 0x18
	lfd      f0, 0x98(r1)
	stw      r5, 0xa4(r1)
	fsubs    f4, f2, f5
	fsubs    f3, f0, f5
	lfs      f0, 0x2354(r31)
	stw      r0, 0xa0(r1)
	lwz      r0, 0x1fb8(r31)
	lfd      f2, 0xa0(r1)
	fsubs    f3, f4, f3
	lwz      r4, 0x1a10(r31)
	clrlwi   r5, r0, 0x18
	fsubs    f2, f2, f5
	lwz      r3, 0x1a38(r31)
	lwz      r0, 0x1a60(r31)
	clrlwi   r4, r4, 0x18
	clrlwi   r3, r3, 0x18
	fmadds   f2, f0, f3, f2
	clrlwi   r8, r0, 0x18
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121640
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121648

lbl_80121640:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121648:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r4, 0xb4(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0xb0(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0xb0(r1)
	stw      r6, 0xbc(r1)
	fsubs    f4, f2, f5
	stw      r0, 0xb8(r1)
	lfd      f2, 0xb8(r1)
	stw      r6, 0xc4(r1)
	fsubs    f3, f2, f5
	stw      r0, 0xc0(r1)
	lfd      f2, 0xc0(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0xa8(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0xac(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 8(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_801216B4
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_801216BC

lbl_801216B4:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_801216BC:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r3, 0xd4(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0xd0(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0xd0(r1)
	stw      r7, 0xdc(r1)
	fsubs    f4, f2, f5
	stw      r0, 0xd8(r1)
	lfd      f2, 0xd8(r1)
	stw      r7, 0xe4(r1)
	fsubs    f3, f2, f5
	stw      r0, 0xe0(r1)
	lfd      f2, 0xe0(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0xc8(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0xcc(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 9(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121728
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121730

lbl_80121728:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121730:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r8, 0xf4(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0xf0(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0xf0(r1)
	stw      r5, 0xfc(r1)
	fsubs    f4, f2, f5
	stw      r0, 0xf8(r1)
	lfd      f2, 0xf8(r1)
	stw      r5, 0x104(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x100(r1)
	lfd      f2, 0x100(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0xe8(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0xec(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 0xa(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8012179C
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_801217A4

lbl_8012179C:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_801217A4:
	fctiwz   f0, f0
	lis      r0, 0x4330
	lbz      r7, 0xa(r1)
	lbz      r6, 9(r1)
	stfd     f0, 0x108(r1)
	lbz      r3, 8(r1)
	lwz      r4, 0x10c(r1)
	stw      r0, 0x110(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stb      r4, 0xb(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lwz      r5, 0x54(r31)
	stw      r0, 0x118(r1)
	stb      r3, 0x34(r5)
	stb      r6, 0x35(r5)
	stb      r7, 0x36(r5)
	stb      r4, 0x37(r5)
	lwz      r4, 0x202c(r31)
	lwz      r3, 0x1ad4(r31)
	clrlwi   r6, r4, 0x18
	stw      r0, 0x120(r1)
	clrlwi   r3, r3, 0x18
	lwz      r4, 0x207c(r31)
	stw      r3, 0x114(r1)
	lwz      r5, 0x2054(r31)
	clrlwi   r7, r4, 0x18
	stw      r6, 0x11c(r1)
	lfd      f2, 0x110(r1)
	clrlwi   r5, r5, 0x18
	lfd      f0, 0x118(r1)
	stw      r6, 0x124(r1)
	fsubs    f4, f2, f5
	fsubs    f3, f0, f5
	lfs      f0, 0x2354(r31)
	lfd      f2, 0x120(r1)
	lwz      r0, 0x20a4(r31)
	fsubs    f3, f4, f3
	lwz      r4, 0x1afc(r31)
	fsubs    f2, f2, f5
	clrlwi   r6, r0, 0x18
	lwz      r3, 0x1b24(r31)
	clrlwi   r4, r4, 0x18
	fmadds   f2, f0, f3, f2
	lwz      r0, 0x1b4c(r31)
	clrlwi   r3, r3, 0x18
	clrlwi   r8, r0, 0x18
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121874
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8012187C

lbl_80121874:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_8012187C:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r4, 0x134(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x130(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x130(r1)
	stw      r5, 0x13c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x138(r1)
	lfd      f2, 0x138(r1)
	stw      r5, 0x144(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x140(r1)
	lfd      f2, 0x140(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x128(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x12c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 8(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_801218E8
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_801218F0

lbl_801218E8:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_801218F0:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r3, 0x154(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x150(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x150(r1)
	stw      r7, 0x15c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x158(r1)
	lfd      f2, 0x158(r1)
	stw      r7, 0x164(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x160(r1)
	lfd      f2, 0x160(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x148(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x14c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 9(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8012195C
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121964

lbl_8012195C:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121964:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r8, 0x174(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x170(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x170(r1)
	stw      r6, 0x17c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x178(r1)
	lfd      f2, 0x178(r1)
	stw      r6, 0x184(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x180(r1)
	lfd      f2, 0x180(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x168(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x16c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 0xa(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_801219D0
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_801219D8

lbl_801219D0:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_801219D8:
	fctiwz   f0, f0
	lis      r0, 0x4330
	lbz      r7, 0xa(r1)
	lbz      r6, 9(r1)
	stfd     f0, 0x188(r1)
	lbz      r3, 8(r1)
	lwz      r4, 0x18c(r1)
	stw      r0, 0x190(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stb      r4, 0xb(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lwz      r5, 0x58(r31)
	stw      r0, 0x198(r1)
	stb      r3, 0x34(r5)
	stb      r6, 0x35(r5)
	stb      r7, 0x36(r5)
	stb      r4, 0x37(r5)
	lwz      r4, 0x20e0(r31)
	lwz      r3, 0x1b88(r31)
	clrlwi   r6, r4, 0x18
	stw      r0, 0x1a0(r1)
	clrlwi   r3, r3, 0x18
	lwz      r4, 0x2130(r31)
	stw      r3, 0x194(r1)
	lwz      r5, 0x2108(r31)
	clrlwi   r7, r4, 0x18
	stw      r6, 0x19c(r1)
	lfd      f2, 0x190(r1)
	clrlwi   r5, r5, 0x18
	lfd      f0, 0x198(r1)
	stw      r6, 0x1a4(r1)
	fsubs    f4, f2, f5
	fsubs    f3, f0, f5
	lfs      f0, 0x2354(r31)
	lfd      f2, 0x1a0(r1)
	lwz      r0, 0x2158(r31)
	fsubs    f3, f4, f3
	lwz      r4, 0x1bb0(r31)
	fsubs    f2, f2, f5
	clrlwi   r6, r0, 0x18
	lwz      r3, 0x1bd8(r31)
	clrlwi   r4, r4, 0x18
	fmadds   f2, f0, f3, f2
	lwz      r0, 0x1c00(r31)
	clrlwi   r3, r3, 0x18
	clrlwi   r8, r0, 0x18
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121AA8
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121AB0

lbl_80121AA8:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121AB0:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r4, 0x1b4(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x1b0(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x1b0(r1)
	stw      r5, 0x1bc(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x1b8(r1)
	lfd      f2, 0x1b8(r1)
	stw      r5, 0x1c4(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x1c0(r1)
	lfd      f2, 0x1c0(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x1a8(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x1ac(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 8(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121B1C
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121B24

lbl_80121B1C:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121B24:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r3, 0x1d4(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x1d0(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x1d0(r1)
	stw      r7, 0x1dc(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x1d8(r1)
	lfd      f2, 0x1d8(r1)
	stw      r7, 0x1e4(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x1e0(r1)
	lfd      f2, 0x1e0(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x1c8(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x1cc(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 9(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121B90
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121B98

lbl_80121B90:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121B98:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r8, 0x1f4(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x1f0(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x1f0(r1)
	stw      r6, 0x1fc(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x1f8(r1)
	lfd      f2, 0x1f8(r1)
	stw      r6, 0x204(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x200(r1)
	lfd      f2, 0x200(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x1e8(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x1ec(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 0xa(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121C04
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_80121C0C

lbl_80121C04:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_80121C0C:
	fctiwz   f0, f0
	lis      r0, 0x4330
	lbz      r3, 8(r1)
	stw      r0, 0x210(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stfd     f0, 0x208(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lwz      r4, 0x20c(r1)
	stw      r0, 0x218(r1)
	stb      r4, 0xb(r1)
	stb      r3, 0x30(r31)
	lbz      r3, 9(r1)
	stw      r0, 0x220(r1)
	stb      r3, 0x31(r31)
	lbz      r0, 0xa(r1)
	stb      r0, 0x32(r31)
	lbz      r0, 0xb(r1)
	stb      r0, 0x33(r31)
	lwz      r3, 0x2194(r31)
	lwz      r0, 0x1c3c(r31)
	clrlwi   r5, r3, 0x18
	lwz      r4, 0x21bc(r31)
	clrlwi   r0, r0, 0x18
	stw      r5, 0x21c(r1)
	lwz      r3, 0x21e4(r31)
	clrlwi   r6, r4, 0x18
	stw      r0, 0x214(r1)
	lfd      f0, 0x218(r1)
	clrlwi   r7, r3, 0x18
	lfd      f2, 0x210(r1)
	stw      r5, 0x224(r1)
	fsubs    f3, f0, f5
	fsubs    f4, f2, f5
	lfs      f0, 0x2354(r31)
	lfd      f2, 0x220(r1)
	lwz      r5, 0x220c(r31)
	fsubs    f3, f4, f3
	lwz      r4, 0x1c64(r31)
	fsubs    f2, f2, f5
	lwz      r3, 0x1c8c(r31)
	lwz      r0, 0x1cb4(r31)
	clrlwi   r5, r5, 0x18
	fmadds   f2, f0, f3, f2
	clrlwi   r4, r4, 0x18
	clrlwi   r3, r3, 0x18
	clrlwi   r8, r0, 0x18
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121CDC
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121CE4

lbl_80121CDC:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121CE4:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r4, 0x234(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x230(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x230(r1)
	stw      r6, 0x23c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x238(r1)
	lfd      f2, 0x238(r1)
	stw      r6, 0x244(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x240(r1)
	lfd      f2, 0x240(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x228(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x22c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 8(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121D50
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121D58

lbl_80121D50:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121D58:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r3, 0x254(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x250(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x250(r1)
	stw      r7, 0x25c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x258(r1)
	lfd      f2, 0x258(r1)
	stw      r7, 0x264(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x260(r1)
	lfd      f2, 0x260(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x248(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x24c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 9(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121DC4
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121DCC

lbl_80121DC4:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121DCC:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r8, 0x274(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x270(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x270(r1)
	stw      r5, 0x27c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x278(r1)
	lfd      f2, 0x278(r1)
	stw      r5, 0x284(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x280(r1)
	lfd      f2, 0x280(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x268(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x26c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 0xa(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121E38
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_80121E40

lbl_80121E38:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_80121E40:
	fctiwz   f0, f0
	addi     r4, r1, 8
	stfd     f0, 0x288(r1)
	lwz      r0, 0x28c(r1)
	stb      r0, 0xb(r1)
	lwz      r3, 0x2344(r31)
	bl       setColor__6FogMgrFR6Color4
	lfs      f1, 0x2244(r31)
	lfs      f2, 0x1cec(r31)
	lfs      f3, 0x2354(r31)
	bl       "complement<f>__4GameFfff"
	lwz      r3, 0x2344(r31)
	stfs     f1, 0x1c(r3)
	lfs      f1, 0x226c(r31)
	lfs      f2, 0x1d14(r31)
	lfs      f3, 0x2354(r31)
	bl       "complement<f>__4GameFfff"
	lwz      r3, 0x2344(r31)
	stfs     f1, 0x20(r3)
	lwz      r0, 0x1d50(r31)
	stb      r0, 0x2348(r31)
	lwz      r0, 0x1d78(r31)
	stb      r0, 0x2349(r31)
	lwz      r0, 0x1da0(r31)
	stb      r0, 0x234a(r31)
	lwz      r0, 0x1dc8(r31)
	stb      r0, 0x234b(r31)
	lwz      r0, 0x2a4(r1)
	lwz      r31, 0x29c(r1)
	mtlr     r0
	addi     r1, r1, 0x2a0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void GameLightMgr::updateEventLight()
{
	GameLightEventNode* eventNode = static_cast<GameLightEventNode*>(_235C.mChild);
	while (eventNode) {
		GameLightEventNode* nextNode = static_cast<GameLightEventNode*>(eventNode->mNext);
		eventNode->update(this);

		if (!eventNode->_4C) {
			eventNode->del();
			_2374.add(eventNode);
		}
		eventNode = nextNode;
	}
}

/*
 * --INFO--
 * Address:	80121EC0
 * Size:	000094
 */
void GameLightMgr::update()
{
	if (!mSettings.mIsCave) {
		updateSunType();
	} else {
		updateSpotType();
	}

	updateEventLight();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lbz      r0, 0x74(r3)
	cmplwi   r0, 0
	bne      lbl_80121EF0
	bl       updateSunType__Q24Game12GameLightMgrFv
	b        lbl_80121EF4

lbl_80121EF0:
	bl       updateSpotType__Q24Game12GameLightMgrFv

lbl_80121EF4:
	lwz      r31, 0x236c(r29)
	b        lbl_80121F30

lbl_80121EFC:
	lwz      r30, 4(r31)
	mr       r3, r31
	mr       r4, r29
	bl       update__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgr
	lwz      r0, 0x4c(r31)
	cmpwi    r0, 0
	bne      lbl_80121F2C
	mr       r3, r31
	bl       del__5CNodeFv
	mr       r4, r31
	addi     r3, r29, 0x2374
	bl       add__5CNodeFP5CNode

lbl_80121F2C:
	mr       r31, r30

lbl_80121F30:
	cmplwi   r31, 0
	bne      lbl_80121EFC
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80121F54
 * Size:	000054
 */
void GameLightMgr::set(Graphics& gfx)
{
	updatePosition(gfx.mCurrentViewport);
	LightMgr::set(gfx);
	mFogMgr->set(gfx);
}

static const char unusedIniPath[] = "/user/Yamashita/testResource/light/light.ini";

/*
 * --INFO--
 * Address:	80121FA8
 * Size:	0002C0
 */
void GameLightMgr::updatePosition(Viewport* viewport)
{
	Vector3f lightPos;
	if (!mSettings.mIsCave) {
		mMainLight->mSpotFn = GX_SP_OFF;
		mSubLight->mSpotFn  = GX_SP_OFF;

		f32 maxAngle = *mSettings.mSunLight.mMoveParms.mSunsetAngle() - *mSettings.mSunLight.mMoveParms.mSunriseAngle();
		f32 angle    = (180.0f - (maxAngle * mTimeMgr->getSunGaugeRatio() + *mSettings.mSunLight.mMoveParms.mSunriseAngle()));
		angle        = PI * (DEG2RAD * angle);

		lightPos.x = pikmin2_cosf(angle) * *mSettings.mSunLight.mMoveParms.mDistance();
		lightPos.y = pikmin2_sinf(angle) * *mSettings.mSunLight.mMoveParms.mDistance();
		lightPos.z = 0.0f;

		if (gameSystem->mMode == GSM_PIKLOPEDIA) {
			Mtx mtx;
			PSMTXRotRad(mtx, 'x', 50 * DEG2RAD);
			PSMTXMultVec(mtx, (Vec*)&lightPos, (Vec*)&lightPos);
		}

		mMainLight->mPosition = lightPos;
		mSpecLight->mPosition = lightPos;
		lightPos.x *= -1.0f;
		lightPos.y *= -1.0f;
		lightPos.z *= -1.0f;
		mSubLight->mPosition = lightPos;

	} else {
		mMainLight->mSpotFn      = GX_SP_COS2;
		mMainLight->mCutoffAngle = complement<f32>(mSettings.mRegularSpotLight.mSpotLight1.mSpotParms.mCutOff.mValue,
		                                           mSettings.mStellarSpotLight.mSpotLight1.mSpotParms.mCutOff.mValue, _2354);
		mSubLight->mSpotFn       = GX_SP_COS2;
		mSubLight->mCutoffAngle  = complement<f32>(mSettings.mRegularSpotLight.mSpotLight2.mSpotParms.mCutOff.mValue,
                                                  mSettings.mStellarSpotLight.mSpotLight2.mSpotParms.mCutOff.mValue, _2354);

		int viewportID = viewport->mVpId;
		if (viewportID < 0 || viewportID > 1) {
			JUT_PANICLINE(1287, "illegal vp-id (%d)\n", viewportID);
		}

		f32 val = complement<f32>(mSettings.mRegularSpotLight.mMoveParms.mDistance.mValue,
		                          mSettings.mStellarSpotLight.mMoveParms.mDistance.mValue, _2354);

		getViewportPos(lightPos, viewportID);
		lightPos.y += val;

		mMainLight->mPosition = lightPos;
		mSpecLight->mPosition = lightPos;

		lightPos.y -= 2.0f * val;
		mSubLight->mPosition = lightPos;

		_238C[viewportID] = viewport->mCamera->getLookAtPosition();
	}
}

/*
 * --INFO--
 * Address:	8012241C
 * Size:	00000C
 */
template <class T>
T complement(T p1, T p2, T p3)
{
	return p3 * (p2 - p1) + p1;
}

} // namespace Game
