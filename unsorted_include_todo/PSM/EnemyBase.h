#ifndef _PSM_ENEMYBASE_H
#define _PSM_ENEMYBASE_H

/*
        __vt__Q23PSM9EnemyBase:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@16@__dt__Q23PSM9EnemyBaseFv"
        .4byte __dt__Q23PSM9EnemyBaseFv
        .4byte frameEnd_onPlaySe__Q23PSM13CreatureAnimeFv
        .4byte getCastType__Q23PSM9EnemyBaseFv
        .4byte exec__Q23PSM13CreatureAnimeFv
        .4byte getJAIObject__Q23PSM13CreatureAnimeFv
        .4byte onCalcOn__Q23PSM9EnemyBaseFv
        .4byte loopCalc__Q23PSM8CreatureFRQ23PSM12FrameCalcArg
        .4byte startSoundInner__Q23PSM9EnemyBaseFRQ23PSM13StartSoundArg
        .4byte judgeNearWithPlayer__Q23PSM9EnemyBaseFRC3VecRC3Vecff
        .4byte onPlayingSe__Q23PSM8CreatureFUlP8JAISound
        .4byte getHandleArea__Q23PSM13CreatureAnimeFUc
        .4byte 0
        .4byte 0
        .4byte "@48@__dt__Q23PSM9EnemyBaseFv"
        .4byte "@48@startSound__Q23PSM13CreatureAnimeFUlUl"
        .4byte "@48@startSound__Q23PSM13CreatureAnimeFUcUlUl"
        .4byte "@48@startSound__Q23PSM13CreatureAnimeFPP8JAISoundUlUl"
        .4byte stopAllSound__Q27JAInter10ObjectBaseFv
        .4byte stopSound__Q27JAInter10ObjectBaseFUlUl
        .4byte enable__Q27JAInter10ObjectBaseFv
        .4byte disable__Q27JAInter6ObjectFv
        .4byte dispose__Q27JAInter10ObjectBaseFv
        .4byte getFreeSoundHandlePointer__Q27JAInter10ObjectBaseFv
        .4byte getUseSoundHandlePointer__Q27JAInter10ObjectBaseFUl
        .4byte handleStop__13JAIAnimeSoundFUcUl
        .4byte loop__Q27JAInter6ObjectFv
        .4byte
   "@48@playActorAnimSound__Q23PSM13CreatureAnimeFPQ27JAInter5ActorfUc" .4byte
   "@48@startAnimSound__Q23PSM9EnemyBaseFUlPP8JAISoundPQ27JAInter5ActorUc"
        .4byte
   setSpeedModifySound__13JAIAnimeSoundFP8JAISoundP22JAIAnimeFrameSoundDataf
        .4byte startSound__Q23PSM13CreatureAnimeFUlUl
        .4byte startSound__Q23PSM13CreatureAnimeFUcUlUl
        .4byte startSound__Q23PSM13CreatureAnimeFPP8JAISoundUlUl
        .4byte startAnimSound__Q23PSM9EnemyBaseFUlPP8JAISoundPQ27JAInter5ActorUc
        .4byte playActorAnimSound__Q23PSM13CreatureAnimeFPQ27JAInter5ActorfUc
        .4byte onCalcTurnOn__Q23PSM9EnemyBaseFv
        .4byte onCalcTurnOff__Q23PSM9EnemyBaseFv
        .4byte 0
        .4byte 0
        .4byte battleOn__Q23PSM10BattleLinkFv
        .4byte "@184@battleOff__Q23PSM9EnemyBaseFv"
        .4byte 0
        .4byte 0
        .4byte kehaiOn__Q23PSM9KehaiLinkFv
        .4byte kehaiOff__Q23PSM9KehaiLinkFv
        .4byte battleOff__Q23PSM9EnemyBaseFv
        .4byte setKilled__Q23PSM9EnemyBaseFv
        .4byte updateKehai__Q23PSM9EnemyBaseFv
        .4byte updateBattle__Q23PSM9EnemyBaseFv
*/

