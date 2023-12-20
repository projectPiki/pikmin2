#ifndef _PARTICLEID_H
#define _PARTICLEID_H

/**
 * Particle ID define list for efx headers, for game.jpc
 * - IDs are u16s.
 * - TODO: make define list for cutscene effects.
 */

/////////////////////////////////////////
// 2D EFFECTS
#define PID_2DCursor (0x00)

#define PID_RocketA (0x01)

#define PID_BattleDive_1 (0x02)
#define PID_BattleDive_2 (0x03)
#define PID_BattleDive_3 (0x04)

#define PID_ChalDive    (0x05)
#define PID_ChalDiveEnd (0x06)

#define PID_Changesmoke (0x07)

#define PID_ExtractUp (0x09)

#define PID_Cavecomp_1 (0x0A)
#define PID_Cavecomp_2 (0x0B)

#define PID_Cavecomp_Loop (0x0C)

#define PID_GoBatl_1 (0x0D)
#define PID_GoBatl_2 (0x0E)
#define PID_GoBatl_3 (0x0F)

#define PID_GoChal_1 (0x10)
#define PID_GoChal_2 (0x11)

#define PID_2DCvnameCave_1 (0x12)
#define PID_2DCvnameCave_2 (0x13)
#define PID_2DCvnameCave_3 (0x14)

#define PID_2DCvnameChal (0x15)

#define PID_2DCvnameVs_1 (0x16)
#define PID_2DCvnameVs_2 (0x17)

#define PID_SensorAct_1 (0x18)
#define PID_SensorAct_2 (0x19)

#define PID_SensorGet_1 (0x1A)
#define PID_SensorGet_2 (0x1B)
#define PID_SensorGet_3 (0x1C)

#define PID_OtaKantei_1 (0x1D)
#define PID_OtaKantei_2 (0x1E)
#define PID_OtaKantei_3 (0x1F)
#define PID_OtaKantei_4 (0x20)
#define PID_OtaKantei_5 (0x21)

#define PID_SpraySet_1 (0x22)
#define PID_SpraySet_2 (0x23)

#define PID_SensorComp_1 (0x24)
#define PID_SensorComp_2 (0x25)

/////////////////////////////////////////
// 3D EFFECTS

#define PID_BabaFly  (0x000) // doodlebug flies
#define PID_BabaHe_1 (0x001) // doodlebug short fart
#define PID_BabaHe_2 (0x002) // doodlebug longer fart

#define PID_BabyBecha (0x003) // bulborb larva splat
#define PID_BabyBorn  (0x004) // bulborb larva born

#define PID_BarrelDead_1 (0x005) // plug destroyed dust
#define PID_BarrelDead_2 (0x006) // plug destroyed rocks
#define PID_BarrelDead_3 (0x007) // plug destroyed many rocks

#define PID_BombrockABCD_1 (0x008) // bomb rock explosion fragments
#define PID_BombrockABCD_2 (0x009) // bomb rock explosion boom
#define PID_BombrockABCD_3 (0x00A) // bomb rock explosion cloud
#define PID_BombrockABCD_4 (0x00B) // bomb rock explosiion sparks
#define PID_BombrockEFGH_1 (0x00C) // bomb rock explosion cloud circle
#define PID_BombrockEFGH_2 (0x00D) // bomb rock explosion dust
#define PID_BombrockEFGH_3 (0x00E) // bomb rock explosion shockwave 1
#define PID_BombrockEFGH_4 (0x00F) // bomb rock explosion shockwave 2

#define PID_BridgeAttack (0x010) // pikmin attacking bridge
#define PID_BridgeSet    (0x011) // bridge stage breaking

#define PID_BSaraiDead_1 (0x012) // dirigibug dead wind
#define PID_BSaraiDead_2 (0x013) // dirigibug dead sparks
#define PID_BSaraiSupli  (0x014) // dirigibug create bomb

#define PID_ChouDown_1 (0x015) // purple spectralid death
#define PID_ChouDown_2 (0x016) // red spectralid death
#define PID_ChouDown_3 (0x017) // yellow spectralid death
#define PID_ChouHit    (0x018) // spectralid hit

#define PID_Cursor_NULL      (0x000) // whistle for fuefuki/non-captains
#define PID_Cursor_Default   (0x019) // default whistle = olimar
#define PID_Cursor_Olimar    (0x019) // whistle 1
#define PID_Cursor_Louie     (0x01A) // whistle 2, Louie and president have their own whistle colors that dont get used
#define PID_Cursor_President (0x01B) // whistle 3

#define PID_DamaDeadBomb    (0x01C) // beady long legs fireworks
#define PID_DamaDeadElecA   (0x01D) // beady long legs electricity 1
#define PID_DamaDeadElecB   (0x01E) // beady long legs electricity 2
#define PID_DamaDeadHahenA  (0x01F) // beady long legs dead fragments 1
#define PID_DamaDeadHahenB  (0x020) // beady long legs dead fragments 2
#define PID_DamaDeadHahenC1 (0x021) // beady long legs dead fragments 3
#define PID_DamaDeadHahenC2 (0x022) // beady long legs dead fragments 4
#define PID_DamaFootW       (0x023) // beady long legs foot water splash
#define PID_DamaFoot_1      (0x024) // beady long legs foot stomp
#define PID_DamaFoot_2      (0x025) // beady long legs foot stomp dust
#define PID_DamaHahen       (0x026) // beady long legs fragments
#define PID_DamaSmoke       (0x027) // beady long legs low HP smoke
#define PID_DamaWalkW_1     (0x028) // beady long legs water ripples
#define PID_DamaWalkW_2     (0x029) // beady long legs water stomp splash 1
#define PID_DamaWalkW_3     (0x02A) // beady long legs water stomp splash 2
#define PID_DamaWalk_1      (0x02B) // beady long legs stomp big dust
#define PID_DamaWalk_2      (0x02C) // beady long legs stomp ripples

#define PID_DenkiHiba_1   (0x02D) // electric wire glow
#define PID_DenkiHiba_2   (0x02E) // electric wire active line
#define PID_DenkiHiba_3   (0x02F) // electric wire charge sparks
#define PID_DenkiPole_1   (0x030) // electric wire node glow
#define PID_DenkiPole_2   (0x031) // electric wire node sparks
#define PID_DenkiPoleSign (0x032) // electric wire sparks 2

#define PID_DnkmsHoudenA  (0x033) // anode beetle charge glow
#define PID_DnkmsHoudenB  (0x034) // anode beetle charge sparks
#define PID_DnkmsThunderA (0x035) // anode beetle zap electricity
#define PID_DnkmsThunderB (0x036) // anode beetle zap glow/sparks

#define PID_DownF1On      (0x037) // small seesaw rising
#define PID_DownF1Updown  (0x038) // small seesaw moving
#define PID_DownF1WOn     (0x039) // small seesaw rising (water)
#define PID_DownF1WUpdown (0x03A) // small seesaw moving (water)

#define PID_DownF2On      (0x03B) // large seesaw rising
#define PID_DownF2Updown  (0x03C) // large seesaw moving
#define PID_DownF2WOn     (0x03D) // large seesaw rising (water)
#define PID_DownF2WUpdown (0x03E) // large seesaw moving (water)

