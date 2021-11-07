#ifndef _EFX2D_WORLDMAP_T2DROCKETB_H
#define _EFX2D_WORLDMAP_T2DROCKETB_H

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
    virtual void _1C() = 0;                     // _1C
    virtual void executeAfter(JPABaseEmitter*); // _20
    virtual void draw(JPABaseEmitter*);         // _24
    virtual void drawAfter(JPABaseEmitter*);    // _28

    // _00 VTBL
};

namespace efx2d {
struct TChasePosDir {
    virtual void _00() = 0;                // _00
    virtual void _04() = 0;                // _04
    virtual void _08() = 0;                // _08
    virtual void _0C() = 0;                // _0C
    virtual void _10() = 0;                // _10
    virtual void _14() = 0;                // _14
    virtual void _18() = 0;                // _18
    virtual void _1C() = 0;                // _1C
    virtual void _20() = 0;                // _20
    virtual void _24() = 0;                // _24
    virtual void _28() = 0;                // _28
    virtual void _2C() = 0;                // _2C
    virtual void execute(JPABaseEmitter*); // _30

    // _00 VTBL
};
} // namespace efx2d

namespace efx2d {
namespace WorldMap {
    struct T2DRocketB : public TForever,
                        public TBase,
                        public JPAEmitterCallBack,
                        public TChasePosDir {
        virtual void create(Arg*);                  // _00
        virtual void kill();                        // _04
        virtual void fade();                        // _08
        virtual void setGroup(unsigned char);       // _0C
        virtual void _10() = 0;                     // _10
        virtual void _14() = 0;                     // _14
        virtual void @8 @__dt();                    // _18
        virtual void _1C() = 0;                     // _1C
        virtual void executeAfter(JPABaseEmitter*); // _20
        virtual void draw(JPABaseEmitter*);         // _24
        virtual void drawAfter(JPABaseEmitter*);    // _28
        virtual ~T2DRocketB();                      // _2C
        virtual void execute(JPABaseEmitter*);      // _30

        // _00 VTBL
    };
} // namespace WorldMap
} // namespace efx2d

#endif
