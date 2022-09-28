#ifndef _EFX_TCURSOR_H
#define _EFX_TCURSOR_H

#include "efx/TOneEmitter.h"

namespace efx {
struct TCursor : public TBase {
	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)

	void init(long, long);
	void update(Arg*);
	void calcPos_(Vector3f*, f32, long);

	// _00      = VTBL
	TOneEmitter m_oneEmitter;   // _04
	long _38;                   // _38
	Context m_contextArray[16]; // _3C
	Vector3f m_position;        // _27C
	f32 m_angleTimer;           // _288
	f32 m_angleSpeed;           // _28C
};
} // namespace efx

#endif