#define PID_DownF3On      (0x03F) // paper bag rising
#define PID_DownF3Updown  (0x040) // paper bag moving
#define PID_DownF3WOn     (0x041) // paper bag rising (water)
#define PID_DownF3WUpdown (0x042) // paper bag moving (water)

#define PID_DopingSmoke_1 (0x043) // leader using bitter spray
#define PID_DopingSmoke_2 (0x044) // leader using spicy spray 1
#define PID_DopingSmoke_3 (0x045) // leader using spicy spray 2

#define PID_EgateA   (0x046) // electric gate electricity 1
#define PID_EgateBC1 (0x047) // electric gate electricity 2
#define PID_EgateBC2 (0x048) // electric gate electricity 3

#define PID_EggDown (0x049) // egg broken

#define PID_EnemyBombM_1 (0x04A) // enemy Bomb medium 1?
#define PID_EnemyBombM_2 (0x04B) // enemy Bomb medium 2?
#define PID_EnemyBombM_3 (0x04C) // enemy Bomb medium 3?
#define PID_EnemyBombM_4 (0x04D) // enemy Bomb medium 4?
#define PID_EnemyBombS_1 (0x04E) // enemy Bomb small 1?
#define PID_EnemyBombS_2 (0x04F) // enemy Bomb small 2?
#define PID_EnemyBombS_3 (0x050) // enemy Bomb small 3?
#define PID_EnemyBombS_4 (0x051) // enemy Bomb small 4?

#define PID_EnemyDead (0x052) // enemy soul/ghost

#define PID_EnemyDownSmoke (0x053) // ?
#define PID_EnemyDownWat_1 (0x054) // ?
#define PID_EnemyDownWat_2 (0x055) // ?
#define PID_EnemyDownWat_3 (0x056) // ?

#define PID_EnemyHamonM    (0x057) // ?
#define PID_EnemyHamonMInd (0x058) // ?

#define PID_EnemyWalkSmokeS (0x059) // enemy Walking dust
#define PID_EnemyWalkSmokeM (0x05A) // big enemy Walk dust

#define PID_ForestSakura (0x05B) // awakening wood falling petals

#define PID_FrogDive_1     (0x05C) // yellow wollywog dive 1?
#define PID_FrogDive_2     (0x05D) // yellow wollywog dive 2?
#define PID_FrogDive_3     (0x05E) // yellow wollywog dive 3?
#define PID_FrogDive_4     (0x05F) // yellow wollywog dive 4?
#define PID_FrogLandDrop_1 (0x060) // yellow wollywog land drop 1
#define PID_FrogLandDrop_2 (0x061) // yellow wollywog land drop 2
#define PID_FrogPota       (0x062) // yellow wollywog pota?

#define PID_FruitsDownP_1 (0x063) // bitter berry burst 1?
#define PID_FruitsDownP_2 (0x064) // bitter berry burst 2?
#define PID_FruitsDownR_1 (0x065) // spicy berry burst 1?
#define PID_FruitsDownR_2 (0x066) // spicy berry burst 2?

#define PID_FueActBiri_1 (0x067) // leader whistle beam 1
#define PID_FueActBiri_2 (0x068) // leader whistle beam 2
#define PID_FueActCircle (0x069) // leader whistle rainbow disc

#define PID_WhistleFuebug (0x06A) // antenna beetle whistle
#define PID_FueBugOnpa    (0x06B) // antenna beetle?

#define PID_FusenAirHit_Mar_1 (0x06C) // puffy blowhog white air
#define PID_FusenAirHit_Mar_2 (0x06D) // puffy blowhog dust cloud
#define PID_FusenAir_Mar_1    (0x06E) // puffy blowhog blow air short
#define PID_FusenAir_Mar_2    (0x06F) // puffy blowhog blow air long
#define PID_FusenAir_Mar_3    (0x070) // puffy blowhog blow air circles
#define PID_FusenDead_1       (0x071) // puffy blowhog death 1?
#define PID_FusenDead_2       (0x072) // puffy blowhog death 2?
#define PID_FusenSui          (0x073) // puffy blowhog?

#define PID_GasuHiba_1 (0x074) // gas pipe 1
#define PID_GasuHiba_2 (0x075) // gas pipe 2

#define PID_Gate1Attack_1   (0x076) // gate 1 attack 1 (white?)
#define PID_Gate1Attack_2   (0x077) // gate 1 attack 2 (white?)
#define PID_Gate1Down_1     (0x078) // gate 1 down 1 (white?)
#define PID_Gate1Down_2     (0x079) // gate 1 down 2 (white?)
#define PID_Gate2Attack_1   (0x07A) // gate 2 attack 1 (black?)
#define PID_Gate2Attack_2   (0x07B) // gate 2 attack 2 (black?)
#define PID_Gate2Down_1     (0x07C) // gate 2 down 1 (black?)
#define PID_Gate2Down_2     (0x07D) // gate 2 down 2 (black?)
#define PID_PKS_Gate3Attack (0x07E) // attack gate 3

#define PID_GeyserAct_1  (0x07F) // active geyser steam
#define PID_GeyserAct_2  (0x080) // active geyser water
#define PID_GeyserAct_3  (0x081) // active geyser water top
#define PID_GeyserSet_1  (0x082) // clogged geyser water drops
#define PID_GeyserSet_2  (0x083) // clogged geyser steam
#define PID_Geyser_UNK_1 (0x084) // small geyser water?
#define PID_Geyser_UNK_2 (0x085) // small geyser water top?
#define PID_Geyser_UNK_3 (0x086) // small geyser steam?
#define PID_Geyser_UNK_4 (0x087) // small geyser water jet?
#define PID_Geyser_UNK_5 (0x088) // small geyser water jet top?

#define PID_UNK_89 (0x089) // unknown
#define PID_UNK_8A (0x08A) // unknown

#define PID_HanachoN (0x08B) // bulborb snot bubble
#define PID_HanachoY (0x08C) // fiery bulblax snot bubble

#define PID_HDamaHit1_1  (0x08D) // man at legs ??
#define PID_HDamaHit1_2  (0x08E) // man at legs ??
#define PID_HDamaHit1_3  (0x08F) // man at legs ??
#define PID_HDamaHit1_4  (0x090) // man at legs ??
#define PID_HDamaHit2W_1 (0x091) // man at legs ??
#define PID_HDamaHit2W_2 (0x092) // man at legs ??
#define PID_HDamaHit2W_3 (0x093) // man at legs ??
#define PID_HDamaHit2_1  (0x094) // man at legs ??
#define PID_HDamaHit2_2  (0x095) // man at legs ??
#define PID_HDamaHit2_3  (0x096) // man at legs ??
#define PID_HDamaHit3_1  (0x097) // man at legs ??
#define PID_HDamaHit3_2  (0x098) // man at legs ??
#define PID_HDamaHit3_3  (0x099) // man at legs ??
#define PID_HDamaHit3_4  (0x09A) // man at legs ??
#define PID_HDamaShell   (0x09B) // man at legs ??
#define PID_HDamaShootA  (0x09C) // man at legs ??
#define PID_HDamaShoot_1 (0x09D) // man at legs ??
#define PID_HDamaShoot_2 (0x09E) // man at legs ??
#define PID_HDamaSight   (0x09F) // man at legs ??

