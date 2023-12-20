#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JStudio_JMessage.h"
#include "types.h"

/**
 * @note Address: 0x80014D24
 * @note Size: 0x38
 */
JStudio_JMessage::TAdaptor_message::TAdaptor_message(JMessage::TControl* control)
    : JStudio::TAdaptor_message()
    , mControl(control)
{
}

/**
 * @note Address: 0x80014D5C
 * @note Size: 0x60
 * __dt__
 */
JStudio_JMessage::TAdaptor_message::~TAdaptor_message() { }

/**
 * @note Address: 0x80014DBC
 * @note Size: 0x3C
 * TODO: Cleanup these strange casts, if possible.
 */
void JStudio_JMessage::TAdaptor_message::adaptor_do_MESSAGE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_19:
		mControl->setMessageCode((*(u32*)p2) >> 0x10, (*(u32*)p2));
		break;
	}
}
