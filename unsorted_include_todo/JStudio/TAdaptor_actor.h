#ifndef _JSTUDIO_TADAPTOR_ACTOR_H
#define _JSTUDIO_TADAPTOR_ACTOR_H

/*
    __vt__Q27JStudio14TAdaptor_actor:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
    .4byte adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl
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
	virtual void _08() = 0;                                                                               // _08
	virtual void adaptor_do_prepare(const TObject*);                                                      // _0C
	virtual void adaptor_do_begin(const TObject*);                                                        // _10
	virtual void adaptor_do_end(const TObject*);                                                          // _14
	virtual void adaptor_do_update(const TObject*, unsigned long);                                        // _18
	virtual void adaptor_do_data(const TObject*, const void*, unsigned long, const void*, unsigned long); // _1C
};
} // namespace JStudio

namespace JStudio {
struct TAdaptor_actor : public TAdaptor {
	virtual void _08() = 0; // _08
	virtual void _20() = 0; // _20
	virtual void _24() = 0; // _24
	virtual void _28() = 0; // _28
	virtual void _2C() = 0; // _2C
	virtual void _30() = 0; // _30
	virtual void _34() = 0; // _34
	virtual void _38() = 0; // _38
	virtual void _3C() = 0; // _3C
	virtual void _40() = 0; // _40
	virtual void _44() = 0; // _44
	virtual void _48() = 0; // _48
	virtual void _4C() = 0; // _4C

	~TAdaptor_actor();
};
} // namespace JStudio

#endif