#define PID_HebiAphd_Dive_1 (0x0A0) // snagret/cannon beetle dive 1
#define PID_HebiAphd_Dive_2 (0x0A1) // snagret/cannon beetle dive 2
#define PID_HebiAphd_Dive_3 (0x0A2) // snagret/cannon beetle dive 3
#define PID_HebiAphd_Dive_4 (0x0A3) // snagret/cannon beetle dive 4
#define PID_HebiDead_1      (0x0A4) // snagret dead 1
#define PID_HebiDead_2      (0x0A5) // snagret dead 2
#define PID_HebiDead_3      (0x0A6) // snagret dead 3
#define PID_HebiDead_4      (0x0A7) // snagret dead 4
#define PID_HebiDeadHane    (0x0A8) // snagret dead ??
#define PID_HebiROT         (0x0A9) // snagret rotate?
#define PID_HebiWAIT        (0x0AA) // snagret wait?

#define PID_HibaFire_1 (0x0AB) // fire geyser 1
#define PID_HibaFire_2 (0x0AC) // fire geyser 2
#define PID_HibaFire_3 (0x0AD) // fire geyser 3
#define PID_HibaFire_4 (0x0AE) // fire geyser 4

#define PID_WarpZone_1 (0x0AF) // overworld cave small fog around hole
#define PID_WarpZone_2 (0x0B0) // overworld cave light rays
#define PID_WarpZone_3 (0x0B1) // overworld cave mist
#define PID_WarpZone_4 (0x0B2) // overworld cave fog

#define PID_HoneyDownB (0x0B3) // bitter drop splash on ground
#define PID_HoneyDownR (0x0B4) // spicy drop splash on ground
#define PID_HoneyDownY (0x0B5) // nectar drop splash on ground

#define PID_ImoEat_1 (0x0B6) // whiskerpillar break berry 1
#define PID_ImoEat_2 (0x0B7) // whiskerpillar break berry 2
#define PID_ImoSmoke (0x0B8) // whiskerpillar smoke ?

#define PID_JgmAttack_1  (0x0B9) // hermit crawmad attack 1
#define PID_JgmAttack_2  (0x0BA) // hermit crawmad attack 2
#define PID_JgmAttackW_1 (0x0BB) // hermit crawmad attack water 1
#define PID_JgmAttackW_2 (0x0BC) // hermit crawmad attack water 2
#define PID_JgmAttackW_3 (0x0BD) // hermit crawmad attack water 3
#define PID_JgmBACK      (0x0BE) // hermit crawmad return ??
#define PID_JgmBACKW_1   (0x0BF) // hermit crawmad return water 1 ?
#define PID_JgmBACKW_2   (0x0C0) // hermit crawmad return water 2 ?
#define PID_JgmBUBBLE    (0x0C1) // hermit crawmad underwater bubbles

#define PID_KabutoAttack (0x0C2) // cannon beetle attack ?

#define PID_KoganeDive_1 (0x0C3) // (flint) beetle bury 1
#define PID_KoganeDive_2 (0x0C4) // (flint) beetle bury 2
#define PID_KoganeHit_1  (0x0C5) // (flint) beetle hit 1
#define PID_KoganeHit_2  (0x0C6) // (flint) beetle hit 2

#define PID_Kouhai1_1    (0x0C7) // falling boulder ??
#define PID_Kouhai1_2    (0x0C8) // falling boulder ??
#define PID_Kouhai2_1    (0x0C9) // falling boulder ??
#define PID_Kouhai2_2    (0x0CA) // falling boulder ??
#define PID_Kouhai3_1    (0x0CB) // falling boulder ??
#define PID_Kouhai3_2    (0x0CC) // falling boulder ??
#define PID_KouhaiDamage (0x0CD) // falling boulder ??
#define PID_UNK_CE       (0x0CE) // unknown, probably boulder related?
#define PID_UNK_CF       (0x0CF) // unknown, probably boulder related?
#define PID_KouhaiFuku_1 (0x0D0) // falling boulder ??
#define PID_KouhaiFuku_2 (0x0D1) // falling boulder ??

#define PID_KurageBomb_1  (0x0D2) // greater jellyfloat death 1?
#define PID_KurageBomb_2  (0x0D3) // greater jellyfloat death 2?
#define PID_KurageDeadRun (0x0D4) // greater jellyfloat death run?
#define PID_KurageEye     (0x0D5) // greater jellyfloat ??
#define PID_KurageFlick   (0x0D6) // greater jellyfloat flick
#define PID_KurageGepu    (0x0D7) // greater jellyfloat ??
#define PID_KurageHire_1  (0x0D8) // greater jellyfloat ??
#define PID_KurageHire_2  (0x0D9) // greater jellyfloat ??
#define PID_KurageHire_3  (0x0DA) // greater jellyfloat ??
#define PID_KurageKira    (0x0DB) // greater jellyfloat sparkles?
#define PID_KurageSui_1   (0x0DC) // greater jellyfloat ??
#define PID_KurageSui_2   (0x0DD) // greater jellyfloat ??

#define PID_OrimaLight_Loozy_1    (0x0DE) // louie light (star shape)
#define PID_OrimaLightAct_Loozy_1 (0x0DF) // louie light whistle 1
#define PID_OrimaLightAct_Loozy_2 (0x0E0) // louie light whistle 2
#define PID_OrimaLight_Loozy_2    (0x0E1) // louie light (trail/base)

#define PID_NewKurageBomb_1  (0x0E2) // lesser jellyfloat death 1?
#define PID_NewKurageBomb_2  (0x0E3) // lesser jellyfloat death 2?
#define PID_NewKurageDeadRun (0x0E4) // lesser jellyfloat death run?
#define PID_NewKurageEye     (0x0E5) // lesser jellyfloat ??
#define PID_NewKurageFlick   (0x0E6) // lesser jellyfloat flick
#define PID_NewKurageHire_1  (0x0E7) // lesser jellyfloat ??
#define PID_NewKurageHire_2  (0x0E8) // lesser jellyfloat ??
#define PID_NewKurageHire_3  (0x0E9) // lesser jellyfloat ??
#define PID_NewKurageKira    (0x0EA) // lesser jellyfloat sparkles?
#define PID_NewKurageSui_1   (0x0EB) // lesser jellyfloat ??
#define PID_NewKurageSui_2   (0x0EC) // lesser jellyfloat ??

#define PID_ODamaDeadHahenA  (0x0ED) // raging long legs (fragments 1?)
#define PID_ODamaDeadHahenB  (0x0EE) // raging long legs (fragments 2?)
#define PID_ODamaDeadHahenC1 (0x0EF) // raging long legs (fragments 3?)
#define PID_ODamaDeadHahenC2 (0x0F0) // raging long legs (fragments 4?)
#define PID_ODamaFoot        (0x0F1) // raging long legs (stomp dust?)
#define PID_ODamaFur1        (0x0F2) // raging long legs fur 1
#define PID_ODamaFur2        (0x0F3) // raging long legs fur 2
#define PID_ODamaHahen       (0x0F4) // raging long legs (fragments?)
#define PID_ODamaWalk_1      (0x0F5) // raging long legs (walk 1?)
#define PID_ODamaWalk_2      (0x0F6) // raging long legs (walk 2?)

