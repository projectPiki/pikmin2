#ifndef _GAME_PIKIPARMS_H
#define _GAME_PIKIPARMS_H

#include "Game/FakePiki.h"

namespace Game {
struct PikiParms : public FakePikiParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "Piki::Parms")
		    , mWalkSpeed(this, 'p000', "歩く速度", 84.0f, 0.0f, 500.0f)                        // 'walking speed'
		    , mRunSpeed(this, 'p001', "走る速度", 120.0f, 0.0f, 500.0f)                        // 'running speed'
		    , mFlowerRunSpeed(this, 'p054', "花ピキスピード", 170.0f, 0.0f, 500.0f)            // 'flower pikmin speed'
		    , mBudRunSpeed(this, 'p065', "つぼみスピード", 140.0f, 0.0f, 500.0f)               // 'bud speed'
		    , mPressedScale(this, 'p038', "ピキ表\示スケール", 1.0f, 0.1f, 10.0f)              // 'piki display scale'
		    , mHealth(this, 'p003', "標準ライフ", 100.0f, 0.0f, 1000.0f)                       // 'normal life'
		    , mWhiteHealth(this, 'p010', "のっぽライフ", 150.0f, 0.0f, 1000.0f)                // 'tall life'
		    , mPurpleHealth(this, 'p011', "でぶライフ", 200.0f, 0.0f, 1000.0f)                 // 'fat life'
		    , mBlueAttackDamage(this, 'p004', "青 攻撃力", 10.f, 0.0f, 1000.0f)                // 'blue attack power'
		    , mRedAttackDamage(this, 'p012', "赤 攻撃力", 15.0f, 0.0f, 1000.0f)                // 'red attack power'
		    , mYellowAttackDamage(this, 'p013', "黄 攻撃力", 10.0f, 0.0f, 1000.0f)             // 'yellow attack power'
		    , mPurpleAttackDamage(this, 'P003', "黒　攻撃力", 10.0f, 1.0f, 30.0f)              // 'black attack power'
		    , mWhiteAttackDamage(this, 'P004', "白　攻撃力", 1.0f, 1.0f, 30.0f)                // 'white attack power'
		    , mEnergyForBud(this, 'p005', "つぼみに必要なエネルギー数", 1, 1, 100)             // 'number of energy required for bud'
		    , mEnergyForFlower(this, 'p006', "花に必要なエネルギー数", 2, 1, 100)              // 'number of energy required for flower'
		    , mScale(this, 'p007', "ノーマルピキのスケール", 0.8f, 0.0f, 2.0f)                 // 'normal piki scale'
		    , mWhiteScale(this, 'p008', "のっぽピキのスケール", 1.5f, 0.0f, 2.0f)              // 'tall piki scale'
		    , mPurpleScale(this, 'p009', "ふとっちょピキのスケール", 1.2f, 0.0f, 2.0f)         // 'fatty piki scale'
		    , mCrushTime(this, 'p014', "つぶれ総時間", 5.0f, 0.0f, 10.0f)                      // 'total crush time'
		    , mFlatTime(this, 'p015', "ぺったんこ時間", 3.0f, 0.0f, 10.0f)                     // 'flat time'
		    , mWaveTime(this, 'p016', "波時間", 1.0f, 0.0f, 10.0f)                             // 'wave time'
		    , mWaveAttackRange(this, 'p037', "Wave Attac 攻撃範囲", 40.0f, 0.0f, 200.0f)       // 'wave attac range'
		    , mStepAnimSpeed(this, 'p017', "ASIBUMI 開始スピード", 5.0f, 0.0f, 500.0f)         // 'ASIBUMI start speed' (stepping?)
		    , mWalkAnimSpeed(this, 'p018', "WALK 開始スピード", 35.0f, 0.0f, 500.0f)           // 'WALK start speed'
		    , mRunAnimSpeed(this, 'p019', "RUN 開始スピード", 70.0f, 0.0f, 500.0f)             // 'RUN start speed'
		    , mEscapeAnimSpeed(this, 'p020', "ESCAPE 開始スピード", 160.0f, 0.0f, 500.0f)      // 'ESCAPE start speed'
		    , mWalkFrameMin(this, 'p021', "WALK 再生フレーム数(min)", 30.0f, 0.0f, 300.0f)     // 'WALK playback frame count (min)'
		    , mWalkFrameMax(this, 'p022', "WALK 再生フレーム数(max)", 60.0f, 0.0f, 300.0f)     // 'WALK playback frame count (max)'
		    , mRunFrameMin(this, 'p023', "RUN 再生フレーム数(min)", 30.0f, 0.0f, 300.0f)       // 'RUN playback frame count (min)'
		    , mRunFrameMax(this, 'p024', "RUN 再生フレーム数(max)", 60.0f, 0.0f, 300.0f)       // 'RUN playback frame count (max)'
		    , mEscapeFrameMin(this, 'p025', "ESCAPE 再生フレーム数(min)", 30.0f, 0.0f, 300.0f) // 'ESCAPE playback frame count (min)'
		    , mEscapeFrameMax(this, 'p026', "ESCAPE 再生フレーム数(max)", 60.0f, 0.0f, 300.0f) // 'ESCAPE playback frame count (max)'
		    , mHitSizeMin(this, 'p027', "当たりサイズ(min)", 6.0f, 0.0f, 100.0f)               // 'hit size (min)'
		    , mHitSizeMax(this, 'p034', "当たりサイズ(max)", 10.0f, 0.0f, 100.0f)              // 'hit size (max)'
		    , mInverseWeight(this, 'p028', "重さの逆数", 100.0f, 0.0f, 2000.0f)                // 'inverse of weight'
		    , mGroundSize(this, 'p039', "地面当たりサイズ", 8.0f, 0.0f, 100.0f)                // 'ground size'
		    , mWhiteDistance(this, 'p029', "white 距離", 600.0f, 0.0f, 10000.0f)               // 'white distance'
		    , mGrayDistance(this, 'p030', "gray 距離", 1000.0f, 0.0f, 10000.0f)                // 'gray distance'
		    , mLostChildTime(this, 'p031', "迷子時間", 10.0f, 0.0f, 1000.0f)                   // 'lost child time'
		    , mWhiteDistanceFree(this, 'p032', "white 距離(Free)", 200.0f, 0.0f, 10000.0f)     // 'white distance (Free)'
		    , mGrayDistanceFree(this, 'p033', "gray 距離(Free)", 800.0f, 0.0f, 10000.0f)       // 'gray distance (Free)'
		    , mWallPushTimeDynamic(this, 'p035', "壁を押し始める時間(Dynamic)", 0.6f, 0.0f,
		                           10.0f) // 'time to start pushing against the wall (Dynamic)'
		    , mWallPushTimeStatic(this, 'p036', "壁を押し始める時間(Static)", 0.6f, 0.0f,
		                          10.0f)                                                // 'time to start pushing against the wall (Static)'
		    , mTimeToFree(this, 'p040', "フリーになるまでの時間", 15.0f, 1.0f, 1080.0f) // 'time to free'
		    , mEnemySearchRange(this, 'p041', "敵のサーチエリア", 60.0f, 1.0f, 1000.0f) // 'enemy search area'
		    , mPelletSearchRange(this, 'p042', "Pelletのサーチエリア", 30.0f, 1.0f, 1000.0f)     // 'pellet search area'
		    , mNectarRockSearchRange(this, 'P010', "農耕岩のサーチエリア", 30.0f, 1.0f, 1000.0f) // 'agricultural rock search area' (lmao)
		    , mNectarRockRangeDuplicate(this, 'P011', "農耕岩のサーチエリア", 40.0f, 1.0f,
		                                1000.0f)                                           // 'agricultural rock search area' (mistake?)
		    , mBridgeSearchRange(this, 'P012', "橋のサーチエリア", 100.0f, 1.0f, 1000.0f)  // 'bridge search area'
		    , mClogSearchRange(this, 'P013', "壊す岩のサーチエリア", 30.0f, 1.0f, 1000.0f) // 'breaking rock search area'
		    , mBuriedTreasureSearchRange(this, 'P014', "掘り出し物サーチエリア", 30.0f, 1.0f, 1000.0f) // 'bargain search area' (lmao??)
		    , mSpiderWortSearchRange(this, 'P015', "農耕植物のサーチエリア", 30.0f, 1.0f, 1000.0f)     // 'agricultural plant search area'
		    , mKnockdownRecoverTimeMax(this, 'p043', "はじかれて起きるまでの最長時間", 0.7f, 0.0f,
		                               10.0f) // 'max time to wake up after being repelled'
		    , mKnockdownRecoverTimeMin(this, 'p074', "はじかれて起きるまでの最小時間", 0.7f, 0.0f,
		                               10.0f) // 'min time to wake up after being repelled'
		    , mSeedLeaftoBudTime(this, 'p044', "leaf->bud    の時間（秒）", 10.0f, 1.0f, 1000.0f)      // 'leaf->bud time (seconds)'
		    , mSeedBudToFlowerTime(this, 'p045', "bud->flower  の時間（秒）", 10.0f, 1.0f, 1000.0f)    // 'bud->flower time (seconds)'
		    , mSeedFlowerToWitherTime(this, 'p046', "flower->seed の時間（秒）", 10.0f, 1.0f, 1000.0f) // 'flower->seed time (seconds)'
		    , mSeedWitherToLeaf(this, 'p047', "seed->leaf   の時間（秒）", 10.0f, 1.0f, 1000.0f)       // 'seed->leaf time (seconds)'
		    , mFlowerPikiGravity(this, 'p048', "花ピキ重力率", 0.01f, 0.0f, 1.0f)                      // 'flower piki gravity rate'
		    , mBuriedSeedWaitTime(this, 'p049', "taneupTime（秒）", 1.0f, 0.0f, 300.0f)                // 'taneupTime (seconds)' (seed?)
		    , mUnpluckableTime(this, 'p050', "hatugaTime（秒）", 1.0f, 0.0f, 300.0f)                   // 'hatugaTime (seconds)' (bud?)
		    , mGrowUpToFlowerTime(this, 'p051', "growupTime（秒）", 4.0f, 0.0f, 300.0f)                // 'growupTime (seconds)'
		    , mWitherFromFlowerTime(this, 'p052', "kareTime（秒）", 4.0f, 0.0f, 300.0f)    // 'kareTime (seconds)' (he? boyfriend?)
		    , mWitheredHideTime(this, 'p053', "rebirthTime（秒）", 1.0f, 0.0f, 300.0f)     // 'rebirthTime (seconds)'
		    , mPanicMaxTime(this, 'p055', "火に包まれて死ぬまでの時間", 3.0f, 0.0f, 30.0f) // 'time until death in fire'
		    , mFlowerPikiRefundChance(this, 'p056', "花ピキが種として再生する確率", 0.8f, 0.0f,
		                              1.0f)                                         // 'probability of flower piki regenerating as seeds'
		    , mPikiBombFuseTime(this, 'p057', "爆発までの時間", 2.0f, 0.0f, 60.0f)  // 'time to detonation/explosion'
		    , mPikiBombAOERange(this, 'p058', "爆弾効果範囲", 50.0f, 0.0f, 1000.0f) // 'bomb area of effect'
		    , mPikiBombGateDamage(this, 'p059', "爆弾ダメージ量 水門", 200.0f, 0.0f, 1000.0f) // 'bomb damage floodgate'
		    , mPikiBombNaviDamage(this, 'p075', "爆弾ダメージ Orima", 10.0f, 0.0f, 1000.0f)   // 'bomb damage olimar'
		    , mPikiBombTekiDamage(this, 'p076', "爆弾ダメージ Teki", 120.0f, 0.0f, 1000.0f)   // 'bomb damage teki/enemy'
		    , mPikiBombPikiDamage(this, 'p077', "爆弾ダメージ Piki", 765.0f, 0.0f, 1000.0f)   // 'bomb damage piki'
		    , mSunsetAutoReturnRange(this, 'p060', "日没生き残り範囲", 200.0f, 0.0f, 5000.0f) // 'sunset survival range'
		    , mPlatformLaunchDistance(this, 'p061', "隊列起動距離", 250.0f, 0.0f, 5000.0f)    // 'platform launch distance'
		    , mMaxDrowningFrames(this, 'p062', "おぼれフレーム数", 30, 0, 300)                // 'number of drowning frames'
		    , mDrowningFramesRange(this, 'p063', "おぼれフレーム数（ばらつき）", 10, 0, 300)  // 'number of drowning frames (variation)'
		    , mWallPushAbandonTime(this, 'p064', "壁押しあきらめ時間", 5.0f, 1.0f, 120.0f)    // 'time to give up pushing against the wall'
		    , mBombSearchRange(this, 'p066', "BOMB サーチ距離", 300.0f, 0.0f, 1000.0f)        // 'BOMB search distance'
		    , mMinBombThrowDistance(this, 'p067', "BOMB throw Min", 110.0f, 0.0f, 1000.0f)
		    , mMaxBombThrowDistance(this, 'p068', "BOMB throw Max", 160.0f, 0.0f, 1000.0f)
		    , mBombDropTime(this, 'p069', "BOMB 置き逃げ時間", 1.5f, 0.0f, 60.0f)           // 'BOMB leave time'
		    , mBombThrowSpeed(this, 'p070', "BOMB 投げスピード", 150.0f, 0.0f, 1000.0f)     // 'BOMB throw speed'
		    , mBombAttackRange(this, 'p071', "BOMB 警告範囲", 300.0f, 0.0f, 1000.0f)        // 'BOMB warning range'
		    , mBombTime(this, 'p072', "BOMB 間、タイム", 0.65f, 0.0f, 10.0f)                // 'BOMB, between time'
		    , mBombDropDistance(this, 'p073', "BOMB セット距離", 50.0f, 0.0f, 1000.0f)      // 'BOMB set distance'
		    , mNewColorScale(this, 'P000', "新色のスケール", 1.2f, 0.5f, 2.0f)              // 'new color scale'
		    , mWhiteRunSpeedMultiplier(this, 'P001', "白スピード倍率", 2.0f, 1.0f, 3.0f)    // 'white speed multiplier'
		    , mPurpleRunSpeedMultiplier(this, 'P002', "黒スピード倍率", 0.6f, 0.1f, 3.0f)   // 'black speed multiplier'
		    , mPurpleCarryPower(this, 'P005', "黒　運搬能\力", 0.5f, 0.0f, 5.0f)            // 'black carrying capacity'
		    , mWhiteCarryPower(this, 'P006', "白　運搬能\力", 1.5f, 0.0f, 5.0f)             // 'white carrying capacity'
		    , mBudCarrySpeedBonus(this, 'P020', "つぼみ|運搬ボーナス", 0.5f, 0.0f, 2.0f)    // 'bud | carrying bonus'
		    , mFlowerCarrySpeedBonus(this, 'P021', "はな|運搬ボーナス", 1.0f, 0.0f, 2.0f)   // 'flower | carrying bonus'
		    , mCarryMaxFactor(this, 'P018', "運搬 MAX FACTOR", 0.7f, 0.0f, 2.0f)            // 'carrying MAX FACTOR'
		    , mCarryMinFactor(this, 'P019', "運搬 MAX FACTOR", 0.35f, 0.0f, 2.0f)           // 'carrying MAX FACTOR' (mistake?)
		    , mDopeMaxDuration(this, 'P007', "ドーピング持続時間", 30.0f, 0.0f, 200.0f)     // 'doping duration'
		    , mDopeAttackDamage(this, 'P008', "ドーピングピキ 攻撃", 25.0f, 0.0f, 100.0f)   // 'doping piki attack'
		    , mDopeRunSpeed(this, 'P009', "ドーピングピキ スピード", 190.0f, 0.0f, 220.0f)  // 'doping piki speed'
		    , mKurageKillTime(this, 'P016', "クラゲ消化時間", 16.0f, 0.0f, 120.0f)          // 'jellyfish digestion time'
		    , mPoundAOERange(this, 'P017', "ドシン半径", 60.0f, 0.0f, 1000.0f)              // 'doshin radius' (pound radius?)
		    , mPoundDamage(this, 'P022', "黒ヒップアタックダメージ", 100.0f, 0.0f, 1000.0f) // 'black hip attack damage'
		{
		}

		// _27C-_288	= Parameters
		Parm<f32> mWalkSpeed;                 // _288, p000, 'initial walk speed'; affects things like dismiss speed and suffering run speed
		Parm<f32> mRunSpeed;                  // _2B0, p001, normal movement speed
		Parm<f32> mFlowerRunSpeed;            // _2D8, p054
		Parm<f32> mBudRunSpeed;               // _300, p065
		Parm<f32> mPressedScale;              // _328, p038, scale for when crushed
		Parm<f32> mHealth;                    // _350, p003, unused, reference to pikmin hp
		Parm<f32> mWhiteHealth;               // _378, p010, unused (white pikmin health)
		Parm<f32> mPurpleHealth;              // _3A0, p011, unused (purple pikmin health)
		Parm<f32> mBlueAttackDamage;          // _3C8, p004, blue pikmin damage (also default damage)
		Parm<f32> mRedAttackDamage;           // _3F0, p012, red pikmin damage + vs mode damage
		Parm<f32> mYellowAttackDamage;        // _418, p013, yellow pikmin damage
		Parm<f32> mPurpleAttackDamage;        // _440, P003, purple pikmin damage
		Parm<f32> mWhiteAttackDamage;         // _468, P004, white pikmin damage
		Parm<int> mEnergyForBud;              // _490, p005, related to generating buds, unknown
		Parm<int> mEnergyForFlower;           // _4B8, p006, related to generating flowers, unknown
		Parm<f32> mScale;                     // _4E0, p007, default pikmin model scale
		Parm<f32> mWhiteScale;                // _508, p008, white pikmin model scale
		Parm<f32> mPurpleScale;               // _530, p009, purple pikmin model scale
		Parm<f32> mCrushTime;                 // _558, p014
		Parm<f32> mFlatTime;                  // _580, p015, also related to being crushed?
		Parm<f32> mWaveTime;                  // _5A8, p016
		Parm<f32> mWaveAttackRange;           // _5D0, p037
		Parm<f32> mStepAnimSpeed;             // _5F8, p017
		Parm<f32> mWalkAnimSpeed;             // _620, p018
		Parm<f32> mRunAnimSpeed;              // _648, p019
		Parm<f32> mEscapeAnimSpeed;           // _670, p020
		Parm<f32> mWalkFrameMin;              // _698, p021
		Parm<f32> mWalkFrameMax;              // _6C0, p022
		Parm<f32> mRunFrameMin;               // _6E8, p023
		Parm<f32> mRunFrameMax;               // _710, p024
		Parm<f32> mEscapeFrameMin;            // _738, p025
		Parm<f32> mEscapeFrameMax;            // _760, p026
		Parm<f32> mHitSizeMin;                // _788, p027
		Parm<f32> mHitSizeMax;                // _7B0, p034
		Parm<f32> mInverseWeight;             // _7D8, p028
		Parm<f32> mGroundSize;                // _800, p039
		Parm<f32> mWhiteDistance;             // _828, p029
		Parm<f32> mGrayDistance;              // _850, p030
		Parm<f32> mLostChildTime;             // _878, p031
		Parm<f32> mWhiteDistanceFree;         // _8A0, p032
		Parm<f32> mGrayDistanceFree;          // _8C8, p033
		Parm<f32> mWallPushTimeDynamic;       // _8F0, p035, likely leftover from pik1 wall pushes
		Parm<f32> mWallPushTimeStatic;        // _918, p036, likely leftover from pik1 wall pushes
		Parm<f32> mTimeToFree;                // _940, p040
		Parm<f32> mEnemySearchRange;          // _968, p041, search ranges when idle
		Parm<f32> mPelletSearchRange;         // _990, p042
		Parm<f32> mNectarRockSearchRange;     // _9B8, P010,
		Parm<f32> mNectarRockRangeDuplicate;  // _9E0, P011, duplicate of above?
		Parm<f32> mBridgeSearchRange;         // _A08, P012
		Parm<f32> mClogSearchRange;           // _A30, P013
		Parm<f32> mBuriedTreasureSearchRange; // _A58, P014
		Parm<f32> mSpiderWortSearchRange;     // _A80, P015
		Parm<f32> mKnockdownRecoverTimeMax;   // _AA8, p043, when flicked or knocked down
		Parm<f32> mKnockdownRecoverTimeMin;   // _AD0, p074, when flicked or knocked down
		Parm<f32> mSeedLeaftoBudTime;         // _AF8, p044, unused?
		Parm<f32> mSeedBudToFlowerTime;       // _B20, p045, unused?
		Parm<f32> mSeedFlowerToWitherTime;    // _B48, p046, unused? flower seed -> leaf
		Parm<f32> mSeedWitherToLeaf;          // _B70, p047, unused? withered seed -> pluckable leaf
		Parm<f32> mFlowerPikiGravity;         // _B98, p048, gravity for flower pikmin when thrown
		Parm<f32> mBuriedSeedWaitTime;        // _BC0, p049, time seed is hidden on hitting the ground (pikihead burystate)
		Parm<f32> mUnpluckableTime;           // _BE8, p050, time withered seed is small/unpluckable (piki tanestate)
		Parm<f32> mGrowUpToFlowerTime;        // _C10, p051, time seed takes to upgrade a stage (pikihead waitstate)
		Parm<f32> mWitherFromFlowerTime;      // _C38, p052, time seed takes to wither/downgrade to leaf (pikihead waitstate)
		Parm<f32> mWitheredHideTime;          // _C60, p053, time seed hides underground after withering (pikihead SioreState)
		Parm<f32> mPanicMaxTime;              // _C88, p055
		Parm<f32> mFlowerPikiRefundChance;    // _CB0, p056, unused, leftover code for flower piki to return as seeds on death
		Parm<f32> mPikiBombFuseTime;          // _CD8, p057, unused, presumably bomb code leftover from P1
		Parm<f32> mPikiBombAOERange;          // _D00, p058, unused, presumably bomb code leftover from P1
		Parm<f32> mPikiBombGateDamage;        // _D28, p059, unused, presumably bomb code leftover from P1
		Parm<f32> mPikiBombNaviDamage;        // _D50, p075, unused, presumably bomb code leftover from P1
		Parm<f32> mPikiBombTekiDamage;        // _D78, p076, unused, presumably bomb code leftover from P1
		Parm<f32> mPikiBombPikiDamage;        // _DA0, p077, unused, presumably bomb code leftover from P1
		Parm<f32> mSunsetAutoReturnRange;     // _DC8, p060, range to return to onyon on sunset instead of dying
		Parm<f32> mPlatformLaunchDistance;    // _DF0, p061
		Parm<int> mMaxDrowningFrames;         // _E18, p062
		Parm<int> mDrowningFramesRange;       // _E40, p063
		Parm<f32> mWallPushAbandonTime;       // _E68, p064, leftover from pik1, presummably time to abandon a wall push?
		Parm<f32> mBombSearchRange;           // _E90, p066, leftover from pik1, range for pikmin to search for a bomb
		Parm<f32> mMinBombThrowDistance;      // _EB8, p067, min speed for thrown bombs
		Parm<f32> mMaxBombThrowDistance;      // _EE0, p068, max speed for thrown bombs
		Parm<f32> mBombDropTime;              // _F08, p069, leftover from pik1, presummably time for pikmin to drop bombs on their own?
		Parm<f32> mBombThrowSpeed;            // _F30, p070, pik1 bomb throw speed
		Parm<f32> mBombAttackRange;           // _F58, p071, related to pik1 bombs, pressumably range to attack with bombs?
		Parm<f32> mBombTime;                  // _F80, p072, unknown, more pik1 bomb stufff
		Parm<f32> mBombDropDistance;          // _FA8, p073, related to pik1 bombs, range to drop bombs?
		Parm<f32> mNewColorScale;             // _FD0, P000, unknown
		Parm<f32> mWhiteRunSpeedMultiplier;   // _FF8, P001, multiplier to speed values for white pikmin
		Parm<f32> mPurpleRunSpeedMultiplier;  // _1020, P002, multiplier to speed values for purple pikmin
		Parm<f32> mPurpleCarryPower;          // _1048, P005, carry strength for purples
		Parm<f32> mWhiteCarryPower;           // _1070, P006, carry strength for whites
		Parm<f32> mBudCarrySpeedBonus;        // _1098, P020, speed bonus for bud pikmin carrying stuff
		Parm<f32> mFlowerCarrySpeedBonus;     // _10C0, P021, speed bonus for flower pikmin carrying stuff
		Parm<f32> mCarryMaxFactor;            // _10E8, P018, "(transport) MAX FACTOR" unknown
		Parm<f32> mCarryMinFactor;            // _1110, P019, "(transport) MAX FACTOR" unknown
		Parm<f32> mDopeMaxDuration;           // _1138, P007, max duration of spicy spray
		Parm<f32> mDopeAttackDamage;          // _1160, P008, attack damage for spicied pikmin
		Parm<f32> mDopeRunSpeed;              // _1188, P009, run speed for spicied pikmin
		Parm<f32> mKurageKillTime;            // _11B0, P016, time for jellyfloats to kill pikmin (idk why this is here)
		Parm<f32> mPoundAOERange;             // _11D8, P017, radius for purple pikmin ground pound AOE
		Parm<f32> mPoundDamage;               // _1200, P022
		                                      // _1228 = IParameters ptr
	};

	PikiParms()
	    : mPikiParms()
	{
		mCreatureProps.mProps.mFriction.mValue      = 0.1f;
		mCreatureProps.mProps.mFaceDirAdjust.mValue = 0.8f;
		mCreatureProps.mProps.mAccel.mValue         = 0.14f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mFakePikiParms.read(stream);
		mPikiParms.read(stream);
	}

	// _00-_D8  = CreatureParms
	// _D8 		  = VTBL
	// _DC-_27C	= FakePikiParms
	Parms mPikiParms; // _27C
};

} // namespace Game

#endif
