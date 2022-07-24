#ifndef _EFX2D_FILESELECT_T2DFILECOPYM_H
#define _EFX2D_FILESELECT_T2DFILECOPYM_H

/*
        __vt__Q35efx2d10FileSelect12T2DFilecopyM:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d10FileSelect15T2DFilecopyBaseFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q35efx2d10FileSelect12T2DFilecopyMFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q35efx2d10FileSelect12T2DFilecopyMFv
*/

namespace efx2d {
namespace FileSelect {
    struct T2DFilecopyBase {
        virtual void create(Arg*); // _08

        // _00 VTBL
    };
} // namespace FileSelect
} // namespace efx2d

namespace efx2d {
struct TForever {
    virtual void _08() = 0; // _08
    virtual void kill();    // _0C
    virtual void fade();    // _10

    // _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct TBase {
    virtual void _08() = 0;               // _08
    virtual void _0C() = 0;               // _0C
    virtual void _10() = 0;               // _10
    virtual void setGroup(unsigned char); // _14

    // _00 VTBL
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
    virtual void execute(JPABaseEmitter*);      // _24
    virtual void executeAfter(JPABaseEmitter*); // _28
    virtual void draw(JPABaseEmitter*);         // _2C
    virtual void drawAfter(JPABaseEmitter*);    // _30

    // _00 VTBL
};

namespace efx2d {
namespace FileSelect {
    struct T2DFilecopyM : public T2DFilecopyBase,
                          public TForever,
                          public TBase,
                          public JPAEmitterCallBack {
        virtual void _18() = 0;  // _18
        virtual void _1C() = 0;  // _1C
        virtual void @8 @__dt(); // _20
        virtual ~T2DFilecopyM(); // _34

        // _00 VTBL
    };
} // namespace FileSelect
} // namespace efx2d

#endif
