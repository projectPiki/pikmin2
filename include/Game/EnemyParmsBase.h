#ifndef _GAME_ENEMYPARMSBASE_H
#define _GAME_ENEMYPARMSBASE_H

#include "BaseParm.h"
#include "BitFlag.h"
#include "Parameters.h"
#include "types.h"

struct JKRArchive;
struct Stream;

namespace Game {
struct CreatureProperty {
	struct Property : public Parameters {
		Property()
		    : Parameters(nullptr, "Creature::Property")
		    , mFriction(this, 's000', "friction(not used)", 0.5f, 0.0f, 1.0f)
		    , mWallReflection(this, 's001', "wallReflection", 0.5f, 0.0f, 1.0f)
		    , mFaceDirAdjust(this, 's002', "faceDirAdjust", 0.25f, 0.0f, 1.0f)
		    , mAccel(this, 's003', "accel", 0.1f, 0.01f, 2.0f)
		    , mBounceFactor(this, 's004', "bounceFactor", 0.3f, 0.01f, 2.0f)
		{
		}
		Parm<f32> mFriction;       // _0C
		Parm<f32> mWallReflection; // _34
		Parm<f32> mFaceDirAdjust;  // _5C
		Parm<f32> mAccel;          // _84
		Parm<f32> mBounceFactor;   // _AC
	};

	CreatureProperty()
	    : mProps()
	{
	}

	Property mProps; // _00
};

struct CreatureParms {
	CreatureParms() {};

	// _D8 = VTBL (i.e. after mCreatureProps)
	CreatureProperty mCreatureProps; // _00

