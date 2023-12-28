#include "JSystem/JStage/TCamera.h"
#include "JSystem/JStage/TObject.h"
#include "JSystem/JStage/TSystem.h"
#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JStudio/stb-data-parse.h"
#include "JSystem/JStudio_JStage.h"

namespace JStudio_JStage {
namespace {
// this feels dumb as hell. making it a template feels like it'd spawn and not get stripped though :(
static inline JStudio::TObject* doCreateObject(const JStudio::stb::data::TParse_TBlock_object& data, TAdaptor_actor* adaptor)
{
	JStudio::TObject* object = new JStudio::TObject_actor(data, adaptor);
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

static inline JStudio::TObject* doCreateObject(const JStudio::stb::data::TParse_TBlock_object& data, TAdaptor_camera* adaptor)
{
	JStudio::TObject* object = new JStudio::TObject_camera(data, adaptor);
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

static inline JStudio::TObject* doCreateObject(const JStudio::stb::data::TParse_TBlock_object& data, TAdaptor_ambientLight* adaptor)
{
	JStudio::TObject* object = new JStudio::TObject_ambientLight(data, adaptor);
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

static inline JStudio::TObject* doCreateObject(const JStudio::stb::data::TParse_TBlock_object& data, TAdaptor_light* adaptor)
{
	JStudio::TObject* object = new JStudio::TObject_light(data, adaptor);
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

static inline JStudio::TObject* doCreateObject(const JStudio::stb::data::TParse_TBlock_object& data, TAdaptor_fog* adaptor)
{
	JStudio::TObject* object = new JStudio::TObject_fog(data, adaptor);
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

typedef JStudio::TObject* (*CreateObjectFunction)(const JStudio::stb::data::TParse_TBlock_object&, JStage::TObject*,
                                                  const JStage::TSystem*);

template <typename Adaptor, typename Object>
JStudio::TObject* createObject_JSG_(const JStudio::stb::data::TParse_TBlock_object& data, JStage::TObject* stageObject,
                                    const JStage::TSystem* system);

} // namespace

/**
 * @note Address: 0x80014734
 * @note Size: 0x60
 */
TCreateObject::~TCreateObject() { }

// not thrilled with this solution for weak function ordering but It's A Solution
static void fakeFunc(JStudio::TObject** newObject, JStudio::stb::data::TParse_TBlock_object const& data)
{
	*newObject = nullptr;
	JStage::TEObject type;
	CreateObjectFunction function;
	switch (data.getType()) {
	case 'JFOG':
		type     = JStage::TEO_Fog;
		function = &createObject_JSG_<TAdaptor_fog, JStage::TFog>;
		break;
	case 'JLIT':
		type     = JStage::TEO_Light;
		function = &createObject_JSG_<TAdaptor_light, JStage::TLight>;
		break;
	case 'JABL':
		type     = JStage::TEO_AmbientLight;
		function = &createObject_JSG_<TAdaptor_ambientLight, JStage::TAmbientLight>;
		break;
	case 'JCMR':
		type     = JStage::TEO_Camera;
		function = &createObject_JSG_<TAdaptor_camera, JStage::TCamera>;
		break;
	case 'JACT':
		type     = JStage::TEO_Actor;
		function = &createObject_JSG_<TAdaptor_actor, JStage::TActor>;
		break;
	default:
		return;
	}
}

/**
 * @note Address: 0x80014794
 * @note Size: 0x194
 */
bool TCreateObject::create(JStudio::TObject** newObject, JStudio::stb::data::TParse_TBlock_object const& data)
{
	*newObject = nullptr;
	JStage::TEObject type;
	CreateObjectFunction function;
	switch (data.getType()) {
	case 'JACT':
		type     = JStage::TEO_Actor;
		function = &createObject_JSG_<TAdaptor_actor, JStage::TActor>;
		break;
	case 'JCMR':
		type     = JStage::TEO_Camera;
		function = &createObject_JSG_<TAdaptor_camera, JStage::TCamera>;
		break;
	case 'JABL':
		type     = JStage::TEO_AmbientLight;
		function = &createObject_JSG_<TAdaptor_ambientLight, JStage::TAmbientLight>;
		break;
	case 'JLIT':
		type     = JStage::TEO_Light;
		function = &createObject_JSG_<TAdaptor_light, JStage::TLight>;
		break;
	case 'JFOG':
		type     = JStage::TEO_Fog;
		function = &createObject_JSG_<TAdaptor_fog, JStage::TFog>;
		break;
	default:
		return false;
	}

	JStage::TObject* stageObject;
	switch (mSystem->JSGFindObject(&stageObject, (const char*)data.getID(), type)) {
	case 0:
		*newObject = function(data, stageObject, mSystem);
		return true;
	case 2:
		return true;
	}
	return false;
}

namespace {
template <typename Adaptor, typename Object>
JStudio::TObject* createObject_JSG_(const JStudio::stb::data::TParse_TBlock_object& data, JStage::TObject* stageObject,
                                    const JStage::TSystem* system)
{
	Object* obj      = (Object*)stageObject;
	Adaptor* adaptor = new Adaptor(system, obj);
	if (!adaptor) {
		return nullptr;
	}

	return doCreateObject(data, adaptor);
}
} // namespace

} // namespace JStudio_JStage
