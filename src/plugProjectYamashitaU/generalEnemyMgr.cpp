#include "Game/generalEnemyMgr.h"
#include "Game/Entities/Armor.h"
#include "Game/Entities/Baby.h"
#include "Game/Entities/BigFoot.h"
#include "Game/Entities/BigTreasure.h"
#include "Game/Entities/BlackMan.h"
#include "Game/Entities/BlueChappy.h"
#include "Game/Entities/BlueKochappy.h"
#include "Game/Entities/Bomb.h"
#include "Game/Entities/BombOtakara.h"
#include "Game/Entities/BombSarai.h"
#include "Game/Entities/Catfish.h"
#include "Game/Entities/Chappy.h"
#include "Game/Entities/Damagumo.h"
#include "Game/Entities/DangoMushi.h"
#include "Game/Entities/Demon.h"
#include "Game/Entities/Egg.h"
#include "Game/Entities/ElecBug.h"
#include "Game/Entities/ElecHiba.h"
#include "Game/Entities/ElecOtakara.h"
#include "Game/Entities/Fart.h"
#include "Game/Entities/FireChappy.h"
#include "Game/Entities/FireOtakara.h"
#include "Game/Entities/Frog.h"
#include "Game/Entities/Fuefuki.h"
#include "Game/Entities/GasHiba.h"
#include "Game/Entities/GasOtakara.h"
#include "Game/Entities/Hana.h"
#include "Game/Entities/Hanachirashi.h"
#include "Game/Entities/Hiba.h"
#include "Game/Entities/Houdai.h"
#include "Game/Entities/Imomushi.h"
#include "Game/Entities/Jigumo.h"
#include "Game/Entities/Kabuto.h"
#include "Game/Entities/KingChappy.h"
#include "Game/Entities/Kochappy.h"
#include "Game/Entities/Koganemushi.h"
#include "Game/Entities/KumaKochappy.h"
#include "Game/Entities/Kurage.h"
#include "Game/Entities/LeafChappy.h"
#include "Game/Entities/Mar.h"
#include "Game/Entities/MaroFrog.h"
#include "Game/Entities/MiniHoudai.h"
#include "Game/Entities/Miulin.h"
#include "Game/Entities/Nest.h"
#include "Game/Entities/OniKurage.h"
#include "Game/Entities/OoPanModoki.h"
#include "Game/Entities/PanModoki.h"
#include "Game/Entities/Pelplant.h"
#include "Game/Entities/Pom.h"
#include "Game/Entities/Queen.h"
#include "Game/Entities/Qurione.h"
#include "Game/Entities/Rock.h"
#include "Game/Entities/ShijimiChou.h"
#include "Game/Entities/SnakeCrow.h"
#include "Game/Entities/SnakeWhole.h"
#include "Game/Entities/Sokkuri.h"
#include "Game/Entities/Tadpole.h"
#include "Game/Entities/TamagoMushi.h"
#include "Game/Entities/Tank.h"
#include "Game/Entities/Tobi.h"
#include "Game/Entities/Tyre.h"
#include "Game/Entities/Ujia.h"
#include "Game/Entities/Ujib.h"
#include "Game/Entities/UmiMushi.h"
#include "Game/Entities/WaterOtakara.h"
#include "Game/Entities/Wealthy.h"
#include "Game/Entities/YellowChappy.h"
#include "Game/Entities/YellowKochappy.h"