#define PID_UNK_F7 (0x0F7) // unknown

#define PID_ContainerAct_Blue_1   (0x0F8) // interactable blue onion beam 1
#define PID_ContainerAct_Blue_2   (0x0F9) // interactable blue onion beam 2
#define PID_ContainerAct_Red_1    (0x0FA) // interactable red onion beam 1
#define PID_ContainerAct_Red_2    (0x0FB) // interactable red onion beam 2
#define PID_ContainerAct_Yellow_1 (0x0FC) // interactable yellow onion beam 1
#define PID_ContainerAct_Yellow_2 (0x0FD) // interactable yellow onion beam 2

#define PID_OnyonEatAB_1  (0x0FE) // onion suck 1?
#define PID_OnyonEatAB_2  (0x0FF) // onion suck 2?
#define PID_OnyonEatC     (0x100) // onion suck 3?
#define PID_OnyonLay_1    (0x101) // onion release seed 1?
#define PID_OnyonLay_2    (0x102) // onion release seed 2?
#define PID_OnyonPuffKira (0x103) // onion no seeds sparkles?
#define PID_OnyonPuffPuff (0x104) // onion no seeds puff?

#define PID_Container_Blue   (0x105) // blue onion beacon base
#define PID_Container_Red    (0x106) // red onion beacon base
#define PID_Container_Yellow (0x107) // yellow onion beacon base

#define PID_OoOtaElec_1  (0x108) // titan dweevil elec glow
#define PID_OoOtaElec_2  (0x109) // titan dweevil elec sparks
#define PID_OoOtaElec_3  (0x10A) // titan dweevil elec sparks long
#define PID_OoOtaElecLeg (0x10B) // titan dweevil elec bolts

#define PID_OoOtaFire_1 (0x10C) // titan dweevil fire blue/black flames
#define PID_OoOtaFire_2 (0x10D) // titan dweevil fire blue/red flames
#define PID_OoOtaFire_3 (0x10E) // titan dweevil fire glow
#define PID_OoOtaFire_4 (0x10F) // titan dweevil fire white flames
#define PID_OoOtaFire_5 (0x110) // titan dweevil fire heat distortion

#define PID_OoOtaFoot_1 (0x111) // titan dweevil foot 1 ?
#define PID_OoOtaFoot_2 (0x112) // titan dweevil foot 2 ?

#define PID_OoOtaGas_1 (0x113) // titan dweevil gas cloud
#define PID_OoOtaGas_2 (0x114) // titan dweevil gas ripples

#define PID_OoOtaWalk_1 (0x115) // titan dweevil walk 1 ?
#define PID_OoOtaWalk_2 (0x116) // titan dweevil walk 2 ?

#define PID_OoOtaWbomb_1  (0x117) // titan dweevil water big bubble
#define PID_OoOtaWbomb_2  (0x118) // titan dweevil water small bubbles
#define PID_OoOtaWbomb_3  (0x119) // titan dweevil water white bubble
#define PID_OoOtaWbomb_4  (0x11A) // titan dweevil water splash
#define PID_OoOtaWbHit_1  (0x11B) // titan dweevil water hit 1?
#define PID_OoOtaWbHit_2  (0x11C) // titan dweevil water hit 2?
#define PID_OoOtaWbHit_3  (0x11D) // titan dweevil water hit 3?
#define PID_OoOtaWbHit_4  (0x11E) // titan dweevil water hit 4?
#define PID_OoOtaWbShot_1 (0x11F) // titan dweevil water shot 1?
#define PID_OoOtaWbShot_2 (0x120) // titan dweevil water shot 2?

#define PID_OrimaDamage_1 (0x121) // leader damage 1
#define PID_OrimaDamage_2 (0x122) // leader damage 2

#define PID_OrimaLight_Orima_1    (0x123) // olimar light (star shape)
#define PID_OrimaLightAct_Orima_1 (0x124) // olimar light whistle 1
#define PID_OrimaLightAct_Orima_2 (0x125) // olimar light whistle 2
#define PID_OrimaLight_Orima_2    (0x126) // olimar light (trail/base)

#define PID_OtakaraApL_1 (0x127) // OtakaraBase large particles 1?
#define PID_OtakaraApL_2 (0x128) // OtakaraBase large particles 2?
#define PID_OtakaraApL_3 (0x129) // OtakaraBase large particles 3?
#define PID_OtakaraApS_1 (0x12A) // OtakaraBase small particles 1?
#define PID_OtakaraApS_2 (0x12B) // OtakaraBase small particles 2?

#define PID_OtaChargeelec_1 (0x12C) // anode dweevil charge 1
#define PID_OtaChargeelec_2 (0x12D) // anode dweevil charge 2
#define PID_OtaChargefire_1 (0x12E) // fiery dweevil charge 1
#define PID_OtaChargefire_2 (0x12F) // fiery dweevil charge 2
#define PID_OtaChargegas_1  (0x130) // munge dweevil charge 1
#define PID_OtaChargegas_2  (0x131) // munge dweevil charge 2
#define PID_OtaChargewat_1  (0x132) // caustic dweevil charge 1
#define PID_OtaChargewat_2  (0x133) // caustic dweevil charge 2

#define PID_OtaElec_1 (0x134) // anode dweevil attack 1
#define PID_OtaElec_2 (0x135) // anode dweevil attack 2
#define PID_OtaElec_3 (0x136) // anode dweevil attack 3
#define PID_OtaFire_1 (0x137) // fiery dweevil attack 1
#define PID_OtaFire_2 (0x138) // fiery dweevil attack 2
#define PID_OtaFire_3 (0x139) // fiery dweevil attack 3
#define PID_OtaFire_4 (0x13A) // fiery dweevil attack 4
#define PID_OtaFire_5 (0x13B) // fiery dweevil attack 5
#define PID_OtaGas_1  (0x13C) // munge dweevil attack 1
#define PID_OtaGas_2  (0x13D) // munge dweevil attack 2
#define PID_OtaWat_1  (0x13E) // caustic dweevil attack 1
#define PID_OtaWat_2  (0x13F) // caustic dweevil attack 2
#define PID_OtaWat_3  (0x140) // caustic dweevil attack 3
#define PID_OtaWat_4  (0x141) // caustic dweevil attack 4

#define PID_PelKira_1 (0x142) // pellet sparkles 1?
#define PID_PelKira_2 (0x143) // pellet sparkles 2?
#define PID_PelKira_3 (0x144) // pellet sparkles 3?
#define PID_PelKira_4 (0x145) // pellet sparkles 4?

#define PID_PkAp_1 (0x146) // pikmin ?
#define PID_PkAp_2 (0x147) // pikmin ?

#define PID_PikiDamage (0x148) // pikmin damage?