	virtual void read(Stream& input) // _08 (weak)
	{
		mCreatureProps.mProps.read(input);
	}
};

struct EnemyParmsBase : public CreatureParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , mHealth(this, 'fp00', "ライフ", 100.0f, 0.0f, 99999.0f)                     // life
		    , mLifeMeterHeight(this, 'fp27', "ライフの高さ", 50.0f, 0.0f, 1000.0f)        // height of life
		    , mRegenerationRate(this, 'fp31', "ライフ回復率", 0.01f, 0.0f, 1.0f)          // life recovery rate
		    , mLifeBeforeAlert(this, 'fp30', "警戒ライフ", 30.0f, 0.0f, 99999.0f)         // 'vigilant life'
		    , mHeightOffsetFromFloor(this, 'fp01', "マップとの当り", 40.0f, 0.0f, 100.0f) // 'match with the map'
		    , mCellRadius(this, 'fp33', "マップとのあたりポリゴンの選定", 40.0f, 0.0f,
		                  500.0f)                                                          // 'selection of map-related polygons'
		    , mPikminDamageRadius(this, 'fp34', "ピクミンとのあたり", 40.0f, 0.0f, 500.0f) // 'about pikmin'
		    , mOffCameraRadius(this, 'fp32', "LOD半径", 40.0f, 0.0f, 500.0f)               // LOD radius
		    , mHorizontalDamageScale(this, 'fp02', "ダメージスケールXZ", 0.2f, 0.0f, 1.0f) // damage scale XZ
		    , mVerticalDamageScale(this, 'fp03', "ダメージスケールY", 0.25f, 0.0f, 1.0f)   // damage scale Y
		    , mDamageScaleDuration(this, 'fp04', "ダメージフレーム", 0.35f, 0.0f, 1.0f)    // 'damage frame'
		    , mMass(this, 'fp05', "質量", 1.0f, 0.0f, 100.0f)                              // mass
		    , mMoveSpeed(this, 'fp06', "速度", 80.0f, 0.0f, 1000.0f)                       // speed
		    , mTurnSpeed(this, 'fp08', "回転速度率", 0.1f, 0.0f, 1.0f)                     // rotation speed rate
		    , mMaxTurnAngle(this, 'fp28', "回転最大速度", 10.0f, 0.0f, 360.0f)             // maximum rotation speed
		    , mTerritoryRadius(this, 'fp09', "テリトリー", 200.0f, 1.0f, 1000.0f)          // territory
		    , mHomeRadius(this, 'fp10', "ホーム範囲", 15.0f, 1.0f, 1000.0f)                // home range
		    , mPrivateRadius(this, 'fp11', "プライベート距離", 70.0f, 0.0f, 1000.0f)       // private distance
		    , mSightRadius(this, 'fp12', "視界距離", 200.0f, 0.0f, 1000.0f)                // sight distance
		    , mFov(this, 'fp25', "視界高", 50.0f, 0.0f, 1000.0f)                           // visibility height
		    , mViewAngle(this, 'fp13', "視界角度", 90.0f, 0.0f, 180.0f)                    // view angle
		    , mSearchDistance(this, 'fp14', "探索距離", 200.0f, 0.0f, 1000.0f)             // search distance
		    , mSearchHeight(this, 'fp26', "探索高", 50.0f, 0.0f, 1000.0f)                  // search height
		    , mSearchAngle(this, 'fp15', "探索角度", 120.0f, 0.0f, 180.0f)                 // search angle
		    , mShakeKnockback(this, 'fp17', "振り払い力", 300.0f, 0.0f, 1000.0f)           // shake off power
		    , mShakeDamage(this, 'fp18', "振り払いダメージ", 0.0f, 0.0f, 1000.0f)          // shake off damage
		    , mShakeRange(this, 'fp19', "振り払い範囲", 120.0f, 0.0f, 1000.0f)             // shake off range
		    , mShakeChance(this, 'fp16', "振り払い率", 1.0f, 0.0f, 1.0f)                   // shake off rate
		    , mMaxAttackRange(this, 'fp20', "攻撃可能\範囲", 70.0f, 0.0f, 1000.0f)         // attack range - SHIFT-JIS IS WRONG
		    , mMaxAttackAngle(this, 'fp21', "攻撃可能\角度", 15.0f, 0.0f,
		                      180.0f)                                              // 'possible attack angle' - SHIFT-JIS IS WRONG
		    , mAttackRadius(this, 'fp22', "攻撃ヒット範囲", 70.0f, 0.0f, 1000.0f)  // attack hit range
		    , mAttackHitAngle(this, 'fp23', "攻撃ヒット角度", 15.0f, 0.0f, 180.0f) // attack hit angle
		    , mAttackDamage(this, 'fp24', "攻撃力", 10.0f, 0.0f, 1000.0f)          // attack power
		    , mAlertDuration(this, 'fp29', "警戒時間", 15.0f, 0.0f, 99.0f)         // alert time
		    , mBitterDuration(this, 'fp35', "石化時間", 1.0f, 0.0f, 60.0f)         // stone time
		    , mPurplePikiStunDamage(this, 'fp36', "ヒップドロップダメージ", 10.0f, 0.0f, 1000.0f) // hip drop damage
		    , mPurplePikiStunChance(this, 'fp37', "地震気絶確立", 0.05f, 0.0f, 1.0f)              // earthquake faint probability
		    , mPurplePikiStunDuration(this, 'fp38', "地震気絶時間", 10.0f, 0.0f, 60.0f)           // earthquake faint time
		    , mShakeOffBlowA(this, 'ip01', "振り払い打撃Ａ", 3, 0, 200)                           // shake off blow A
		    , mShakeOffSticking1(this, 'ip02', "振り払い張付１", 3, 0, 100)                       // shake off sticking 1
		    , mShakeOffBlowB(this, 'ip03', "振り払い打撃Ｂ", 8, 0, 200)                           // shake off blow B
		    , mShakeOffSticking2(this, 'ip04', "振り払い張付２", 5, 0, 100)                       // shake off sticking 2
		    , mShakeOffBlowC(this, 'ip05', "振り払い打撃Ｃ", 15, 0, 200)                          // shake off blow C
		    , mShakeOffSticking3(this, 'ip06', "振り払い張付３", 10, 0, 100)                      // shake off sticking 3
		    , mShakeOffBlowD(this, 'ip07', "振り払い打撃Ｄ", 30, 0, 200)                          // shake off blow D
		{
		}

