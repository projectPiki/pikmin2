#include "Game/Entities/Pelplant.h"
#include "Game/Farm.h"
#include "Game/gamePlayData.h"

#include "JSystem/J3D/J3DMtxBuffer.h"

namespace Game {
namespace Farm {
FarmMgr* farmMgr;
}

namespace Pelplant {
Obj* Obj::sCurrentObj;

static float sLODRadius[4] = { 45.0f, 60.0f, 103.0f, 133.0f };
} // namespace Pelplant
} // namespace Game

const char* unused[] = { __FILE__, "/enemy/data/pelplant", "/enemy/parm/pelplant" };

static f32 negSin(f32 x) { return -JMath::sincosTable_.m_table[((int)(x *= -325.9493f) & 0x7ffU)].first; }
static f32 posSin(f32 x) { return JMath::sincosTable_.m_table[((int)(x *= 325.9493f) & 0x7ffU)].first; }

// Custom version of pikmin2_sinf from trig.h
inline f32 pikmin2_sinf_(f32 x)
{
	if (x < 0.0f) {
		return negSin(x);
	} else {
		return posSin(x);
	}
}

namespace Game {
namespace Pelplant {
/*
 * --INFO--
 * Address:	80108300
 * Size:	0000B0
 */
f32 BlendAccelerationFunc::getValue(f32 t)
{
	f32 sinTheta = pikmin2_sinf_(TAU * (3.0f * -t));
	f32 value    = ((0.5f * (1.0f - t)) * sinTheta) + t;

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
	if (Farm::farmMgr) {
		Farm::farmMgr->addPlant(this);
	}

	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		m_fsm->start(this, PELPLANT_Grow2, nullptr);
	} else {
		m_fsm->start(this, PELPLANT_WaitSmall, nullptr);
	}

