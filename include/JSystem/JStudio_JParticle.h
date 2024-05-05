#ifndef _JSYSTEM_JSTUDIO_JPARTICLE_H
#define _JSYSTEM_JSTUDIO_JPARTICLE_H

#include "JSystem/JStage/TObject.h"
#include "JSystem/JStage/TSystem.h"
#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JStudio/TCreateObject.h"
#include "JSystem/JStudio/TObject.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "types.h"

namespace JStudio_JParticle {
/** @size{0x1A8} */
struct TAdaptor_particle : JStudio::TAdaptor_particle {
	struct TJPACallback_ : JPAEmitterCallBack {
		inline TJPACallback_(TAdaptor_particle* adaptor)
		    : JPAEmitterCallBack()
		    , mAdaptor(adaptor)
		    , mObject(nullptr)
		{
		}

		virtual ~TJPACallback_() { }           // _08 (weak)
		virtual void execute(JPABaseEmitter*); // _0C

		TAdaptor_particle* mAdaptor;     // _04
		const JStudio::TObject* mObject; // _08
	};

	TAdaptor_particle(JPAEmitterManager*, const JStage::TSystem*);

	virtual ~TAdaptor_particle();                                                            // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                // _0C
	virtual void adaptor_do_end(const JStudio::TObject*);                                    // _14
	virtual void adaptor_do_update(const JStudio::TObject*, u32);                            // _18
	virtual void adaptor_do_PARTICLE(JStudio::data::TEOperationData, const void*, u32);      // _20
	virtual void adaptor_do_BEGIN(JStudio::data::TEOperationData, const void*, u32);         // _24
	virtual void adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData, const void*, u32); // _28
	virtual void adaptor_do_END(JStudio::data::TEOperationData, const void*, u32);           // _2C
	virtual void adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData, const void*, u32);  // _30
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, u32);        // _34
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, u32);   // _38
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, u32); // _3C

	void beginParticle_fadeIn_(u32);
	void endParticle_fadeOut_(u32);

	JPAEmitterManager* mEmitterManager; // _174
	JPABaseEmitter* mEmitter;           // _178
	TJPACallback_ mCallback;            // _17C
	u32 _188;                           // _188
	u32 _18C;                           // _18C
	u32 _190;                           // _190
	u32 _194;                           // _194
	const JStage::TSystem* mSystem;     // _198
	JStage::TObject* _19C;              // _19C
	u32 _1A0;                           // _1A0
	bool _1A4;                          // _1A4
};

struct TCreateObject : JStudio::TCreateObject {
	TCreateObject(JStage::TSystem* sys, JPAEmitterManager* jpa)
	{
		mEmitterManager = jpa;
		mSystem         = sys;
	}

	virtual ~TCreateObject();                                                                                // _08
	virtual bool create(JStudio::TObject** newObject, const JStudio::stb::data::TParse_TBlock_object& data); // _0C

	JPAEmitterManager* mEmitterManager; // _0C
	JStage::TSystem* mSystem;           // _10
};
} // namespace JStudio_JParticle

#endif
