#ifndef _JSTUDIO_JSTAGE_TADAPTOR_LIGHT_H
#define _JSTUDIO_JSTAGE_TADAPTOR_LIGHT_H

/*
    __vt__Q214JStudio_JStage14TAdaptor_light:
    .4byte 0
    .4byte 0
    .4byte __dt__Q214JStudio_JStage14TAdaptor_lightFv
    .4byte adaptor_do_prepare__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject
    .4byte adaptor_do_begin__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject
    .4byte adaptor_do_end__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject
    .4byte adaptor_do_update__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObjectUl
    .4byte adaptor_do_data__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObjectPCvUlPCvUl
    .4byte adaptor_do_ENABLE__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_FACULTY__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl
*/

namespace JStudio_JStage {
struct TAdaptor_light {
	virtual ~TAdaptor_light();                                                                                     // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                                      // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                                        // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                                          // _14
	virtual void adaptor_do_update(const JStudio::TObject*, unsigned long);                                        // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, unsigned long, const void*, unsigned long); // _1C
	virtual void adaptor_do_ENABLE(JStudio::data::TEOperationData, const void*, unsigned long);                    // _20
	virtual void adaptor_do_FACULTY(JStudio::data::TEOperationData, const void*, unsigned long);                   // _24

	// _00 VTBL
};
} // namespace JStudio_JStage

#endif