namespace PSM {
struct CreatureAnime {
    virtual void _00() = 0;                                               // _00
    virtual void _04() = 0;                                               // _04
    virtual void _08() = 0;                                               // _08
    virtual void _0C() = 0;                                               // _0C
    virtual void frameEnd_onPlaySe();                                     // _10
    virtual void _14() = 0;                                               // _14
    virtual void exec();                                                  // _18
    virtual void getJAIObject();                                          // _1C
    virtual void _20() = 0;                                               // _20
    virtual void _24() = 0;                                               // _24
    virtual void _28() = 0;                                               // _28
    virtual void _2C() = 0;                                               // _2C
    virtual void _30() = 0;                                               // _30
    virtual void getHandleArea(unsigned char);                            // _34
    virtual void _38() = 0;                                               // _38
    virtual void _3C() = 0;                                               // _3C
    virtual void _40() = 0;                                               // _40
    virtual void _44() = 0;                                               // _44
    virtual void _48() = 0;                                               // _48
    virtual void _4C() = 0;                                               // _4C
    virtual void _50() = 0;                                               // _50
    virtual void _54() = 0;                                               // _54
    virtual void _58() = 0;                                               // _58
    virtual void _5C() = 0;                                               // _5C
    virtual void _60() = 0;                                               // _60
    virtual void _64() = 0;                                               // _64
    virtual void _68() = 0;                                               // _68
    virtual void _6C() = 0;                                               // _6C
    virtual void _70() = 0;                                               // _70
    virtual void _74() = 0;                                               // _74
    virtual void _78() = 0;                                               // _78
    virtual void _7C() = 0;                                               // _7C
    virtual void startSound(unsigned long, unsigned long);                // _80
    virtual void startSound(unsigned char, unsigned long, unsigned long); // _84
    virtual void startSound(JAISound**, unsigned long, unsigned long);    // _88
    virtual void _8C() = 0;                                               // _8C
    virtual void playActorAnimSound(JAInter::Actor*, float,
                                    unsigned char); // _90

    // _00 VTBL
};
} // namespace PSM

namespace PSM {
struct Creature {
    virtual void _00() = 0;                             // _00
    virtual void _04() = 0;                             // _04
    virtual void _08() = 0;                             // _08
    virtual void _0C() = 0;                             // _0C
    virtual void _10() = 0;                             // _10
    virtual void _14() = 0;                             // _14
    virtual void _18() = 0;                             // _18
    virtual void _1C() = 0;                             // _1C
    virtual void _20() = 0;                             // _20
    virtual void loopCalc(FrameCalcArg&);               // _24
    virtual void _28() = 0;                             // _28
    virtual void _2C() = 0;                             // _2C
    virtual void onPlayingSe(unsigned long, JAISound*); // _30

    // _00 VTBL
};
} // namespace PSM

namespace JAInter {
struct ObjectBase {
    virtual void _00() = 0;                               // _00
    virtual void _04() = 0;                               // _04
    virtual void _08() = 0;                               // _08
    virtual void _0C() = 0;                               // _0C
    virtual void _10() = 0;                               // _10
    virtual void _14() = 0;                               // _14
    virtual void _18() = 0;                               // _18
    virtual void _1C() = 0;                               // _1C
    virtual void _20() = 0;                               // _20
    virtual void _24() = 0;                               // _24
    virtual void _28() = 0;                               // _28
    virtual void _2C() = 0;                               // _2C
    virtual void _30() = 0;                               // _30
    virtual void _34() = 0;                               // _34
    virtual void _38() = 0;                               // _38
    virtual void _3C() = 0;                               // _3C
    virtual void _40() = 0;                               // _40
    virtual void _44() = 0;                               // _44
    virtual void _48() = 0;                               // _48
    virtual void _4C() = 0;                               // _4C
    virtual void stopAllSound();                          // _50
    virtual void stopSound(unsigned long, unsigned long); // _54
    virtual void enable();                                // _58
    virtual void _5C() = 0;                               // _5C
    virtual void dispose();                               // _60
    virtual void getFreeSoundHandlePointer();             // _64
    virtual void getUseSoundHandlePointer(unsigned long); // _68

    // _00 VTBL
};
} // namespace JAInter

namespace JAInter {
struct Object {
    virtual void _00() = 0; // _00
    virtual void _04() = 0; // _04
    virtual void _08() = 0; // _08
    virtual void _0C() = 0; // _0C
    virtual void _10() = 0; // _10
    virtual void _14() = 0; // _14
    virtual void _18() = 0; // _18
    virtual void _1C() = 0; // _1C
    virtual void _20() = 0; // _20
    virtual void _24() = 0; // _24
    virtual void _28() = 0; // _28
    virtual void _2C() = 0; // _2C
    virtual void _30() = 0; // _30
    virtual void _34() = 0; // _34
    virtual void _38() = 0; // _38
    virtual void _3C() = 0; // _3C
    virtual void _40() = 0; // _40
    virtual void _44() = 0; // _44
    virtual void _48() = 0; // _48
    virtual void _4C() = 0; // _4C
    virtual void _50() = 0; // _50
    virtual void _54() = 0; // _54
    virtual void _58() = 0; // _58
    virtual void disable(); // _5C
    virtual void _60() = 0; // _60
    virtual void _64() = 0; // _64
    virtual void _68() = 0; // _68
    virtual void _6C() = 0; // _6C
    virtual void loop();    // _70

