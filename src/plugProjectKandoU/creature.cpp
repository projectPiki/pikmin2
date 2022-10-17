#include "CollInfo.h"
#include "Dolphin/mtx.h"
#include "Game/cellPyramid.h"
#include "Game/Creature.h"
#include "Game/gameGenerator.h"
#include "Game/GameSystem.h"
#include "Game/shadowMgr.h"
#include "IDelegate.h"
#include "JSystem/J3D/J3DModel.h"
#include "ObjectTypes.h"
#include "SysShape/Model.h"
#include "Sys/Sphere.h"
#include "types.h"
#include "Vector3.h"
#include "Game/MapMgr.h"
#include "Game/DeathMgr.h"
#include "Game/CollEvent.h"
#include "nans.h"

// inline float _sqrt(register float x) {
// 	register float fthis;
// 	asm {
// 		frsqrte fthis, x
// 		fmuls x, fthis, x
// 	}
// 	return x;
// }

// inline float pikmin2_sqrtf__(float x)
// {
// 	if (!(x > 0.0f)) { // if x <= 0
// 		return x;
// 	}
// 	return _sqrt(x);
// 	// asm {
// 	// 	lfs f0, 0.0f
// 	// 	fcmpo cr0, x, f0
// 	// 	blelr
// 	// 	frsqrte f0, x
// 	// 	fmuls x, f0, x
// 	// }
// 	// return x;
// 	// asm {
// 	// 	opword 0xc0021f10
// 	// 	opword 0xfc010040
// 	// 	opword 0x4c810020
// 	// 	opword 0xfc000834
// 	// 	opword 0xec200072
// 	// 	opword 0x4e800020
// 	// };
// 	// lfs f0, lbl_80520270
// 	// fcmpo cr0, f1, f0
// 	// blelr
// 	// frsqrte f0, f1
// 	// fmuls f1, f0, f1
// 	// blr
// 	// if (!(x > 0.0f)) { // if x <= 0
// 	// 	return x;
// 	// }

// 	// register float reg1 = x;
// 	// register float reg2 = 0.0f;
// 	// register float result;

// 	// asm {
//     //   frsqrte reg2, reg1
//     //   fmuls result, reg2, reg1
// 	// }

// 	// return result;
// 	// return (x > 0.0f) ? x : __frsqrte(x) * (double)x;
// }

// inline float pikmin2_sqrtf_(float x)
// {
// 	if (!(x > 0.0f)) { // if x <= 0
// 		return x;
// 	}

// 	register float reg1 = x;
// 	register float reg2 = 0.0f;
// 	register float result;

// 	asm {
//       frsqrte reg2, reg1
//       fmuls result, reg2, reg1
// 	}

// 	return result;
// }

// template<> float Vector3f::normalise() {
// 	register float que;
// 	asm {
// 		lfs f3, 0(r3)
// 		lfs que, 4(r3)
// 		fmuls f0,f3,f3
// 		lfs f4, 8(r3)
// 		fmuls que,que,que
// 		fadds f0,f0,que
// 		fadds f0,f4,f0
// 		fcmpo cr0,f0,f2
// 		ble LAB_80207E28
// 		fmadds f0,f3,f3,que
// 		fadds que,f4,f0
// 		fcmpo cr0,que,f2
// 		ble LAB_80207E2C
// 		frsqrte f0,que
// 		fmuls que,f0,que
// 		b LAB_80207E2C
// LAB_80207E28:
// 		fmr que,f2
// LAB_80207E2C:
// 		// lfs f0,-0x45CC(r2)
// 		// fcmpo cr0,que,f0
// 		// ble LAB_80207E68
// 		// lfs f2,-0x45C0(r2)
// 		// lfs f0,0(r3)
// 		// fdivs f2,f2,que
// 	};
// 	if (que <= 0.0f) {
// 		return 0.0f;
// 	}
// 	x *= 1.0f / que;
// 	y *= 1.0f / que;
// 	z *= 1.0f / que;
// 	return que;
// }

