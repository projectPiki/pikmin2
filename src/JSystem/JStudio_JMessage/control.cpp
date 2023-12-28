#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JMessage/TControl.h"
#include "JSystem/JStudio_JMessage.h"
#include "JSystem/JStudio/TObject.h"
#include "types.h"

namespace JStudio_JMessage {
namespace {

inline JStudio::TObject_message* message_creator(const JStudio::stb::data::TParse_TBlock_object& data,
                                                 JStudio_JMessage::TAdaptor_message* adaptor)
{
	JStudio::TObject_message* object = new JStudio::TObject_message(data, adaptor);

	if (!object) {
		return nullptr;
	}
	if (object->mAdaptor) {
		object->mAdaptor->adaptor_do_prepare(object);
	}
	return object;
}

/**
 * @note Address: 0x80014DF8
 * @note Size: 0xBC
 */
JStudio::TObject_message* createObject_MESSAGE_JMS_(const JStudio::stb::data::TParse_TBlock_object& data, JMessage::TControl* system)
{
	JStudio_JMessage::TAdaptor_message* adaptor = new JStudio_JMessage::TAdaptor_message(system);
	if (!adaptor) {
		return nullptr;
	}

	return message_creator(data, adaptor);
}
} // namespace

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
JStudio_JMessage::TCreateObject_base::~TCreateObject_base()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80014EB4
 * @note Size: 0xAC
 */
bool JStudio_JMessage::TCreateObject_base::create(JStudio::TObject** newObject, JStudio::stb::data::TParse_TBlock_object const& data)
{
	JStudio::TObject_message* (*func)(const JStudio::stb::data::TParse_TBlock_object&, JMessage::TControl*);
	switch (data.getType()) {
	case 'JMSG':
		func = &createObject_MESSAGE_JMS_;
		break;
	default:
		return false;
	}

	JMessage::TControl* system = find(data);

	if (!system) {
		return false;
	}

	*newObject = func(data, system);
	return true;
}

/**
 * @note Address: 0x80014F60
 * @note Size: 0x70
 */
JStudio_JMessage::TCreateObject::~TCreateObject() { }

/**
 * @note Address: 0x80014FD0
 * @note Size: 0x8
 */
JMessage::TControl* JStudio_JMessage::TCreateObject::find(JStudio::stb::data::TParse_TBlock_object const&) { return mControl; }
} // namespace JStudio_JMessage
