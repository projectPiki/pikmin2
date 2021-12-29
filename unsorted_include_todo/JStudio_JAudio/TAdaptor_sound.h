#ifndef _JSTUDIO_JAUDIO_TADAPTOR_SOUND_H
#define _JSTUDIO_JAUDIO_TADAPTOR_SOUND_H

/*
    __vt__Q214JStudio_JAudio14TAdaptor_sound:
    .4byte 0
    .4byte 0
    .4byte __dt__Q214JStudio_JAudio14TAdaptor_soundFv
    .4byte
   adaptor_do_prepare__Q214JStudio_JAudio14TAdaptor_soundFPCQ27JStudio7TObject
    .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte
   adaptor_do_end__Q214JStudio_JAudio14TAdaptor_soundFPCQ27JStudio7TObject
    .4byte
   adaptor_do_update__Q214JStudio_JAudio14TAdaptor_soundFPCQ27JStudio7TObjectUl
    .4byte adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl
    .4byte
   adaptor_do_SOUND__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
    .4byte
   adaptor_do_BEGIN__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
    .4byte
   adaptor_do_BEGIN_FADE_IN__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
    .4byte
   adaptor_do_END__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
    .4byte
   adaptor_do_END_FADE_OUT__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
    .4byte
   adaptor_do_PARENT__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
    .4byte
   adaptor_do_PARENT_NODE__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
    .4byte
   adaptor_do_PARENT_ENABLE__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
    .4byte
   adaptor_do_LOCATED__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace JStudio {
struct TAdaptor {
	virtual ~TAdaptor();                                      // _00
	virtual void adaptor_do_prepare(const JStudio::TObject*); // _04
	virtual void adaptor_do_begin(const TObject*);            // _08
	virtual void adaptor_do_end(const JStudio::TObject*);     // _0C
	virtual void adaptor_do_update(const JStudio::TObject*,
	                               unsigned long); // _10
	virtual void adaptor_do_data(const TObject*, const void*, unsigned long,
	                             const void*, unsigned long); // _14

	// _00 VTBL
};
} // namespace JStudio

namespace JStudio_JAudio {
struct TAdaptor_sound : public TAdaptor {
	virtual ~TAdaptor_sound();                                // _00
	virtual void adaptor_do_prepare(const JStudio::TObject*); // _04
	virtual void adaptor_do_begin(const TObject*);            // _08
	virtual void adaptor_do_end(const JStudio::TObject*);     // _0C
	virtual void adaptor_do_update(const JStudio::TObject*,
	                               unsigned long); // _10
	virtual void adaptor_do_data(const TObject*, const void*, unsigned long,
	                             const void*, unsigned long); // _14
	virtual void adaptor_do_SOUND(JStudio::data::TEOperationData, const void*,
	                              unsigned long); // _18
	virtual void adaptor_do_BEGIN(JStudio::data::TEOperationData, const void*,
	                              unsigned long); // _1C
	virtual void adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData,
	                                      const void*, unsigned long); // _20
	virtual void adaptor_do_END(JStudio::data::TEOperationData, const void*,
	                            unsigned long); // _24
	virtual void adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData,
	                                     const void*, unsigned long); // _28
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*,
	                               unsigned long); // _2C
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData,
	                                    const void*, unsigned long); // _30
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData,
	                                      const void*, unsigned long); // _34
	virtual void adaptor_do_LOCATED(JStudio::data::TEOperationData, const void*,
	                                unsigned long); // _38
	virtual void _3C() = 0;                         // _3C
	virtual void _40() = 0;                         // _40
	virtual void _44() = 0;                         // _44
	virtual void _48() = 0;                         // _48
	virtual void _4C() = 0;                         // _4C
	virtual void _50() = 0;                         // _50
	virtual void _54() = 0;                         // _54
	virtual void _58() = 0;                         // _58
	virtual void _5C() = 0;                         // _5C
	virtual void _60() = 0;                         // _60
	virtual void _64() = 0;                         // _64
	virtual void _68() = 0;                         // _68
	virtual void _6C() = 0;                         // _6C
	virtual void _70() = 0;                         // _70
	virtual void _74() = 0;                         // _74
	virtual void _78() = 0;                         // _78
	virtual void _7C() = 0;                         // _7C
	virtual void _80() = 0;                         // _80
	virtual void _84() = 0;                         // _84
	virtual void _88() = 0;                         // _88
	virtual void _8C() = 0;                         // _8C
	virtual void _90() = 0;                         // _90

	// _00 VTBL
};
} // namespace JStudio_JAudio

#endif
