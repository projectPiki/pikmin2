#include "JStage/TObject.h"
#include "JStage/TSystem.h"
#include "JStudio/data.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "JSystem/JStudio_JParticle.h"
#include "Dolphin/float.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804732E0
    lbl_804732E0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_
    __vt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_:
        .4byte 0
        .4byte 0
        .4byte __dt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_Fv
        .4byte
   execute__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_FP14JPABaseEmitter
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
    .global __vt__Q217JStudio_JParticle17TAdaptor_particle
    __vt__Q217JStudio_JParticle17TAdaptor_particle:
        .4byte 0
        .4byte 0
        .4byte __dt__Q217JStudio_JParticle17TAdaptor_particleFv
        .4byte
   adaptor_do_prepare__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte
   adaptor_do_end__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObject
        .4byte
   adaptor_do_update__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .4byte
   adaptor_do_PARTICLE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_BEGIN__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_BEGIN_FADE_IN__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_END__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_END_FADE_OUT__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_PARENT__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_PARENT_NODE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_PARENT_ENABLE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
    .global __vt__18JPAEmitterCallBack
    __vt__18JPAEmitterCallBack:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
    .global __vt__Q27JStudio17TAdaptor_particle
    __vt__Q27JStudio17TAdaptor_particle:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global init$1233
    init$1233:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516360
    lbl_80516360:
        .4byte 0x00000000
    .global lbl_80516364
    lbl_80516364:
        .float 1.0
    .global lbl_80516368
    lbl_80516368:
        .4byte 0x437F0000
        .4byte 0x00000000
    .global lbl_80516370
    lbl_80516370:
        .4byte 0x3FF00000
        .4byte 0x00000000
    .global lbl_80516378
    lbl_80516378:
        .4byte 0x40F00000
        .4byte 0x00000000
    .global lbl_80516380
    lbl_80516380:
        .4byte 0x40768000
        .4byte 0x00000000
    .global lbl_80516388
    lbl_80516388:
        .4byte 0x406FE000
        .4byte 0x00000000
    .global lbl_80516390
    lbl_80516390:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800056C0
 * Size:	0000E8
 */
JStudio_JParticle::TAdaptor_particle::TAdaptor_particle(JPAEmitterManager* emitterManager, const JStage::TSystem* system)
    : m_emitterManager(emitterManager)
    , m_emitter(nullptr)
    , m_callback(this)
    , _188(-1)
    , _18C(0)
    , _190(0)
    , _194(0)
    , m_system(system)
    , _19C(nullptr)
    , _1A0(0xFFFFFFFF)
    , _1A4(0)
{
}

/*
 * --INFO--
 * Address:	800057A8
 * Size:	000060
 * __dt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_Fv
 */
JStudio_JParticle::TAdaptor_particle::TJPACallback_::~TJPACallback_() { }

namespace JStudio {

/*
 * --INFO--
 * Address:	80005808
 * Size:	000018
 * __ct__Q27JStudio14TVariableValueFv
 */
// TVariableValue::TVariableValue()
// {
// 	/*
// 	li       r4, 0
// 	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21
// 	stw      r4, 4(r3)
// 	stw      r4, 8(r3)
// 	stw      r0, 0x10(r3)
// 	blr
// 	*/
// }

} // namespace JStudio

/*
 * --INFO--
 * Address:	80005820
 * Size:	000098
 * __dt__Q217JStudio_JParticle17TAdaptor_particleFv
 */
JStudio_JParticle::TAdaptor_particle::~TAdaptor_particle()
{
	if (m_emitter != nullptr) {
		m_emitterManager->forceDeleteEmitter(m_emitter);
	}
}

