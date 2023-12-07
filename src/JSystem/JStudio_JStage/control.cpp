#include "JSystem/JStage/TCamera.h"
#include "JSystem/JStage/TObject.h"
#include "JSystem/JStage/TSystem.h"
#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JStudio/stb-data.h"
#include "JSystem/JStudio_JStage.h"

namespace JStudio_JStage {
namespace {
typedef JStudio::TObject* (*CreateObjectFunction)(const JStudio::stb::data::TParse_TBlock_object&, JStage::TObject*,
                                                  const JStage::TSystem*);

template <typename Adaptor, typename Object>
JStudio::TObject* createObject_JSG_(const JStudio::stb::data::TParse_TBlock_object& data, JStage::TObject* stageObject,
                                    const JStage::TSystem* system)
{
	Object* obj      = (Object*)stageObject;
	Adaptor* adaptor = new Adaptor(system, obj);
	if (!adaptor) {
		return nullptr;
	}

	typename Object::StudioObject* studioObject = new typename Object::StudioObject(data, adaptor);
	if (!studioObject) {
		return nullptr; // should be studioObject = nullptr; but that breaks everything
	} else if (studioObject->mAdaptor) {
		studioObject->mAdaptor->adaptor_do_prepare(studioObject);
	}
	return studioObject;
}

} // namespace

/*
 * --INFO--
 * Address:	80014734
 * Size:	000060
 */
TCreateObject::~TCreateObject() { }

/*
 * --INFO--
 * Address:	80014794
 * Size:	000194
 */
bool TCreateObject::create(JStudio::TObject** newObject, JStudio::stb::data::TParse_TBlock_object const& data)
{
	*newObject = nullptr;
	JStage::TEObject type;
	CreateObjectFunction function;
	switch (data.filedata->mDataType) {
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
	switch (mSystem->JSGFindObject(&stageObject, &data.filedata->mObjName, type)) {
	case 0:
		*newObject = function(data, stageObject, mSystem);
		return true;
	case 2:
		return true;
	}
	return false;
}

} // namespace JStudio_JStage
