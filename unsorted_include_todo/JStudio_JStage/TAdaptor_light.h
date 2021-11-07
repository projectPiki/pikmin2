#ifndef _JSTUDIO_JSTAGE_TADAPTOR_LIGHT_H
#define _JSTUDIO_JSTAGE_TADAPTOR_LIGHT_H

namespace JStudio_JStage {
struct TAdaptor_light {
	virtual ~TAdaptor_light();                                // _00
	virtual void adaptor_do_prepare(const JStudio::TObject*); // _04
	virtual void adaptor_do_begin(const JStudio::TObject*);   // _08
	virtual void adaptor_do_end(const JStudio::TObject*);     // _0C
	virtual void adaptor_do_update(const JStudio::TObject*,
	                               unsigned long); // _10
	virtual void adaptor_do_data(const JStudio::TObject*, const void*,
	                             unsigned long, const void*,
	                             unsigned long); // _14
	virtual void adaptor_do_ENABLE(JStudio::data::TEOperationData, const void*,
	                               unsigned long); // _18
	virtual void adaptor_do_FACULTY(JStudio::data::TEOperationData, const void*,
	                                unsigned long); // _1C

	// _00 VTBL
};
} // namespace JStudio_JStage

#endif