/*
 * --INFO--
 * Address:	800058B8
 * Size:	000144
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_prepare(const JStudio::TObject* p1)
{
	static TSetVariableValue_immediate aoData[18]
	    = { TSetVariableValue_immediate(0, 0.0f),    TSetVariableValue_immediate(1, 0.0f),
		    TSetVariableValue_immediate(2, 0.0f),    TSetVariableValue_immediate(3, 0.0f),
		    TSetVariableValue_immediate(4, 0.0f),    TSetVariableValue_immediate(5, 0.0f),
		    TSetVariableValue_immediate(6, 1.0f),    TSetVariableValue_immediate(7, 1.0f),
		    TSetVariableValue_immediate(8, 1.0f),    TSetVariableValue_immediate(9, 255.0f),
		    TSetVariableValue_immediate(10, 255.0f), TSetVariableValue_immediate(11, 255.0f),
		    TSetVariableValue_immediate(12, 255.0f), TSetVariableValue_immediate(13, 255.0f),
		    TSetVariableValue_immediate(14, 255.0f), TSetVariableValue_immediate(15, 255.0f),
		    TSetVariableValue_immediate(16, 255.0f), TSetVariableValue_immediate(0xFFFFFFFF, __float_nan) };
	adaptor_setVariableValue_immediate(aoData);
	m_callback.m_object = p1;
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r22, 0x8(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lbz       r0, -0x7900(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x11C
	  lis       r3, 0x8051
	  lis       r4, 0x804F
	  lfs       f3, 0x48B0(r3)
	  subi      r23, r4, 0x3E0
	  lfs       f0, -0x7FF8(r2)
	  li        r24, 0x1
	  lfs       f2, -0x8000(r2)
	  li        r22, 0
	  lfs       f1, -0x7FFC(r2)
	  li        r25, 0x2
	  li        r26, 0x3
	  li        r27, 0x4
	  li        r28, 0x5
	  li        r29, 0x6
	  li        r12, 0x7
	  li        r11, 0x8
	  li        r10, 0x9
	  li        r9, 0xA
	  li        r8, 0xB
	  li        r7, 0xC
	  li        r6, 0xD
	  li        r5, 0xE
	  li        r4, 0xF
	  li        r3, 0x10
	  li        r0, -0x1
	  stw       r22, 0x0(r23)
	  stfs      f2, 0x4(r23)
	  stw       r24, 0x8(r23)
	  stfs      f2, 0xC(r23)
	  stw       r25, 0x10(r23)
	  stfs      f2, 0x14(r23)
	  stw       r26, 0x18(r23)
	  stfs      f2, 0x1C(r23)
	  stw       r27, 0x20(r23)
	  stfs      f2, 0x24(r23)
	  stw       r28, 0x28(r23)
	  stfs      f2, 0x2C(r23)
	  stw       r29, 0x30(r23)
	  stfs      f1, 0x34(r23)
	  stw       r12, 0x38(r23)
	  stfs      f1, 0x3C(r23)
	  stw       r11, 0x40(r23)
	  stfs      f1, 0x44(r23)
	  stw       r10, 0x48(r23)
	  stfs      f0, 0x4C(r23)
	  stw       r9, 0x50(r23)
	  stfs      f0, 0x54(r23)
	  stw       r8, 0x58(r23)
	  stfs      f0, 0x5C(r23)
	  stw       r7, 0x60(r23)
	  stfs      f0, 0x64(r23)
	  stw       r6, 0x68(r23)
	  stfs      f0, 0x6C(r23)
	  stw       r5, 0x70(r23)
	  stfs      f0, 0x74(r23)
	  stw       r4, 0x78(r23)
	  stfs      f0, 0x7C(r23)
	  stw       r3, 0x80(r23)
	  stfs      f0, 0x84(r23)
	  stw       r0, 0x88(r23)
	  stfs      f3, 0x8C(r23)
	  stb       r24, -0x7900(r13)

	.loc_0x11C:
	  lis       r4, 0x804F
	  mr        r3, r30
	  subi      r4, r4, 0x3E0
	  bl        0x7898
	  stw       r31, 0x184(r30)
	  lmw       r22, 0x8(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800059FC
 * Size:	000004
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_end(const JStudio::TObject*) { }

/*
 * --INFO--
 * Address:	80005A00
 * Size:	0000B0
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_update(const JStudio::TObject* p1, unsigned long p2)
{
	if (_190 == 0) {
		return;
	}
	if (_194 >= _190) {
		return;
	}
	_194 += p2;
	if (_194 < _190) {
		return;
	}
	switch (_18C) {
	case 1:
		_18C = 2;
		break;
	case 3:
		m_emitterManager->forceDeleteEmitter(m_emitter);
		m_emitter = nullptr;
		_18C      = 0;
	}
	_190 = 0;
	_194 = 0;
}

/*
 * --INFO--
 * Address:	80005AB0
 * Size:	000030
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_BEGIN(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_01:
		beginParticle_fadeIn_(0);
		break;
	}
}

/*
 * --INFO--
 * Address:	80005AE0
 * Size:	000048
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData operation, const void* p2,
                                                                    unsigned long p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_02:
		beginParticle_fadeIn_(*(f32*)p2);
		break;
	}
}

/*
 * --INFO--
 * Address:	80005B28
 * Size:	00002C
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_END(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	if (operation != JStudio::data::TEOD_Unknown_01) {
		return;
	}
	JPABaseEmitter* emitter = m_emitter;
	if (emitter == nullptr) {
		return;
	}
	emitter->_F4 |= 1;
	emitter->_24 = 1;
}

/*
 * --INFO--
 * Address:	80005B54
 * Size:	000048
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData operation, const void* p2,
                                                                   unsigned long p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_02:
		endParticle_fadeOut_(*(f32*)p2);
		break;
	}
}

/*
 * --INFO--
 * Address:	80005B9C
 * Size:	000014
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_PARTICLE(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_19:
		_188 = *(int*)p2;
		break;
	}
}

/*
 * --INFO--
 * Address:	80005BB0
 * Size:	000068
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_PARENT(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_19C = nullptr;
		JStage::TObject* object;
		if (m_system->JSGFindObject(&object, (const char*)p2, JStage::TEO_Unknown_0) == 0) {
			_19C = object;
		}
		break;
	}
}

/*
 * --INFO--
 * Address:	80005C18
 * Size:	000080
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_PARENT_NODE(JStudio::data::TEOperationData operation, const void* p2,
                                                                  unsigned long p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		if (_19C != nullptr) {
			_1A0 = _19C->JSGFindNodeID((const char*)p2);
			if (_1A0 == 0xFFFFFFFF) {
				return;
			}
		}
		break;
	case JStudio::data::TEOD_Unknown_19:
		_1A0 = *(u32*)p2;
		break;
	}
}

/*
 * --INFO--
 * Address:	80005C98
 * Size:	000020
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData operation, const void* p2,
                                                                    unsigned long p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_02:
		_1A4 = *(u32*)p2;
		break;
	}
}

/*
 * --INFO--
 * Address:	80005CB8
 * Size:	00035C
 */
