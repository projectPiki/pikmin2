#include "Game/pelletMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/gamePlayData.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/PikiMgr.h"
#include "Game/generalEnemyMgr.h"
#include "System.h"
#include "Game/Data.h"
#include "Game/AIConstants.h"
#include "Game/Entities/ItemHoney.h"
#include "trig.h"
#include "Game/Stickers.h"
#include "Radar.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSScene.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "PSM/EventBase.h"
#include "Dolphin/rand.h"
#include "Game/pathfinder.h"
#include "efx/TTsuyuGrow.h"
#include "Game/MapMgr.h"
#include "efx/TEnemyDownSmoke.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_pelletState_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F490
    lbl_8047F490:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x70656C6C
        .4byte 0x65745374
        .4byte 0x61746500
    .global lbl_8047F4A8
    lbl_8047F4A8:
        .4byte 0x70656C6C
        .4byte 0x65745374
        .4byte 0x6174652E
        .4byte 0x63707000
    .global lbl_8047F4B8
    lbl_8047F4B8:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047F4C4
    lbl_8047F4C4:
        .4byte 0x6E6F7420
        .4byte 0x6F6E796F
        .4byte 0x6E202564
        .4byte 0x0A000000
        .4byte 0x7331315F
        .4byte 0x646F7065
        .4byte 0x5F666972
        .4byte 0x73745F72
        .4byte 0x00000000
        .4byte 0x7331315F
        .4byte 0x646F7065
        .4byte 0x62696E5F
        .4byte 0x66697273
        .4byte 0x745F7200
        .4byte 0x7331315F
        .4byte 0x646F7065
        .4byte 0x5F666972
        .4byte 0x73745F62
        .4byte 0x00000000
        .4byte 0x7331315F
        .4byte 0x646F7065
        .4byte 0x62696E5F
        .4byte 0x66697273
        .4byte 0x745F6200
        .4byte 0x7331305F
        .4byte 0x7375636B
        .4byte 0x5F747265
        .4byte 0x61737572
        .4byte 0x65000000
        .4byte 0x7331375F
        .4byte 0x7375636B
        .4byte 0x5F657175
        .4byte 0x69706D65
        .4byte 0x6E740000
        .4byte 0x7375636B
        .4byte 0x5F75666F
        .4byte 0x00000000
        .4byte 0x7332325F
        .4byte 0x63765F73
        .4byte 0x75636B5F
        .4byte 0x74726561
        .4byte 0x73757265
        .4byte 0x00000000
        .4byte 0x7332325F
        .4byte 0x63765F73
        .4byte 0x75636B5F
        .4byte 0x65717569
        .4byte 0x706D656E
        .4byte 0x74000000
        .4byte 0x7830385F
        .4byte 0x63765F73
        .4byte 0x75636B5F
        .4byte 0x63617263
        .4byte 0x61737300
        .4byte 0x7831385F
        .4byte 0x6578705F
        .4byte 0x70656C6C
        .4byte 0x65740000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x00000000
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000
        .4byte 0x67657420
        .4byte 0x736F756E
        .4byte 0x64207363
        .4byte 0x656E6520
        .4byte 0x61740A69
        .4byte 0x6E76616C
        .4byte 0x69642074
        .4byte 0x696D6D69
        .4byte 0x6E670A00
        .4byte 0x50534D61
        .4byte 0x696E5369
        .4byte 0x64655F53
        .4byte 0x63656E65
        .4byte 0x2E680000
        .4byte 0x4974656D
        .4byte 0x486F6E65
        .4byte 0x793A3A49
        .4byte 0x6E697441
        .4byte 0x72670000
        .4byte 0x50656C6C
        .4byte 0x6574476F
        .4byte 0x616C5374
        .4byte 0x61746541
        .4byte 0x72670000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B5008
    lbl_804B5008:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game17PelletReturnState
    __vt__Q24Game17PelletReturnState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game17PelletReturnStateFPQ24Game6PelletPQ24Game8StateArg
        .4byte exec__Q24Game17PelletReturnStateFPQ24Game6Pellet
        .4byte cleanup__Q24Game17PelletReturnStateFPQ24Game6Pellet
        .4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte
   "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
        .4byte isBuried__Q24Game11PelletStateFv
        .4byte appeared__Q24Game11PelletStateFv
        .4byte isPickable__Q24Game11PelletStateFv
    .global __vt__Q24Game13PelletUpState
    __vt__Q24Game13PelletUpState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game13PelletUpStateFPQ24Game6PelletPQ24Game8StateArg
        .4byte exec__Q24Game13PelletUpStateFPQ24Game6Pellet
        .4byte cleanup__Q24Game13PelletUpStateFPQ24Game6Pellet
        .4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte
   "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
        .4byte isBuried__Q24Game13PelletUpStateFv
        .4byte appeared__Q24Game11PelletStateFv
        .4byte isPickable__Q24Game11PelletStateFv
    .global __vt__Q24Game16PelletZukanState
    __vt__Q24Game16PelletZukanState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game16PelletZukanStateFPQ24Game6PelletPQ24Game8StateArg
        .4byte exec__Q24Game16PelletZukanStateFPQ24Game6Pellet
        .4byte cleanup__Q24Game16PelletZukanStateFPQ24Game6Pellet
        .4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte
   "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
        .4byte isBuried__Q24Game11PelletStateFv
        .4byte appeared__Q24Game11PelletStateFv
        .4byte isPickable__Q24Game11PelletStateFv
    .global __vt__Q24Game15PelletBuryState
    __vt__Q24Game15PelletBuryState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game15PelletBuryStateFPQ24Game6PelletPQ24Game8StateArg
        .4byte exec__Q24Game15PelletBuryStateFPQ24Game6Pellet
        .4byte cleanup__Q24Game15PelletBuryStateFPQ24Game6Pellet
        .4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte
   "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
        .4byte isBuried__Q24Game15PelletBuryStateFv
        .4byte appeared__Q24Game11PelletStateFv
        .4byte isPickable__Q24Game11PelletStateFv
    .global __vt__Q24Game22PelletScaleAppearState
    __vt__Q24Game22PelletScaleAppearState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q24Game22PelletScaleAppearStateFPQ24Game6PelletPQ24Game8StateArg .4byte
   exec__Q24Game22PelletScaleAppearStateFPQ24Game6Pellet .4byte
   cleanup__Q24Game22PelletScaleAppearStateFPQ24Game6Pellet .4byte
   "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet" .4byte
   "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet" .4byte
   "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
        .4byte isBuried__Q24Game11PelletStateFv
        .4byte appeared__Q24Game22PelletScaleAppearStateFv
        .4byte isPickable__Q24Game11PelletStateFv
    .global __vt__Q23efx12TTsuyuGrowon
    __vt__Q23efx12TTsuyuGrowon:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q24Game17PelletAppearState
    __vt__Q24Game17PelletAppearState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game17PelletAppearStateFPQ24Game6PelletPQ24Game8StateArg
        .4byte exec__Q24Game17PelletAppearStateFPQ24Game6Pellet
        .4byte cleanup__Q24Game17PelletAppearStateFPQ24Game6Pellet
        .4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte
   "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
        .4byte isBuried__Q24Game11PelletStateFv
        .4byte appeared__Q24Game17PelletAppearStateFv
        .4byte isPickable__Q24Game11PelletStateFv
    .global __vt__Q24Game15PelletGoalState
    __vt__Q24Game15PelletGoalState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game15PelletGoalStateFPQ24Game6PelletPQ24Game8StateArg
        .4byte exec__Q24Game15PelletGoalStateFPQ24Game6Pellet
        .4byte cleanup__Q24Game15PelletGoalStateFPQ24Game6Pellet
        .4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte
   "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
        .4byte isBuried__Q24Game11PelletStateFv
        .4byte appeared__Q24Game11PelletStateFv
        .4byte isPickable__Q24Game11PelletStateFv
    .global __vt__Q24Game19PelletGoalWaitState
    __vt__Q24Game19PelletGoalWaitState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q24Game19PelletGoalWaitStateFPQ24Game6PelletPQ24Game8StateArg .4byte
   exec__Q24Game19PelletGoalWaitStateFPQ24Game6Pellet .4byte
   cleanup__Q24Game19PelletGoalWaitStateFPQ24Game6Pellet .4byte
   "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet" .4byte
   "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet" .4byte
   "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
        .4byte isBuried__Q24Game11PelletStateFv
        .4byte appeared__Q24Game11PelletStateFv
        .4byte isPickable__Q24Game11PelletStateFv
    .global __vt__Q24Game17PelletNormalState
    __vt__Q24Game17PelletNormalState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game17PelletNormalStateFPQ24Game6PelletPQ24Game8StateArg
        .4byte exec__Q24Game17PelletNormalStateFPQ24Game6Pellet
        .4byte cleanup__Q24Game17PelletNormalStateFPQ24Game6Pellet
        .4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte
   "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
        .4byte isBuried__Q24Game11PelletStateFv
        .4byte appeared__Q24Game11PelletStateFv
        .4byte isPickable__Q24Game17PelletNormalStateFv
    .global __vt__Q24Game11PelletState
    __vt__Q24Game11PelletState:
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletPQ24Game8StateArg"
        .4byte "exec__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "cleanup__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte
   "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
        .4byte isBuried__Q24Game11PelletStateFv
        .4byte appeared__Q24Game11PelletStateFv
        .4byte isPickable__Q24Game11PelletStateFv
    .global "__vt__Q24Game24FSMState<Q24Game6Pellet>"
    "__vt__Q24Game24FSMState<Q24Game6Pellet>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletPQ24Game8StateArg"
        .4byte "exec__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "cleanup__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte
   "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
    .global __vt__Q24Game9PelletFSM
    __vt__Q24Game9PelletFSM:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game9PelletFSMFPQ24Game6Pellet
        .4byte
   "start__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
        .4byte "exec__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"
        .4byte
   "transit__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515A08
    lbl_80515A08:
        .skip 0x4
    .global lbl_80515A0C
    lbl_80515A0C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519188
    lbl_80519188:
        .4byte 0x00000000
    .global lbl_8051918C
    lbl_8051918C:
        .4byte 0x3FC00000
    .global lbl_80519190
    lbl_80519190:
        .float 1.0
    .global lbl_80519194
    lbl_80519194:
        .4byte 0x6B657900
    .global lbl_80519198
    lbl_80519198:
        .4byte 0x6C6F6F7A
        .4byte 0x79000000
    .global lbl_805191A0
    lbl_805191A0:
        .4byte 0x47FA0000
    .global lbl_805191A4
    lbl_805191A4:
        .4byte 0x42B40000
    .global lbl_805191A8
    lbl_805191A8:
        .4byte 0x42700000
    .global lbl_805191AC
    lbl_805191AC:
        .4byte 0xC3A2F983
    .global lbl_805191B0
    lbl_805191B0:
        .4byte 0x43A2F983
    .global lbl_805191B4
    lbl_805191B4:
        .4byte 0x41000000
    .global lbl_805191B8
    lbl_805191B8:
        .4byte 0x40C90FDB
    .global lbl_805191BC
    lbl_805191BC:
        .4byte 0x3CF5C28F
    .global lbl_805191C0
    lbl_805191C0:
        .4byte 0x44340000
    .global lbl_805191C4
    lbl_805191C4:
        .4byte 0x6F72696D
        .4byte 0x61000000
    .global lbl_805191CC
    lbl_805191CC:
        .4byte 0x41F00000
    .global lbl_805191D0
    lbl_805191D0:
        .4byte 0x3C23D70A
    .global lbl_805191D4
    lbl_805191D4:
        .4byte 0x47000000
    .global lbl_805191D8
    lbl_805191D8:
        .4byte 0x3F20D97C
    .global lbl_805191DC
    lbl_805191DC:
        .float 0.3
    .global lbl_805191E0
    lbl_805191E0:
        .4byte 0x3ECCCCCD
    .global lbl_805191E4
    lbl_805191E4:
        .4byte 0x3FE66666
    .global lbl_805191E8
    lbl_805191E8:
        .4byte 0x3F4CCCCD
    .global lbl_805191EC
    lbl_805191EC:
        .float 0.7
    .global lbl_805191F0
    lbl_805191F0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805191F8
    lbl_805191F8:
        .4byte 0x3E4CCCCD
    .global lbl_805191FC
    lbl_805191FC:
        .4byte 0x4196CBE4
    .global lbl_80519200
    lbl_80519200:
        .float 0.1
    .global lbl_80519204
    lbl_80519204:
        .float 0.05
    .global lbl_80519208
    lbl_80519208:
        .4byte 0x3F19999A
    .global lbl_8051920C
    lbl_8051920C:
        .4byte 0x40490FDB
    .global lbl_80519210
    lbl_80519210:
        .4byte 0x42C80000
    .global lbl_80519214
    lbl_80519214:
        .4byte 0xC47A0000
    .global lbl_80519218
    lbl_80519218:
        .4byte 0x41200000
    .global lbl_8051921C
    lbl_8051921C:
        .4byte 0x41700000
    .global lbl_80519220
    lbl_80519220:
        .float 0.5
    .global lbl_80519224
    lbl_80519224:
        .4byte 0x3F666666
    .global lbl_80519228
    lbl_80519228:
        .4byte 0x42480000
    .global lbl_8051922C
    lbl_8051922C:
        .4byte 0x3F000001
    .global lbl_80519230
    lbl_80519230:
        .4byte 0x3DCCCCD0
    .global lbl_80519234
    lbl_80519234:
        .4byte 0x43480000
*/