#define PID_PkAttackDP      (0x149) // pikmin attack?
#define PID_PkBlackDown     (0x14A) // pikmin ?
#define PID_PkBlackDrop_1   (0x14B) // pikmin ?
#define PID_PkBlackDrop_2   (0x14C) // pikmin ?
#define PID_PkBlackDrop_3   (0x14D) // pikmin ?
#define PID_PkS_Chinka_1    (0x14E) // pikmin fire extinguishing
#define PID_PkS_Chinka_2    (0x14F) // pikmin fire extinguishing outwards circle
#define PID_PkS_Chiru       (0x150) // pikmin deflowering white petals
#define PID_PkS_ChiruRed    (0x151) // pikmin deflowering pink petals
#define PID_PkToeChudoku    (0x152) // pikmin poisoned gas
#define PID_PkS_Dead_Purple (0x153) // purple pikmin soul/ghost
#define PID_PkS_Dead_Blue   (0x154) // blue pikmin soul/ghost
#define PID_PkS_Dead_Red    (0x155) // red pikmin soul/ghost
#define PID_PkS_Dead_White  (0x156) // white pikmin soul/ghost
#define PID_PkS_Dead_Yellow (0x157) // yellow pikmin soul/ghost
#define PID_PkS_Dig         (0x158) // pikmin digging

#define PID_EnemyDive_1 (0x159) // enemy dive 1?
#define PID_EnemyDive_2 (0x15A) // enemy dive 2?

#define PID_PkToeDoping        (0x15B) // pikmin doped with spicy spray
#define PID_PkS_Gedoku_1       (0x15C) // pikmin poison extinguishing
#define PID_PkS_Gedoku_2       (0x15D) // pikmin poison extinguishing outwards circle
#define PID_PkGlow1            (0x15E) // pikmin sprout inward glow
#define PID_PkGlow2_1          (0x15F) // pikmin sprout outward glow
#define PID_PkGlow2_2          (0x160) // pikmin sprout outward circle
#define PID_PkToeHamonA        (0x161) // pikmin in water white circle
#define PID_PkToeHamonB        (0x162) // pikmin in water ripples
#define PID_PkS_InAttack       (0x163) // pikmin ?
#define PID_PkInStick          (0x164) // pikmin ?
#define PID_PkKanden_1         (0x165) // pikmin electric shock 1
#define PID_PkKanden_2         (0x166) // pikmin electric shock 2
#define PID_PkKanden_3         (0x167) // pikmin electric shock 3
#define PID_PkKanden_4         (0x168) // pikmin electric shock 4
#define PID_PkToeKourin_Purple (0x169) // purple pikmin idle halo
#define PID_PkToeKourin_Blue   (0x16A) // blue pikmin idle halo
#define PID_PkToeKourin_Red    (0x16B) // red pikmin idle halo
#define PID_PkToeKourin_White  (0x16C) // white pikmin idle halo
#define PID_PkToeKourin_Yellow (0x16D) // yellow pikmin idle halo
#define PID_PkToeMoeSmoke      (0x16E) // pikmin fire extinguishing smoke
#define PID_PkMoeA             (0x16F) // pikmin fire state
#define PID_PkToeTanekira      (0x170) // fire particles from pikmin on fire
#define PID_PkToeMoeBC         (0x171) // glow from pikmin on fire
#define PID_PkNageBlur_Purple  (0x172) // purple pikmin throw trail color
#define PID_PkNageBlur_Blue    (0x173) // blue pikmin throw trail color
#define PID_PkNageBlur_Red     (0x174) // red pikmin throw trail color
#define PID_PkNageBlur_White   (0x175) // white pikmin throw trail color
#define PID_PkNageBlur_Yellow  (0x176) // yellow pikmin throw trail color
#define PID_PkToeNageKira      (0x177) // pikmin throw sparkles
#define PID_PkToeTaneKira_2    (0x178) // fire particles 2? maybe incorrect
#define PID_PkS_WalkSmoke      (0x179) // pikmin walking dust
#define PID_PkS_WaterOff_1     (0x17A) // pikmin bubble extinguishing
#define PID_PkS_WaterOff_2     (0x17B) // pikmin bubble extinguishing outwards circle
#define PID_PkToeWater_1       (0x17C) // pikmin bubble small
#define PID_PkToeWater_2       (0x17D) // pikmin bubble large

#define PID_PodGepu_1 (0x17E) // ship pod ?
#define PID_PodGepu_2 (0x17F) // ship pod ?
#define PID_PodKira   (0x180) // ship pod sparkles ?
#define PID_PodOpenA  (0x181) // ship pod ?
#define PID_PodOpenB  (0x182) // ship pod ?
#define PID_PodSpot_1 (0x183) // ship pod waypoint 1?
#define PID_PodSpot_2 (0x184) // ship pod waypoint 2?
#define PID_PodSuck_1 (0x185) // ship pod suck ?
#define PID_PodSuck_2 (0x186) // ship pod rainbow rings

#define PID_PplGrow1_1 (0x187) // pellet posy grow 1 1?
#define PID_PplGrow1_2 (0x188) // pellet posy grow 1 2?
#define PID_PplGrow2_1 (0x189) // pellet posy grow 2 1?
#define PID_PplGrow2_2 (0x18A) // pellet posy grow 2 2?
#define PID_PplGrow2_3 (0x18B) // pellet posy grow 2 3?

#define PID_QueenCrashL    (0x18C) // empress crash left
#define PID_QueenCrashR    (0x18D) // empress crash right
#define PID_QueenCrashRock (0x18E) // empress crash rock
#define PID_QueenDamage    (0x18F) // empress damage
#define PID_QueenDead_1    (0x190) // empress death 1
#define PID_QueenDead_2    (0x191) // empress death 2
#define PID_QueenDead_3    (0x192) // empress death 3
#define PID_QueenDead_4    (0x193) // empress death 4
#define PID_QueenFlick_1   (0x194) // empress shake off 1
#define PID_QueenFlick_2   (0x195) // empress shake off 2
#define PID_QueenHanacho   (0x196) // empress sleeping snot bubble
#define PID_QueenLay       (0x197) // empress birthing larva
#define PID_QueenRoll_1    (0x198) // empress rolling 1
#define PID_QueenRoll_2    (0x199) // empress rolling 2
#define PID_QueenRollCL_1  (0x19A) // empress rolling crash left 1
#define PID_QueenRollCR_1  (0x19B) // empress rolling crash right 1
#define PID_QueenRollCL_2  (0x19C) // empress rolling crash left 2
#define PID_QueenRollCR_2  (0x19D) // empress rolling crash right 2
#define PID_QueenRollCL_3  (0x19E) // empress rolling crash left 3
#define PID_QueenRollCR_3  (0x19F) // empress rolling crash right 3
#define PID_QueenWakeup    (0x1A0) // empress wake up

#define PID_QuriApp   (0x1A1) // honeywisp appear
#define PID_QuriDisap (0x1A2) // honeywisp disappear
#define PID_QuriGlow  (0x1A3) // honeywisp glow
#define PID_QuriHit_1 (0x1A4) // honeywisp hit 1
#define PID_QuriHit_2 (0x1A5) // honeywisp hit 2

#define PID_RockDead_1 (0x1A6) // falling boulder break 1
#define PID_RockDead_2 (0x1A7) // falling boulder break 2
#define PID_RockDead_3 (0x1A8) // falling boulder break 3
#define PID_RockGrRun  (0x1A9) // rolling boulder ground ?
#define PID_RockRun    (0x1AA) // rolling boulder ?

