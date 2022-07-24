#ifndef _GAME_ITEMWEED_WEEDMGR_H
#define _GAME_ITEMWEED_WEEDMGR_H

/*
        __vt__Q34Game8ItemWeed7WeedMgr:
        .4byte 0
        .4byte 0
        .4byte "getMaxObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "getNumObjects__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "isFlagAlive__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi"
        .4byte "getFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fi"
        .4byte
   "killFlock__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPQ24Game6TFlock" .4byte
   do_update__Q34Game8ItemWeed7WeedMgrFv .4byte
   do_update_boundSphere__Q34Game8ItemWeed7WeedMgrFv .4byte
   doSimpleDraw__Q24Game12BaseFlockMgrFP8ViewportPP12J3DModelDatai .4byte
   isWeed__Q24Game12BaseFlockMgrFi .4byte fear__Q24Game12BaseFlockMgrFi .4byte 0
        .4byte 0
        .4byte "@32@__dt__Q34Game8ItemWeed7WeedMgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__32Container<Q34Game8ItemWeed4Weed>FPv"
        .4byte "@32@getNext__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "@32@getStart__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "@32@getEnd__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "@32@get__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "getAt__32Container<Q34Game8ItemWeed4Weed>Fi"
        .4byte "getTo__32Container<Q34Game8ItemWeed4Weed>Fv"
        .4byte "get__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "getNext__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>FPv"
        .4byte "getStart__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte "getEnd__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>Fv"
        .4byte __dt__Q34Game8ItemWeed7WeedMgrFv
*/

namespace Game {
namespace TFlockMgr < Game
{
    namespace ItemWeed {
        struct Weed >
        {
            virtual void TFlockMgr < getMaxObjects();    // _08 (inline)
            virtual void TFlockMgr < getNumObjects();    // _0C (inline)
            virtual void TFlockMgr < isFlagAlive(int);   // _10 (inline)
            virtual void TFlockMgr < getFlock(int);      // _14 (inline)
            virtual void TFlockMgr < killFlock(TFlock*); // _18 (inline)
            virtual void do_update();                    // _1C
            virtual void do_update_boundSphere();        // _20
            virtual void _24() = 0;                      // _24
            virtual void _28() = 0;                      // _28
            virtual void _2C() = 0;                      // _2C
            virtual void _30() = 0;                      // _30
            virtual void _34() = 0;                      // _34
            virtual void @32 @__dt();                    // _38 (inline)
            virtual void _3C() = 0;                      // _3C
            virtual void getObject(void*);               // _40 (inline)
            virtual void _44() = 0;                      // _44
            virtual void _48() = 0;                      // _48
            virtual void _4C() = 0;                      // _4C
            virtual void _50() = 0;                      // _50
            virtual void getAt(int);                     // _54 (inline)
            virtual void getTo();                        // _58 (inline)
            virtual void TFlockMgr < get(void*);         // _5C (inline)
            virtual void TFlockMgr < getNext(void*);     // _60 (inline)
            virtual void TFlockMgr < getStart();         // _64 (inline)
            virtual void TFlockMgr < getEnd();           // _68 (inline)
        };
    } // namespace ItemWeed
} // namespace TFlockMgr<Game
} // namespace Game

namespace Game {
struct BaseFlockMgr {
    virtual void _08() = 0;                                    // _08
    virtual void _0C() = 0;                                    // _0C
    virtual void _10() = 0;                                    // _10
    virtual void _14() = 0;                                    // _14
    virtual void _18() = 0;                                    // _18
    virtual void do_update();                                  // _1C
    virtual void do_update_boundSphere();                      // _20
    virtual void doSimpleDraw(Viewport*, J3DModelData**, int); // _24
    virtual void isWeed(int);                                  // _28 (inline)
    virtual void fear(int);                                    // _2C (inline)
};
} // namespace Game

struct CNode {
    virtual void _08() = 0;               // _08
    virtual void _0C() = 0;               // _0C
    virtual void _10() = 0;               // _10
    virtual void _14() = 0;               // _14
    virtual void _18() = 0;               // _18
    virtual void do_update();             // _1C
    virtual void do_update_boundSphere(); // _20
    virtual void _24() = 0;               // _24
    virtual void _28() = 0;               // _28
    virtual void _2C() = 0;               // _2C
    virtual void _30() = 0;               // _30
    virtual void _34() = 0;               // _34
    virtual void @32 @__dt();             // _38 (inline)
    virtual void getChildCount();         // _3C
};

namespace Game {
namespace ItemWeed {
    struct WeedMgr : public Weed >, public BaseFlockMgr, public CNode {
        virtual void do_update();             // _1C
        virtual void do_update_boundSphere(); // _20
        virtual void _30() = 0;               // _30
        virtual void _34() = 0;               // _34
        virtual void @32 @__dt();             // _38 (inline)
        virtual ~WeedMgr();                   // _6C (inline)
    };
} // namespace ItemWeed
} // namespace Game

#endif
