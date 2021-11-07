#ifndef _JSTUDIO_JPARTICLE_TADAPTOR_PARTICLE_TJPACALLBACK__H
#define _JSTUDIO_JPARTICLE_TADAPTOR_PARTICLE_TJPACALLBACK__H

struct JPAEmitterCallBack {
	virtual void _00() = 0;                     // _00
	virtual void _04() = 0;                     // _04
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
