#ifndef _JSTUDIO_TADAPTOR_FOG_H
#define _JSTUDIO_TADAPTOR_FOG_H

/*
    __vt__Q27JStudio12TAdaptor_fog:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
    .4byte adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl
*/

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
struct TAdaptor_fog : public TAdaptor {
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

#endif