// TODO: replace with definition in itemUjamushi when we get there.
// inline template <> float Vector3f::normalise()
// {
// 	// float f2 = 0.0f;
// 	// if ((x*x + y*y + z*z > 0.0f)) {
// 	float f2 = ((x * x + y * y + z * z > 0.0f)) ? pikmin2_sqrtf__(z * z + (x * x + y * y)) : 0.0f;
// 	// if (f2 = x*x + y*y + z*z, f2 > 0.0f) {
// 	// float x2 = x*x;
// 	// float z2 = z*z;
// 	// float y2 = y*y;
// 	// if (x2 + y2 + z2 > 0.0f) {
// 	// 	if (f2 = y2 + x2 + z2, f2 > 0.0f) {
// 	// float f2 = x*x + y*y + z*z;
// 	// if ((f2 > 0.0f) && (f2 > 0.0f)) {
// 	// f2 *= (float)SQRT((float)f2);
// 	// }
// 	// f2 = pikmin2_sqrtf__(z*z + (x*x + y*y));
// 	// }
// 	if (f2 > 0.0f) {
// 		// float f1 = 1.0f / f2;
// 		x *= 1.0f / f2;
// 		y *= 1.0f / f2;
// 		z *= 1.0f / f2;
// 		return f2;
// 	}
// 	return 0.0f;
// }

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_creature_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047C6E8
    lbl_8047C6E8:
        .asciz "creature.cpp"
        .skip 3
    .global lbl_8047C6F8
    lbl_8047C6F8:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B0098
    lbl_804B0098:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804B00A4
    lbl_804B00A4:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte
   "resolveOneColl__Q24Game8CreatureFP8CollPartP8CollPartR10Vector3<f>" .global
   "__vt__63Delegate3<Q24Game8Creature,P8CollPart,P8CollPart,R10Vector3<f>>"
    "__vt__63Delegate3<Q24Game8Creature,P8CollPart,P8CollPart,R10Vector3<f>>":
        .4byte 0
        .4byte 0
        .4byte
   "invoke__63Delegate3<Q24Game8Creature,P8CollPart,P8CollPart,R10Vector3<f>>FP8CollPartP8CollPartR10Vector3<f>"
    .global "__vt__47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
    "__vt__47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>":
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game8Creature
    __vt__Q24Game8Creature:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
        .4byte 0
        .4byte collisionUpdatable__Q24Game8CreatureFv
        .4byte isPiki__Q24Game8CreatureFv
        .4byte isNavi__Q24Game8CreatureFv
        .4byte deferPikiCollision__Q24Game10CellObjectFv
        .4byte getTypeName__Q24Game8CreatureFv
        .4byte getObjType__Q24Game8CreatureFv
        .4byte constructor__Q24Game8CreatureFv
        .4byte onInit__Q24Game8CreatureFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game8CreatureFv
        .4byte doEntry__Q24Game8CreatureFv
        .4byte doSetView__Q24Game8CreatureFi
        .4byte doViewCalc__Q24Game8CreatureFv
        .4byte doSimulation__Q24Game8CreatureFf
        .4byte doDirectDraw__Q24Game8CreatureFR8Graphics
        .4byte getBodyRadius__Q24Game8CreatureFv
        .4byte getCellRadius__Q24Game8CreatureFv
        .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
        .4byte 0
        .4byte isTeki__Q24Game8CreatureFv
        .4byte isPellet__Q24Game8CreatureFv
        .4byte inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
        .4byte outWaterCallback__Q24Game8CreatureFv
        .4byte inWater__Q24Game8CreatureFv
        .4byte getFlockMgr__Q24Game8CreatureFv
        .4byte onStartCapture__Q24Game8CreatureFv
        .4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
        .4byte onEndCapture__Q24Game8CreatureFv
        .4byte isAtari__Q24Game8CreatureFv
        .4byte setAtari__Q24Game8CreatureFb
        .4byte isAlive__Q24Game8CreatureFv
        .4byte setAlive__Q24Game8CreatureFb
        .4byte isCollisionFlick__Q24Game8CreatureFv
        .4byte setCollisionFlick__Q24Game8CreatureFb
        .4byte isMovieActor__Q24Game8CreatureFv
        .4byte isMovieExtra__Q24Game8CreatureFv
        .4byte isMovieMotion__Q24Game8CreatureFv
        .4byte setMovieMotion__Q24Game8CreatureFb
        .4byte isBuried__Q24Game8CreatureFv
        .4byte isFlying__Q24Game8CreatureFv
        .4byte isUnderground__Q24Game8CreatureFv
        .4byte isLivingThing__Q24Game8CreatureFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q24Game8CreatureFRQ24Game9CollEvent
        .4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
        .4byte getJAIObject__Q24Game8CreatureFv
        .4byte getPSCreature__Q24Game8CreatureFv
        .4byte getSound_AILOD__Q24Game8CreatureFv
        .4byte getSound_PosPtr__Q24Game8CreatureFv
        .4byte sound_culling__Q24Game8CreatureFv
        .4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
        .4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
        .4byte on_movie_begin__Q24Game8CreatureFb
        .4byte on_movie_end__Q24Game8CreatureFb
        .4byte movieStartAnimation__Q24Game8CreatureFUl
        .4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
        .4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
        .4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
        .4byte movieSetFaceDir__Q24Game8CreatureFf
        .4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
        .4byte getShadowParam__Q24Game8CreatureFRQ24Game11ShadowParam
        .4byte needShadow__Q24Game8CreatureFv
        .4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
        .4byte getLODSphere__Q24Game8CreatureFRQ23Sys6Sphere
        .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
        .4byte startPick__Q24Game8CreatureFv
        .4byte endPick__Q24Game8CreatureFb
        .4byte getMabiki__Q24Game8CreatureFv
        .4byte getFootmarks__Q24Game8CreatureFv
        .4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte isSlotFree__Q24Game8CreatureFs
        .4byte getFreeStickSlot__Q24Game8CreatureFv
        .4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
        .4byte getRandomFreeStickSlot__Q24Game8CreatureFv
        .4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
        .4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
        .4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
        .4byte 0
        .4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
        .4byte getSuckPos__Q24Game8CreatureFv
        .4byte getGoalPos__Q24Game8CreatureFv
        .4byte isSuckReady__Q24Game8CreatureFv
        .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game8CreatureFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game8CreatureFv
        .4byte getCreatureID__Q24Game8CreatureFv
    .global __vt__Q24Game10CellObject
    __vt__Q24Game10CellObject:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte checkCollision__Q24Game10CellObjectFPQ24Game10CellObject
        .4byte 0
        .4byte 0
        .4byte isPiki__Q24Game10CellObjectFv
        .4byte isNavi__Q24Game10CellObjectFv
        .4byte deferPikiCollision__Q24Game10CellObjectFv
        .4byte 0
        .4byte 0
    .global __vt__Q24Game15TPositionObject
    __vt__Q24Game15TPositionObject:
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global usePacketCulling__Q24Game8Creature
    usePacketCulling__Q24Game8Creature:
        .4byte 0x01000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805158F0
    lbl_805158F0:
        .skip 0x4
    .global lbl_805158F4
    lbl_805158F4:
        .skip 0x4
    .global currOp__Q24Game8Creature
    currOp__Q24Game8Creature:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518280
    lbl_80518280:
        .4byte 0x42C80000
    .global lbl_80518284
    lbl_80518284:
        .float 1.0
    .global lbl_80518288
    lbl_80518288:
        .4byte 0x00000000
    .global lbl_8051828C
    lbl_8051828C:
        .float 0.5
    .global lbl_80518290
    lbl_80518290:
        .4byte 0x41200000
    .global lbl_80518294
    lbl_80518294:
        .4byte 0x40800000
    .global lbl_80518298
    lbl_80518298:
        .4byte 0xC3FA0000
    .global lbl_8051829C
    lbl_8051829C:
        .4byte 0xC3960000
    .global lbl_805182A0
    lbl_805182A0:
        .4byte 0x43480000
    .global lbl_805182A4
    lbl_805182A4:
        .float 0.1
    .global lbl_805182A8
    lbl_805182A8:
        .4byte 0x40000000
        .4byte 0x00000000
*/

