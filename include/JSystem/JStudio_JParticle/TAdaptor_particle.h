#ifndef _JSYSTEM_JSTUDIO_JPARTICLETADAPTOR_PARTICLE_H
#define _JSYSTEM_JSTUDIO_JPARTICLETADAPTOR_PARTICLE_H

#include "types.h"

// NOTE, incomplete definitions
namespace JStudio_JParticle {
struct TAdaptor_particle {
	struct TJPACallback {
		~TJPACallback();
		void execute(struct JPABaseEmitter*);
	};

	~TAdaptor_particle();
	void beginParticle_fadeIn_(u32);
	void endParticle_fadeOut_(u32);
};
} // namespace JStudio_JParticle

#endif