    // _00 VTBL
};
} // namespace JAInter

struct JAIAnimeSound {
    virtual void _00() = 0;                                // _00
    virtual void _04() = 0;                                // _04
    virtual void _08() = 0;                                // _08
    virtual void _0C() = 0;                                // _0C
    virtual void _10() = 0;                                // _10
    virtual void _14() = 0;                                // _14
    virtual void _18() = 0;                                // _18
    virtual void _1C() = 0;                                // _1C
    virtual void _20() = 0;                                // _20
    virtual void _24() = 0;                                // _24
    virtual void _28() = 0;                                // _28
    virtual void _2C() = 0;                                // _2C
    virtual void _30() = 0;                                // _30
    virtual void _34() = 0;                                // _34
    virtual void _38() = 0;                                // _38
    virtual void _3C() = 0;                                // _3C
    virtual void _40() = 0;                                // _40
    virtual void _44() = 0;                                // _44
    virtual void _48() = 0;                                // _48
    virtual void _4C() = 0;                                // _4C
    virtual void _50() = 0;                                // _50
    virtual void _54() = 0;                                // _54
    virtual void _58() = 0;                                // _58
    virtual void _5C() = 0;                                // _5C
    virtual void _60() = 0;                                // _60
    virtual void _64() = 0;                                // _64
    virtual void _68() = 0;                                // _68
    virtual void handleStop(unsigned char, unsigned long); // _6C
    virtual void _70() = 0;                                // _70
    virtual void _74() = 0;                                // _74
    virtual void _78() = 0;                                // _78
    virtual void setSpeedModifySound(JAISound*, JAIAnimeFrameSoundData*,
                                     float); // _7C

    // _00 VTBL
};

namespace PSM {
struct BattleLink {
    virtual void _00() = 0;  // _00
    virtual void _04() = 0;  // _04
    virtual void _08() = 0;  // _08
    virtual void _0C() = 0;  // _0C
    virtual void _10() = 0;  // _10
    virtual void _14() = 0;  // _14
    virtual void _18() = 0;  // _18
    virtual void _1C() = 0;  // _1C
    virtual void _20() = 0;  // _20
    virtual void _24() = 0;  // _24
    virtual void _28() = 0;  // _28
    virtual void _2C() = 0;  // _2C
    virtual void _30() = 0;  // _30
    virtual void _34() = 0;  // _34
    virtual void _38() = 0;  // _38
    virtual void _3C() = 0;  // _3C
    virtual void _40() = 0;  // _40
    virtual void _44() = 0;  // _44
    virtual void _48() = 0;  // _48
    virtual void _4C() = 0;  // _4C
    virtual void _50() = 0;  // _50
    virtual void _54() = 0;  // _54
    virtual void _58() = 0;  // _58
    virtual void _5C() = 0;  // _5C
    virtual void _60() = 0;  // _60
    virtual void _64() = 0;  // _64
    virtual void _68() = 0;  // _68
    virtual void _6C() = 0;  // _6C
    virtual void _70() = 0;  // _70
    virtual void _74() = 0;  // _74
    virtual void _78() = 0;  // _78
    virtual void _7C() = 0;  // _7C
    virtual void _80() = 0;  // _80
    virtual void _84() = 0;  // _84
    virtual void _88() = 0;  // _88
    virtual void _8C() = 0;  // _8C
    virtual void _90() = 0;  // _90
    virtual void _94() = 0;  // _94
    virtual void _98() = 0;  // _98
    virtual void _9C() = 0;  // _9C
    virtual void _A0() = 0;  // _A0
    virtual void battleOn(); // _A4

    // _00 VTBL
};
} // namespace PSM