namespace Game {
/*
 * --INFO--
 * Address:	8013AE84
 * Size:	00012C
 */
Creature::Creature()
{
	m_collTree  = 0;
	m_model     = 0;
	m_mass      = 100.0f;
	m_generator = 0;
	m_scale     = 0;
	PSMTXIdentity(m_mainMatrix.m_matrix.mtxView);
	m_objectTypeID = -2;
	for (int i = 0; i < 4; i++) {
		m_flags.byteView[i] = 0;
	}
	m_flags.typeView = m_flags.typeView | 0x7;
	clearStick();
}

/*
 * --INFO--
 * Address:	8013AFB0
 * Size:	000018
 */
// WEAK - in header
// CellLeg::CellLeg()
// {
// 	m_prev   = nullptr;
// 	m_next   = nullptr;
// 	m_object = nullptr;
// 	m_cell   = nullptr;
// }

/*
 * --INFO--
 * Address:	8013AFC8
 * Size:	000120
 */
void Creature::init(Game::CreatureInitArg* arg)
{
	m_cellLayerIndex    = 0;
	m_cellRect.p1.x     = 0;
	m_cellRect.p1.y     = 0;
	m_cellRect.p2.x     = 0;
	m_cellRect.p2.y     = 0;
	m_flags.byteView[0] = 0;
	m_flags.byteView[1] = 0;
	m_flags.byteView[2] = 0;
	m_flags.byteView[3] = 0;
	m_flags.typeView |= 7;
	clearStick();
	m_updateContext.init(Game::collisionUpdateMgr);
	_11C = Vector3f(0.0f);
	clearCapture();
	m_curTriangle       = nullptr;
	m_collisionPosition = Vector3f(0.0f, 1.0f, 0.0f);
	clearCapture();
	if (getMabiki()) {
		u32* mabiki = getMabiki();
		mabiki[1]   = 0;
		mabiki[0]   = 0;
	}
	onInit(arg);
	onInitPost(arg);
}

/*
 * --INFO--
 * Address:	8013B0E8
 * Size:	000004
 */
// WEAK - in header
// void Creature::onInitPost(Game::CreatureInitArg*) { }

/*
 * --INFO--
 * Address:	8013B0EC
 * Size:	000004
 */
// WEAK - in header
// void Creature::onInit(Game::CreatureInitArg*) { }

/*
 * --INFO--
 * Address:	8013B0F0
 * Size:	0000B4
 */
void Creature::kill(CreatureKillArg* arg)
{
	endStick();
	setAlive(false);
	Cell::sCurrCellMgr = cellMgr;
	exitCell();
	Cell::sCurrCellMgr = nullptr;
	m_updateContext.exit();
	releaseAllStickers();
	clearCapture();
	onKill(arg);
	if (m_generator) {
		m_generator->informDeath(this);
		m_generator = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8013B1A4
 * Size:	000004
 */
// WEAK - in header
// void Creature::onKill(Game::CreatureKillArg* arg) { }

/*
 * --INFO--
 * Address:	8013B1A8
 * Size:	0000C8
 */
void Creature::setPosition(Vector3f& position, bool skipProcessing)
{
	onSetPosition(position);
	if (!skipProcessing) {
		updateTrMatrix();
		if (m_model) {
			PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);
			m_model->m_j3dModel->calc();
			if (m_collTree) {
				m_collTree->update();
			}
		}
		onSetPositionPost(position);
	}
}

/*
 * --INFO--
 * Address:	8013B270
 * Size:	000004
 */
// WEAK - in header
// void Creature::onSetPositionPost(Vector3f&) { }

/*
 * --INFO--
 * Address:	8013B274
 * Size:	0000CC
 */
void Creature::initPosition(Vector3f& position)
{
	onSetPosition(position);
	updateTrMatrix();
	if (m_model) {
		PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);
		m_model->m_j3dModel->calc();
		if (m_collTree) {
			m_collTree->update();
		}
	}
	onSetPositionPost(position);
	onInitPosition(position);
}

/*
 * --INFO--
 * Address:	8013B340
 * Size:	0000A0
 */
// WIP: https://decomp.me/scratch/bTbNT
// NB: currently uses a sqLen inline that needs to go in a header
void Creature::getYVector(Vector3f& outVector)
{
	outVector.x = m_mainMatrix.m_matrix.structView.yx;
	outVector.y = m_mainMatrix.m_matrix.structView.yy;
	outVector.z = m_mainMatrix.m_matrix.structView.yz;
	float sqlen = sqLen(outVector);

	register float norm;
	if (sqlen > 0.0f) {
		float Y       = S(outVector.y);
		float complen = Y + S(outVector.x);
		float Z       = S(outVector.z);
		norm          = Z + complen;
		if (norm > 0.0f) {
			register float reg2 = 0.0f;

			asm {
                  frsqrte reg2, norm
                  fmuls norm, reg2, norm
			}
		}
	} else {
		norm = 0.0f;
	}

	if (norm > 0) {
		float factor = 1.0f / norm;
		outVector.x *= factor;
		outVector.y *= factor;
		outVector.z *= factor;
	}
	/*
	lfs      f0, 0x13c(r3)
	lfs      f1, lbl_80518288@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f0, 0x14c(r3)
	stfs     f0, 4(r4)
	lfs      f0, 0x15c(r3)
	stfs     f0, 8(r4)
	lfs      f3, 0(r4)
	lfs      f2, 4(r4)
	fmuls    f0, f3, f3
	lfs      f4, 8(r4)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8013B3A0
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8013B3A4
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8013B3A4

lbl_8013B3A0:
	fmr      f2, f1

lbl_8013B3A4:
	lfs      f0, lbl_80518288@sda21(r2)
	fcmpo    cr0, f2, f0
	blelr
	lfs      f1, lbl_80518284@sda21(r2)
	lfs      f0, 0(r4)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0(r4)
	lfs      f0, 4(r4)
	fmuls    f0, f0, f1
	stfs     f0, 4(r4)
	lfs      f0, 8(r4)
	fmuls    f0, f0, f1
	stfs     f0, 8(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013B3E0
 * Size:	000034
 */
float Creature::getBodyRadius()
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	return boundingSphere.m_radius;
}

/*
 * --INFO--
 * Address:	8013B414
 * Size:	000034
 */
float Creature::getCellRadius()
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	return boundingSphere.m_radius;
}

/*
 * --INFO--
 * Address:	8013B448
 * Size:	000024
 */
char* Creature::getTypeName() { return ObjType::getName(m_objectTypeID); }

