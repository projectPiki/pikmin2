#ifndef _EFX2D_WORLDMAP_T2DONYONKIRA_H
#define _EFX2D_WORLDMAP_T2DONYONKIRA_H

/*
        __vt__Q35efx2d8WorldMap12T2DOnyonKira:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d8WorldMap12T2DOnyonKiraFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q35efx2d8WorldMap12T2DOnyonKiraFv"
        .4byte "@8@execute__Q25efx2d12TChasePosDirFP14JPABaseEmitter"
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q35efx2d8WorldMap12T2DOnyonKiraFv
        .4byte execute__Q25efx2d12TChasePosDirFP14JPABaseEmitter
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
    virtual void create(Arg*);            // _08
    virtual void _0C() = 0;               // _0C
    virtual void _10() = 0;               // _10
    virtual void setGroup(unsigned char); // _14 (inline)
};
} // namespace efx2d

struct JPAEmitterCallBack {
    virtual void create(Arg*);                  // _08
    virtual void _0C() = 0;                     // _0C
    virtual void _10() = 0;                     // _10
    virtual void _14() = 0;                     // _14
    virtual void _18() = 0;                     // _18
    virtual void _1C() = 0;                     // _1C
    virtual void @8 @__dt();                    // _20 (inline)
    virtual void _24() = 0;                     // _24
    virtual void executeAfter(JPABaseEmitter*); // _28 (inline)
    virtual void draw(JPABaseEmitter*);         // _2C (inline)
    virtual void drawAfter(JPABaseEmitter*);    // _30 (inline)
};

namespace efx2d {
struct TChasePosDir {
    virtual void create(Arg*);             // _08
    virtual void _0C() = 0;                // _0C
    virtual void _10() = 0;                // _10
    virtual void _14() = 0;                // _14
    virtual void _18() = 0;                // _18
    virtual void _1C() = 0;                // _1C
    virtual void @8 @__dt();               // _20 (inline)
    virtual void _24() = 0;                // _24
    virtual void _28() = 0;                // _28
    virtual void _2C() = 0;                // _2C
    virtual void _30() = 0;                // _30
    virtual ~TChasePosDir();               // _34 (inline)
    virtual void execute(JPABaseEmitter*); // _38 (inline)
};
} // namespace efx2d

namespace efx2d {
namespace WorldMap {
    struct T2DOnyonKira : public TForever,
                          public TBase,
                          public JPAEmitterCallBack,
                          public TChasePosDir {
        virtual void create(Arg*); // _08
        virtual void _18() = 0;    // _18
        virtual void _1C() = 0;    // _1C
        virtual void @8 @__dt();   // _20 (inline)
        virtual ~T2DOnyonKira();   // _34 (inline)

        void setGlobalParticleScale(float);
    };
} // namespace WorldMap
} // namespace efx2d

#endif