namespace PSM {
struct KehaiLink {
    virtual void _00() = 0;  // _00
    virtual void _04() = 0;  // _04
    virtual void _08() = 0;  // _08
    virtual void _0C() = 0;  // _0C
    virtual void _10() = 0;  // _10
    virtual void _14() = 0;  // _14
    virtual void _18() = 0;  // _18
    virtual void _1C() = 0;  // _1C
    virtual void _20() = 0;  // _20
    virtual void _24() = 0;  // _24
    virtual void _28() = 0;  // _28
    virtual void _2C() = 0;  // _2C
    virtual void _30() = 0;  // _30
    virtual void _34() = 0;  // _34
    virtual void _38() = 0;  // _38
    virtual void _3C() = 0;  // _3C
    virtual void _40() = 0;  // _40
    virtual void _44() = 0;  // _44
    virtual void _48() = 0;  // _48
    virtual void _4C() = 0;  // _4C
    virtual void _50() = 0;  // _50
    virtual void _54() = 0;  // _54
    virtual void _58() = 0;  // _58
    virtual void _5C() = 0;  // _5C
    virtual void _60() = 0;  // _60
    virtual void _64() = 0;  // _64
    virtual void _68() = 0;  // _68
    virtual void _6C() = 0;  // _6C
    virtual void _70() = 0;  // _70
    virtual void _74() = 0;  // _74
    virtual void _78() = 0;  // _78
    virtual void _7C() = 0;  // _7C
    virtual void _80() = 0;  // _80
    virtual void _84() = 0;  // _84
    virtual void _88() = 0;  // _88
    virtual void _8C() = 0;  // _8C
    virtual void _90() = 0;  // _90
    virtual void _94() = 0;  // _94
    virtual void _98() = 0;  // _98
    virtual void _9C() = 0;  // _9C
    virtual void _A0() = 0;  // _A0
    virtual void _A4() = 0;  // _A4
    virtual void _A8() = 0;  // _A8
    virtual void _AC() = 0;  // _AC
    virtual void _B0() = 0;  // _B0
    virtual void kehaiOn();  // _B4
    virtual void kehaiOff(); // _B8

    // _00 VTBL
};
} // namespace PSM

namespace PSM {
struct EnemyBase : public CreatureAnime,
                   public Creature,
                   public ObjectBase,
                   public Object,
                   public JAIAnimeSound,
                   public BattleLink,
                   public KehaiLink {
    virtual void _00() = 0;                       // _00
    virtual void _04() = 0;                       // _04
    virtual void @16 @__dt();                     // _08
    virtual ~EnemyBase();                         // _0C
    virtual void frameEnd_onPlaySe();             // _10
    virtual void getCastType();                   // _14
    virtual void exec();                          // _18
    virtual void getJAIObject();                  // _1C
    virtual void onCalcOn();                      // _20
    virtual void loopCalc(FrameCalcArg&);         // _24
    virtual void startSoundInner(StartSoundArg&); // _28
    virtual void judgeNearWithPlayer(const Vec&, const Vec&, float,
                                     float);               // _2C
    virtual void onPlayingSe(unsigned long, JAISound*);    // _30
    virtual void getHandleArea(unsigned char);             // _34
    virtual void _38() = 0;                                // _38
    virtual void _3C() = 0;                                // _3C
    virtual void @48 @__dt();                              // _40
    virtual void stopAllSound();                           // _50
    virtual void stopSound(unsigned long, unsigned long);  // _54
    virtual void enable();                                 // _58
    virtual void disable();                                // _5C
    virtual void dispose();                                // _60
    virtual void getFreeSoundHandlePointer();              // _64
    virtual void getUseSoundHandlePointer(unsigned long);  // _68
    virtual void handleStop(unsigned char, unsigned long); // _6C
    virtual void loop();                                   // _70
    virtual void @48 @startAnimSound(unsigned long, JAISound**, JAInter::Actor*,
                                     unsigned char); // _78
    virtual void setSpeedModifySound(JAISound*, JAIAnimeFrameSoundData*,
                                     float);                              // _7C
    virtual void startSound(unsigned long, unsigned long);                // _80
    virtual void startSound(unsigned char, unsigned long, unsigned long); // _84
    virtual void startSound(JAISound**, unsigned long, unsigned long);    // _88
    virtual void startAnimSound(unsigned long, JAISound**, JAInter::Actor*,
                                unsigned char); // _8C
    virtual void playActorAnimSound(JAInter::Actor*, float,
                                    unsigned char); // _90
    virtual void onCalcTurnOn();                    // _94
    virtual void onCalcTurnOff();                   // _98
    virtual void _9C() = 0;                         // _9C
    virtual void _A0() = 0;                         // _A0
    virtual void battleOn();                        // _A4
    virtual void @184 @battleOff();                 // _A8
    virtual void _AC() = 0;                         // _AC
    virtual void _B0() = 0;                         // _B0
    virtual void kehaiOn();                         // _B4
    virtual void kehaiOff();                        // _B8
    virtual void battleOff();                       // _BC
    virtual void setKilled();                       // _C0
    virtual void updateKehai();                     // _C4
    virtual void updateBattle();                    // _C8

    // _00 VTBL
};
} // namespace PSM

#endif