/*
 * --INFO--
 * Address:	8013B46C
 * Size:	00008C
 */
void Creature::getShadowParam(Game::ShadowParam& param)
{
	param.m_position = getPosition();
	param.m_position.y += 0.5f;
	param.m_boundingSphere.m_radius     = 10.0f;
	param._1C                           = 4.0f;
	param.m_boundingSphere.m_position.x = 0.0f;
	param.m_boundingSphere.m_position.y = 1.0f;
	param.m_boundingSphere.m_position.z = 0.0f;
}

/*
 * --INFO--
 * Address:	8013B4F8
 * Size:	00000C
 */
bool Creature::needShadow() { return m_lod.m_flags & AILOD::FLAG_NEED_SHADOW; }

/*
 * --INFO--
 * Address:	8013B504
 * Size:	000070
 */
void Creature::getLifeGaugeParam(Game::LifeGaugeParam& param)
{
	param.m_position         = getPosition();
	param.m_healthPercentage = 1.0f;
	param._10                = 10.0f;
	param._14                = 1;
}

/*
 * --INFO--
 * Address:	8013B574
 * Size:	000090
 */
void Creature::save(Stream& output, u8 flags)
{
	if (flags & 1) {
		Vector3f position = getPosition();
		position.write(output);
	}
	doSave(output);
}

/*
 * --INFO--
 * Address:	8013B604
 * Size:	0000E4
 */
void Creature::load(Stream& input, u8 flags)
{
	if (flags & 1) {
		Vector3f position;
		position.read(input);
		setPosition(position, false);
	}
	doLoad(input);
}

/*
 * --INFO--
 * Address:	8013B6E8
 * Size:	0000BC
 */
