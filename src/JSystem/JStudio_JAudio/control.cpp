#include "JSystem/JStudio_JAudio.h"

namespace JStudio_JAudio {

namespace {
inline JStudio::TObject_sound* sound_creator(const JStudio::stb::data::TParse_TBlock_object& data, JStudio_JAudio::TAdaptor_sound* adaptor)
{
	JStudio::TObject_sound* object = new JStudio::TObject_sound(data, adaptor);

	if (!object) {
		return nullptr;
	}
	if (object->mAdaptor) {
		object->mAdaptor->adaptor_do_prepare(object);
	}
	return object;
}

/*
 * --INFO--
 * Address:	80015C44
 * Size:	0000CC
 */
JStudio::TObject* createObject_SOUND_JAI_(const JStudio::stb::data::TParse_TBlock_object& parseBlock, JAIBasic* sound,
                                          const JStage::TSystem* system)
{
	TAdaptor_sound* adaptor = new TAdaptor_sound(sound, system);
	if (!adaptor) {
		return nullptr;
	}

	return sound_creator(parseBlock, adaptor);
}
} // namespace

/*
 * --INFO--
 * Address:	80015D10
 * Size:	000060
 */
TCreateObject::~TCreateObject() { }

/*
 * --INFO--
 * Address:	80015D70
 * Size:	000078
 */
bool TCreateObject::create(JStudio::TObject** object, const JStudio::stb::data::TParse_TBlock_object& parseBlock)
{
	JStudioAudioCreateFunc createFunc;
	switch (parseBlock.filedata->_04) {
	case 'JSND':
		createFunc = createObject_SOUND_JAI_;
		break;
	default:
		return false;
	}

	*object = createFunc(parseBlock, mSound, mSystem);
	return true;
}
} // namespace JStudio_JAudio
