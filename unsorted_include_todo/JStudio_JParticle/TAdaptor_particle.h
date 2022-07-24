#ifndef _JSTUDIO_JPARTICLE_TADAPTOR_PARTICLE_H
#define _JSTUDIO_JPARTICLE_TADAPTOR_PARTICLE_H

/*
    __vt__Q217JStudio_JParticle17TAdaptor_particle:
    .4byte 0
    .4byte 0
    .4byte __dt__Q217JStudio_JParticle17TAdaptor_particleFv
    .4byte adaptor_do_prepare__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObject
    .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_end__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObject
    .4byte adaptor_do_update__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObjectUl
    .4byte adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl
    .4byte adaptor_do_PARTICLE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_BEGIN__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_BEGIN_FADE_IN__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_END__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_END_FADE_OUT__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_PARENT__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_PARENT_NODE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_PARENT_ENABLE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
*/

namespace JStudio {
struct TAdaptor {
	virtual ~TAdaptor();                                                                                  // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                             // _0C
	virtual void adaptor_do_begin(const TObject*);                                                        // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                                 // _14
	virtual void adaptor_do_update(const JStudio::TObject*, unsigned long);                               // _18
	virtual void adaptor_do_data(const TObject*, const void*, unsigned long, const void*, unsigned long); // _1C

	// _00 VTBL
};
} // namespace JStudio

namespace JStudio_JParticle {
struct TAdaptor_particle : public TAdaptor {
	virtual ~TAdaptor_particle();                                                                      // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                          // _0C
	virtual void adaptor_do_end(const JStudio::TObject*);                                              // _14
	virtual void adaptor_do_update(const JStudio::TObject*, unsigned long);                            // _18
	virtual void adaptor_do_PARTICLE(JStudio::data::TEOperationData, const void*, unsigned long);      // _20
	virtual void adaptor_do_BEGIN(JStudio::data::TEOperationData, const void*, unsigned long);         // _24
	virtual void adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData, const void*, unsigned long); // _28
	virtual void adaptor_do_END(JStudio::data::TEOperationData, const void*, unsigned long);           // _2C
	virtual void adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData, const void*, unsigned long);  // _30
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, unsigned long);        // _34
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, unsigned long);   // _38
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, unsigned long); // _3C

	// _00 VTBL
};
} // namespace JStudio_JParticle

#endif
