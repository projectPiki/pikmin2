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
		    , m_friction(this, 's000', "friction(not used)", 0.5f, 0.0f, 1.0f)
		    , m_wallReflection(this, 's001', "wallReflection", 0.5f, 0.0f, 1.0f)
		    , m_faceDirAdjust(this, 's002', "faceDirAdjust", 0.25f, 0.0f, 1.0f)
		    , m_accel(this, 's003', "accel", 0.1f, 0.01f, 2.0f)
		    , m_bounceFactor(this, 's004', "bounceFactor", 0.3f, 0.01f, 2.0f)
		{
		}
		Parm<f32> m_friction;       // _0C
		Parm<f32> m_wallReflection; // _34
		Parm<f32> m_faceDirAdjust;  // _5C
		Parm<f32> m_accel;          // _84
		Parm<f32> m_bounceFactor;   // _AC
	};

	CreatureProperty()
	    : m_props()
	{
	}

	Property m_props; // _00
};

struct CreatureParms {
	CreatureParms() {};

	// _D8 = VTBL (i.e. after m_creatureProps)
	CreatureProperty m_creatureProps; // _00

	virtual void read(Stream& input) // _08 (weak)
	{
		m_creatureProps.m_props.read(input);
	}
};

struct EnemyParmsBase : public CreatureParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_health(this, 'fp00', "ライフ", 100.0f, 0.0f, 99999.0f)                          // life
		    , m_lifeMeterHeight(this, 'fp27', "ライフの高さ", 50.0f, 0.0f, 1000.0f)             // height of life
		    , m_regenerationRate(this, 'fp31', "ライフ回復率", 0.01f, 0.0f, 1.0f)               // life recovery rate
		    , m_fp30(this, 'fp30', "警戒ライフ", 30.0f, 0.0f, 99999.0f)                         // 'vigilant life'
		    , m_fp01(this, 'fp01', "マップとの当り", 40.0f, 0.0f, 100.0f)                       // 'match with the map'
		    , m_cellRadius(this, 'fp33', "マップとのあたりポリゴンの選定", 40.0f, 0.0f, 500.0f) // 'selection of map-related polygons'
		    , m_pikminDamageRadius(this, 'fp34', "ピクミンとのあたり", 40.0f, 0.0f, 500.0f)     // 'about pikmin'
		    , m_offCameraRadius(this, 'fp32', "LOD半径", 40.0f, 0.0f, 500.0f)                   // LOD radius
		    , m_horizontalDamageScale(this, 'fp02', "ダメージスケールXZ", 0.2f, 0.0f, 1.0f)     // damage scale XZ
		    , m_verticalDamageScale(this, 'fp03', "ダメージスケールY", 0.25f, 0.0f, 1.0f)       // damage scale Y
		    , m_damageScaleDuration(this, 'fp04', "ダメージフレーム", 0.35f, 0.0f, 1.0f)        // 'damage frame'
		    , m_fp05(this, 'fp05', "質量", 1.0f, 0.0f, 100.0f)                                  // mass
		    , m_moveSpeed(this, 'fp06', "速度", 80.0f, 0.0f, 1000.0f)                           // speed
		    , m_rotationalAccel(this, 'fp08', "回転速度率", 0.1f, 0.0f, 1.0f)                   // rotation speed rate
		    , m_rotationalSpeed(this, 'fp28', "回転最大速度", 10.0f, 0.0f, 360.0f)              // maximum rotation speed
		    , m_territoryRadius(this, 'fp09', "テリトリー", 200.0f, 1.0f, 1000.0f)              // territory
		    , m_homeRadius(this, 'fp10', "ホーム範囲", 15.0f, 1.0f, 1000.0f)                    // home range
		    , m_privateRadius(this, 'fp11', "プライベート距離", 70.0f, 0.0f, 1000.0f)           // private distance
		    , m_sightRadius(this, 'fp12', "視界距離", 200.0f, 0.0f, 1000.0f)                    // sight distance
		    , m_fp25(this, 'fp25', "視界高", 50.0f, 0.0f, 1000.0f)                              // visibility height
		    , m_fov(this, 'fp13', "視界角度", 90.0f, 0.0f, 180.0f)                              // view angle
		    , m_fp14(this, 'fp14', "探索距離", 200.0f, 0.0f, 1000.0f)                           // search distance
		    , m_fp26(this, 'fp26', "探索高", 50.0f, 0.0f, 1000.0f)                              // search height
		    , m_fp15(this, 'fp15', "探索角度", 120.0f, 0.0f, 180.0f)                            // search angle
		    , m_shakeKnockback(this, 'fp17', "振り払い力", 300.0f, 0.0f, 1000.0f)               // shake off power
		    , m_shakeDamage(this, 'fp18', "振り払いダメージ", 0.0f, 0.0f, 1000.0f)              // shake off damage
		    , m_shakeRange(this, 'fp19', "振り払い範囲", 120.0f, 0.0f, 1000.0f)                 // shake off range
		    , m_shakeRateMaybe(this, 'fp16', "振り払い率", 1.0f, 0.0f, 1.0f)                    // shake off rate
		    , m_fp20(this, 'fp20', "攻撃可能\範囲", 70.0f, 0.0f, 1000.0f)                       // attack range - SHIFT-JIS IS WRONG
		    , m_fp21(this, 'fp21', "攻撃可能\角度", 15.0f, 0.0f, 180.0f)   // 'possible attack angle' - SHIFT-JIS IS WRONG
		    , m_fp22(this, 'fp22', "攻撃ヒット範囲", 70.0f, 0.0f, 1000.0f) // attack hit range
		    , m_fp23(this, 'fp23', "攻撃ヒット角度", 15.0f, 0.0f, 180.0f)  // attack hit angle
		    , m_attackDamage(this, 'fp24', "攻撃力", 10.0f, 0.0f, 1000.0f) // attack power
		    , m_fp29(this, 'fp29', "警戒時間", 15.0f, 0.0f, 99.0f)         // alert time
		    , m_stoneDuration(this, 'fp35', "石化時間", 1.0f, 0.0f, 60.0f) // stone time
		    , m_purplePikminHipDropDamage(this, 'fp36', "ヒップドロップダメージ", 10.0f, 0.0f, 1000.0f) // hip drop damage
		    , m_purplePikminStunChance(this, 'fp37', "地震気絶確立", 0.05f, 0.0f, 1.0f)                 // earthquake faint probability
		    , m_purplePikminStunTime(this, 'fp38', "地震気絶時間", 10.0f, 0.0f, 60.0f)                  // earthquake faint time
		    , m_ip01(this, 'ip01', "振り払い打撃Ａ", 3, 0, 200)                                         // shake off blow A
		    , m_ip02(this, 'ip02', "振り払い張付１", 3, 0, 100)                                         // shake off sticking 1
		    , m_ip03(this, 'ip03', "振り払い打撃Ｂ", 8, 0, 200)                                         // shake off blow B
		    , m_ip04(this, 'ip04', "振り払い張付２", 5, 0, 100)                                         // shake off sticking 2
		    , m_ip05(this, 'ip05', "振り払い打撃Ｃ", 15, 0, 200)                                        // shake off blow C
		    , m_ip06(this, 'ip06', "振り払い張付３", 10, 0, 100)                                        // shake off sticking 3
		    , m_ip07(this, 'ip07', "振り払い打撃Ｄ", 30, 0, 200)                                        // shake off blow D
		{
		}

		Parm<f32> m_health;                    // _0EC
		Parm<f32> m_lifeMeterHeight;           // _114
		Parm<f32> m_regenerationRate;          // _13C
		Parm<f32> m_fp30;                      // _164, 'vigilant life'
		Parm<f32> m_fp01;                      // _18C, 'match with the map'
		Parm<f32> m_cellRadius;                // _1B4
		Parm<f32> m_pikminDamageRadius;        // _1DC
		Parm<f32> m_offCameraRadius;           // _204
		Parm<f32> m_horizontalDamageScale;     // _22C
		Parm<f32> m_verticalDamageScale;       // _254
		Parm<f32> m_damageScaleDuration;       // _27C
		Parm<f32> m_fp05;                      // _2A4, 'mass'
		Parm<f32> m_moveSpeed;                 // _2CC
		Parm<f32> m_rotationalAccel;           // _2F4
		Parm<f32> m_rotationalSpeed;           // _31C
		Parm<f32> m_territoryRadius;           // _344
		Parm<f32> m_homeRadius;                // _36C
		Parm<f32> m_privateRadius;             // _394
		Parm<f32> m_sightRadius;               // _3BC
		Parm<f32> m_fp25;                      // _3E4, 'visibility height'
		Parm<f32> m_fov;                       // _40C
		Parm<f32> m_fp14;                      // _434, 'search distance'
		Parm<f32> m_fp26;                      // _45C, 'search height'
		Parm<f32> m_fp15;                      // _484, 'search angle'
		Parm<f32> m_shakeKnockback;            // _4AC
		Parm<f32> m_shakeDamage;               // _4D4
		Parm<f32> m_shakeRange;                // _4FC
		Parm<f32> m_shakeRateMaybe;            // _524
		Parm<f32> m_fp20;                      // _54C, 'attack range'
		Parm<f32> m_fp21;                      // _574, 'possibly attack angle'
		Parm<f32> m_fp22;                      // _59C, 'attack hit range'
		Parm<f32> m_fp23;                      // _5C4, 'attack hit angle'
		Parm<f32> m_attackDamage;              // _5EC
		Parm<f32> m_fp29;                      // _614, 'alert time'
		Parm<f32> m_stoneDuration;             // _63C
		Parm<f32> m_purplePikminHipDropDamage; // _664
		Parm<f32> m_purplePikminStunChance;    // _68C
		Parm<f32> m_purplePikminStunTime;      // _6B4
		Parm<int> m_ip01;                      // _6DC, 'shake off blow A'
		Parm<int> m_ip02;                      // _704, 'shake off sticking 1'
		Parm<int> m_ip03;                      // _72C, 'shake off blow B'
		Parm<int> m_ip04;                      // _754, 'shake off sticking 2'
		Parm<int> m_ip05;                      // _77C, 'shake off blow C'
		Parm<int> m_ip06;                      // _7A4, 'shake off sticking 3'
		Parm<int> m_ip07;                      // _7CC, 'shake off blow D'
	};

	EnemyParmsBase()
	{
		m_flags[0].clear();
		m_flags[1].clear();
	}

	bool loadSettingFile(JKRArchive* archive, char* name);
	void setDebugParm(u32);
	void resetDebugParm(u32);

	virtual void read(Stream& input) // _08 (weak)
	{
		CreatureParms::read(input);
		m_general.read(input);
	}

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	BitFlag<u16> m_flags[2]; // _DC
	Parms m_general;         // _E0
};
} // namespace Game

#endif
