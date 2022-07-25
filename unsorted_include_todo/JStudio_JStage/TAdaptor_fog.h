#ifndef _JSTUDIO_JSTAGE_TADAPTOR_FOG_H
#define _JSTUDIO_JSTAGE_TADAPTOR_FOG_H

/*
    __vt__Q214JStudio_JStage12TAdaptor_fog:
    .4byte 0
    .4byte 0
    .4byte __dt__Q214JStudio_JStage12TAdaptor_fogFv
    .4byte adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject
    .4byte adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject
    .4byte adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject
    .4byte adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObjectUl
    .4byte adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObjectPCvUlPCvUl
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace JStudio_JStage {
struct TAdaptor_fog {
	virtual ~TAdaptor_fog();                                                                                       // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                                      // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                                        // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                                          // _14
	virtual void adaptor_do_update(const JStudio::TObject*, unsigned long);                                        // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, unsigned long, const void*, unsigned long); // _1C
	virtual void _20() = 0;                                                                                        // _20
	virtual void _24() = 0;                                                                                        // _24
	virtual void _28() = 0;                                                                                        // _28
	virtual void _2C() = 0;                                                                                        // _2C
	virtual void _30() = 0;                                                                                        // _30
	virtual void _34() = 0;                                                                                        // _34
	virtual void _38() = 0;                                                                                        // _38
	virtual void _3C() = 0;                                                                                        // _3C

	TAdaptor_fog(const JStage::TSystem*, JStage::TFog*);
};
} // namespace JStudio_JStage

#endif
