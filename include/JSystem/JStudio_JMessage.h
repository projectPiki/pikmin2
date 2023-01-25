#ifndef _JSYSTEM_JSTUDIO_JMESSAGE_H
#define _JSYSTEM_JSTUDIO_JMESSAGE_H

#include "JStudio/TAdaptor.h"
#include "JStudio/TCreateObject.h"
#include "JStudio/stb-data.h"
#include "JSystem/JMessage/TControl.h"

namespace JStudio_JMessage {
struct TCreateObject_base : JStudio::TCreateObject {
	virtual ~TCreateObject_base() = 0;                                                                       // _08
	virtual bool create(JStudio::TObject** newObject, const JStudio::stb::data::TParse_TBlock_object& data); // _0C
	virtual void find(const JStudio::stb::data::TParse_TBlock_object&) = 0;                                  // _10
};
} // namespace JStudio_JMessage

namespace JStudio_JMessage {
struct TCreateObject : public TCreateObject_base {
	virtual ~TCreateObject();                                           // _08
	virtual void find(const JStudio::stb::data::TParse_TBlock_object&); // _10
};

struct TAdaptor_message : public JStudio::TAdaptor_message {
	virtual ~TAdaptor_message();                                                                 // _08
	virtual void adaptor_do_MESSAGE(JStudio::data::TEOperationData, const void*, unsigned long); // _20

	TAdaptor_message(JMessage::TControl*);
	JMessage::TControl* mControl; // _10
};
} // namespace JStudio_JMessage

#endif