#define PID_SekikaLOff  (0x1AB) // bitter large enemy off
#define PID_SekikaLOn   (0x1AC) // bitter large enemy on
#define PID_SekikaSOff  (0x1AD) // bitter small enemy off
#define PID_SekikaSOn   (0x1AE) // bitter small enemy on
#define PID_StoneAttack (0x1AF) // pikmin attack bittered enemy

#define PID_TankFireABC_1  (0x1B0) // fiery blowhog fire 1
#define PID_TankFireABC_2  (0x1B1) // fiery blowhog fire 2
#define PID_TankFireABC_3  (0x1B2) // fiery blowhog fire 3
#define PID_TankFireHit    (0x1B3) // fiery blowhog fire hit
#define PID_TankFireIND    (0x1B4) // fiery blowhog fire IND ?
#define PID_TankFireYodare (0x1B5) // fiery blowhog drooling ?

#define PID_TankWat_1     (0x1B6) // watery blowhog water 1
#define PID_TankWat_2     (0x1B7) // watery blowhog water 2
#define PID_TankWat_3     (0x1B8) // watery blowhog water 3
#define PID_TankWat_4     (0x1B9) // watery blowhog water 4
#define PID_TankWatHit    (0x1BA) // watery blowhog water hit ?
#define PID_TankWatYodare (0x1BB) // watery blowhog drooling ?

#define PID_TsuyuGrow0   (0x1BC) // spiderwort grow 0 ?
#define PID_TsuyuGrow1_1 (0x1BD) // spiderwort grow 1 1 ?
#define PID_TsuyuGrow1_2 (0x1BE) // spiderwort grow 1 2 ?
#define PID_TsuyuGrow2_1 (0x1BF) // spiderwort grow 2 1 ?
#define PID_TsuyuGrow2_2 (0x1C0) // spiderwort grow 2 2 ?
#define PID_TsuyuGrowOn  (0x1C1) // spiderwort grow berry?

#define PID_UfoGasIn       (0x1C2) // ship gas in
#define PID_UfoGasOut      (0x1C3) // ship gas out
#define PID_UfoPodGeku_1   (0x1C4) // ship geku 1?
#define PID_UfoPodGeku_2   (0x1C5) // ship geku 2?
#define PID_UfoPodOpen_1   (0x1C6) // ship open 1?
#define PID_UfoPodOpen_2   (0x1C7) // ship open 2?
#define PID_UfoPodOpenSuck (0x1C8) // ship rainbow rings
#define PID_UfoPodSuck     (0x1C9) // ship suck ?
#define PID_UfoSpotAct_1   (0x1CA) // ship spot act 1?
#define PID_UfoSpotAct_2   (0x1CB) // ship spot act 2?
#define PID_UfoSpot_1      (0x1CC) // ship waypoint
#define PID_UfoSpot_2      (0x1CD) // ship waypoint

#define PID_UjinkoAp_1 (0x1CE) // sheargrub appear 1
#define PID_UjinkoAp_2 (0x1CF) // sheargrub appear 2
#define PID_UjinkoEat  (0x1D0) // sheargrub eat
#define PID_UjinkoHd_1 (0x1D1) // sheargrub ?
#define PID_UjinkoHd_2 (0x1D2) // sheargrub ?

#define PID_UmiAttack     (0x1D3) // bloyster attack
#define PID_UmiDeadAwa    (0x1D4) // bloyster death ?
#define PID_UmiDeadMelt   (0x1D5) // bloyster death melt
#define PID_UmiEat        (0x1D6) // bloyster eat
#define PID_UmiEyeBlue_1  (0x1D7) // bloyster eye blue 1
#define PID_UmiEyeBlue_2  (0x1D8) // bloyster eye blue 2
#define PID_UmiEyeRed_1   (0x1D9) // bloyster eye red 1
#define PID_UmiEyeRed_2   (0x1DA) // bloyster eye red 2
#define PID_UmiFlick_1    (0x1DB) // bloyster shake off 1
#define PID_UmiFlick_2    (0x1DC) // bloyster shake off 2
#define PID_UmiFlick_3    (0x1DD) // bloyster shake off 3
#define PID_UmiHamon_1    (0x1DE) // bloyster water ripples maybe?
#define PID_UmiHamon_2    (0x1DF) // bloyster water ripples maybe?
#define PID_UmiWeakBlue_1 (0x1E0) // bloyster tail glow blue
#define PID_UmiWeakBlue_2 (0x1E1) // bloyster tail glow blue
#define PID_UmiWeakRed_1  (0x1E2) // bloyster tail glow red
#define PID_UmiWeakRed_2  (0x1E3) // bloyster tail glow red

#define PID_Watage (0x1E4) // seeding dandelion seeds

#define PID_WeedPull (0x1E5) // pikmin pull nectar grass

#define PID_YakiBody_1 (0x1E6) // fiery bulblax fire sphere
#define PID_YakiBody_2 (0x1E7) // fiery bulblax fire blades (like grass)
#define PID_YakiBody_3 (0x1E8) // fiery bulblax hellfire (lol)
#define PID_YakiBody_4 (0x1E9) // fiery bulblax heat distortion

#define PID_YoroiAp_1      (0x1EA) // burrownit appear 1
#define PID_YoroiAp_2      (0x1EB) // burrownit appear 2
#define PID_YoroiAttack    (0x1EC) // burrownit attack
#define PID_YoroiAttackHit (0x1ED) // burrownit attack and make contact
#define PID_YoroiHd_1      (0x1EE) // burrownit ?
#define PID_YoroiHd_2      (0x1EF) // burrownit ?

#define PID_UNK_1F0 (0x1F0) // unknown
#define PID_UNK_1F1 (0x1F1) // unknown

#define PID_CphebiDead_1   (0x1F2) // pileated snagret death 1
#define PID_CphebiDead_2   (0x1F3) // pileated snagret death 2
#define PID_CphebiDead_3   (0x1F4) // pileated snagret death 3
#define PID_CphebiDead_4   (0x1F5) // pileated snagret death 4
#define PID_CphebiDeadHane (0x1F6) // pileated snagret death ?

#define PID_MiuAttack_1 (0x1F7) // mamuta attack 1
#define PID_MiuAttack_2 (0x1F8) // mamuta attack 2

#define PID_HDamaDeadBomb_1   (0x1F9) // man at legs death explode 1?
#define PID_HDamaDeadBomb_2   (0x1FA) // man at legs death explode 2?
#define PID_HDamaDeadBomb_3   (0x1FB) // man at legs death explode 3?
#define PID_HDamaDeadBomb_4   (0x1FC) // man at legs death explode 4?
#define PID_HDamaDeadHahen1   (0x1FD) // man at legs death fragments 1?
#define PID_HDamaDeadHahen2_1 (0x1FE) // man at legs death fragments 2?
#define PID_HDamaDeadHahen2_2 (0x1FF) // man at legs death fragments 3?
#define PID_HDamaDeadSteam_1  (0x200) // man at legs death steam 1
#define PID_HDamaDeadSteam_2  (0x201) // man at legs death steam 2
#define PID_HDamaDeadSteamT   (0x202) // man at legs death steam 3
#define PID_HDamaHahen        (0x203) // man at legs fragments?
#define PID_HDamaOnHahen1     (0x204) // man at legs activate fragments?
#define PID_HDamaOnHahen2     (0x205) // man at legs activate fragments?
#define PID_HDamaOnSmoke_1    (0x206) // man at legs activate smoke?
#define PID_HDamaOnSmoke_2    (0x207) // man at legs activate smoke?
#define PID_HDamaOnSteam1     (0x208) // man at legs activate steam?
#define PID_HDamaOnSteam2     (0x209) // man at legs activate steam?
#define PID_HDamaOpen         (0x20A) // man at legs ?
#define PID_HDamaSteam        (0x20B) // man at legs steam ?
#define PID_HDamaSteamBd      (0x20C) // man at legs steam body?
#define PID_HDamaSteamSt      (0x20D) // man at legs steam shotgun?

