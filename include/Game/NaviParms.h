#ifndef _GAME_NAVIPARMS_H
#define _GAME_NAVIPARMS_H

#include "Game/FakePiki.h"

namespace Game {
struct NaviParms : public FakePikiParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "Navi::Parms")
		    , mActionRadius(this, 'p000', "アクション半径", 25.0f, 0.0f, 500.0f)                 // 'action radius'
		    , mAutopluckDistance(this, 'p060', "連続抜き距離", 200.0f, 0.0f, 1000.0f)            // 'continuous pluck distance'
		    , mPluckDistanceOutsideOnyon(this, 'p062', "抜き距離(onyon外)", 15.0f, 0.0f, 500.0f) // 'pluck distance (outside onyon)'
		    , mPikiCallMaxRadius(this, 'p001', "ピキ呼び最大半径", 90.0f, 0.0f, 500.0f)          // 'piki call max radius'
		    , mPikiCallMinRadius(this, 'p053', "ピキ呼び最小半径", 5.0f, 0.0f, 500.0f)           // 'piki call min radius'
		    , mMaxCallTime(this, 'p002', "ピキ呼び最大時間", 0.45f, 0.0f, 500.0f)                // 'max call time'
		    , mCircleDisappearTime(this, 'p003', "サークル消え時間", 1.0f, 0.0f, 500.0f)         // 'circle disappearing time'
		    , mMoveSpeed(this, 'p004', "移動速度", 160.0f, 0.0f, 500.0f)                         // 'movement speed'
		    , mRunSpeed(this, 'p056', "走る速さ（好調時）", 160.0f, 0.0f, 500.0f) // 'running speed (in good condition)' (lol)
		    , mDisplayScale(this, 'p038', "表\示スケール", 1.2f, 0.1f, 10.0f)     // 'display scale'
		    , mStick0(this, 'p005', "Stick 0", 0.001f, 0.0f, 1.0f)
		    , mStick01(this, 'p020', "Stick 01", 0.1f, 0.0f, 1.0f)
		    , mStick1(this, 'p006', "Stick 1", 0.8f, 0.0f, 1.0f)
		    , mStick2(this, 'p007', "Stick 2", 1.0f, 0.0f, 1.0f)
		    , mSlidingAngle(this, 'p008', "すべり角度", 120.0f, 90.0f, 180.0f)           // 'sliding angle'
		    , mTimeLimitForThrowing(this, 'p009', "投げため限界時間", 2.5f, 0.0f, 10.0f) // 'time limit for throwing'
		    , mThrowDistanceMax(this, 'p010', "投げ距離(Max)", 140.0f, 0.0f, 1000.0f)    // 'throw distance (Max)'
		    , mThrowDistanceMin(this, 'p011', "投げ距離(Min)", 140.0f, 0.0f, 500.0f)     // 'throw distance (Min)'
		    , mThrowHeightMax(this, 'p024', "投げ高さ(Max)", 75.0f, 0.0f, 1000.0f)       // 'throw height (Max)'
		    , mThrowHeightMin(this, 'p025', "投げ高さ(min)", 75.0f, 0.0f, 1000.0f)       // 'throw height (min)'
		    , mThrowHeightYellow(this, 'p054', "投げ高さ(黄色)", 115.0f, 0.0f, 1000.0f)  // 'throw height (yellow)'
		    , mThrowBlackHeight(this, 'q000', "黒　投げ高さ", 30.0f, 0.0f, 150.0f)       // 'black throw height'
		    , mThrowWhiteHeight(this, 'q001', "白　投げ高さ", 75.0f, 0.0f, 150.0f)       // 'white throw height'
		    , mLandingTime(this, 'p026', "着地時間", 1.0f, 0.0f, 100.0f)                 // 'landing time'
		    , mGrabPikiRange(this, 'p037', "ピキをつかむ有効範囲", 15.0f, 0.0f, 200.0f)  // 'effective range to grab piki'
		    , mLoopCountToPluck(this, 'p042', "抜くループ回数", 0, 0, 10)                // 'number of loops to pluck' (?)
		    , mPikiWaitRange(this, 'p039', "ピキが待つ範囲", 15.0f, 0.0f, 200.0f)        // 'piki wait range'
		    , mPikiChangeFormationRange(this, 'p040', "ピキがフォーメーションを変える範囲", 40.0f, 0.0f,
		                                200.0f)                                                  // 'range where piki changes formation'
		    , mHitSize(this, 'p021', "当たりサイズ", 8.0f, 0.0f, 100.0f)                         // 'hit size'
		    , mGroundSize(this, 'p041', "地面当たりサイズ", 8.5f, 0.0f, 100.0f)                  // 'ground size'
		    , mInverseWeight(this, 'p022', "重さの逆数", 1.0f, 0.0f, 2000.0f)                    // 'inverse weight'
		    , mAimRotationSpeed(this, 'p023', "エイミング回転スピード", 0.03f, 0.0f, 1.0f)       // 'aiming rotation speed'
		    , mTotalCrushTime(this, 'p031', "つぶれ総時間", 2.0f, 0.0f, 10.0f)                   // 'total crush time'
		    , mFlatTime(this, 'p032', "ぺったんこ時間", 1.0f, 0.0f, 10.0f)                       // 'flat time'
		    , mPressStartTime(this, 'p033', "押し開始時間", 0.8f, 0.0f, 10.0f)                   // 'press start time'
		    , mPressStartStickAmount(this, 'p034', "押し開始スティック量", 0.3f, 0.0f, 1.0f)     // 'press start stick amount'
		    , mShakePreventionAngle(this, 'p035', "手ぶれ防止角度", 10.0f, 0.0f, 180.0f)         // 'shake prevention angle'
		    , mShakePreventionMagnitude(this, 'p036', "手ぶれ防止大きさ", 0.1f, 0.0f, 1.0f)      // 'shake prevention magnitude'
		    , mCursorLookTime(this, 'p048', "カーソ\ルみる時間", 0.85f, 0.0f, 60.0f)             // 'cursor look time'
		    , mPikiLoseNumbnessTime(this, 'p049', "ピキがしびれを切らす時間", 5.0f, 0.0f, 60.0f) // 'time for piki to lose its numbness' (?)
		    , mNeutralStickThreshold(this, 'p043', "ニュートラルスティック", 0.1f, 0.0f, 1.0f)   // 'neutral stick'
		    , mCursorMovementStick(this, 'p044', "カーソ\ル移動スティック", 0.65f, 0.0f, 1.0f)   // 'cursor movement stick'
		    , mClampStick(this, 'p048', "クランプスティック", 0.85f, 0.0f, 1.0f)                 // 'clamp stick'
		    , mMinCursorMovementRadius(this, 'p045', "カーソ\ル移動最小半径", 0.0f, 0.0f, 1000.0f) // 'min cursor movement radius'
		    , mMaxCursorMoveRadius(this, 'p046', "カーソ\ル移動最大半径", 100.0f, 0.0f, 2000.0f)   // 'max cursor movement radius'
		    , mCursorMovementSpeed(this, 'p047', "カーソ\ル移動スピード", 300.0f, 0.0f, 1000.0f)   // 'cursor movement speed'
		    , mMaxHealth(this, 'p050', "ライフ", 100.0f, 0.0f, 1000.0f)                            // 'life'
		    , mAttackPower(this, 'p051', "攻撃力", 10.0f, 0.0f, 1000.0f)                           // 'attack power'
		    , mAttackRange(this, 'p052', "攻撃範囲", 10.0f, 0.0f, 100.0f)                          // 'attack range'
		    , mCursorCount(this, 'p055', "カーソ\ルカウント", 1, 0, 10)                            // 'cursor count'
		    , mMushroomFlickCount(this, 'p057', "kinoko Flick Count", 3, 0, 16)                    // 'mushroom flick count' (?)
		    , mBuryKeyCount(this, 'p058', "bury Key Count", 2, 0, 16)
		    , mBuryExitCount(this, 'p059', "bury Exit Count", 2, 0, 16)
		    , mCloseCameraZoomOut(this, 'p061', "寄りカメラズームアウト(frame)", 80, 0, 1000)      // 'close camera zoom out (frame)'
		    , mFormationLvl0(this, 'q002', "隊列 MAX Lv0", 10, 1, 100)                             // 'formation MAX Lv0'
		    , mFormationLvl1(this, 'q003', "隊列 MAX Lv1", 25, 1, 100)                             // 'formation MAX Lv1'
		    , mFormationMaxLvl2(this, 'q004', "隊列 MAX Lv2", 50, 1, 100)                          // 'formation MAX Lv2'
		    , mFormationMaxLvl3(this, 'q005', "隊列 MAX Lv3", 100, 1, 100)                         // 'formation MAX Lv3'
		    , mRushBootSpeed(this, 'q006', "ダッシュブーツ速度", 240.0f, 0.0f, 500.0f)             // 'rush boot speed'
		    , mWideWhistleRadius(this, 'q007', "広範囲の笛半径", 200.0f, 0.0f, 300.0f)             // 'wide whistle radius'
		    , mShieldDamageReductionRate(this, 'q008', "シールドダメージ軽減率", 0.5f, 0.0f, 1.0f) // 'shield damage reduction rate'
		    , mSeesawWeight(this, 'q009', "シーソ\ーで使う重さ", 2, 0, 10)                         // 'weight for seesaw'
		    , mElectricGateDamage(this, 'q010', "電気ゲートダメージ", 10.0f, 0.0f, 200.0f)         // 'electric gate damage'
		{
		}

		// _27C-_288	= Parameters
		Parm<f32> mActionRadius;              // _288, p000
		Parm<f32> mAutopluckDistance;         // _2B0, p060
		Parm<f32> mPluckDistanceOutsideOnyon; // _2D8, p062
		Parm<f32> mPikiCallMaxRadius;         // _300, p001, max whistle radius (pre-upgrade)
		Parm<f32> mPikiCallMinRadius;         // _328, p053, initial whistle radius
		Parm<f32> mMaxCallTime;               // _350, p002
		Parm<f32> mCircleDisappearTime;       // _378, p003
		Parm<f32> mMoveSpeed;                 // _3A0, p004
		Parm<f32> mRunSpeed;                  // _3C8, p056
		Parm<f32> mDisplayScale;              // _3F0, p038
		Parm<f32> mStick0;                    // _418, p005
		Parm<f32> mStick01;                   // _440, p020
		Parm<f32> mStick1;                    // _468, p006
		Parm<f32> mStick2;                    // _490, p007
		Parm<f32> mSlidingAngle;              // _4B8, p008
		Parm<f32> mTimeLimitForThrowing;      // _4E0, p009
		Parm<f32> mThrowDistanceMax;          // _508, p010
		Parm<f32> mThrowDistanceMin;          // _530, p011
		Parm<f32> mThrowHeightMax;            // _558, p024
		Parm<f32> mThrowHeightMin;            // _580, p025
		Parm<f32> mThrowHeightYellow;         // _5A8, p054
		Parm<f32> mThrowBlackHeight;          // _5D0, q000
		Parm<f32> mThrowWhiteHeight;          // _5F8, q001
		Parm<f32> mLandingTime;               // _620, p026
		Parm<f32> mGrabPikiRange;             // _648, p037
		Parm<int> mLoopCountToPluck;          // _670, p042
		Parm<f32> mPikiWaitRange;             // _698, p039
		Parm<f32> mPikiChangeFormationRange;  // _6C0, p040
		Parm<f32> mHitSize;                   // _6E8, p021
		Parm<f32> mGroundSize;                // _710, p041
		Parm<f32> mInverseWeight;             // _738, p022
		Parm<f32> mAimRotationSpeed;          // _760, p023
		Parm<f32> mTotalCrushTime;            // _788, p031
		Parm<f32> mFlatTime;                  // _7B0, p032
		Parm<f32> mPressStartTime;            // _7D8, p033
		Parm<f32> mPressStartStickAmount;     // _800, p034
		Parm<f32> mShakePreventionAngle;      // _828, p035
		Parm<f32> mShakePreventionMagnitude;  // _850, p036
		Parm<f32> mCursorLookTime;            // _878, p048, yes these are both p048
		Parm<f32> mPikiLoseNumbnessTime;      // _8A0, p049
		Parm<f32> mNeutralStickThreshold;     // _8C8, p043
		Parm<f32> mCursorMovementStick;       // _8F0, p044
		Parm<f32> mClampStick;                // _918, p048, yes these are both p048
		Parm<f32> mMinCursorMovementRadius;   // _940, p045
		Parm<f32> mMaxCursorMoveRadius;       // _968, p046
		Parm<f32> mCursorMovementSpeed;       // _990, p047
		Parm<f32> mMaxHealth;                 // _9B8, p050
		Parm<f32> mAttackPower;               // _9E0, p051
		Parm<f32> mAttackRange;               // _A08, p052
		Parm<int> mCursorCount;               // _A30, p055
		Parm<int> mMushroomFlickCount;        // _A58, p057
		Parm<int> mBuryKeyCount;              // _A80, p058
		Parm<int> mBuryExitCount;             // _AA8, p059
		Parm<int> mCloseCameraZoomOut;        // _AD0, p061
		Parm<int> mFormationLvl0;             // _AF8, q002
		Parm<int> mFormationLvl1;             // _B20, q003
		Parm<int> mFormationMaxLvl2;          // _B48, q004
		Parm<int> mFormationMaxLvl3;          // _B70, q005
		Parm<f32> mRushBootSpeed;             // _B98, q006
		Parm<f32> mWideWhistleRadius;         // _BC0, q007, max whistle radius (with upgrade)
		Parm<f32> mShieldDamageReductionRate; // _BE8, q008
		Parm<int> mSeesawWeight;              // _C10, q009
		Parm<f32> mElectricGateDamage;        // _C38, q010
		                                      // _C60 = IParameters ptr
	};

	NaviParms()
	    : mNaviParms()
	{
		mCreatureProps.mProps.mFriction.mValue      = 1.0f;
		mCreatureProps.mProps.mFaceDirAdjust.mValue = 0.5f;
		mCreatureProps.mProps.mAccel.mValue         = 0.1f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mFakePikiParms.read(stream);
		mNaviParms.read(stream);
	}

	// _00-_D8  = CreatureParms
	// _D8 		  = VTBL
	// _DC-_27C	= FakePikiParms
	Parms mNaviParms; // _27C
};

} // namespace Game

#endif