void JStudio_JParticle::TAdaptor_particle::TJPACallback_::execute(JPABaseEmitter* emitter)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  lwz       r0, 0xF4(r4)
	  mr        r31, r4
	  mr        r30, r3
	  li        r4, 0
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x50
	  lwz       r3, 0xD0(r31)
	  lwz       r0, 0xDC(r31)
	  add.      r0, r3, r0
	  bne-      .loc_0x50
	  li        r4, 0x1

	.loc_0x50:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x90
	  lwz       r3, 0x4(r30)
	  mr        r4, r31
	  lwz       r3, 0x174(r3)
	  bl        0x8AFE4
	  lwz       r3, 0x4(r30)
	  li        r0, 0
	  stw       r0, 0x178(r3)
	  lwz       r3, 0x4(r30)
	  stw       r0, 0x18C(r3)
	  lwz       r3, 0x4(r30)
	  stw       r0, 0x190(r3)
	  lwz       r3, 0x4(r30)
	  stw       r0, 0x194(r3)
	  b         .loc_0x334

	.loc_0x90:
	  lwz       r5, 0x4(r30)
	  lis       r4, 0x4330
	  stw       r4, 0x88(r1)
	  lwz       r0, 0x190(r5)
	  lwz       r3, 0x194(r5)
	  stw       r0, 0x8C(r1)
	  lwz       r0, 0x18C(r5)
	  stw       r3, 0x94(r1)
	  lfd       f2, -0x7FD0(r2)
	  cmpwi     r0, 0x2
	  stw       r4, 0x90(r1)
	  lfd       f1, 0x88(r1)
	  lfd       f0, 0x90(r1)
	  fsub      f1, f1, f2
	  lfd       f31, -0x7FF0(r2)
	  fsub      f0, f0, f2
	  beq-      .loc_0x100
	  bge-      .loc_0xE4
	  cmpwi     r0, 0x1
	  bge-      .loc_0xF0
	  b         .loc_0x100

	.loc_0xE4:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x100
	  b         .loc_0xF8

	.loc_0xF0:
	  fdiv      f31, f0, f1
	  b         .loc_0x100

	.loc_0xF8:
	  fsub      f0, f1, f0
	  fdiv      f31, f0, f1

	.loc_0x100:
	  lwz       r4, 0x8(r30)
	  lis       r3, 0x8047
	  addi      r5, r3, 0x33F8
	  stw       r31, 0xC(r1)
	  lwz       r28, 0x14(r4)
	  addi      r4, r1, 0x64
	  lwz       r3, 0x4(r30)
	  bl        0x7558
	  lis       r3, 0x8047
	  addi      r4, r1, 0x70
	  addi      r5, r3, 0x3404
	  lwz       r3, 0x4(r30)
	  bl        0x7544
	  lis       r4, 0x8047
	  lwz       r3, 0x4(r30)
	  addi      r5, r4, 0x3410
	  addi      r4, r1, 0x7C
	  bl        0x7530
	  lwz       r4, 0x4(r30)
	  lbz       r0, 0x1A4(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x234
	  lbz       r0, 0x74(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x16C
	  addi      r29, r1, 0x64
	  b         .loc_0x1A0

	.loc_0x16C:
	  addi      r3, r28, 0x98
	  addi      r4, r1, 0x64
	  addi      r5, r1, 0x40
	  bl        0xE4DA8
	  lfs       f0, 0x70(r1)
	  addi      r29, r1, 0x40
	  lfs       f2, 0x74(r1)
	  stfs      f0, 0x4C(r1)
	  lfs       f0, 0x78(r1)
	  lfs       f1, 0x90(r28)
	  fadds     f1, f2, f1
	  stfs      f0, 0x54(r1)
	  stfs      f1, 0x50(r1)

	.loc_0x1A0:
	  lfs       f1, 0x4(r29)
	  addi      r6, r31, 0x68
	  lfs       f2, 0x8(r29)
	  lfs       f0, 0x0(r29)
	  lfd       f3, -0x7FE0(r2)
	  stfs      f0, 0xA4(r31)
	  lfd       f4, -0x7FE8(r2)
	  stfs      f1, 0xA8(r31)
	  stfs      f2, 0xAC(r31)
	  lfs       f2, 0xC(r29)
	  lfs       f1, 0x10(r29)
	  lfs       f0, 0x14(r29)
	  fdiv      f2, f2, f3
	  fdiv      f1, f1, f3
	  fdiv      f0, f0, f3
	  fmul      f2, f4, f2
	  fmul      f1, f4, f1
	  fmul      f0, f4, f0
	  fctiwz    f2, f2
	  fctiwz    f1, f1
	  fctiwz    f0, f0
	  stfd      f2, 0x90(r1)
	  stfd      f1, 0x88(r1)
	  lwz       r3, 0x94(r1)
	  stfd      f0, 0x98(r1)
	  lwz       r4, 0x8C(r1)
	  lwz       r5, 0x9C(r1)
	  bl        0x8DD94
	  lfs       f0, 0x18(r29)
	  lfs       f1, 0x1C(r29)
	  lfs       f2, 0x20(r29)
	  stfs      f0, 0x98(r31)
	  stfs      f1, 0x9C(r31)
	  stfs      f2, 0xA0(r31)
	  stfs      f0, 0xB0(r31)
	  stfs      f1, 0xB4(r31)
	  b         .loc_0x28C

	.loc_0x234:
	  lwz       r5, 0x19C(r4)
	  addi      r3, r1, 0x10
	  lwz       r6, 0x1A0(r4)
	  addi      r4, r1, 0x64
	  bl        0xBED0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x268
	  mr.       r3, r31
	  beq-      .loc_0x334
	  lwz       r0, 0xF4(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0xF4(r3)
	  b         .loc_0x334

	.loc_0x268:
	  addi      r3, r1, 0x10
	  addi      r4, r31, 0x68
	  addi      r5, r31, 0x98
	  addi      r6, r31, 0xA4
	  bl        0x8DE14
	  lfs       f1, 0x9C(r31)
	  lfs       f0, 0x98(r31)
	  stfs      f0, 0xB0(r31)
	  stfs      f1, 0xB4(r31)

	.loc_0x28C:
	  lis       r4, 0x8047
	  lwz       r3, 0x4(r30)
	  addi      r5, r4, 0x3428
	  addi      r4, r1, 0x8
	  bl        0x74F0
	  lbz       r5, 0xA(r1)
	  lis       r0, 0x4330
	  lbz       r4, 0x9(r1)
	  li        r6, 0xFF
	  lbz       r3, 0x8(r1)
	  stw       r0, 0x98(r1)
	  lfd       f2, -0x7FD0(r2)
	  stb       r3, 0xB8(r31)
	  lfd       f0, -0x7FD8(r2)
	  stb       r4, 0xB9(r31)
	  stb       r5, 0xBA(r31)
	  lbz       r0, 0xB(r1)
	  stw       r0, 0x9C(r1)
	  lfd       f1, 0x98(r1)
	  fsub      f1, f1, f2
	  fmul      f31, f31, f1
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x2F4
	  fctiwz    f0, f31
	  stfd      f0, 0x90(r1)
	  lwz       r6, 0x94(r1)

	.loc_0x2F4:
	  stb       r6, 0xBB(r31)
	  lis       r3, 0x8047
	  addi      r5, r3, 0x3444
	  addi      r4, r1, 0x8
	  lwz       r3, 0x4(r30)
	  bl        0x7484
	  lbz       r5, 0xA(r1)
	  li        r3, 0
	  lbz       r4, 0x9(r1)
	  lbz       r0, 0x8(r1)
	  stw       r3, 0xC(r1)
	  stb       r0, 0xBC(r31)
	  stb       r4, 0xBD(r31)
	  stb       r5, 0xBE(r31)
	  b         .loc_0x334
	  stw       r0, 0xF4(r3)

	.loc_0x334:
	  psq_l     f31,0xB8(r1),0,0
	  lwz       r0, 0xC4(r1)
	  lfd       f31, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80006014
 * Size:	0000E4
 */
void JStudio_JParticle::TAdaptor_particle::beginParticle_fadeIn_(unsigned long p1)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r4, 0x178(r3)
	cmplwi   r4, 0
	beq      lbl_80006044
	lwz      r3, 0x174(r30)
	bl       forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter

lbl_80006044:
	lis      r3, lbl_804732E0@ha
	addi     r4, r1, 0x14
	addi     r6, r3, lbl_804732E0@l
	addi     r8, r30, 0x17c
	lwz      r5, 0(r6)
	li       r9, 0
	lwz      r3, 4(r6)
	lwz      r0, 8(r6)
	stw      r5, 8(r1)
	stw      r3, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r0, 0x188(r30)
	lwz      r3, 0x174(r30)
	srwi     r6, r0, 0x18
	clrlwi   r5, r0, 0x10
	rlwinm   r7, r0, 0x10, 0x18, 0x1f
	bl
"createSimpleEmitterID__17JPAEmitterManagerFRCQ29JGeometry8TVec3<f>UsUcUcP18JPAEmitterCallBackP19JPAParticleCallBack"
	stw      r3, 0x178(r30)
	lwz      r4, 0x178(r30)
	cmplwi   r4, 0
	beq      lbl_800060E0
	lwz      r3, 0xf4(r4)
	cmplwi   r31, 0
	li       r0, 1
	ori      r3, r3, 0x40
	stw      r3, 0xf4(r4)
	stw      r0, 0x18c(r30)
	bne      lbl_800060D4
	li       r0, 2
	stw      r0, 0x18c(r30)

lbl_800060D4:
	stw      r31, 0x190(r30)
	li       r0, 0
	stw      r0, 0x194(r30)

lbl_800060E0:
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
 * Address:	800060F8
 * Size:	000118
 */
void JStudio_JParticle::TAdaptor_particle::endParticle_fadeOut_(unsigned long p1)
{
	if (m_emitter == nullptr) {
		return;
	}
	if (p1 == 0) {
		m_emitterManager->forceDeleteEmitter(m_emitter);
		m_emitter = nullptr;
		_18C      = 0;
		_190      = 0;
		_194      = 0;
		return;
	}
	u32 v1 = _18C;
	_18C   = 3;
	if (_194 == 0) {
		_190 = p1;
		return;
	}
	u32 v2 = 0;
	switch (v1) {
	case 1:
		v2 = _194;
		break;
	case 3:
		v2 = _190 - _194;
		break;
	}
	_190 = (f64)p1 * (f64)_190 / (f64)v2;
	_194 = _190 - p1;
}

/*
 * --INFO--
 * Address:	80006210
 * Size:	000004
 */
void JPAEmitterCallBack::executeAfter(JPABaseEmitter*) { }

/*
 * --INFO--
 * Address:	80006214
 * Size:	000004
 */
void JPAEmitterCallBack::draw(JPABaseEmitter*) { }

/*
 * --INFO--
 * Address:	80006218
 * Size:	000004
 */
void JPAEmitterCallBack::drawAfter(JPABaseEmitter*) { }

/*
 * --INFO--
 * Address:	8000621C
 * Size:	000004
 */
void JPAEmitterCallBack::execute(JPABaseEmitter*) { }
