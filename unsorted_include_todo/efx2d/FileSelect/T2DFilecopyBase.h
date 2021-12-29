#ifndef _EFX2D_FILESELECT_T2DFILECOPYBASE_H
#define _EFX2D_FILESELECT_T2DFILECOPYBASE_H

/*
        __vt__Q35efx2d10FileSelect15T2DFilecopyBase:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d10FileSelect15T2DFilecopyBaseFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q35efx2d10FileSelect15T2DFilecopyBaseFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q35efx2d10FileSelect15T2DFilecopyBaseFv
*/

namespace efx2d {
struct TForever {
    virtual void _00() = 0; // _00
    virtual void kill();    // _04
    virtual void fade();    // _08

    // _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct TBase {
    virtual void _00() = 0;               // _00
    virtual void _04() = 0;               // _04
    virtual void _08() = 0;               // _08
    virtual void setGroup(unsigned char); // _0C

    // _00 VTBL
};
} // namespace efx2d

struct JPAEmitterCallBack {
    virtual void _00() = 0;                     // _00
    virtual void _04() = 0;                     // _04
    virtual void _08() = 0;                     // _08
    virtual void _0C() = 0;                     // _0C
    virtual void _10() = 0;                     // _10
    virtual void _14() = 0;                     // _14
    virtual void _18() = 0;                     // _18
    virtual void execute(JPABaseEmitter*);      // _1C
    virtual void executeAfter(JPABaseEmitter*); // _20
    virtual void draw(JPABaseEmitter*);         // _24
    virtual void drawAfter(JPABaseEmitter*);    // _28

    // _00 VTBL
};

namespace efx2d {
namespace FileSelect {
    struct T2DFilecopyBase : public TForever,
                             public TBase,
                             public JPAEmitterCallBack {
        virtual void create(Arg*);                  // _00
        virtual void kill();                        // _04
        virtual void fade();                        // _08
        virtual void setGroup(unsigned char);       // _0C
        virtual void _10() = 0;                     // _10
        virtual void _14() = 0;                     // _14
        virtual void @8 @__dt();                    // _18
        virtual void execute(JPABaseEmitter*);      // _1C
        virtual void executeAfter(JPABaseEmitter*); // _20
        virtual void draw(JPABaseEmitter*);         // _24
        virtual void drawAfter(JPABaseEmitter*);    // _28
        virtual ~T2DFilecopyBase();                 // _2C

        // _00 VTBL
    };
} // namespace FileSelect
} // namespace efx2d

#endif
