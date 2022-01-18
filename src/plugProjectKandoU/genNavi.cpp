#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F7D8
    lbl_8047F7D8:
        .4byte 0x6F626A65
        .4byte 0x63742074
        .4byte 0x79706500
        .4byte 0x4E415649
        .4byte 0x2082F083
        .4byte 0x5A836283
        .4byte 0x67000000
        .4byte 0x8358835E
        .4byte 0x815B8367
        .4byte 0x8CFC82AB
        .4byte 0x00000000
    .global lbl_8047F804
    lbl_8047F804:
        .4byte 0x83698372
        .4byte 0x82F094AD
        .4byte 0x90B60000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game13GenObjectNavi
    __vt__Q24Game13GenObjectNavi:
        .4byte 0
        .4byte 0
        .4byte doWrite__Q24Game7GenBaseFR6Stream
        .4byte ramSaveParameters__Q24Game13GenObjectNaviFR6Stream
        .4byte ramLoadParameters__Q24Game13GenObjectNaviFR6Stream
        .4byte doEvent__Q24Game7GenBaseFUl
        .4byte doRead__Q24Game7GenBaseFR6Stream
        .4byte update__Q24Game9GenObjectFPQ24Game9Generator
        .4byte render__Q24Game9GenObjectFR8GraphicsPQ24Game9Generator
        .4byte getLatestVersion__Q24Game9GenObjectFv
        .4byte getShape__Q24Game7GenBaseFv
        .4byte updateUseList__Q24Game9GenObjectFPQ24Game9Generatori
        .4byte generate__Q24Game13GenObjectNaviFPQ24Game9Generator
        .4byte birth__Q24Game13GenObjectNaviFPQ24Game6GenArg
        .4byte "generatorMakeMatrix__Q24Game9GenObjectFR7MatrixfR10Vector3<f>"
        .4byte getDebugInfo__Q24Game9GenObjectFPc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805192A8
    lbl_805192A8:
        .4byte 0x00000000
    .global lbl_805192AC
    lbl_805192AC:
        .4byte 0x43B40000
    .global lbl_805192B0
    lbl_805192B0:
        .4byte 0x40490FDB
    .global lbl_805192B4
    lbl_805192B4:
        .4byte 0x3BB60B61
*/

#include "Game/gameGenerator.h"
#include "Game/Creature.h"
#include "Game/Navi.h"

#include "SysShape/AnimInfo.h"

#include "BaseParm.h"

namespace Game {
struct GenObjectNavi : public GenObject {
	GenObjectNavi()
	    : GenObject('navi', "object type", "NAVI をセット")
	    , m_rotParm(this, 'p000', "スタ?[ト向き", 0, 0, 360)
	{
	}

	virtual void ramSaveParameters(Stream&);
	virtual void ramLoadParameters(Stream&);
	virtual Creature* generate(Generator*);
	virtual Creature* birth(GenArg*);

	static void initialise();

	Parm<float> m_rotParm; // _24
};
} // namespace Game

/*
 * --INFO--
 * Address:	801ACA08
 * Size:	0000B8
 * Matches (I think... TODO: make a decomp me and check)
 */
Game::GenObject* makeObjectNavi() { return new Game::GenObjectNavi(); }

namespace Game {
/*
 * --INFO--
 * Address:	801ACAC0
 * Size:	00008C
 * Matches
 */
void GenObjectNavi::initialise(void)
{
	GenObjectFactoryFactory* factory = GenObjectFactory::factory;
	if (factory->m_count < factory->m_limit) {
		factory->m_factories[factory->m_count].m_typeID       = 'navi';
		factory->m_factories[factory->m_count].m_makeFunction = makeObjectNavi;
		factory->m_factories[factory->m_count].m_name         = "ビを発生";
		factory->m_factories[factory->m_count].m_version      = '0000';
		factory->m_count++;
	}
}

/*
 * --INFO--
 * Address:	801ACB4C
 * Size:	000004
 */
void GenObjectNavi::ramSaveParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801ACB50
 * Size:	000004
 */
void GenObjectNavi::ramLoadParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801ACB54
 * Size:	000078
 * Matches
 */
Creature* GenObjectNavi::generate(Game::Generator* gen)
{
	Vector3f finalPos(gen->m_position.x + gen->m_offset.x, gen->m_position.y + gen->m_offset.y, gen->m_position.z + gen->m_offset.z);

	GenArg arg;
	arg.m_position = finalPos;
	return birth(&arg);
}
} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void print_calcs(SysShape::Model*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void clear_calcs(SysShape::Model* model, SysShape::Animator& anim)
{
	// UNUSED FUNCTION
}

namespace Game {
/*
 * --INFO--
 * Address:	801ACBCC
 * Size:	000138
 */
Creature* GenObjectNavi::birth(Game::GenArg* arg)
{
	u32 latestVer = getLatestVersion();

	Navi* newObj = naviMgr->birth();
	if (newObj) {
		newObj->init(nullptr);

		newObj->m_animator.m_animators[0].getCalc();
		newObj->m_animator.m_animators[1].getCalc();

		SysShape::Model* model = newObj->m_model;
		for (int i = model->m_jointCount; i > 0; i--) {
			J3DMtxCalc* calc = newObj->m_animator.m_animators[1].getCalc();
			calc->setAnmTransform(0);
		}

		newObj->setPosition(arg->m_position, false);
		newObj->m_faceDir = PI * ((1.0f / 180) * m_rotParm.m_value);
	}
	return newObj;

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r12, 0xc(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	beq      lbl_801ACCE0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	addi     r3, r30, 0x1ac
	lwz      r12, 0x1ac(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x1c8
	lwz      r12, 0x1c8(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0x174(r30)
	lwz      r0, 0xc(r31)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801ACC64

lbl_801ACC60:
	bdnz     lbl_801ACC60

lbl_801ACC64:
	addi     r3, r30, 0x1c8
	lwz      r12, 0x1c8(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 8(r31)
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwz      r4, 0(r4)
	stw      r3, 0x54(r4)
	lwz      r3, 0x174(r30)
	lwz      r0, 0xc(r3)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801ACCA4

lbl_801ACCA0:
	bdnz     lbl_801ACCA0

lbl_801ACCA4:
	lwz      r0, 0xc(r3)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801ACCB8

lbl_801ACCB4:
	bdnz     lbl_801ACCB4

lbl_801ACCB8:
	mr       r3, r30
	addi     r4, r29, 4
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f1, lbl_805192B4@sda21(r2)
	lfs      f0, 0x3c(r28)
	lfs      f2, lbl_805192B0@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x1fc(r30)

lbl_801ACCE0:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
*/
}
} // namespace Game

namespace SysShape {
/*
 * --INFO--
 * Address:	801ACD04
 * Size:	00001C
 */
J3DMtxCalc* Animator::getCalc() { return m_animInfo ? m_animInfo->m_calc : nullptr; }
} // namespace SysShape
