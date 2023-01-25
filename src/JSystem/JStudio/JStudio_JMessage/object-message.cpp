#include "JStudio/TAdaptor.h"
#include "JSystem/JStudio_JMessage.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q216JStudio_JMessage16TAdaptor_message
    __vt__Q216JStudio_JMessage16TAdaptor_message:
        .4byte 0
        .4byte 0
        .4byte __dt__Q216JStudio_JMessage16TAdaptor_messageFv
        .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .4byte
   adaptor_do_MESSAGE__Q216JStudio_JMessage16TAdaptor_messageFQ37JStudio4data15TEOperationDataPCvUl
        .4byte 0
*/

/*
 * --INFO--
 * Address:	80014D24
 * Size:	000038
 */
JStudio_JMessage::TAdaptor_message::TAdaptor_message(JMessage::TControl* control)
    : JStudio::TAdaptor_message()
    , m_control(control)
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
 */
void JStudio_JMessage::TAdaptor_message::adaptor_do_MESSAGE(JStudio::data::TEOperationData operation, const void* p2, unsigned long p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_19:
		m_control->setMessageCode((*(u32*)p2) >> 0x10, (*(u32*)p2));
		break;
	}
}
