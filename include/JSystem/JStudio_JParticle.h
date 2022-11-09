#ifndef _JSYSTEM_JSTUDIO_JPARTICLE_H
#define _JSYSTEM_JSTUDIO_JPARTICLE_H

#include "JStage/TObject.h"
#include "JStage/TSystem.h"
#include "JStudio/TAdaptor.h"
#include "JStudio/TObject.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "types.h"

namespace JStudio_JParticle {
/** @size{0x1A8} */
struct TAdaptor_particle : JStudio::TAdaptor_particle {
	struct TJPACallback_ : JPAEmitterCallBack {
		inline TJPACallback_(TAdaptor_particle* adaptor)
		    : JPAEmitterCallBack()
		    , m_adaptor(adaptor)
		    , m_object(nullptr)
		{
		}

		virtual ~TJPACallback_();              // _08 (weak)
		virtual void execute(JPABaseEmitter*); // _0C

		TAdaptor_particle* m_adaptor;     // _04
		const JStudio::TObject* m_object; // _08
	};

	TAdaptor_particle(JPAEmitterManager*, const JStage::TSystem*);

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

	void beginParticle_fadeIn_(u32);
	void endParticle_fadeOut_(u32);

	JPAEmitterManager* m_emitterManager; // _174
	JPABaseEmitter* m_emitter;           // _178
	TJPACallback_ m_callback;            // _17C
	int _188;                            // _188
	u32 _18C;                            // _18C
	u32 _190;                            // _190
	u32 _194;                            // _194
	const JStage::TSystem* m_system;     // _198
	JStage::TObject* _19C;               // _19C
	u32 _1A0;                            // _1A0
	bool _1A4;                           // _1A4
};

struct TCreateObject {
	virtual ~TCreateObject();                                                                 // _08
	virtual void create(JStudio::TObject**, const JStudio::stb::data::TParse_TBlock_object&); // _0C
};
} // namespace JStudio_JParticle

#endif
