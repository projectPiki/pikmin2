#ifndef _EFX_TBASE_H
#define _EFX_TBASE_H

#include "ParticleMgr.h"
#include "Vector3.h"
#include "efx/TCallBack_StaticClipping.h"
#include "efx/Arg.h"
#include "types.h"

///////// EFFECT IDS
#define EID_KkabutoRot  (0x287)
#define EID_KkabutoWait (0x288)
#define EID_EnemyPiyo   (0x291)
#define EID_Sync        (0x2B2)
/////////

namespace efx {
struct TBase {
	virtual bool create(Arg*) = 0; // _08
	virtual void forceKill()  = 0; // _0C
	virtual void fade()       = 0; // _10

	static TCallBack_StaticClipping mCallBack_StaticClipping;

	// inline bool create(JPABaseEmitter** emitters, Vector3f& position, u16* effectIDs, int count) {
	// 	for (int i = 0; i < count; i++) {
	// 		emitters[i] = particleMgr->create(effectIDs[i], position, 0);
	// 		if (emitters[i] != nullptr) {
	// 			emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
	// 		} else {
	// 			return false;
	// 		}
	// 	}
	// 	return true;
	// }

	// inline bool create(JPABaseEmitter** emitters, u16* effectIDs, Vector3f& position, int count) {
	// 	for (int i = 0; i < count; i++) {
	// 		emitters[i] = particleMgr->create(effectIDs[i], position, 0);
	// 		if (emitters[i] != nullptr) {
	// 			emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
	// 		} else {
	// 			return false;
	// 		}
	// 	}
	// 	return true;
	// }

	// inline bool create(JPABaseEmitter** emitters, int count, u16* effectIDs, Vector3f& position) {
	// 	for (int i = 0; i < count; i++) {
	// 		emitters[i] = particleMgr->create(effectIDs[i], position, 0);
	// 		if (emitters[i] != nullptr) {
	// 			emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
	// 		} else {
	// 			return false;
	// 		}
	// 	}
	// 	return true;
	// }

	// inline bool create(JPABaseEmitter** emitters, int count, Vector3f& position, u16* effectIDs) {
	// 	for (int i = 0; i < count; i++) {
	// 		emitters[i] = particleMgr->create(effectIDs[i], position, 0);
	// 		if (emitters[i] != nullptr) {
	// 			emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
	// 		} else {
	// 			return false;
	// 		}
	// 	}
	// 	return true;
	// }

	// inline bool create(JPABaseEmitter** emitters, int count, Arg* arg, u16* effectIDs) {
	// 	for (int i = 0; i < count; i++) {
	// 		emitters[i] = particleMgr->create(effectIDs[i], arg->m_position, 0);
	// 		if (emitters[i] != nullptr) {
	// 			emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
	// 		} else {
	// 			return false;
	// 		}
	// 	}
	// 	return true;
	// }

	// inline bool create(Arg& arg, JPABaseEmitter** emitters, u16* effectIDs, int count) {
	// 	for (int i = 0; i < count; i++) {
	// 		emitters[i] = particleMgr->create(effectIDs[i], arg.m_position, 0);
	// 		if (emitters[i] != nullptr) {
	// 			emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
	// 		} else {
	// 			return false;
	// 		}
	// 	}
	// 	return true;
	// }

	// inline bool create(Arg* arg, JPABaseEmitter** emitters, u16* effectIDs, int count) const {
	// 	for (int i = 0; i < count; i++) {
	// 		emitters[i] = particleMgr->create(effectIDs[i], arg->m_position, 0);
	// 		if (emitters[i] != nullptr) {
	// 			emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
	// 		} else {
	// 			return false;
	// 		}
	// 	}
	// 	return true;
	// }

	// inline bool create(int count, JPABaseEmitter** emitters, Vector3f& position, u16* effectIDs) {
	// 	for (int i = 0; i < count; i++) {
	// 		emitters[i] = particleMgr->create(effectIDs[i], position, 0);
	// 		if (emitters[i] != nullptr) {
	// 			emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
	// 		} else {
	// 			return false;
	// 		}
	// 	}
	// 	return true;
	// }

	// inline bool create(int count, Vector3f& position, u16* effectIDs, JPABaseEmitter** emitters) {
	// 	for (int i = 0; i < count; i++) {
	// 		emitters[i] = particleMgr->create(effectIDs[i], position, 0);
	// 		if (emitters[i] != nullptr) {
	// 			emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
	// 		} else {
	// 			return false;
	// 		}
	// 	}
	// 	return true;
	// }
};

// inline bool createEmitters(Arg* arg, JPABaseEmitter** emitters, u16* effectIDs, int count) {
// 	for (int i = 0; i < count; i++) {
// 		emitters[i] = particleMgr->create(effectIDs[i], arg->m_position, 0);
// 		if (emitters[i] != nullptr) {
// 			emitters[i]->m_emitterCallback = &TBase::mCallBack_StaticClipping;
// 		} else {
// 			return false;
// 		}
// 	}
// 	return true;
// }
// inline bool createEmitters(Arg* arg, JPABaseEmitter** emitters, u16* effectIDs, int count) {
// 	int i = 0;
// 	do {
// 		emitters[i] = particleMgr->create(effectIDs[i], arg->m_position, 0);
// 		if (emitters[i] != nullptr) {
// 			emitters[i]->m_emitterCallback = &TBase::mCallBack_StaticClipping;
// 		} else {
// 			return false;
// 		}
// 	} while (i++ < count);
// 	return true;
// }
} // namespace efx

#endif
