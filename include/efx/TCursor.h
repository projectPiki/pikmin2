#ifndef _EFX_TCURSOR_H
#define _EFX_TCURSOR_H

#include "efx/TOneEmitter.h"

// more could make more dots in effect?
#define WHISTLE_CONTEXT_NUM 16

namespace efx {
struct TCursor : public TBase {
	inline TCursor()
	    : m_oneEmitter(PID_Cursor_Olimar)
	{
		init(PID_Cursor_Olimar, WHISTLE_CONTEXT_NUM);
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)

	void init(long, long);
	void update(Arg*);
	void calcPos_(Vector3f*, f32, long);

	// _00      = VTBL
	TOneEmitter m_oneEmitter;                    // _04
	long m_contextNum;                           // _38
	Context m_contextArray[WHISTLE_CONTEXT_NUM]; // _3C
	Vector3f m_position;                         // _27C
	f32 m_angleTimer;                            // _288
	f32 m_angleSpeed;                            // _28C

	static f32 kAngleSpeed;
};
} // namespace efx

#endif
