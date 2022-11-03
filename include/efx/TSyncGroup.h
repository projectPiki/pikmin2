#ifndef _EFX_TSYNCGROUP_H
#define _EFX_TSYNCGROUP_H

#include "efx/TBase.h"
#include "efx/TSync.h"

// #define TSYNCGROUP_DECL(count)

namespace efx {
template <typename T>
struct TSyncGroup2 : public TBase {
	//////////////// VTABLE
	virtual bool create(Arg* arg) // _08 (weak)
	{
		for (u32 i = 0; i < 2; i++) {
			if (((TSync*)&m_items[i])->create(arg) == false) {
				return false;
			}
		}
		return true;
	}
	virtual void forceKill() // _0C (weak)
	{
		for (u32 i = 0; i < 2; i++) {
			((TSync*)&m_items[i])->forceKill();
		}
	}
	virtual void fade() // _10 (weak)
	{
		for (u32 i = 0; i < 2; i++) {
			((TSync*)&m_items[i])->fade();
		}
	}
	virtual void startDemoDrawOff() // _14 (weak)
	{
		for (u32 i = 0; i < 2; i++) {
			((TSync*)&m_items[i])->startDemoDrawOff();
		}
	}
	virtual void endDemoDrawOn() // _18 (weak)
	{
		for (u32 i = 0; i < 2; i++) {
			((TSync*)&m_items[i])->endDemoDrawOn();
		}
	}
	//////////////// VTABLE END

	// _00 	= VTBL
	T m_items[2]; // _04
};

// map says these should be weak, but making them weak messes with Ftank and Wtank.
// TODO: resolve once efxBase is decomp'd

// it literally just runs the loop the number times in the struct name. can't they just use an inline func with the loop count as an arg
// -EpochFlame

template <typename T>
struct TSyncGroup3 : public TBase {
	//////////////// VTABLE
	virtual bool create(Arg* arg) // _08 (weak)
	{
		for (u32 i = 0; i < 3; i++) {
			if (((TSync*)&m_items[i])->create(arg) == false) {
				return false;
			}
		}
		return true;
	}
	virtual void forceKill() // _0C (weak)
	{
		for (u32 i = 0; i < 3; i++) {
			((TSync*)&m_items[i])->forceKill();
		}
	}
	virtual void fade(); // _10 (weak)
	// {
	// 	for (u32 i = 0; i < 3; i++) {
	// 		((TSync*)&m_items[i])->fade();
	// 	}
	// }
	virtual void startDemoDrawOff(); // _14 (weak)
	// {
	// 	for (u32 i = 0; i < 3; i++) {
	// 		((TSync*)&m_items[i])->startDemoDrawOff();
	// 	}
	// }
	virtual void endDemoDrawOn(); // _18 (weak)
	// {
	// 	for (u32 i = 0; i < 3; i++) {
	// 		((TSync*)&m_items[i])->endDemoDrawOn();
	// 	}
	// }
	//////////////// VTABLE END

	// _00 VTBL
	T m_items[3]; // _04
};

template <typename T>
struct TSyncGroup4 : public TBase {
	//////////////// VTABLE
	virtual bool create(Arg* arg) // _08 (weak)
	{
		for (u32 i = 0; i < 4; i++) {
			if (((TSync*)&m_items[i])->create(arg) == false) {
				return false;
			}
		}
		return true;
	}
	virtual void forceKill() // _10 (weak)
	{
		for (u32 i = 0; i < 4; i++) {
			((TSync*)&m_items[i])->forceKill();
		}
	}
	virtual void fade(); // _14 (weak)
	// {
	// 	for (u32 i = 0; i < 4; i++) {
	// 		((TSync*)&m_items[i])->fade();
	// 	}
	// }
	virtual void startDemoDrawOff(); // _18 (weak)
	// {
	// 	for (u32 i = 0; i < 4; i++) {
	// 		((TSync*)&m_items[i])->startDemoDrawOff();
	// 	}
	// }
	virtual void endDemoDrawOn(); // _1C (weak)
	// {
	// 	for (u32 i = 0; i < 4; i++) {
	// 		((TSync*)&m_items[i])->endDemoDrawOn();
	// 	}
	// }
	//////////////// VTABLE END

	// _00 VTBL
	T m_items[4]; // _04
};

template <typename T>
struct TSyncGroup5 : public TBase {
	//////////////// VTABLE
	virtual bool create(Arg* arg) // _08 (weak)
	{
		for (u32 i = 0; i < 5; i++) {
			if (((TSync*)&m_items[i])->create(arg) == false) {
				return false;
			}
		}
		return true;
	}
	virtual void forceKill() // _0C (weak)
	{
		for (u32 i = 0; i < 5; i++) {
			((TSync*)&m_items[i])->forceKill();
		}
	}
	virtual void fade() // _10 (weak)
	{
		for (u32 i = 0; i < 5; i++) {
			((TSync*)&m_items[i])->fade();
		}
	}
	virtual void startDemoDrawOff() // _14 (weak)
	{
		for (u32 i = 0; i < 5; i++) {
			((TSync*)&m_items[i])->startDemoDrawOff();
		}
	}
	virtual void endDemoDrawOn() // _18 (weak)
	{
		for (u32 i = 0; i < 5; i++) {
			((TSync*)&m_items[i])->endDemoDrawOn();
		}
	}
	//////////////// VTABLE END

	// _00 VTBL
	T m_items[5]; // _04
};

template <typename T>
struct TSyncGroup6 : public TBase {
	//////////////// VTABLE
	virtual bool create(Arg* arg) // _00
	{
		for (u32 i = 0; i < 6; i++) {
			if (((TSync*)&m_items[i])->create(arg) == false) {
				return false;
			}
		}
		return true;
	}
	virtual void forceKill() // _04
	{
		for (u32 i = 0; i < 6; i++) {
			((TSync*)&m_items[i])->forceKill();
		}
	}
	virtual void fade() // _08
	{
		for (u32 i = 0; i < 6; i++) {
			((TSync*)&m_items[i])->fade();
		}
	}
	virtual void startDemoDrawOff() // _0C
	{
		for (u32 i = 0; i < 6; i++) {
			((TSync*)&m_items[i])->startDemoDrawOff();
		}
	}
	virtual void endDemoDrawOn() // _10
	{
		for (u32 i = 0; i < 6; i++) {
			((TSync*)&m_items[i])->endDemoDrawOn();
		}
	}
	//////////////// VTABLE END

	// _00 VTBL
	T m_items[6]; // _04
};
} // namespace efx

#endif
