#include "JSystem/JStudio/TObject.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JStudio_JParticle.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q217JStudio_JParticle13TCreateObject
    __vt__Q217JStudio_JParticle13TCreateObject:
        .4byte 0
        .4byte 0
        .4byte __dt__Q217JStudio_JParticle13TCreateObjectFv
        .4byte
   create__Q217JStudio_JParticle13TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
*/

/*
 * --INFO--
 * Address:	80006220
 * Size:	0000CC
 */

namespace JStudio_JParticle {
namespace {
// smh
static inline JStudio::TObject_particle* create(const JStudio::stb::data::TParse_TBlock_object& data, TAdaptor_particle* adaptor)
{
	JStudio::TObject_particle* object = new JStudio::TObject_particle(data, adaptor);
	if (object == nullptr) {
		// TODO: This should probably delete the adaptor in NONMATCHING builds, if the object couldn't get created.
		return nullptr;
	} else {
		if (object->mAdaptor != nullptr) {
			object->mAdaptor->adaptor_do_prepare(object);
		}
	}
	return object;
}

JStudio::TObject_particle* createObject_PARTICLE_JPA_(const JStudio::stb::data::TParse_TBlock_object& data, JPAEmitterManager* manager,
                                                      const JStage::TSystem* system)
{
	TAdaptor_particle* adaptor = new TAdaptor_particle(manager, system);
	if (adaptor == nullptr) {
		return nullptr;
	}
	JStudio::TObject_particle* object = create(data, adaptor);
	return object;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  li        r3, 0x1A8
	  bl        0x1DC58
	  mr.       r31, r3
	  beq-      .loc_0x48
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0xBA0
	  mr        r31, r3

	.loc_0x48:
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0xAC

	.loc_0x58:
	  li        r3, 0x38
	  bl        0x1DC28
	  mr.       r30, r3
	  beq-      .loc_0x78
	  mr        r4, r28
	  mr        r5, r31
	  bl        0x8AE0
	  mr        r30, r3

	.loc_0x78:
	  cmplwi    r30, 0
	  bne-      .loc_0x88
	  li        r30, 0
	  b         .loc_0xA8

	.loc_0x88:
	  lwz       r3, 0x34(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA8:
	  mr        r3, r30

	.loc_0xAC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
} // namespace

/*
 * --INFO--
 * Address:	800062EC
 * Size:	000060
 */
TCreateObject::~TCreateObject() { }

/*
 * --INFO--
 * Address:	8000634C
 * Size:	000078
 */
bool TCreateObject::create(JStudio::TObject** newObject, JStudio::stb::data::TParse_TBlock_object const& data)
{
	JStudio::TObject_particle* (*func)(const JStudio::stb::data::TParse_TBlock_object&, JPAEmitterManager*, const JStage::TSystem*);
	switch (data.filedata->_04) {
	case 'JPTC': {
		func = &createObject_PARTICLE_JPA_;
		break;
	}
	default:
		return false;
	}
	*newObject = func(data, mEmitterManager, mSystem);
	return true;
}
} // namespace JStudio_JParticle