// WIP: https://decomp.me/scratch/2o7Wb
// NB: currently uses an inline pikmin2_sqrtf that needs to go in a header
float Creature::calcSphereDistance(Game::Creature* them)
{
	Sys::Sphere myBounds;
	Sys::Sphere theirBounds;
	them->getBoundingSphere(theirBounds);
	getBoundingSphere(myBounds);
	return myBounds.m_position.distance(theirBounds.m_position) - (myBounds.m_radius + theirBounds.m_radius);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	mr       r3, r4
	addi     r4, r1, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0x1c(r1)
	lfs      f3, 0x10(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x20(r1)
	lfs      f1, 8(r1)
	lfs      f0, 0x18(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80518288@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f2, f2, f1
	fcmpo    cr0, f2, f0
	ble      lbl_8013B77C
	ble      lbl_8013B780
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8013B780

lbl_8013B77C:
	fmr      f2, f0

lbl_8013B780:
	lfs      f1, 0x14(r1)
	lfs      f0, 0x24(r1)
	fadds    f0, f1, f0
	fsubs    f1, f2, f0
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013B7A4
 * Size:	0000CC
 */
void Creature::applyAirDrag(float a, float b, float c)
{
	Vector3f vel = getVelocity();

	vel.y -= c * (a * vel.y);
	vel.x -= (vel.x * (a * b));
	vel.z -= (vel.z * (a * b));

	setVelocity(vel);
}

/*
 * --INFO--
 * Address:	8013B870
 * Size:	00003C
 */
void Creature::doAnimation()
{
	if (m_model) {
		m_model->m_j3dModel->calc();
	}
}

/*
 * --INFO--
 * Address:	8013B8AC
 * Size:	000004
 */
void Creature::doEntry() { }

/*
 * --INFO--
 * Address:	8013B8B0
 * Size:	000108
 */
void Creature::doSetView(int viewportNo)
{
	P2ASSERTBOUNDSLINE(558, 0, viewportNo, 2);

	if (!m_model) {
		return;
	}

	P2ASSERTLINE(563, m_model);

	m_model->setCurrentViewNo((u16)viewportNo);
	if (Creature::usePacketCulling) {
		if (m_lod.m_flags & (16 << viewportNo)) {
			m_model->showPackets();
			return;
		} else {
			m_model->hidePackets();
			return;
		}
	}
	m_model->showPackets();
	return;
}

/*
 * --INFO--
 * Address:	8013B9B8
 * Size:	00002C
 */
void Creature::doViewCalc()
{
	if (m_model) {
		m_model->viewCalc();
	}
}

/*
 * --INFO--
 * Address:	8013B9E4
 * Size:	000010
 */
bool Creature::isPiki() { return m_objectTypeID == OBJTYPE_Piki; }

/*
 * --INFO--
 * Address:	8013B9F4
 * Size:	000014
 */
bool Creature::isNavi() { return m_objectTypeID == OBJTYPE_Navi; }

/*
 * --INFO--
 * Address:	8013BA08
 * Size:	000014
 */
bool Creature::isTeki() { return m_objectTypeID == OBJTYPE_Teki; }

/*
 * --INFO--
 * Address:	8013BA1C
 * Size:	000014
 */
bool Creature::isPellet() { return m_objectTypeID == OBJTYPE_Pellet; }

/*
 * --INFO--
 * Address:	8013BA30
 * Size:	000020
 */
bool Creature::sound_culling() { return !((m_lod.m_flags & AILOD::FLAG_UNKNOWN4) || (m_lod.m_flags & AILOD::FLAG_NEED_SHADOW)); }

/*
 * --INFO--
 * Address:	8013BA50
 * Size:	00009C
 */
void Creature::movie_begin(bool required)
{
	// m_flags.m_isMovieActor = TRUE;
	m_flags.intView |= CF_IS_MOVIE_ACTOR;
	if (required == false) {
		// 	m_flags.m_isMovieExtra = TRUE;
		m_flags.intView |= CF_IS_MOVIE_EXTRA;
		isPiki();
	} else {
		// 	m_flags.m_isMovieExtra = FALSE;
		m_flags.intView &= ~CF_IS_MOVIE_EXTRA;
		isPiki();
	}
	on_movie_begin(required);
}

/*
 * TODO: Determine if param really should be named "required".
 * --INFO--
 * Address:	8013BAEC
 * Size:	000050
 */
void Creature::movie_end(bool required)
{
	on_movie_end(required);
	m_flags.intView &= ~CF_IS_MOVIE_ACTOR;
	m_flags.intView &= ~CF_IS_MOVIE_EXTRA;
}

/*
 * --INFO--
 * Address:	8013BB3C
 * Size:	0000E0
 */
void Creature::checkWater(WaterBox* waterBox, Sys::Sphere& sphere)
{
	if (waterBox) {
		bool isInWater = waterBox->inWater(sphere);
		if (isInWater) {
			goto returnbox;
		}
		if (mapMgr) {
			waterBox = mapMgr->findWater(sphere);
		}
		if (!waterBox) {
			outWaterCallback();
			waterBox = 0;
		}
	} else {
		WaterBox* wb = 0;
		if (mapMgr) {
			wb = mapMgr->findWater(sphere);
		}
		waterBox = wb;
		if (waterBox) {
			inWaterCallback(waterBox);
		}
	}
returnbox:
	return waterBox;
}

/*
 * --INFO--
 * Address:	8013BC1C
 * Size:	000004
 */
// WEAK - in header
// void Creature::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	8013BC20
 * Size:	000004
 */
// WEAK - in header
// void Creature::outWaterCallback() { }

/*
 * --INFO--
 * Address:	8013BC24
 * Size:	000144
 */
int Creature::checkHell(Creature::CheckHellArg& hellArg)
{
	Vector3f pos;
	pos        = getPosition();
	float yval = pos.y;
	if (yval < -500.0f) {
		if (isPiki() && static_cast<FakePiki*>(this)->isPikmin()) {
			deathMgr->inc(0);
		}
		if (hellArg._00) {
			endStick();
			setAlive(false);
			Cell::sCurrCellMgr = cellMgr;
			exitCell();
			Cell::sCurrCellMgr = 0;
			m_updateContext.exit();
			releaseAllStickers();
			clearCapture();
			onKill(0);
			if (m_generator) {
				m_generator->informDeath(this);
				m_generator = 0;
			}
		}
		return 2;
	} else {
		return (yval < -300.0f);
	}
	return 0;
}

/*
 * --INFO--
 * Address:	8013BD68
 * Size:	000178
 */
void Game::Creature::updateCell()
{
	if (!gameSystem || !(gameSystem->_3C & 4)) {
		m_passID = -1;

		Sys::Sphere ball;
		ball.m_position = getPosition();
		ball.m_radius   = getCellRadius();

		m_sweepPruneObject.m_minX.m_radius = ball.m_position.x - ball.m_radius;
		m_sweepPruneObject.m_maxX.m_radius = ball.m_position.x + ball.m_radius;
		m_sweepPruneObject.m_minZ.m_radius = ball.m_position.z - ball.m_radius;
		m_sweepPruneObject.m_maxZ.m_radius = ball.m_position.z + ball.m_radius;

		SweepPrune::Object* sweepObj = (SweepPrune::Object*)this;
		if (this) {
			sweepObj = &m_sweepPruneObject;
		}

		CellPyramid* mgr;
		sweepObj->m_minX.insertSort((mgr = cellMgr)->_00);
		sweepObj->m_maxX.insertSort(mgr->_00);
		sweepObj->m_minZ.insertSort(mgr->_14);
		sweepObj->m_maxZ.insertSort(mgr->_14);

		if (cellMgr) {
			CellPyramid::sCellBugName = getCreatureName();
			CellPyramid::sCellBugID   = getCreatureID();
			cellMgr->entry((Game::CellObject*)this, ball, m_cellLayerIndex, m_cellRect);
		}
	}
}

/*
 * --INFO--
 * Address:	8013BEE0
 * Size:	000008
 */
// WEAK - in header
// s32 Creature::getCreatureID() { return -1; }

/*
 * --INFO--
 * Address:	8013BEE8
 * Size:	000044
 */
int Creature::getCellPikiCount()
{
	if (cellMgr) {
		return cellMgr->getPikiCount(m_cellLayerIndex, m_cellRect);
	}
	return 0;
}

/*
 * --INFO--
 * Address:	8013BF2C
 * Size:	0000B0
 */
// WIP: https://decomp.me/scratch/fXQI3
void Creature::applyImpulse(Vector3f& unused, Vector3f& impulse)
{
	Vector3f newVelocity;
	Vector3f oldVelocity = getVelocity();
	// TODO: Check if vector3 had helper functions for multiplying and addition.
	// Those might've been used here, which would explain seperate operations in
	// sets of 3. i.e. 3 stfs, 3 lfs, 3 fmuls, 3 fadds, 3 stfs
	newVelocity.x = oldVelocity.x + impulse.x * m_mass;
	newVelocity.y = oldVelocity.y + impulse.y * m_mass;
	newVelocity.z = oldVelocity.z + impulse.z * m_mass;
	setVelocity(newVelocity);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r5
	stw      r30, 0x28(r1)
	mr       r30, r3
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f5, 8(r1)
	mr       r3, r30
	lfs      f4, 0xc(r1)
	addi     r4, r1, 0x14
	lfs      f3, 0x10(r1)
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	lfs      f6, 0x118(r30)
	lfs      f2, 8(r31)
	lfs      f1, 4(r31)
	lfs      f0, 0(r31)
	fmuls    f2, f2, f6
	fmuls    f1, f1, f6
	fmuls    f0, f0, f6
	fadds    f2, f3, f2
	fadds    f1, f4, f1
	fadds    f0, f5, f0
	stfs     f2, 0x1c(r1)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013BFDC
 * Size:	0002E4
 */
void Creature::checkCollision(Game::CellObject* cellObj)
{
	CollPart* collPart1;
	CollPart* collPart2;
	Vector3f vec;

	if (isDebugCollision()) {
		getCreatureName();
		((Creature*)cellObj)->getCreatureName();
	}

	if (!((Creature*)cellObj)->isAtari() || !isAtari()) {
		return;
	}

	if (!((!isStickTo() || (m_sticker != cellObj)) && (!((Creature*)cellObj)->isStickTo() || (((Creature*)cellObj)->m_sticker != this))
	      && (!ignoreAtari((Creature*)cellObj)))
	    || ((Creature*)cellObj)->ignoreAtari(this)) {
		return;
	}

	if (!((Creature*)cellObj)->isAlive() || !isAlive()) {
		return;
	}

	isDebugCollision();

	Delegate3<Creature, CollPart*, CollPart*, Vector3f&> delegate
	    = Delegate3<Creature, CollPart*, CollPart*, Vector3f&>(this, &resolveOneColl);
	Creature::currOp = cellObj;

	if (isDebugCollision()) {
		CollTree::mDebug = 1;
	}

	bool creatureCheck = true;
	if (!isPiki() && !isNavi()) {
		creatureCheck = false;
	}

	bool objCheck = true;
	if (!cellObj->isPiki() && !cellObj->isNavi()) {
		objCheck = false;
	}

	if (((creatureCheck != 0) && (objCheck != 0)) || ((creatureCheck == 0) && (objCheck == 0))) {
		if (m_collTree->checkCollision(((Creature*)cellObj)->m_collTree, &collPart1, &collPart2, vec)) {
			delegate.invoke(collPart1, collPart2, vec);
		}
	} else {
		m_collTree->checkCollisionMulti(((Creature*)cellObj)->m_collTree, (IDelegate3<CollPart*, CollPart*, Vector3<float>&>*)&delegate);
	}

	CollTree::mDebug = 0;
	currOp           = (Game::CellObject*)0;
}

/*
 * --INFO--
 * Address:	8013C2C0
 * Size:	0008CC
 */
// WIP: https://decomp.me/scratch/03fuZ
void Creature::resolveOneColl(CollPart*, CollPart*, Vector3f&)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stmw     r26, 0xa8(r1)
	lwz      r0, currOp__Q24Game8Creature@sda21(r13)
	mr       r28, r3
	mr       r29, r4
	mr       r30, r5
	cmplwi   r0, 0
	mr       r26, r6
	mr       r31, r0
	beq      lbl_8013CB60
	lwz      r12, 0(r3)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013C348
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl

lbl_8013C348:
	mr       r3, r28
	li       r27, 0
	lwz      r12, 0(r28)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013C384
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013C388

lbl_8013C384:
	li       r27, 1

lbl_8013C388:
	lfs      f1, 4(r26)
	lfs      f0, 0(r26)
	fneg     f3, f1
	lfs      f2, 8(r26)
	fneg     f0, f0
	lfs      f1, lbl_80518288@sda21(r2)
	fneg     f2, f2
	frsp     f4, f3
	frsp     f5, f0
	stfs     f0, 0x98(r1)
	frsp     f6, f2
	fmuls    f4, f4, f4
	stfs     f3, 0x9c(r1)
	fmuls    f0, f5, f5
	fmuls    f3, f6, f6
	stfs     f2, 0xa0(r1)
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8013C3F4
	fmadds   f0, f5, f5, f4
	fadds    f4, f3, f0
	fcmpo    cr0, f4, f1
	ble      lbl_8013C3F8
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_8013C3F8

lbl_8013C3F4:
	fmr      f4, f1

lbl_8013C3F8:
	lfs      f0, lbl_80518288@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8013C434
	lfs      f0, lbl_80518284@sda21(r2)
	lfs      f2, 0x98(r1)
	fdivs    f3, f0, f4
	lfs      f1, 0x9c(r1)
	lfs      f0, 0xa0(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x98(r1)
	stfs     f1, 0x9c(r1)
	stfs     f0, 0xa0(r1)
	b        lbl_8013C438

lbl_8013C434:
	fmr      f4, f0

lbl_8013C438:
	lfs      f1, lbl_80518288@sda21(r2)
	fcmpu    cr0, f1, f4
	bne      lbl_8013C454
	lfs      f0, lbl_80518284@sda21(r2)
	stfs     f1, 0x98(r1)
	stfs     f1, 0x9c(r1)
	stfs     f0, 0xa0(r1)

lbl_8013C454:
	lfs      f0, 0x1c(r29)
	mr       r3, r28
	lfs      f6, 0xa0(r1)
	addi     r4, r1, 0x74
	lfs      f7, 0x9c(r1)
	addi     r5, r1, 0x8c
	lfs      f8, 0x98(r1)
	fmuls    f5, f6, f0
	lfs      f2, 0x54(r29)
	fmuls    f4, f7, f0
	lfs      f1, 0x50(r29)
	fmuls    f3, f8, f0
	lfs      f0, 0x4c(r29)
	fadds    f2, f2, f5
	fadds    f1, f1, f4
	fadds    f0, f0, f3
	stfs     f2, 0x7c(r1)
	stfs     f0, 0x74(r1)
	stfs     f1, 0x78(r1)
	lfs      f0, 0x1c(r30)
	lfs      f5, 0x54(r30)
	fmuls    f4, f6, f0
	lfs      f3, 0x50(r30)
	fmuls    f2, f7, f0
	lfs      f1, 0x4c(r30)
	fmuls    f0, f8, f0
	fsubs    f4, f5, f4
	fsubs    f2, f3, f2
	fsubs    f0, f1, f0
	stfs     f4, 0x70(r1)
	stfs     f0, 0x68(r1)
	stfs     f2, 0x6c(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x184(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 0x68
	lwz      r12, 0(r31)
	addi     r5, r1, 0x80
	lwz      r12, 0x184(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x118(r28)
	lfs      f1, 0x118(r31)
	lfs      f0, lbl_80518288@sda21(r2)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8013C528
	fdivs    f31, f2, f1
	lfs      f0, lbl_80518284@sda21(r2)
	fsubs    f30, f0, f31
	b        lbl_8013C530

lbl_8013C528:
	lfs      f30, lbl_8051828C@sda21(r2)
	fmr      f31, f30

lbl_8013C530:
	lwz      r4, sys@sda21(r13)
	mr       r3, r28
	lwz      r12, 0(r28)
	lfs      f1, lbl_80518284@sda21(r2)
	lfs      f0, 0x54(r4)
	lwz      r12, 0x1c(r12)
	fdivs    f29, f1, f0
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013C5E0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013C5E0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013C61C
	lfs      f1, lbl_8051828C@sda21(r2)
	lfs      f0, lbl_80518288@sda21(r2)
	fmuls    f1, f1, f29
	lfs      f3, 0(r26)
	fmuls    f0, f0, f29
	lfs      f2, 0x11c(r28)
	fmuls    f4, f31, f1
	fmuls    f1, f31, f0
	fmadds   f0, f3, f4, f2
	stfs     f0, 0x11c(r28)
	lfs      f2, 8(r26)
	lfs      f0, 0x124(r28)
	fmadds   f0, f2, f4, f0
	stfs     f0, 0x124(r28)
	lfs      f2, 4(r26)
	lfs      f0, 0x120(r28)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x120(r28)
	b        lbl_8013C61C

lbl_8013C5E0:
	lfs      f1, lbl_8051828C@sda21(r2)
	lfs      f0, lbl_80518288@sda21(r2)
	fmuls    f1, f1, f29
	lfs      f2, 0(r26)
	fmuls    f0, f0, f29
	fmuls    f3, f31, f1
	fmuls    f0, f31, f0
	fmuls    f1, f2, f3
	stfs     f1, 0x11c(r28)
	lfs      f1, 8(r26)
	fmuls    f1, f1, f3
	stfs     f1, 0x124(r28)
	lfs      f1, 4(r26)
	fmuls    f0, f1, f0
	stfs     f0, 0x120(r28)

lbl_8013C61C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013C6BC
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013C6BC
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013C704
	lfs      f0, lbl_8051828C@sda21(r2)
	lfs      f2, 0(r26)
	fmuls    f1, f0, f29
	lfs      f0, lbl_80518288@sda21(r2)
	fneg     f2, f2
	fmuls    f0, f0, f29
	fmuls    f3, f30, f1
	fmuls    f0, f30, f0
	fmuls    f1, f2, f3
	stfs     f1, 0x11c(r31)
	lfs      f1, 8(r26)
	fneg     f1, f1
	fmuls    f1, f1, f3
	stfs     f1, 0x124(r31)
	lfs      f1, 4(r26)
	fneg     f1, f1
	fmuls    f0, f1, f0
	stfs     f0, 0x120(r31)
	b        lbl_8013C704

lbl_8013C6BC:
	lfs      f0, lbl_8051828C@sda21(r2)
	lfs      f2, 0(r26)
	fmuls    f1, f0, f29
	lfs      f0, lbl_80518288@sda21(r2)
	fneg     f2, f2
	fmuls    f0, f0, f29
	fmuls    f3, f30, f1
	fmuls    f0, f30, f0
	fmuls    f1, f2, f3
	stfs     f1, 0x11c(r31)
	lfs      f1, 8(r26)
	fneg     f1, f1
	fmuls    f1, f1, f3
	stfs     f1, 0x124(r31)
	lfs      f1, 4(r26)
	fneg     f1, f1
	fmuls    f0, f1, f0
	stfs     f0, 0x120(r31)

lbl_8013C704:
	lfs      f2, 0x11c(r28)
	lfs      f1, 0x120(r28)
	fmuls    f0, f2, f2
	lfs      f3, 0x124(r28)
	fmuls    f4, f1, f1
	lfs      f1, lbl_80518288@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8013C74C
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8013C750
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8013C750

lbl_8013C74C:
	fmr      f3, f1

lbl_8013C750:
	lfs      f2, lbl_805182A0@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_8013C78C
	lfs      f1, lbl_80518284@sda21(r2)
	lfs      f0, 0x11c(r28)
	fdivs    f1, f1, f3
	fmuls    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x11c(r28)
	lfs      f0, 0x120(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x120(r28)
	lfs      f0, 0x124(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x124(r28)

lbl_8013C78C:
	lfs      f2, 0x11c(r31)
	lfs      f1, 0x120(r31)
	fmuls    f0, f2, f2
	lfs      f3, 0x124(r31)
	fmuls    f4, f1, f1
	lfs      f1, lbl_80518288@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8013C7D4
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8013C7D8
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8013C7D8

lbl_8013C7D4:
	fmr      f3, f1

lbl_8013C7D8:
	lfs      f2, lbl_805182A0@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_8013C814
	lfs      f1, lbl_80518284@sda21(r2)
	lfs      f0, 0x11c(r31)
	fdivs    f1, f1, f3
	fmuls    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x11c(r31)
	lfs      f0, 0x120(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x120(r31)
	lfs      f0, 0x124(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x124(r31)

lbl_8013C814:
	clrlwi.  r0, r27, 0x18
	beq      lbl_8013C838
	lfs      f0, lbl_80518288@sda21(r2)
	stfs     f0, 0x11c(r28)
	stfs     f0, 0x120(r28)
	stfs     f0, 0x124(r28)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)

lbl_8013C838:
	lfs      f1, 0x90(r1)
	mr       r3, r28
	lfs      f0, 0x84(r1)
	addi     r4, r1, 0x5c
	lfs      f3, 0x8c(r1)
	lfs      f2, 0x80(r1)
	fsubs    f1, f1, f0
	lfs      f0, 0x9c(r1)
	fsubs    f2, f3, f2
	stw      r31, 0x5c(r1)
	fmuls    f0, f1, f0
	lfs      f1, 0x98(r1)
	stw      r30, 0x60(r1)
	lfs      f3, 0x94(r1)
	stw      r29, 0x64(r1)
	fmadds   f0, f2, f1, f0
	lfs      f1, 0x88(r1)
	lwz      r12, 0(r28)
	fsubs    f2, f3, f1
	lfs      f1, 0xa0(r1)
	lwz      r12, 0xec(r12)
	fmadds   f29, f2, f1, f0
	mtctr    r12
	bctrl
	stw      r28, 0x50(r1)
	mr       r3, r31
	addi     r4, r1, 0x50
	stw      r29, 0x54(r1)
	stw      r30, 0x58(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0xec(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518288@sda21(r2)
	fcmpo    cr0, f29, f0
	cror     2, 0, 2
	bne      lbl_8013C914
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013CB60
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	b        lbl_8013CB60

lbl_8013C914:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r27, 0x18
	beq      lbl_8013C948
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	b        lbl_8013CB60

lbl_8013C948:
	mr       r3, r28
	lfs      f30, lbl_805182A4@sda21(r2)
	lwz      r12, 0(r28)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8013C984
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8013C988

lbl_8013C984:
	lfs      f30, lbl_80518288@sda21(r2)

lbl_8013C988:
	lfs      f0, lbl_80518284@sda21(r2)
	li       r27, 0
	lfs      f2, 0x118(r28)
	fadds    f3, f0, f30
	lfs      f1, 0x118(r31)
	lfs      f0, lbl_80518288@sda21(r2)
	fadds    f2, f2, f1
	fneg     f1, f3
	fmr      f30, f2
	fcmpu    cr0, f0, f2
	fmuls    f29, f1, f29
	bne      lbl_8013C9C0
	lfs      f30, lbl_805182A8@sda21(r2)
	li       r27, 1

lbl_8013C9C0:
	mr       r3, r28
	addi     r4, r1, 0x74
	lwz      r12, 0(r28)
	addi     r5, r1, 0x98
	lwz      r12, 0x188(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	fadds    f30, f30, f1
	lwz      r12, 0(r31)
	addi     r4, r1, 0x68
	addi     r5, r1, 0x98
	lwz      r12, 0x188(r12)
	mtctr    r12
	bctrl
	fadds    f30, f30, f1
	lfs      f1, 0xa0(r1)
	lfs      f6, 0x9c(r1)
	clrlwi.  r0, r27, 0x18
	lfs      f7, 0x98(r1)
	fdivs    f2, f29, f30
	fneg     f5, f2
	fmuls    f0, f1, f2
	fmuls    f3, f6, f2
	fmuls    f4, f1, f5
	fmuls    f2, f7, f2
	stfs     f0, 0x4c(r1)
	fmuls    f1, f7, f5
	fmuls    f0, f6, f5
	stfs     f3, 0x48(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	stfs     f4, 0x40(r1)
	bne      lbl_8013CA88
	mr       r3, r28
	addi     r4, r1, 0x74
	lwz      r12, 0(r28)
	addi     r5, r1, 0x44
	lwz      r12, 0x18c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 0x68
	lwz      r12, 0(r31)
	addi     r5, r1, 0x38
	lwz      r12, 0x18c(r12)
	mtctr    r12
	bctrl
	b        lbl_8013CB60

lbl_8013CA88:
	mr       r4, r28
	addi     r3, r1, 0x14
	lwz      r12, 0(r28)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	mr       r3, r28
	lfs      f4, 0x18(r1)
	addi     r4, r1, 0x2c
	lfs      f3, 0x1c(r1)
	lfs      f2, 0x4c(r1)
	lfs      f1, 0x48(r1)
	lfs      f0, 0x44(r1)
	fadds    f2, f3, f2
	stfs     f3, 0x34(r1)
	fadds    f1, f4, f1
	fadds    f0, f5, f0
	stfs     f5, 0x2c(r1)
	stfs     f4, 0x30(r1)
	stfs     f0, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f2, 0x34(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f5, 8(r1)
	mr       r3, r31
	lfs      f4, 0xc(r1)
	addi     r4, r1, 0x20
	lfs      f3, 0x10(r1)
	lfs      f2, 0x40(r1)
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x38(r1)
	fadds    f2, f3, f2
	stfs     f3, 0x28(r1)
	fadds    f1, f4, f1
	fadds    f0, f5, f0
	stfs     f5, 0x20(r1)
	stfs     f4, 0x24(r1)
	stfs     f0, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f2, 0x28(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8013CB60:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	lmw      r26, 0xa8(r1)
	lwz      r0, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013CB8C
 * Size:	000004
 */
// WEAK - in header
// void Creature::collisionCallback(Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	8013CB90
 * Size:	000030
 */
// WEAK - in header
// template <> void Delegate3<Game::Creature, CollPart*, CollPart*, Vector3f&>::invoke(CollPart* a, CollPart* b, Vector3f& c)
// {
//     (m_object->*m_function)(a, b, c);
// }

/*
 * --INFO--
 * Address:	8013CBC0
 * Size:	000004
 */
// WEAK - in header
// void Creature::constructor() { }

/*
 * --INFO--
 * Address:	8013CBC4
 * Size:	000004
 */
// WEAK - in header
// void Creature::doSimulation(float) { }

/*
 * --INFO--
 * Address:	8013CBC8
 * Size:	000008
 */
// WEAK - in header
// bool Creature::inWater() { return false; }

/*
 * --INFO--
 * Address:	8013CBD0
 * Size:	000008
 */
// WEAK - in header
// bool Creature::isFlying() { return false; }

/*
 * --INFO--
 * Address:	8013CBD8
 * Size:	000008
 */
// WEAK - in header
// PSM::Creature* Creature::getPSCreature() { return nullptr; }

/*
 * --INFO--
 * Address:	8013CBE0
 * Size:	000008
 */
// WEAK - in header
// Vector3f* Creature::getSound_PosPtr() { return nullptr; }

/*
 * --INFO--
 * Address:	8013CBE8
 * Size:	000008
 */
// WEAK - in header
// float Creature::getSound_CurrAnimFrame() { return 0.0f; }

/*
 * --INFO--
 * Address:	8013CBF0
 * Size:	000008
 */
// WEAK - in header
// float Creature::getSound_CurrAnimSpeed() { return 0.0f; }

/*
 * --INFO--
 * Address:	8013CBF8
 * Size:	00002C
 */
// WEAK - in header
// void Creature::getLODSphere(Sys::Sphere& sphere) { return getBoundingSphere(sphere); }

/*
 * --INFO--
 * Address:	8013CC24
 * Size:	000004
 */
// WEAK - in header
// void Creature::onStickStart(Game::Creature*) { }

/*
 * --INFO--
 * Address:	8013CC28
 * Size:	000004
 */
// WEAK - in header
// void Creature::onStickEnd(Game::Creature*) { }

/*
 * --INFO--
 * Address:	8013CC2C
 * Size:	000004
 */
// WEAK - in header
// void CellObject::checkCollision(Game::CellObject*) { }

/*
 * --INFO--
 * Address:	8013CC30
 * Size:	000008
 */
// WEAK - in header
// bool CellObject::isPiki() { return false; }

/*
 * --INFO--
 * Address:	8013CC38
 * Size:	000008
 */
// WEAK - in header
// bool CellObject::isNavi() { return false; }

} // namespace Game

/*
 * --INFO--
 * Address:	8013CC40
 * Size:	000028
 */
void __sinit_creature_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B0098@ha
	stw      r0, lbl_805158F0@sda21(r13)
	stfsu    f0, lbl_804B0098@l(r3)
	stfs     f0, lbl_805158F4@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
