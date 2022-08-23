#include "Dolphin/math.h"
#include "Dolphin/os.h"
#include "Game/EnemyBase.h"
#include "Graphics.h"
#include "Game/Piki.h"
#include "Game/enemyInfo.h"
#include "Vector3.h"
#include "types.h"
#include "Game/Entities/Pelplant.h"
#include "Game/Farm.h"
#include "Game/GameSystem.h"
#include "Game/PelletNumber.h"
#include "Game/gamePlayData.h"
#include "Game/pelletMgr.h"
#include "CollInfo.h"
#include "SysShape/Joint.h"
#include "SysShape/Model.h"
#include "System.h"
#include "SysTimers.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "sqrt.h"
#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace Farm {
FarmMgr* farmMgr;
}

namespace Pelplant {
Obj* Obj::sCurrentObj;

static float sLODRadius[4] = { 45.0f, 60.0f, 103.0f, 133.0f };
} // namespace Pelplant
} // namespace Game

inline void _Print(char* format, ...)
{
	OSReport(__FILE__);
	OSReport("/enemy/data/pelplant"); // unused/used in print inline probably
	OSReport("/enemy/parm/pelplant"); // unused/used in print inline probably
}

namespace Game {

namespace Pelplant {
/*
 * --INFO--
 * Address:	80108300
 * Size:	0000B0
 */
float BlendAccelerationFunc::getValue(float p1)
{
	float sinTheta = pikmin2_sinf(TAU * (3.0f * -p1));
	float value    = (0.5f * (1.0f - p1));
	value          = (value * sinTheta) + p1;
	if (value > 1.0f) {
		return 1.0f;
	}

	if (value < 0.0f) {
		value = 0.0f;
	}
	return value;
}

/*
 * --INFO--
 * Address:	801083B0
 * Size:	0000B4
 */
void Obj::birth(Vector3f& position, float faceDir)
{
	EnemyBase::birth(position, faceDir);
	m_farmPow = 0;
	if (Farm::farmMgr != nullptr) {
		Farm::farmMgr->addPlant(this);
	}
	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		m_fsm->start(this, 4, nullptr);
	} else {
		m_fsm->start(this, 0, nullptr);
	}
	_2C4 = m_model->getJoint("bodyjnt2")->getWorldMatrix();
}

/*
 * --INFO--
 * Address:	80108464
 * Size:	000280
 */
void Obj::setInitialSetting(EnemyInitialParamBase* param)
{
	if (m_farmPow == 0) {
		_2C8 |= 1;
	} else {
		_2C8 &= ~1;
	}
	if (m_farmPow < 0) {
		param->_02 = 0;
	}
	_2D4 = param->_00;
	setPelletColor(_2D4, false);
	m_pelletSize = param->_01;
	switch (param->_02) {
	case 0:
		m_fsm->start(this, 0, nullptr);
		break;
	case 1:
		m_fsm->start(this, 1, nullptr);
		break;
	case 2:
		m_fsm->start(this, 2, nullptr);
		attachPellet();
		break;
	}
	if (param->_01 == 5) {
		sCurrentObj            = this;
		SysShape::Joint* joint = m_model->getJoint("headjnt");
		P2ASSERTLINE(365, joint);
		joint->m_j3d->m_function = *(Obj::headJointCallBack);
		sCurrentObj              = nullptr;
	}
	if (param->_01 == 10 || param->_01 == 20) {
		sCurrentObj            = this;
		SysShape::Joint* joint = m_model->getJoint("headjnt");
		P2ASSERTLINE(376, joint);
		joint->m_j3d->m_function = *(Obj::headJointCallBack);
		joint                    = m_model->getJoint("bodyjnt1");
		P2ASSERTLINE(381, joint);
		joint->m_j3d->m_function = *(Obj::neckJointCallBack);
		sCurrentObj              = nullptr;
	}
	CollPart* part = m_collTree->getCollPart('head');
	float scale    = getHeadScale();
	part->setScale(scale);
	part->_20.x *= scale;
	part->_20.y *= scale;
	part->_20.z *= scale;
}

/**
 * __ct__Q34Game8Pelplant3ObjFv
 * --INFO--
 * Address:	801086E4
 * Size:	000138
 */
Obj::Obj()
    : EnemyBase()
    , m_fsm(nullptr)
    , _2C4(nullptr)
    , _2C8(0)
    , m_pellet(nullptr)
    , _2D0(0.0f)
    , _2D4(3)
    , m_pelletSize(1)
    , m_farmPow(0)
{
	m_animator = new ProperAnimator();
	setFSM(new FSM());
	_2C8 = 0;
}

/*
 * --INFO--
 * Address:	8010881C
 * Size:	00004C
 */
// WEAK - in header
// void Pelplant::Obj::setFSM(Game::Pelplant::FSM* fsm)
// {
// 	m_fsm = fsm;
// 	m_fsm->init(this);
// 	m_currentLifecycleState = nullptr;
// }

/*
 * __dt__Q24Game22EnemyBlendAnimatorBaseFv
 * --INFO--
 * Address:	80108868
 * Size:	00005C
 */
// WEAK - in header
// EnemyBlendAnimatorBase::~EnemyBlendAnimatorBase() { }

/*
 * --INFO--
 * Address:	801088C4
 * Size:	000034
 */
void Pelplant::Obj::doUpdate() { m_fsm->exec(this); }

/*
 * --INFO--
 * Address:	801088F8
 * Size:	000088
 */
void Pelplant::Obj::updateLODSphereRadius(int p1)
{
	if (p1 == 2) {
		switch (m_pelletSize) {
		case 1:
			m_lodRange.m_radius = sLODRadius[0];
			return;
		case 5:
			m_lodRange.m_radius = sLODRadius[1];
			return;
		case 10:
			m_lodRange.m_radius = sLODRadius[2];
			return;
		case 20:
			m_lodRange.m_radius = sLODRadius[3];
			return;
		}
	} else {
		m_lodRange.m_radius = sLODRadius[0];
	}
}

/*
 * --INFO--
 * Address:	80108980
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80108984
 * Size:	00018C
 */
void Obj::doDebugDraw(Graphics& graphics)
{
	EnemyBase::doDebugDraw(graphics);
	if (((Parms*)m_parms)->m_flags[0].typeView & 1) {
		graphics.initPerspPrintf(graphics.m_currentViewport);

		PerspPrintfInfo info;
		Vector3f perspVec(m_position.x, 100.0f + m_position.y, m_position.z);

		info._14 = Color4(0xC8, 0xC8, 0xFF, 0xC8);
		info._18 = Color4(0x64, 0x64, 0xFF, 0xC8);
		graphics.perspPrintf(info, perspVec, "FARM_POW(%d) Grow%s", m_farmPow, (_2C8 & 1) ? "on" : "off");

		perspVec.y += 16.0f;
		info._14 = Color4(0xFF, 0xC8, 0xFF, 0xC8);
		info._18 = Color4(0xC8, 0x64, 0xFF, 0xC8);
		graphics.perspPrintf(info, perspVec, "%s %4.2f", m_fsm->getCurrName(this), _2C0);
	}
}

/*
 * --INFO--
 * Address:	80108B10
 * Size:	0000C0
 */
void Obj::getShadowParam(Game::ShadowParam& param)
{
	param.m_position = m_position;
	param.m_position.y += 2.0f;

	if (_0C8 != nullptr) {
		Plane* plane                        = &_0C8->m_trianglePlane;
		param.m_boundingSphere.m_position.x = plane->a;
		param.m_boundingSphere.m_position.y = plane->b;
		param.m_boundingSphere.m_position.z = plane->c;
	} else {
		param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	}

	param.m_boundingSphere.m_radius = 50.0f;

	Vector3f vec((*_2C4)(0, 0), (*_2C4)(0, 1), (*_2C4)(0, 2));
	Vector3f newVec = vec;
	float sum       = newVec.x;
	newVec.y *= newVec.y;
	newVec.z *= newVec.z;
	sum *= newVec.x;
	sum += newVec.y;
	sum += newVec.z;
	_sqrtf(sum, &sum);

	param._1C = 8.0f * sum;
}

/*
 * --INFO--
 * Address:	80108BD0
 * Size:	000090
 */
void Obj::doAnimationUpdateAnimator()
{
	BlendAccelerationFunc func;
	static_cast<EnemyBlendAnimatorBase*>(m_animator)
	    ->animate(&func, EnemyAnimatorBase::defaultAnimSpeed * sys->m_secondsPerFrame,
	              EnemyAnimatorBase::defaultAnimSpeed * sys->m_secondsPerFrame,
	              EnemyAnimatorBase::defaultAnimSpeed * sys->m_secondsPerFrame);
	SysShape::Model* model = m_model;
	(*model->m_j3dModel->m_modelData->m_jointTree.m_joints)->m_mtxCalc
	    = (J3DMtxCalcAnmBase*)(static_cast<EnemyBlendAnimatorBase*>(m_animator)->m_animator.getCalc());
}

/*
 * --INFO--
 * Address:	80108C60
 * Size:	000058
 */
float Obj::getHeadScale()
{
	float headScale;
	if (m_pellet) {
		switch (m_pelletSize) {
		case 1:
			headScale = 1.0f;
			break;
		case 5:
			headScale = 2.0f;
			break;
		case 10:
			headScale = 3.5f;
			break;
		case 20:
			headScale = 4.8f;
			break;
		}
	} else {
		headScale = 1.0f;
	}
	return headScale;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
inline void Obj::getNeckScale(Vector3f* scale)
{
	float neckScale;
	switch (m_pelletSize) {
	case 1:
		neckScale = 12.0f;
		break;
	case 5:
		neckScale = 12.0f;
		break;
	case 10:
		neckScale = 12.0f;
		break;
	case 20:
		neckScale = 12.0f;
		break;
	default:
		JUT_PANICLINE(663, "Unknown Pellet size. %d \n", m_pelletSize);
		break;
	}
	*scale = Vector3f(neckScale, 0.0f, 0.0f);
}

/*
 * doAnimation__Q34Game8Pelplant3ObjFv
 * --INFO--
 * Address:	80108CB8
 * Size:	000198
 */
void Obj::doAnimation()
{
	sys->m_timers->_start("zama", true);

	float headScale = getHeadScale();

	Obj::sCurrentObj = this;
	EnemyBase::doAnimation();
	Obj::sCurrentObj = nullptr;

	if (m_pellet != nullptr) {
		Vector3f translation;
		getNeckScale(&translation);

		Vector3f rotation(0.0f, HALF_PI, -HALF_PI);

		Vector3f scale(1.0f / headScale);

		Matrixf mat;
		mat.makeSRT(scale, rotation, translation);
		m_pellet->updateCapture(mat);
	}

	sys->m_timers->_stop("zama");
}

/*
 * --INFO--
 * Address:	80108E50
 * Size:	000004
 */
void Obj::doSimulation(float) { }

/*
 * --INFO--
 * Address:	80108E54
 * Size:	0000F0
 */
void Obj::setPelletColor(u16 color, bool check)
{
	if (m_pellet != nullptr) {
		switch (color) {
		case PELLET_BLUE:
		case PELLET_RED:
		case PELLET_YELLOW:
			if (check) {
				if (playData->hasMetPikmin(color)) {
					m_pellet->setValidColor(color);
					return;
				}
				m_pellet->m_pelletColor = PELLET_RED;
				return;
			}
			m_pellet->setValidColor(color);
			break;
		default:
			m_pellet->m_pelletColor = PELLET_RED;
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	80108F44
 * Size:	000190
 */
void Obj::changePelletColor()
{
	if ((m_pellet != nullptr) && (_2D4 == 3)) {

		if (_2D0 > static_cast<Parms*>(m_parms)->m_pelplantParms.m_fp03.m_value) {
			u16 initialColor;
			if (m_pellet != nullptr) {
				initialColor = m_pellet->m_pelletColor;
			} else {
				initialColor = PELLET_BLUE;
			}
			u16 nextColor = initialColor + 1;
			u16 colorCap  = nextColor;

			while (!playData->hasMetPikmin(nextColor)) {
				nextColor += 1;
				if (nextColor > 2) {
					nextColor = PELLET_BLUE;
				}
				if (nextColor == colorCap) {
					nextColor = PELLET_RED;
				}
			}

			if (nextColor > 2) {
				nextColor = PELLET_BLUE;
			}
			setPelletColor(nextColor, true);

			if (_2C8 & 1) {
				_2D0 = 0.0f;
				return;
			}
			_2D0 = 0.0f;
			return;
		}

		const float advanceFrame = sys->m_secondsPerFrame;
		if (_2C8 & 1) {
			_2D0 += advanceFrame;
		}
	}
}

/*
 * --INFO--
 * Address:	801090D4
 * Size:	000110
 */
void Obj::attachPellet()
{
	if (m_pellet == nullptr) {
		Obj::sCurrentObj = this;
		PelletNumberInitArg numberArg(m_pelletSize, 0);
		Pellet* newPellet = pelletMgr->birth(&numberArg);

		if (newPellet != nullptr) {
			Matrixf* mat = m_model->getJoint("headjnt")->getWorldMatrix();
			P2ASSERTLINE(777, mat != nullptr);
			newPellet->startCapture(mat);
			m_pellet = (PelletNumber::Object*)newPellet;

			setPelletColor(_2D4, false);
		}

		Obj::sCurrentObj = nullptr;
	}
}

/*
 * --INFO--
 * Address:	801091E4
 * Size:	000098
 */
bool Obj::damageCallBack(Game::Creature* source, float damage, CollPart* part)
{
	if (isLivingThing()) {
		addDamage(damage, 1.0f);
		if (part && part->_3C.getStrID()[3] == '0') {
			addDamage(m_maxHealth, 1.0f);
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	8010927C
 * Size:	00000C
 */
// WEAK - in header
// bool Obj::isLivingThing() { return (_2C8 >> 1 & 1); }

/*
 * --INFO--
 * Address:	80109288
 * Size:	000078
 */
bool Obj::farmCallBack(Game::Creature* p1, float p2)
{
	m_farmPow = (char)((p2 >= 0.0f) ? p2 + 0.5f : p2 - 0.5f);
	if (m_farmPow < 0) {
		_2C8 &= ~1;
	} else {
		_2C8 |= 1;
	}
	resetEvent(0, EB_Cullable);
	return true;
}

/*
 * --INFO--
 * Address:	80109300
 * Size:	000060
 */
void Obj::onStickStart(Game::Creature* other)
{
	EnemyBase::onStickStart(other);
	if (other->_0F8 && other->_0F8->_3C.getStrID()[3] == '0') {
		addDamage(m_maxHealth, 1.0f);
	}
}

/*
 * --INFO--
 * Address:	80109360
 * Size:	0000F0
 */
unknown Obj::headJointCallBack(J3DJoint* joint, int p2)
{
	if (sCurrentObj != nullptr && p2 == 1) {
		Mtx& mtx    = J3DMtxCalc::mMtxBuffer->m_worldMatrices[joint->getJntNo()];
		float scale = sCurrentObj->getHeadScale();
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				mtx[i][j] *= scale;
			}
		}
	}
	return 0;
}

/*
 * --INFO--
 * Address:	80109450
 * Size:	000104
 */
unknown Obj::neckJointCallBack(J3DJoint* joint, int p2)
{
	if (sCurrentObj != nullptr && p2 == 1) {
		Mtx& mtx = J3DMtxCalc::mMtxBuffer->m_worldMatrices[joint->getJntNo()];

		float neckScale1;
		float neckScale2;
		if (sCurrentObj->m_pellet != nullptr) {
			switch (sCurrentObj->m_pelletSize) {
			case 1:
				neckScale2 = 1.0f;
				neckScale1 = neckScale2;
				break;
			case 5: /* switch 2 */
				neckScale2 = 1.0f;
				neckScale1 = neckScale2;
				break;
			case 10: /* switch 2 */
				neckScale2 = 1.5;
				neckScale1 = 0.85;
				break;
			case 20: /* switch 2 */
				neckScale2 = 2.0;
				neckScale1 = 0.75;
				break;
			}

		} else {
			neckScale2 = 1.0f;
			neckScale1 = neckScale2;
		}

		Vector3f scale(neckScale2, neckScale1, neckScale2);
		mtx[0][0] *= scale.x;
		mtx[0][1] *= scale.x;
		mtx[0][2] *= scale.x;

		mtx[1][0] *= scale.y;
		mtx[1][1] *= scale.y;
		mtx[1][2] *= scale.y;

		mtx[2][0] *= scale.z;
		mtx[2][1] *= scale.z;
		mtx[2][2] *= scale.z;
	}
	return 0;
}

/*
 * __ct__Q34Game8Pelplant3MgrFiUc
 * --INFO--
 * Address:	80109554
 * Size:	000050
 */
Mgr::Mgr(int p1, unsigned char p2)
    : EnemyMgrBase(p1, p2)
{
	m_name = "ペレット草マネージャ"; // pellet plant manager
}

/*
 * __dt__Q24Game12EnemyMgrBaseFv
 * --INFO--
 * Address:	801095A4
 * Size:	000098
 */
// WEAK - in header
// EnemyMgrBase::~EnemyMgrBase() { }

/*
 * --INFO--
 * Address:	8010963C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * __ct__Q34Game8Pelplant5ParmsFv
 * --INFO--
 * Address:	80109684
 * Size:	000118
 */
// WEAK - in header
// Pelplant::Parms::Parms()
//     : EnemyParmsBase()
//     , m_pelplantParms()
// { }

/*
 * __ct__Q24Game14EnemyParmsBaseFv
 * --INFO--
 * Address:	8010979C
 * Size:	0001D4
 */
// WEAK - in header
// EnemyParmsBase::EnemyParmsBase()
// {
// 	m_flags[0].clear();
//  m_flags[1].clear();
// }

/*
 * __ct__Q34Game14EnemyParmsBase5ParmsFv
 * --INFO--
 * Address:	80109970
 * Size:	000AE0
 */
// WEAK - in header
// EnemyParmsBase::Parms::Parms()
// : Parameters(nullptr, "EnemyParmsBase")
// , m_health(this, 'fp00', "ライフ", 100.0f, 0.0f, 99999.0f)    // life
// , m_lifeMeterHeight(this, 'fp27', "ライフの高さ", 50.0f, 0.0f, 1000.0f) // height of life
// , m_regenerationRate(this, 'fp31', "ライフ回復率", 0.01f, 0.0f, 1.0f) // life recovery rate
// , m_fp30(this, 'fp30', "警戒ライフ", 30.0f, 0.0f, 99999.0f) // 'vigilant life'
// , m_fp01(this, 'fp01', "マップとの当り", 40.0f, 0.0f, 100.0f) // 'match with the map'
// , m_cellRadius(this, 'fp33', "マップとのあたりポリゴンの選定", 40.0f, 0.0f, 500.0f) // 'selection of map-related polygons'
// , m_pikminDamageRadius(this, 'fp34', "ピクミンとのあたり", 40.0f, 0.0f, 500.0f) // 'about pikmin'
// , m_offCameraRadius(this, 'fp32', "LOD半径", 40.0f, 0.0f, 500.0f) // LOD radius
// , m_horizontalDamageScale(this, 'fp02', "ダメージスケールXZ", 0.2f, 0.0f, 1.0f) // damage scale XZ
// , m_verticalDamageScale(this, 'fp03', "ダメージスケールY", 0.25f, 0.0f, 1.0f) // damage scale Y
// , m_damageScaleDuration(this, 'fp04', "ダメージフレーム", 0.35f, 0.0f, 1.0f) // 'damage frame'
// , m_fp05(this, 'fp05', "質量", 1.0f, 0.0f, 100.0f) // mass
// , m_moveSpeed(this, 'fp06', "速度", 80.0f, 0.0f, 1000.0f) // speed
// , m_rotationalAccel(this, 'fp08', "回転速度率", 0.1f, 0.0f, 1.0f) // rotation speed rate
// , m_rotationalSpeed(this, 'fp28', "回転最大速度", 10.0f, 0.0f, 360.0f) // maximum rotation speed
// , m_territoryRadius(this, 'fp09', "テリトリー", 200.0f, 1.0f, 1000.0f) // territory
// , m_homeRadius(this, 'fp10', "ホーム範囲", 15.0f, 1.0f, 1000.0f) // home range
// , m_privateRadius(this, 'fp11', "プライベート距離", 70.0f, 0.0f, 1000.0f) // private distance
// , m_sightRadius(this, 'fp12', "視界距離", 200.0f, 0.0f, 1000.0f) // sight distance
// , m_fp25(this, 'fp25', "視界高", 50.0f, 0.0f, 1000.0f) // visibility height
// , m_fov(this, 'fp13', "視界角度", 90.0f, 0.0f, 180.0f) // view angle
// , m_fp14(this, 'fp14', "探索距離", 200.0f, 0.0f, 1000.0f) // search distance
// , m_fp26(this, 'fp26', "探索高", 50.0f, 0.0f, 1000.0f) // search height
// , m_fp15(this, 'fp15', "探索角度", 120.0f, 0.0f, 180.0f) // search angle
// , m_shakeKnockback(this, 'fp17', "振り払い力", 300.0f, 0.0f, 1000.0f) // shake off power
// , m_shakeDamage(this, 'fp18', "振り払いダメージ", 0.0f, 0.0f, 1000.0f) // shake off damage
// , m_shakeRange(this, 'fp19', "振り払い範囲", 120.0f, 0.0f, 1000.0f) // shake off range
// , m_shakeRateMaybe(this, 'fp16', "振り払い率", 1.0f, 0.0f, 1.0f) // shake off rate
// , m_fp20(this, 'fp20', "攻撃可能範囲", 70.0f, 0.0f, 1000.0f) // attack range
// , m_fp21(this, 'fp21', "攻撃可能角度", 15.0f, 0.0f, 180.0f) // 'possible attack angle'
// , m_fp22(this, 'fp22', "攻撃ヒット範囲", 70.0f, 0.0f, 1000.0f) // attack hit range
// , m_fp23(this, 'fp23', "攻撃ヒット角度", 15.0f, 0.0f, 180.0f) // attack hit angle
// , m_attackDamage(this, 'fp24', "攻撃力", 10.0f, 0.0f, 1000.0f) // attack power
// , m_fp29(this, 'fp29', "警戒時間", 15.0f, 0.0f, 99.0f) // alert time
// , m_stoneDuration(this, 'fp35', "石化時間", 1.0f, 0.0f, 60.0f) // stone time
// , m_purplePikminHipDropDamage(this, 'fp36', "ヒップドロップダメージ", 10.0f, 0.0f, 1000.0f) // hip drop damage
// , m_purplePikminStunChance(this, 'fp37', "地震気絶確立", 0.05f, 0.0f, 1.0f) // earthquake faint probability
// , m_purplePikminStunTime(this, 'fp38', "地震気絶時間", 10.0f, 0.0f, 60.0f) // earthquake faint time
// , m_ip01(this, 'ip01', "振り払い打撃Ａ", 3, 0, 200) // shake off blow A
// , m_ip02(this, 'ip02', "振り払い張付１", 3, 0, 100) // shake off sticking 1
// , m_ip03(this, 'ip03', "振り払い打撃Ｂ", 8, 0, 200) // shake off blow B
// , m_ip04(this, 'ip04', "振り払い張付２", 5, 0, 100) // shake off sticking 2
// , m_ip05(this, 'ip05', "振り払い打撃Ｃ", 15, 0, 200) // shake off blow C
// , m_ip06(this, 'ip06', "振り払い張付３", 10, 0, 100) // shake off sticking 3
// , m_ip07(this, 'ip07', "振り払い打撃Ｄ", 30, 0, 200) // shake off blow D
// { }

/*
 * --INFO--
 * Address:	8010A450
 * Size:	000010
 */
// BitFlag<unsigned short>::BitFlag()
// {
// 	/*
// 	li       r0, 0
// 	stb      r0, 0(r3)
// 	stb      r0, 1(r3)
// 	blr
// 	*/
// }

/*
 * birth__Q34Game8Pelplant3MgrFRQ24Game13EnemyBirthArg
 * --INFO--
 * Address:	8010A460
 * Size:	000020
 */
EnemyBase* Mgr::birth(Game::EnemyBirthArg& arg) { return EnemyMgrBase::birth(arg); }

/*
 * --INFO--
 * Address:	8010A480
 * Size:	0000D0
 */
void Obj::onInit(Game::CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	_2C0 = 0.0f;
	setEmotionNone();

	if (m_farmPow == 0) {
		_2C8 |= 1;
	} else {
		_2C8 &= ~1;
	}

	int stateID = getStateID();
	if (stateID == -1) {
		stateID = 0;
	}

	m_fsm->start(this, stateID, nullptr);

	resetEvent(0, EB_9);
	resetEvent(0, EB_LeaveCarcass);
	resetEvent(0, EB_13);
	setEvent(0, EB_BitterImmune);
	hardConstraintOn();
}

/*
 * --INFO--
 * Address:	8010A550
 * Size:	000048
 */
void Obj::doGetLifeGaugeParam(Game::LifeGaugeParam& param)
{
	_2C4->getTranslation(param.m_position);
	param.m_position.y += 60.0f;
	param.m_healthPercentage = m_health / m_maxHealth;
	param._10                = 10.0f;
}

} // namespace Pelplant
} // namespace Game

/*
 * __dt__Q34Game8Pelplant3MgrFv
 * --INFO--
 * Address:	8010A598
 * Size:	0000B0
 */
// WEAK - in header
// Pelplant::Mgr::~Mgr() { }

/*
 * --INFO--
 * Address:	8010A648
 * Size:	000008
 */
// WEAK - in header
// EnemyTypeID::EEnemyTypeID Pelplant::Mgr::getEnemyTypeID() { return EnemyTypeID::EnemyID_Pelplant; }

/*
 * --INFO--
 * Address:	8010A650
 * Size:	000060
 */
// WEAK - in header
// void Pelplant::Mgr::createObj(int count) { m_objects = new Obj[count]; }

/*
 * __dt__Q34Game8Pelplant3ObjFv
 * --INFO--
 * Address:	8010A6B0
 * Size:	0000BC
 */
// WEAK - in header
// Pelplant::Obj::~Obj() { }

/*
 * getEnemy__Q34Game8Pelplant3MgrFi
 * --INFO--
 * Address:	8010A76C
 * Size:	000010
 */
// WEAK - in header
// EnemyBase* Pelplant::Mgr::getEnemy(int index) { return &m_objects[index]; }

/*
 * --INFO--
 * Address:	8010A77C
 * Size:	000004
 */
// WEAK - in header
// void Pelplant::Mgr::initStoneSetting() { }

/*
 * get__Q24Game12EnemyMgrBaseFPv
 * --INFO--
 * Address:	8010A780
 * Size:	00002C
 */
// WEAK - in header
// void EnemyMgrBase::get(void*)
// {
// }

/*
 * getJ3DModelData__Q24Game12EnemyMgrBaseCFv
 * --INFO--
 * Address:	8010A7AC
 * Size:	000008
 */
// J3DModelData* EnemyMgrBase::getJ3DModelData() const
// {
// }

/*
 * getGenerator__Q24Game12EnemyMgrBaseCFv
 * --INFO--
 * Address:	8010A7B4
 * Size:	000008
 */
// EnemyGeneratorBase* EnemyMgrBase::getGenerator() const
// {
// }

/*
 * getMaxObjects__Q24Game12EnemyMgrBaseCFv
 * --INFO--
 * Address:	8010A7BC
 * Size:	000008
 */
// int EnemyMgrBase::getMaxObjects() const
// {
// }

/*
 * doSimpleDraw__16GenericObjectMgrFP8Viewport
 * --INFO--
 * Address:	8010A7C4
 * Size:	000004
 */
// void GenericObjectMgr::doSimpleDraw(Viewport*) { }

/*
 * loadResources__16GenericObjectMgrFv
 * --INFO--
 * Address:	8010A7C8
 * Size:	000004
 */
// void GenericObjectMgr::loadResources() { }

/*
 * resetMgr__16GenericObjectMgrFv
 * --INFO--
 * Address:	8010A7CC
 * Size:	000004
 */
// void GenericObjectMgr::resetMgr() { }

/*
 * pausable__16GenericObjectMgrFv
 * --INFO--
 * Address:	8010A7D0
 * Size:	000008
 */
// bool GenericObjectMgr::pausable() { return true; }

/*
 * frozenable__16GenericObjectMgrFv
 * --INFO--
 * Address:	8010A7D8
 * Size:	000008
 */
// bool GenericObjectMgr::frozenable() { return true; }

/*
 * getMatrixLoadType__16GenericObjectMgrFv
 * --INFO--
 * Address:	8010A7E0
 * Size:	000008
 */
// u32 GenericObjectMgr::getMatrixLoadType() { return 0x0; }

/**
 * getEnd__Q24Game12EnemyMgrBaseFv
 * --INFO--
 * Address:	8010A7E8
 * Size:	000008
 */
// void* EnemyMgrBase::getEnd()
// {
// }

/*
 * getStart__Q24Game12EnemyMgrBaseFv
 * --INFO--
 * Address:	8010A7F0
 * Size:	000030
 */
// void* EnemyMgrBase::getStart()
// {
// }

/*
 * getObject__Q24Game12EnemyMgrBaseFPv
 * --INFO--
 * Address:	8010A820
 * Size:	00002C
 */
// void* EnemyMgrBase::getObject(void* index)
// {
// }

/*
 * read__Q24Game14EnemyParmsBaseFR6Stream
 * --INFO--
 * Address:	8010A84C
 * Size:	000044
 */
// void EnemyParmsBase::read(Stream&)
// {
// }

/*
 * read__Q24Game13CreatureParmsFR6Stream
 * --INFO--
 * Address:	8010A890
 * Size:	000020
 */
// void CreatureParms::read(Stream&)
// {
// }

/*
 * read__Q34Game8Pelplant5ParmsFR6Stream
 * --INFO--
 * Address:	8010A8B0
 * Size:	000050
 */
// void Pelplant::Parms::read(Stream& input)
// {
// }

/*
 * __dt__16GenericContainerFv
 * --INFO--
 * Address:	8010A900
 * Size:	000060
 */
// GenericContainer::~GenericContainer()
// {
// }

/*
 * __dt__Q24Game13IEnemyMgrBaseFv
 * --INFO--
 * Address:	8010A960
 * Size:	000080
 */
// IEnemyMgrBase::~IEnemyMgrBase()
// {
// }

/*
 * __dt__Q34Game8Pelplant14ProperAnimatorFv
 * --INFO--
 * Address:	8010A9E0
 * Size:	00006C
 */
// Pelplant::ProperAnimator::~ProperAnimator()
// {
// }

/*
 * animate__Q24Game22EnemyBlendAnimatorBaseFif
 * --INFO--
 * Address:	8010AA4C
 * Size:	000020
 */
// void EnemyBlendAnimatorBase::animate(int, float)
// {
// }

/*
 * getTypeID__Q24Game22EnemyBlendAnimatorBaseFv
 * --INFO--
 * Address:	8010AA6C
 * Size:	00000C
 */
// void EnemyBlendAnimatorBase::getTypeID()
// {
// }

/*
 * getEnemyTypeID__Q34Game8Pelplant3ObjFv
 * --INFO--
 * Address:	8010AA78
 * Size:	000008
 */
// WEAK - in header
// EnemyTypeID::EEnemyTypeID Pelplant::Obj::getEnemyTypeID() { return EnemyTypeID::EnemyID_Pelplant; }

/*
 * size__7Parm<i>Fv
 * --INFO--
 * Address:	8010AA80
 * Size:	000008
 */
// u32 Parm<int>::size() { return 0x4; }

/*
 * size__7Parm<f>Fv
 * --INFO--
 * Address:	8010AA88
 * Size:	000008
 */
// u32 Parm<float>::size() { return 0x4; }

// namespace Game {

// /*
//  * --INFO--
//  * Address:	8010AA90
//  * Size:	000014
//  */
// void EnemyBase::@728 @12 @viewOnPelletKilled()
// {
// 	/*
// 	li       r11, 0xc
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -728
// 	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AAA4
//  * Size:	000014
//  */
// void EnemyBase::@728 @12 @viewStartCarryMotion()
// {
// 	/*
// 	li       r11, 0xc
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -728
// 	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AAB8
//  * Size:	000014
//  */
// void EnemyBase::@728 @12 @viewStartPreCarryMotion()
// {
// 	/*
// 	li       r11, 0xc
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -728
// 	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AACC
//  * Size:	000014
//  */
// void EnemyBase::@728 @12 @view_finish_carrymotion()
// {
// 	/*
// 	li       r11, 0xc
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -728
// 	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AAE0
//  * Size:	000014
//  */
// void EnemyBase::@728 @12 @view_start_carrymotion()
// {
// 	/*
// 	li       r11, 0xc
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -728
// 	b        view_start_carrymotion__Q24Game9EnemyBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AAF4
//  * Size:	000014
//  */
// void EnemyBase::@728 @12 @viewGetShape()
// {
// 	/*
// 	li       r11, 0xc
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -728
// 	b        viewGetShape__Q24Game9EnemyBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AB08
//  * Size:	000008
//  */
// IEnemyMgrBase::@4 @~IEnemyMgrBase()
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        __dt__Q24Game13IEnemyMgrBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AB10
//  * Size:	000008
//  */
// Pelplant::Mgr::@4 @~Mgr()
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        __dt__Q34Game8Pelplant3MgrFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AB18
//  * Size:	000008
//  */
// void EnemyMgrBase::@4 @getEnd()
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        getEnd__Q24Game12EnemyMgrBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AB20
//  * Size:	000008
//  */
// void EnemyMgrBase::@4 @getStart()
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        getStart__Q24Game12EnemyMgrBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AB28
//  * Size:	000008
//  */
// void EnemyMgrBase::@4 @getNext(void*)
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        getNext__Q24Game12EnemyMgrBaseFPv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AB30
//  * Size:	000008
//  */
// void EnemyMgrBase::@4 @getObject(void*)
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        getObject__Q24Game12EnemyMgrBaseFPv
// 	*/
// }
// } // namespace Game
