#ifndef _EFX_TSYNCGROUP_H
#define _EFX_TSYNCGROUP_H

#include "efx/TBase.h"
#include "efx/TSync.h"

// #define TSYNCGROUP_DECL(count)

namespace efx {

#define DEF_SYNC_GROUP(N)                \
	template <typename T>                \
	struct TSyncGroup##N : TBase {       \
		/* VTABLE */                     \
		virtual bool create(Arg* arg);   \
		virtual void forceKill();        \
		virtual void fade();             \
		virtual void startDemoDrawOff(); \
		virtual void endDemoDrawOn();    \
		/* VTABLE END */                 \
                                         \
		/* _00 	= VTBL */                \
		T mItems[N]; /* _04 */           \
	}

// map says these should be weak, but making them weak messes with Ftank and Wtank.
// TODO: resolve once efxBase is decomp'd

// it literally just runs the loop the number times in the struct name. can't they just use an inline func with the loop
// count as an arg -EpochFlame

DEF_SYNC_GROUP(2);
DEF_SYNC_GROUP(3);
DEF_SYNC_GROUP(4);
DEF_SYNC_GROUP(5);
DEF_SYNC_GROUP(6);

/*
virtual bool create(Arg* arg)
{
    for (u32 i = 0; i < N; i++) {
        if (!mItems[i].create(arg)) {
            return false;
        }
    }
    return true;
}
virtual void forceKill()
{
    for (u32 i = 0; i < N; i++) {
        mItems[i].forceKill();
    }
}
virtual void fade()
{
    for (u32 i = 0; i < N; i++) {
        mItems[i].fade();
    }
}
virtual void startDemoDrawOff()
{
    for (u32 i = 0; i < N; i++) {
        mItems[i].startDemoDrawOff();
    }
}
virtual void endDemoDrawOn()
{
    for (u32 i = 0; i < N; i++) {
        mItems[i].endDemoDrawOn();
    }
}
*/

} // namespace efx

#endif
