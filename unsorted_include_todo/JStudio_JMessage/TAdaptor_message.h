#ifndef _JSTUDIO_JMESSAGE_TADAPTOR_MESSAGE_H
#define _JSTUDIO_JMESSAGE_TADAPTOR_MESSAGE_H

/*
    __vt__Q216JStudio_JMessage16TAdaptor_message:
    .4byte 0
    .4byte 0
    .4byte __dt__Q216JStudio_JMessage16TAdaptor_messageFv
    .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
    .4byte adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl
    .4byte adaptor_do_MESSAGE__Q216JStudio_JMessage16TAdaptor_messageFQ37JStudio4data15TEOperationDataPCvUl
*/

namespace JStudio {
struct TAdaptor {
	virtual ~TAdaptor();                                                                                  // _08
	virtual void adaptor_do_prepare(const TObject*);                                                      // _0C
	virtual void adaptor_do_begin(const TObject*);                                                        // _10
	virtual void adaptor_do_end(const TObject*);                                                          // _14
	virtual void adaptor_do_update(const TObject*, unsigned long);                                        // _18
	virtual void adaptor_do_data(const TObject*, const void*, unsigned long, const void*, unsigned long); // _1C

	// _00 VTBL
};
} // namespace JStudio

namespace JStudio_JMessage {
struct TAdaptor_message : public TAdaptor {
	virtual ~TAdaptor_message();                                                                 // _08
	virtual void adaptor_do_MESSAGE(JStudio::data::TEOperationData, const void*, unsigned long); // _20

	// _00 VTBL
};
} // namespace JStudio_JMessage

#endif
