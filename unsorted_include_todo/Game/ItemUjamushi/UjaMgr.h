#ifndef _GAME_ITEMUJAMUSHI_UJAMGR_H
#define _GAME_ITEMUJAMUSHI_UJAMGR_H

/*
        __vt__Q34Game12ItemUjamushi6UjaMgr:
        .4byte 0
        .4byte 0
        .4byte "getMaxObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "getNumObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "isFlagAlive__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"
        .4byte "getFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"
        .4byte
   "killFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPQ24Game6TFlock"
        .4byte do_update__Q34Game12ItemUjamushi6UjaMgrFv
        .4byte do_update_boundSphere__Q34Game12ItemUjamushi6UjaMgrFv
        .4byte doSimpleDraw__Q24Game12BaseFlockMgrFP8ViewportPP12J3DModelDatai
        .4byte isWeed__Q24Game12BaseFlockMgrFi
        .4byte fear__Q24Game12BaseFlockMgrFi
        .4byte 0
        .4byte 0
        .4byte "@32@__dt__Q34Game12ItemUjamushi6UjaMgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__36Container<Q34Game12ItemUjamushi3Uja>FPv"
        .4byte "@32@getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
        .4byte "@32@getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "@32@getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "@32@get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
        .4byte "getAt__36Container<Q34Game12ItemUjamushi3Uja>Fi"
        .4byte "getTo__36Container<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
        .4byte "getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
        .4byte "getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte "getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
        .4byte __dt__Q34Game12ItemUjamushi6UjaMgrFv
*/

namespace Game {
namespace TFlockMgr < Game
{
    namespace ItemUjamushi {
        struct Uja >
        {
            virtual void TFlockMgr < getMaxObjects();    // _00
            virtual void TFlockMgr < getNumObjects();    // _04
            virtual void TFlockMgr < isFlagAlive(int);   // _08
            virtual void TFlockMgr < getFlock(int);      // _0C
            virtual void TFlockMgr < killFlock(TFlock*); // _10
            virtual void _14() = 0;                      // _14
            virtual void _18() = 0;                      // _18
            virtual void _1C() = 0;                      // _1C
            virtual void _20() = 0;                      // _20
            virtual void _24() = 0;                      // _24
            virtual void _28() = 0;                      // _28
            virtual void _2C() = 0;                      // _2C
            virtual void _30() = 0;                      // _30
            virtual void _34() = 0;                      // _34
            virtual void getObject(void*);               // _38
            virtual void _3C() = 0;                      // _3C
            virtual void _40() = 0;                      // _40
            virtual void _44() = 0;                      // _44
            virtual void _48() = 0;                      // _48
            virtual void getAt(int);                     // _4C
            virtual void getTo();                        // _50
            virtual void TFlockMgr < get(void*);         // _54
            virtual void TFlockMgr < getNext(void*);     // _58
            virtual void TFlockMgr < getStart();         // _5C
            virtual void TFlockMgr < getEnd();           // _60

            // _00 VTBL
        };
    } // namespace ItemUjamushi
} // namespace TFlockMgr<Game
} // namespace Game

namespace Game {
struct BaseFlockMgr {
    virtual void _00() = 0;                                    // _00
    virtual void _04() = 0;                                    // _04
    virtual void _08() = 0;                                    // _08
    virtual void _0C() = 0;                                    // _0C
    virtual void _10() = 0;                                    // _10
    virtual void _14() = 0;                                    // _14
    virtual void _18() = 0;                                    // _18
    virtual void doSimpleDraw(Viewport*, J3DModelData**, int); // _1C
    virtual void isWeed(int);                                  // _20
    virtual void fear(int);                                    // _24

    // _00 VTBL
};
} // namespace Game

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void _04() = 0;       // _04
    virtual void _08() = 0;       // _08
    virtual void _0C() = 0;       // _0C
    virtual void _10() = 0;       // _10
    virtual void _14() = 0;       // _14
    virtual void _18() = 0;       // _18
    virtual void _1C() = 0;       // _1C
    virtual void _20() = 0;       // _20
    virtual void _24() = 0;       // _24
    virtual void _28() = 0;       // _28
    virtual void _2C() = 0;       // _2C
    virtual void _30() = 0;       // _30
    virtual void getChildCount(); // _34

    // _00 VTBL
};

namespace Game {
namespace ItemUjamushi {
    struct UjaMgr : public Uja >, public BaseFlockMgr, public CNode {
        virtual void TFlockMgr < getMaxObjects();                  // _00
        virtual void TFlockMgr < getNumObjects();                  // _04
        virtual void TFlockMgr < isFlagAlive(int);                 // _08
        virtual void TFlockMgr < getFlock(int);                    // _0C
        virtual void TFlockMgr < killFlock(TFlock*);               // _10
        virtual void do_update();                                  // _14
        virtual void do_update_boundSphere();                      // _18
        virtual void doSimpleDraw(Viewport*, J3DModelData**, int); // _1C
        virtual void isWeed(int);                                  // _20
        virtual void fear(int);                                    // _24
        virtual void _28() = 0;                                    // _28
        virtual void _2C() = 0;                                    // _2C
        virtual void @32 @__dt();                                  // _30
        virtual void getChildCount();                              // _34
        virtual void getObject(void*);                             // _38
        virtual void getAt(int);                                   // _4C
        virtual void getTo();                                      // _50
        virtual void TFlockMgr < get(void*);                       // _54
        virtual void TFlockMgr < getNext(void*);                   // _58
        virtual void TFlockMgr < getStart();                       // _5C
        virtual void TFlockMgr < getEnd();                         // _60
        virtual ~UjaMgr();                                         // _64

        // _00 VTBL
    };
} // namespace ItemUjamushi
} // namespace Game

#endif
