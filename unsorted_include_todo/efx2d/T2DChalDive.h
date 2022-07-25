#ifndef _EFX2D_T2DCHALDIVE_H
#define _EFX2D_T2DCHALDIVE_H

/*
    __vt__Q25efx2d11T2DChalDive:
    .4byte 0
    .4byte 0
    .4byte create__Q25efx2d8TForeverFPQ25efx2d3Arg
    .4byte kill__Q25efx2d8TForeverFv
    .4byte fade__Q25efx2d8TForeverFv
    .4byte setGroup__Q25efx2d5TBaseFUc
    .4byte 0
    .4byte 0
    .4byte "@8@__dt__Q25efx2d11T2DChalDiveFv"
    .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte __dt__Q25efx2d11T2DChalDiveFv
*/

namespace efx2d {
struct TForever {
	virtual void create(Arg*); // _08
	virtual void kill();       // _0C
	virtual void fade();       // _10
};
} // namespace efx2d

namespace efx2d {
struct TBase {
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void setGroup(unsigned char); // _14 (weak)
};
} // namespace efx2d

struct JPAEmitterCallBack {
	virtual void _08() = 0;                     // _08
	virtual void _0C() = 0;                     // _0C
	virtual void _10() = 0;                     // _10
	virtual void _14() = 0;                     // _14
	virtual void _18() = 0;                     // _18
	virtual void _1C() = 0;                     // _1C
	virtual void _20() = 0;                     // _20
	virtual void execute(JPABaseEmitter*);      // _24 (weak)
	virtual void executeAfter(JPABaseEmitter*); // _28 (weak)
	virtual void draw(JPABaseEmitter*);         // _2C (weak)
	virtual void drawAfter(JPABaseEmitter*);    // _30 (weak)
};

namespace efx2d {
struct T2DChalDive : public TForever, public TBase, public JPAEmitterCallBack {
	virtual void _18() = 0; // _18
	virtual void _1C() = 0; // _1C
	virtual ~T2DChalDive(); // _34 (weak)
};
} // namespace efx2d

#endif