		Parm<f32> mHealth;                 // _0EC, fp00
		Parm<f32> mLifeMeterHeight;        // _114, fp27
		Parm<f32> mRegenerationRate;       // _13C, fp31
		Parm<f32> mLifeBeforeAlert;        // _164, fp30
		Parm<f32> mHeightOffsetFromFloor;  // _18C, fp01
		Parm<f32> mCellRadius;             // _1B4, fp33
		Parm<f32> mPikminDamageRadius;     // _1DC, fp34
		Parm<f32> mOffCameraRadius;        // _204, fp32
		Parm<f32> mHorizontalDamageScale;  // _22C, fp02
		Parm<f32> mVerticalDamageScale;    // _254, fp03
		Parm<f32> mDamageScaleDuration;    // _27C, fp04
		Parm<f32> mMass;                   // _2A4, fp05
		Parm<f32> mMoveSpeed;              // _2CC, fp06
		Parm<f32> mTurnSpeed;              // _2F4, fp08
		Parm<f32> mMaxTurnAngle;           // _31C, fp28
		Parm<f32> mTerritoryRadius;        // _344, fp09
		Parm<f32> mHomeRadius;             // _36C, fp10
		Parm<f32> mPrivateRadius;          // _394, fp11
		Parm<f32> mSightRadius;            // _3BC, fp12
		Parm<f32> mFov;                    // _3E4, fp25
		Parm<f32> mViewAngle;              // _40C, fp13
		Parm<f32> mSearchDistance;         // _434, fp14
		Parm<f32> mSearchHeight;           // _45C, fp26
		Parm<f32> mSearchAngle;            // _484, fp15
		Parm<f32> mShakeKnockback;         // _4AC, fp17
		Parm<f32> mShakeDamage;            // _4D4, fp18
		Parm<f32> mShakeRange;             // _4FC, fp19
		Parm<f32> mShakeChance;            // _524, fp16
		Parm<f32> mMaxAttackRange;         // _54C, fp20
		Parm<f32> mMaxAttackAngle;         // _574, fp21
		Parm<f32> mAttackRadius;           // _59C, fp22
		Parm<f32> mAttackHitAngle;         // _5C4, fp23
		Parm<f32> mAttackDamage;           // _5EC, fp24
		Parm<f32> mAlertDuration;          // _614, fp29
		Parm<f32> mBitterDuration;         // _63C, fp35
		Parm<f32> mPurplePikiStunDamage;   // _664, fp36
		Parm<f32> mPurplePikiStunChance;   // _68C, fp37
		Parm<f32> mPurplePikiStunDuration; // _6B4, fp38
		Parm<int> mShakeOffBlowA;          // _6DC, ip01
		Parm<int> mShakeOffSticking1;      // _704, ip02
		Parm<int> mShakeOffBlowB;          // _72C, ip03
		Parm<int> mShakeOffSticking2;      // _754, ip04
		Parm<int> mShakeOffBlowC;          // _77C, ip05
		Parm<int> mShakeOffSticking3;      // _7A4, ip06
		Parm<int> mShakeOffBlowD;          // _7CC, ip07
	};

	EnemyParmsBase()
	{
		mFlags[0].clear();
		mFlags[1].clear();
	}

	bool loadSettingFile(JKRArchive* archive, char* name);
	void setDebugParm(u32);
	void resetDebugParm(u32);

	virtual void read(Stream& input) // _08 (weak)
	{
		CreatureParms::read(input);
		mGeneral.read(input);
	}

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	BitFlag<u16> mFlags[2]; // _DC
	Parms mGeneral;         // _E0
};
} // namespace Game

#endif
