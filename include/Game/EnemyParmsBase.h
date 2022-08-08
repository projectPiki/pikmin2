#ifndef _GAME_ENEMYPARMSBASE_H
#define _GAME_ENEMYPARMSBASE_H

#include "BaseParm.h"
#include "BitFlag.h"
#include "Parameters.h"
#include "types.h"

struct JKRArchive;
struct Stream;

namespace Game {
// struct CreatureParmsBase {
// struct Property : public Parameters {
// 	Property()
// 	    : Parameters(nullptr, "Creature::Property")
// 	    , m_friction(this, 's000', "friction(not used)", 0.5f, 0.0f, 1.0f)
// 	    , m_wallReflection(this, 's001', "wallReflection", 0.5f, 0.0f, 1.0f)
// 	    , m_faceDirAdjust(this, 's002', "faceDirAdjust", 0.25f, 0.0f, 1.0f)
// 	    , m_accel(this, 's003', "accel", 0.1f, 0.01f, 2.0f)
// 	    , m_bounceFactor(this, 's004', "bounceFactor", 0.3f, 0.01f, 2.0f)
// 	{
// 	}
// 	Parm<float> m_friction;       // _0C
// 	Parm<float> m_wallReflection; // _34
// 	Parm<float> m_faceDirAdjust;  // _5C
// 	Parm<float> m_accel;          // _84
// 	Parm<float> m_bounceFactor;   // _AC
// };

// 	CreatureParmsBase()
// 		: m_creatureParms() {};

// 	Property m_creatureParms;
// };
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
		Parm<float> m_friction;       // _0C
		Parm<float> m_wallReflection; // _34
		Parm<float> m_faceDirAdjust;  // _5C
		Parm<float> m_accel;          // _84
		Parm<float> m_bounceFactor;   // _AC
	};
	CreatureProperty()
	    : m_props() {};
	Property m_props;
};
struct CreatureParms : public CreatureProperty {
	CreatureParms()
	    : CreatureProperty() {};

	virtual void read(Stream& input) // _00
	{
		m_props.read(input);
	};
};
// struct CreatureParms {
// 	CreatureParms()
// 	    : m_props() {};

// 	virtual void read(Stream& input) // _00
// 	{
// 		m_props.read(input);
// 	};

// 	Property m_props;
// };
struct EnemyParmsBase : public CreatureParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_health(this, 'fp00', "", 100.0f, 0.0f, 99999.0f)
		    , m_lifeMeterHeight(this, 'fp27', "", 50.0f, 0.0f, 1000.0f)
		    , m_regenerationRate(this, 'fp31', "", 0.01f, 0.0f, 1.0f)
		    , m_fp30(this, 'fp30', "", 30.0f, 0.0f, 99999.0f)
		    , m_fp01(this, 'fp01', "", 40.0f, 0.0f, 100.0f)
		    , m_cellRadius(this, 'fp33', "", 40.0f, 0.0f, 500.0f)
		    , m_pikminDamageRadius(this, 'fp34', "", 40.0f, 0.0f, 500.0f)
		    , m_offCameraRadius(this, 'fp32', "", 40.0f, 0.0f, 500.0f)
		    , m_horizontalDamageScale(this, 'fp02', "", 0.2f, 0.0f, 1.0f)
		    , m_verticalDamageScale(this, 'fp03', "", 0.25f, 0.0f, 1.0f)
		    , m_damageScaleDuration(this, 'fp04', "", 0.35f, 0.0f, 1.0f)
		    , m_fp05(this, 'fp05', "", 1.0f, 0.0f, 100.0f)
		    , m_moveSpeed(this, 'fp06', "", 80.0f, 0.0f, 1000.0f)
		    , m_rotationalAccel(this, 'fp08', "", 0.1f, 0.0f, 1.0f)
		    , m_rotationalSpeed(this, 'fp28', "", 10.0f, 0.0f, 360.0f)
		    , m_territoryRadius(this, 'fp09', "", 200.0f, 1.0f, 1000.0f)
		    , m_homeRadius(this, 'fp10', "", 15.0f, 1.0f, 1000.0f)
		    , m_privateRadius(this, 'fp11', "", 70.0f, 0.0f, 1000.0f)
		    , m_sightRadius(this, 'fp12', "", 200.0f, 0.0f, 1000.0f)
		    , m_fp25(this, 'fp25', "", 50.0f, 0.0f, 1000.0f)
		    , m_fov(this, 'fp13', "", 90.0f, 0.0f, 180.0f)
		    , m_fp14(this, 'fp14', "", 200.0f, 0.0f, 1000.0f)
		    , m_fp26(this, 'fp26', "", 50.0f, 0.0f, 1000.0f)
		    , m_fp15(this, 'fp15', "", 120.0f, 0.0f, 180.0f)
		    , m_shakeKnockback(this, 'fp17', "", 300.0f, 0.0f, 1000.0f)
		    , m_shakeDamage(this, 'fp18', "", 0.0f, 0.0f, 1000.0f)
		    , m_shakeRange(this, 'fp19', "", 120.0f, 0.0f, 1000.0f)
		    , m_shakeRateMaybe(this, 'fp16', "", 1.0f, 0.0f, 1.0f)
		    , m_fp20(this, 'fp20', "", 70.0f, 0.0f, 1000.0f)
		    , m_fp21(this, 'fp21', "", 15.0f, 0.0f, 180.0f)
		    , m_fp22(this, 'fp22', "", 70.0f, 0.0f, 1000.0f)
		    , m_fp23(this, 'fp23', "", 15.0f, 0.0f, 180.0f)
		    , m_attackDamage(this, 'fp24', "", 10.0f, 0.0f, 1000.0f)
		    , m_fp29(this, 'fp29', "", 15.0f, 0.0f, 99.0f)
		    , m_stoneDuration(this, 'fp35', "", 1.0f, 0.0f, 60.0f)
		    , m_purplePikminHipDropDamage(this, 'fp36', "", 10.0f, 0.0f, 1000.0f)
		    , m_purplePikminStunChance(this, 'fp37', "", 0.05f, 0.0f, 1.0f)
		    , m_purplePikminStunTime(this, 'fp38', "", 10.0f, 0.0f, 60.0f)
		    , m_ip01(this, 'ip01', "", 3, 0, 200)
		    , m_ip02(this, 'ip02', "", 3, 0, 100)
		    , m_ip03(this, 'ip03', "", 8, 0, 200)
		    , m_ip04(this, 'ip04', "", 5, 0, 100)
		    , m_ip05(this, 'ip05', "", 15, 0, 200)
		    , m_ip06(this, 'ip06', "", 10, 0, 100)
		    , m_ip07(this, 'ip07', "", 30, 0, 200) {};

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
	};

	EnemyParmsBase()
	    : CreatureParms()
	    , m_flags()
	    , m_general()
	{
		m_flags[0].byteView[0] = 0;
		m_flags[0].byteView[1] = 0;
		m_flags[1].byteView[0] = 0;
		m_flags[1].byteView[1] = 0;
	}

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