#define PID_KchApSand_1        (0x20E) // emperor bulblax appear sand 1
#define PID_KchApSand_2        (0x20F) // emperor bulblax appear sand 2
#define PID_KchApSand_3        (0x210) // emperor bulblax appear sand 3
#define PID_KchApWat_1         (0x211) // emperor bulblax appear water 1
#define PID_KchApWat_2         (0x212) // emperor bulblax appear water 2
#define PID_KchApWat_3         (0x213) // emperor bulblax appear water 3
#define PID_KchApWat_4         (0x214) // emperor bulblax appear water 4
#define PID_KchApWat_5         (0x215) // emperor bulblax appear water 5
#define PID_KchYodareBase_1    (0x216) // emperor bulblax drool base 1?
#define PID_KchCryAB_1         (0x217) // emperor bulblax roar 1?
#define PID_KchCryAB_2         (0x218) // emperor bulblax roar 2?
#define PID_KchCryInd          (0x219) // emperor bulblax roar 3?
#define PID_KchDamage_1        (0x21A) // emperor bulblax damage 1?
#define PID_KchDamage_2        (0x21B) // emperor bulblax damage 2?
#define PID_KchDamage_3        (0x21C) // emperor bulblax damage 3?
#define PID_KchDamage_4        (0x21D) // emperor bulblax damage 4?
#define PID_KchDeadHana_1      (0x21E) // emperor bulblax death 1?
#define PID_KchDeadHana_2      (0x21F) // emperor bulblax death 2?
#define PID_KchYodareBase_Dead (0x220) // emperor bulblax death drool?
#define PID_KchDiveSand_1      (0x221) // emperor bulblax rebury sand 1
#define PID_KchDiveSand_2      (0x222) // emperor bulblax rebury sand 2
#define PID_KchDiveSand_3      (0x223) // emperor bulblax rebury sand 3
#define PID_KchDiveWat_1       (0x224) // emperor bulblax rebury water 1
#define PID_KchDiveWat_2       (0x225) // emperor bulblax rebury water 2
#define PID_KchDiveWat_3       (0x226) // emperor bulblax rebury water 3
#define PID_KchDownSmoke       (0x227) // emperor bulblax death smoke?
#define PID_KchFlickSand_1     (0x228) // emperor bulblax shake off sand 1
#define PID_KchFlickSand_2     (0x229) // emperor bulblax shake off sand 2
#define PID_KchSmokeHana       (0x22A) // emperor bulblax smoke ?
#define PID_KchYodareBase_2    (0x22B) // emperor bulblax drool base 2?
#define PID_KchYodareHitGr     (0x22C) // emperor bulblax drool hitting ground
#define PID_KchYodareHitWat    (0x22D) // emperor bulblax drool hitting water

#define PID_EnemyPoisonL (0x22E) // large enemy eat white pikmin
#define PID_EnemyPoisonS (0x22F) // small enemy eat white pikmin

#define PID_ChibiCharge    (0x230) // groink charge
#define PID_ChibiDeadLight (0x231) // groink light rays on death
#define PID_ChibiDeadMouth (0x232) // groink death particles
#define PID_ChibiDeadSe_1  (0x233) // groink death smoke 1
#define PID_ChibiDeadSe_2  (0x234) // groink death smoke 2
#define PID_ChibiHit_1     (0x235) // groink hit 1?
#define PID_ChibiHit_2     (0x236) // groink hit 2?
#define PID_ChibiHit_3     (0x237) // groink hit 3?
#define PID_ChibiHit_4     (0x238) // groink hit 4?
#define PID_ChibiShell     (0x239) // groink shotgun projectile?
#define PID_ChibiShoot_1   (0x23A) // groink shoot 1?
#define PID_ChibiShoot_2   (0x23B) // groink shoot 2?
#define PID_ChibiShoot_3   (0x23C) // groink shoot 3?
#define PID_ChibiSmokeL    (0x23D) // groink large smoke
#define PID_ChibiSmokeS    (0x23E) // groink small smoke

#define PID_TamagoAp_1 (0x23F) // mitites appear 1
#define PID_TamagoAp_2 (0x240) // mitites appear 2

#define PID_YakiDeadSmoke (0x241) // fiery bulblax smoke on death
#define PID_YakiFlick     (0x242) // fiery bulblax shake off

#define PID_UNK_243 (0x243) // unknown
#define PID_UNK_244 (0x244) // unknown
#define PID_UNK_245 (0x245) // unknown
#define PID_UNK_246 (0x246) // unknown

#define PID_HDamaShoot_3 (0x247) // man at legs shoot 3??

#define PID_OoOtaElecParts (0x248) // titan dweevil elec poles ?
#define PID_OoOtaPDead     (0x249) // titan dweevil (something) dead?
#define PID_OoOtaPHouden_1 (0x24A) // titan dweevil (something) charge 1?
#define PID_OoOtaPHouden_2 (0x24B) // titan dweevil (something) charge 2?

#define PID_UNK_24C (0x24C) // unknown
#define PID_UNK_24D (0x24D) // unknown
#define PID_UNK_24E (0x24E) // unknown

#define PID_OoOtaElecAttack1   (0x24F) // titan dweevil elec attack 1
#define PID_OoOtaElecAttack2_1 (0x250) // titan dweevil elec attack 2
#define PID_OoOtaElecAttack2_2 (0x251) // titan dweevil elec attack 3

#define PID_FusenAirHit_Hana_1 (0x252) // withering blowhog (white?) air ??
#define PID_FusenAirHit_Hana_2 (0x253) // withering blowhog dust cloud ??
#define PID_FusenAir_Hana_1    (0x254) // withering blowhog blow air short
#define PID_FusenAir_Hana_2    (0x255) // withering blowhog blow air long
#define PID_FusenAir_Hana_3    (0x256) // withering blowhog blow air circles

#define PID_OoOtaFire_6 (0x257) // titan dweevil fire 6??

#define PID_HanaMiss_1 (0x258) // chrysanthemum miss 1
#define PID_HanaMiss_2 (0x259) // chrysanthemum miss 2

#define PID_OoganeKira (0x25A) // glint beetle sparkles

#define PID_Ppl10Grow2 (0x25B) // pellet posy 10 pellet grow
#define PID_Ppl20Grow2 (0x25C) // pellet posy 20 pellet grow
#define PID_Ppl5Grow2  (0x25D) // pellet posy 5 pellet grow

