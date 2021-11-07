#ifndef _JSTUDIO_JSTAGE_TADAPTOR_FOG_H
#define _JSTUDIO_JSTAGE_TADAPTOR_FOG_H

namespace JStudio_JStage {
struct TAdaptor_fog {
	virtual ~TAdaptor_fog();                                  // _00
	virtual void adaptor_do_prepare(const JStudio::TObject*); // _04
	virtual void adaptor_do_begin(const JStudio::TObject*);   // _08
	virtual void adaptor_do_end(const JStudio::TObject*);     // _0C
	virtual void adaptor_do_update(const JStudio::TObject*,
	                               unsigned long); // _10
	virtual void adaptor_do_data(const JStudio::TObject*, const void*,
	                             unsigned long, const void*,
	                             unsigned long); // _14
	virtual void _18() = 0;                      // _18
	virtual void _1C() = 0;                      // _1C
	virtual void _20() = 0;                      // _20
	virtual void _24() = 0;                      // _24
	virtual void _28() = 0;                      // _28
	virtual void _2C() = 0;                      // _2C
	virtual void _30() = 0;                      // _30
	virtual void _34() = 0;                      // _34

	// _00 VTBL
};
} // namespace JStudio_JStage

#endif
