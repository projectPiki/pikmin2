#ifndef _GAME_ENEMYPARMSBASE_H
#define _GAME_ENEMYPARMSBASE_H

#include "BaseParm.h"
#include "BitFlag.h"
#include "Parameters.h"
#include "types.h"

struct JKRArchive;
struct Stream;

namespace Game {
struct CreatureParmsBase {
	struct Property : public Parameters {
		Property()
		    : Parameters(nullptr, "Creature::Property")
		    , m_friction(this, 'fp00', "friction(not used)", 0.5f, 0.0f, 1.0f)
		    , m_wallReflection(this, 'fp01', "wallReflection", 0.5f, 0.0f, 1.0f)
		    , m_faceDirAdjust(this, 'fp02', "faceDirAdjust", 0.25f, 0.0f, 1.0f)
		    , m_accel(this, 'fp03', "accel", 0.1f, 0.01f, 2.0f)
		    , m_bounceFactor(this, 'fp04', "bounceFactor", 0.3f, 0.01f, 2.0f)
		{
		}
		Parm<float> m_friction;       // _0C
		Parm<float> m_wallReflection; // _34
		Parm<float> m_faceDirAdjust;  // _5C
		Parm<float> m_accel;          // _84
		Parm<float> m_bounceFactor;   // _AC
	};
	Property m_creatureParms;
};
struct CreatureParms : public CreatureParmsBase {
	virtual void read(Stream& input) // _00
	{
		m_creatureParms.read(input);
	};
};
struct EnemyParmsBase : public CreatureParms {
	struct Parms : public Parameters {
		Parm<float> m_health;
		Parm<float> m_lifeMeterHeight;
		Parm<float> m_regenerationRate;
		Parm<float> m_fp30;
		Parm<float> m_fp01;
		Parm<float> m_cellRadius;
		Parm<float> m_pikminDamageRadius;
		Parm<float> m_offCameraRadius;
		Parm<float> m_horizontalDamageScale;
		Parm<float> m_verticalDamageScale;
		Parm<float> m_damageScaleDuration;
		Parm<float> m_fp05;
		Parm<float> m_moveSpeed;
		Parm<float> m_rotationalAccel;
		Parm<float> m_rotationalSpeed;
		Parm<float> m_territoryRadius;
		Parm<float> m_homeRadius;
		Parm<float> m_privateRadius;
		Parm<float> m_sightRadius;
		Parm<float> m_fp25;
		Parm<float> m_fov;
		Parm<float> m_fp14;
		Parm<float> m_fp26;
		Parm<float> m_fp15;
		Parm<float> m_shakeKnockback;
		Parm<float> m_shakeDamage;
		Parm<float> m_shakeRange;
		Parm<float> m_shakeRateMaybe;
		Parm<float> m_fp20;
		Parm<float> m_fp21;
		Parm<float> m_fp22;
		Parm<float> m_fp23;
		Parm<float> m_attackDamage;
		Parm<float> m_fp29;
		Parm<float> m_stoneDuration;
		Parm<float> m_purplePikminHipDropDamage;
		Parm<float> m_purplePikminStunChance;
		Parm<float> m_purplePikminStunTime;
		Parm<int> m_ip01;
		Parm<int> m_ip02;
		Parm<int> m_ip03;
		Parm<int> m_ip04;
		Parm<int> m_ip05;
		Parm<int> m_ip06;
		Parm<int> m_ip07;

		Parms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_health(this, 'fp00', "ライフ", 100.0f, 0.0f, 99999.0f)
		    , m_lifeMeterHeight(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_regenerationRate(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fp30(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fp01(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_cellRadius(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_pikminDamageRadius(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_offCameraRadius(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_horizontalDamageScale(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_verticalDamageScale(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_damageScaleDuration(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fp05(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_moveSpeed(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_rotationalAccel(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_rotationalSpeed(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_territoryRadius(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_homeRadius(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_privateRadius(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_sightRadius(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fp25(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fov(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fp14(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fp26(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fp15(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_shakeKnockback(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_shakeDamage(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_shakeRange(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_shakeRateMaybe(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fp20(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fp21(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fp22(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fp23(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_attackDamage(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_fp29(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_stoneDuration(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_purplePikminHipDropDamage(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_purplePikminStunChance(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_purplePikminStunTime(this, 'nope', "", 0.0f, 0.0f, 0.0f)
		    , m_ip01(this, 'ip01', "", 0, 0, 0)
		    , m_ip02(this, 'nope', "", 0, 0, 0)
		    , m_ip03(this, 'nope', "", 0, 0, 0)
		    , m_ip04(this, 'nope', "", 0, 0, 0)
		    , m_ip05(this, 'nope', "", 0, 0, 0)
		    , m_ip06(this, 'nope', "", 0, 0, 0)
		    , m_ip07(this, 'nope', "", 0, 0, 0) {};
	};

	EnemyParmsBase();

	bool loadSettingFile(JKRArchive* archive, char* name);
	void setDebugParm(u32);
	void resetDebugParm(u32);

	virtual void read(Stream& input) // _00
	{
		CreatureParms::read(input);
		m_general.read(input);
	}

	BitFlag<u16> m_flags[2]; // _DC
	Parms m_general;         // _E0
};
} // namespace Game

#endif
