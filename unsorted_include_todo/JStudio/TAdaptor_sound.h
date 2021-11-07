#ifndef _JSTUDIO_TADAPTOR_SOUND_H
#define _JSTUDIO_TADAPTOR_SOUND_H

namespace JStudio {
struct TAdaptor {
	virtual void _00() = 0;                                        // _00
	virtual void adaptor_do_prepare(const TObject*);               // _04
	virtual void adaptor_do_begin(const TObject*);                 // _08
	virtual void adaptor_do_end(const TObject*);                   // _0C
	virtual void adaptor_do_update(const TObject*, unsigned long); // _10
	virtual void adaptor_do_data(const TObject*, const void*, unsigned long,
	                             const void*, unsigned long); // _14

	// _00 VTBL
};
} // namespace JStudio

namespace JStudio {
struct TAdaptor_sound : public TAdaptor {
	virtual void _00() = 0;                                        // _00
	virtual void adaptor_do_prepare(const TObject*);               // _04
	virtual void adaptor_do_begin(const TObject*);                 // _08
	virtual void adaptor_do_end(const TObject*);                   // _0C
	virtual void adaptor_do_update(const TObject*, unsigned long); // _10
	virtual void adaptor_do_data(const TObject*, const void*, unsigned long,
	                             const void*, unsigned long); // _14
	virtual void _18() = 0;                                   // _18
	virtual void _1C() = 0;                                   // _1C
	virtual void _20() = 0;                                   // _20
	virtual void _24() = 0;                                   // _24
	virtual void _28() = 0;                                   // _28
	virtual void _2C() = 0;                                   // _2C
	virtual void _30() = 0;                                   // _30
	virtual void _34() = 0;                                   // _34
	virtual void _38() = 0;                                   // _38

	// _00 VTBL
};
} // namespace JStudio

#endif