#define PID_UjinkoPkate (0x25E) // sheargrub ?

#define PID_YoroiEat (0x25F) // burrownit eating

#define PID_BombrockLight (0x260) // bomb rock glowing

#define PID_OoOtaBombBody   (0x261) // titan dweevil bomb body?
#define PID_OoOtaBombLeg    (0x262) // titan dweevil bomb legs?
#define PID_OoOtaDeadAwa    (0x263) // titan dweevil death?
#define PID_OoOtaDeadBody_1 (0x264) // titan dweevil body bubbles
#define PID_OoOtaDeadBody_2 (0x265) // titan dweevil body drips
#define PID_OoOtaDeadLeg_1  (0x266) // titan dweevil leg bubbles
#define PID_OoOtaDeadLeg_2  (0x267) // titan dweevil leg drips
#define PID_OoOtaPartsOff   (0x268) // titan dweevil treasure removal
#define PID_OoOtaStartBody  (0x269) // titan dweevil activate body
#define PID_OoOtaStartLeg   (0x26A) // titan dweevil activate legs
#define PID_OoOtaStartOta   (0x26B) // titan dweevil activate treasures?
#define PID_OoOtaStartSmoke (0x26C) // titan dweevil activate smoke

#define PID_OrimaPunch (0x26D) // leader punch

#define PID_PanApp   (0x26E) // breadbug appear dust
#define PID_PanHide  (0x26F) // breadbug hide dust
#define PID_PanSmoke (0x270) // breadbug carry dust

#define PID_PonDead (0x271) // candypop bud dead

#define PID_TutorialSnow (0x272) // valley of repose falling snow

#define PID_UNK_273 (0x273) // unknown
#define PID_UNK_274 (0x274) // unknown

#define PID_PikuBomb (0x275) // PikPik carrots being eaten/crushed etc
#define PID_PikuDead (0x276) // PikPik carrots default death?

#define PID_OoOtaChangeBody (0x277) // titan dweevil change weapon body?
#define PID_OoOtaChangeLeg  (0x278) // titan dweevil change weapon legs?

#define PID_OtakaraDive_1 (0x279) // treasure dive 1?
#define PID_OtakaraDive_2 (0x27A) // treasure dive 2?
#define PID_OtakaraDive_3 (0x27B) // treasure dive 3?

#define PID_LastMomiji (0x27C) // wistful wild falling leaves

#define PID_OoOtaDeadBody_3 (0x27D) // titan dweevil body evaporation
#define PID_OoOtaDeadLeg_3  (0x27E) // titan dweevil legs evaporation

#define PID_OtaPartsOff (0x27F) // dweevil treasure removal

#define PID_OoOtaParticle (0x280) // titan dweevil fireflies

#define PID_PkToeKourin_Green (0x281) // bulbmin/carrot green idle halo

#define PID_UNK_282 (0x282) // unknown

#define PID_KechappyTest_1 (0x283) // hairy bulborb hair 1?
#define PID_KechappyTest_2 (0x284) // hairy bulborb hair 2?
#define PID_KechappyTest_3 (0x285) // hairy bulborb hair 3?

#define PID_YakiSteam (0x286) // fiery bulblax enter water steam

#define PID_KKabutoRot  (0x287) // cannon beetle turn?
#define PID_KKabutoWait (0x288) // cannon beetle idle?

#define PID_PbagDown_1 (0x289) // cave hole down 1??
#define PID_PbagDown_2 (0x28A) // cave hole down 2??
#define PID_PbagDown_3 (0x28B) // cave hole down 3??
#define PID_PbagOn_1   (0x28C) // cave hole on 1??
#define PID_PbagOn_2   (0x28D) // cave hole on 2??

#define PID_RockWRunChasePos_1 (0x28E) // rolling rock in water 1?
#define PID_RockWRunChasePos_2 (0x28F) // rolling rock in water 2?
#define PID_RockWRunChasePos_3 (0x290) // rolling rock in water 3?

#define PID_EnemyPiyo (0x291) // purple pikmin enemy stun

#define PID_PkS_Walkwater_1 (0x292) // pikmin ??
#define PID_PkS_Walkwater_2 (0x293) // pikmin ??

#define PID_KechappyOff (0x294) // hairy bulborb lose hair?

#define PID_KageBend_1  (0x295) // waterwraith bend 1?
#define PID_KageBend_2  (0x296) // waterwraith bend 2?
#define PID_KageDead1   (0x297) // waterwraith dead 1?
#define PID_KageDead2   (0x298) // waterwraith dead 2?
#define PID_KageMove    (0x299) // waterwraith move
#define PID_KageRecov_1 (0x29A) // waterwraith recover 1
#define PID_KageRecov_2 (0x29B) // waterwraith recover 2
#define PID_KageRun     (0x29C) // waterwraith run

#define PID_KageTyreDead_1 (0x29D) // waterwraith roller destroyed 1
#define PID_KageTyreDead_2 (0x29E) // waterwraith roller destroyed 2
#define PID_KageTyreDead_3 (0x29F) // waterwraith roller destroyed 3
#define PID_KageTyreSmoke  (0x2A0) // waterwraith roller smoke
#define PID_KageTyreUp     (0x2A1) // waterwraith roller up

#define PID_DangoAttack2   (0x2A2) // segmented crabster attack
#define PID_DangoCrash_1   (0x2A3) // segmented crabster crash 1
#define PID_DangoCrash_2   (0x2A4) // segmented crabster crash 2
#define PID_DangoDamage    (0x2A5) // segmented crabster damage
#define PID_DangoDead_1    (0x2A6) // segmented crabster dead 1
#define PID_DangoDead_2    (0x2A7) // segmented crabster dead 2
#define PID_DangoDeadSmoke (0x2A8) // segmented crabster dead smoke
#define PID_DangoRun_1     (0x2A9) // segmented crabster run 1?
#define PID_DangoRun_2     (0x2AA) // segmented crabster run 2?
#define PID_DangoTurn_1    (0x2AB) // segmented crabster turn 1?
#define PID_DangoTurn_2    (0x2AC) // segmented crabster turn 2?
#define PID_DangoWallBreak (0x2AD) // segmented crabster wall break?

#define PID_KageFlick (0x2AE) // waterwraith flick

#define PID_EnemyApSmokeM (0x2AF) // enemy smoke large?
#define PID_EnemyApSmokeS (0x2B0) // enemy smoke small?

#define PID_DangoFly_1 (0x2B1) // segmented crawbster fly 1?
#define PID_DangoFly_2 (0x2B2) // segmented crawbster fly 2?
#define PID_DangoFly_3 (0x2B3) // segmented crawbster fly 3?

#define PID_GasuHiba_3 (0x2B4) // gas pipe 3
#define PID_GasuHiba_4 (0x2B5) // gas pipe 4

#define PID_SyncDefault (0x2B2) // default TSync PID

// WORLD MAP JPC
#define PID_WMap_RocketSparks  (2)
#define PID_WMap_RocketGlow    (3)
#define PID_WMap_LensFlare     (4)
#define PID_WMap_NewMap1       (5)
#define PID_WMap_NewMap2       (6)
#define PID_WMap_ShootingStar1 (7)
#define PID_WMap_ShootingStar  (8)

#endif
