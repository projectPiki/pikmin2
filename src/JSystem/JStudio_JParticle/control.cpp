#include "JSystem/JStudio/TObject.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JStudio_JParticle.h"
#include "types.h"

/**
 * @note Address: 0x80006220
 * @note Size: 0xCC
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

/**
 * @note Address: 0x800062EC
 * @note Size: 0x60
 */
TCreateObject::~TCreateObject() { }

/**
 * @note Address: 0x8000634C
 * @note Size: 0x78
 */
bool TCreateObject::create(JStudio::TObject** newObject, JStudio::stb::data::TParse_TBlock_object const& data)
{
	JStudio::TObject_particle* (*func)(const JStudio::stb::data::TParse_TBlock_object&, JPAEmitterManager*, const JStage::TSystem*);
	switch (data.getType()) {
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
