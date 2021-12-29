#ifndef _JSTUDIO_JPARTICLE_TADAPTOR_PARTICLE_TJPACALLBACK__H
#define _JSTUDIO_JPARTICLE_TADAPTOR_PARTICLE_TJPACALLBACK__H

/*
    __vt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_:
    .4byte 0
    .4byte 0
    .4byte __dt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_Fv
    .4byte
   execute__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_FP14JPABaseEmitter
    .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
*/

struct JPAEmitterCallBack {
	virtual ~JPAEmitterCallBack();              // _00
	virtual void execute(JPABaseEmitter*);      // _04
	virtual void executeAfter(JPABaseEmitter*); // _08
	virtual void draw(JPABaseEmitter*);         // _0C
	virtual void drawAfter(JPABaseEmitter*);    // _10

	// _00 VTBL
};

namespace JStudio_JParticle {
namespace TAdaptor_particle {
	struct TJPACallback_ : public JPAEmitterCallBack {
		virtual ~TJPACallback_();                   // _00
		virtual void execute(JPABaseEmitter*);      // _04
		virtual void executeAfter(JPABaseEmitter*); // _08
		virtual void draw(JPABaseEmitter*);         // _0C
		virtual void drawAfter(JPABaseEmitter*);    // _10

		// _00 VTBL
	};
} // namespace TAdaptor_particle
} // namespace JStudio_JParticle

#endif
