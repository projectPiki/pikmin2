#ifndef _JSTUDIO_TADAPTOR_MESSAGE_H
#define _JSTUDIO_TADAPTOR_MESSAGE_H

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
struct TAdaptor_message : public TAdaptor {
	virtual void _00() = 0;                                        // _00
	virtual void adaptor_do_prepare(const TObject*);               // _04
	virtual void adaptor_do_begin(const TObject*);                 // _08
	virtual void adaptor_do_end(const TObject*);                   // _0C
	virtual void adaptor_do_update(const TObject*, unsigned long); // _10
	virtual void adaptor_do_data(const TObject*, const void*, unsigned long,
	                             const void*, unsigned long); // _14
	virtual void _18() = 0;                                   // _18

	// _00 VTBL
};
} // namespace JStudio

#endif