namespace Game {

/*
 * --INFO--
 * Address:	8010BD3C
 * Size:	000FAC
 */
void GeneralEnemyMgr::createEnemyMgr(u8 type, int enemyID, int objLimit)
{
	EnemyInfoFunc::getEnemyInfo(enemyID, 0xFFFF);
	char* name = getEnemyName(enemyID, 0xFFFF);
	sys->heapStatusStart(name, nullptr);
	if (enemyID > 100) {
		return;
	}

	EnemyMgrBase* mgr;
	switch (enemyID) {
	case EnemyTypeID::EnemyID_Pelplant:
		mgr = new Pelplant::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_Kochappy:
		mgr = new Kochappy::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_BlueKochappy:
		mgr = new BlueKochappy::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_YellowKochappy:
		mgr = new YellowKochappy::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_Chappy:
		mgr = new Chappy::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_BlueChappy:
		mgr = new BlueChappy::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_YellowChappy:
		mgr = new YellowChappy::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_Pom:
		mgr = new Pom::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_Frog:
		mgr = new Frog::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_Kogane:
		mgr = new Koganemushi::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_Wealthy:
		mgr = new Wealthy::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_Fart:
		mgr = new Fart::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_Qurione:
		mgr = new Qurione::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_MaroFrog:
		mgr = new MaroFrog::Mgr(objLimit, type);
		break;
	case EnemyTypeID::EnemyID_Rock:
		mgr = new Rock::Mgr(objLimit, type);
		break;
	}

	mgr->alloc();
	_20.add(new EnemyMgrNode);
	sys->heapStatusEnd(name);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r29, r5
	mr       r28, r3
	lis      r5, 0x0000FFFF@ha
	mr       r30, r4
	mr       r31, r6
	mr       r3, r29
	addi     r4, r5, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lis      r5, 0x0000FFFF@ha
	mr       r3, r28
	mr       r4, r29
	addi     r5, r5, 0x0000FFFF@l
	bl       getEnemyName__Q24Game15GeneralEnemyMgrFii
	mr       r0, r3
	lwz      r3, sys@sda21(r13)
	mr       r27, r0
	li       r5, 0
	mr       r4, r27
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	cmplwi   r29, 0x64
	bgt      lbl_8010CC34
	lis      r3, lbl_804AB390@ha
	slwi     r0, r29, 2
	addi     r3, r3, lbl_804AB390@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_8010BDB8

lbl_8010BDB8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BDD8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game8Pelplant3MgrFiUc
	mr       r0, r3

lbl_8010BDD8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BDE0

lbl_8010BDE0:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BE00
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game8Kochappy3MgrFiUc
	mr       r0, r3

lbl_8010BE00:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BE08

lbl_8010BE08:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BE28
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game12BlueKochappy3MgrFiUc
	mr       r0, r3

lbl_8010BE28:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BE30

lbl_8010BE30:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BE50
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game14YellowKochappy3MgrFiUc
	mr       r0, r3

lbl_8010BE50:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BE58

lbl_8010BE58:
	li       r3, 0x50
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BE78
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game6Chappy3MgrFiUc
	mr       r0, r3

lbl_8010BE78:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BE80

lbl_8010BE80:
	li       r3, 0x50
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BEA0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game10BlueChappy3MgrFiUc
	mr       r0, r3

lbl_8010BEA0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BEA8

lbl_8010BEA8:
	li       r3, 0x54
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BEC8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game12YellowChappy3MgrFiUc
	mr       r0, r3

lbl_8010BEC8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BED0

lbl_8010BED0:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BEF0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game3Pom3MgrFiUc
	mr       r0, r3

lbl_8010BEF0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BEF8

lbl_8010BEF8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BF18
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game4Frog3MgrFiUc
	mr       r0, r3

lbl_8010BF18:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BF20

lbl_8010BF20:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BF40
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game11Koganemushi3MgrFiUc
	mr       r0, r3

lbl_8010BF40:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BF48

lbl_8010BF48:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BF68
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7Wealthy3MgrFiUc
	mr       r0, r3

lbl_8010BF68:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BF70

lbl_8010BF70:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BF90
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game4Fart3MgrFiUc
	mr       r0, r3

lbl_8010BF90:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BF98

lbl_8010BF98:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BFB8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7Qurione3MgrFiUc
	mr       r0, r3

lbl_8010BFB8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BFC0

lbl_8010BFC0:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010BFE0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game8MaroFrog3MgrFiUc
	mr       r0, r3

lbl_8010BFE0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010BFE8

lbl_8010BFE8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C008
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game4Rock3MgrFiUc
	mr       r0, r3

lbl_8010C008:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C010

lbl_8010C010:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C030
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game4Ujia3MgrFiUc
	mr       r0, r3

lbl_8010C030:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C038

lbl_8010C038:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C058
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game4Ujib3MgrFiUc
	mr       r0, r3

lbl_8010C058:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C060

lbl_8010C060:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C080
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game4Tobi3MgrFiUc
	mr       r0, r3

lbl_8010C080:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C088

lbl_8010C088:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C0A8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game5Armor3MgrFiUc
	mr       r0, r3

lbl_8010C0A8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C0B0

lbl_8010C0B0:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C0D0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game4Hiba3MgrFiUc
	mr       r0, r3

lbl_8010C0D0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C0D8

lbl_8010C0D8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C0F8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7GasHiba3MgrFiUc
	mr       r0, r3

lbl_8010C0F8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C100

lbl_8010C100:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C120
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game8ElecHiba3MgrFiUc
	mr       r0, r3

lbl_8010C120:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C128

lbl_8010C128:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C148
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game5Sarai3MgrFiUc
	mr       r0, r3

lbl_8010C148:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C150

lbl_8010C150:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C170
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game5Ftank3MgrFiUc
	mr       r0, r3

lbl_8010C170:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C178

lbl_8010C178:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C198
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game5Wtank3MgrFiUc
	mr       r0, r3

lbl_8010C198:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C1A0

lbl_8010C1A0:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C1C0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7Catfish3MgrFiUc
	mr       r0, r3

lbl_8010C1C0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C1C8

lbl_8010C1C8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C1E8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7Tadpole3MgrFiUc
	mr       r0, r3

lbl_8010C1E8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C1F0

lbl_8010C1F0:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C210
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7ElecBug3MgrFiUc
	mr       r0, r3

lbl_8010C210:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C218

lbl_8010C218:
	li       r3, 0x50
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C238
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game3Mar3MgrFiUc
	mr       r0, r3

lbl_8010C238:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C240

lbl_8010C240:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C260
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game5Queen3MgrFiUc
	mr       r0, r3

lbl_8010C260:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C268

lbl_8010C268:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C288
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game4Baby3MgrFiUc
	mr       r0, r3

lbl_8010C288:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C290

lbl_8010C290:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C2B0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game5Demon3MgrFiUc
	mr       r0, r3

lbl_8010C2B0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C2B8

lbl_8010C2B8:
	li       r3, 0x50
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C2D8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game10FireChappy3MgrFiUc
	mr       r0, r3

lbl_8010C2D8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C2E0

lbl_8010C2E0:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C300
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game9SnakeCrow3MgrFiUc
	mr       r0, r3

lbl_8010C300:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C308

lbl_8010C308:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C328
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game10KumaChappy3MgrFiUc
	mr       r0, r3

lbl_8010C328:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C330

lbl_8010C330:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C350
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game4Bomb3MgrFiUc
	mr       r0, r3

lbl_8010C350:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C358

lbl_8010C358:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C378
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game3Egg3MgrFiUc
	mr       r0, r3

lbl_8010C378:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C380

lbl_8010C380:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C3A0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game9PanModoki3MgrFiUc
	mr       r0, r3

lbl_8010C3A0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C3A8

lbl_8010C3A8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C3C8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game11OoPanModoki3MgrFiUc
	mr       r0, r3

lbl_8010C3C8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C3D0

lbl_8010C3D0:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C3F0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game4Nest3MgrFiUc
	mr       r0, r3

lbl_8010C3F0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C3F8

lbl_8010C3F8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C418
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7Fuefuki3MgrFiUc
	mr       r0, r3

lbl_8010C418:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C420

lbl_8010C420:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C440
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7Tanpopo3MgrFiUc
	mr       r0, r3

lbl_8010C440:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C448

lbl_8010C448:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C468
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game6Clover3MgrFiUc
	mr       r0, r3

lbl_8010C468:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C470

lbl_8010C470:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C490
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game12HikariKinoko3MgrFiUc
	mr       r0, r3

lbl_8010C490:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C498

lbl_8010C498:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C4B8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7Ooinu_s3MgrFiUc
	mr       r0, r3

lbl_8010C4B8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C4C0

lbl_8010C4C0:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C4E0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game11KareOoinu_s3MgrFiUc
	mr       r0, r3

lbl_8010C4E0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C4E8

lbl_8010C4E8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C508
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7Ooinu_l3MgrFiUc
	mr       r0, r3

lbl_8010C508:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C510

lbl_8010C510:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C530
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game11KareOoinu_l3MgrFiUc
	mr       r0, r3

lbl_8010C530:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C538

lbl_8010C538:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C558
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game8Wakame_s3MgrFiUc
	mr       r0, r3

lbl_8010C558:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C560

lbl_8010C560:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C580
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game8Wakame_l3MgrFiUc
	mr       r0, r3

lbl_8010C580:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C588

lbl_8010C588:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C5A8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7Tukushi3MgrFiUc
	mr       r0, r3

lbl_8010C5A8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C5B0

lbl_8010C5B0:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C5D0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game6Watage3MgrFiUc
	mr       r0, r3

lbl_8010C5D0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C5D8

lbl_8010C5D8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C5F8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game8DiodeRed3MgrFiUc
	mr       r0, r3

lbl_8010C5F8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C600

lbl_8010C600:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C620
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game10DiodeGreen3MgrFiUc
	mr       r0, r3

lbl_8010C620:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C628

lbl_8010C628:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C648
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game8Margaret3MgrFiUc
	mr       r0, r3

lbl_8010C648:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C650

lbl_8010C650:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C670
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game11Nekojarashi3MgrFiUc
	mr       r0, r3

lbl_8010C670:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C678

lbl_8010C678:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C698
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game9Chiyogami3MgrFiUc
	mr       r0, r3

lbl_8010C698:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C6A0

lbl_8010C6A0:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C6C0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game6Zenmai3MgrFiUc
	mr       r0, r3

lbl_8010C6C0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C6C8

lbl_8010C6C8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C6E8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game10KingChappy3MgrFiUc
	mr       r0, r3

lbl_8010C6E8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C6F0

lbl_8010C6F0:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C710
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game6Miulin3MgrFiUc
	mr       r0, r3

lbl_8010C710:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C718

lbl_8010C718:
	li       r3, 0x50
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C738
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game12Hanachirashi3MgrFiUc
	mr       r0, r3

lbl_8010C738:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C740

lbl_8010C740:
	li       r3, 0x50
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C760
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game8Damagumo3MgrFiUc
	mr       r0, r3

lbl_8010C760:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C768

lbl_8010C768:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C788
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game6Kurage3MgrFiUc
	mr       r0, r3

lbl_8010C788:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C790

lbl_8010C790:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C7B0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game9BombSarai3MgrFiUc
	mr       r0, r3

lbl_8010C7B0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C7B8

lbl_8010C7B8:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C7D8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game11FireOtakara3MgrFiUc
	mr       r0, r3

lbl_8010C7D8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C7E0

lbl_8010C7E0:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C800
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game12WaterOtakara3MgrFiUc
	mr       r0, r3

lbl_8010C800:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C808

lbl_8010C808:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C828
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game10GasOtakara3MgrFiUc
	mr       r0, r3

lbl_8010C828:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C830

lbl_8010C830:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C850
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game11ElecOtakara3MgrFiUc
	mr       r0, r3

lbl_8010C850:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C858

lbl_8010C858:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C878
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game11BombOtakara3MgrFiUc
	mr       r0, r3

lbl_8010C878:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C880

lbl_8010C880:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C8A0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game6Jigumo3MgrFiUc
	mr       r0, r3

lbl_8010C8A0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C8A8

lbl_8010C8A8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C8C8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game8Imomushi3MgrFiUc
	mr       r0, r3

lbl_8010C8C8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C8D0

lbl_8010C8D0:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C8F0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game6Houdai3MgrFiUc
	mr       r0, r3

lbl_8010C8F0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C8F8

lbl_8010C8F8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C918
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game10LeafChappy3MgrFiUc
	mr       r0, r3

lbl_8010C918:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C920

lbl_8010C920:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8010C940
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	bne      lbl_8010C940
	li       r31, 0xa
	b        lbl_8010C944

lbl_8010C940:
	li       r31, 0x1e

lbl_8010C944:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C964
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game11TamagoMushi3MgrFiUc
	mr       r0, r3

lbl_8010C964:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C96C

lbl_8010C96C:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C98C
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7BigFoot3MgrFiUc
	mr       r0, r3

lbl_8010C98C:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C994

lbl_8010C994:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C9B4
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game10SnakeWhole3MgrFiUc
	mr       r0, r3

lbl_8010C9B4:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C9BC

lbl_8010C9BC:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010C9DC
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game8UmiMushi3MgrFiUc
	mr       r0, r3

lbl_8010C9DC:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010C9E4

lbl_8010C9E4:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CA04
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game9OniKurage3MgrFiUc
	mr       r0, r3

lbl_8010CA04:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CA0C

lbl_8010CA0C:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CA2C
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game11BigTreasure3MgrFiUc
	mr       r0, r3

lbl_8010CA2C:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CA34

lbl_8010CA34:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CA54
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game11GreenKabuto3MgrFiUc
	mr       r0, r3

lbl_8010CA54:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CA5C

lbl_8010CA5C:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CA7C
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game9RedKabuto3MgrFiUc
	mr       r0, r3

lbl_8010CA7C:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CA84

lbl_8010CA84:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CAA4
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game9FixKabuto3MgrFiUc
	mr       r0, r3

lbl_8010CAA4:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CAAC

lbl_8010CAAC:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CACC
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game12KumaKochappy3MgrFiUc
	mr       r0, r3

lbl_8010CACC:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CAD4

lbl_8010CAD4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8010CAF4
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	bne      lbl_8010CAF4
	li       r26, 0xa
	b        lbl_8010CAF8

lbl_8010CAF4:
	li       r26, 0x19

lbl_8010CAF8:
	li       r3, 0x54
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CB18
	mr       r4, r26
	mr       r5, r30
	bl       __ct__Q34Game11ShijimiChou3MgrFiUc
	mr       r0, r3

lbl_8010CB18:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CB20

lbl_8010CB20:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CB40
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game14NormMiniHoudai3MgrFiUc
	mr       r0, r3

lbl_8010CB40:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CB48

lbl_8010CB48:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CB68
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game13FixMiniHoudai3MgrFiUc
	mr       r0, r3

lbl_8010CB68:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CB70

lbl_8010CB70:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CB90
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game7Sokkuri3MgrFiUc
	mr       r0, r3

lbl_8010CB90:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CB98

lbl_8010CB98:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CBB8
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game4Hana3MgrFiUc
	mr       r0, r3

lbl_8010CBB8:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CBC0

lbl_8010CBC0:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CBE0
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game8BlackMan3MgrFiUc
	mr       r0, r3

lbl_8010CBE0:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CBE8

lbl_8010CBE8:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CC08
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game4Tyre3MgrFiUc
	mr       r0, r3

lbl_8010CC08:
	mr       r26, r0
	b        lbl_8010CC34
	.global  lbl_8010CC10

lbl_8010CC10:
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8010CC30
	mr       r4, r31
	mr       r5, r30
	bl       __ct__Q34Game10DangoMushi3MgrFiUc
	mr       r0, r3

lbl_8010CC30:
	mr       r26, r0
	.global  lbl_8010CC34

lbl_8010CC34:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	li       r3, 0x24
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8010CCA4
	lis      r4, __vt__5CNode@ha
	lis      r5, __vt__16GenericObjectMgr@ha
	addi     r0, r4, __vt__5CNode@l
	lis      r4, __vt__Q24Game12EnemyMgrNode@ha
	stw      r0, 0(r3)
	li       r6, 0
	addi     r4, r4, __vt__Q24Game12EnemyMgrNode@l
	addi     r5, r5, __vt__16GenericObjectMgr@l
	stw      r6, 0x10(r3)
	addi     r0, r4, 0x10
	stw      r6, 0xc(r3)
	stw      r6, 8(r3)
	stw      r6, 4(r3)
	stw      r27, 0x14(r3)
	stw      r5, 0x18(r3)
	stw      r4, 0(r3)
	stw      r0, 0x18(r3)
	stw      r29, 0x1c(r3)
	stw      r26, 0x20(r3)

lbl_8010CCA4:
	mr       r4, r3
	addi     r3, r28, 0x20
	bl       add__5CNodeFP5CNode
	cmplwi   r26, 0
	mr       r4, r26
	beq      lbl_8010CCC0
	addi     r4, r26, 4

lbl_8010CCC0:
	addi     r3, r28, 4
	bl       add__5CNodeFP5CNode
	lwz      r3, sys@sda21(r13)
	mr       r4, r27
	bl       heapStatusEnd__6SystemFPc
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010CCE8
 * Size:	0001BC
 */
GeneralEnemyMgr::GeneralEnemyMgr()
	: _1C(0)
	, m_enemyNumList(nullptr)
	, m_heap(nullptr)
{
	sys->heapStatusStart("GeneralEnemyMgr", nullptr);
	m_name = "敵マネージャ"; // enemy manager
	m_enemyNumList = new EnemyTypeID[gEnemyInfoNum];

	setEnemyIDs();

	if (m_enemyNumList != nullptr) {
		setEnemyNums(0);
	}
	// for (int i = 0; i < gEnemyInfoNum; i++) {
	// 	m_enemyNumList[i].m_enemyID = (EnemyTypeID::EEnemyTypeID) gEnemyInfo[i].m_id;
	// }
	// if (m_enemyNumList != nullptr) {
	// 	for (int i = 0; i < gEnemyInfoNum; i++) {
	// 		m_enemyNumList[i]._04 = i;
	// 	}
	// }

	sys->heapStatusEnd("GeneralEnemyMgr");
	resetEnemyNum();
	m_flags.clear();
	m_flags.typeView |= 0x1;
	m_flags.typeView |= 0x2;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__16GenericObjectMgr@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__16GenericObjectMgr@l
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, lbl_8047AA70@ha
	stw      r0, 0(r30)
	addi     r31, r3, lbl_8047AA70@l
	addi     r3, r30, 4
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game15GeneralEnemyMgr@ha
	lis      r6, __vt__5CNode@ha
	addi     r3, r3, __vt__Q24Game15GeneralEnemyMgr@l
	lis      r4, __vt__16GenericObjectMgr@ha
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	lis      r3, __vt__Q24Game12EnemyMgrNode@ha
	li       r8, 0
	stw      r0, 4(r30)
	addi     r5, r3, __vt__Q24Game12EnemyMgrNode@l
	addi     r3, r6, __vt__5CNode@l
	addi     r7, r31, 0xc
	stb      r8, 0x1c(r30)
	addi     r6, r4, __vt__16GenericObjectMgr@l
	addi     r4, r5, 0x10
	li       r0, -1
	stw      r3, 0x20(r30)
	addi     r3, r30, 0x58
	stw      r8, 0x30(r30)
	stw      r8, 0x2c(r30)
	stw      r8, 0x28(r30)
	stw      r8, 0x24(r30)
	stw      r7, 0x34(r30)
	stw      r6, 0x38(r30)
	stw      r5, 0x20(r30)
	stw      r4, 0x38(r30)
	stw      r0, 0x3c(r30)
	stw      r8, 0x40(r30)
	stw      r8, 0x48(r30)
	stw      r8, 0x4c(r30)
	stb      r8, 0x54(r30)
	stb      r8, 0x55(r30)
	stb      r8, 0x56(r30)
	stb      r8, 0x57(r30)
	bl       __ct__Q34Game10EnemyStone3MgrFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x20
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r0, r31, 0x30
	stw      r0, 0x18(r30)
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	slwi     r3, r0, 3
	bl       __nwa__FUl
	lis      r4, gEnemyInfo__4Game@ha
	li       r5, 0
	stw      r3, 0x48(r30)
	addi     r4, r4, gEnemyInfo__4Game@l
	mr       r6, r5
	b        lbl_8010CE00

lbl_8010CDE4:
	lbz      r0, 4(r4)
	addi     r4, r4, 0x34
	lwz      r3, 0x48(r30)
	addi     r5, r5, 1
	extsb    r0, r0
	stwx     r0, r3, r6
	addi     r6, r6, 8

lbl_8010CE00:
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	cmpw     r5, r0
	blt      lbl_8010CDE4
	lwz      r0, 0x48(r30)
	cmplwi   r0, 0
	beq      lbl_8010CE48
	li       r5, 0
	mr       r6, r5
	mr       r4, r5
	b        lbl_8010CE3C

lbl_8010CE28:
	lwz      r3, 0x48(r30)
	addi     r0, r6, 4
	addi     r6, r6, 8
	addi     r5, r5, 1
	stbx     r4, r3, r0

lbl_8010CE3C:
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	cmpw     r5, r0
	blt      lbl_8010CE28

lbl_8010CE48:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x20
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r30
	bl       resetEnemyNum__Q24Game15GeneralEnemyMgrFv
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x54(r30)
	stb      r0, 0x55(r30)
	stb      r0, 0x56(r30)
	stb      r0, 0x57(r30)
	lwz      r0, 0x54(r30)
	ori      r0, r0, 1
	stw      r0, 0x54(r30)
	lwz      r0, 0x54(r30)
	ori      r0, r0, 2
	stw      r0, 0x54(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010CF0C
 * Size:	000078
 */
void GeneralEnemyMgr::killAll()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q24Game15CreatureKillArg@l
	lis      r4, __vt__Q24Game12EnemyKillArg@ha
	stw      r31, 0x1c(r1)
	addi     r4, r4, __vt__Q24Game12EnemyKillArg@l
	stw      r0, 8(r1)
	oris     r0, r5, 0x7000
	stw      r5, 0xc(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r31, 0x30(r3)
	b        lbl_8010CF68

lbl_8010CF4C:
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8010CF68:
	cmplwi   r31, 0
	bne      lbl_8010CF4C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010CFB4
 * Size:	00004C
 */
void GeneralEnemyMgr::setupSoundViewerAndBas()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x30(r3)
	b        lbl_8010CFE4

lbl_8010CFCC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8010CFE4:
	cmplwi   r31, 0
	bne      lbl_8010CFCC
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D030
 * Size:	00008C
 */
void GeneralEnemyMgr::doAnimation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_805179A0@sda21
	li       r5, 1
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r6, sys@sda21(r13)
	stw      r0, mCullCount__Q24Game15GeneralEnemyMgr@sda21(r13)
	stw      r0, mTotalCount__Q24Game15GeneralEnemyMgr@sda21(r13)
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r0, 0x54(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010D098
	lwz      r31, 0x30(r31)
	b        lbl_8010D090

lbl_8010D078:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8010D090:
	cmplwi   r31, 0
	bne      lbl_8010D078

lbl_8010D098:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805179A0@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D0EC
 * Size:	000058
 */
void GeneralEnemyMgr::doEntry()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r0, 0x54(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8010D130
	lwz      r31, 0x30(r3)
	b        lbl_8010D128

lbl_8010D110:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8010D128:
	cmplwi   r31, 0
	bne      lbl_8010D110

lbl_8010D130:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D174
 * Size:	000068
 */
void GeneralEnemyMgr::doSetView(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r0, 0x54(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8010D1C4
	lwz      r31, 0x30(r3)
	b        lbl_8010D1BC

lbl_8010D1A0:
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8010D1BC:
	cmplwi   r31, 0
	bne      lbl_8010D1A0

lbl_8010D1C4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D20C
 * Size:	000058
 */
void GeneralEnemyMgr::doViewCalc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r0, 0x54(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8010D250
	lwz      r31, 0x30(r3)
	b        lbl_8010D248

lbl_8010D230:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8010D248:
	cmplwi   r31, 0
	bne      lbl_8010D230

lbl_8010D250:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D294
 * Size:	000068
 */
void GeneralEnemyMgr::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	lwz      r0, 0x54(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010D2E4
	lwz      r31, 0x30(r3)
	b        lbl_8010D2DC

lbl_8010D2C0:
	mr       r3, r31
	fmr      f1, f31
	lwz      r12, 0(r31)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8010D2DC:
	cmplwi   r31, 0
	bne      lbl_8010D2C0

lbl_8010D2E4:
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D32C
 * Size:	000068
 */
void GeneralEnemyMgr::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r0, 0x54(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8010D37C
	lwz      r31, 0x30(r3)
	b        lbl_8010D374

lbl_8010D358:
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8010D374:
	cmplwi   r31, 0
	bne      lbl_8010D358

lbl_8010D37C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D3C4
 * Size:	000080
 */
void GeneralEnemyMgr::doSimpleDraw(Viewport*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x54(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8010D428
	lwz      r31, 0x30(r29)
	b        lbl_8010D414

lbl_8010D3F8:
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8010D414:
	cmplwi   r31, 0
	bne      lbl_8010D3F8
	mr       r4, r30
	addi     r3, r29, 0x58
	bl       draw__Q34Game10EnemyStone3MgrFP8Viewport

lbl_8010D428:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D474
 * Size:	00004C
 */
void GeneralEnemyMgr::getJ3DModelData(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	bl       getIEnemyMgrBase__Q24Game15GeneralEnemyMgrFi
	cmplwi   r3, 0
	beq      lbl_8010D4A8
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	mr       r31, r3

lbl_8010D4A8:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D4C0
 * Size:	0000BC
 */
EnemyBase* GeneralEnemyMgr::birth(int, Game::EnemyBirthArg&)
{
	return nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, gEnemyInfo__4Game@ha
	stw      r0, 0x24(r1)
	addi     r6, r6, gEnemyInfo__4Game@l
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	li       r4, -1
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010D534

lbl_8010D500:
	lbz      r0, 4(r6)
	extsb    r0, r0
	cmpw     r0, r29
	bne      lbl_8010D52C
	lhz      r0, 8(r6)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010D524
	mr       r4, r29
	b        lbl_8010D52C

lbl_8010D524:
	lbz      r4, 5(r6)
	extsb    r4, r4

lbl_8010D52C:
	addi     r6, r6, 0x34
	bdnz     lbl_8010D500

lbl_8010D534:
	bl       getIEnemyMgrBase__Q24Game15GeneralEnemyMgrFi
	cmplwi   r3, 0
	beq      lbl_8010D55C
	stw      r29, 0x28(r30)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r31, r3

lbl_8010D55C:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D57C
 * Size:	000028
 */
char* GeneralEnemyMgr::getEnemyName(int p1, int p2) { return EnemyInfoFunc::getEnemyName(p1, p2); }

/*
 * --INFO--
 * Address:	8010D5A4
 * Size:	000028
 */
int GeneralEnemyMgr::getEnemyID(char* name, int p1) { return EnemyInfoFunc::getEnemyID(name, p1); }

/*
 * --INFO--
 * Address:	8010D5CC
 * Size:	00002C
 */
void GeneralEnemyMgr::getIEnemyMgrBase(int)
{
	/*
	lwz      r5, 0x30(r3)
	li       r3, 0
	b        lbl_8010D5EC

lbl_8010D5D8:
	lwz      r0, 0x1c(r5)
	cmpw     r0, r4
	bne      lbl_8010D5E8
	lwz      r3, 0x20(r5)

lbl_8010D5E8:
	lwz      r5, 4(r5)

lbl_8010D5EC:
	cmplwi   r5, 0
	bne      lbl_8010D5D8
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D5F8
 * Size:	00021C
 */
void GeneralEnemyMgr::allocateEnemys(unsigned char, int)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	cmpwi    r5, 0
	lis      r6, lbl_8047AA70@ha
	stw      r0, 0x64(r1)
	stmw     r25, 0x44(r1)
	mr       r29, r3
	mr       r30, r4
	addi     r31, r6, lbl_8047AA70@l
	bge      lbl_8010D684
	lis      r3, 0x00200800@ha
	addi     r0, r3, 0x00200800@l
	stw      r0, 0x50(r29)
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8010D688
	lwz      r3, 0x44(r3)
	li       r0, 0
	cmpwi    r3, 2
	beq      lbl_8010D650
	cmpwi    r3, 3
	bne      lbl_8010D654

lbl_8010D650:
	li       r0, 1

lbl_8010D654:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8010D66C
	lis      r3, 0x00177000@ha
	addi     r0, r3, 0x00177000@l
	stw      r0, 0x50(r29)
	b        lbl_8010D688

lbl_8010D66C:
	cmpwi    r3, 1
	bne      lbl_8010D688
	lis      r3, 0x001C2000@ha
	addi     r0, r3, 0x001C2000@l
	stw      r0, 0x50(r29)
	b        lbl_8010D688

lbl_8010D684:
	stw      r5, 0x50(r29)

lbl_8010D688:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x40
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r27, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r5, 1
	lwz      r3, 0x50(r29)
	mr       r4, r27
	bl       create__12JKRSolidHeapFUlP7JKRHeapb
	stw      r3, 0x4c(r29)
	lwz      r3, 0x4c(r29)
	bl       becomeCurrentHeap__7JKRHeapFv
	addi     r3, r29, 0x58
	bl       loadResource__Q34Game10EnemyStone3MgrFv
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addis    r0, r3, 0xbaa8
	cmplwi   r0, 0x5048
	beq      lbl_8010D6F4
	addi     r3, r31, 0x4c
	addi     r5, r31, 0x60
	li       r4, 0x734
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8010D6F4:
	addi     r3, r1, 8
	addi     r4, r31, 0x6c
	bl       __ct__Q212LoadResource11ArgAramOnlyFPCc
	li       r0, 2
	stw      r27, 0x20(r1)
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	stw      r0, 0x24(r1)
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	mr       r0, r3
	lwz      r3, sys@sda21(r13)
	mr       r26, r0
	addi     r4, r31, 0x88
	lwz      r0, 0x34(r26)
	li       r5, 0
	stw      r0, gParmArc__4Game@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, sys@sda21(r13)
	bl       heapStatusIndividual__6SystemFv
	lis      r3, gEnemyInfo__4Game@ha
	li       r25, 0
	addi     r28, r3, gEnemyInfo__4Game@l
	b        lbl_8010D798

lbl_8010D750:
	lbz      r4, 4(r28)
	mr       r3, r29
	li       r5, 1
	extsb    r4, r4
	bl       getEnemyNum__Q24Game15GeneralEnemyMgrFib
	lhz      r0, 8(r28)
	clrlwi   r6, r3, 0x18
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010D790
	cmpwi    r6, 0
	ble      lbl_8010D790
	lbz      r5, 4(r28)
	mr       r3, r29
	mr       r4, r30
	extsb    r5, r5
	bl       createEnemyMgr__Q24Game15GeneralEnemyMgrFUcii

lbl_8010D790:
	addi     r28, r28, 0x34
	addi     r25, r25, 1

lbl_8010D798:
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	cmpw     r25, r0
	blt      lbl_8010D750
	lwz      r3, sys@sda21(r13)
	bl       heapStatusNormal__6SystemFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x88
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r27
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, 0x4c(r29)
	li       r0, 1
	cmplwi   r26, 0
	stb      r0, 0x69(r3)
	beq      lbl_8010D7EC
	mr       r3, r26
	li       r4, 1
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8010D7EC:
	li       r0, 0
	lwz      r3, sys@sda21(r13)
	stw      r0, gParmArc__4Game@sda21(r13)
	addi     r4, r31, 0x40
	bl       heapStatusEnd__6SystemFPc
	lmw      r25, 0x44(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D814
 * Size:	000040
 */
void GeneralEnemyMgr::resetEnemyNum()
{
	/*
	lwz      r0, 0x48(r3)
	cmplwi   r0, 0
	beqlr
	li       r6, 0
	mr       r7, r6
	mr       r5, r6
	b        lbl_8010D844

lbl_8010D830:
	lwz      r4, 0x48(r3)
	addi     r0, r7, 4
	addi     r7, r7, 8
	addi     r6, r6, 1
	stbx     r5, r4, r0

lbl_8010D844:
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	cmpw     r6, r0
	blt      lbl_8010D830
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010D854
 * Size:	00022C
 */
void GeneralEnemyMgr::addEnemyNum(int, unsigned char, Game::GenObjectEnemy*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r28, r4
	cmpwi    r28, -1
	mr       r27, r3
	mr       r30, r5
	mr       r29, r6
	beq      lbl_8010DA6C
	lis      r4, 0x0000FFFF@ha
	mr       r3, r28
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyMember__Q24Game13EnemyInfoFuncFii
	clrlwi   r31, r30, 0x18
	lwz      r6, 0x48(r27)
	mullw    r0, r31, r3
	cmplwi   r6, 0
	clrlwi   r5, r0, 0x18
	beq      lbl_8010D8EC
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	mr       r3, r6
	li       r4, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010D8EC

lbl_8010D8BC:
	lwz      r0, 0(r3)
	cmpw     r28, r0
	bne      lbl_8010D8E0
	slwi     r0, r4, 3
	add      r3, r6, r0
	lbz      r0, 4(r3)
	add      r0, r0, r5
	stb      r0, 4(r3)
	b        lbl_8010D8EC

lbl_8010D8E0:
	addi     r3, r3, 8
	addi     r4, r4, 1
	bdnz     lbl_8010D8BC

lbl_8010D8EC:
	li       r30, 0
	b        lbl_8010DA64

lbl_8010D8F4:
	cmpwi    r28, 0x32
	beq      lbl_8010D918
	bge      lbl_8010D90C
	cmpwi    r28, 0x2e
	beq      lbl_8010D918
	b        lbl_8010D990

lbl_8010D90C:
	cmpwi    r28, 0x57
	beq      lbl_8010D918
	b        lbl_8010D990

lbl_8010D918:
	cmplwi   r29, 0
	beq      lbl_8010DA60
	addi     r3, r1, 8
	bl       __ct__Q24Game15EnemyPelletInfoFv
	lbz      r0, 0x3c(r29)
	lbz      r3, 0x3d(r29)
	lbz      r4, 0x3e(r29)
	cmplwi   r0, 0
	lbz      r5, 0x3f(r29)
	lfs      f0, 0x40(r29)
	stb      r0, 8(r1)
	stb      r3, 9(r1)
	stb      r4, 0xa(r1)
	stb      r5, 0xb(r1)
	stfs     f0, 0xc(r1)
	bne      lbl_8010DA60
	cmplwi   r3, 1
	bne      lbl_8010DA60
	lis      r4, 0x0000FFFF@ha
	mr       r3, r28
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	mr       r4, r3
	mr       r3, r27
	lwz      r0, 0x2c(r4)
	li       r6, 0
	lwz      r4, 0x28(r4)
	clrlwi   r5, r0, 0x18
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy
	b        lbl_8010DA60

lbl_8010D990:
	lis      r4, 0x0000FFFF@ha
	mr       r3, r28
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	mr       r4, r3
	mr       r3, r27
	lwz      r0, 0x2c(r4)
	li       r6, 0
	lwz      r4, 0x28(r4)
	clrlwi   r5, r0, 0x18
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy
	cmpwi    r28, 0x5e
	bne      lbl_8010DA28
	mr       r3, r27
	li       r4, 0x25
	li       r5, 1
	bl       getEnemyNum__Q24Game15GeneralEnemyMgrFib
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0xa
	bge      lbl_8010D9F4
	mr       r3, r27
	li       r4, 0x25
	li       r5, 0xa
	li       r6, 0
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy

lbl_8010D9F4:
	mr       r3, r27
	li       r4, 0x13
	li       r5, 1
	bl       getEnemyNum__Q24Game15GeneralEnemyMgrFib
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0x1e
	bge      lbl_8010DA60
	mr       r3, r27
	li       r4, 0x13
	li       r5, 0x1e
	li       r6, 0
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy
	b        lbl_8010DA60

lbl_8010DA28:
	cmpwi    r28, 0x1e
	bne      lbl_8010DA60
	mr       r3, r27
	li       r4, 0x13
	li       r5, 1
	bl       getEnemyNum__Q24Game15GeneralEnemyMgrFib
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0xa
	bge      lbl_8010DA60
	mr       r3, r27
	li       r4, 0x13
	li       r5, 0xa
	li       r6, 0
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy

lbl_8010DA60:
	addi     r30, r30, 1

lbl_8010DA64:
	cmpw     r30, r31
	blt      lbl_8010D8F4

lbl_8010DA6C:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010DA80
 * Size:	000170
 */
void GeneralEnemyMgr::getEnemyNum(int, bool)
{
	/*
	stwu     r1, -0x10(r1)
	clrlwi.  r0, r5, 0x18
	li       r7, 0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	beq      lbl_8010DB98
	lwz      r31, 0x48(r3)
	cmplwi   r31, 0
	beq      lbl_8010DBDC
	lis      r3, gEnemyInfo__4Game@ha
	lwz      r12, gEnemyInfoNum__4Game@sda21(r13)
	addi     r30, r3, gEnemyInfo__4Game@l
	li       r3, -1
	mr       r5, r30
	mtctr    r12
	cmpwi    r12, 0
	ble      lbl_8010DAF8

lbl_8010DAC4:
	lbz      r0, 4(r5)
	extsb    r0, r0
	cmpw     r0, r4
	bne      lbl_8010DAF0
	lhz      r0, 8(r5)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010DAE8
	mr       r3, r4
	b        lbl_8010DAF0

lbl_8010DAE8:
	lbz      r3, 5(r5)
	extsb    r3, r3

lbl_8010DAF0:
	addi     r5, r5, 0x34
	bdnz     lbl_8010DAC4

lbl_8010DAF8:
	subf     r0, r4, r3
	li       r6, 0
	cntlzw   r0, r0
	mr       r11, r6
	rlwinm   r3, r0, 0x1b, 0x18, 0x1f
	b        lbl_8010DB8C

lbl_8010DB10:
	cmplwi   r3, 0
	add      r5, r31, r11
	beq      lbl_8010DB6C
	mr       r10, r30
	lwz      r9, 0(r5)
	li       r8, -1
	mtctr    r12
	cmpwi    r12, 0
	ble      lbl_8010DB70

lbl_8010DB34:
	lbz      r0, 4(r10)
	extsb    r0, r0
	cmpw     r0, r9
	bne      lbl_8010DB60
	lhz      r0, 8(r10)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010DB58
	mr       r8, r9
	b        lbl_8010DB60

lbl_8010DB58:
	lbz      r8, 5(r10)
	extsb    r8, r8

lbl_8010DB60:
	addi     r10, r10, 0x34
	bdnz     lbl_8010DB34
	b        lbl_8010DB70

lbl_8010DB6C:
	lwz      r8, 0(r5)

lbl_8010DB70:
	cmpw     r8, r4
	bne      lbl_8010DB84
	lbz      r0, 4(r5)
	add      r0, r7, r0
	clrlwi   r7, r0, 0x18

lbl_8010DB84:
	addi     r11, r11, 8
	addi     r6, r6, 1

lbl_8010DB8C:
	cmpw     r6, r12
	blt      lbl_8010DB10
	b        lbl_8010DBDC

lbl_8010DB98:
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	mr       r5, r7
	mr       r6, r7
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010DBDC

lbl_8010DBB0:
	lwz      r8, 0x48(r3)
	lwzx     r0, r8, r6
	cmpw     r4, r0
	bne      lbl_8010DBD0
	slwi     r0, r5, 3
	add      r3, r8, r0
	lbz      r7, 4(r3)
	b        lbl_8010DBDC

lbl_8010DBD0:
	addi     r6, r6, 8
	addi     r5, r5, 1
	bdnz     lbl_8010DBB0

lbl_8010DBDC:
	lwz      r31, 0xc(r1)
	mr       r3, r7
	lwz      r30, 8(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010DBF0
 * Size:	0000B4
 */
void GeneralEnemyMgr::useHeap()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q24Game15CreatureKillArg@l
	lis      r4, __vt__Q24Game12EnemyKillArg@ha
	stw      r31, 0x1c(r1)
	addi     r4, r4, __vt__Q24Game12EnemyKillArg@l
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r0, 8(r1)
	oris     r0, r5, 0x7000
	stw      r5, 0xc(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r31, 0x30(r3)
	b        lbl_8010DC54

lbl_8010DC38:
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8010DC54:
	cmplwi   r31, 0
	bne      lbl_8010DC38
	lwz      r3, 0x4c(r30)
	cmplwi   r3, 0
	beq      lbl_8010DC80
	bl       freeAll__7JKRHeapFv
	li       r0, 0
	stw      r0, 0x30(r30)
	stw      r0, 0x2c(r30)
	stw      r0, 0x28(r30)
	stw      r0, 0x24(r30)

lbl_8010DC80:
	li       r0, 0
	stw      r0, 0x14(r30)
	lwz      r3, 0x4c(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010DCA4
 * Size:	000038
 */
EnemyMgrBase* GeneralEnemyMgr::getEnemyMgr(int)
{
	return nullptr;
	/*
	lwz      r5, 0x30(r3)
	li       r3, 0
	b        lbl_8010DCC4

lbl_8010DCB0:
	lwz      r0, 0x1c(r5)
	cmpw     r0, r4
	bne      lbl_8010DCC0
	lwz      r3, 0x20(r5)

lbl_8010DCC0:
	lwz      r5, 4(r5)

lbl_8010DCC4:
	cmplwi   r5, 0
	bne      lbl_8010DCB0
	cmplwi   r3, 0
	bnelr
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010DCDC
 * Size:	000098
 */
void GeneralEnemyMgr::setMovieDraw(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	stw      r31, 0xc(r1)
	bne      lbl_8010DD2C
	lbz      r0, 0x1c(r3)
	ori      r0, r0, 1
	stb      r0, 0x1c(r3)
	lwz      r31, 0x30(r3)
	b        lbl_8010DD20

lbl_8010DD08:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8010DD20:
	cmplwi   r31, 0
	bne      lbl_8010DD08
	b        lbl_8010DD60

lbl_8010DD2C:
	lbz      r0, 0x1c(r3)
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0x1c(r3)
	lwz      r31, 0x30(r3)
	b        lbl_8010DD58

lbl_8010DD40:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8010DD58:
	cmplwi   r31, 0
	bne      lbl_8010DD40

lbl_8010DD60:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010DDD4
 * Size:	00011C
 */
void GeneralEnemyMgr::prepareDayendEnemies()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	lis      r31, 1
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r30, 0x30(r3)
	b        lbl_8010DE6C

lbl_8010DDFC:
	lwz      r3, 0x1c(r30)
	addi     r4, r31, -1
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lwz      r4, 0x30(r29)
	b        lbl_8010DE14

lbl_8010DE10:
	lwz      r4, 4(r4)

lbl_8010DE14:
	cmplwi   r4, 0
	bne      lbl_8010DE10
	lhz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8010DE68
	lis      r3, __vt__Q24Game15CreatureKillArg@ha
	li       r4, 0
	addi     r0, r3, __vt__Q24Game15CreatureKillArg@l
	lis      r3, __vt__Q24Game12EnemyKillArg@ha
	stw      r0, 8(r1)
	addi     r5, r3, __vt__Q24Game12EnemyKillArg@l
	oris     r0, r4, 0x7000
	mr       r3, r30
	stw      r4, 0xc(r1)
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl

lbl_8010DE68:
	lwz      r30, 4(r30)

lbl_8010DE6C:
	cmplwi   r30, 0
	bne      lbl_8010DDFC
	cmplwi   r29, 0
	mr       r3, r29
	beq      lbl_8010DE84
	addi     r3, r29, 4

lbl_8010DE84:
	li       r0, 0
	stw      r3, 0x18(r1)
	addi     r3, r1, 0x10
	stw      r0, 0x1c(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x14(r1)
	bl       "first__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
	li       r31, 0
	b        lbl_8010DEC8

lbl_8010DEA8:
	lwz      r12, 0(r3)
	lwz      r4, 0x14(r1)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	stb      r31, 0x1f3(r3)
	addi     r3, r1, 0x10
	bl       "next__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"

lbl_8010DEC8:
	lwz      r3, 0x10(r1)
	cmplwi   r3, 0
	bne      lbl_8010DEA8
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8010DEF0
 * Size:	000110
 */
void GeneralMgrIterator<Game::EnemyBase>::next()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_8010DF30
	lwz      r3, 0(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010DFB8

lbl_8010DF30:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010DF98

lbl_8010DF4C:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010DFEC
	lwz      r3, 0(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8010DF98:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	cmplw    r4, r3
	bne      lbl_8010DF4C

lbl_8010DFB8:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	cmplw    r0, r3
	bne      lbl_8010DFEC
	lwz      r4, 0(r31)
	mr       r3, r31
	lwz      r0, 4(r4)
	stw      r0, 0(r31)
	bl       "setFirst__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"

lbl_8010DFEC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010E000
 * Size:	000490
 */
void GeneralMgrIterator<Game::EnemyBase>::setFirst()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_8010E47C
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_8010E044
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E0C8

lbl_8010E044:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E0A8

lbl_8010E05C:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8010E0A8:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	cmplw    r4, r3
	bne      lbl_8010E05C

lbl_8010E0C8:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	cmplw    r0, r3
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r0, 4(r3)
	stw      r0, 0(r31)
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_8010E47C
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_8010E124
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E1A8

lbl_8010E124:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E188

lbl_8010E13C:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8010E188:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	cmplw    r4, r3
	bne      lbl_8010E13C

lbl_8010E1A8:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	cmplw    r0, r3
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r0, 4(r3)
	stw      r0, 0(r31)
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_8010E47C
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_8010E204
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E288

lbl_8010E204:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E268

lbl_8010E21C:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8010E268:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	cmplw    r4, r3
	bne      lbl_8010E21C

lbl_8010E288:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	cmplw    r0, r3
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r0, 4(r3)
	stw      r0, 0(r31)
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_8010E47C
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_8010E2E4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E368

lbl_8010E2E4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E348

lbl_8010E2FC:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8010E348:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	cmplw    r4, r3
	bne      lbl_8010E2FC

lbl_8010E368:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	cmplw    r0, r3
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r0, 4(r3)
	stw      r0, 0(r31)
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_8010E47C
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_8010E3C4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E448

lbl_8010E3C4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E428

lbl_8010E3DC:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8010E428:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	cmplw    r4, r3
	bne      lbl_8010E3DC

lbl_8010E448:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	cmplw    r0, r3
	bne      lbl_8010E47C
	lwz      r4, 0(r31)
	mr       r3, r31
	lwz      r0, 4(r4)
	stw      r0, 0(r31)
	bl       "setFirst__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"

lbl_8010E47C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010E490
 * Size:	00002C
 */
void GeneralMgrIterator<Game::EnemyBase>::first()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 8(r3)
	lwz      r0, 0x10(r4)
	stw      r0, 0(r3)
	bl       "setFirst__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8010E4BC
 * Size:	000C84
 */
void GeneralEnemyMgr::createDayendEnemies(Sys::Sphere&)
{
	/*
	stwu     r1, -0x170(r1)
	mflr     r0
	stw      r0, 0x174(r1)
	stfd     f31, 0x160(r1)
	psq_st   f31, 360(r1), 0, qr0
	stfd     f30, 0x150(r1)
	psq_st   f30, 344(r1), 0, qr0
	stfd     f29, 0x140(r1)
	psq_st   f29, 328(r1), 0, qr0
	stfd     f28, 0x130(r1)
	psq_st   f28, 312(r1), 0, qr0
	stfd     f27, 0x120(r1)
	psq_st   f27, 296(r1), 0, qr0
	stmw     r21, 0xf4(r1)
	mr       r30, r3
	mr       r31, r4
	addi     r3, r30, 0x20
	lwz      r12, 0x20(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	beq      lbl_8010F104
	lfd      f30, lbl_805179C8@sda21(r2)
	li       r29, 0
	lfs      f31, lbl_805179A8@sda21(r2)
	lis      r28, 1
	lis      r26, 0x4330
	b        lbl_8010F0FC

lbl_8010E530:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r3, r30, 0x20
	stw      r0, 0xd4(r1)
	lwz      r12, 0x20(r30)
	stw      r26, 0xd0(r1)
	lwz      r12, 0xc(r12)
	lfd      f0, 0xd0(r1)
	fsubs    f0, f0, f30
	fdivs    f28, f0, f31
	mtctr    r12
	bctrl
	xoris    r0, r3, 0x8000
	stw      r26, 0xd8(r1)
	addi     r3, r30, 0x20
	stw      r0, 0xdc(r1)
	lfd      f0, 0xd8(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f28, f0
	fctiwz   f0, f0
	stfd     f0, 0xe0(r1)
	lwz      r4, 0xe4(r1)
	bl       getChildAt__5CNodeFi
	mr       r23, r3
	mr       r27, r23

lbl_8010E594:
	lwz      r3, 0x1c(r27)
	addi     r4, r28, -1
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lwz      r4, 0x1c(r27)
	mr       r24, r3
	lwz      r3, 0x30(r30)
	li       r25, 0
	b        lbl_8010E5C8

lbl_8010E5B4:
	lwz      r0, 0x1c(r3)
	cmpw     r0, r4
	bne      lbl_8010E5C4
	lwz      r25, 0x20(r3)

lbl_8010E5C4:
	lwz      r3, 4(r3)

lbl_8010E5C8:
	cmplwi   r3, 0
	bne      lbl_8010E5B4
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0x40
	bl       getTekiInfo__Q34Game8TekiStat3MgrFi
	or.      r21, r3, r3
	bne      lbl_8010E600
	lis      r3, lbl_8047AABC@ha
	lis      r5, lbl_8047AAD0@ha
	addi     r3, r3, lbl_8047AABC@l
	li       r4, 0x89b
	addi     r5, r5, lbl_8047AAD0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8010E600:
	lhz      r0, 8(r24)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8010F0E0
	lbz      r0, 8(r21)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010F0E0
	addi     r3, r1, 0x9c
	bl       __ct__Q24Game13EnemyBirthArgFv
	li       r0, 0
	stb      r0, 0xcc(r1)
	lhz      r3, 8(r24)
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_8010E790
	lfs      f0, 0(r31)
	stfs     f0, 0x9c(r1)
	lfs      f0, 4(r31)
	stfs     f0, 0xa0(r1)
	lfs      f0, 8(r31)
	stfs     f0, 0xa4(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xe4(r1)
	lis      r3, gEnemyInfo__4Game@ha
	lfd      f3, lbl_805179C8@sda21(r2)
	addi     r3, r3, gEnemyInfo__4Game@l
	stw      r0, 0xe0(r1)
	li       r24, 0
	lfs      f1, lbl_805179A8@sda21(r2)
	li       r5, -1
	lfd      f2, 0xe0(r1)
	lfs      f0, lbl_805179AC@sda21(r2)
	fsubs    f2, f2, f3
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0xa8(r1)
	lwz      r4, 0x1c(r27)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010E6D8

lbl_8010E6A4:
	lbz      r0, 4(r3)
	extsb    r0, r0
	cmpw     r0, r4
	bne      lbl_8010E6D0
	lhz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010E6C8
	mr       r5, r4
	b        lbl_8010E6D0

lbl_8010E6C8:
	lbz      r5, 5(r3)
	extsb    r5, r5

lbl_8010E6D0:
	addi     r3, r3, 0x34
	bdnz     lbl_8010E6A4

lbl_8010E6D8:
	lwz      r6, 0x30(r30)
	li       r3, 0
	b        lbl_8010E6F8

lbl_8010E6E4:
	lwz      r0, 0x1c(r6)
	cmpw     r0, r5
	bne      lbl_8010E6F4
	lwz      r3, 0x20(r6)

lbl_8010E6F4:
	lwz      r6, 4(r6)

lbl_8010E6F8:
	cmplwi   r6, 0
	bne      lbl_8010E6E4
	cmplwi   r3, 0
	beq      lbl_8010E724
	stw      r4, 0xc4(r1)
	addi     r4, r1, 0x9c
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r24, r3

lbl_8010E724:
	cmplwi   r24, 0
	beq      lbl_8010E788
	mr       r3, r24
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 0x8c(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	mr       r3, r24
	stw      r24, 0x90(r1)
	addi     r4, r1, 0x8c
	stw      r5, 0x8c(r1)
	stfs     f0, 0x94(r1)
	stw      r0, 0x98(r1)
	lwz      r12, 0(r24)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r3, r24
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8010E788:
	addi     r29, r29, 0xa
	b        lbl_8010F0FC

lbl_8010E790:
	rlwinm.  r0, r3, 0, 0x19, 0x19
	beq      lbl_8010EA20
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xe4(r1)
	lis      r3, atanTable___5JMath@ha
	lfd      f2, lbl_805179C8@sda21(r2)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 0xe0(r1)
	lfs      f0, lbl_805179A8@sda21(r2)
	lfd      f1, 0xe0(r1)
	lfs      f4, lbl_805179AC@sda21(r2)
	fsubs    f5, f1, f2
	lfs      f3, 0(r31)
	lfs      f1, 0x9c(r1)
	lfs      f2, 8(r31)
	fdivs    f5, f5, f0
	lfs      f0, 0xa4(r1)
	fmuls    f29, f4, f5
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	stfs     f1, 0xa8(r1)
	lis      r3, gEnemyInfo__4Game@ha
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	addi     r3, r3, gEnemyInfo__4Game@l
	lwz      r4, 0x1c(r27)
	li       r24, 0
	li       r5, -1
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010E84C

lbl_8010E818:
	lbz      r0, 4(r3)
	extsb    r0, r0
	cmpw     r0, r4
	bne      lbl_8010E844
	lhz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010E83C
	mr       r5, r4
	b        lbl_8010E844

lbl_8010E83C:
	lbz      r5, 5(r3)
	extsb    r5, r5

lbl_8010E844:
	addi     r3, r3, 0x34
	bdnz     lbl_8010E818

lbl_8010E84C:
	lwz      r6, 0x30(r30)
	li       r3, 0
	b        lbl_8010E86C

lbl_8010E858:
	lwz      r0, 0x1c(r6)
	cmpw     r0, r5
	bne      lbl_8010E868
	lwz      r3, 0x20(r6)

lbl_8010E868:
	lwz      r6, 4(r6)

lbl_8010E86C:
	cmplwi   r6, 0
	bne      lbl_8010E858
	cmplwi   r3, 0
	beq      lbl_8010E898
	stw      r4, 0xc4(r1)
	addi     r4, r1, 0x9c
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r24, r3

lbl_8010E898:
	cmplwi   r24, 0
	beq      lbl_8010EA18
	mr       r3, r24
	addi     r4, r1, 0x7c
	lwz      r12, 0(r24)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r31)
	lfs      f1, 0x88(r1)
	lfs      f0, lbl_805179B0@sda21(r2)
	fsubs    f5, f2, f1
	fcmpo    cr0, f5, f0
	bge      lbl_8010E8D4
	fmr      f5, f0

lbl_8010E8D4:
	lfs      f0, lbl_805179B0@sda21(r2)
	fmr      f1, f29
	fcmpo    cr0, f29, f0
	bge      lbl_8010E8E8
	fneg     f1, f29

lbl_8010E8E8:
	lfs      f3, lbl_805179B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lfs      f1, 8(r31)
	fcmpo    cr0, f29, f0
	fctiwz   f0, f2
	stfd     f0, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f4, f5, f0, f1
	bge      lbl_8010E948
	lfs      f0, lbl_805179B8@sda21(r2)
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_8010E960

lbl_8010E948:
	fmuls    f0, f29, f3
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_8010E960:
	lfs      f1, 0(r31)
	addi     r4, r1, 0x70
	lfs      f0, lbl_805179B0@sda21(r2)
	fmadds   f1, f5, f2, f1
	stfs     f4, 0x78(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x74(r1)
	stfs     f1, 0x70(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x74(r1)
	mr       r3, r24
	addi     r4, r1, 0x70
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f0, 0x70(r1)
	mr       r3, r24
	li       r4, 0
	stfs     f0, 0x198(r24)
	lfs      f0, 0x74(r1)
	stfs     f0, 0x19c(r24)
	lfs      f0, 0x78(r1)
	stfs     f0, 0x1a0(r24)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 0x60(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	mr       r3, r24
	stw      r24, 0x64(r1)
	addi     r4, r1, 0x60
	stw      r5, 0x60(r1)
	stfs     f0, 0x68(r1)
	stw      r0, 0x6c(r1)
	lwz      r12, 0(r24)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r3, r24
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8010EA18:
	addi     r29, r29, 5
	b        lbl_8010F0FC

lbl_8010EA20:
	rlwinm.  r0, r3, 0, 0x18, 0x18
	beq      lbl_8010ED84
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	mr       r22, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xe4(r1)
	lfd      f3, lbl_805179C8@sda21(r2)
	stw      r0, 0xe0(r1)
	lfs      f1, lbl_805179A8@sda21(r2)
	lfd      f2, 0xe0(r1)
	lfs      f0, lbl_805179BC@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r3, 0xdc(r1)
	addi     r0, r3, 2
	cmpw     r22, r0
	ble      lbl_8010EA8C
	mr       r22, r0

lbl_8010EA8C:
	bl       rand
	lis      r5, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xd4(r1)
	xoris    r0, r22, 0x8000
	lis      r4, atanTable___5JMath@ha
	lis      r3, gEnemyInfo__4Game@ha
	stw      r5, 0xd0(r1)
	addi     r25, r4, atanTable___5JMath@l
	lfd      f4, lbl_805179C8@sda21(r2)
	addi     r24, r3, gEnemyInfo__4Game@l
	lfd      f0, 0xd0(r1)
	li       r21, 0
	stw      r0, 0xec(r1)
	fsubs    f3, f0, f4
	lfs      f2, lbl_805179A8@sda21(r2)
	stw      r5, 0xe8(r1)
	lfs      f1, lbl_805179AC@sda21(r2)
	lfd      f0, 0xe8(r1)
	fdivs    f2, f3, f2
	fsubs    f0, f0, f4
	fmuls    f29, f1, f2
	fdivs    f28, f1, f0
	b        lbl_8010ED74

lbl_8010EAEC:
	bl       rand
	lfs      f3, 0(r31)
	mr       r3, r25
	lfs      f1, 0x9c(r1)
	lfs      f2, 8(r31)
	lfs      f0, 0xa4(r1)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	stfs     f1, 0xa8(r1)
	mr       r3, r24
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	li       r23, 0
	lwz      r4, 0x1c(r27)
	li       r5, -1
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010EB6C

lbl_8010EB38:
	lbz      r0, 4(r3)
	extsb    r0, r0
	cmpw     r0, r4
	bne      lbl_8010EB64
	lhz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010EB5C
	mr       r5, r4
	b        lbl_8010EB64

lbl_8010EB5C:
	lbz      r5, 5(r3)
	extsb    r5, r5

lbl_8010EB64:
	addi     r3, r3, 0x34
	bdnz     lbl_8010EB38

lbl_8010EB6C:
	lwz      r6, 0x30(r30)
	li       r3, 0
	b        lbl_8010EB8C

lbl_8010EB78:
	lwz      r0, 0x1c(r6)
	cmpw     r0, r5
	bne      lbl_8010EB88
	lwz      r3, 0x20(r6)

lbl_8010EB88:
	lwz      r6, 4(r6)

lbl_8010EB8C:
	cmplwi   r6, 0
	bne      lbl_8010EB78
	cmplwi   r3, 0
	beq      lbl_8010EBB8
	stw      r4, 0xc4(r1)
	addi     r4, r1, 0x9c
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r23, r3

lbl_8010EBB8:
	cmplwi   r23, 0
	beq      lbl_8010ED6C
	mr       r3, r23
	addi     r4, r1, 0x50
	lwz      r12, 0(r23)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r31)
	lfs      f1, 0x5c(r1)
	lfs      f0, lbl_805179B0@sda21(r2)
	fsubs    f27, f2, f1
	fcmpo    cr0, f27, f0
	bge      lbl_8010EBF4
	fmr      f27, f0

lbl_8010EBF4:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xec(r1)
	fmr      f4, f29
	lfs      f0, lbl_805179C0@sda21(r2)
	stw      r0, 0xe8(r1)
	lfd      f2, lbl_805179C8@sda21(r2)
	fmuls    f3, f0, f27
	lfd      f0, 0xe8(r1)
	lfs      f1, lbl_805179A8@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_805179B0@sda21(r2)
	fcmpo    cr0, f29, f0
	fdivs    f0, f2, f1
	fmadds   f5, f3, f0, f3
	bge      lbl_8010EC3C
	fneg     f4, f29

lbl_8010EC3C:
	lfs      f3, lbl_805179B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f4, f3
	lfs      f1, 8(r31)
	fcmpo    cr0, f29, f0
	fctiwz   f0, f2
	stfd     f0, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f4, f5, f0, f1
	bge      lbl_8010EC9C
	lfs      f0, lbl_805179B8@sda21(r2)
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_8010ECB4

lbl_8010EC9C:
	fmuls    f0, f29, f3
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_8010ECB4:
	lfs      f1, 0(r31)
	addi     r4, r1, 0x44
	lfs      f0, lbl_805179B0@sda21(r2)
	fmadds   f1, f5, f2, f1
	stfs     f4, 0x4c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x48(r1)
	stfs     f1, 0x44(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x48(r1)
	mr       r3, r23
	addi     r4, r1, 0x44
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f0, 0x44(r1)
	mr       r3, r23
	li       r4, 0
	stfs     f0, 0x198(r23)
	lfs      f0, 0x48(r1)
	stfs     f0, 0x19c(r23)
	lfs      f0, 0x4c(r1)
	stfs     f0, 0x1a0(r23)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 0x34(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	mr       r3, r23
	stw      r23, 0x38(r1)
	addi     r4, r1, 0x34
	stw      r5, 0x34(r1)
	stfs     f0, 0x3c(r1)
	stw      r0, 0x40(r1)
	lwz      r12, 0(r23)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r3, r23
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8010ED6C:
	fadds    f29, f29, f28
	addi     r21, r21, 1

lbl_8010ED74:
	cmpw     r21, r22
	blt      lbl_8010EAEC
	addi     r29, r29, 3
	b        lbl_8010F0FC

lbl_8010ED84:
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	mr       r21, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xec(r1)
	lfd      f3, lbl_805179C8@sda21(r2)
	stw      r0, 0xe8(r1)
	lfs      f1, lbl_805179A8@sda21(r2)
	lfd      f2, 0xe8(r1)
	lfs      f0, lbl_805179C4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xe0(r1)
	lwz      r3, 0xe4(r1)
	addi     r0, r3, 7
	cmpw     r21, r0
	ble      lbl_8010EDE8
	mr       r21, r0

lbl_8010EDE8:
	bl       rand
	lis      r5, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xdc(r1)
	xoris    r0, r21, 0x8000
	lis      r4, atanTable___5JMath@ha
	lis      r3, gEnemyInfo__4Game@ha
	stw      r5, 0xd8(r1)
	addi     r24, r4, atanTable___5JMath@l
	lfd      f4, lbl_805179C8@sda21(r2)
	addi     r25, r3, gEnemyInfo__4Game@l
	lfd      f0, 0xd8(r1)
	li       r22, 0
	stw      r0, 0xd4(r1)
	fsubs    f3, f0, f4
	lfs      f2, lbl_805179A8@sda21(r2)
	stw      r5, 0xd0(r1)
	lfs      f1, lbl_805179AC@sda21(r2)
	lfd      f0, 0xd0(r1)
	fdivs    f2, f3, f2
	fsubs    f0, f0, f4
	fmuls    f28, f1, f2
	fdivs    f29, f1, f0
	b        lbl_8010F0D0

lbl_8010EE48:
	bl       rand
	lfs      f3, 0(r31)
	mr       r3, r24
	lfs      f1, 0x9c(r1)
	lfs      f2, 8(r31)
	lfs      f0, 0xa4(r1)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	stfs     f1, 0xa8(r1)
	mr       r3, r25
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	li       r23, 0
	lwz      r4, 0x1c(r27)
	li       r5, -1
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010EEC8

lbl_8010EE94:
	lbz      r0, 4(r3)
	extsb    r0, r0
	cmpw     r0, r4
	bne      lbl_8010EEC0
	lhz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010EEB8
	mr       r5, r4
	b        lbl_8010EEC0

lbl_8010EEB8:
	lbz      r5, 5(r3)
	extsb    r5, r5

lbl_8010EEC0:
	addi     r3, r3, 0x34
	bdnz     lbl_8010EE94

lbl_8010EEC8:
	lwz      r6, 0x30(r30)
	li       r3, 0
	b        lbl_8010EEE8

lbl_8010EED4:
	lwz      r0, 0x1c(r6)
	cmpw     r0, r5
	bne      lbl_8010EEE4
	lwz      r3, 0x20(r6)

lbl_8010EEE4:
	lwz      r6, 4(r6)

lbl_8010EEE8:
	cmplwi   r6, 0
	bne      lbl_8010EED4
	cmplwi   r3, 0
	beq      lbl_8010EF14
	stw      r4, 0xc4(r1)
	addi     r4, r1, 0x9c
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r23, r3

lbl_8010EF14:
	cmplwi   r23, 0
	beq      lbl_8010F0C8
	mr       r3, r23
	addi     r4, r1, 0x24
	lwz      r12, 0(r23)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r31)
	lfs      f1, 0x30(r1)
	lfs      f0, lbl_805179B0@sda21(r2)
	fsubs    f27, f2, f1
	fcmpo    cr0, f27, f0
	bge      lbl_8010EF50
	fmr      f27, f0

lbl_8010EF50:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xec(r1)
	fmr      f4, f28
	lfs      f0, lbl_805179C0@sda21(r2)
	stw      r0, 0xe8(r1)
	lfd      f2, lbl_805179C8@sda21(r2)
	fmuls    f3, f0, f27
	lfd      f0, 0xe8(r1)
	lfs      f1, lbl_805179A8@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_805179B0@sda21(r2)
	fcmpo    cr0, f28, f0
	fdivs    f0, f2, f1
	fmadds   f5, f3, f0, f3
	bge      lbl_8010EF98
	fneg     f4, f28

lbl_8010EF98:
	lfs      f3, lbl_805179B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f4, f3
	lfs      f1, 8(r31)
	fcmpo    cr0, f28, f0
	fctiwz   f0, f2
	stfd     f0, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f4, f5, f0, f1
	bge      lbl_8010EFF8
	lfs      f0, lbl_805179B8@sda21(r2)
	fmuls    f0, f28, f0
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_8010F010

lbl_8010EFF8:
	fmuls    f0, f28, f3
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_8010F010:
	lfs      f1, 0(r31)
	addi     r4, r1, 0x18
	lfs      f0, lbl_805179B0@sda21(r2)
	fmadds   f1, f5, f2, f1
	stfs     f4, 0x20(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x1c(r1)
	stfs     f1, 0x18(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x1c(r1)
	mr       r3, r23
	addi     r4, r1, 0x18
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f0, 0x18(r1)
	mr       r3, r23
	li       r4, 0
	stfs     f0, 0x198(r23)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x19c(r23)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x1a0(r23)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 8(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	mr       r3, r23
	stw      r23, 0xc(r1)
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stfs     f0, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r23)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r3, r23
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8010F0C8:
	fadds    f28, f28, f29
	addi     r22, r22, 1

lbl_8010F0D0:
	cmpw     r22, r21
	blt      lbl_8010EE48
	addi     r29, r29, 1
	b        lbl_8010F0FC

lbl_8010F0E0:
	lwz      r27, 4(r27)
	cmplwi   r27, 0
	bne      lbl_8010F0F0
	lwz      r27, 0x30(r30)

lbl_8010F0F0:
	cmplw    r27, r23
	bne      lbl_8010E594
	addi     r29, r29, 0xa

lbl_8010F0FC:
	cmpwi    r29, 0xa
	blt      lbl_8010E530

lbl_8010F104:
	psq_l    f31, 360(r1), 0, qr0
	lfd      f31, 0x160(r1)
	psq_l    f30, 344(r1), 0, qr0
	lfd      f30, 0x150(r1)
	psq_l    f29, 328(r1), 0, qr0
	lfd      f29, 0x140(r1)
	psq_l    f28, 312(r1), 0, qr0
	lfd      f28, 0x130(r1)
	psq_l    f27, 296(r1), 0, qr0
	lfd      f27, 0x120(r1)
	lmw      r21, 0xf4(r1)
	lwz      r0, 0x174(r1)
	mtlr     r0
	addi     r1, r1, 0x170
	blr
	*/
}
} // namespace Game