namespace Game {

/*
 * --INFO--
 * Address:	801A4310
 * Size:	0002AC
 */
void PelletFSM::init(Pellet* obj)
{
	create(PELLET_STATE_COUNT);
	registerState(new PelletNormalState);
	registerState(new PelletGoalState);
	registerState(new PelletBuryState);
	registerState(new PelletUpState);
	registerState(new PelletAppearState);
	registerState(new PelletScaleAppearState);
	registerState(new PelletZukanState);
	registerState(new PelletGoalWaitState);
	registerState(new PelletReturnState);
}

/*
 * --INFO--
 * Address:	801A45BC
 * Size:	000004
 */
void PelletNormalState::init(Pellet*, StateArg*) { }

/*
 * --INFO--
 * Address:	801A45C0
 * Size:	000004
 */
void PelletNormalState::exec(Pellet*) { }

/*
 * --INFO--
 * Address:	801A45C4
 * Size:	000004
 */
void PelletNormalState::cleanup(Pellet*) { }

/*
 * --INFO--
 * Address:	801A45C8
 * Size:	00007C
 */
void PelletGoalWaitState::init(Pellet* pelt, StateArg* arg)
{
	PelletGoalStateArg* sarg = static_cast<PelletGoalStateArg*>(arg);

	P2ASSERTLINE(432, arg);
	mObj = sarg->mCreature;

	pelt->getCreatureName();
}

/*
 * --INFO--
 * Address:	801A4644
 * Size:	000060
 * This whole state exists solely to delay pellets being sucked into the ship
 * until after a cutscene isnt playing
 */
void PelletGoalWaitState::exec(Pellet* pelt)
{
	if (moviePlayer && moviePlayer->mDemoState == 0) {
		PelletGoalStateArg arg(mObj);
		transit(pelt, PELSTATE_Goal, &arg);
	}
}

/*
 * --INFO--
 * Address:	801A46A4
 * Size:	000030
 */
// void FSMState<Game::Pellet>::transit(Pellet*, int, StateArg*)
//{
//}

/*
 * --INFO--
 * Address:	801A46D4
 * Size:	000004
 */
void PelletGoalWaitState::cleanup(Pellet*) { }

/*
 * --INFO--
 * Address:	801A46D8
 * Size:	000680
 */
void PelletGoalState::init(Pellet* pelt, StateArg* arg)
{
	pelt->clearClaim();

	// check if a new upgrade is acquired
	if (pelt->getKind() == PELTYPE_UPGRADE && gameSystem->mMode == GSM_STORY_MODE) {
		int id = pelt->getConfigIndex();
		if (id >= 0 && id < 12) {
			playData->mOlimarData->getItem(id);
		}
	}
	pelt->setAlive(false);
	bool flag                = false;
	PelletGoalStateArg* sarg = static_cast<PelletGoalStateArg*>(arg);
	mOnyon                   = sarg->mCreature;
	switch (gameSystem->mMode) {
	case GSM_STORY_MODE:
		flag = checkMovie(pelt);
		break;

	case GSM_ONE_PLAYER_CHALLENGE:
	case GSM_TWO_PLAYER_CHALLENGE:
		break;

	case GSM_VERSUS_MODE:
		int type = pelt->mPelletFlag;
		if ((u32)type == Pellet::FLAG_VS_BEDAMA_RED) {
			pelt->movie_begin(false);
			mOnyon->movie_begin(false);
			GameMessageVsRedOrSuckStart mesg(1);
			mesg.mIsYellow = false;
			gameSystem->mSection->sendMessage(mesg);
		} else if ((u32)type == Pellet::FLAG_VS_BEDAMA_BLUE) {
			pelt->movie_begin(false);
			mOnyon->movie_begin(false);
			GameMessageVsRedOrSuckStart mesg2(0);
			mesg2.mIsYellow = false;
			gameSystem->mSection->sendMessage(mesg2);
		} else if ((u32)type == Pellet::FLAG_VS_BEDAMA_YELLOW) {
			if ((int)mOnyon->mObjectTypeID == OBJTYPE_Onyon) {
				pelt->movie_begin(false);
				mOnyon->movie_begin(false);
				GameMessageVsRedOrSuckStart mesg3(1 - static_cast<Onyon*>(mOnyon)->mOnyonType);
				mesg3.mIsYellow = true;
				gameSystem->mSection->sendMessage(mesg3);
			} else {
				JUT_PANICLINE(512, "not onyon %d\n", mOnyon->mObjectTypeID);
			}
		}
	}

	if (flag) {
		mOnyon->movie_begin(false);
		pelt->movie_begin(false);
	}

	Vector3f peltPos = pelt->getPosition();
	Vector3f suckPos = mOnyon->getSuckPos();
	mDistance        = _distanceBetween2(peltPos, suckPos);
	_14              = 0.0f;
	mSuckDelay       = 1.5f;

	Vector3f vel = pelt->getVelocity();
	vel          = Vector3f(vel.x, 0.0f, vel.z);
	pelt->setVelocity(vel);
	mScale = 1.0f;

	if (pelt->mPelletView) {
		mScale = pelt->mPelletView->viewGetBaseScale();
	}

	if (((int)mOnyon->mObjectTypeID == OBJTYPE_Onyon || (int)mOnyon->mObjectTypeID == OBJTYPE_Ufo) && !flag) {
		static_cast<Onyon*>(mOnyon)->efxSuikomi();
	}
	mInDemo     = flag;
	mDidSuikomi = false;
	if (!mInDemo) {
		Iterator<Piki> it(pikiMgr);
		CI_LOOP(it)
		{
			Piki* piki = *it;
			piki->movie_end(false);
		}

		GeneralMgrIterator<EnemyBase> it2(generalEnemyMgr);
		for (it2.first(); it2.mIndex != nullptr; it2.next()) {
			EnemyBase* enemy = it2.getObject();
			enemy->movie_end(false);
		}
	}

	pelt->sound_otakaraEventFinish();
	if (!(u8)mOnyon->isSuckArriveWait()) {
		InteractSuckArrive act(pelt);
		mOnyon->stimulate(act);
		mIsWaiting = 0;
	} else {
		mIsWaiting = 1;
	}

	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	mr       r31, r5
	stw      r30, 0x98(r1)
	mr       r30, r4
	stw      r29, 0x94(r1)
	mr       r29, r3
	mr       r3, r30
	bl       clearClaim__Q24Game6PelletFv
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_801A475C
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_801A475C
	mr       r3, r30
	bl       getConfigIndex__Q24Game6PelletFv
	cmpwi    r3, 0
	blt      lbl_801A475C
	cmpwi    r3, 0xc
	bge      lbl_801A475C
	lwz      r5, playData__4Game@sda21(r13)
	mr       r4, r3
	addi     r3, r5, 0x48
	bl       getItem__Q24Game10OlimarDataFi

lbl_801A475C:
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0(r30)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r31)
	li       r31, 0
	stw      r0, 0x10(r29)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x44(r3)
	cmpwi    r3, 0
	beq      lbl_801A47B0
	cmpwi    r3, 2
	li       r0, 0
	beq      lbl_801A47A4
	cmpwi    r3, 3
	bne      lbl_801A47A8

lbl_801A47A4:
	li       r0, 1

lbl_801A47A8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801A47C4

lbl_801A47B0:
	mr       r3, r29
	mr       r4, r30
	bl       checkMovie__Q24Game15PelletGoalStateFPQ24Game6Pellet
	mr       r31, r3
	b        lbl_801A4938

lbl_801A47C4:
	cmpwi    r3, 1
	bne      lbl_801A4938
	lbz      r0, 0x32c(r30)
	cmplwi   r0, 4
	bne      lbl_801A4838
	mr       r3, r30
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r3, 0x10(r29)
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game27GameMessageVsRedOrSuckStart@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 1
	stw      r0, 0x78(r1)
	addi     r4, r3, __vt__Q24Game27GameMessageVsRedOrSuckStart@l
	li       r0, 0
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r4, 0x78(r1)
	addi     r4, r1, 0x78
	stw      r5, 0x7c(r1)
	stb      r0, 0x80(r1)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	b        lbl_801A4938

lbl_801A4838:
	cmplwi   r0, 5
	bne      lbl_801A489C
	mr       r3, r30
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r3, 0x10(r29)
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lis      r3, __vt__Q24Game11GameMessage@ha
	li       r0, 0
	addi     r4, r3, __vt__Q24Game11GameMessage@l
	lis      r3, __vt__Q24Game27GameMessageVsRedOrSuckStart@ha
	stw      r4, 0x6c(r1)
	addi     r5, r3, __vt__Q24Game27GameMessageVsRedOrSuckStart@l
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r4, r1, 0x6c
	stw      r5, 0x6c(r1)
	stw      r0, 0x70(r1)
	stb      r0, 0x74(r1)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	b        lbl_801A4938

lbl_801A489C:
	cmplwi   r0, 6
	bne      lbl_801A4938
	lwz      r3, 0x10(r29)
	lhz      r6, 0x128(r3)
	cmpwi    r6, 0x402
	bne      lbl_801A491C
	mr       r3, r30
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r3, 0x10(r29)
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r5, 0x10(r29)
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game27GameMessageVsRedOrSuckStart@ha
	li       r0, 1
	lhz      r6, 0x22e(r5)
	addi     r4, r4, __vt__Q24Game11GameMessage@l
	addi     r5, r3, __vt__Q24Game27GameMessageVsRedOrSuckStart@l
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r4, 0x60(r1)
	subfic   r6, r6, 1
	addi     r4, r1, 0x60
	stw      r5, 0x60(r1)
	stw      r6, 0x64(r1)
	stb      r0, 0x68(r1)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	b        lbl_801A4938

lbl_801A491C:
	lis      r3, lbl_8047F4A8@ha
	lis      r4, lbl_8047F4C4@ha
	addi     r5, r4, lbl_8047F4C4@l
	addi     r3, r3, lbl_8047F4A8@l
	li       r4, 0x200
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A4938:
	clrlwi.  r0, r31, 0x18
	beq      lbl_801A4958
	lwz      r3, 0x10(r29)
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	mr       r3, r30
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_801A4958:
	mr       r4, r30
	addi     r3, r1, 0x1c
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x10(r29)
	addi     r3, r1, 0x28
	lwz      r12, 0(r4)
	lwz      r12, 0x194(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x2c(r1)
	lfs      f0, 0x20(r1)
	lfs      f3, 0x30(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x24(r1)
	lfs      f1, 0x28(r1)
	lfs      f0, 0x1c(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80519188@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801A49D8
	ble      lbl_801A49DC
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801A49DC

lbl_801A49D8:
	fmr      f1, f0

lbl_801A49DC:
	stfs     f1, 0x18(r29)
	mr       r4, r30
	lfs      f1, lbl_80519188@sda21(r2)
	addi     r3, r1, 0x10
	lfs      f0, lbl_8051918C@sda21(r2)
	stfs     f1, 0x14(r29)
	stfs     f0, 0x1c(r29)
	lwz      r12, 0(r30)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r1)
	mr       r3, r30
	lfs      f2, 0x10(r1)
	addi     r4, r1, 0x54
	lfs      f1, 0x18(r1)
	stfs     f0, 0x58(r1)
	lfs      f0, lbl_80519188@sda21(r2)
	stfs     f2, 0x54(r1)
	stfs     f1, 0x5c(r1)
	stfs     f0, 0x58(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80519190@sda21(r2)
	stfs     f0, 0x20(r29)
	lwz      r3, 0x358(r30)
	cmplwi   r3, 0
	beq      lbl_801A4A68
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x20(r29)

lbl_801A4A68:
	lwz      r3, 0x10(r29)
	lhz      r0, 0x128(r3)
	cmpwi    r0, 0x402
	beq      lbl_801A4A80
	cmpwi    r0, 0x403
	bne      lbl_801A4A8C

lbl_801A4A80:
	clrlwi.  r0, r31, 0x18
	bne      lbl_801A4A8C
	bl       efxSuikomi__Q24Game5OnyonFv

lbl_801A4A8C:
	stb      r31, 0x3c(r29)
	li       r5, 0
	stb      r5, 0x3e(r29)
	lbz      r0, 0x3c(r29)
	cmplwi   r0, 0
	bne      lbl_801A4CC4
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	addi     r0, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r5, 0
	stw      r0, 0x44(r1)
	stw      r5, 0x50(r1)
	stw      r5, 0x48(r1)
	stw      r3, 0x4c(r1)
	bne      lbl_801A4AE0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_801A4C44

lbl_801A4AE0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_801A4B4C

lbl_801A4AF8:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A4C44
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

lbl_801A4B4C:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A4AF8
	b        lbl_801A4C44

lbl_801A4B6C:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       movie_end__Q24Game8CreatureFb
	lwz      r0, 0x50(r1)
	cmplwi   r0, 0
	bne      lbl_801A4BB4
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_801A4C44

lbl_801A4BB4:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_801A4C28

lbl_801A4BD4:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A4C44
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

lbl_801A4C28:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A4BD4

lbl_801A4C44:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x48(r1)
	cmplw    r4, r3
	bne      lbl_801A4B6C
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801A4C74
	addi     r3, r3, 4

lbl_801A4C74:
	li       r0, 0
	stw      r3, 0x3c(r1)
	addi     r3, r1, 0x34
	stw      r0, 0x40(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x38(r1)
	bl       "first__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
	b        lbl_801A4CB8

lbl_801A4C94:
	lwz      r12, 0(r3)
	lwz      r4, 0x38(r1)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       movie_end__Q24Game8CreatureFb
	addi     r3, r1, 0x34
	bl       "next__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"

lbl_801A4CB8:
	lwz      r3, 0x34(r1)
	cmplwi   r3, 0
	bne      lbl_801A4C94

lbl_801A4CC4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x218(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A4D34
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game18InteractSuckArrive@ha
	addi     r5, r4, __vt__Q24Game11Interaction@l
	stw      r30, 0xc(r1)
	addi     r0, r3, __vt__Q24Game18InteractSuckArrive@l
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stw      r0, 8(r1)
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x3d(r29)
	b        lbl_801A4D3C

lbl_801A4D34:
	li       r0, 1
	stb      r0, 0x3d(r29)

lbl_801A4D3C:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A4D58
 * Size:	000D6C
 */
bool PelletGoalState::checkMovie(Pellet* pelt)
{
	bool isGot = false;
	// For treasure, upgrades, and corpses, only check for a cutscene if the pellet was collected for the first time. (only berries and
	// number pellets dont check) This leads to a bug where the first corpse cutscene wont play for enemies youve already collected at an
	// onion above ground
	if (gameSystem->mMode == GSM_STORY_MODE) {
		isGot = playData->firstCarryPellet(pelt);
	}
	if (pelt->getKind() == PELTYPE_BERRY) {
		isGot = true;
	}
	if (pelt->getKind() == PELTYPE_NUMBER) {
		isGot = true;
	}

	if (!strcmp(pelt->mConfig->mParams.mName.mData, "key")) {
		if (!gameSystem->isChallengeMode()) {
			sys->getPlayCommonData()->enableChallengeGame();
			sys->mPlayData->mChallengeOpen = true;
		}
	} else {
		if (gameSystem->isChallengeMode()) {
			return false;
		}
	}

	if (!strcmp(pelt->mConfig->mParams.mName.mData, "loozy")) {
		sys->getPlayCommonData()->enableLouieRescue();
		sys->mPlayData->mChallengeOpen = true;
		playData->mStoryFlags |= STORY_LouieRescued;
	}
	bool draw2d = false;
	bool doPlay = false;
	if (isGot) {
		Onyon* onyon = nullptr;
		if ((mOnyon->mObjectTypeID == OBJTYPE_Ufo || mOnyon->mObjectTypeID == OBJTYPE_Onyon)) {
			onyon = static_cast<Onyon*>(mOnyon);
		}

		// The pellet was carried to the ship, if not in a cave, play a cutscene based on pellet type
		if (onyon && onyon->mOnyonType == ONYON_TYPE_SHIP) {
			if (gameSystem->mSection->getCurrentCourseInfo()) {
				// for berries, check if a kind was collected for the first time, or 10 of the berry have been collected
				if (pelt->getKind() == PELTYPE_BERRY) {
					int type = pelt->mPelletColor;
					if (!type) {
						playData->getDopeFruitCount(type);
						playData->isDemoFlag(DEMO_First_Spicy_Berry);
						playData->isDemoFlag(DEMO_First_Spicy_Spray_Made);
						int dope0 = playData->getDopeFruitCount(type);
						playData->addDopeFruit(type);
						playData->getDopeFruitCount(0);
						playData->getDopeFruitCount(1);
						if (!playData->isDemoFlag(DEMO_First_Spicy_Berry)) {
							playData->setDemoFlag(DEMO_First_Spicy_Berry);
							gameSystem->mSection->setDraw2DCreature(pelt);
							char* name = const_cast<char*>(gameSystem->mSection->getCurrentCourseInfo()->mName);
							MoviePlayArg arg("s11_dope_first_r", name, gameSystem->mSection->mMovieFinishCallback, 0);
							moviePlayer->play(arg);
							doPlay = true;
						} else {
							if (!playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
								playData->getDopeFruitCount(type);
								if (dope0 + 1 >= _aiConstants->mDopeCount.mData) {
									playData->setDemoFlag(DEMO_First_Spicy_Spray_Made);
									BaseItem* item = ItemHoney::mgr->birth();
									ItemHoney::InitArg arg(1, 1);
									item->init(&arg);
									Vector3f pos(0.0f, FLOAT_DIST_MAX, 0.0f);
									item->setPosition(pos, false);
									item->movie_begin(false);
									draw2d = true;
									gameSystem->mSection->setDraw2DCreature(item);

									char* name = const_cast<char*>(gameSystem->mSection->getCurrentCourseInfo()->mName);
									MoviePlayArg moviearg("s11_dopebin_first_r", name, gameSystem->mSection->mMovieFinishCallback, 0);
									moviePlayer->play(moviearg);
									doPlay = true;
								}
							}
						}
					} else {
						playData->getDopeFruitCount(type);
						playData->isDemoFlag(DEMO_First_Bitter_Berry);
						playData->isDemoFlag(DEMO_First_Bitter_Spray_Made);
						int dope0 = playData->getDopeFruitCount(type);
						playData->addDopeFruit(type);
						playData->getDopeFruitCount(0);
						playData->getDopeFruitCount(1);
						if (!playData->isDemoFlag(DEMO_First_Bitter_Berry)) {
							playData->setDemoFlag(DEMO_First_Bitter_Berry);
							gameSystem->mSection->setDraw2DCreature(pelt);
							char* name = const_cast<char*>(gameSystem->mSection->getCurrentCourseInfo()->mName);
							MoviePlayArg arg("s11_dope_first_b", name, gameSystem->mSection->mMovieFinishCallback, 0);
							moviePlayer->play(arg);
							doPlay = true;
						} else {
							if (!playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
								playData->getDopeFruitCount(type);
								if (dope0 + 1 >= _aiConstants->mDopeCount.mData) {
									playData->setDemoFlag(DEMO_First_Bitter_Spray_Made);
									BaseItem* item = ItemHoney::mgr->birth();
									ItemHoney::InitArg arg(2, 1);
									item->init(&arg);
									Vector3f pos(0.0f, FLOAT_DIST_MAX, 0.0f);
									item->setPosition(pos, false);
									item->movie_begin(false);
									draw2d = true;
									gameSystem->mSection->setDraw2DCreature(item);

									char* name = const_cast<char*>(gameSystem->mSection->getCurrentCourseInfo()->mName);
									MoviePlayArg moviearg("s11_dopebin_first_b", name, gameSystem->mSection->mMovieFinishCallback, 0);
									moviePlayer->play(moviearg);
									doPlay = true;
								}
							}
						}
					}
				} else if (pelt->getKind() == PELTYPE_TREASURE) {
					// Treasure carried to the ship (assume above ground)
					gameSystem->mSection->setDraw2DCreature(pelt);
					char* name = const_cast<char*>(gameSystem->mSection->getCurrentCourseInfo()->mName);
					MoviePlayArg moviearg("s10_suck_treasure", name, gameSystem->mSection->mMovieFinishCallback, 0);
					moviearg.mPelletName = pelt->mConfig->mParams.mName.mData;
					moviePlayer->play(moviearg);
					doPlay = true;

				} else if (pelt->getKind() == PELTYPE_UPGRADE) {
					// Upgrade carried to the ship (this only appears with the globe in AW normally)
					// strangely, upgrades with an ID of 8 or more use a different theme
					gameSystem->mSection->setDraw2DCreature(pelt);
					char* name = const_cast<char*>(gameSystem->mSection->getCurrentCourseInfo()->mName);
					MoviePlayArg moviearg("s17_suck_equipment", name, gameSystem->mSection->mMovieFinishCallback, 0);
					moviearg.mPelletName = pelt->mConfig->mParams.mName.mData;
					moviearg.mStreamID   = 0xc001100b;
					if (pelt->mConfig->mParams.mIndex >= 8) {
						moviearg.mStreamID = 0xc001100a;
					}
					moviePlayer->play(moviearg);
					doPlay = true;
				} else {
					// A completely unused cutscene, in theory this would play if you carried a corpse or number pellet to the ship
					// but even if you did, this cutscene doesnt exist in the files, so nothing happens
					char* name = const_cast<char*>(gameSystem->mSection->getCurrentCourseInfo()->mName);
					MoviePlayArg moviearg("suck_ufo", name, gameSystem->mSection->mMovieFinishCallback, 0);
					moviePlayer->play(moviearg);
					doPlay = true;
				}
			}
		} else if (onyon && onyon->mOnyonType == ONYON_TYPE_POD) {
			if (pelt->getKind() == PELTYPE_TREASURE) {
				// Treasure carried to the cave pod
				gameSystem->mSection->setDraw2DCreature(pelt);
				MoviePlayArg moviearg("s22_cv_suck_treasure", nullptr, gameSystem->mSection->mMovieFinishCallback, 0);
				moviearg.mOrigin        = mOnyon->getPosition();
				moviearg.mAngle         = mOnyon->getFaceDir();
				moviearg.mDelegateStart = gameSystem->mSection->mMovieStartCallback;
				moviearg.mDelegateEnd   = gameSystem->mSection->mMovieFinishCallback;
				moviearg.mPelletName    = pelt->mConfig->mParams.mName.mData;
				moviePlayer->play(moviearg);
				doPlay = true;
			} else if (pelt->getKind() == PELTYPE_UPGRADE) {
				// Upgrade carried to the cave pod
				gameSystem->mSection->setDraw2DCreature(pelt);
				MoviePlayArg moviearg("s22_cv_suck_equipment", nullptr, gameSystem->mSection->mMovieFinishCallback, 0);
				moviearg.mPelletName    = pelt->mConfig->mParams.mName.mData;
				moviearg.mDelegateStart = gameSystem->mSection->mMovieStartCallback;
				moviearg.mOrigin        = mOnyon->getPosition();
				moviearg.mAngle         = mOnyon->getFaceDir();
				moviearg.mStreamID      = 0xc001100b;
				if (pelt->mConfig->mParams.mIndex >= 8) {
					moviearg.mStreamID = 0xc001100a;
				}
				moviePlayer->play(moviearg);
				doPlay = true;
			} else if (pelt->getKind() == PELTYPE_CARCASS && pelt->mPelletFlag != Pellet::FLAG_NAVI_NAPSACK
			           && !playData->isDemoFlag(DEMO_First_Corpse_In_Cave)) {
				// first corpse collected in cave
				playData->setDemoFlag(DEMO_First_Corpse_In_Cave);
				MoviePlayArg moviearg("x08_cv_suck_carcass", nullptr, gameSystem->mSection->mMovieFinishCallback, 0);
				moviearg.mPelletName    = pelt->mConfig->mParams.mName.mData;
				moviearg.mDelegateStart = gameSystem->mSection->mMovieStartCallback;
				moviearg.mOrigin        = mOnyon->getPosition();
				moviearg.mAngle         = mOnyon->getFaceDir();
				moviePlayer->play(moviearg);
				doPlay = true;
			}
		} else if (onyon && onyon->mOnyonType <= ONYON_TYPE_YELLOW) {
			if (pelt->getKind() == PELTYPE_NUMBER && !playData->isDemoFlag(DEMO_First_Number_Pellet)) {
				playData->setDemoFlag(DEMO_First_Number_Pellet);
				MoviePlayArg moviearg("x18_exp_pellet", nullptr, gameSystem->mSection->mMovieFinishCallback, 0);
				moviearg.mPelletName    = pelt->mConfig->mParams.mName.mData;
				moviearg.mDelegateStart = gameSystem->mSection->mMovieStartCallback;
				moviearg.mOrigin        = mOnyon->getPosition();
				moviearg.mAngle         = mOnyon->getFaceDir();
				moviePlayer->play(moviearg);
				doPlay = true;
			}
		}
	}

	if (doPlay) {
		Pellet* pelt2 = nullptr;
		if (pelt->getKind() == PELTYPE_CARCASS) {
			pelt->mPelletView->mCreature->movie_begin(false);
		} else if (pelt->getKind() == PELTYPE_NUMBER) {
			pelt->movie_begin(false);
		} else {
			pelt2 = pelt;
			pelt->getCreatureName();
			pelt->getCreatureID();
			if (pelt->mPelletView) {
				pelt->mPelletView->viewGetShape();
			}
		}
		if (!draw2d) {
			gameSystem->mSection->setDraw2DCreature(pelt2);
		}
		pelt->movie_begin(false);
	}
	return doPlay;
	/*
	stwu     r1, -0x2c0(r1)
	mflr     r0
	lis      r6, lbl_8047F490@ha
	stw      r0, 0x2c4(r1)
	stmw     r26, 0x2a8(r1)
	mr       r27, r3
	mr       r28, r4
	addi     r31, r6, lbl_8047F490@l
	li       r30, 0
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r5)
	cmpwi    r0, 0
	bne      lbl_801A4D98
	lwz      r3, playData__4Game@sda21(r13)
	bl       firstCarryPellet__Q24Game8PlayDataFPQ24Game6Pellet
	mr       r30, r3

lbl_801A4D98:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 2
	bne      lbl_801A4DBC
	li       r30, 1

lbl_801A4DBC:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A4DDC
	li       r30, 1

lbl_801A4DDC:
	lwz      r3, 0x35c(r28)
	addi     r4, r2, lbl_80519194@sda21
	lwz      r3, 0x40(r3)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801A4E3C
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_801A4E10
	cmpwi    r0, 3
	bne      lbl_801A4E14

lbl_801A4E10:
	li       r3, 1

lbl_801A4E14:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A4E6C
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	bl       enableChallengeGame__Q24Game14PlayCommonDataFv
	lwz      r3, sys@sda21(r13)
	li       r0, 1
	lwz      r3, 0x60(r3)
	stb      r0, 0x42(r3)
	b        lbl_801A4E6C

lbl_801A4E3C:
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_801A4E58
	cmpwi    r0, 3
	bne      lbl_801A4E5C

lbl_801A4E58:
	li       r3, 1

lbl_801A4E5C:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A4E6C
	li       r3, 0
	b        lbl_801A5AB0

lbl_801A4E6C:
	lwz      r3, 0x35c(r28)
	addi     r4, r2, lbl_80519198@sda21
	lwz      r3, 0x40(r3)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801A4EB0
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	bl       enableLouieRescue__Q24Game14PlayCommonDataFv
	lwz      r3, sys@sda21(r13)
	li       r0, 1
	lwz      r3, 0x60(r3)
	stb      r0, 0x42(r3)
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	ori      r0, r0, 4
	stb      r0, 0x2f(r3)

lbl_801A4EB0:
	clrlwi.  r0, r30, 0x18
	li       r30, 0
	li       r29, 0
	beq      lbl_801A59D4
	lwz      r3, 0x10(r27)
	li       r4, 0
	lhz      r0, 0x128(r3)
	cmplwi   r0, 0x403
	beq      lbl_801A4EDC
	cmplwi   r0, 0x402
	bne      lbl_801A4EE0

lbl_801A4EDC:
	mr       r4, r3

lbl_801A4EE0:
	cmplwi   r4, 0
	beq      lbl_801A55A4
	lhz      r0, 0x22e(r4)
	cmplwi   r0, 4
	bne      lbl_801A55A4
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_801A59D4
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 2
	bne      lbl_801A53B0
	lhz      r4, 0x43e(r28)
	cmpwi    r4, 0
	mr       r26, r4
	bne      lbl_801A5178
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeFruitCount__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1b
	bl       isDemoFlag__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1d
	bl       isDemoFlag__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r26
	bl       getDopeFruitCount__Q24Game8PlayDataFi
	mr       r27, r3
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r26
	bl       addDopeFruit__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0
	bl       getDopeFruitCount__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	bl       getDopeFruitCount__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1b
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A503C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1b
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r3, gameSystem__4Game@sda21(r13)
	mr       r4, r28
	lwz      r3, 0x58(r3)
	bl       setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r27, 0xc8(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x14(r3)
	li       r0, 0
	lfs      f0, lbl_80519188@sda21(r2)
	addi     r3, r31, 0x44
	stw      r3, 0x268(r1)
	addi     r4, r1, 0x268
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r5, 0x26c(r1)
	stw      r27, 0x274(r1)
	stfs     f0, 0x280(r1)
	stfs     f0, 0x284(r1)
	stfs     f0, 0x288(r1)
	stfs     f0, 0x28c(r1)
	stw      r0, 0x290(r1)
	stw      r0, 0x278(r1)
	stw      r0, 0x270(r1)
	stw      r0, 0x294(r1)
	stw      r0, 0x27c(r1)
	stw      r0, 0x298(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r29, 1
	b        lbl_801A59D4

lbl_801A503C:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1d
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A59D4
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r26
	bl       getDopeFruitCount__Q24Game8PlayDataFi
	lwz      r3, _aiConstants__4Game@sda21(r13)
	addi     r4, r27, 1
	lwz      r0, 0x38(r3)
	cmpw     r4, r0
	blt      lbl_801A59D4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1d
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	li       r0, 1
	addi     r5, r4, __vt__Q24Game15CreatureInitArg@l
	stb      r0, 0x14(r1)
	lis      r4, __vt__Q34Game9ItemHoney7InitArg@ha
	mr       r26, r3
	stw      r5, 0x10(r1)
	addi     r5, r4, __vt__Q34Game9ItemHoney7InitArg@l
	addi     r4, r1, 0x10
	stw      r5, 0x10(r1)
	stb      r0, 0x15(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lfs      f1, lbl_80519188@sda21(r2)
	mr       r3, r26
	lfs      f0, lbl_805191A0@sda21(r2)
	addi     r4, r1, 0x54
	stfs     f1, 0x54(r1)
	li       r5, 0
	stfs     f0, 0x58(r1)
	stfs     f1, 0x5c(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r26
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r3, gameSystem__4Game@sda21(r13)
	mr       r4, r26
	li       r30, 1
	lwz      r3, 0x58(r3)
	bl       setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r27, 0xc8(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x14(r3)
	li       r0, 0
	lfs      f0, lbl_80519188@sda21(r2)
	addi     r3, r31, 0x58
	stw      r3, 0x234(r1)
	addi     r4, r1, 0x234
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r5, 0x238(r1)
	stw      r27, 0x240(r1)
	stfs     f0, 0x24c(r1)
	stfs     f0, 0x250(r1)
	stfs     f0, 0x254(r1)
	stfs     f0, 0x258(r1)
	stw      r0, 0x25c(r1)
	stw      r0, 0x244(r1)
	stw      r0, 0x23c(r1)
	stw      r0, 0x260(r1)
	stw      r0, 0x248(r1)
	stw      r0, 0x264(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r29, 1
	b        lbl_801A59D4

lbl_801A5178:
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeFruitCount__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1c
	bl       isDemoFlag__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1e
	bl       isDemoFlag__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r26
	bl       getDopeFruitCount__Q24Game8PlayDataFi
	mr       r27, r3
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r26
	bl       addDopeFruit__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0
	bl       getDopeFruitCount__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	bl       getDopeFruitCount__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1c
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A5270
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1c
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r3, gameSystem__4Game@sda21(r13)
	mr       r4, r28
	lwz      r3, 0x58(r3)
	bl       setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r27, 0xc8(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x14(r3)
	li       r0, 0
	lfs      f0, lbl_80519188@sda21(r2)
	addi     r3, r31, 0x6c
	stw      r3, 0x200(r1)
	addi     r4, r1, 0x200
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r5, 0x204(r1)
	stw      r27, 0x20c(r1)
	stfs     f0, 0x218(r1)
	stfs     f0, 0x21c(r1)
	stfs     f0, 0x220(r1)
	stfs     f0, 0x224(r1)
	stw      r0, 0x228(r1)
	stw      r0, 0x210(r1)
	stw      r0, 0x208(r1)
	stw      r0, 0x22c(r1)
	stw      r0, 0x214(r1)
	stw      r0, 0x230(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r29, 1
	b        lbl_801A59D4

lbl_801A5270:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1e
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A59D4
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r26
	bl       getDopeFruitCount__Q24Game8PlayDataFi
	lwz      r3, _aiConstants__4Game@sda21(r13)
	addi     r4, r27, 1
	lwz      r0, 0x38(r3)
	cmpw     r4, r0
	blt      lbl_801A59D4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1e
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lis      r4, __vt__Q34Game9ItemHoney7InitArg@ha
	addi     r0, r5, __vt__Q24Game15CreatureInitArg@l
	mr       r26, r3
	stw      r0, 8(r1)
	li       r5, 2
	addi     r4, r4, __vt__Q34Game9ItemHoney7InitArg@l
	li       r0, 1
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stb      r5, 0xc(r1)
	stb      r0, 0xd(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lfs      f1, lbl_80519188@sda21(r2)
	mr       r3, r26
	lfs      f0, lbl_805191A0@sda21(r2)
	addi     r4, r1, 0x48
	stfs     f1, 0x48(r1)
	li       r5, 0
	stfs     f0, 0x4c(r1)
	stfs     f1, 0x50(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r26
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r3, gameSystem__4Game@sda21(r13)
	mr       r4, r26
	li       r30, 1
	lwz      r3, 0x58(r3)
	bl       setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r27, 0xc8(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x14(r3)
	li       r0, 0
	lfs      f0, lbl_80519188@sda21(r2)
	addi     r3, r31, 0x80
	stw      r3, 0x1cc(r1)
	addi     r4, r1, 0x1cc
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r5, 0x1d0(r1)
	stw      r27, 0x1d8(r1)
	stfs     f0, 0x1e4(r1)
	stfs     f0, 0x1e8(r1)
	stfs     f0, 0x1ec(r1)
	stfs     f0, 0x1f0(r1)
	stw      r0, 0x1f4(r1)
	stw      r0, 0x1dc(r1)
	stw      r0, 0x1d4(r1)
	stw      r0, 0x1f8(r1)
	stw      r0, 0x1e0(r1)
	stw      r0, 0x1fc(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r29, 1
	b        lbl_801A59D4

lbl_801A53B0:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_801A5460
	lwz      r3, gameSystem__4Game@sda21(r13)
	mr       r4, r28
	lwz      r3, 0x58(r3)
	bl       setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r27, 0xc8(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x14(r3)
	li       r0, 0
	lfs      f0, lbl_80519188@sda21(r2)
	addi     r3, r31, 0x94
	stw      r3, 0x198(r1)
	addi     r4, r1, 0x198
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r5, 0x19c(r1)
	stw      r27, 0x1a4(r1)
	stfs     f0, 0x1b0(r1)
	stfs     f0, 0x1b4(r1)
	stfs     f0, 0x1b8(r1)
	stfs     f0, 0x1bc(r1)
	stw      r0, 0x1c0(r1)
	stw      r0, 0x1a8(r1)
	stw      r0, 0x1a0(r1)
	stw      r0, 0x1c4(r1)
	stw      r0, 0x1ac(r1)
	stw      r0, 0x1c8(r1)
	lwz      r5, 0x35c(r28)
	lwz      r0, 0x40(r5)
	stw      r0, 0x1a0(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r29, 1
	b        lbl_801A59D4

lbl_801A5460:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_801A5530
	lwz      r3, gameSystem__4Game@sda21(r13)
	mr       r4, r28
	lwz      r3, 0x58(r3)
	bl       setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r27, 0xc8(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x14(r3)
	li       r4, 0
	lfs      f0, lbl_80519188@sda21(r2)
	addi     r0, r31, 0xa8
	stw      r0, 0x164(r1)
	lis      r3, 0xC001100B@ha
	addi     r0, r3, 0xC001100B@l
	stw      r5, 0x168(r1)
	stw      r27, 0x170(r1)
	stfs     f0, 0x17c(r1)
	stfs     f0, 0x180(r1)
	stfs     f0, 0x184(r1)
	stfs     f0, 0x188(r1)
	stw      r4, 0x18c(r1)
	stw      r4, 0x174(r1)
	stw      r4, 0x16c(r1)
	stw      r4, 0x190(r1)
	stw      r4, 0x178(r1)
	stw      r4, 0x194(r1)
	lwz      r5, 0x35c(r28)
	lwz      r4, 0x40(r5)
	stw      r4, 0x16c(r1)
	stw      r0, 0x190(r1)
	lha      r0, 0x258(r5)
	cmpwi    r0, 8
	blt      lbl_801A551C
	addi     r0, r3, 0x100a
	stw      r0, 0x190(r1)

lbl_801A551C:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	addi     r4, r1, 0x164
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r29, 1
	b        lbl_801A59D4

lbl_801A5530:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r27, 0xc8(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x14(r3)
	li       r0, 0
	lfs      f0, lbl_80519188@sda21(r2)
	addi     r3, r31, 0xbc
	stw      r3, 0x130(r1)
	addi     r4, r1, 0x130
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r5, 0x134(r1)
	stw      r27, 0x13c(r1)
	stfs     f0, 0x148(r1)
	stfs     f0, 0x14c(r1)
	stfs     f0, 0x150(r1)
	stfs     f0, 0x154(r1)
	stw      r0, 0x158(r1)
	stw      r0, 0x140(r1)
	stw      r0, 0x138(r1)
	stw      r0, 0x15c(r1)
	stw      r0, 0x144(r1)
	stw      r0, 0x160(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r29, 1
	b        lbl_801A59D4

lbl_801A55A4:
	cmplwi   r4, 0
	beq      lbl_801A58CC
	lhz      r0, 0x22e(r4)
	cmplwi   r0, 3
	bne      lbl_801A58CC
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_801A56B4
	lwz      r3, gameSystem__4Game@sda21(r13)
	mr       r4, r28
	lwz      r3, 0x58(r3)
	bl       setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r4, r31, 0xc8
	lfs      f0, lbl_80519188@sda21(r2)
	li       r0, 0
	lwz      r5, 0x58(r3)
	addi     r3, r1, 0x3c
	lwz      r5, 0xc8(r5)
	stw      r4, 0xfc(r1)
	stw      r0, 0x100(r1)
	stw      r5, 0x108(r1)
	stfs     f0, 0x114(r1)
	stfs     f0, 0x118(r1)
	stfs     f0, 0x11c(r1)
	stfs     f0, 0x120(r1)
	stw      r0, 0x124(r1)
	stw      r0, 0x10c(r1)
	stw      r0, 0x104(r1)
	stw      r0, 0x128(r1)
	stw      r0, 0x110(r1)
	stw      r0, 0x12c(r1)
	lwz      r4, 0x10(r27)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x3c(r1)
	lfs      f1, 0x40(r1)
	lfs      f0, 0x44(r1)
	stfs     f2, 0x114(r1)
	stfs     f1, 0x118(r1)
	stfs     f0, 0x11c(r1)
	lwz      r3, 0x10(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x120(r1)
	addi     r4, r1, 0xfc
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r5, 0x58(r5)
	lwz      r0, 0xcc(r5)
	stw      r0, 0x10c(r1)
	lwz      r0, 0xc8(r5)
	stw      r0, 0x108(r1)
	lwz      r5, 0x35c(r28)
	lwz      r0, 0x40(r5)
	stw      r0, 0x104(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r29, 1
	b        lbl_801A59D4

lbl_801A56B4:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_801A57C4
	lwz      r3, gameSystem__4Game@sda21(r13)
	mr       r4, r28
	lwz      r3, 0x58(r3)
	bl       setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r4, r31, 0xe0
	lfs      f0, lbl_80519188@sda21(r2)
	li       r0, 0
	lwz      r6, 0x58(r3)
	addi     r3, r1, 0x30
	lwz      r5, 0xc8(r6)
	stw      r4, 0xc8(r1)
	stw      r0, 0xcc(r1)
	stw      r5, 0xd4(r1)
	stfs     f0, 0xe0(r1)
	stfs     f0, 0xe4(r1)
	stfs     f0, 0xe8(r1)
	stfs     f0, 0xec(r1)
	stw      r0, 0xf0(r1)
	stw      r0, 0xd8(r1)
	stw      r0, 0xd0(r1)
	stw      r0, 0xf4(r1)
	stw      r0, 0xdc(r1)
	stw      r0, 0xf8(r1)
	lwz      r4, 0x35c(r28)
	lwz      r0, 0x40(r4)
	stw      r0, 0xd0(r1)
	lwz      r0, 0xcc(r6)
	stw      r0, 0xd8(r1)
	lwz      r4, 0x10(r27)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x30(r1)
	lfs      f1, 0x34(r1)
	lfs      f0, 0x38(r1)
	stfs     f2, 0xe0(r1)
	stfs     f1, 0xe4(r1)
	stfs     f0, 0xe8(r1)
	lwz      r3, 0x10(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lis      r4, 0xC001100B@ha
	stfs     f1, 0xec(r1)
	addi     r0, r4, 0xC001100B@l
	stw      r0, 0xf4(r1)
	lwz      r3, 0x35c(r28)
	lha      r0, 0x258(r3)
	cmpwi    r0, 8
	blt      lbl_801A57B0
	addi     r0, r4, 0x100a
	stw      r0, 0xf4(r1)

lbl_801A57B0:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	addi     r4, r1, 0xc8
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r29, 1
	b        lbl_801A59D4

lbl_801A57C4:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_801A59D4
	lbz      r0, 0x32c(r28)
	cmplwi   r0, 1
	beq      lbl_801A59D4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x28
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A59D4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x28
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r4, r31, 0xf8
	lfs      f0, lbl_80519188@sda21(r2)
	li       r0, 0
	lwz      r6, 0x58(r3)
	addi     r3, r1, 0x24
	lwz      r5, 0xc8(r6)
	stw      r4, 0x94(r1)
	stw      r0, 0x98(r1)
	stw      r5, 0xa0(r1)
	stfs     f0, 0xac(r1)
	stfs     f0, 0xb0(r1)
	stfs     f0, 0xb4(r1)
	stfs     f0, 0xb8(r1)
	stw      r0, 0xbc(r1)
	stw      r0, 0xa4(r1)
	stw      r0, 0x9c(r1)
	stw      r0, 0xc0(r1)
	stw      r0, 0xa8(r1)
	stw      r0, 0xc4(r1)
	lwz      r4, 0x35c(r28)
	lwz      r0, 0x40(r4)
	stw      r0, 0x9c(r1)
	lwz      r0, 0xcc(r6)
	stw      r0, 0xa4(r1)
	lwz      r4, 0x10(r27)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x24(r1)
	lfs      f1, 0x28(r1)
	lfs      f0, 0x2c(r1)
	stfs     f2, 0xac(r1)
	stfs     f1, 0xb0(r1)
	stfs     f0, 0xb4(r1)
	lwz      r3, 0x10(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0xb8(r1)
	addi     r4, r1, 0x94
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r29, 1
	b        lbl_801A59D4

lbl_801A58CC:
	cmplwi   r4, 0
	beq      lbl_801A59D4
	lhz      r0, 0x22e(r4)
	cmplwi   r0, 2
	bgt      lbl_801A59D4
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A59D4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x31
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A59D4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x31
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r4, r31, 0x10c
	lfs      f0, lbl_80519188@sda21(r2)
	li       r0, 0
	lwz      r6, 0x58(r3)
	addi     r3, r1, 0x18
	lwz      r5, 0xc8(r6)
	stw      r4, 0x60(r1)
	stw      r0, 0x64(r1)
	stw      r5, 0x6c(r1)
	stfs     f0, 0x78(r1)
	stfs     f0, 0x7c(r1)
	stfs     f0, 0x80(r1)
	stfs     f0, 0x84(r1)
	stw      r0, 0x88(r1)
	stw      r0, 0x70(r1)
	stw      r0, 0x68(r1)
	stw      r0, 0x8c(r1)
	stw      r0, 0x74(r1)
	stw      r0, 0x90(r1)
	lwz      r4, 0x35c(r28)
	lwz      r0, 0x40(r4)
	stw      r0, 0x68(r1)
	lwz      r0, 0xcc(r6)
	stw      r0, 0x70(r1)
	lwz      r4, 0x10(r27)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x18(r1)
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x20(r1)
	stfs     f2, 0x78(r1)
	stfs     f1, 0x7c(r1)
	stfs     f0, 0x80(r1)
	lwz      r3, 0x10(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x84(r1)
	addi     r4, r1, 0x60
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r29, 1

lbl_801A59D4:
	clrlwi.  r0, r29, 0x18
	beq      lbl_801A5AAC
	mr       r3, r28
	li       r26, 0
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_801A5A14
	lwz      r3, 0x358(r28)
	li       r4, 0
	lwz      r3, 8(r3)
	bl       movie_begin__Q24Game8CreatureFb
	b        lbl_801A5A88

lbl_801A5A14:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A5A40
	mr       r3, r28
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	b        lbl_801A5A88

lbl_801A5A40:
	mr       r3, r28
	mr       r26, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x358(r28)
	cmplwi   r3, 0
	beq      lbl_801A5A88
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_801A5A88:
	clrlwi.  r0, r30, 0x18
	bne      lbl_801A5AA0
	lwz      r3, gameSystem__4Game@sda21(r13)
	mr       r4, r26
	lwz      r3, 0x58(r3)
	bl       setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature

lbl_801A5AA0:
	mr       r3, r28
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_801A5AAC:
	mr       r3, r29

lbl_801A5AB0:
	lmw      r26, 0x2a8(r1)
	lwz      r0, 0x2c4(r1)
	mtlr     r0
	addi     r1, r1, 0x2c0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A5AC4
 * Size:	000B34
 */
void PelletGoalState::exec(Pellet* pelt)
{
	if (pelt->mPelletView) {
		Creature* obj = pelt->mPelletView->mCreature;
		if (obj && obj->isTeki()) {
			static_cast<EnemyBase*>(pelt->mPelletView->mCreature)->setAnimSpeed(90.0f);
		}
	} else {
		pelt->mAnimSpeed = sys->mDeltaTime * 60.0f;
	}

	if (mInDemo && !mDidSuikomi && moviePlayer && moviePlayer->mDemoState == 5) {
		if (((int)mOnyon->mObjectTypeID == OBJTYPE_Onyon || (int)mOnyon->mObjectTypeID == OBJTYPE_Ufo)) {
			static_cast<Onyon*>(mOnyon)->efxSuikomi();
			mDidSuikomi = true;
		}
	}

	if (mStartSuck) {
		mCurrPos   = pelt->getPosition();
		mSuckTime  = 0.0f;
		mStartSuck = false;

		Vector3f suckPos = mOnyon->getSuckPos();
		mDistance        = _distanceBetween2(suckPos, mCurrPos);
		mTimer           = 0.0f;
	}

	Vector3f test(mCurrPos + (mOnyon->getGoalPos() - mCurrPos) * mSuckTime);
	if (mIsWaiting) {
		if (mOnyon->isSuckArriveWait())
			return;
		InteractSuckArrive act(pelt);
		mOnyon->stimulate(act);
		mIsWaiting = false;
	}

	if (mSuckDelay > 0.0f || !mOnyon->isSuckReady()) {
		Vector3f velocity(0.0f, pelt->getVelocity().y, 0.0f);
		pelt->setVelocity(velocity);
		mSuckDelay -= sys->mDeltaTime;
		mStartSuck = true;
	} else {
		pelt->mPelletPosition    = test;
		pelt->mCollisionPosition = test;
		f32 scale                = 1.0f - mSuckTime;
		f32 angle                = scale * TAU;
		angle *= 8.0f;
		scale *= mScale * pikmin2_sinf(angle) * 0.03f;
		pelt->mScale = scale;
		mSuckTime += (mTimer * sys->mDeltaTime) / mDistance;
		mTimer += sys->mDeltaTime * 720.0f;
		if (mSuckTime >= 1.0f) {
			Stickers stick(pelt);
			Iterator<Creature> it(&stick);
			InteractSuckFinish act(pelt);
			CI_LOOP(it)
			{
				Creature* obj = *it;
				obj->stimulate(act);
			}
		}
		InteractSuckFinish act(pelt);
		mOnyon->stimulate(act);

		if (Radar::mgr) {
			Radar::Mgr::getNumOtakaraItems();
			Radar::Mgr::getNumOtakaraItems();
			bool check = pelt->getKind() == PELTYPE_TREASURE;
			if (!check) {
				pelt->getKind();
			}
		}

		if (!gameSystem->isVersusMode() && (pelt->getKind() == PELTYPE_TREASURE || pelt->getKind() == PELTYPE_UPGRADE)
		    && Radar::Mgr::getNumOtakaraItems() <= 1) {
			if (gameSystem->mIsInCave) {
				PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
				PSSystem::checkSceneMgr(mgr);
				PSM::Scene_Cave* scene = static_cast<PSM::Scene_Cave*>(mgr->getChildScene());
				PSSystem::checkGameScene(scene);
				scene->stopPollutionSe();
				if (gameSystem->isChallengeMode()) {
					if (strcmp(pelt->mConfig->mParams.mName.mData, "key")) {
						PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
						PSSystem::checkSceneMgr(mgr);
						PSM::Scene_Cave* scene = static_cast<PSM::Scene_Cave*>(mgr->getChildScene());
						PSSystem::checkGameScene(scene);
						if (scene->isGameScene()) {
							scene->startPollutUpSe();
						}
					}
				}
			} else {
				PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
				PSSystem::checkSceneMgr(mgr);
				PSM::Scene_Ground* scene = static_cast<PSM::Scene_Ground*>(mgr->getChildScene());
				PSSystem::checkGameScene(scene);
				scene->setPollutUp();
			}
		}

		if (gameSystem->isVersusMode()) {
			// delete stickers??
			return;
		} else {
			if (!mInDemo) {
				if (!strcmp("orima", pelt->mConfig->mParams.mName.mData)) {
					pelt->mSoundMgr->startSound(PSSE_EV_ONYON_BOUND_PLAYER, 0);
				}
				pelt->kill(nullptr);
			} else {
				if (pelt->getKind() == PELTYPE_CARCASS || pelt->getKind() == PELTYPE_NUMBER) {
					pelt->kill(nullptr);
				} else {
					if (pelt->getKind() == PELTYPE_UPGRADE || pelt->getKind() == PELTYPE_TREASURE) {
						pelt->mAnimSpeed = sys->mDeltaTime * 30.0f;
						pelt->mCarryAnim.setFrameByKeyType(0);
					}
				}
			}
			if (shadowMgr) {
				shadowMgr->delShadow(pelt);
			}
			transit(pelt, PELSTATE_Normal, nullptr);
		}
	}
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	stw      r28, 0xa0(r1)
	mr       r30, r4
	lis      r4, lbl_8047F490@ha
	lwz      r5, 0x358(r30)
	mr       r29, r3
	addi     r31, r4, lbl_8047F490@l
	cmplwi   r5, 0
	beq      lbl_801A5B4C
	lwz      r3, 8(r5)
	cmplwi   r3, 0
	beq      lbl_801A5B60
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A5B60
	lwz      r3, 0x358(r30)
	lfs      f1, lbl_805191A4@sda21(r2)
	lwz      r3, 8(r3)
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_801A5B60

lbl_801A5B4C:
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_805191A8@sda21(r2)
	lfs      f0, 0x54(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x438(r30)

lbl_801A5B60:
	lbz      r0, 0x3c(r29)
	cmplwi   r0, 0
	beq      lbl_801A5BB4
	lbz      r0, 0x3e(r29)
	cmplwi   r0, 0
	bne      lbl_801A5BB4
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801A5BB4
	lwz      r0, 0x18(r3)
	cmpwi    r0, 5
	bne      lbl_801A5BB4
	lwz      r3, 0x10(r29)
	lhz      r0, 0x128(r3)
	cmpwi    r0, 0x402
	beq      lbl_801A5BA8
	cmpwi    r0, 0x403
	bne      lbl_801A5BB4

lbl_801A5BA8:
	bl       efxSuikomi__Q24Game5OnyonFv
	li       r0, 1
	stb      r0, 0x3e(r29)

lbl_801A5BB4:
	lbz      r0, 0x34(r29)
	cmplwi   r0, 0
	beq      lbl_801A5C78
	mr       r4, r30
	addi     r3, r1, 0x3c
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x3c(r1)
	li       r0, 0
	lfs      f0, lbl_80519188@sda21(r2)
	addi     r3, r1, 0x30
	stfs     f1, 0x28(r29)
	lfs      f1, 0x40(r1)
	stfs     f1, 0x2c(r29)
	lfs      f1, 0x44(r1)
	stfs     f1, 0x30(r29)
	stfs     f0, 0x24(r29)
	stb      r0, 0x34(r29)
	lwz      r4, 0x10(r29)
	lwz      r12, 0(r4)
	lwz      r12, 0x194(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x34(r1)
	lfs      f0, 0x2c(r29)
	lfs      f3, 0x38(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x30(r29)
	lfs      f1, 0x30(r1)
	lfs      f0, 0x28(r29)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80519188@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801A5C68
	ble      lbl_801A5C6C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801A5C6C

lbl_801A5C68:
	fmr      f1, f0

lbl_801A5C6C:
	stfs     f1, 0x18(r29)
	lfs      f0, lbl_80519188@sda21(r2)
	stfs     f0, 0x38(r29)

lbl_801A5C78:
	lwz      r4, 0x10(r29)
	addi     r3, r1, 0x24
	lwz      r12, 0(r4)
	lwz      r12, 0x194(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x2c(r1)
	lfs      f5, 0x30(r29)
	lfs      f0, 0x28(r1)
	lfs      f6, 0x2c(r29)
	fsubs    f2, f1, f5
	lfs      f4, 0x24(r29)
	fsubs    f3, f0, f6
	lfs      f1, 0x24(r1)
	lfs      f7, 0x28(r29)
	fmuls    f0, f2, f4
	lbz      r0, 0x3d(r29)
	fsubs    f2, f1, f7
	fmuls    f1, f3, f4
	cmplwi   r0, 0
	fadds    f29, f5, f0
	fmuls    f0, f2, f4
	fadds    f30, f6, f1
	fadds    f31, f7, f0
	beq      lbl_801A5D34
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A65C0
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game18InteractSuckArrive@ha
	addi     r5, r4, __vt__Q24Game11Interaction@l
	stw      r30, 0x14(r1)
	addi     r0, r3, __vt__Q24Game18InteractSuckArrive@l
	addi     r4, r1, 0x10
	stw      r5, 0x10(r1)
	stw      r0, 0x10(r1)
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x3d(r29)

lbl_801A5D34:
	lfs      f1, 0x1c(r29)
	lfs      f0, lbl_80519188@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_801A5D60
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x19c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A5DD4

lbl_801A5D60:
	mr       r4, r30
	addi     r3, r1, 0x18
	lwz      r12, 0(r30)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	mr       r3, r30
	lfs      f1, 0x20(r1)
	addi     r4, r1, 0x64
	lfs      f2, 0x1c(r1)
	stfs     f0, 0x64(r1)
	lfs      f0, lbl_80519188@sda21(r2)
	stfs     f1, 0x6c(r1)
	stfs     f2, 0x68(r1)
	stfs     f0, 0x6c(r1)
	stfs     f0, 0x64(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	li       r0, 1
	lfs      f1, 0x1c(r29)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x1c(r29)
	stb      r0, 0x34(r29)
	b        lbl_801A65C0

lbl_801A5DD4:
	stfs     f31, 0x1b0(r30)
	lfs      f5, lbl_80519190@sda21(r2)
	stfs     f30, 0x1b4(r30)
	lfs      f1, lbl_805191B8@sda21(r2)
	stfs     f29, 0x1b8(r30)
	lfs      f2, lbl_805191B4@sda21(r2)
	stfs     f31, 0x3ac(r30)
	lfs      f0, lbl_80519188@sda21(r2)
	stfs     f30, 0x3b0(r30)
	stfs     f29, 0x3b4(r30)
	lfs      f4, 0x24(r29)
	lfs      f3, 0x20(r29)
	fsubs    f4, f5, f4
	fmuls    f1, f1, f4
	fmuls    f4, f4, f3
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801A5E48
	lfs      f0, lbl_805191AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_801A5E6C

lbl_801A5E48:
	lfs      f0, lbl_805191B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x98(r1)
	lwz      r0, 0x9c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_801A5E6C:
	lfs      f0, lbl_805191BC@sda21(r2)
	lfs      f3, lbl_805191C0@sda21(r2)
	fmuls    f1, f0, f1
	lfs      f0, lbl_80519190@sda21(r2)
	fadds    f4, f4, f1
	stfs     f4, 0x168(r30)
	stfs     f4, 0x16c(r30)
	stfs     f4, 0x170(r30)
	lwz      r3, sys@sda21(r13)
	lfs      f4, 0x38(r29)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x18(r29)
	fmuls    f2, f4, f2
	lfs      f4, 0x24(r29)
	fdivs    f1, f2, f1
	fadds    f1, f4, f1
	stfs     f1, 0x24(r29)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x38(r29)
	lfs      f2, 0x54(r3)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x38(r29)
	lfs      f1, 0x24(r29)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_801A65C0
	mr       r4, r30
	addi     r3, r1, 0x70
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	lis      r3, __vt__Q24Game11Interaction@ha
	li       r5, 0
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	lis      r4, __vt__Q24Game18InteractSuckFinish@ha
	stw      r0, 8(r1)
	addi     r6, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x70
	addi     r0, r4, __vt__Q24Game18InteractSuckFinish@l
	cmplwi   r5, 0
	stw      r6, 0x54(r1)
	stw      r5, 0x60(r1)
	stw      r5, 0x58(r1)
	stw      r3, 0x5c(r1)
	stw      r30, 0xc(r1)
	stw      r0, 8(r1)
	bne      lbl_801A5F3C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_801A60AC

lbl_801A5F3C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_801A5FA8

lbl_801A5F54:
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A60AC
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)

lbl_801A5FA8:
	lwz      r12, 0x54(r1)
	addi     r3, r1, 0x54
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A5F54
	b        lbl_801A60AC

lbl_801A5FC8:
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	addi     r4, r1, 8
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x60(r1)
	cmplwi   r0, 0
	bne      lbl_801A601C
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_801A60AC

lbl_801A601C:
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_801A6090

lbl_801A603C:
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A60AC
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)

lbl_801A6090:
	lwz      r12, 0x54(r1)
	addi     r3, r1, 0x54
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A603C

lbl_801A60AC:
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x58(r1)
	cmplw    r4, r3
	bne      lbl_801A5FC8
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game16InteractSuckDone@ha
	addi     r4, r4, __vt__Q24Game11Interaction@l
	li       r0, 0
	stw      r4, 0x48(r1)
	addi     r3, r3, __vt__Q24Game16InteractSuckDone@l
	addi     r4, r1, 0x48
	stw      r30, 0x4c(r1)
	stw      r3, 0x48(r1)
	stb      r0, 0x50(r1)
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, mgr__5Radar@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801A6158
	bl       getNumOtakaraItems__Q25Radar3MgrFv
	bl       getNumOtakaraItems__Q25Radar3MgrFv
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	subfic   r0, r0, 3
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_801A6158
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl

lbl_801A6158:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	beq      lbl_801A6458
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_801A61A8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_801A6458

lbl_801A61A8:
	bl       getNumOtakaraItems__Q25Radar3MgrFv
	cmpwi    r3, 1
	bgt      lbl_801A6458
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_801A639C
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801A61E4
	addi     r3, r31, 0x128
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A61E4:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_801A6204
	addi     r3, r31, 0x128
	addi     r5, r31, 0x28
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6204:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_801A6224
	addi     r3, r31, 0x134
	addi     r5, r31, 0x28
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6224:
	lwz      r3, 4(r28)
	lwz      r28, 4(r3)
	cmplwi   r28, 0
	bne      lbl_801A6248
	addi     r3, r31, 0x134
	addi     r5, r31, 0x140
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6248:
	lwz      r12, 0(r28)
	mr       r3, r28
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A6278
	addi     r3, r31, 0x164
	addi     r5, r31, 0x28
	li       r4, 0x177
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6278:
	mr       r3, r28
	bl       stopPollutionSe__Q23PSM10Scene_CaveFv
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_801A629C
	cmpwi    r0, 3
	bne      lbl_801A62A0

lbl_801A629C:
	li       r3, 1

lbl_801A62A0:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A6458
	lwz      r3, 0x35c(r30)
	addi     r4, r2, lbl_80519194@sda21
	lwz      r3, 0x40(r3)
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_801A6458
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801A62E0
	addi     r3, r31, 0x128
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A62E0:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_801A6300
	addi     r3, r31, 0x128
	addi     r5, r31, 0x28
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6300:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_801A6320
	addi     r3, r31, 0x134
	addi     r5, r31, 0x28
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6320:
	lwz      r3, 4(r28)
	lwz      r28, 4(r3)
	cmplwi   r28, 0
	bne      lbl_801A6344
	addi     r3, r31, 0x134
	addi     r5, r31, 0x140
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6344:
	lwz      r12, 0(r28)
	mr       r3, r28
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A6374
	addi     r3, r31, 0x164
	addi     r5, r31, 0x28
	li       r4, 0x177
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6374:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A6458
	mr       r3, r28
	bl       startPollutUpSe__Q23PSM10Scene_CaveFv
	b        lbl_801A6458

lbl_801A639C:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801A63BC
	addi     r3, r31, 0x128
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A63BC:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_801A63DC
	addi     r3, r31, 0x128
	addi     r5, r31, 0x28
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A63DC:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_801A63FC
	addi     r3, r31, 0x134
	addi     r5, r31, 0x28
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A63FC:
	lwz      r3, 4(r28)
	lwz      r28, 4(r3)
	cmplwi   r28, 0
	bne      lbl_801A6420
	addi     r3, r31, 0x134
	addi     r5, r31, 0x140
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6420:
	lwz      r12, 0(r28)
	mr       r3, r28
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A6450
	addi     r3, r31, 0x164
	addi     r5, r31, 0x28
	li       r4, 0x177
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A6450:
	mr       r3, r28
	bl       setPollutUp__Q23PSM12Scene_GroundFv

lbl_801A6458:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801A6484
	lbz      r0, 0x50(r1)
	cmplwi   r0, 0
	beq      lbl_801A6484
	addi     r3, r1, 0x70
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	b        lbl_801A65C0

lbl_801A6484:
	lbz      r0, 0x3c(r29)
	cmplwi   r0, 0
	bne      lbl_801A64D4
	lwz      r4, 0x35c(r30)
	addi     r3, r2, lbl_805191C4@sda21
	lwz      r4, 0x40(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801A64C4
	lwz      r3, 0x330(r30)
	li       r4, 0x3806
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_801A64C4:
	mr       r3, r30
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	b        lbl_801A6580

lbl_801A64D4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	beq      lbl_801A6510
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A6520

lbl_801A6510:
	mr       r3, r30
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	b        lbl_801A6580

lbl_801A6520:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	beq      lbl_801A6560
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_801A6580

lbl_801A6560:
	lwz      r5, sys@sda21(r13)
	addi     r3, r30, 0x41c
	lfs      f1, lbl_805191CC@sda21(r2)
	li       r4, 0
	lfs      f0, 0x54(r5)
	fmuls    f0, f1, f0
	stfs     f0, 0x438(r30)
	bl       setFrameByKeyType__Q28SysShape8AnimatorFUl

lbl_801A6580:
	lwz      r3, shadowMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801A6594
	mr       r4, r30
	bl       delShadow__Q24Game9ShadowMgrFPQ24Game8Creature

lbl_801A6594:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r3, r1, 0x70
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_801A65C0:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	lwz      r0, 0xe4(r1)
	lwz      r28, 0xa0(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A65F8
 * Size:	000004
 */
void PelletGoalState::cleanup(Pellet*) { }

/*
 * --INFO--
 * Address:	801A65FC
 * Size:	000144
 */
void PelletAppearState::init(Pellet* pelt, StateArg*)
{
	pelt->clearClaim();
	pelt->mScale = 0.01f;
	mGoalScale   = 1.0f;
	mTime        = 0.0f;
	mAngle       = 0.0f;

	_28      = randWeightFloat(0.6283185f) + TAU;
	_20      = randWeightFloat(0.4f) + 0.3f;
	_24      = randWeightFloat(0.8f) + 1.8f;
	_1C      = randWeightFloat(0.7f);
	mEfxMade = false;

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	mr       r3, r31
	bl       clearClaim__Q24Game6PelletFv
	lfs      f2, lbl_805191D0@sda21(r2)
	lfs      f1, lbl_80519190@sda21(r2)
	stfs     f2, 0x168(r31)
	lfs      f0, lbl_80519188@sda21(r2)
	stfs     f2, 0x16c(r31)
	stfs     f2, 0x170(r31)
	stfs     f1, 0x18(r30)
	stfs     f0, 0x10(r30)
	stfs     f0, 0x14(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_805191F0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_805191D4@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_805191D8@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_805191B8@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x28(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_805191F0@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_805191D4@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_805191E0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_805191DC@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x20(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f3, lbl_805191F0@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f2, lbl_805191D4@sda21(r2)
	lfd      f0, 0x18(r1)
	lfs      f1, lbl_805191E8@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_805191E4@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x24(r30)
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r3, 0x4330
	stw      r0, 0x24(r1)
	li       r0, 0
	lfd      f3, lbl_805191F0@sda21(r2)
	stw      r3, 0x20(r1)
	lfs      f1, lbl_805191D4@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_805191EC@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x1c(r30)
	stb      r0, 0x2c(r30)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A6740
 * Size:	000240
 */
void PelletAppearState::exec(Pellet* pelt)
{
	f32 min   = mTime;
	f32 max   = _1C;
	f32 scale = 0.0f;
	if (max <= min) {
		if (max + _20 <= min) {
			min   = (min - max) / _20;
			scale = min * min;
		} else {
			if (!mEfxMade) {
				::efx::Arg arg(Vector3f(pelt->mObjMatrix.mMatrix.structView.tx, pelt->mObjMatrix.mMatrix.structView.ty,
				                        pelt->mObjMatrix.mMatrix.structView.tz));
				::efx::TTsuyuGrowOn efx;
				efx.create(&arg);
				pelt->mSoundMgr->startSound(PSSE_EV_TSUYUKUSA_FRUIT, 0);
				mEfxMade = true;
			}
			mAngle += roundAng(_28 * sys->mDeltaTime);

			f32 temp   = pikmin2_sinf(mAngle);
			f32 idk    = (mTime - (_1C + _20)) / _24;
			mGoalScale = -(idk * idk - 1.0f);
			scale      = mGoalScale * 0.2f * temp + 1.0f;
			if (mTime >= _24 + _1C + _20) {
				transit(pelt, PELSTATE_Normal, nullptr);
				scale = 1.0f;
			}
		}
	}
	mTime += sys->mDeltaTime;
	if (scale == 0.0f) {
		scale = 0.001f;
	}
	pelt->mScale = scale;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x10(r30)
	mr       r31, r4
	lfs      f1, 0x1c(r30)
	lfs      f31, 0x54(r3)
	fcmpo    cr0, f2, f1
	lfs      f30, lbl_80519188@sda21(r2)
	blt      lbl_801A6930
	lfs      f3, 0x20(r30)
	fadds    f0, f1, f3
	fcmpo    cr0, f2, f0
	bge      lbl_801A67A8
	fsubs    f0, f2, f1
	fdivs    f0, f0, f3
	fmuls    f30, f0, f0
	b        lbl_801A6930

lbl_801A67A8:
	lbz      r0, 0x2c(r30)
	cmplwi   r0, 0
	bne      lbl_801A683C
	lis      r3, __vt__Q23efx5TBase@ha
	lfs      f0, 0x144(r31)
	lfs      f1, 0x154(r31)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lfs      f2, 0x164(r31)
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r5, r3, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx12TTsuyuGrowon@ha
	stw      r0, 0x18(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	addi     r0, r3, __vt__Q23efx3Arg@l
	li       r7, 0x1c1
	li       r6, 0
	stw      r5, 0x18(r1)
	addi     r5, r4, __vt__Q23efx12TTsuyuGrowon@l
	addi     r3, r1, 0x18
	sth      r7, 0x1c(r1)
	addi     r4, r1, 8
	stw      r6, 0x20(r1)
	stw      r5, 0x18(r1)
	stw      r0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f2, 0x14(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	lwz      r3, 0x330(r31)
	li       r4, 0x3840
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x2c(r30)

lbl_801A683C:
	lfs      f1, 0x28(r30)
	lfs      f0, 0x14(r30)
	fmadds   f1, f1, f31, f0
	bl       roundAng__Ff
	stfs     f1, 0x14(r30)
	lfs      f2, lbl_805191F8@sda21(r2)
	lfs      f1, 0x18(r30)
	lfs      f3, 0x14(r30)
	lfs      f0, lbl_80519188@sda21(r2)
	fmuls    f5, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_801A6898
	lfs      f0, lbl_805191AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f4, f0
	b        lbl_801A68BC

lbl_801A6898:
	lfs      f0, lbl_805191B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f4, r3, r0

lbl_801A68BC:
	lfs      f1, 0x1c(r30)
	lfs      f0, 0x20(r30)
	lfs      f3, lbl_80519190@sda21(r2)
	fadds    f1, f1, f0
	lfs      f2, 0x10(r30)
	lfs      f0, 0x24(r30)
	fmadds   f30, f5, f4, f3
	fsubs    f1, f2, f1
	fdivs    f0, f1, f0
	fnmsubs  f0, f0, f0, f3
	stfs     f0, 0x18(r30)
	lfs      f1, 0x1c(r30)
	lfs      f0, 0x20(r30)
	lfs      f2, 0x24(r30)
	fadds    f0, f1, f0
	lfs      f1, 0x10(r30)
	fadds    f0, f2, f0
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_801A6930
	mr       r3, r30
	fmr      f30, f3
	lwz      r12, 0(r30)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801A6930:
	lfs      f1, 0x10(r30)
	lfs      f0, lbl_80519188@sda21(r2)
	fadds    f1, f1, f31
	fcmpu    cr0, f0, f30
	stfs     f1, 0x10(r30)
	bne      lbl_801A694C
	lfs      f30, lbl_805191D0@sda21(r2)

lbl_801A694C:
	stfs     f30, 0x168(r31)
	stfs     f30, 0x16c(r31)
	stfs     f30, 0x170(r31)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x64(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A6980
 * Size:	000004
 */
void PelletAppearState::cleanup(Pellet*) { }

/*
 * --INFO--
 * Address:	801A6984
 * Size:	000130
 */
void PelletScaleAppearState::init(Pellet* pelt, StateArg*)
{
	pelt->clearClaim();
	pelt->mScale = 0.01f;
	mGoalScale   = 1.0f;
	mTime        = 0.0f;
	mAngle       = 0.0f;

	_28      = randWeightFloat(0.6283185f) + 18.84956f;
	_20      = randWeightFloat(0.05f) + 0.1f;
	_24      = randWeightFloat(0.2f) + 0.6f;
	_1C      = 0.0f;
	mEfxMade = false;
	pelt->setCollisionFlick(false);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	mr       r3, r31
	bl       clearClaim__Q24Game6PelletFv
	lfs      f2, lbl_805191D0@sda21(r2)
	lfs      f1, lbl_80519190@sda21(r2)
	stfs     f2, 0x168(r31)
	lfs      f0, lbl_80519188@sda21(r2)
	stfs     f2, 0x16c(r31)
	stfs     f2, 0x170(r31)
	stfs     f1, 0x18(r30)
	stfs     f0, 0x10(r30)
	stfs     f0, 0x14(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_805191F0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_805191D4@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_805191D8@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_805191FC@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x28(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_805191F0@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_805191D4@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_80519204@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519200@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x20(r30)
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r4, 0x4330
	stw      r0, 0x1c(r1)
	li       r0, 0
	lfd      f1, lbl_805191F0@sda21(r2)
	mr       r3, r31
	stw      r4, 0x18(r1)
	li       r4, 0
	lfs      f3, lbl_805191D4@sda21(r2)
	lfd      f0, 0x18(r1)
	lfs      f2, lbl_805191F8@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, lbl_80519208@sda21(r2)
	lfs      f0, lbl_80519188@sda21(r2)
	fdivs    f3, f4, f3
	fmadds   f1, f2, f3, f1
	stfs     f1, 0x24(r30)
	stfs     f0, 0x1c(r30)
	stb      r0, 0x2c(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A6AB4
 * Size:	0001BC
 * This state is mostly identical to PelletAppearState but without the particle/sound
 */
void PelletScaleAppearState::exec(Pellet* pelt)
{
	f32 min   = mTime;
	f32 max   = _1C;
	f32 scale = 0.0f;
	if (max <= min) {
		if (max + _20 <= min) {
			min   = (min - max) / _20;
			scale = min * min;
		} else {
			if (!mEfxMade) {
				mEfxMade = true;
			}
			mAngle += roundAng(_28 * sys->mDeltaTime);

			f32 temp   = pikmin2_sinf(mAngle);
			f32 idk    = (mTime - (_1C + _20)) / _24;
			mGoalScale = -(idk * idk - 1.0f);
			scale      = mGoalScale * 0.2f * temp + 1.0f;
			if (mTime >= _24 + _1C + _20) {
				transit(pelt, PELSTATE_Normal, nullptr);
				scale = 1.0f;
			}
		}
	}
	mTime += sys->mDeltaTime;
	if (scale == 0.0f) {
		scale = 0.001f;
	}
	pelt->mScale = scale;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x10(r30)
	mr       r31, r4
	lfs      f1, 0x1c(r30)
	lfs      f31, 0x54(r3)
	fcmpo    cr0, f2, f1
	lfs      f30, lbl_80519188@sda21(r2)
	blt      lbl_801A6C20
	lfs      f3, 0x20(r30)
	fadds    f0, f1, f3
	fcmpo    cr0, f2, f0
	bge      lbl_801A6B18
	fsubs    f0, f2, f1
	fdivs    f30, f0, f3
	b        lbl_801A6C20

lbl_801A6B18:
	lbz      r0, 0x2c(r30)
	cmplwi   r0, 0
	bne      lbl_801A6B2C
	li       r0, 1
	stb      r0, 0x2c(r30)

lbl_801A6B2C:
	lfs      f1, 0x28(r30)
	lfs      f0, 0x14(r30)
	fmadds   f1, f1, f31, f0
	bl       roundAng__Ff
	stfs     f1, 0x14(r30)
	lfs      f2, lbl_80519200@sda21(r2)
	lfs      f1, 0x18(r30)
	lfs      f3, 0x14(r30)
	lfs      f0, lbl_80519188@sda21(r2)
	fmuls    f5, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_801A6B88
	lfs      f0, lbl_805191AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f4, f0
	b        lbl_801A6BAC

lbl_801A6B88:
	lfs      f0, lbl_805191B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f4, r3, r0

lbl_801A6BAC:
	lfs      f1, 0x1c(r30)
	lfs      f0, 0x20(r30)
	lfs      f3, lbl_80519190@sda21(r2)
	fadds    f1, f1, f0
	lfs      f2, 0x10(r30)
	lfs      f0, 0x24(r30)
	fmadds   f30, f5, f4, f3
	fsubs    f1, f2, f1
	fdivs    f0, f1, f0
	fnmsubs  f0, f0, f0, f3
	stfs     f0, 0x18(r30)
	lfs      f1, 0x1c(r30)
	lfs      f0, 0x20(r30)
	lfs      f2, 0x24(r30)
	fadds    f0, f1, f0
	lfs      f1, 0x10(r30)
	fadds    f0, f2, f0
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_801A6C20
	mr       r3, r30
	fmr      f30, f3
	lwz      r12, 0(r30)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801A6C20:
	lfs      f1, 0x10(r30)
	lfs      f0, lbl_80519188@sda21(r2)
	fadds    f1, f1, f31
	fcmpu    cr0, f0, f30
	stfs     f1, 0x10(r30)
	bne      lbl_801A6C3C
	lfs      f30, lbl_805191D0@sda21(r2)

lbl_801A6C3C:
	stfs     f30, 0x168(r31)
	stfs     f30, 0x16c(r31)
	stfs     f30, 0x170(r31)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x44(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A6C70
 * Size:	000034
 */
void PelletScaleAppearState::cleanup(Pellet* pelt) { pelt->setCollisionFlick(true); }

/*
 * --INFO--
 * Address:	801A6CA4
 * Size:	000024
 */
void PelletBuryState::init(Pellet* pelt, StateArg*) { pelt->clearClaim(); }

/*
 * --INFO--
 * Address:	801A6CC8
 * Size:	000004
 */
void PelletBuryState::exec(Pellet*) { }

/*
 * --INFO--
 * Address:	801A6CCC
 * Size:	000004
 */
void PelletBuryState::cleanup(Pellet*) { }

/*
 * --INFO--
 * Address:	801A6CD0
 * Size:	000038
 */
void PelletZukanState::init(Pellet* pelt, StateArg*)
{
	pelt->clearClaim();
	mTimer = 0.0f;
}

/*
 * --INFO--
 * Address:	801A6D08
 * Size:	000094
 */
void PelletZukanState::exec(Pellet* pelt)
{
	mTimer += sys->mDeltaTime * PI;
	if (mTimer > TAU) {
		mTimer = 0.0f;
	}
	Vector3f pos = pelt->getPosition();
	pelt->mObjMatrix.makeT(pos);
}

/*
 * --INFO--
 * Address:	801A6D9C
 * Size:	000004
 */
void PelletZukanState::cleanup(Pellet*) { }

/*
 * --INFO--
 * Address:	801A6DA0
 * Size:	000024
 */
void PelletUpState::init(Pellet* pelt, StateArg*) { pelt->clearClaim(); }

/*
 * --INFO--
 * Address:	801A6DC4
 * Size:	000004
 */
void PelletUpState::exec(Pellet*) { }

/*
 * --INFO--
 * Address:	801A6DC8
 * Size:	000004
 */
void PelletUpState::cleanup(Pellet*) { }

/*
 * --INFO--
 * Address:	801A6DCC
 * Size:	0000F0
 */
PelletReturnState::PelletReturnState()
    : PelletState(PELSTATE_Return)
{
	mEfx    = nullptr;
	mEfxAct = nullptr;
	if (gameSystem->isVersusMode()) {
		mEfx    = new ::efx::TOrimaLight;
		mEfxAct = new ::efx::TOrimaLightAct;
	}
}

/*
 * --INFO--
 * Address:	801A6EBC
 * Size:	000318
 */
void PelletReturnState::init(Pellet* pelt, StateArg* arg)
{
	bool flag                  = false;
	mPathCheckID               = 0;
	PelletReturnStateArg* sarg = static_cast<PelletReturnStateArg*>(arg);
	if (arg) {
		mGoalPos = sarg->mPosition;
		if (initPathfinding(pelt) == 1) {
			flag = true;
		}
	}

	if (!flag) {
		transit(pelt, PELSTATE_Normal, nullptr);
	} else {
		if (mEfx && mEfxAct) {
			mEfx->_2C    = 0;
			mEfxAct->_2C = 0;
			mEfx->setMtxptr(pelt->mObjMatrix.mMatrix.mtxView);
			mEfxAct->setMtxptr(pelt->mObjMatrix.mMatrix.mtxView);
			mEfx->create(nullptr);
			mEfxAct->create(nullptr);
		}
	}

	mTimer      = 0.0f;
	mPeltYScale = 1.0f;
	mDoEfx      = false;
	mDoFlick    = false;
	pelt->endCapture();
	pelt->endStick();

	Stickers stick(pelt);
	Iterator<Creature> it(&stick);
	CI_LOOP(it)
	{
		Creature* obj = *it;
		obj->endStick();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000280
 */
void PelletReturnState::flick(Pellet*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A71D4
 * Size:	0000D8
 */
void PelletReturnState::exec(Pellet* pelt)
{
	bool end = false;
	switch (mState) {
	case 0:
		int check = execPathfinding(pelt);
		if (check == 2) {
			end = true;
		}
		break;
	case 1:
		check = execMove(pelt);
		if (check == 2) {
			end = true;
		} else if (check == 1) {
			end = true;
		}
		break;
	case 2:
		check = execMoveGoal(pelt);
		if (check == 2) {
			end = true;
		}
		break;
	}

	if (end) {
		transit(pelt, PELSTATE_Normal, nullptr);
	}
}

/*
 * --INFO--
 * Address:	801A72AC
 * Size:	00009C
 */
void PelletReturnState::cleanup(Pellet* pelt)
{
	if (mEfx && mEfxAct) {
		mEfx->fade();
		mEfxAct->fade();
	}
	pelt->mScale = 1.0f;
	if (mPathCheckID) {
		testPathfinder->release(mPathCheckID);
		mPathCheckID = 0;
	}
}

/*
 * --INFO--
 * Address:	801A7348
 * Size:	0001B4
 */
int PelletReturnState::initPathfinding(Pellet* pelt)
{
	Vector3f pelletPos = pelt->getPosition();
	WPEdgeSearchArg arg(pelletPos);
	if (pelt->inWater()) {
		arg.mInWater = true;
	}

	WayPoint* start;
	if (mapMgr->mRouteMgr->getNearestEdge(arg)) {
		start = arg.mWp2;
		if (!(arg.mWp1->mFlags & WPF_Closed)) {
			start = arg.mWp1;
		}
	} else if (mapMgr->mRouteMgr->getNearestEdge(arg)) {
		start = arg.mWp1;
		if (arg.mWp1->mFlags & WPF_Closed) {
			start = arg.mWp2;
		}
	} else {
		return 2; // exit state
	}

	if (mPathCheckID) {
		testPathfinder->release(mPathCheckID);
		mPathCheckID = 0;
	}

	WPSearchArg arg2(mGoalPos, nullptr, false, 10.0f);
	WayPoint* end = mapMgr->mRouteMgr->getNearestWayPoint(arg2);
	if (!end) {
		return 2; // exit state

	} else {
		PathfindRequest req(start->mIndex, end->mIndex, 1);
		mPathCheckID = testPathfinder->start(req);
		mState       = 0;
		return 1;
	}
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	addi     r3, r1, 0x10
	stw      r30, 0x58(r1)
	mr       r30, r4
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x10(r1)
	li       r4, 0
	lfs      f1, 0x14(r1)
	li       r0, -1
	lfs      f0, 0x18(r1)
	mr       r3, r30
	stw      r4, 0x50(r1)
	stw      r4, 0x4c(r1)
	stb      r4, 0x40(r1)
	sth      r0, 0x48(r1)
	stw      r4, 0x44(r1)
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A73D0
	li       r0, 1
	stb      r0, 0x40(r1)

lbl_801A73D0:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x34
	lwz      r3, 8(r3)
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A7408
	lwz      r3, 0x4c(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_801A7400
	mr       r30, r3
	b        lbl_801A7448

lbl_801A7400:
	lwz      r30, 0x50(r1)
	b        lbl_801A7448

lbl_801A7408:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x34
	lwz      r3, 8(r3)
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A7440
	lwz      r3, 0x4c(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_801A7438
	lwz      r30, 0x50(r1)
	b        lbl_801A7448

lbl_801A7438:
	mr       r30, r3
	b        lbl_801A7448

lbl_801A7440:
	li       r3, 2
	b        lbl_801A74E4

lbl_801A7448:
	lwz      r4, 0x1c(r31)
	cmplwi   r4, 0
	beq      lbl_801A7464
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl
	li       r0, 0
	stw      r0, 0x1c(r31)

lbl_801A7464:
	lfs      f1, 0x20(r31)
	li       r0, 0
	lfs      f0, lbl_80519218@sda21(r2)
	addi     r4, r1, 0x1c
	stfs     f1, 0x1c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lfs      f1, 0x24(r31)
	stfs     f1, 0x20(r1)
	lfs      f1, 0x28(r31)
	stfs     f1, 0x24(r1)
	stw      r0, 0x28(r1)
	stb      r0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	cmplwi   r3, 0
	bne      lbl_801A74B0
	li       r3, 2
	b        lbl_801A74E4

lbl_801A74B0:
	lha      r6, 0x36(r3)
	li       r0, 1
	lha      r5, 0x36(r30)
	addi     r4, r1, 8
	lwz      r3, testPathfinder__4Game@sda21(r13)
	sth      r5, 8(r1)
	sth      r6, 0xa(r1)
	stb      r0, 0xc(r1)
	bl       start__Q24Game10PathfinderFRQ24Game15PathfindRequest
	stw      r3, 0x1c(r31)
	li       r0, 0
	li       r3, 1
	sth      r0, 0x1a(r31)

lbl_801A74E4:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A74FC
 * Size:	000090
 */
u32 PelletReturnState::execPathfinding(Pellet* pelt)
{
	if (mPathCheckID == 0) {
		return 2;
	}

	int state = testPathfinder->check(mPathCheckID);
	switch (state) {
	case 0:
		mPathNodes    = testPathfinder->makepath(mPathCheckID, &mPathNode);
		mPathNodePrev = mPathNode;
		mState        = 1;
		break;
	case 1:
		return 2;
	}
	return 0;
}

/*
 * --INFO--
 * Address:	801A758C
 * Size:	000858
 */
u32 PelletReturnState::execMove(Pellet* pelt)
{
	WayPoint* currWP = mapMgr->mRouteMgr->getWayPoint(mPathNode->mWpIndex);
	f32 x            = currWP->mPosition.x;
	f32 z            = currWP->mPosition.z;
	Vector3f peltPos = pelt->getPosition();
	z -= peltPos.z;
	x -= peltPos.x;
	f32 zero = 0.0f;
	f32 dist = (z * z) + (x * x + zero);
	Vector3f vec(x, dist, z);
	f32 n = vec.normalise();
	if (n > 15.0f) {
		transit(pelt, PELSTATE_Normal, nullptr);
		return 1;
	} else {
		mPathNode = mPathNode->mNext;
		if (mPathNode) {
			f32 yoffs;
			f32 time = mTimer;
			if (time < 0.1f) {
				yoffs       = 0.0f;
				f32 scale   = (time / 0.1f) * PI * 0.5f;
				mPeltYScale = -(pikmin2_sinf(scale) * 0.3f - 1.0f);
			} else if (time < 0.9f) {
				if (!mDoEfx && !pelt->inWater()) {
					pelt->mSoundMgr->startSound(PSSE_EN_FROG_LAND, 0);
					Vector3f pos = pelt->getPosition();
					::efx::Arg arg(pos);
					arg.mPosition.y = -(pelt->getCylinderHeight() * 0.5f - arg.mPosition.y);
					::efx::TEnemyDownSmoke efx;
					efx.mScale = 0.5f;
					efx.create(&arg);
				}
				mDoEfx      = true;
				f32 scale   = (mTimer - 0.9f) / 0.1f * PI * 0.5f;
				mPeltYScale = pikmin2_sinf(scale) * 0.3f + 0.7f;
			} else {
				if (!mDoFlick) {
					pelt->mSoundMgr->startSound(PSSE_EN_FROG_JUMP, 0);
					mDoFlick = true;
					Stickers stick(pelt);
					Iterator<Creature> it(&stick);
					f32 dmg   = 100.0f;
					f32 ang   = -1000.0f;
					f32 intes = 0.0f;
					CI_LOOP(it)
					{
						Creature* obj = *it;
						InteractFlick flick(pelt, intes, dmg, ang);
						obj->stimulate(flick);
					}
				}
			}

			mTimer += sys->mDeltaTime;
			if (mTimer > 1.0f) {
				mTimer      = 0.0f;
				mPeltYScale = 1.0f;
				mDoEfx      = 0;
				mDoFlick    = 0;
			}
			Vector3f velocity  = vec * 200.0f;
			Vector3f velocity2 = pelt->getVelocity();
			velocity           = velocity2 + (velocity - velocity2) * 0.2f;

			Vector3f pos = pelt->getPosition();
			f32 y        = pelt->getCylinderHeight() * 0.5f;
			pos.y        = yoffs + mapMgr->getMinY(pos) + y;
			pelt->setPosition(pos, false);
			pelt->mScale = Vector3f(1.0f, mPeltYScale, 1.0f);
			pelt->setVelocity(velocity);
			return 0;
		}
	}

	/*
	stwu     r1, -0x150(r1)
	mflr     r0
	stw      r0, 0x154(r1)
	stfd     f31, 0x140(r1)
	psq_st   f31, 328(r1), 0, qr0
	stfd     f30, 0x130(r1)
	psq_st   f30, 312(r1), 0, qr0
	stfd     f29, 0x120(r1)
	psq_st   f29, 296(r1), 0, qr0
	stfd     f28, 0x110(r1)
	psq_st   f28, 280(r1), 0, qr0
	stfd     f27, 0x100(r1)
	psq_st   f27, 264(r1), 0, qr0
	stfd     f26, 0xf0(r1)
	psq_st   f26, 248(r1), 0, qr0
	stfd     f25, 0xe0(r1)
	psq_st   f25, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	stw      r28, 0xd0(r1)
	lwz      r6, mapMgr__4Game@sda21(r13)
	mr       r30, r3
	lwz      r5, 0x2c(r3)
	mr       r31, r4
	lwz      r3, 8(r6)
	lha      r4, 0x20(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f25, 0x4c(r3)
	lwz      r12, 0(r31)
	lfs      f26, 0x54(r3)
	addi     r3, r1, 0x3c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x44(r1)
	lfs      f0, 0x3c(r1)
	fsubs    f28, f26, f1
	lfs      f29, lbl_80519188@sda21(r2)
	fsubs    f30, f25, f0
	fmuls    f1, f28, f28
	fmadds   f0, f30, f30, f29
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f29
	ble      lbl_801A7660
	ble      lbl_801A7664
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801A7664

lbl_801A7660:
	fmr      f1, f29

lbl_801A7664:
	lfs      f0, lbl_80519188@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A7688
	lfs      f0, lbl_80519190@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f30, f30, f0
	fmuls    f29, f29, f0
	fmuls    f28, f28, f0
	b        lbl_801A768C

lbl_801A7688:
	fmr      f1, f0

lbl_801A768C:
	lfs      f0, lbl_8051921C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_801A76D8
	lwz      r3, 0x2c(r30)
	lwz      r0, 0xc(r3)
	stw      r0, 0x2c(r30)
	lwz      r0, 0x2c(r30)
	cmplwi   r0, 0
	bne      lbl_801A76D8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_801A7D8C

lbl_801A76D8:
	lfs      f1, 0x10(r30)
	lfs      f0, lbl_80519200@sda21(r2)
	lwz      r3, sys@sda21(r13)
	fcmpo    cr0, f1, f0
	lfs      f31, 0x54(r3)
	bge      lbl_801A7774
	fdivs    f0, f1, f0
	lfs      f1, lbl_8051920C@sda21(r2)
	lfs      f2, lbl_80519220@sda21(r2)
	lfs      f27, lbl_80519188@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f1, f2, f0
	fcmpo    cr0, f1, f27
	bge      lbl_801A773C
	lfs      f0, lbl_805191AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_801A7760

lbl_801A773C:
	lfs      f0, lbl_805191B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_801A7760:
	lfs      f1, lbl_805191DC@sda21(r2)
	lfs      f0, lbl_80519190@sda21(r2)
	fnmsubs  f0, f1, f2, f0
	stfs     f0, 0x14(r30)
	b        lbl_801A7C34

lbl_801A7774:
	lfs      f0, lbl_80519224@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_801A7ABC
	lbz      r0, 0x19(r30)
	cmplwi   r0, 0
	bne      lbl_801A79CC
	lwz      r3, 0x330(r31)
	li       r4, 0x5826
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	mr       r4, r31
	stb      r0, 0x19(r30)
	addi     r3, r1, 0x80
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x80
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801A77FC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A7884

lbl_801A77FC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A7868

lbl_801A7814:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A7884
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A7868:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A7814

lbl_801A7884:
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractFlick@ha
	lfs      f25, lbl_80519210@sda21(r2)
	addi     r28, r4, __vt__Q24Game11Interaction@l
	lfs      f26, lbl_80519188@sda21(r2)
	addi     r29, r3, __vt__Q24Game13InteractFlick@l
	lfs      f27, lbl_80519214@sda21(r2)
	b        lbl_801A79A0

lbl_801A78A4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	stw      r28, 0x9c(r1)
	addi     r4, r1, 0x9c
	stw      r31, 0xa0(r1)
	stw      r29, 0x9c(r1)
	stfs     f25, 0xa4(r1)
	stfs     f26, 0xa8(r1)
	stfs     f27, 0xac(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801A7910
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A79A0

lbl_801A7910:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A7984

lbl_801A7930:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A79A0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A7984:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A7930

lbl_801A79A0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801A78A4
	addi     r3, r1, 0x80
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_801A79CC:
	lfs      f2, 0x10(r30)
	lfs      f0, lbl_80519200@sda21(r2)
	lfs      f1, lbl_80519224@sda21(r2)
	fsubs    f2, f2, f0
	lfs      f3, lbl_8051920C@sda21(r2)
	lfs      f0, lbl_80519188@sda21(r2)
	fdivs    f1, f2, f1
	fmuls    f3, f3, f1
	fcmpo    cr0, f3, f0
	bge      lbl_801A7A20
	lfs      f0, lbl_805191AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_801A7A44

lbl_801A7A20:
	lfs      f0, lbl_805191B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_801A7A44:
	lfs      f1, lbl_80519228@sda21(r2)
	lfs      f0, lbl_80519188@sda21(r2)
	fmuls    f27, f1, f2
	lfs      f2, lbl_8051922C@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_801A7A88
	lfs      f0, lbl_805191AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xc0(r1)
	lwz      r0, 0xc4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_801A7AAC

lbl_801A7A88:
	lfs      f0, lbl_805191B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_801A7AAC:
	lfs      f0, lbl_805191EC@sda21(r2)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x14(r30)
	b        lbl_801A7C34

lbl_801A7ABC:
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_801A7B98
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A7B98
	lwz      r3, 0x330(r31)
	li       r4, 0x5827
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x30
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f25, 0x30(r1)
	mr       r3, r31
	lfs      f26, 0x34(r1)
	lfs      f27, 0x38(r1)
	bl       getCylinderHeight__Q24Game6PelletFv
	lis      r3, __vt__Q23efx5TBase@ha
	lfs      f2, lbl_80519220@sda21(r2)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lfs      f0, lbl_80519190@sda21(r2)
	lis      r3, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x60(r1)
	fnmsubs  f26, f2, f1, f26
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	stfs     f0, 0x6c(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx15TEnemyDownSmoke@ha
	li       r6, 0x53
	addi     r7, r4, __vt__Q23efx3Arg@l
	li       r5, 0
	stw      r0, 0x60(r1)
	addi     r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
	addi     r3, r1, 0x60
	addi     r4, r1, 0x70
	stw      r7, 0x70(r1)
	stfs     f25, 0x74(r1)
	stfs     f26, 0x78(r1)
	stfs     f27, 0x7c(r1)
	sth      r6, 0x64(r1)
	stw      r5, 0x68(r1)
	stw      r0, 0x60(r1)
	stfs     f2, 0x6c(r1)
	bl       create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg

lbl_801A7B98:
	li       r0, 1
	lfs      f0, lbl_80519224@sda21(r2)
	stb      r0, 0x18(r30)
	lfs      f1, lbl_80519230@sda21(r2)
	lfs      f2, 0x10(r30)
	lfs      f3, lbl_8051920C@sda21(r2)
	fsubs    f2, f2, f0
	lfs      f4, lbl_80519220@sda21(r2)
	lfs      f0, lbl_80519188@sda21(r2)
	fdivs    f1, f2, f1
	fmuls    f1, f3, f1
	fmuls    f1, f4, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801A7BFC
	lfs      f0, lbl_805191AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_801A7C20

lbl_801A7BFC:
	lfs      f0, lbl_805191B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0xc0(r1)
	lwz      r0, 0xc4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_801A7C20:
	lfs      f1, lbl_805191DC@sda21(r2)
	lfs      f0, lbl_805191EC@sda21(r2)
	lfs      f27, lbl_80519188@sda21(r2)
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x14(r30)

lbl_801A7C34:
	lfs      f0, 0x10(r30)
	lfs      f1, lbl_80519190@sda21(r2)
	fadds    f0, f0, f31
	stfs     f0, 0x10(r30)
	lfs      f0, 0x10(r30)
	fcmpo    cr0, f0, f1
	ble      lbl_801A7C68
	lfs      f0, lbl_80519188@sda21(r2)
	li       r0, 0
	stfs     f0, 0x10(r30)
	stfs     f1, 0x14(r30)
	stb      r0, 0x18(r30)
	stb      r0, 0x19(r30)

lbl_801A7C68:
	lfs      f0, lbl_80519234@sda21(r2)
	mr       r4, r31
	addi     r3, r1, 0x24
	fmuls    f2, f30, f0
	fmuls    f1, f29, f0
	fmuls    f0, f28, f0
	stfs     f2, 0x54(r1)
	stfs     f1, 0x58(r1)
	stfs     f0, 0x5c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x28(r1)
	mr       r4, r31
	lfs      f0, 0x58(r1)
	addi     r3, r1, 0x18
	lfs      f5, 0x2c(r1)
	lfs      f1, 0x5c(r1)
	fsubs    f0, f0, f4
	lfs      f2, lbl_805191F8@sda21(r2)
	fsubs    f1, f1, f5
	lfs      f3, 0x54(r1)
	lfs      f6, 0x24(r1)
	fmuls    f0, f0, f2
	fsubs    f3, f3, f6
	fmuls    f1, f1, f2
	fadds    f4, f4, f0
	fmuls    f0, f3, f2
	fadds    f1, f5, f1
	stfs     f4, 0x58(r1)
	fadds    f0, f6, f0
	stfs     f1, 0x5c(r1)
	stfs     f0, 0x54(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x18(r1)
	mr       r3, r31
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x20(r1)
	stfs     f2, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f0, 0x50(r1)
	bl       getCylinderHeight__Q24Game6PelletFv
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x48
	lfs      f0, lbl_80519220@sda21(r2)
	lwz      r12, 4(r3)
	fmuls    f25, f0, f1
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	fadds    f0, f25, f1
	mr       r3, r31
	addi     r4, r1, 0x48
	li       r5, 0
	fadds    f0, f27, f0
	stfs     f0, 0x4c(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f1, 0x14(r30)
	mr       r3, r31
	lfs      f0, lbl_80519190@sda21(r2)
	addi     r4, r1, 0x54
	stfs     f0, 0x168(r31)
	stfs     f1, 0x16c(r31)
	stfs     f0, 0x170(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_801A7D8C:
	psq_l    f31, 328(r1), 0, qr0
	lfd      f31, 0x140(r1)
	psq_l    f30, 312(r1), 0, qr0
	lfd      f30, 0x130(r1)
	psq_l    f29, 296(r1), 0, qr0
	lfd      f29, 0x120(r1)
	psq_l    f28, 280(r1), 0, qr0
	lfd      f28, 0x110(r1)
	psq_l    f27, 264(r1), 0, qr0
	lfd      f27, 0x100(r1)
	psq_l    f26, 248(r1), 0, qr0
	lfd      f26, 0xf0(r1)
	psq_l    f25, 232(r1), 0, qr0
	lfd      f25, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	lwz      r0, 0x154(r1)
	lwz      r28, 0xd0(r1)
	mtlr     r0
	addi     r1, r1, 0x150
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A7DE4
 * Size:	000008
 */
u32 PelletReturnState::execMoveGoal(Pellet*) { return 0; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PelletReturnState::getWayPont(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A7DEC
 * Size:	000008
 */
bool PelletState::isBuried() { return false; }

/*
 * --INFO--
 * Address:	801A7DF4
 * Size:	000008
 */
bool PelletState::appeared() { return true; }

/*
 * --INFO--
 * Address:	801A7DFC
 * Size:	000008
 */
bool PelletUpState::isBuried() { return true; }

/*
 * --INFO--
 * Address:	801A7E04
 * Size:	000008
 */
bool PelletBuryState::isBuried() { return true; }

/*
 * --INFO--
 * Address:	801A7E0C
 * Size:	000008
 */
bool PelletScaleAppearState::appeared() { return false; }

/*
 * --INFO--
 * Address:	801A7E14
 * Size:	000008
 */
bool PelletAppearState::appeared() { return false; }

/*
 * --INFO--
 * Address:	801A7E1C
 * Size:	000008
 */
bool PelletNormalState::isPickable() { return true; }

/*
 * --INFO--
 * Address:	801A7E24
 * Size:	000004
 */
void FSMState<Game::Pellet>::resume(Pellet*) { }

/*
 * --INFO--
 * Address:	801A7E28
 * Size:	000004
 */
void FSMState<Game::Pellet>::restart(Pellet*) { }

/*
 * --INFO--
 * Address:	801A7E2C
 * Size:	000064
 */
void StateMachine<Game::Pellet>::create(int count)
{
	mLimit          = count;
	mCount          = 0;
	mStates         = new FSMState<Game::Pellet>*[mLimit];
	mIndexToIDArray = new int[mLimit];
	mIdToIndexArray = new int[mLimit];
}

/*
 * --INFO--
 * Address:	801A7E90
 * Size:	000084
 */
void StateMachine<Game::Pellet>::registerState(FSMState<Game::Pellet>* newState)
{
	// copied all this from enemyFSM.cpp, do we actually need it here? no idea
	bool check;
	if (mCount >= mLimit) {
		return;
	}
	mStates[mCount] = newState;
	// TODO: This looks weird. How would they really have written it?
	if (!(0 <= newState->mId && newState->mId < mLimit)) {
		check = false;
	} else {
		check = true;
	}
	if (check == false) {
		return;
	}
	newState->mStateMachine        = this;
	mIndexToIDArray[mCount]        = newState->mId;
	mIdToIndexArray[newState->mId] = mCount;
	mCount++;
}

} // namespace Game

/*
 * --INFO--
 * Address:	801A7F14
 * Size:	000028
 */
void __sinit_pelletState_cpp()
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B5008@ha
	stw      r0, lbl_80515A08@sda21(r13)
	stfsu    f0, lbl_804B5008@l(r3)
	stfs     f0, lbl_80515A0C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
