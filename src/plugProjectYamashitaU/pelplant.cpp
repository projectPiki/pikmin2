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
#include "Game/Entities/PelletNumber.h"
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

static void _Print(char* format, ...)
{
	OSReport(__FILE__);
	OSReport("/enemy/data/pelplant"); // unused/used in print inline probably
	OSReport("/enemy/parm/pelplant"); // unused/used in print inline probably
	OSReport((char*)(u32)-325.9493f);
	OSReport((char*)(u32)325.9493f);
}

const f32 negTrig = -325.9493f;
const f32 posTrig = 325.9493f;

static f32 negSin(f32 x) { return -JMath::sincosTable_.m_table[((int)(x *= -325.9493f) & 0x7ffU)].first; }

static f32 posSin(f32 x) { return JMath::sincosTable_.m_table[((int)(x *= 325.9493f) & 0x7ffU)].first; }

namespace Game {

namespace Pelplant {
/*
 * --INFO--
 * Address:	80108300
 * Size:	0000B0
 */
float BlendAccelerationFunc::getValue(float p1)
{
	f32 x = TAU * (3.0f * -p1);
	f32 sinTheta;
	if (x < 0.0f) {
		sinTheta = negSin(x);
	} else {
		sinTheta = posSin(x);
	}
	// float sinTheta = pikmin2_sinf(TAU * (3.0f * -p1));
	float value = (0.5f * (1.0f - p1));
	value       = (value * sinTheta) + p1;
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
void Obj::getShadowParam(ShadowParam& param)
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
	Vector3f newVec;
	_2C4->getRow(0, newVec);
	float sum = newVec.x;
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
void Obj::getNeckScale(Vector3f* scale)
{
	f32 x  = 1.5;
	f32 y  = 0.85;
	f32 z  = 0.75;
	*scale = Vector3f(x, y, z);
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

		translation = Vector3f(neckScale, 0.0f, 0.0f);

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
		case PELCOLOR_BLUE:
		case PELCOLOR_RED:
		case PELCOLOR_YELLOW:
			if (check) {
				if (playData->hasMetPikmin(color)) {
					m_pellet->setValidColor(color);
					return;
				}
				m_pellet->m_pelletColor = PELCOLOR_RED;
				return;
			}
			m_pellet->setValidColor(color);
			break;
		default:
			m_pellet->m_pelletColor = PELCOLOR_RED;
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
				initialColor = PELCOLOR_BLUE;
			}
			u16 nextColor = initialColor + 1;
			u16 colorCap  = nextColor;

			while (!playData->hasMetPikmin(nextColor)) {
				nextColor += 1;
				if (nextColor > 2) {
					nextColor = PELCOLOR_BLUE;
				}
				if (nextColor == colorCap) {
					nextColor = PELCOLOR_RED;
				}
			}

			if (nextColor > 2) {
				nextColor = PELCOLOR_BLUE;
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
bool Obj::damageCallBack(Creature* source, float damage, CollPart* part)
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
 * Address:	80109288
 * Size:	000078
 */
bool Obj::farmCallBack(Creature* p1, float p2)
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
void Obj::onStickStart(Creature* other)
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
 * --INFO--
 * Address:	8010963C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * birth__Q34Game8Pelplant3MgrFRQ24Game13EnemyBirthArg
 * --INFO--
 * Address:	8010A460
 * Size:	000020
 */
EnemyBase* Mgr::birth(EnemyBirthArg& arg) { return EnemyMgrBase::birth(arg); }

/*
 * --INFO--
 * Address:	8010A480
 * Size:	0000D0
 */
void Obj::onInit(CreatureInitArg* arg)
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
void Obj::doGetLifeGaugeParam(LifeGaugeParam& param)
{
	_2C4->getTranslation(param.m_position);
	param.m_position.y += 60.0f;
	param.m_healthPercentage = m_health / m_maxHealth;
	param._10                = 10.0f;
}

} // namespace Pelplant
} // namespace Game
