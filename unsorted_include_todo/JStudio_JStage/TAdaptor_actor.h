#ifndef _JSTUDIO_JSTAGE_TADAPTOR_ACTOR_H
#define _JSTUDIO_JSTAGE_TADAPTOR_ACTOR_H

namespace JStudio_JStage {
struct TAdaptor_actor {
	virtual ~TAdaptor_actor();                                // _00
	virtual void adaptor_do_prepare(const JStudio::TObject*); // _04
	virtual void adaptor_do_begin(const JStudio::TObject*);   // _08
	virtual void adaptor_do_end(const JStudio::TObject*);     // _0C
	virtual void adaptor_do_update(const JStudio::TObject*,
	                               unsigned long); // _10
	virtual void adaptor_do_data(const JStudio::TObject*, const void*,
	                             unsigned long, const void*,
	                             unsigned long); // _14
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*,
	                               unsigned long); // _18
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData,
	                                    const void*, unsigned long); // _1C
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData,
	                                      const void*, unsigned long); // _20
	virtual void adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData,
	                                        const void*, unsigned long); // _24
	virtual void adaptor_do_RELATION(JStudio::data::TEOperationData,
	                                 const void*, unsigned long); // _28
	virtual void adaptor_do_RELATION_NODE(JStudio::data::TEOperationData,
	                                      const void*, unsigned long); // _2C
	virtual void adaptor_do_RELATION_ENABLE(JStudio::data::TEOperationData,
	                                        const void*, unsigned long); // _30
	virtual void adaptor_do_SHAPE(JStudio::data::TEOperationData, const void*,
	                              unsigned long); // _34
	virtual void adaptor_do_ANIMATION(JStudio::data::TEOperationData,
	                                  const void*, unsigned long); // _38
	virtual void adaptor_do_ANIMATION_MODE(JStudio::data::TEOperationData,
	                                       const void*, unsigned long); // _3C
	virtual void adaptor_do_TEXTURE_ANIMATION(JStudio::data::TEOperationData,
	                                          const void*,
	                                          unsigned long); // _40
	virtual void
	adaptor_do_TEXTURE_ANIMATION_MODE(JStudio::data::TEOperationData,
	                                  const void*, unsigned long); // _44
	virtual void _48() = 0;                                        // _48
	virtual void _4C() = 0;                                        // _4C
	virtual void _50() = 0;                                        // _50
	virtual void _54() = 0;                                        // _54
	virtual void _58() = 0;                                        // _58
	virtual void _5C() = 0;                                        // _5C
	virtual void _60() = 0;                                        // _60
	virtual void _64() = 0;                                        // _64
	virtual void _68() = 0;                                        // _68
	virtual void _6C() = 0;                                        // _6C
	virtual void _70() = 0;                                        // _70
	virtual void _74() = 0;                                        // _74
	virtual void _78() = 0;                                        // _78
	virtual void _7C() = 0;                                        // _7C
	virtual void _80() = 0;                                        // _80
	virtual void _84() = 0;                                        // _84
	virtual void _88() = 0;                                        // _88
	virtual void _8C() = 0;                                        // _8C
	virtual void _90() = 0;                                        // _90
	virtual void _94() = 0;                                        // _94

	// _00 VTBL
};
} // namespace JStudio_JStage

#endif
