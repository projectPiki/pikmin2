#include "Game/generalEnemyMgr.h"

/*
 * --INFO--
 * Address:	8010BD3C
 * Size:	000FAC
 */
void Game::GeneralEnemyMgr::createEnemyMgr(unsigned char, int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r29, r5
	  mr        r28, r3
	  lis       r5, 0x1
	  mr        r30, r4
	  mr        r31, r6
	  mr        r3, r29
	  subi      r4, r5, 0x1
	  bl        0x17510
	  lis       r5, 0x1
	  mr        r3, r28
	  mr        r4, r29
	  subi      r5, r5, 0x1
	  bl        0x1800
	  mr        r0, r3
	  lwz       r3, -0x6514(r13)
	  mr        r27, r0
	  li        r5, 0
	  mr        r4, r27
	  bl        0x3175C8
	  cmplwi    r29, 0x64
	  bgt-      .loc_0xEF8
	  lis       r3, 0x804B
	  rlwinm    r0,r29,2,0,29
	  subi      r3, r3, 0x4C70
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r3, 0x48
	  bl        -0xE7F18
	  mr.       r0, r3
	  beq-      .loc_0x9C
	  mr        r4, r31
	  mr        r5, r30
	  bl        -0x287C
	  mr        r0, r3

	.loc_0x9C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE7F40
	  mr.       r0, r3
	  beq-      .loc_0xC4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x64BC
	  mr        r0, r3

	.loc_0xC4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE7F68
	  mr.       r0, r3
	  beq-      .loc_0xEC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x20DFC
	  mr        r0, r3

	.loc_0xEC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE7F90
	  mr.       r0, r3
	  beq-      .loc_0x114
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x2179C
	  mr        r0, r3

	.loc_0x114:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x50
	  bl        -0xE7FB8
	  mr.       r0, r3
	  beq-      .loc_0x13C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0xD914
	  mr        r0, r3

	.loc_0x13C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x50
	  bl        -0xE7FE0
	  mr.       r0, r3
	  beq-      .loc_0x164
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1FA14
	  mr        r0, r3

	.loc_0x164:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x54
	  bl        -0xE8008
	  mr.       r0, r3
	  beq-      .loc_0x18C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x20130
	  mr        r0, r3

	.loc_0x18C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8030
	  mr.       r0, r3
	  beq-      .loc_0x1B4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x147FA4
	  mr        r0, r3

	.loc_0x1B4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8058
	  mr.       r0, r3
	  beq-      .loc_0x1DC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x14C210
	  mr        r0, r3

	.loc_0x1DC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8080
	  mr.       r0, r3
	  beq-      .loc_0x204
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x191AB8
	  mr        r0, r3

	.loc_0x204:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE80A8
	  mr.       r0, r3
	  beq-      .loc_0x22C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x178510
	  mr        r0, r3

	.loc_0x22C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE80D0
	  mr.       r0, r3
	  beq-      .loc_0x254
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x179168
	  mr        r0, r3

	.loc_0x254:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE80F8
	  mr.       r0, r3
	  beq-      .loc_0x27C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x153CC0
	  mr        r0, r3

	.loc_0x27C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8120
	  mr.       r0, r3
	  beq-      .loc_0x2A4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x155554
	  mr        r0, r3

	.loc_0x2A4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8148
	  mr.       r0, r3
	  beq-      .loc_0x2CC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x156B0C
	  mr        r0, r3

	.loc_0x2CC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8170
	  mr.       r0, r3
	  beq-      .loc_0x2F4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x159CEC
	  mr        r0, r3

	.loc_0x2F4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8198
	  mr.       r0, r3
	  beq-      .loc_0x31C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x14D74C
	  mr        r0, r3

	.loc_0x31C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE81C0
	  mr.       r0, r3
	  beq-      .loc_0x344
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x15D3D0
	  mr        r0, r3

	.loc_0x344:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE81E8
	  mr.       r0, r3
	  beq-      .loc_0x36C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x171218
	  mr        r0, r3

	.loc_0x36C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8210
	  mr.       r0, r3
	  beq-      .loc_0x394
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x15F7F4
	  mr        r0, r3

	.loc_0x394:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8238
	  mr.       r0, r3
	  beq-      .loc_0x3BC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x160B90
	  mr        r0, r3

	.loc_0x3BC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8260
	  mr.       r0, r3
	  beq-      .loc_0x3E4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x162A94
	  mr        r0, r3

	.loc_0x3E4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8288
	  mr.       r0, r3
	  beq-      .loc_0x40C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1663C4
	  mr        r0, r3

	.loc_0x40C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE82B0
	  mr.       r0, r3
	  beq-      .loc_0x434
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x191FC4
	  mr        r0, r3

	.loc_0x434:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE82D8
	  mr.       r0, r3
	  beq-      .loc_0x45C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x17027C
	  mr        r0, r3

	.loc_0x45C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8300
	  mr.       r0, r3
	  beq-      .loc_0x484
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x16AB9C
	  mr        r0, r3

	.loc_0x484:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8328
	  mr.       r0, r3
	  beq-      .loc_0x4AC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x16C084
	  mr        r0, r3

	.loc_0x4AC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8350
	  mr.       r0, r3
	  beq-      .loc_0x4D4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x16E694
	  mr        r0, r3

	.loc_0x4D4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x50
	  bl        -0xE8378
	  mr.       r0, r3
	  beq-      .loc_0x4FC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x175CE0
	  mr        r0, r3

	.loc_0x4FC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE83A0
	  mr.       r0, r3
	  beq-      .loc_0x524
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x17CC5C
	  mr        r0, r3

	.loc_0x524:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE83C8
	  mr.       r0, r3
	  beq-      .loc_0x54C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x180E40
	  mr        r0, r3

	.loc_0x54C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE83F0
	  mr.       r0, r3
	  beq-      .loc_0x574
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x181DA0
	  mr        r0, r3

	.loc_0x574:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x50
	  bl        -0xE8418
	  mr.       r0, r3
	  beq-      .loc_0x59C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x182E68
	  mr        r0, r3

	.loc_0x59C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8440
	  mr.       r0, r3
	  beq-      .loc_0x5C4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1868A4
	  mr        r0, r3

	.loc_0x5C4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8468
	  mr.       r0, r3
	  beq-      .loc_0x5EC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x18CF94
	  mr        r0, r3

	.loc_0x5EC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8490
	  mr.       r0, r3
	  beq-      .loc_0x614
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x23DA90
	  mr        r0, r3

	.loc_0x614:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE84B8
	  mr.       r0, r3
	  beq-      .loc_0x63C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x23F340
	  mr        r0, r3

	.loc_0x63C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE84E0
	  mr.       r0, r3
	  beq-      .loc_0x664
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x242628
	  mr        r0, r3

	.loc_0x664:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8508
	  mr.       r0, r3
	  beq-      .loc_0x68C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x2429D0
	  mr        r0, r3

	.loc_0x68C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8530
	  mr.       r0, r3
	  beq-      .loc_0x6B4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x25FDAC
	  mr        r0, r3

	.loc_0x6B4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8558
	  mr.       r0, r3
	  beq-      .loc_0x6DC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x18F828
	  mr        r0, r3

	.loc_0x6DC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8580
	  mr.       r0, r3
	  beq-      .loc_0x704
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x247914
	  mr        r0, r3

	.loc_0x704:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE85A8
	  mr.       r0, r3
	  beq-      .loc_0x72C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x2479B8
	  mr        r0, r3

	.loc_0x72C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE85D0
	  mr.       r0, r3
	  beq-      .loc_0x754
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x247A5C
	  mr        r0, r3

	.loc_0x754:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE85F8
	  mr.       r0, r3
	  beq-      .loc_0x77C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x247B00
	  mr        r0, r3

	.loc_0x77C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8620
	  mr.       r0, r3
	  beq-      .loc_0x7A4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x247BA4
	  mr        r0, r3

	.loc_0x7A4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8648
	  mr.       r0, r3
	  beq-      .loc_0x7CC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x247C48
	  mr        r0, r3

	.loc_0x7CC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8670
	  mr.       r0, r3
	  beq-      .loc_0x7F4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x247CEC
	  mr        r0, r3

	.loc_0x7F4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8698
	  mr.       r0, r3
	  beq-      .loc_0x81C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x247D90
	  mr        r0, r3

	.loc_0x81C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE86C0
	  mr.       r0, r3
	  beq-      .loc_0x844
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x247E34
	  mr        r0, r3

	.loc_0x844:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE86E8
	  mr.       r0, r3
	  beq-      .loc_0x86C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x247ED8
	  mr        r0, r3

	.loc_0x86C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8710
	  mr.       r0, r3
	  beq-      .loc_0x894
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x247F7C
	  mr        r0, r3

	.loc_0x894:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8738
	  mr.       r0, r3
	  beq-      .loc_0x8BC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x248020
	  mr        r0, r3

	.loc_0x8BC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8760
	  mr.       r0, r3
	  beq-      .loc_0x8E4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x2480C4
	  mr        r0, r3

	.loc_0x8E4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8788
	  mr.       r0, r3
	  beq-      .loc_0x90C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x248168
	  mr        r0, r3

	.loc_0x90C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE87B0
	  mr.       r0, r3
	  beq-      .loc_0x934
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x24820C
	  mr        r0, r3

	.loc_0x934:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE87D8
	  mr.       r0, r3
	  beq-      .loc_0x95C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x2482B0
	  mr        r0, r3

	.loc_0x95C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8800
	  mr.       r0, r3
	  beq-      .loc_0x984
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x248354
	  mr        r0, r3

	.loc_0x984:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8828
	  mr.       r0, r3
	  beq-      .loc_0x9AC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x24FBA8
	  mr        r0, r3

	.loc_0x9AC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8850
	  mr.       r0, r3
	  beq-      .loc_0x9D4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x257850
	  mr        r0, r3

	.loc_0x9D4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x50
	  bl        -0xE8878
	  mr.       r0, r3
	  beq-      .loc_0x9FC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x194BF8
	  mr        r0, r3

	.loc_0x9FC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x50
	  bl        -0xE88A0
	  mr.       r0, r3
	  beq-      .loc_0xA24
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x198974
	  mr        r0, r3

	.loc_0xA24:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE88C8
	  mr.       r0, r3
	  beq-      .loc_0xA4C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1A0984
	  mr        r0, r3

	.loc_0xA4C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE88F0
	  mr.       r0, r3
	  beq-      .loc_0xA74
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1A59FC
	  mr        r0, r3

	.loc_0xA74:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8918
	  mr.       r0, r3
	  beq-      .loc_0xA9C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1AB4FC
	  mr        r0, r3

	.loc_0xA9C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8940
	  mr.       r0, r3
	  beq-      .loc_0xAC4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1ABEE8
	  mr        r0, r3

	.loc_0xAC4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8968
	  mr.       r0, r3
	  beq-      .loc_0xAEC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1AC71C
	  mr        r0, r3

	.loc_0xAEC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8990
	  mr.       r0, r3
	  beq-      .loc_0xB14
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1ACF38
	  mr        r0, r3

	.loc_0xB14:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE89B8
	  mr.       r0, r3
	  beq-      .loc_0xB3C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1ECA60
	  mr        r0, r3

	.loc_0xB3C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE89E0
	  mr.       r0, r3
	  beq-      .loc_0xB64
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x25C034
	  mr        r0, r3

	.loc_0xB64:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8A08
	  mr.       r0, r3
	  beq-      .loc_0xB8C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1AF414
	  mr        r0, r3

	.loc_0xB8C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8A30
	  mr.       r0, r3
	  beq-      .loc_0xBB4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1B24F8
	  mr        r0, r3

	.loc_0xBB4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8A58
	  mr.       r0, r3
	  beq-      .loc_0xBDC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1B9008
	  mr        r0, r3

	.loc_0xBDC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xC04
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xC04
	  li        r31, 0xA
	  b         .loc_0xC08

	.loc_0xC04:
	  li        r31, 0x1E

	.loc_0xC08:
	  li        r3, 0x4C
	  bl        -0xE8AA4
	  mr.       r0, r3
	  beq-      .loc_0xC28
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x26102C
	  mr        r0, r3

	.loc_0xC28:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8ACC
	  mr.       r0, r3
	  beq-      .loc_0xC50
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1BA5D4
	  mr        r0, r3

	.loc_0xC50:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8AF4
	  mr.       r0, r3
	  beq-      .loc_0xC78
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1C1930
	  mr        r0, r3

	.loc_0xC78:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8B1C
	  mr.       r0, r3
	  beq-      .loc_0xCA0
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x275D68
	  mr        r0, r3

	.loc_0xCA0:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8B44
	  mr.       r0, r3
	  beq-      .loc_0xCC8
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1C6F9C
	  mr        r0, r3

	.loc_0xCC8:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8B6C
	  mr.       r0, r3
	  beq-      .loc_0xCF0
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1CC6C0
	  mr        r0, r3

	.loc_0xCF0:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8B94
	  mr.       r0, r3
	  beq-      .loc_0xD18
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1F2D80
	  mr        r0, r3

	.loc_0xD18:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8BBC
	  mr.       r0, r3
	  beq-      .loc_0xD40
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1F3390
	  mr        r0, r3

	.loc_0xD40:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8BE4
	  mr.       r0, r3
	  beq-      .loc_0xD68
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1F38F8
	  mr        r0, r3

	.loc_0xD68:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8C0C
	  mr.       r0, r3
	  beq-      .loc_0xD90
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1DA220
	  mr        r0, r3

	.loc_0xD90:
	  mr        r26, r0
	  b         .loc_0xEF8
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xDB8
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xDB8
	  li        r26, 0xA
	  b         .loc_0xDBC

	.loc_0xDB8:
	  li        r26, 0x19

	.loc_0xDBC:
	  li        r3, 0x54
	  bl        -0xE8C58
	  mr.       r0, r3
	  beq-      .loc_0xDDC
	  mr        r4, r26
	  mr        r5, r30
	  bl        0x27B9B0
	  mr        r0, r3

	.loc_0xDDC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8C80
	  mr.       r0, r3
	  beq-      .loc_0xE04
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1F46C0
	  mr        r0, r3

	.loc_0xE04:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8CA8
	  mr.       r0, r3
	  beq-      .loc_0xE2C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1F4B28
	  mr        r0, r3

	.loc_0xE2C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8CD0
	  mr.       r0, r3
	  beq-      .loc_0xE54
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1E407C
	  mr        r0, r3

	.loc_0xE54:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8CF8
	  mr.       r0, r3
	  beq-      .loc_0xE7C
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1E623C
	  mr        r0, r3

	.loc_0xE7C:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8D20
	  mr.       r0, r3
	  beq-      .loc_0xEA4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x2987F0
	  mr        r0, r3

	.loc_0xEA4:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x48
	  bl        -0xE8D48
	  mr.       r0, r3
	  beq-      .loc_0xECC
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x29F260
	  mr        r0, r3

	.loc_0xECC:
	  mr        r26, r0
	  b         .loc_0xEF8
	  li        r3, 0x4C
	  bl        -0xE8D70
	  mr.       r0, r3
	  beq-      .loc_0xEF4
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1EF0F4
	  mr        r0, r3

	.loc_0xEF4:
	  mr        r26, r0

	.loc_0xEF8:
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x24
	  bl        -0xE8DA8
	  cmplwi    r3, 0
	  beq-      .loc_0xF68
	  lis       r4, 0x804F
	  lis       r5, 0x804B
	  subi      r0, r4, 0x4AD8
	  lis       r4, 0x804B
	  stw       r0, 0x0(r3)
	  li        r6, 0
	  subi      r4, r4, 0x4A90
	  subi      r5, r5, 0x4A10
	  stw       r6, 0x10(r3)
	  addi      r0, r4, 0x10
	  stw       r6, 0xC(r3)
	  stw       r6, 0x8(r3)
	  stw       r6, 0x4(r3)
	  stw       r27, 0x14(r3)
	  stw       r5, 0x18(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x18(r3)
	  stw       r29, 0x1C(r3)
	  stw       r26, 0x20(r3)

	.loc_0xF68:
	  mr        r4, r3
	  addi      r3, r28, 0x20
	  bl        0x30475C
	  cmplwi    r26, 0
	  mr        r4, r26
	  beq-      .loc_0xF84
	  addi      r4, r26, 0x4

	.loc_0xF84:
	  addi      r3, r28, 0x4
	  bl        0x304744
	  lwz       r3, -0x6514(r13)
	  mr        r4, r27
	  bl        0x316694
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010CCE8
 * Size:	0001BC
 */
void Game::GeneralEnemyMgr::GeneralEnemyMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x4A10
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lis       r3, 0x8048
	  stw       r0, 0x0(r30)
	  subi      r31, r3, 0x5590
	  addi      r3, r30, 0x4
	  bl        0x304678
	  lis       r3, 0x804B
	  lis       r6, 0x804F
	  subi      r3, r3, 0x4ADC
	  lis       r4, 0x804B
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  lis       r3, 0x804B
	  li        r8, 0
	  stw       r0, 0x4(r30)
	  subi      r5, r3, 0x4A90
	  subi      r3, r6, 0x4AD8
	  addi      r7, r31, 0xC
	  stb       r8, 0x1C(r30)
	  subi      r6, r4, 0x4A10
	  addi      r4, r5, 0x10
	  li        r0, -0x1
	  stw       r3, 0x20(r30)
	  addi      r3, r30, 0x58
	  stw       r8, 0x30(r30)
	  stw       r8, 0x2C(r30)
	  stw       r8, 0x28(r30)
	  stw       r8, 0x24(r30)
	  stw       r7, 0x34(r30)
	  stw       r6, 0x38(r30)
	  stw       r5, 0x20(r30)
	  stw       r4, 0x38(r30)
	  stw       r0, 0x3C(r30)
	  stw       r8, 0x40(r30)
	  stw       r8, 0x48(r30)
	  stw       r8, 0x4C(r30)
	  stb       r8, 0x54(r30)
	  stb       r8, 0x55(r30)
	  stb       r8, 0x56(r30)
	  stb       r8, 0x57(r30)
	  bl        0x1AE5C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x20
	  li        r5, 0
	  bl        0x3165A8
	  addi      r0, r31, 0x30
	  stw       r0, 0x18(r30)
	  lwz       r0, -0x7C30(r13)
	  rlwinm    r3,r0,3,0,28
	  bl        -0xE8E1C
	  lis       r4, 0x804B
	  li        r5, 0
	  stw       r3, 0x48(r30)
	  subi      r4, r4, 0x3AC8
	  mr        r6, r5
	  b         .loc_0x118

	.loc_0xFC:
	  lbz       r0, 0x4(r4)
	  addi      r4, r4, 0x34
	  lwz       r3, 0x48(r30)
	  addi      r5, r5, 0x1
	  extsb     r0, r0
	  stwx      r0, r3, r6
	  addi      r6, r6, 0x8

	.loc_0x118:
	  lwz       r0, -0x7C30(r13)
	  cmpw      r5, r0
	  blt+      .loc_0xFC
	  lwz       r0, 0x48(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x160
	  li        r5, 0
	  mr        r6, r5
	  mr        r4, r5
	  b         .loc_0x154

	.loc_0x140:
	  lwz       r3, 0x48(r30)
	  addi      r0, r6, 0x4
	  addi      r6, r6, 0x8
	  addi      r5, r5, 0x1
	  stbx      r4, r3, r0

	.loc_0x154:
	  lwz       r0, -0x7C30(r13)
	  cmpw      r5, r0
	  blt+      .loc_0x140

	.loc_0x160:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x20
	  bl        0x316514
	  mr        r3, r30
	  bl        0x9BC
	  li        r0, 0
	  mr        r3, r30
	  stb       r0, 0x54(r30)
	  stb       r0, 0x55(r30)
	  stb       r0, 0x56(r30)
	  stb       r0, 0x57(r30)
	  lwz       r0, 0x54(r30)
	  ori       r0, r0, 0x1
	  stw       r0, 0x54(r30)
	  lwz       r0, 0x54(r30)
	  ori       r0, r0, 0x2
	  stw       r0, 0x54(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010CEA4
 * Size:	000068
 */
void Game::EnemyMgrNode::~EnemyMgrNode()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x4C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r5, r5, 0x4A90
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x10
	  stw       r0, 0x18(r30)
	  bl        0x3046AC
	  extsh.    r0, r31
	  ble-      .loc_0x4C
	  mr        r3, r30
	  bl        -0xE8E38

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010CF0C
 * Size:	000078
 */
void Game::GeneralEnemyMgr::killAll()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r4, 0x5D30
	  lis       r4, 0x804B
	  stw       r31, 0x1C(r1)
	  subi      r4, r4, 0x5D3C
	  stw       r0, 0x8(r1)
	  oris      r0, r5, 0x7000
	  stw       r5, 0xC(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lwz       r31, 0x30(r3)
	  b         .loc_0x5C

	.loc_0x40:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x5C:
	  cmplwi    r31, 0
	  bne+      .loc_0x40
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010CF84
 * Size:	000030
 */
void Game::EnemyMgrNode::killAll(Game::CreatureKillArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010CFB4
 * Size:	00004C
 */
void Game::GeneralEnemyMgr::setupSoundViewerAndBas()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x30(r3)
	  b         .loc_0x30

	.loc_0x18:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x30:
	  cmplwi    r31, 0
	  bne+      .loc_0x18
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D000
 * Size:	000030
 */
void Game::EnemyMgrNode::setupSoundViewerAndBas()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D030
 * Size:	00008C
 */
void Game::GeneralEnemyMgr::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r2, 0x69C0
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r6, -0x6514(r13)
	  stw       r0, -0x6E1C(r13)
	  stw       r0, -0x6E18(r13)
	  lwz       r3, 0x28(r6)
	  bl        0x31DA98
	  lwz       r0, 0x54(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x68
	  lwz       r31, 0x30(r31)
	  b         .loc_0x60

	.loc_0x48:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x60:
	  cmplwi    r31, 0
	  bne+      .loc_0x48

	.loc_0x68:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x69C0
	  lwz       r3, 0x28(r3)
	  bl        0x31DA58
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D0BC
 * Size:	000030
 */
void Game::EnemyMgrNode::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D0EC
 * Size:	000058
 */
void Game::GeneralEnemyMgr::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r0, 0x54(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x44
	  lwz       r31, 0x30(r3)
	  b         .loc_0x3C

	.loc_0x24:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x3C:
	  cmplwi    r31, 0
	  bne+      .loc_0x24

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D144
 * Size:	000030
 */
void Game::EnemyMgrNode::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D174
 * Size:	000068
 */
void Game::GeneralEnemyMgr::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r0, 0x54(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x50
	  lwz       r31, 0x30(r3)
	  b         .loc_0x48

	.loc_0x2C:
	  mr        r3, r31
	  mr        r4, r30
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x48:
	  cmplwi    r31, 0
	  bne+      .loc_0x2C

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D1DC
 * Size:	000030
 */
void Game::EnemyMgrNode::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D20C
 * Size:	000058
 */
void Game::GeneralEnemyMgr::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r0, 0x54(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x44
	  lwz       r31, 0x30(r3)
	  b         .loc_0x3C

	.loc_0x24:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x3C:
	  cmplwi    r31, 0
	  bne+      .loc_0x24

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D264
 * Size:	000030
 */
void Game::EnemyMgrNode::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D294
 * Size:	000068
 */
void Game::GeneralEnemyMgr::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  lwz       r0, 0x54(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x50
	  lwz       r31, 0x30(r3)
	  b         .loc_0x48

	.loc_0x2C:
	  mr        r3, r31
	  fmr       f1, f31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x48:
	  cmplwi    r31, 0
	  bne+      .loc_0x2C

	.loc_0x50:
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D2FC
 * Size:	000030
 */
void Game::EnemyMgrNode::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D32C
 * Size:	000068
 */
void Game::GeneralEnemyMgr::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r0, 0x54(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x50
	  lwz       r31, 0x30(r3)
	  b         .loc_0x48

	.loc_0x2C:
	  mr        r3, r31
	  mr        r4, r30
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x48:
	  cmplwi    r31, 0
	  bne+      .loc_0x2C

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D394
 * Size:	000030
 */
void Game::EnemyMgrNode::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D3C4
 * Size:	000080
 */
void Game::GeneralEnemyMgr::doSimpleDraw(Viewport*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0x54(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x64
	  lwz       r31, 0x30(r29)
	  b         .loc_0x50

	.loc_0x34:
	  mr        r3, r31
	  mr        r4, r30
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x50:
	  cmplwi    r31, 0
	  bne+      .loc_0x34
	  mr        r4, r30
	  addi      r3, r29, 0x58
	  bl        0x1AB80

	.loc_0x64:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D444
 * Size:	000030
 */
void Game::EnemyMgrNode::doSimpleDraw(Viewport*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D474
 * Size:	00004C
 */
void Game::GeneralEnemyMgr::getJ3DModelData(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  bl        0x144
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D4C0
 * Size:	0000BC
 */
void Game::GeneralEnemyMgr::birth(int, Game::EnemyBirthArg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804B
	  stw       r0, 0x24(r1)
	  subi      r6, r6, 0x3AC8
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  li        r4, -0x1
	  lwz       r0, -0x7C30(r13)
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x74

	.loc_0x40:
	  lbz       r0, 0x4(r6)
	  extsb     r0, r0
	  cmpw      r0, r29
	  bne-      .loc_0x6C
	  lhz       r0, 0x8(r6)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x64
	  mr        r4, r29
	  b         .loc_0x6C

	.loc_0x64:
	  lbz       r4, 0x5(r6)
	  extsb     r4, r4

	.loc_0x6C:
	  addi      r6, r6, 0x34
	  bdnz+     .loc_0x40

	.loc_0x74:
	  bl        0x98
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  stw       r29, 0x28(r30)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3

	.loc_0x9C:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D57C
 * Size:	000028
 */
void Game::GeneralEnemyMgr::getEnemyName(int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  mr        r4, r5
	  stw       r0, 0x14(r1)
	  bl        0x15D4C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D5A4
 * Size:	000028
 */
void Game::GeneralEnemyMgr::getEnemyID(char*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  mr        r4, r5
	  stw       r0, 0x14(r1)
	  bl        0x15EB0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D5CC
 * Size:	00002C
 */
void Game::GeneralEnemyMgr::getIEnemyMgrBase(int)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x30(r3)
	  li        r3, 0
	  b         .loc_0x20

	.loc_0xC:
	  lwz       r0, 0x1C(r5)
	  cmpw      r0, r4
	  bne-      .loc_0x1C
	  lwz       r3, 0x20(r5)

	.loc_0x1C:
	  lwz       r5, 0x4(r5)

	.loc_0x20:
	  cmplwi    r5, 0
	  bne+      .loc_0xC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D5F8
 * Size:	00021C
 */
void Game::GeneralEnemyMgr::allocateEnemys(unsigned char, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  cmpwi     r5, 0
	  lis       r6, 0x8048
	  stw       r0, 0x64(r1)
	  stmw      r25, 0x44(r1)
	  mr        r29, r3
	  mr        r30, r4
	  subi      r31, r6, 0x5590
	  bge-      .loc_0x8C
	  lis       r3, 0x20
	  addi      r0, r3, 0x800
	  stw       r0, 0x50(r29)
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  lwz       r3, 0x44(r3)
	  li        r0, 0
	  cmpwi     r3, 0x2
	  beq-      .loc_0x58
	  cmpwi     r3, 0x3
	  bne-      .loc_0x5C

	.loc_0x58:
	  li        r0, 0x1

	.loc_0x5C:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x74
	  lis       r3, 0x17
	  addi      r0, r3, 0x7000
	  stw       r0, 0x50(r29)
	  b         .loc_0x90

	.loc_0x74:
	  cmpwi     r3, 0x1
	  bne-      .loc_0x90
	  lis       r3, 0x1C
	  addi      r0, r3, 0x2000
	  stw       r0, 0x50(r29)
	  b         .loc_0x90

	.loc_0x8C:
	  stw       r5, 0x50(r29)

	.loc_0x90:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x40
	  li        r5, 0
	  bl        0x315CC8
	  lwz       r27, -0x77D4(r13)
	  li        r5, 0x1
	  lwz       r3, 0x50(r29)
	  mr        r4, r27
	  bl        -0xE8938
	  stw       r3, 0x4C(r29)
	  lwz       r3, 0x4C(r29)
	  bl        -0xEA110
	  addi      r3, r29, 0x58
	  bl        0x1A5CC
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  subis     r0, r3, 0x4558
	  cmplwi    r0, 0x5048
	  beq-      .loc_0xFC
	  addi      r3, r31, 0x4C
	  addi      r5, r31, 0x60
	  li        r4, 0x734
	  crclr     6, 0x6
	  bl        -0xE30B0

	.loc_0xFC:
	  addi      r3, r1, 0x8
	  addi      r4, r31, 0x6C
	  bl        0x33EF20
	  li        r0, 0x2
	  stw       r27, 0x20(r1)
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  stw       r0, 0x24(r1)
	  bl        0x33F000
	  mr        r0, r3
	  lwz       r3, -0x6514(r13)
	  mr        r26, r0
	  addi      r4, r31, 0x88
	  lwz       r0, 0x34(r26)
	  li        r5, 0
	  stw       r0, -0x6E58(r13)
	  bl        0x315C28
	  lwz       r3, -0x6514(r13)
	  bl        0x315C30
	  lis       r3, 0x804B
	  li        r25, 0
	  subi      r28, r3, 0x3AC8
	  b         .loc_0x1A0

	.loc_0x158:
	  lbz       r4, 0x4(r28)
	  mr        r3, r29
	  li        r5, 0x1
	  extsb     r4, r4
	  bl        0x320
	  lhz       r0, 0x8(r28)
	  rlwinm    r6,r3,0,24,31
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x198
	  cmpwi     r6, 0
	  ble-      .loc_0x198
	  lbz       r5, 0x4(r28)
	  mr        r3, r29
	  mr        r4, r30
	  extsb     r5, r5
	  bl        -0x1A50

	.loc_0x198:
	  addi      r28, r28, 0x34
	  addi      r25, r25, 0x1

	.loc_0x1A0:
	  lwz       r0, -0x7C30(r13)
	  cmpw      r25, r0
	  blt+      .loc_0x158
	  lwz       r3, -0x6514(r13)
	  bl        0x315BC8
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x88
	  bl        0x315BB0
	  mr        r3, r27
	  bl        -0xEA218
	  lwz       r3, 0x4C(r29)
	  li        r0, 0x1
	  cmplwi    r26, 0
	  stb       r0, 0x69(r3)
	  beq-      .loc_0x1F4
	  mr        r3, r26
	  li        r4, 0x1
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1F4:
	  li        r0, 0
	  lwz       r3, -0x6514(r13)
	  stw       r0, -0x6E58(r13)
	  addi      r4, r31, 0x40
	  bl        0x315B68
	  lmw       r25, 0x44(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D814
 * Size:	000040
 */
void Game::GeneralEnemyMgr::resetEnemyNum()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beqlr-
	  li        r6, 0
	  mr        r7, r6
	  mr        r5, r6
	  b         .loc_0x30

	.loc_0x1C:
	  lwz       r4, 0x48(r3)
	  addi      r0, r7, 0x4
	  addi      r7, r7, 0x8
	  addi      r6, r6, 0x1
	  stbx      r5, r4, r0

	.loc_0x30:
	  lwz       r0, -0x7C30(r13)
	  cmpw      r6, r0
	  blt+      .loc_0x1C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010D854
 * Size:	00022C
 */
void Game::GeneralEnemyMgr::addEnemyNum(int, unsigned char,
                                        Game::GenObjectEnemy*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r28, r4
	  cmpwi     r28, -0x1
	  mr        r27, r3
	  mr        r30, r5
	  mr        r29, r6
	  beq-      .loc_0x218
	  lis       r4, 0x1
	  mr        r3, r28
	  subi      r4, r4, 0x1
	  bl        0x15B6C
	  rlwinm    r31,r30,0,24,31
	  lwz       r6, 0x48(r27)
	  mullw     r0, r31, r3
	  cmplwi    r6, 0
	  rlwinm    r5,r0,0,24,31
	  beq-      .loc_0x98
	  lwz       r0, -0x7C30(r13)
	  mr        r3, r6
	  li        r4, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x98

	.loc_0x68:
	  lwz       r0, 0x0(r3)
	  cmpw      r28, r0
	  bne-      .loc_0x8C
	  rlwinm    r0,r4,3,0,28
	  add       r3, r6, r0
	  lbz       r0, 0x4(r3)
	  add       r0, r0, r5
	  stb       r0, 0x4(r3)
	  b         .loc_0x98

	.loc_0x8C:
	  addi      r3, r3, 0x8
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x68

	.loc_0x98:
	  li        r30, 0
	  b         .loc_0x210

	.loc_0xA0:
	  cmpwi     r28, 0x32
	  beq-      .loc_0xC4
	  bge-      .loc_0xB8
	  cmpwi     r28, 0x2E
	  beq-      .loc_0xC4
	  b         .loc_0x13C

	.loc_0xB8:
	  cmpwi     r28, 0x57
	  beq-      .loc_0xC4
	  b         .loc_0x13C

	.loc_0xC4:
	  cmplwi    r29, 0
	  beq-      .loc_0x20C
	  addi      r3, r1, 0x8
	  bl        0x20A28
	  lbz       r0, 0x3C(r29)
	  lbz       r3, 0x3D(r29)
	  lbz       r4, 0x3E(r29)
	  cmplwi    r0, 0
	  lbz       r5, 0x3F(r29)
	  lfs       f0, 0x40(r29)
	  stb       r0, 0x8(r1)
	  stb       r3, 0x9(r1)
	  stb       r4, 0xA(r1)
	  stb       r5, 0xB(r1)
	  stfs      f0, 0xC(r1)
	  bne-      .loc_0x20C
	  cmplwi    r3, 0x1
	  bne-      .loc_0x20C
	  lis       r4, 0x1
	  mr        r3, r28
	  subi      r4, r4, 0x1
	  bl        0x1590C
	  mr        r4, r3
	  mr        r3, r27
	  lwz       r0, 0x2C(r4)
	  li        r6, 0
	  lwz       r4, 0x28(r4)
	  rlwinm    r5,r0,0,24,31
	  bl        .loc_0x0
	  b         .loc_0x20C

	.loc_0x13C:
	  lis       r4, 0x1
	  mr        r3, r28
	  subi      r4, r4, 0x1
	  bl        0x158DC
	  mr        r4, r3
	  mr        r3, r27
	  lwz       r0, 0x2C(r4)
	  li        r6, 0
	  lwz       r4, 0x28(r4)
	  rlwinm    r5,r0,0,24,31
	  bl        .loc_0x0
	  cmpwi     r28, 0x5E
	  bne-      .loc_0x1D4
	  mr        r3, r27
	  li        r4, 0x25
	  li        r5, 0x1
	  bl        .loc_0x22C
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0xA
	  bge-      .loc_0x1A0
	  mr        r3, r27
	  li        r4, 0x25
	  li        r5, 0xA
	  li        r6, 0
	  bl        .loc_0x0

	.loc_0x1A0:
	  mr        r3, r27
	  li        r4, 0x13
	  li        r5, 0x1
	  bl        .loc_0x22C
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1E
	  bge-      .loc_0x20C
	  mr        r3, r27
	  li        r4, 0x13
	  li        r5, 0x1E
	  li        r6, 0
	  bl        .loc_0x0
	  b         .loc_0x20C

	.loc_0x1D4:
	  cmpwi     r28, 0x1E
	  bne-      .loc_0x20C
	  mr        r3, r27
	  li        r4, 0x13
	  li        r5, 0x1
	  bl        .loc_0x22C
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0xA
	  bge-      .loc_0x20C
	  mr        r3, r27
	  li        r4, 0x13
	  li        r5, 0xA
	  li        r6, 0
	  bl        .loc_0x0

	.loc_0x20C:
	  addi      r30, r30, 0x1

	.loc_0x210:
	  cmpw      r30, r31
	  blt+      .loc_0xA0

	.loc_0x218:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x22C:
	*/
}

/*
 * --INFO--
 * Address:	8010DA80
 * Size:	000170
 */
void Game::GeneralEnemyMgr::getEnemyNum(int, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm.   r0,r5,0,24,31
	  li        r7, 0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  beq-      .loc_0x118
	  lwz       r31, 0x48(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x15C
	  lis       r3, 0x804B
	  lwz       r12, -0x7C30(r13)
	  subi      r30, r3, 0x3AC8
	  li        r3, -0x1
	  mr        r5, r30
	  mtctr     r12
	  cmpwi     r12, 0
	  ble-      .loc_0x78

	.loc_0x44:
	  lbz       r0, 0x4(r5)
	  extsb     r0, r0
	  cmpw      r0, r4
	  bne-      .loc_0x70
	  lhz       r0, 0x8(r5)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x68
	  mr        r3, r4
	  b         .loc_0x70

	.loc_0x68:
	  lbz       r3, 0x5(r5)
	  extsb     r3, r3

	.loc_0x70:
	  addi      r5, r5, 0x34
	  bdnz+     .loc_0x44

	.loc_0x78:
	  sub       r0, r3, r4
	  li        r6, 0
	  cntlzw    r0, r0
	  mr        r11, r6
	  rlwinm    r3,r0,27,24,31
	  b         .loc_0x10C

	.loc_0x90:
	  cmplwi    r3, 0
	  add       r5, r31, r11
	  beq-      .loc_0xEC
	  mr        r10, r30
	  lwz       r9, 0x0(r5)
	  li        r8, -0x1
	  mtctr     r12
	  cmpwi     r12, 0
	  ble-      .loc_0xF0

	.loc_0xB4:
	  lbz       r0, 0x4(r10)
	  extsb     r0, r0
	  cmpw      r0, r9
	  bne-      .loc_0xE0
	  lhz       r0, 0x8(r10)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xD8
	  mr        r8, r9
	  b         .loc_0xE0

	.loc_0xD8:
	  lbz       r8, 0x5(r10)
	  extsb     r8, r8

	.loc_0xE0:
	  addi      r10, r10, 0x34
	  bdnz+     .loc_0xB4
	  b         .loc_0xF0

	.loc_0xEC:
	  lwz       r8, 0x0(r5)

	.loc_0xF0:
	  cmpw      r8, r4
	  bne-      .loc_0x104
	  lbz       r0, 0x4(r5)
	  add       r0, r7, r0
	  rlwinm    r7,r0,0,24,31

	.loc_0x104:
	  addi      r11, r11, 0x8
	  addi      r6, r6, 0x1

	.loc_0x10C:
	  cmpw      r6, r12
	  blt+      .loc_0x90
	  b         .loc_0x15C

	.loc_0x118:
	  lwz       r0, -0x7C30(r13)
	  mr        r5, r7
	  mr        r6, r7
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x15C

	.loc_0x130:
	  lwz       r8, 0x48(r3)
	  lwzx      r0, r8, r6
	  cmpw      r4, r0
	  bne-      .loc_0x150
	  rlwinm    r0,r5,3,0,28
	  add       r3, r8, r0
	  lbz       r7, 0x4(r3)
	  b         .loc_0x15C

	.loc_0x150:
	  addi      r6, r6, 0x8
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x130

	.loc_0x15C:
	  lwz       r31, 0xC(r1)
	  mr        r3, r7
	  lwz       r30, 0x8(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010DBF0
 * Size:	0000B4
 */
void Game::GeneralEnemyMgr::useHeap()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r4, 0x5D30
	  lis       r4, 0x804B
	  stw       r31, 0x1C(r1)
	  subi      r4, r4, 0x5D3C
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r0, 0x8(r1)
	  oris      r0, r5, 0x7000
	  stw       r5, 0xC(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lwz       r31, 0x30(r3)
	  b         .loc_0x64

	.loc_0x48:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x64:
	  cmplwi    r31, 0
	  bne+      .loc_0x48
	  lwz       r3, 0x4C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  bl        -0xEA538
	  li        r0, 0
	  stw       r0, 0x30(r30)
	  stw       r0, 0x2C(r30)
	  stw       r0, 0x28(r30)
	  stw       r0, 0x24(r30)

	.loc_0x90:
	  li        r0, 0
	  stw       r0, 0x14(r30)
	  lwz       r3, 0x4C(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010DCA4
 * Size:	000038
 */
void Game::GeneralEnemyMgr::getEnemyMgr(int)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x30(r3)
	  li        r3, 0
	  b         .loc_0x20

	.loc_0xC:
	  lwz       r0, 0x1C(r5)
	  cmpw      r0, r4
	  bne-      .loc_0x1C
	  lwz       r3, 0x20(r5)

	.loc_0x1C:
	  lwz       r5, 0x4(r5)

	.loc_0x20:
	  cmplwi    r5, 0
	  bne+      .loc_0xC
	  cmplwi    r3, 0
	  bnelr-
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010DCDC
 * Size:	000098
 */
void Game::GeneralEnemyMgr::setMovieDraw(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  stw       r31, 0xC(r1)
	  bne-      .loc_0x50
	  lbz       r0, 0x1C(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0x1C(r3)
	  lwz       r31, 0x30(r3)
	  b         .loc_0x44

	.loc_0x2C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x44:
	  cmplwi    r31, 0
	  bne+      .loc_0x2C
	  b         .loc_0x84

	.loc_0x50:
	  lbz       r0, 0x1C(r3)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x1C(r3)
	  lwz       r31, 0x30(r3)
	  b         .loc_0x7C

	.loc_0x64:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x7C:
	  cmplwi    r31, 0
	  bne+      .loc_0x64

	.loc_0x84:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010DD74
 * Size:	000030
 */
void Game::EnemyMgrNode::endMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010DDA4
 * Size:	000030
 */
void Game::EnemyMgrNode::startMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010DDD4
 * Size:	00011C
 */
void Game::GeneralEnemyMgr::prepareDayendEnemies()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  lis       r31, 0x1
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lwz       r30, 0x30(r3)
	  b         .loc_0x98

	.loc_0x28:
	  lwz       r3, 0x1C(r30)
	  subi      r4, r31, 0x1
	  bl        0x15474
	  lwz       r4, 0x30(r29)
	  b         .loc_0x40

	.loc_0x3C:
	  lwz       r4, 0x4(r4)

	.loc_0x40:
	  cmplwi    r4, 0
	  bne+      .loc_0x3C
	  lhz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x94
	  lis       r3, 0x804B
	  li        r4, 0
	  subi      r0, r3, 0x5D30
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  subi      r5, r3, 0x5D3C
	  oris      r0, r4, 0x7000
	  mr        r3, r30
	  stw       r4, 0xC(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  lwz       r30, 0x4(r30)

	.loc_0x98:
	  cmplwi    r30, 0
	  bne+      .loc_0x28
	  cmplwi    r29, 0
	  mr        r3, r29
	  beq-      .loc_0xB0
	  addi      r3, r29, 0x4

	.loc_0xB0:
	  li        r0, 0
	  stw       r3, 0x18(r1)
	  addi      r3, r1, 0x10
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  bl        0x5F4
	  li        r31, 0
	  b         .loc_0xF4

	.loc_0xD4:
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  stb       r31, 0x1F3(r3)
	  addi      r3, r1, 0x10
	  bl        .loc_0x11C

	.loc_0xF4:
	  lwz       r3, 0x10(r1)
	  cmplwi    r3, 0
	  bne+      .loc_0xD4
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x11C:
	*/
}

/*
 * --INFO--
 * Address:	8010DEF0
 * Size:	000110
 */
void GeneralMgrIterator<Game::EnemyBase>::next()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x0(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8

	.loc_0x40:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xA8

	.loc_0x5C:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xFC
	  lwz       r3, 0x0(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA8:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  cmplw     r4, r3
	  bne+      .loc_0x5C

	.loc_0xC8:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  cmplw     r0, r3
	  bne-      .loc_0xFC
	  lwz       r4, 0x0(r31)
	  mr        r3, r31
	  lwz       r0, 0x4(r4)
	  stw       r0, 0x0(r31)
	  bl        .loc_0x110

	.loc_0xFC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x110:
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
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x47C
	  lwz       r0, 0xC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8

	.loc_0x44:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xA8

	.loc_0x5C:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x47C
	  lwz       r3, 0x0(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA8:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  cmplw     r4, r3
	  bne+      .loc_0x5C

	.loc_0xC8:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  cmplw     r0, r3
	  bne-      .loc_0x47C
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x0(r31)
	  lwz       r3, 0x0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x47C
	  lwz       r0, 0xC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0x1A8

	.loc_0x124:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0x188

	.loc_0x13C:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x47C
	  lwz       r3, 0x0(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x188:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  cmplw     r4, r3
	  bne+      .loc_0x13C

	.loc_0x1A8:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  cmplw     r0, r3
	  bne-      .loc_0x47C
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x0(r31)
	  lwz       r3, 0x0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x47C
	  lwz       r0, 0xC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x204
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0x288

	.loc_0x204:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0x268

	.loc_0x21C:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x47C
	  lwz       r3, 0x0(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x268:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  cmplw     r4, r3
	  bne+      .loc_0x21C

	.loc_0x288:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  cmplw     r0, r3
	  bne-      .loc_0x47C
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x0(r31)
	  lwz       r3, 0x0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x47C
	  lwz       r0, 0xC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x2E4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0x368

	.loc_0x2E4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0x348

	.loc_0x2FC:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x47C
	  lwz       r3, 0x0(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x348:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  cmplw     r4, r3
	  bne+      .loc_0x2FC

	.loc_0x368:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  cmplw     r0, r3
	  bne-      .loc_0x47C
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x0(r31)
	  lwz       r3, 0x0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x47C
	  lwz       r0, 0xC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0x448

	.loc_0x3C4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0x428

	.loc_0x3DC:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x47C
	  lwz       r3, 0x0(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x428:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4(r31)
	  cmplw     r4, r3
	  bne+      .loc_0x3DC

	.loc_0x448:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  cmplw     r0, r3
	  bne-      .loc_0x47C
	  lwz       r4, 0x0(r31)
	  mr        r3, r31
	  lwz       r0, 0x4(r4)
	  stw       r0, 0x0(r31)
	  bl        .loc_0x0

	.loc_0x47C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
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
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x8(r3)
	  lwz       r0, 0x10(r4)
	  stw       r0, 0x0(r3)
	  bl        -0x4A8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010E4BC
 * Size:	000C84
 */
void Game::GeneralEnemyMgr::createDayendEnemies(Sys::Sphere&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x170(r1)
	  mflr      r0
	  stw       r0, 0x174(r1)
	  stfd      f31, 0x160(r1)
	  psq_st    f31,0x168(r1),0,0
	  stfd      f30, 0x150(r1)
	  psq_st    f30,0x158(r1),0,0
	  stfd      f29, 0x140(r1)
	  psq_st    f29,0x148(r1),0,0
	  stfd      f28, 0x130(r1)
	  psq_st    f28,0x138(r1),0,0
	  stfd      f27, 0x120(r1)
	  psq_st    f27,0x128(r1),0,0
	  stmw      r21, 0xF4(r1)
	  mr        r30, r3
	  mr        r31, r4
	  addi      r3, r30, 0x20
	  lwz       r12, 0x20(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  beq-      .loc_0xC48
	  lfd       f30, -0x6998(r2)
	  li        r29, 0
	  lfs       f31, -0x69B8(r2)
	  lis       r28, 0x1
	  lis       r26, 0x4330
	  b         .loc_0xC40

	.loc_0x74:
	  bl        -0x44F90
	  xoris     r0, r3, 0x8000
	  addi      r3, r30, 0x20
	  stw       r0, 0xD4(r1)
	  lwz       r12, 0x20(r30)
	  stw       r26, 0xD0(r1)
	  lwz       r12, 0xC(r12)
	  lfd       f0, 0xD0(r1)
	  fsubs     f0, f0, f30
	  fdivs     f28, f0, f31
	  mtctr     r12
	  bctrl
	  xoris     r0, r3, 0x8000
	  stw       r26, 0xD8(r1)
	  addi      r3, r30, 0x20
	  stw       r0, 0xDC(r1)
	  lfd       f0, 0xD8(r1)
	  fsubs     f0, f0, f30
	  fmuls     f0, f28, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xE0(r1)
	  lwz       r4, 0xE4(r1)
	  bl        0x303114
	  mr        r23, r3
	  mr        r27, r23

	.loc_0xD8:
	  lwz       r3, 0x1C(r27)
	  subi      r4, r28, 0x1
	  bl        0x14CDC
	  lwz       r4, 0x1C(r27)
	  mr        r24, r3
	  lwz       r3, 0x30(r30)
	  li        r25, 0
	  b         .loc_0x10C

	.loc_0xF8:
	  lwz       r0, 0x1C(r3)
	  cmpw      r0, r4
	  bne-      .loc_0x108
	  lwz       r25, 0x20(r3)

	.loc_0x108:
	  lwz       r3, 0x4(r3)

	.loc_0x10C:
	  cmplwi    r3, 0
	  bne+      .loc_0xF8
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0x40
	  bl        0x1254EC
	  mr.       r21, r3
	  bne-      .loc_0x144
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x5544
	  li        r4, 0x89B
	  subi      r5, r5, 0x5530
	  crclr     6, 0x6
	  bl        -0xE3FBC

	.loc_0x144:
	  lhz       r0, 0x8(r24)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0xC24
	  lbz       r0, 0x8(r21)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xC24
	  addi      r3, r1, 0x9C
	  bl        0x20608
	  li        r0, 0
	  stb       r0, 0xCC(r1)
	  lhz       r3, 0x8(r24)
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0x2D4
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x9C(r1)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0xA0(r1)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0xA4(r1)
	  bl        -0x450AC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xE4(r1)
	  lis       r3, 0x804B
	  lfd       f3, -0x6998(r2)
	  subi      r3, r3, 0x3AC8
	  stw       r0, 0xE0(r1)
	  li        r24, 0
	  lfs       f1, -0x69B8(r2)
	  li        r5, -0x1
	  lfd       f2, 0xE0(r1)
	  lfs       f0, -0x69B4(r2)
	  fsubs     f2, f2, f3
	  lwz       r0, -0x7C30(r13)
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0xA8(r1)
	  lwz       r4, 0x1C(r27)
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x21C

	.loc_0x1E8:
	  lbz       r0, 0x4(r3)
	  extsb     r0, r0
	  cmpw      r0, r4
	  bne-      .loc_0x214
	  lhz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x20C
	  mr        r5, r4
	  b         .loc_0x214

	.loc_0x20C:
	  lbz       r5, 0x5(r3)
	  extsb     r5, r5

	.loc_0x214:
	  addi      r3, r3, 0x34
	  bdnz+     .loc_0x1E8

	.loc_0x21C:
	  lwz       r6, 0x30(r30)
	  li        r3, 0
	  b         .loc_0x23C

	.loc_0x228:
	  lwz       r0, 0x1C(r6)
	  cmpw      r0, r5
	  bne-      .loc_0x238
	  lwz       r3, 0x20(r6)

	.loc_0x238:
	  lwz       r6, 0x4(r6)

	.loc_0x23C:
	  cmplwi    r6, 0
	  bne+      .loc_0x228
	  cmplwi    r3, 0
	  beq-      .loc_0x268
	  stw       r4, 0xC4(r1)
	  addi      r4, r1, 0x9C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr        r24, r3

	.loc_0x268:
	  cmplwi    r24, 0
	  beq-      .loc_0x2CC
	  mr        r3, r24
	  li        r4, 0
	  bl        0x2C894
	  lis       r3, 0x804B
	  lfs       f0, -0x69B0(r2)
	  subi      r0, r3, 0x5D00
	  lis       r3, 0x804B
	  stw       r0, 0x8C(r1)
	  addi      r5, r3, 0x4DE0
	  li        r0, 0
	  mr        r3, r24
	  stw       r24, 0x90(r1)
	  addi      r4, r1, 0x8C
	  stw       r5, 0x8C(r1)
	  stfs      f0, 0x94(r1)
	  stw       r0, 0x98(r1)
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r24
	  li        r4, 0
	  bl        0x2D2CC

	.loc_0x2CC:
	  addi      r29, r29, 0xA
	  b         .loc_0xC40

	.loc_0x2D4:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x564
	  bl        -0x451F8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xE4(r1)
	  lis       r3, 0x8051
	  lfd       f2, -0x6998(r2)
	  subi      r3, r3, 0x2E20
	  stw       r0, 0xE0(r1)
	  lfs       f0, -0x69B8(r2)
	  lfd       f1, 0xE0(r1)
	  lfs       f4, -0x69B4(r2)
	  fsubs     f5, f1, f2
	  lfs       f3, 0x0(r31)
	  lfs       f1, 0x9C(r1)
	  lfs       f2, 0x8(r31)
	  fdivs     f5, f5, f0
	  lfs       f0, 0xA4(r1)
	  fmuls     f29, f4, f5
	  fsubs     f1, f3, f1
	  fsubs     f2, f2, f0
	  bl        -0xD96E0
	  bl        0x3033E4
	  stfs      f1, 0xA8(r1)
	  lis       r3, 0x804B
	  lwz       r0, -0x7C30(r13)
	  subi      r3, r3, 0x3AC8
	  lwz       r4, 0x1C(r27)
	  li        r24, 0
	  li        r5, -0x1
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x390

	.loc_0x35C:
	  lbz       r0, 0x4(r3)
	  extsb     r0, r0
	  cmpw      r0, r4
	  bne-      .loc_0x388
	  lhz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x380
	  mr        r5, r4
	  b         .loc_0x388

	.loc_0x380:
	  lbz       r5, 0x5(r3)
	  extsb     r5, r5

	.loc_0x388:
	  addi      r3, r3, 0x34
	  bdnz+     .loc_0x35C

	.loc_0x390:
	  lwz       r6, 0x30(r30)
	  li        r3, 0
	  b         .loc_0x3B0

	.loc_0x39C:
	  lwz       r0, 0x1C(r6)
	  cmpw      r0, r5
	  bne-      .loc_0x3AC
	  lwz       r3, 0x20(r6)

	.loc_0x3AC:
	  lwz       r6, 0x4(r6)

	.loc_0x3B0:
	  cmplwi    r6, 0
	  bne+      .loc_0x39C
	  cmplwi    r3, 0
	  beq-      .loc_0x3DC
	  stw       r4, 0xC4(r1)
	  addi      r4, r1, 0x9C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr        r24, r3

	.loc_0x3DC:
	  cmplwi    r24, 0
	  beq-      .loc_0x55C
	  mr        r3, r24
	  addi      r4, r1, 0x7C
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xC(r31)
	  lfs       f1, 0x88(r1)
	  lfs       f0, -0x69B0(r2)
	  fsubs     f5, f2, f1
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x418
	  fmr       f5, f0

	.loc_0x418:
	  lfs       f0, -0x69B0(r2)
	  fmr       f1, f29
	  fcmpo     cr0, f29, f0
	  bge-      .loc_0x42C
	  fneg      f1, f29

	.loc_0x42C:
	  lfs       f3, -0x69AC(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x69B0(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f1, f3
	  lfs       f1, 0x8(r31)
	  fcmpo     cr0, f29, f0
	  fctiwz    f0, f2
	  stfd      f0, 0xE0(r1)
	  lwz       r0, 0xE4(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f4, f5, f0, f1
	  bge-      .loc_0x48C
	  lfs       f0, -0x69A8(r2)
	  fmuls     f0, f29, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xD8(r1)
	  lwz       r0, 0xDC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f2, f0
	  b         .loc_0x4A4

	.loc_0x48C:
	  fmuls     f0, f29, f3
	  fctiwz    f0, f0
	  stfd      f0, 0xD0(r1)
	  lwz       r0, 0xD4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r4, r0

	.loc_0x4A4:
	  lfs       f1, 0x0(r31)
	  addi      r4, r1, 0x70
	  lfs       f0, -0x69B0(r2)
	  fmadds    f1, f5, f2, f1
	  stfs      f4, 0x78(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f0, 0x74(r1)
	  stfs      f1, 0x70(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x74(r1)
	  mr        r3, r24
	  addi      r4, r1, 0x70
	  li        r5, 0
	  bl        0x2C808
	  lfs       f0, 0x70(r1)
	  mr        r3, r24
	  li        r4, 0
	  stfs      f0, 0x198(r24)
	  lfs       f0, 0x74(r1)
	  stfs      f0, 0x19C(r24)
	  lfs       f0, 0x78(r1)
	  stfs      f0, 0x1A0(r24)
	  bl        0x2C604
	  lis       r3, 0x804B
	  lfs       f0, -0x69B0(r2)
	  subi      r0, r3, 0x5D00
	  lis       r3, 0x804B
	  stw       r0, 0x60(r1)
	  addi      r5, r3, 0x4DE0
	  li        r0, 0
	  mr        r3, r24
	  stw       r24, 0x64(r1)
	  addi      r4, r1, 0x60
	  stw       r5, 0x60(r1)
	  stfs      f0, 0x68(r1)
	  stw       r0, 0x6C(r1)
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r24
	  li        r4, 0
	  bl        0x2D03C

	.loc_0x55C:
	  addi      r29, r29, 0x5
	  b         .loc_0xC40

	.loc_0x564:
	  rlwinm.   r0,r3,0,24,24
	  beq-      .loc_0x8C8
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  mr        r22, r3
	  bl        -0x454A0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xE4(r1)
	  lfd       f3, -0x6998(r2)
	  stw       r0, 0xE0(r1)
	  lfs       f1, -0x69B8(r2)
	  lfd       f2, 0xE0(r1)
	  lfs       f0, -0x69A4(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0xD8(r1)
	  lwz       r3, 0xDC(r1)
	  addi      r0, r3, 0x2
	  cmpw      r22, r0
	  ble-      .loc_0x5D0
	  mr        r22, r0

	.loc_0x5D0:
	  bl        -0x454EC
	  lis       r5, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xD4(r1)
	  xoris     r0, r22, 0x8000
	  lis       r4, 0x8051
	  lis       r3, 0x804B
	  stw       r5, 0xD0(r1)
	  subi      r25, r4, 0x2E20
	  lfd       f4, -0x6998(r2)
	  subi      r24, r3, 0x3AC8
	  lfd       f0, 0xD0(r1)
	  li        r21, 0
	  stw       r0, 0xEC(r1)
	  fsubs     f3, f0, f4
	  lfs       f2, -0x69B8(r2)
	  stw       r5, 0xE8(r1)
	  lfs       f1, -0x69B4(r2)
	  lfd       f0, 0xE8(r1)
	  fdivs     f2, f3, f2
	  fsubs     f0, f0, f4
	  fmuls     f29, f1, f2
	  fdivs     f28, f1, f0
	  b         .loc_0x8B8

	.loc_0x630:
	  bl        -0x4554C
	  lfs       f3, 0x0(r31)
	  mr        r3, r25
	  lfs       f1, 0x9C(r1)
	  lfs       f2, 0x8(r31)
	  lfs       f0, 0xA4(r1)
	  fsubs     f1, f3, f1
	  fsubs     f2, f2, f0
	  bl        -0xD9A04
	  bl        0x3030C0
	  stfs      f1, 0xA8(r1)
	  mr        r3, r24
	  lwz       r0, -0x7C30(r13)
	  li        r23, 0
	  lwz       r4, 0x1C(r27)
	  li        r5, -0x1
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x6B0

	.loc_0x67C:
	  lbz       r0, 0x4(r3)
	  extsb     r0, r0
	  cmpw      r0, r4
	  bne-      .loc_0x6A8
	  lhz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x6A0
	  mr        r5, r4
	  b         .loc_0x6A8

	.loc_0x6A0:
	  lbz       r5, 0x5(r3)
	  extsb     r5, r5

	.loc_0x6A8:
	  addi      r3, r3, 0x34
	  bdnz+     .loc_0x67C

	.loc_0x6B0:
	  lwz       r6, 0x30(r30)
	  li        r3, 0
	  b         .loc_0x6D0

	.loc_0x6BC:
	  lwz       r0, 0x1C(r6)
	  cmpw      r0, r5
	  bne-      .loc_0x6CC
	  lwz       r3, 0x20(r6)

	.loc_0x6CC:
	  lwz       r6, 0x4(r6)

	.loc_0x6D0:
	  cmplwi    r6, 0
	  bne+      .loc_0x6BC
	  cmplwi    r3, 0
	  beq-      .loc_0x6FC
	  stw       r4, 0xC4(r1)
	  addi      r4, r1, 0x9C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr        r23, r3

	.loc_0x6FC:
	  cmplwi    r23, 0
	  beq-      .loc_0x8B0
	  mr        r3, r23
	  addi      r4, r1, 0x50
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xC(r31)
	  lfs       f1, 0x5C(r1)
	  lfs       f0, -0x69B0(r2)
	  fsubs     f27, f2, f1
	  fcmpo     cr0, f27, f0
	  bge-      .loc_0x738
	  fmr       f27, f0

	.loc_0x738:
	  bl        -0x45654
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xEC(r1)
	  fmr       f4, f29
	  lfs       f0, -0x69A0(r2)
	  stw       r0, 0xE8(r1)
	  lfd       f2, -0x6998(r2)
	  fmuls     f3, f0, f27
	  lfd       f0, 0xE8(r1)
	  lfs       f1, -0x69B8(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, -0x69B0(r2)
	  fcmpo     cr0, f29, f0
	  fdivs     f0, f2, f1
	  fmadds    f5, f3, f0, f3
	  bge-      .loc_0x780
	  fneg      f4, f29

	.loc_0x780:
	  lfs       f3, -0x69AC(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x69B0(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f4, f3
	  lfs       f1, 0x8(r31)
	  fcmpo     cr0, f29, f0
	  fctiwz    f0, f2
	  stfd      f0, 0xE0(r1)
	  lwz       r0, 0xE4(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f4, f5, f0, f1
	  bge-      .loc_0x7E0
	  lfs       f0, -0x69A8(r2)
	  fmuls     f0, f29, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xD8(r1)
	  lwz       r0, 0xDC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f2, f0
	  b         .loc_0x7F8

	.loc_0x7E0:
	  fmuls     f0, f29, f3
	  fctiwz    f0, f0
	  stfd      f0, 0xD0(r1)
	  lwz       r0, 0xD4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r4, r0

	.loc_0x7F8:
	  lfs       f1, 0x0(r31)
	  addi      r4, r1, 0x44
	  lfs       f0, -0x69B0(r2)
	  fmadds    f1, f5, f2, f1
	  stfs      f4, 0x4C(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f0, 0x48(r1)
	  stfs      f1, 0x44(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x48(r1)
	  mr        r3, r23
	  addi      r4, r1, 0x44
	  li        r5, 0
	  bl        0x2C4B4
	  lfs       f0, 0x44(r1)
	  mr        r3, r23
	  li        r4, 0
	  stfs      f0, 0x198(r23)
	  lfs       f0, 0x48(r1)
	  stfs      f0, 0x19C(r23)
	  lfs       f0, 0x4C(r1)
	  stfs      f0, 0x1A0(r23)
	  bl        0x2C2B0
	  lis       r3, 0x804B
	  lfs       f0, -0x69B0(r2)
	  subi      r0, r3, 0x5D00
	  lis       r3, 0x804B
	  stw       r0, 0x34(r1)
	  addi      r5, r3, 0x4DE0
	  li        r0, 0
	  mr        r3, r23
	  stw       r23, 0x38(r1)
	  addi      r4, r1, 0x34
	  stw       r5, 0x34(r1)
	  stfs      f0, 0x3C(r1)
	  stw       r0, 0x40(r1)
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r23
	  li        r4, 0
	  bl        0x2CCE8

	.loc_0x8B0:
	  fadds     f29, f29, f28
	  addi      r21, r21, 0x1

	.loc_0x8B8:
	  cmpw      r21, r22
	  blt+      .loc_0x630
	  addi      r29, r29, 0x3
	  b         .loc_0xC40

	.loc_0x8C8:
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  mr        r21, r3
	  bl        -0x457FC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xEC(r1)
	  lfd       f3, -0x6998(r2)
	  stw       r0, 0xE8(r1)
	  lfs       f1, -0x69B8(r2)
	  lfd       f2, 0xE8(r1)
	  lfs       f0, -0x699C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0xE0(r1)
	  lwz       r3, 0xE4(r1)
	  addi      r0, r3, 0x7
	  cmpw      r21, r0
	  ble-      .loc_0x92C
	  mr        r21, r0

	.loc_0x92C:
	  bl        -0x45848
	  lis       r5, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xDC(r1)
	  xoris     r0, r21, 0x8000
	  lis       r4, 0x8051
	  lis       r3, 0x804B
	  stw       r5, 0xD8(r1)
	  subi      r24, r4, 0x2E20
	  lfd       f4, -0x6998(r2)
	  subi      r25, r3, 0x3AC8
	  lfd       f0, 0xD8(r1)
	  li        r22, 0
	  stw       r0, 0xD4(r1)
	  fsubs     f3, f0, f4
	  lfs       f2, -0x69B8(r2)
	  stw       r5, 0xD0(r1)
	  lfs       f1, -0x69B4(r2)
	  lfd       f0, 0xD0(r1)
	  fdivs     f2, f3, f2
	  fsubs     f0, f0, f4
	  fmuls     f28, f1, f2
	  fdivs     f29, f1, f0
	  b         .loc_0xC14

	.loc_0x98C:
	  bl        -0x458A8
	  lfs       f3, 0x0(r31)
	  mr        r3, r24
	  lfs       f1, 0x9C(r1)
	  lfs       f2, 0x8(r31)
	  lfs       f0, 0xA4(r1)
	  fsubs     f1, f3, f1
	  fsubs     f2, f2, f0
	  bl        -0xD9D60
	  bl        0x302D64
	  stfs      f1, 0xA8(r1)
	  mr        r3, r25
	  lwz       r0, -0x7C30(r13)
	  li        r23, 0
	  lwz       r4, 0x1C(r27)
	  li        r5, -0x1
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0xA0C

	.loc_0x9D8:
	  lbz       r0, 0x4(r3)
	  extsb     r0, r0
	  cmpw      r0, r4
	  bne-      .loc_0xA04
	  lhz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x9FC
	  mr        r5, r4
	  b         .loc_0xA04

	.loc_0x9FC:
	  lbz       r5, 0x5(r3)
	  extsb     r5, r5

	.loc_0xA04:
	  addi      r3, r3, 0x34
	  bdnz+     .loc_0x9D8

	.loc_0xA0C:
	  lwz       r6, 0x30(r30)
	  li        r3, 0
	  b         .loc_0xA2C

	.loc_0xA18:
	  lwz       r0, 0x1C(r6)
	  cmpw      r0, r5
	  bne-      .loc_0xA28
	  lwz       r3, 0x20(r6)

	.loc_0xA28:
	  lwz       r6, 0x4(r6)

	.loc_0xA2C:
	  cmplwi    r6, 0
	  bne+      .loc_0xA18
	  cmplwi    r3, 0
	  beq-      .loc_0xA58
	  stw       r4, 0xC4(r1)
	  addi      r4, r1, 0x9C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr        r23, r3

	.loc_0xA58:
	  cmplwi    r23, 0
	  beq-      .loc_0xC0C
	  mr        r3, r23
	  addi      r4, r1, 0x24
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xC(r31)
	  lfs       f1, 0x30(r1)
	  lfs       f0, -0x69B0(r2)
	  fsubs     f27, f2, f1
	  fcmpo     cr0, f27, f0
	  bge-      .loc_0xA94
	  fmr       f27, f0

	.loc_0xA94:
	  bl        -0x459B0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xEC(r1)
	  fmr       f4, f28
	  lfs       f0, -0x69A0(r2)
	  stw       r0, 0xE8(r1)
	  lfd       f2, -0x6998(r2)
	  fmuls     f3, f0, f27
	  lfd       f0, 0xE8(r1)
	  lfs       f1, -0x69B8(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, -0x69B0(r2)
	  fcmpo     cr0, f28, f0
	  fdivs     f0, f2, f1
	  fmadds    f5, f3, f0, f3
	  bge-      .loc_0xADC
	  fneg      f4, f28

	.loc_0xADC:
	  lfs       f3, -0x69AC(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x69B0(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f4, f3
	  lfs       f1, 0x8(r31)
	  fcmpo     cr0, f28, f0
	  fctiwz    f0, f2
	  stfd      f0, 0xE0(r1)
	  lwz       r0, 0xE4(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f4, f5, f0, f1
	  bge-      .loc_0xB3C
	  lfs       f0, -0x69A8(r2)
	  fmuls     f0, f28, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xD8(r1)
	  lwz       r0, 0xDC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f2, f0
	  b         .loc_0xB54

	.loc_0xB3C:
	  fmuls     f0, f28, f3
	  fctiwz    f0, f0
	  stfd      f0, 0xD0(r1)
	  lwz       r0, 0xD4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r4, r0

	.loc_0xB54:
	  lfs       f1, 0x0(r31)
	  addi      r4, r1, 0x18
	  lfs       f0, -0x69B0(r2)
	  fmadds    f1, f5, f2, f1
	  stfs      f4, 0x20(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f0, 0x1C(r1)
	  stfs      f1, 0x18(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x1C(r1)
	  mr        r3, r23
	  addi      r4, r1, 0x18
	  li        r5, 0
	  bl        0x2C158
	  lfs       f0, 0x18(r1)
	  mr        r3, r23
	  li        r4, 0
	  stfs      f0, 0x198(r23)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x19C(r23)
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x1A0(r23)
	  bl        0x2BF54
	  lis       r3, 0x804B
	  lfs       f0, -0x69B0(r2)
	  subi      r0, r3, 0x5D00
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r5, r3, 0x4DE0
	  li        r0, 0
	  mr        r3, r23
	  stw       r23, 0xC(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stfs      f0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r23
	  li        r4, 0
	  bl        0x2C98C

	.loc_0xC0C:
	  fadds     f28, f28, f29
	  addi      r22, r22, 0x1

	.loc_0xC14:
	  cmpw      r22, r21
	  blt+      .loc_0x98C
	  addi      r29, r29, 0x1
	  b         .loc_0xC40

	.loc_0xC24:
	  lwz       r27, 0x4(r27)
	  cmplwi    r27, 0
	  bne-      .loc_0xC34
	  lwz       r27, 0x30(r30)

	.loc_0xC34:
	  cmplw     r27, r23
	  bne+      .loc_0xD8
	  addi      r29, r29, 0xA

	.loc_0xC40:
	  cmpwi     r29, 0xA
	  blt+      .loc_0x74

	.loc_0xC48:
	  psq_l     f31,0x168(r1),0,0
	  lfd       f31, 0x160(r1)
	  psq_l     f30,0x158(r1),0,0
	  lfd       f30, 0x150(r1)
	  psq_l     f29,0x148(r1),0,0
	  lfd       f29, 0x140(r1)
	  psq_l     f28,0x138(r1),0,0
	  lfd       f28, 0x130(r1)
	  psq_l     f27,0x128(r1),0,0
	  lfd       f27, 0x120(r1)
	  lmw       r21, 0xF4(r1)
	  lwz       r0, 0x174(r1)
	  mtlr      r0
	  addi      r1, r1, 0x170
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010F140
 * Size:	000030
 */
void Game::EnemyMgrNode::setDebugParm(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010F170
 * Size:	000030
 */
void Game::EnemyMgrNode::resetDebugParm(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x20(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010F1A0
 * Size:	0000B4
 */
void Game::GeneralEnemyMgr::~GeneralEnemyMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x98
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x58
	  subi      r3, r3, 0x4ADC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x54
	  addi      r3, r30, 0x78
	  li        r4, -0x1
	  bl        0x3023A4
	  addi      r3, r30, 0x60
	  li        r4, -0x1
	  bl        0x302398

	.loc_0x54:
	  addic.    r0, r30, 0x20
	  beq-      .loc_0x7C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x20
	  subi      r5, r4, 0x4A90
	  li        r4, 0
	  stw       r5, 0x20(r30)
	  addi      r0, r5, 0x10
	  stw       r0, 0x38(r30)
	  bl        0x302370

	.loc_0x7C:
	  addi      r3, r30, 0x4
	  li        r4, 0
	  bl        0x302364
	  extsh.    r0, r31
	  ble-      .loc_0x98
	  mr        r3, r30
	  bl        -0xEB180

	.loc_0x98:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010F254
 * Size:	000008
 */
void Game::EnemyMgrNode::getMatrixLoadType()
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010F25C
 * Size:	000004
 */
void GenericObjectMgr::doEntry()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010F260
 * Size:	000008
 */
void Game::EnemyMgrNode::@24 @getMatrixLoadType()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x10
	*/
}

/*
 * --INFO--
 * Address:	8010F268
 * Size:	000008
 */
void Game::EnemyMgrNode::@24 @doSimpleDraw(Viewport*)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x1E28
	*/
}

/*
 * --INFO--
 * Address:	8010F270
 * Size:	000008
 */
void Game::EnemyMgrNode::@24 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x1EE0
	*/
}

/*
 * --INFO--
 * Address:	8010F278
 * Size:	000008
 */
void Game::EnemyMgrNode::@24 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x1F80
	*/
}

/*
 * --INFO--
 * Address:	8010F280
 * Size:	000008
 */
void Game::EnemyMgrNode::@24 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x2020
	*/
}

/*
 * --INFO--
 * Address:	8010F288
 * Size:	000008
 */
void Game::EnemyMgrNode::@24 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x20B0
	*/
}

/*
 * --INFO--
 * Address:	8010F290
 * Size:	000008
 */
void Game::EnemyMgrNode::@24 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x2150
	*/
}

/*
 * --INFO--
 * Address:	8010F298
 * Size:	000008
 */
void Game::EnemyMgrNode::@24 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x21E0
	*/
}

/*
 * --INFO--
 * Address:	8010F2A0
 * Size:	000008
 */
void Game::GeneralEnemyMgr::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x104
	*/
}
