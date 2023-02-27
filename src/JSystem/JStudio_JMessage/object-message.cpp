#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JStudio_JMessage.h"
#include "types.h"

/*
 * --INFO--
 * Address:	80014D24
 * Size:	000038
 */
JStudio_JMessage::TAdaptor_message::TAdaptor_message(JMessage::TControl* control)
    : JStudio::TAdaptor_message()
    , mControl(control)
{
}

/*
 * --INFO--
 * Address:	80014D5C
 * Size:	000060
 * __dt__
 */
JStudio_JMessage::TAdaptor_message::~TAdaptor_message() { }

/*
 * --INFO--
 * Address:	80014DBC
 * Size:	00003C
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
