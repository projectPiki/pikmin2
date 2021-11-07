#ifndef _GAME_P2JST_OBJECTSYSTEM_H
#define _GAME_P2JST_OBJECTSYSTEM_H

namespace JStage {
struct TSystem {
    virtual void _00() = 0;                                             // _00
    virtual void JSGFGetType() const;                                   // _04
    virtual void _08() = 0;                                             // _08
    virtual void _0C() = 0;                                             // _0C
    virtual void _10() = 0;                                             // _10
    virtual void _14() = 0;                                             // _14
    virtual void _18() = 0;                                             // _18
    virtual void _1C() = 0;                                             // _1C
    virtual void _20() = 0;                                             // _20
    virtual void _24() = 0;                                             // _24
    virtual void _28() = 0;                                             // _28
    virtual void _2C() = 0;                                             // _2C
    virtual void _30() = 0;                                             // _30
    virtual void _34() = 0;                                             // _34
    virtual void JSGCreateObject(const char*, TEObject, unsigned long); // _38
    virtual void JSGDestroyObject(TObject*);                            // _3C
    virtual void JSGGetSystemData(unsigned long);                       // _40
    virtual void JSGSetSystemData(unsigned long, unsigned long);        // _44

    // _00 VTBL
};
} // namespace JStage

namespace JStage {
struct TObject {
    virtual void _00() = 0;                                             // _00
    virtual void _04() = 0;                                             // _04
    virtual void _08() = 0;                                             // _08
    virtual void JSGUpdate();                                           // _0C
    virtual void _10() = 0;                                             // _10
    virtual void _14() = 0;                                             // _14
    virtual void JSGGetData(unsigned long, void*, unsigned long) const; // _18
    virtual void _1C() = 0;                                             // _1C
    virtual void JSGGetParent(TObject**, unsigned long*) const;         // _20
    virtual void JSGSetParent(TObject*, unsigned long);                 // _24
    virtual void JSGSetRelation(bool, TObject*, unsigned long);         // _28
    virtual void JSGFindNodeID(const char*) const;                      // _2C
    virtual void JSGGetNodeTransformation(unsigned long,
                                          float (*)[4]) const; // _30

    // _00 VTBL
};
} // namespace JStage

namespace Game {
namespace P2JST {
    struct ObjectBase {
        virtual void _00() = 0;                                  // _00
        virtual void _04() = 0;                                  // _04
        virtual void _08() = 0;                                  // _08
        virtual void _0C() = 0;                                  // _0C
        virtual void _10() = 0;                                  // _10
        virtual void _14() = 0;                                  // _14
        virtual void _18() = 0;                                  // _18
        virtual void _1C() = 0;                                  // _1C
        virtual void _20() = 0;                                  // _20
        virtual void _24() = 0;                                  // _24
        virtual void _28() = 0;                                  // _28
        virtual void _2C() = 0;                                  // _2C
        virtual void _30() = 0;                                  // _30
        virtual void _34() = 0;                                  // _34
        virtual void _38() = 0;                                  // _38
        virtual void _3C() = 0;                                  // _3C
        virtual void _40() = 0;                                  // _40
        virtual void _44() = 0;                                  // _44
        virtual void _48() = 0;                                  // _48
        virtual void _4C() = 0;                                  // _4C
        virtual void _50() = 0;                                  // _50
        virtual void _54() = 0;                                  // _54
        virtual void _58() = 0;                                  // _58
        virtual void _5C() = 0;                                  // _5C
        virtual void parseUserData_(unsigned long, const void*); // _60

        // _00 VTBL
    };
} // namespace P2JST
} // namespace Game

namespace Game {
namespace P2JST {
    struct ObjectSystem : public TSystem, public TObject, public ObjectBase {
        virtual ~ObjectSystem();                // _00
        virtual void JSGFGetType() const;       // _04
        virtual void JSGGetName() const;        // _08
        virtual void JSGUpdate();               // _0C
        virtual void JSGGetFlag() const;        // _10
        virtual void JSGSetFlag(unsigned long); // _14
        virtual void JSGGetData(unsigned long, void*,
                                unsigned long) const; // _18
        virtual void JSGSetData(unsigned long, const void*,
                                unsigned long);                     // _1C
        virtual void JSGGetParent(TObject**, unsigned long*) const; // _20
        virtual void JSGSetParent(TObject*, unsigned long);         // _24
        virtual void JSGSetRelation(bool, TObject*, unsigned long); // _28
        virtual void JSGFindNodeID(const char*) const;              // _2C
        virtual void JSGGetNodeTransformation(unsigned long,
                                              float (*)[4]) const; // _30
        virtual void JSGFindObject(JStage::TObject**, const char*,
                                   JStage::TEObject) const; // _34
        virtual void JSGCreateObject(const char*, TEObject,
                                     unsigned long);                 // _38
        virtual void JSGDestroyObject(TObject*);                     // _3C
        virtual void JSGGetSystemData(unsigned long);                // _40
        virtual void JSGSetSystemData(unsigned long, unsigned long); // _44
        virtual void _48() = 0;                                      // _48
        virtual void _4C() = 0;                                      // _4C
        virtual void @4 @reset();                                    // _50
        virtual void @4 @update();                                   // _54
        virtual void @4 @start();                                    // _58
        virtual void @4 @stop();                                     // _5C
        virtual void parseUserData_(unsigned long, const void*);     // _60
        virtual void reset();                                        // _64
        virtual void update();                                       // _68
        virtual void entry();                                        // _6C
        virtual void start();                                        // _70
        virtual void stop();                                         // _74
        virtual void _78() = 0;                                      // _78

        // _00 VTBL
    };
} // namespace P2JST
} // namespace Game

#endif