	m_rootJointMtx = m_model->getJoint("bodyjnt2")->getWorldMatrix();
}

/*
 * --INFO--
 * Address:	80108464
 * Size:	000280
 */
void Obj::setInitialSetting(EnemyInitialParamBase* initParms)
{
	PelplantInitialParam* plParms = static_cast<PelplantInitialParam*>(initParms);

	if (m_farmPow == 0) {
		SET_FLAG(m_flags, PELPLANT_FLAGS_GROW);
	} else {
		RESET_FLAG(m_flags, PELPLANT_FLAGS_GROW);
	}

	if (m_farmPow < 0) {
		plParms->m_initialState = PELPLANT_SIZE_SMALL;
	}

	m_color = plParms->m_color;
	setPelletColor(m_color, false);

	m_size = plParms->m_amount;
	switch (plParms->m_initialState) {
	case PELPLANT_SIZE_SMALL:
		m_fsm->start(this, PELPLANT_WaitSmall, nullptr);
		break;
	case PELPLANT_SIZE_MIDDLE:
		m_fsm->start(this, PELPLANT_WaitMiddle, nullptr);
		break;
	case PELPLANT_SIZE_BIG:
		m_fsm->start(this, PELPLANT_WaitBig, nullptr);
		attachPellet();
		break;
	}

	if (plParms->m_amount == PELLET_NUMBER_FIVE) {
		sCurrentObj = this;

		SysShape::Joint* joint = m_model->getJoint("headjnt");
		P2ASSERTLINE(365, joint);
		joint->m_j3d->m_function = *(Obj::headJointCallBack);

		sCurrentObj = nullptr;
	}

	if (plParms->m_amount == PELLET_NUMBER_TEN || plParms->m_amount == PELLET_NUMBER_TWENTY) {
		sCurrentObj = this;

		SysShape::Joint* joint = m_model->getJoint("headjnt");
		P2ASSERTLINE(376, joint);
		joint->m_j3d->m_function = *(Obj::headJointCallBack);

		joint = m_model->getJoint("bodyjnt1");
		P2ASSERTLINE(381, joint);
		joint->m_j3d->m_function = *(Obj::neckJointCallBack);

		sCurrentObj = nullptr;
	}

	CollPart* part = m_collTree->getCollPart('head');
	f32 scale      = getHeadScale();
	part->setScale(scale);
	part->m_offset.x *= scale;
	part->m_offset.y *= scale;
	part->m_offset.z *= scale;
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
    , m_rootJointMtx(nullptr)
    , m_flags(PELPLANT_FLAGS_NONE)
    , m_pellet(nullptr)
    , m_colorChangeTimer(0.0f)
    , m_color(PELCOLOR_RANDOM)
    , m_size(PELPLANT_SIZE_MIDDLE)
    , m_farmPow(0)
{
	m_animator = new ProperAnimator();
	setFSM(new FSM());
	m_flags = PELPLANT_FLAGS_NONE;
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
void Pelplant::Obj::updateLODSphereRadius(int size)
{
	if (size == PELPLANT_SIZE_BIG) {
		switch (m_size) {
		case PELLET_NUMBER_ONE:
			m_curLodSphere.m_radius = sLODRadius[0];
			return;
		case PELLET_NUMBER_FIVE:
			m_curLodSphere.m_radius = sLODRadius[1];
			return;
		case PELLET_NUMBER_TEN:
			m_curLodSphere.m_radius = sLODRadius[2];
			return;
		case PELLET_NUMBER_TWENTY:
			m_curLodSphere.m_radius = sLODRadius[3];
			return;
		}
	} else {
		m_curLodSphere.m_radius = sLODRadius[0];
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
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
	if (C_PARMS->m_flags[0].typeView & 1) {
		gfx.initPerspPrintf(gfx.m_currentViewport);

		PerspPrintfInfo info;
		Vector3f pos(m_position.x, 100.0f + m_position.y, m_position.z);

		info._14 = Color4(0xC8, 0xC8, 0xFF, 0xC8);
		info._18 = Color4(0x64, 0x64, 0xFF, 0xC8);
		gfx.perspPrintf(info, pos, "FARM_POW(%d) Grow%s", m_farmPow, (m_flags & PELPLANT_FLAGS_GROW) ? "on" : "off");

		pos.y += 16.0f;
		info._14 = Color4(0xFF, 0xC8, 0xFF, 0xC8);
		info._18 = Color4(0xC8, 0x64, 0xFF, 0xC8);
		gfx.perspPrintf(info, pos, "%s %4.2f", m_fsm->getCurrName(this), _2C0);
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

	if (m_curTriangle) {
		Plane* plane                        = &m_curTriangle->m_trianglePlane;
		param.m_boundingSphere.m_position.x = plane->a;
		param.m_boundingSphere.m_position.y = plane->b;
		param.m_boundingSphere.m_position.z = plane->c;
	} else {
		param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	}
	param.m_boundingSphere.m_radius = 50.0f;

	Vector3f newVec;
	m_rootJointMtx->getRow(0, newVec);
	float sum = newVec.x;
	newVec.y *= newVec.y;
	newVec.z *= newVec.z;
	sum *= newVec.x;
	sum += newVec.y;
	sum += newVec.z;
	_sqrtf(sum, &sum);

	param.m_size = 8.0f * sum;
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
	    ->animate(&func, EnemyAnimatorBase::defaultAnimSpeed * sys->m_deltaTime, EnemyAnimatorBase::defaultAnimSpeed * sys->m_deltaTime,
	              EnemyAnimatorBase::defaultAnimSpeed * sys->m_deltaTime);
	SysShape::Model* model = m_model;
	model->m_j3dModel->m_modelData->m_jointTree.m_joints[0]->m_mtxCalc
	    = (J3DMtxCalcAnmBase*)(static_cast<EnemyBlendAnimatorBase*>(m_animator)->m_animator.getCalc());
}

/*
 * --INFO--
 * Address:	80108C60
 * Size:	000058
 */
f32 Obj::getHeadScale()
{
	f32 headScale;
	if (m_pellet) {
		switch (m_size) {
		case PELLET_NUMBER_ONE:
			headScale = 1.0f;
			break;
		case PELLET_NUMBER_FIVE:
			headScale = 2.0f;
			break;
		case PELLET_NUMBER_TEN:
			headScale = 3.5f;
			break;
		case PELLET_NUMBER_TWENTY:
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
void Obj::getNeckScale(Vector3f* scale) { *scale = Vector3f(1.5f, 0.85f, 0.75f); }

/*
 * doAnimation__Q34Game8Pelplant3ObjFv
 * --INFO--
 * Address:	80108CB8
 * Size:	000198
 */
void Obj::doAnimation()
{
	sys->m_timers->_start("zama", true);

	f32 headScale = getHeadScale();

	Obj::sCurrentObj = this;
	EnemyBase::doAnimation();
	Obj::sCurrentObj = nullptr;

	if (m_pellet) {
		float neckScale;
		switch (m_size) {
		case PELLET_NUMBER_ONE:
			neckScale = 12.0f;
			break;
		case PELLET_NUMBER_FIVE:
			neckScale = 12.0f;
			break;
		case PELLET_NUMBER_TEN:
			neckScale = 12.0f;
			break;
		case PELLET_NUMBER_TWENTY:
			neckScale = 12.0f;
			break;
		default:
			JUT_PANICLINE(663, "Unknown Pellet size. %d \n", m_size);
			break;
		}

		Vector3f translation = Vector3f(neckScale, 0.0f, 0.0f);
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
	if (m_pellet) {
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
	if (m_pellet && m_color == PELCOLOR_RANDOM) {
		if (m_colorChangeTimer > C_PARMS->m_pelplantParms.m_colorChangeTime.m_value) {
			u16 initialColor;
			if (m_pellet) {
				initialColor = m_pellet->m_pelletColor;
			} else {
				initialColor = PELCOLOR_BLUE;
			}

			u16 nextColor = initialColor + 1;
			u16 colorCap  = nextColor;
			while (!playData->hasMetPikmin(nextColor)) {
				if (++nextColor > PELCOLOR_YELLOW) {
					nextColor = PELCOLOR_BLUE;
				}

				if (nextColor == colorCap) {
					nextColor = PELCOLOR_RED;
				}
			}

			if (nextColor > PELCOLOR_YELLOW) {
				nextColor = PELCOLOR_BLUE;
			}

			setPelletColor(nextColor, true);

			if (m_flags & PELPLANT_FLAGS_GROW) {
				m_colorChangeTimer = 0.0f;
				return;
			}

			m_colorChangeTimer = 0.0f;
			return;
		}

		const float dt = sys->m_deltaTime;
		if (m_flags & PELPLANT_FLAGS_GROW) {
			m_colorChangeTimer += dt;
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

		PelletNumberInitArg numberArg(m_size, 0);
		Pellet* newPellet = pelletMgr->birth(&numberArg);
		if (newPellet) {
			Matrixf* mat = m_model->getJoint("headjnt")->getWorldMatrix();
			P2ASSERTLINE(777, mat != nullptr);
			newPellet->startCapture(mat);

			m_pellet = (PelletNumber::Object*)newPellet;

			setPelletColor(m_color, false);
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
		if (part && part->m_specialID.getStrID()[3] == '0') {
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
bool Obj::farmCallBack(Creature* c, float power)
{
	// If power > 0, round up + 1; else we round down -1
	m_farmPow = (s8)(power >= 0.0f ? power + 0.5f : power - 0.5f);

	if (m_farmPow < 0) {
		RESET_FLAG(m_flags, PELPLANT_FLAGS_GROW);
	} else {
		SET_FLAG(m_flags, PELPLANT_FLAGS_GROW);
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
	if (other->m_stuckCollPart && other->m_stuckCollPart->m_specialID.getStrID()[3] == '0') {
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
		Mtx& mtx  = J3DMtxCalc::mMtxBuffer->m_worldMatrices[joint->getJntNo()];
		f32 scale = sCurrentObj->getHeadScale();
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

		f32 neckLength;
		f32 neckThickness;
		if (sCurrentObj->m_pellet) {
			switch (sCurrentObj->m_size) {
			case PELLET_NUMBER_ONE:
				neckThickness = 1.0f;
				neckLength    = neckThickness;
				break;
			case PELLET_NUMBER_FIVE:
				neckThickness = 1.0f;
				neckLength    = neckThickness;
				break;
			case PELLET_NUMBER_TEN:
				neckThickness = 1.5;
				neckLength    = 0.85;
				break;
			case PELLET_NUMBER_TWENTY:
				neckThickness = 2.0;
				neckLength    = 0.75;
				break;
			}

		} else {
			neckThickness = 1.0f;
			neckLength    = neckThickness;
		}

		Vector3f scale(neckThickness, neckLength, neckThickness);
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
		SET_FLAG(m_flags, PELPLANT_FLAGS_GROW);
	} else {
		RESET_FLAG(m_flags, PELPLANT_FLAGS_GROW);
	}

	int stateID = getStateID();
	if (stateID == PELPLANT_Invalid) {
		stateID = PELPLANT_WaitSmall;
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
	m_rootJointMtx->getTranslation(param.m_position);
	param.m_position.y += 60.0f;
	param.m_healthPercentage = m_health / m_maxHealth;
	param._10                = 10.0f;
}

} // namespace Pelplant
} // namespace Game
