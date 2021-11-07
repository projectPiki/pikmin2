#ifndef _JSTUDIO_JPARTICLE_TADAPTOR_PARTICLE_H
#define _JSTUDIO_JPARTICLE_TADAPTOR_PARTICLE_H

namespace JStudio {
struct TAdaptor {
	virtual void _00() = 0;                        // _00
	virtual void _04() = 0;                        // _04
	virtual void adaptor_do_begin(const TObject*); // _08
	virtual void _0C() = 0;                        // _0C
	virtual void _10() = 0;                        // _10
	virtual void adaptor_do_data(const TObject*, const void*, unsigned long,
	                             const void*, unsigned long); // _14

	// _00 VTBL
};
} // namespace JStudio

namespace JStudio_JParticle {
struct TAdaptor_particle : public TAdaptor {
	virtual ~TAdaptor_particle();                             // _00
	virtual void adaptor_do_prepare(const JStudio::TObject*); // _04
	virtual void adaptor_do_begin(const TObject*);            // _08
	virtual void adaptor_do_end(const JStudio::TObject*);     // _0C
	virtual void adaptor_do_update(const JStudio::TObject*,
	                               unsigned long); // _10
	virtual void adaptor_do_data(const TObject*, const void*, unsigned long,
	                             const void*, unsigned long); // _14
	virtual void adaptor_do_PARTICLE(JStudio::data::TEOperationData,
	                                 const void*, unsigned long); // _18
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

	// _00 VTBL
};
} // namespace JStudio_JParticle

#endif
