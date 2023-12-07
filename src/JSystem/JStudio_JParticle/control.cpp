#include "JSystem/JStudio/TObject.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JStudio_JParticle.h"
#include "types.h"

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
	switch (data.filedata->mDataType) {
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
