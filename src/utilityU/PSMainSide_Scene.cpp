

/*
 * --INFO--
 * Address:	80467630
 * Size:	000084
 */
void __ct__Q23PSM9SceneBaseFUcPQ26PSGame9SceneInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x132068
  lis       r3, 0x804F
  cmplwi    r31, 0
  subi      r0, r3, 0x97C
  stw       r0, 0x0(r30)
  stw       r31, 0x24(r30)
  bne-      .loc_0x54
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x24
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43D040

.loc_0x54:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
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
 * Address:	804676B4
 * Size:	000008
 */
void getSceneFx__Q23PSM9SceneBaseFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x2938(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	804676BC
 * Size:	000058
 */
void becomeSceneCamera__Q23PSM9SceneBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x24(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x31
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43D0B4

.loc_0x3C:
  lwz       r3, 0x24(r31)
  bl        -0x13218C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80467714
 * Size:	000054
 */
void getSceneInfoA__Q23PSM9SceneBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x24(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x38
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43D10C

.loc_0x3C:
  lwz       r0, 0x14(r1)
  lwz       r3, 0x24(r31)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80467768
 * Size:	000028
 */
void pauseOn_2D__Q23PSM9SceneBaseFUcUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x10
  rlwinm    r4,r4,0,24,31
  stw       r0, 0x14(r1)
  bl        -0x133CB0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80467790
 * Size:	000024
 */
void pauseOff_2D__Q23PSM9SceneBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x10
  stw       r0, 0x14(r1)
  bl        -0x133C78
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804677B4
 * Size:	000004
 */
void pauseOn_Demo__Q23PSM9SceneBaseFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	804677B8
 * Size:	000004
 */
void pauseOff_Demo__Q23PSM9SceneBaseFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	804677BC
 * Size:	000090
 */
void __ct__Q23PSM12Scene_GlobalFUcPQ26PSGame9SceneInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x1321F4
  lis       r3, 0x804F
  cmplwi    r31, 0
  subi      r0, r3, 0x97C
  stw       r0, 0x0(r30)
  stw       r31, 0x24(r30)
  bne-      .loc_0x54
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x24
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43D1CC

.loc_0x54:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x9D0
  stw       r0, 0x0(r30)
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
 * Address:	8046784C
 * Size:	0000C8
 */
void __dt__Q23PSM12Scene_GlobalFv(void)
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
  beq-      .loc_0xAC
  lis       r3, 0x804F
  subi      r0, r3, 0x9D0
  stw       r0, 0x0(r30)
  lwz       r3, -0x6E30(r13)
  cmplwi    r3, 0
  beq-      .loc_0x4C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x4C:
  lwz       r3, -0x6E34(r13)
  li        r0, 0
  stw       r0, -0x6E30(r13)
  cmplwi    r3, 0
  beq-      .loc_0x74
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x74:
  li        r0, 0
  cmplwi    r30, 0
  stw       r0, -0x6E34(r13)
  beq-      .loc_0x9C
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x97C
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x1322C4

.loc_0x9C:
  extsh.    r0, r31
  ble-      .loc_0xAC
  mr        r3, r30
  bl        -0x443840

.loc_0xAC:
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
 * Address:	80467914
 * Size:	000008
 */
void getCamDistVol__Q23PSM12Scene_GlobalFUc(void)
{
/*
.loc_0x0:
  lfs       f1, 0x293C(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8046791C
 * Size:	000094
 */
void getGlobalStream__Q23PSM12Scene_GlobalFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1
  addi      r3, r3, 0x10
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  bl        -0x133A98
  mr.       r31, r3
  bne-      .loc_0x40
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x72
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43D318

.loc_0x40:
  mr        r3, r31
  lwz       r12, 0x10(r31)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x1
  beq-      .loc_0x7C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x73
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43D354

.loc_0x7C:
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
 * Address:	804679B0
 * Size:	0000BC
 */
void startGlobalStream__Q23PSM12Scene_GlobalFUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x10
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r4
  li        r4, 0x1
  bl        -0x133B34
  mr.       r31, r3
  bne-      .loc_0x48
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x72
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43D3B4

.loc_0x48:
  mr        r3, r31
  lwz       r12, 0x10(r31)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x1
  beq-      .loc_0x84
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x73
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43D3F0

.loc_0x84:
  mr        r3, r31
  mr        r4, r30
  bl        -0x135634
  mr        r3, r31
  lwz       r12, 0x10(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
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
 * Address:	........
 * Size:	0000B4
 */
void stopGlobalStream__Q23PSM12Scene_GlobalFUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80467A6C
 * Size:	000098
 */
void __ct__Q23PSM10Scene_DemoFUcPQ26PSGame9SceneInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x1324A4
  lis       r3, 0x804F
  cmplwi    r31, 0
  subi      r0, r3, 0x97C
  stw       r0, 0x0(r30)
  stw       r31, 0x24(r30)
  bne-      .loc_0x54
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x24
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43D47C

.loc_0x54:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804F
  li        r0, 0
  subi      r4, r3, 0xA24
  mr        r3, r30
  stw       r4, 0x0(r30)
  stb       r0, 0x28(r30)
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
 * Address:	80467B04
 * Size:	000084
 */
void getSeSceneGate__Q23PSM10Scene_DemoFPQ23PSM7ObjBaseUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  beq-      .loc_0x68
  lwz       r30, 0x2C(r4)
  li        r31, 0
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0xB8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x5C
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0xBC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x60

.loc_0x5C:
  li        r31, 0x1

.loc_0x60:
  mr        r3, r31
  b         .loc_0x6C

.loc_0x68:
  lbz       r3, 0x28(r3)

.loc_0x6C:
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
 * Address:	80467B88
 * Size:	000008
 */
void getCamDistVol__Q23PSM10Scene_DemoFUc(void)
{
/*
.loc_0x0:
  lfs       f1, -0x25C(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	80467B90
 * Size:	000114
 */
void __ct__Q23PSM13Scene_ObjectsFUcPQ26PSGame9SceneInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  mr        r0, r31
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r0
  bl        -0x1325D4
  lis       r3, 0x804F
  cmplwi    r30, 0
  subi      r0, r3, 0x97C
  stw       r0, 0x0(r29)
  stw       r30, 0x24(r29)
  bne-      .loc_0x60
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x24
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43D5AC

.loc_0x60:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804F
  li        r4, 0
  subi      r3, r3, 0xA7C
  lis       r0, 0xF000
  stw       r3, 0x0(r31)
  li        r3, 0x50
  stw       r4, 0x28(r31)
  stw       r4, 0x2C(r31)
  stb       r4, 0x30(r31)
  stw       r0, 0x34(r31)
  bl        -0x443D88
  mr.       r0, r3
  beq-      .loc_0xB0
  bl        -0x132F70
  mr        r0, r3

.loc_0xB0:
  stw       r0, 0x28(r31)
  mr        r3, r30
  li        r4, 0x1
  bl        -0x1326EC
  rlwinm    r0,r3,0,24,31
  subfic    r0, r0, 0x1
  cntlzw    r0, r0
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0xDC
  bl        0xAC40
  b         .loc_0xE0

.loc_0xDC:
  bl        0xACA8

.loc_0xE0:
  lwz       r0, -0x6E44(r13)
  cmplwi    r0, 0
  beq-      .loc_0xF4
  mr        r3, r31
  bl        0x180

.loc_0xF4:
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
 * Address:	80467CA4
 * Size:	0000F8
 */
void __dt__Q23PSM13Scene_ObjectsFv(void)
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
  beq-      .loc_0xDC
  lis       r3, 0x804F
  subi      r0, r3, 0xA7C
  stw       r0, 0x0(r30)
  lwz       r3, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0x4C
  lwz       r12, 0x28(r3)
  li        r4, 0x1
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0x4C:
  lwz       r3, -0x6E4C(r13)
  li        r0, 0
  stw       r0, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0x74
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x74:
  li        r0, 0
  mr        r3, r30
  stw       r0, -0x6E4C(r13)
  bl        0x13C
  lwz       r3, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0xA4
  lwz       r12, 0x28(r3)
  li        r4, 0x1
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0xA4:
  li        r0, 0
  cmplwi    r30, 0
  stw       r0, -0x6E44(r13)
  beq-      .loc_0xCC
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x97C
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x13274C

.loc_0xCC:
  extsh.    r0, r31
  ble-      .loc_0xDC
  mr        r3, r30
  bl        -0x443CC8

.loc_0xDC:
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
 * Address:	80467D9C
 * Size:	000064
 */
void __dt__Q23PSM11ObjCalcBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x4C
  lis       r3, 0x804F
  subi      r0, r3, 0xA98
  stw       r0, 0x0(r31)
  beq-      .loc_0x3C
  lis       r3, 0x804F
  li        r0, 0
  subi      r3, r3, 0xAA4
  stw       r3, 0x0(r31)
  stw       r0, -0x6E4C(r13)

.loc_0x3C:
  extsh.    r0, r4
  ble-      .loc_0x4C
  mr        r3, r31
  bl        -0x443D30

.loc_0x4C:
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
 * Address:	80467E00
 * Size:	000060
 */
void adaptObjMgr__Q23PSM13Scene_ObjectsFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, -0x6E44(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26C8
  li        r4, 0x89
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43D7F8

.loc_0x3C:
  lwz       r0, -0x6E44(r13)
  stw       r0, 0x2C(r31)
  lwz       r3, 0x2C(r31)
  stw       r31, 0x2C(r3)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80467E60
 * Size:	00001C
 */
void detachObjMgr__Q23PSM13Scene_ObjectsFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0x2C(r3)
  cmplwi    r4, 0
  beqlr-    
  li        r0, 0
  stw       r0, 0x2C(r4)
  stw       r0, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80467E7C
 * Size:	000040
 */
void startMainSeq__Q23PSM13Scene_ObjectsFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x126598
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80467EBC
 * Size:	000024
 */
void onStartMainSeq__Q23PSM13Scene_ObjectsFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0x34(r3)
  addis     r0, r4, 0x1000
  cmplwi    r0, 0
  bnelr-    
  li        r4, 0x1
  li        r0, 0
  stb       r4, 0x30(r3)
  stw       r0, 0x34(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80467EE0
 * Size:	000014
 */
void getSeSceneGate__Q23PSM13Scene_ObjectsFPQ23PSM7ObjBaseUl(void)
{
/*
.loc_0x0:
  lbz       r3, 0x30(r3)
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	80467EF4
 * Size:	000024
 */
void getCamDistVol__Q23PSM13Scene_ObjectsFUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x28(r3)
  bl        -0x1330C4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80467F18
 * Size:	000210
 */
void exec__Q23PSM13Scene_ObjectsFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stw       r31, 0x7C(r1)
  stw       r30, 0x78(r1)
  mr        r30, r3
  stw       r29, 0x74(r1)
  lwz       r3, 0x34(r3)
  addis     r0, r3, 0x1000
  cmplwi    r0, 0
  beq-      .loc_0x34
  addi      r0, r3, 0x1
  stw       r0, 0x34(r30)

.loc_0x34:
  lwz       r0, -0x6960(r13)
  li        r3, 0
  stb       r3, -0x636C(r13)
  cmplwi    r0, 0
  beq-      .loc_0x1DC
  li        r31, 0
  b         .loc_0x1C8

.loc_0x50:
  lwz       r3, -0x6960(r13)
  rlwinm    r0,r31,2,22,29
  lwz       r3, 0x24(r3)
  lwzx      r29, r3, r0
  cmplwi    r29, 0
  beq-      .loc_0x1C4
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x0(r3)
  mr        r4, r29
  lfs       f1, 0x4(r3)
  lfs       f0, 0x8(r3)
  addi      r3, r1, 0x50
  stfs      f2, 0x2C(r1)
  stfs      f1, 0x30(r1)
  lwz       r6, 0x2C(r1)
  stfs      f0, 0x34(r1)
  lwz       r5, 0x30(r1)
  lwz       r0, 0x34(r1)
  stw       r6, 0x44(r1)
  stw       r5, 0x48(r1)
  stw       r0, 0x4C(r1)
  bl        -0x4D534
  lfs       f0, 0x50(r1)
  lfs       f1, 0x54(r1)
  stfs      f0, 0x38(r1)
  lfs       f0, 0x58(r1)
  stfs      f1, 0x3C(r1)
  lwz       r0, 0x38(r1)
  lwz       r3, 0x3C(r1)
  stfs      f0, 0x40(r1)
  lfs       f0, 0x44(r1)
  stw       r0, 0x5C(r1)
  lwz       r0, 0x40(r1)
  stw       r3, 0x60(r1)
  lfs       f1, 0x5C(r1)
  stw       r0, 0x64(r1)
  fsubs     f3, f1, f0
  lfs       f2, 0x60(r1)
  lfs       f0, 0x48(r1)
  lfs       f1, 0x64(r1)
  fsubs     f2, f2, f0
  lfs       f0, 0x4C(r1)
  stfs      f3, 0x20(r1)
  fsubs     f1, f1, f0
  lfs       f0, 0x293C(r2)
  stfs      f2, 0x24(r1)
  lwz       r0, 0x20(r1)
  lwz       r3, 0x24(r1)
  stfs      f1, 0x28(r1)
  stw       r0, 0x8(r1)
  lwz       r0, 0x28(r1)
  stw       r3, 0xC(r1)
  lfs       f2, 0x8(r1)
  lfs       f1, 0xC(r1)
  stw       r0, 0x10(r1)
  fmuls     f3, f2, f2
  fmuls     f2, f1, f1
  lfs       f1, 0x10(r1)
  stfs      f3, 0x8(r1)
  fmuls     f1, f1, f1
  stfs      f2, 0xC(r1)
  lwz       r0, 0x8(r1)
  lwz       r3, 0xC(r1)
  stfs      f1, 0x10(r1)
  stw       r0, 0x14(r1)
  lwz       r0, 0x10(r1)
  stw       r3, 0x18(r1)
  lfs       f2, 0x14(r1)
  lfs       f1, 0x18(r1)
  stw       r0, 0x1C(r1)
  fadds     f1, f2, f1
  lfs       f2, 0x1C(r1)
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x194
  fsqrte    f0, f1
  fmuls     f1, f0, f1

.loc_0x194:
  lwz       r3, 0x28(r30)
  mr        r4, r31
  bl        -0x1332C0
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  rlwinm    r4,r31,0,24,31
  lwz       r5, 0x28(r30)
  addi      r0, r4, 0x4C
  stbx      r3, r5, r0

.loc_0x1C4:
  addi      r31, r31, 0x1

.loc_0x1C8:
  lwz       r3, 0x24(r30)
  rlwinm    r4,r31,0,24,31
  lbz       r0, 0x7(r3)
  cmplw     r4, r0
  blt+      .loc_0x50

.loc_0x1DC:
  mr        r3, r30
  bl        -0x126680
  lwz       r3, 0x2C(r30)
  cmplwi    r3, 0
  beq-      .loc_0x1F4
  bl        -0xB224

.loc_0x1F4:
  lwz       r0, 0x84(r1)
  lwz       r31, 0x7C(r1)
  lwz       r30, 0x78(r1)
  lwz       r29, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void __ct__Q23PSM10Scene_GameFUcPQ26PSGame9SceneInfo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<PSM::EnemyBoss>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80468128
 * Size:	000114
 */
void init__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x40
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26BC
  li        r4, 0x1D3
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43DB24

.loc_0x40:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x68
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26BC
  li        r4, 0x1DC
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43DB4C

.loc_0x68:
  mr        r3, r30
  mr        r4, r31
  bl        -0xDAF8
  lbz       r0, -0x6778(r13)
  li        r30, 0x1
  cmplwi    r0, 0
  bne-      .loc_0xE8
  lwz       r3, 0x24(r31)
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x14
  beq-      .loc_0xE8
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xEC
  lwz       r3, 0x24(r31)
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x3
  bne-      .loc_0xEC
  bl        -0x133F7C
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0xEC
  lwz       r3, 0x24(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xEC

.loc_0xE8:
  li        r30, 0

.loc_0xEC:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0xFC
  mr        r3, r31
  bl        0x234

.loc_0xFC:
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
 * Address:	8046823C
 * Size:	000168
 */
void __dt__Q23PSM10Scene_GameFv(void)
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
  beq-      .loc_0x14C
  lis       r3, 0x804F
  subi      r0, r3, 0xB18
  stw       r0, 0x0(r30)
  lwz       r3, -0x6E50(r13)
  cmplwi    r3, 0
  beq-      .loc_0x4C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x4C:
  li        r0, 0
  stw       r0, -0x6E50(r13)
  lwz       r3, 0x44(r30)
  cmplwi    r3, 0
  beq-      .loc_0x68
  li        r4, 0x1
  bl        -0x127628

.loc_0x68:
  addic.    r0, r30, 0x38
  beq-      .loc_0x7C
  addi      r3, r30, 0x38
  li        r4, 0
  bl        -0x441A4C

.loc_0x7C:
  cmplwi    r30, 0
  beq-      .loc_0x13C
  lis       r3, 0x804F
  subi      r0, r3, 0xA7C
  stw       r0, 0x0(r30)
  lwz       r3, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0xB0
  lwz       r12, 0x28(r3)
  li        r4, 0x1
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0xB0:
  lwz       r3, -0x6E4C(r13)
  li        r0, 0
  stw       r0, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0xD8
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xD8:
  li        r0, 0
  stw       r0, -0x6E4C(r13)
  lwz       r3, 0x2C(r30)
  cmplwi    r3, 0
  beq-      .loc_0xF4
  stw       r0, 0x2C(r3)
  stw       r0, 0x2C(r30)

.loc_0xF4:
  lwz       r3, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0x114
  lwz       r12, 0x28(r3)
  li        r4, 0x1
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0x114:
  li        r0, 0
  cmplwi    r30, 0
  stw       r0, -0x6E44(r13)
  beq-      .loc_0x13C
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x97C
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x132D54

.loc_0x13C:
  extsh.    r0, r31
  ble-      .loc_0x14C
  mr        r3, r30
  bl        -0x4442D0

.loc_0x14C:
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
 * Address:	804683A4
 * Size:	0000B0
 */
void __dt__Q33PSM12BossBgmFader3MgrFv(void)
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
  beq-      .loc_0x94
  lis       r3, 0x804F
  addic.    r0, r30, 0x4
  subi      r0, r3, 0xB24
  stw       r0, 0x0(r30)
  beq-      .loc_0x68
  lis       r3, 0x804F
  addic.    r0, r30, 0x4
  subi      r0, r3, 0x928
  stw       r0, 0x10(r30)
  beq-      .loc_0x68
  lis       r3, 0x804F
  addic.    r0, r30, 0x4
  subi      r0, r3, 0x91C
  stw       r0, 0x10(r30)
  beq-      .loc_0x68
  addi      r3, r30, 0x4
  li        r4, 0
  bl        -0x441BA0

.loc_0x68:
  cmplwi    r30, 0
  beq-      .loc_0x84
  lis       r3, 0x804F
  li        r0, 0
  subi      r3, r3, 0xB30
  stw       r3, 0x0(r30)
  stw       r0, -0x6E50(r13)

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x444380

.loc_0x94:
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
 * Address:	80468454
 * Size:	000058
 */
void attachBossFaderMgr__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, -0x6E50(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26C8
  li        r4, 0x89
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43DE4C

.loc_0x3C:
  lwz       r0, -0x6E50(r13)
  stw       r0, 0x50(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void detachBossFaderMgr__Q23PSM10Scene_GameFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804684AC
 * Size:	0001DC
 */
void bossKilled__Q23PSM10Scene_GameFPQ23PSM9EnemyBoss(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  subi      r29, r3, 0x26F8
  stw       r28, 0x10(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x48
  addi      r3, r29, 0x3C
  addi      r5, r29, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x43DEB0

.loc_0x48:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x68
  addi      r3, r29, 0x3C
  addi      r5, r29, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x43DED0

.loc_0x68:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x88
  addi      r3, r29, 0x48
  addi      r5, r29, 0x24
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x43DEF0

.loc_0x88:
  lwz       r3, 0x4(r30)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0xA0
  li        r30, 0
  b         .loc_0xA8

.loc_0xA0:
  bl        -0x132ECC
  mr        r30, r3

.loc_0xA8:
  lwz       r0, -0x6E50(r13)
  li        r28, 0x1
  cmplwi    r0, 0
  bne-      .loc_0xCC
  addi      r3, r29, 0x30
  addi      r5, r29, 0x24
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x43DF34

.loc_0xCC:
  lwz       r3, -0x6E50(r13)
  lwz       r4, 0x4(r3)
  b         .loc_0xF0

.loc_0xD8:
  lwz       r3, 0x0(r4)
  lbz       r0, 0xFE(r3)
  cmplwi    r0, 0
  beq-      .loc_0xEC
  li        r28, 0

.loc_0xEC:
  lwz       r4, 0xC(r4)

.loc_0xF0:
  cmplwi    r4, 0
  bne+      .loc_0xD8
  rlwinm.   r0,r28,0,24,31
  bne-      .loc_0x1BC
  cmplwi    r30, 0
  beq-      .loc_0x1BC
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x128
  addi      r3, r29, 0x3C
  addi      r5, r29, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x43DF90

.loc_0x128:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x148
  addi      r3, r29, 0x3C
  addi      r5, r29, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x43DFB0

.loc_0x148:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x168
  addi      r3, r29, 0x48
  addi      r5, r29, 0x24
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x43DFD0

.loc_0x168:
  lwz       r3, 0x4(r30)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0x180
  li        r3, 0
  b         .loc_0x184

.loc_0x180:
  bl        -0x132FAC

.loc_0x184:
  cmplwi    r3, 0
  beq-      .loc_0x1BC
  lhz       r0, 0x130(r3)
  cmplwi    r0, 0x2
  beq-      .loc_0x1A4
  rlwinm    r0,r0,0,16,31
  cmplwi    r0, 0x8
  bne-      .loc_0x1BC

.loc_0x1A4:
  mr        r3, r31
  li        r4, 0x1
  lwz       r12, 0x28(r31)
  lwz       r12, 0xD4(r12)
  mtctr     r12
  bctrl     

.loc_0x1BC:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80468688
 * Size:	000100
 */
void startMainSeq__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r0, 0x50(r3)
  cmplwi    r0, 0
  beq-      .loc_0xB4
  lwz       r31, 0x10(r29)
  li        r30, 0
  b         .loc_0x94

.loc_0x34:
  lwz       r3, 0x0(r31)
  lwz       r12, 0x10(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x8C
  lwz       r3, 0x0(r31)
  lwz       r12, 0x10(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x8C
  lwz       r12, 0x10(r3)
  li        r4, 0
  lfs       f1, 0x293C(r2)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x8C:
  lwz       r31, 0xC(r31)
  addi      r30, r30, 0x1

.loc_0x94:
  cmplwi    r31, 0
  bne+      .loc_0x34
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xCC

.loc_0xB4:
  bl        -0x126E44
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     

.loc_0xCC:
  lwz       r3, 0x44(r29)
  cmplwi    r3, 0
  beq-      .loc_0xDC
  bl        -0x127AB4

.loc_0xDC:
  li        r0, 0
  stw       r0, 0x4C(r29)
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
 * Address:	80468788
 * Size:	00008C
 */
void stopMainSeq__Q23PSM10Scene_GameFUl(void)
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
  lwz       r0, 0x50(r3)
  cmplwi    r0, 0
  beq-      .loc_0x5C
  lwz       r31, 0x10(r29)
  b         .loc_0x50

.loc_0x34:
  lwz       r3, 0x0(r31)
  mr        r4, r30
  lwz       r12, 0x10(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0xC(r31)

.loc_0x50:
  cmplwi    r31, 0
  bne+      .loc_0x34
  b         .loc_0x60

.loc_0x5C:
  bl        -0x126EB0

.loc_0x60:
  lwz       r3, 0x44(r29)
  cmplwi    r3, 0
  beq-      .loc_0x70
  bl        -0x127AD4

.loc_0x70:
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
 * Address:	80468814
 * Size:	000050
 */
void stopAllSound__Q23PSM10Scene_GameFUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0x44(r3)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  bl        -0x127B1C

.loc_0x2C:
  mr        r3, r30
  mr        r4, r31
  bl        -0x126ED8
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
 * Address:	80468864
 * Size:	0003C4
 */
void exec__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  stfd      f31, 0x80(r1)
  psq_st    f31,0x88(r1),0,0
  stw       r31, 0x7C(r1)
  stw       r30, 0x78(r1)
  stw       r29, 0x74(r1)
  stw       r28, 0x70(r1)
  mr        r29, r3
  lis       r4, 0x804A
  lwz       r3, 0x54(r3)
  subi      r31, r4, 0x26F8
  cmplwi    r3, 0
  beq-      .loc_0x40
  bl        0x512C

.loc_0x40:
  lwz       r3, 0x50(r29)
  cmplwi    r3, 0
  beq-      .loc_0x50
  bl        0x412C

.loc_0x50:
  lwz       r3, 0x58(r29)
  cmplwi    r3, 0
  beq-      .loc_0x60
  bl        -0xBE04

.loc_0x60:
  lwz       r3, 0x44(r29)
  cmplwi    r3, 0
  beq-      .loc_0x70
  bl        -0x127AC0

.loc_0x70:
  lwz       r3, 0x34(r29)
  addis     r0, r3, 0x1000
  cmplwi    r0, 0
  beq-      .loc_0x88
  addi      r0, r3, 0x1
  stw       r0, 0x34(r29)

.loc_0x88:
  lwz       r0, -0x6960(r13)
  li        r30, 0
  stb       r30, -0x636C(r13)
  cmplwi    r0, 0
  beq-      .loc_0x22C
  b         .loc_0x218

.loc_0xA0:
  lwz       r3, -0x6960(r13)
  rlwinm    r0,r30,2,22,29
  lwz       r3, 0x24(r3)
  lwzx      r28, r3, r0
  cmplwi    r28, 0
  beq-      .loc_0x214
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x0(r3)
  mr        r4, r28
  lfs       f1, 0x4(r3)
  lfs       f0, 0x8(r3)
  addi      r3, r1, 0x50
  stfs      f2, 0x2C(r1)
  stfs      f1, 0x30(r1)
  lwz       r6, 0x2C(r1)
  stfs      f0, 0x34(r1)
  lwz       r5, 0x30(r1)
  lwz       r0, 0x34(r1)
  stw       r6, 0x5C(r1)
  stw       r5, 0x60(r1)
  stw       r0, 0x64(r1)
  bl        -0x4DED0
  lfs       f0, 0x50(r1)
  lfs       f1, 0x54(r1)
  stfs      f0, 0x38(r1)
  lfs       f0, 0x58(r1)
  stfs      f1, 0x3C(r1)
  lwz       r0, 0x38(r1)
  lwz       r3, 0x3C(r1)
  stfs      f0, 0x40(r1)
  lfs       f0, 0x5C(r1)
  stw       r0, 0x44(r1)
  lwz       r0, 0x40(r1)
  stw       r3, 0x48(r1)
  lfs       f1, 0x44(r1)
  stw       r0, 0x4C(r1)
  fsubs     f3, f1, f0
  lfs       f2, 0x48(r1)
  lfs       f0, 0x60(r1)
  lfs       f1, 0x4C(r1)
  fsubs     f2, f2, f0
  lfs       f0, 0x64(r1)
  stfs      f3, 0x20(r1)
  fsubs     f1, f1, f0
  lfs       f0, 0x293C(r2)
  stfs      f2, 0x24(r1)
  lwz       r0, 0x20(r1)
  lwz       r3, 0x24(r1)
  stfs      f1, 0x28(r1)
  stw       r0, 0x8(r1)
  lwz       r0, 0x28(r1)
  stw       r3, 0xC(r1)
  lfs       f2, 0x8(r1)
  lfs       f1, 0xC(r1)
  stw       r0, 0x10(r1)
  fmuls     f3, f2, f2
  fmuls     f2, f1, f1
  lfs       f1, 0x10(r1)
  stfs      f3, 0x8(r1)
  fmuls     f1, f1, f1
  stfs      f2, 0xC(r1)
  lwz       r0, 0x8(r1)
  lwz       r3, 0xC(r1)
  stfs      f1, 0x10(r1)
  stw       r0, 0x14(r1)
  lwz       r0, 0x10(r1)
  stw       r3, 0x18(r1)
  lfs       f2, 0x14(r1)
  lfs       f1, 0x18(r1)
  stw       r0, 0x1C(r1)
  fadds     f1, f2, f1
  lfs       f2, 0x1C(r1)
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1E4
  fsqrte    f0, f1
  fmuls     f1, f0, f1

.loc_0x1E4:
  lwz       r3, 0x28(r29)
  mr        r4, r30
  bl        -0x133C5C
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  rlwinm    r4,r30,0,24,31
  lwz       r5, 0x28(r29)
  addi      r0, r4, 0x4C
  stbx      r3, r5, r0

.loc_0x214:
  addi      r30, r30, 0x1

.loc_0x218:
  lwz       r3, 0x24(r29)
  rlwinm    r4,r30,0,24,31
  lbz       r0, 0x7(r3)
  cmplw     r4, r0
  blt+      .loc_0xA0

.loc_0x22C:
  mr        r3, r29
  bl        -0x12701C
  lwz       r3, 0x2C(r29)
  cmplwi    r3, 0
  beq-      .loc_0x244
  bl        -0xBBC0

.loc_0x244:
  lwz       r3, 0x4C(r29)
  addis     r0, r3, 0x1
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x25C
  addi      r0, r3, 0x1
  stw       r0, 0x4C(r29)

.loc_0x25C:
  lwz       r28, 0x38(r29)
  b         .loc_0x274

.loc_0x264:
  mr        r3, r28
  lwz       r28, 0xC(r28)
  lwz       r3, 0x0(r3)
  bl        -0x8FA4

.loc_0x274:
  cmplwi    r28, 0
  bne+      .loc_0x264
  lwz       r0, -0x6E4C(r13)
  cmplwi    r0, 0
  bne-      .loc_0x29C
  addi      r3, r31, 0x30
  addi      r5, r31, 0x24
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x43E4BC

.loc_0x29C:
  lwz       r28, -0x6E4C(r13)
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x39C
  lbz       r28, 0x8(r28)
  li        r4, 0x1
  subfic    r0, r28, 0x1
  orc       r3, r4, r28
  rlwinm    r0,r0,31,1,31
  sub       r0, r3, r0
  rlwinm.   r0,r0,1,31,31
  bne-      .loc_0x2E0
  li        r4, 0

.loc_0x2E0:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x2FC
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x1FC
  crclr     6, 0x6
  bl        -0x43E51C

.loc_0x2FC:
  lwz       r3, 0x28(r29)
  mr        r4, r28
  bl        -0x133D98
  fmr       f31, f1
  lfs       f0, 0x293C(r2)
  li        r0, 0
  fcmpo     cr0, f31, f0
  ble-      .loc_0x330
  lfs       f0, 0x2940(r2)
  fcmpo     cr0, f31, f0
  cror      2, 0, 0x2
  bne-      .loc_0x330
  li        r0, 0x1

.loc_0x330:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x34C
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x1FE
  crclr     6, 0x6
  bl        -0x43E56C

.loc_0x34C:
  lwz       r28, 0x10(r29)
  b         .loc_0x394

.loc_0x354:
  lwz       r3, 0x0(r28)
  lwz       r12, 0x10(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x390
  lwz       r12, 0x10(r3)
  fmr       f1, f31
  li        r4, 0x5
  li        r5, 0x5
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x390:
  lwz       r28, 0xC(r28)

.loc_0x394:
  cmplwi    r28, 0
  bne+      .loc_0x354

.loc_0x39C:
  psq_l     f31,0x88(r1),0,0
  lwz       r0, 0x94(r1)
  lfd       f31, 0x80(r1)
  lwz       r31, 0x7C(r1)
  lwz       r30, 0x78(r1)
  lwz       r29, 0x74(r1)
  lwz       r28, 0x70(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	80468C28
 * Size:	000008
 */
void getEnvSe__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80468C30
 * Size:	000058
 */
void adaptEnvSe__Q23PSM10Scene_GameFPQ28PSSystem8EnvSeMgr(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  bne-      .loc_0x3C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x24D
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43E628

.loc_0x3C:
  stw       r31, 0x44(r30)
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
 * Address:	80468C88
 * Size:	000100
 */
void bossAppear__Q23PSM10Scene_GameFPQ23PSM9EnemyBossUs(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x804A
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  subi      r31, r6, 0x26F8
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x44
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x43E688

.loc_0x44:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x64
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x43E6A8

.loc_0x64:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x84
  addi      r3, r31, 0x48
  addi      r5, r31, 0x24
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x43E6C8

.loc_0x84:
  lwz       r3, 0x4(r30)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0x9C
  li        r3, 0
  b         .loc_0xA0

.loc_0x9C:
  bl        -0x1336A4

.loc_0xA0:
  cmplwi    r3, 0
  beq-      .loc_0xEC
  lwz       r3, 0x50(r27)
  cmplwi    r3, 0
  beq-      .loc_0xC0
  lwz       r0, 0x24(r3)
  cmpwi     r0, 0
  bne-      .loc_0xEC

.loc_0xC0:
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x28(r28)
  lwz       r12, 0xD4(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x50(r27)
  cmplwi    r3, 0
  beq-      .loc_0xEC
  li        r0, 0x1
  stb       r0, 0x38(r3)

.loc_0xEC:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80468D88
 * Size:	000578
 */
void pauseOn_2D__Q23PSM10Scene_GameFUcUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  rlwinm    r4,r4,0,24,31
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  addi      r3, r31, 0x10
  stw       r30, 0x28(r1)
  mr        r30, r5
  bl        -0x1352E0
  lwz       r3, 0x44(r31)
  cmplwi    r3, 0
  beq-      .loc_0x48
  mr        r4, r30
  bl        -0x128148
  lwz       r3, 0x44(r31)
  li        r0, 0
  sth       r0, 0x10(r3)

.loc_0x48:
  li        r0, 0
  lwz       r3, -0x6D20(r13)
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  subi      r4, r4, 0x434C
  cmplwi    r0, 0
  stw       r4, 0x18(r1)
  stw       r0, 0x1C(r1)
  stw       r3, 0x20(r1)
  bne-      .loc_0x88
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C(r1)
  b         .loc_0x1EC

.loc_0x88:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C(r1)
  b         .loc_0xF4

.loc_0xA0:
  lwz       r3, 0x20(r1)
  lwz       r4, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1EC
  lwz       r3, 0x20(r1)
  lwz       r4, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C(r1)

.loc_0xF4:
  lwz       r12, 0x18(r1)
  addi      r3, r1, 0x18
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xA0
  b         .loc_0x1EC

.loc_0x114:
  lwz       r3, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x26C(r3)
  bl        -0x6270
  lwz       r0, 0x24(r1)
  cmplwi    r0, 0
  bne-      .loc_0x15C
  lwz       r3, 0x20(r1)
  lwz       r4, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C(r1)
  b         .loc_0x1EC

.loc_0x15C:
  lwz       r3, 0x20(r1)
  lwz       r4, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C(r1)
  b         .loc_0x1D0

.loc_0x17C:
  lwz       r3, 0x20(r1)
  lwz       r4, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1EC
  lwz       r3, 0x20(r1)
  lwz       r4, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C(r1)

.loc_0x1D0:
  lwz       r12, 0x18(r1)
  addi      r3, r1, 0x18
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x17C

.loc_0x1EC:
  lwz       r3, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x1C(r1)
  cmplw     r4, r3
  bne+      .loc_0x114
  lwz       r0, 0x2C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x234
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x291
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43E978

.loc_0x234:
  lwz       r3, 0x2C(r31)
  lwz       r31, 0x0(r3)
  b         .loc_0x29C

.loc_0x240:
  lwz       r30, 0x0(r31)
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0xF
  bne-      .loc_0x298
  addi      r3, r30, 0x30
  li        r4, 0x286B
  lwz       r12, 0x30(r30)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x30
  li        r4, 0x2802
  lwz       r12, 0x30(r30)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x298:
  lwz       r31, 0xC(r31)

.loc_0x29C:
  cmplwi    r31, 0
  bne+      .loc_0x240
  li        r0, 0
  lwz       r3, -0x6D0C(r13)
  lis       r4, 0x804B
  stw       r0, 0x14(r1)
  subi      r4, r4, 0x4364
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x2E4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x540

.loc_0x2E4:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x350

.loc_0x2FC:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x540
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x350:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x2FC
  b         .loc_0x540

.loc_0x370:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  lwz       r3, 0x250(r3)
  lwzu      r12, 0x30(r3)
  li        r4, 0x287E
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x287F
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2880
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2881
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2882
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2883
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2884
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2885
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2886
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x4B0
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x540

.loc_0x4B0:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x524

.loc_0x4D0:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x540
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x524:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x4D0

.loc_0x540:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0x370
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80469300
 * Size:	000040
 */
void pauseOff_2D__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x10
  bl        -0x1357F0
  lwz       r3, 0x44(r31)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  bl        -0x128594

.loc_0x2C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80469340
 * Size:	000548
 */
void pauseOn_Demo__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r3
  lwz       r0, 0x2C(r3)
  cmplwi    r0, 0
  bne-      .loc_0x40
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x2C2
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43ED3C

.loc_0x40:
  lwz       r3, 0x2C(r30)
  lwz       r31, 0x0(r3)
  b         .loc_0xA8

.loc_0x4C:
  lwz       r30, 0x0(r31)
  mr        r3, r30
  lwz       r12, 0x28(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0xF
  bne-      .loc_0xA4
  addi      r3, r30, 0x30
  li        r4, 0x286B
  lwz       r12, 0x30(r30)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x30
  li        r4, 0x2802
  lwz       r12, 0x30(r30)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xA4:
  lwz       r31, 0xC(r31)

.loc_0xA8:
  cmplwi    r31, 0
  bne+      .loc_0x4C
  li        r0, 0
  lwz       r3, -0x6D20(r13)
  lis       r4, 0x804B
  stw       r0, 0x24(r1)
  subi      r4, r4, 0x434C
  cmplwi    r0, 0
  stw       r4, 0x18(r1)
  stw       r0, 0x1C(r1)
  stw       r3, 0x20(r1)
  bne-      .loc_0xF0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C(r1)
  b         .loc_0x254

.loc_0xF0:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C(r1)
  b         .loc_0x15C

.loc_0x108:
  lwz       r3, 0x20(r1)
  lwz       r4, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x254
  lwz       r3, 0x20(r1)
  lwz       r4, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C(r1)

.loc_0x15C:
  lwz       r12, 0x18(r1)
  addi      r3, r1, 0x18
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x108
  b         .loc_0x254

.loc_0x17C:
  lwz       r3, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x26C(r3)
  bl        -0x6890
  lwz       r0, 0x24(r1)
  cmplwi    r0, 0
  bne-      .loc_0x1C4
  lwz       r3, 0x20(r1)
  lwz       r4, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C(r1)
  b         .loc_0x254

.loc_0x1C4:
  lwz       r3, 0x20(r1)
  lwz       r4, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C(r1)
  b         .loc_0x238

.loc_0x1E4:
  lwz       r3, 0x20(r1)
  lwz       r4, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x254
  lwz       r3, 0x20(r1)
  lwz       r4, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C(r1)

.loc_0x238:
  lwz       r12, 0x18(r1)
  addi      r3, r1, 0x18
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x1E4

.loc_0x254:
  lwz       r3, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x1C(r1)
  cmplw     r4, r3
  bne+      .loc_0x17C
  li        r0, 0
  lwz       r3, -0x6D0C(r13)
  lis       r4, 0x804B
  stw       r0, 0x14(r1)
  subi      r4, r4, 0x4364
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x2B4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x510

.loc_0x2B4:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x320

.loc_0x2CC:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x510
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x320:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x2CC
  b         .loc_0x510

.loc_0x340:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  lwz       r3, 0x250(r3)
  lwzu      r12, 0x30(r3)
  li        r4, 0x287E
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x287F
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2880
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2881
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2882
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2883
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2884
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2885
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x250(r31)
  li        r4, 0x2886
  lwzu      r12, 0x30(r3)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x480
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x510

.loc_0x480:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x4F4

.loc_0x4A0:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x510
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x4F4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x4A0

.loc_0x510:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0x340
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80469888
 * Size:	000004
 */
void pauseOff_Demo__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8046988C
 * Size:	0000B4
 */
void akubiOK__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x3AF3B4
  lfs       f0, 0x2944(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x68
  bl        -0x10FBC
  cmplwi    r3, 0
  beq-      .loc_0x48
  bl        -0x10FC8
  bl        -0x126800
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x68

.loc_0x48:
  bl        -0x110E0
  cmplwi    r3, 0
  beq-      .loc_0x64
  bl        -0x110EC
  bl        -0x12681C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x68

.loc_0x64:
  li        r31, 0x1

.loc_0x68:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x98
  mr        r3, r30
  bl        -0x134280
  cmplwi    r3, 0
  beq-      .loc_0x98
  mr        r3, r30
  bl        -0x134290
  lhz       r0, 0x130(r3)
  cmplwi    r0, 0
  beq-      .loc_0x98
  li        r31, 0

.loc_0x98:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80469940
 * Size:	000184
 */
void __ct__Q23PSM12Scene_GroundFUcPQ26PSGame9SceneInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x804A
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r30, r3
  mr        r28, r5
  subi      r29, r6, 0x26F8
  mr        r31, r30
  mr        r27, r30
  bl        -0x134384
  lis       r3, 0x804F
  cmplwi    r28, 0
  subi      r0, r3, 0x97C
  stw       r0, 0x0(r27)
  stw       r28, 0x24(r27)
  bne-      .loc_0x58
  addi      r3, r29, 0xC
  addi      r5, r29, 0x24
  li        r4, 0x24
  crclr     6, 0x6
  bl        -0x43F354

.loc_0x58:
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804F
  li        r4, 0
  subi      r3, r3, 0xA7C
  lis       r0, 0xF000
  stw       r3, 0x0(r31)
  li        r3, 0x50
  stw       r4, 0x28(r31)
  stw       r4, 0x2C(r31)
  stb       r4, 0x30(r31)
  stw       r0, 0x34(r31)
  bl        -0x445B30
  mr.       r0, r3
  beq-      .loc_0xA8
  bl        -0x134D18
  mr        r0, r3

.loc_0xA8:
  stw       r0, 0x28(r31)
  mr        r3, r28
  li        r4, 0x1
  bl        -0x134494
  rlwinm    r0,r3,0,24,31
  subfic    r0, r0, 0x1
  cntlzw    r0, r0
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0xD4
  bl        0x8E98
  b         .loc_0xD8

.loc_0xD4:
  bl        0x8F00

.loc_0xD8:
  lwz       r0, -0x6E44(r13)
  cmplwi    r0, 0
  beq-      .loc_0x10C
  bne-      .loc_0xFC
  addi      r3, r29, 0x30
  addi      r5, r29, 0x24
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x43F3F8

.loc_0xFC:
  lwz       r0, -0x6E44(r13)
  stw       r0, 0x2C(r31)
  lwz       r3, 0x2C(r31)
  stw       r31, 0x2C(r3)

.loc_0x10C:
  lis       r4, 0x804F
  addi      r3, r30, 0x38
  subi      r0, r4, 0xB18
  stw       r0, 0x0(r30)
  bl        -0x44318C
  li        r4, 0
  li        r0, -0x1
  stw       r4, 0x44(r30)
  li        r3, 0x14
  stw       r4, 0x48(r30)
  stw       r0, 0x4C(r30)
  stw       r4, 0x50(r30)
  stw       r4, 0x58(r30)
  bl        -0x445BDC
  mr.       r0, r3
  beq-      .loc_0x154
  bl        0x3E44
  mr        r0, r3

.loc_0x154:
  lis       r3, 0x804F
  stw       r0, 0x54(r30)
  subi      r3, r3, 0xBA4
  li        r0, -0x1
  stw       r3, 0x0(r30)
  mr        r3, r30
  stw       r0, 0x5C(r30)
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80469AC4
 * Size:	000044
 */
void exec__Q23PSM12Scene_GroundFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1274
  lwz       r3, 0x5C(r31)
  addis     r0, r3, 0x1
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x30
  addi      r0, r3, 0x1
  stw       r0, 0x5C(r31)

.loc_0x30:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80469B08
 * Size:	00000C
 */
void setPollutUp__Q23PSM12Scene_GroundFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x5C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80469B14
 * Size:	0001AC
 */
void fadeMainBgm__Q23PSM12Scene_GroundFfUlQ33PSM12Scene_Ground4Time(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  fmr       f31, f1
  lwz       r3, 0x10(r3)
  mr        r29, r4
  mr        r30, r5
  lwz       r31, 0x0(r3)
  cmplwi    r31, 0
  bne-      .loc_0x60
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x32D
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43F530

.loc_0x60:
  cmpwi     r30, 0x1
  beq-      .loc_0x16C
  bge-      .loc_0x184
  cmpwi     r30, 0
  bge-      .loc_0x78
  b         .loc_0x184

.loc_0x78:
  lfs       f0, 0x293C(r2)
  fcmpu     cr0, f0, f31
  bne-      .loc_0xF8
  mr        r3, r31
  lwz       r12, 0x10(r31)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x0(r3)
  cmplwi    r0, 0
  beq-      .loc_0xD8
  mr        r3, r31
  lwz       r12, 0x10(r31)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  fmr       f1, f31
  mr        r4, r29
  li        r5, 0x2
  lwz       r12, 0x10(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xD8:
  lwz       r3, 0x44(r28)
  cmplwi    r3, 0
  beq-      .loc_0x184
  fmr       f1, f31
  mr        r4, r29
  li        r5, 0x2
  bl        -0x128E64
  b         .loc_0x184

.loc_0xF8:
  mr        r3, r31
  lwz       r12, 0x10(r31)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x14C
  mr        r3, r31
  lwz       r12, 0x10(r31)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  fmr       f1, f31
  mulli     r4, r29, 0x3
  li        r5, 0x2
  lwz       r12, 0x10(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x14C:
  lwz       r3, 0x44(r28)
  cmplwi    r3, 0
  beq-      .loc_0x184
  fmr       f1, f31
  mr        r4, r29
  li        r5, 0x2
  bl        -0x128ED8
  b         .loc_0x184

.loc_0x16C:
  mr        r3, r28
  li        r4, 0x3C
  lwz       r12, 0x0(r28)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x184:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80469CC0
 * Size:	000184
 */
void jumpMainBgm__Q23PSM12Scene_GroundFUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  lwz       r3, 0x10(r3)
  lwz       r30, 0x0(r3)
  cmplwi    r30, 0
  bne-      .loc_0x4C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x34E
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43F6C8

.loc_0x4C:
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  beq-      .loc_0x88
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x34F
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x43F704

.loc_0x88:
  mr        r3, r30
  rlwinm    r4,r29,0,24,31
  lwz       r12, 0x10(r30)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x44(r31)
  cmplwi    r3, 0
  beq-      .loc_0x168
  lwz       r3, 0x0(r3)
  b         .loc_0x14C

.loc_0xB4:
  lwz       r4, 0x0(r3)
  lwz       r0, 0x24(r4)
  cmplwi    r0, 0x4039
  beq-      .loc_0xDC
  cmplwi    r0, 0x4038
  beq-      .loc_0xDC
  cmplwi    r0, 0x403A
  beq-      .loc_0xDC
  cmplwi    r0, 0x403C
  bne-      .loc_0xE8

.loc_0xDC:
  li        r0, 0x4014
  stw       r0, 0x24(r4)
  b         .loc_0x148

.loc_0xE8:
  cmplwi    r0, 0x4037
  beq-      .loc_0xF8
  cmplwi    r0, 0x403B
  bne-      .loc_0x104

.loc_0xF8:
  li        r0, 0x4015
  stw       r0, 0x24(r4)
  b         .loc_0x148

.loc_0x104:
  cmplwi    r0, 0x402F
  beq-      .loc_0x11C
  cmplwi    r0, 0x4033
  beq-      .loc_0x11C
  cmplwi    r0, 0x4035
  bne-      .loc_0x128

.loc_0x11C:
  li        r0, 0x4031
  stw       r0, 0x24(r4)
  b         .loc_0x148

.loc_0x128:
  cmplwi    r0, 0x4030
  beq-      .loc_0x140
  cmplwi    r0, 0x4034
  beq-      .loc_0x140
  cmplwi    r0, 0x4036
  bne-      .loc_0x148

.loc_0x140:
  li        r0, 0x4032
  stw       r0, 0x24(r4)

.loc_0x148:
  lwz       r3, 0xC(r3)

.loc_0x14C:
  cmplwi    r3, 0
  bne+      .loc_0xB4
  lwz       r3, 0x44(r31)
  li        r4, 0
  lfs       f1, 0x293C(r2)
  li        r5, 0x2
  bl        -0x129084

.loc_0x168:
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
 * Address:	80469E44
 * Size:	000050
 */
void changeEnvSE_Noon__Q23PSM12Scene_GroundFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  cmplwi    r3, 0
  beqlr-    
  lwz       r5, 0x0(r3)
  li        r3, 0x4033
  li        r0, 0x4034
  b         .loc_0x44

.loc_0x1C:
  lwz       r6, 0x0(r5)
  lwz       r4, 0x24(r6)
  cmplwi    r4, 0x402F
  bne-      .loc_0x34
  stw       r3, 0x24(r6)
  b         .loc_0x40

.loc_0x34:
  cmplwi    r4, 0x4035
  bne-      .loc_0x40
  stw       r0, 0x24(r6)

.loc_0x40:
  lwz       r5, 0xC(r5)

.loc_0x44:
  cmplwi    r5, 0
  bne+      .loc_0x1C
  blr
*/
}

/*
 * --INFO--
 * Address:	80469E94
 * Size:	0001E4
 */
void __ct__Q23PSM10Scene_CaveFUcPQ26PSGame9SceneInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x804A
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r27, r3
  mr        r0, r27
  mr        r30, r5
  mr        r28, r0
  subi      r31, r6, 0x26F8
  mr        r29, r0
  mr        r26, r0
  bl        -0x1348E0
  lis       r3, 0x804F
  cmplwi    r30, 0
  subi      r0, r3, 0x97C
  stw       r0, 0x0(r26)
  stw       r30, 0x24(r26)
  bne-      .loc_0x60
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x24
  crclr     6, 0x6
  bl        -0x43F8B0

.loc_0x60:
  mr        r3, r26
  lwz       r12, 0x0(r26)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804F
  li        r4, 0
  subi      r3, r3, 0xA7C
  lis       r0, 0xF000
  stw       r3, 0x0(r29)
  li        r3, 0x50
  stw       r4, 0x28(r29)
  stw       r4, 0x2C(r29)
  stb       r4, 0x30(r29)
  stw       r0, 0x34(r29)
  bl        -0x44608C
  mr.       r0, r3
  beq-      .loc_0xB0
  bl        -0x135274
  mr        r0, r3

.loc_0xB0:
  stw       r0, 0x28(r29)
  mr        r3, r30
  li        r4, 0x1
  bl        -0x1349F0
  rlwinm    r0,r3,0,24,31
  subfic    r0, r0, 0x1
  cntlzw    r0, r0
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0xDC
  bl        0x893C
  b         .loc_0xE0

.loc_0xDC:
  bl        0x89A4

.loc_0xE0:
  lwz       r0, -0x6E44(r13)
  cmplwi    r0, 0
  beq-      .loc_0x114
  bne-      .loc_0x104
  addi      r3, r31, 0x30
  addi      r5, r31, 0x24
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x43F954

.loc_0x104:
  lwz       r0, -0x6E44(r13)
  stw       r0, 0x2C(r29)
  lwz       r3, 0x2C(r29)
  stw       r29, 0x2C(r3)

.loc_0x114:
  lis       r4, 0x804F
  addi      r3, r28, 0x38
  subi      r0, r4, 0xB18
  stw       r0, 0x0(r28)
  bl        -0x4436E8
  li        r4, 0
  li        r0, -0x1
  stw       r4, 0x44(r28)
  li        r3, 0x14
  stw       r4, 0x48(r28)
  stw       r0, 0x4C(r28)
  stw       r4, 0x50(r28)
  stw       r4, 0x58(r28)
  bl        -0x446138
  mr.       r0, r3
  beq-      .loc_0x15C
  bl        0x38E8
  mr        r0, r3

.loc_0x15C:
  lis       r3, 0x804F
  stw       r0, 0x54(r28)
  subi      r0, r3, 0xC18
  li        r3, 0
  stw       r0, 0x0(r27)
  li        r0, -0x1
  stb       r3, 0x5C(r27)
  stw       r0, 0x64(r27)
  lwz       r0, 0x38(r30)
  cmpwi     r0, 0x4
  bge-      .loc_0x194
  cmpwi     r0, 0
  bge-      .loc_0x1A0
  b         .loc_0x1B8

.loc_0x194:
  cmpwi     r0, 0x6
  bge-      .loc_0x1B8
  b         .loc_0x1AC

.loc_0x1A0:
  lfs       f0, 0x2AC0(r2)
  stfs      f0, 0x60(r27)
  b         .loc_0x1CC

.loc_0x1AC:
  lfs       f0, 0x293C(r2)
  stfs      f0, 0x60(r27)
  b         .loc_0x1CC

.loc_0x1B8:
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x3B9
  crclr     6, 0x6
  bl        -0x43FA1C

.loc_0x1CC:
  mr        r3, r27
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8046A078
 * Size:	000008
 */
void getSceneFx__Q23PSM10Scene_CaveFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x60(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8046A080
 * Size:	000030
 */
void isBossFloor__Q23PSM10Scene_CaveFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x24(r3)
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
 * Address:	8046A0B0
 * Size:	000044
 */
void exec__Q23PSM10Scene_CaveFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1860
  lwz       r3, 0x64(r31)
  addis     r0, r3, 0x1
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x30
  addi      r0, r3, 0x1
  stw       r0, 0x64(r31)

.loc_0x30:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8046A0F4
 * Size:	00004C
 */
void stopPollutionSe__Q23PSM10Scene_CaveFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0x44(r3)
  cmplwi    r4, 0
  beq-      .loc_0x40
  lwz       r5, 0x0(r4)
  li        r0, 0
  b         .loc_0x38

.loc_0x18:
  lwz       r6, 0x0(r5)
  lwz       r4, 0x24(r6)
  cmplwi    r4, 0x3079
  beq-      .loc_0x30
  cmplwi    r4, 0x307A
  bne-      .loc_0x34

.loc_0x30:
  stb       r0, 0x39(r6)

.loc_0x34:
  lwz       r5, 0xC(r5)

.loc_0x38:
  cmplwi    r5, 0
  bne+      .loc_0x18

.loc_0x40:
  li        r0, 0
  stw       r0, 0x64(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8046A140
 * Size:	0000F8
 */
void startPollutUpSe__Q23PSM10Scene_CaveFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lwz       r0, 0x34(r3)
  rlwinm    r0,r0,0,4,31
  cmplwi    r0, 0xA
  ble-      .loc_0xE0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x387D
  li        r5, 0
  bl        -0x131B40
  mr        r0, r3
  lwz       r3, -0x67A8(r13)
  mr        r31, r0
  li        r4, 0x387E
  li        r5, 0
  bl        -0x131B58
  cmplwi    r31, 0
  mr        r30, r3
  beq-      .loc_0x98
  mr        r3, r31
  lfs       f1, 0x2940(r2)
  lwz       r12, 0x10(r31)
  li        r4, 0x50
  li        r5, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lfs       f1, 0x2940(r2)
  lwz       r12, 0x10(r31)
  li        r4, 0x50
  li        r5, 0
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     

.loc_0x98:
  cmplwi    r30, 0
  beq-      .loc_0xE0
  mr        r3, r30
  lfs       f1, 0x293C(r2)
  lwz       r12, 0x10(r30)
  li        r4, 0x50
  li        r5, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  lfs       f1, 0x2940(r2)
  lwz       r12, 0x10(r30)
  li        r4, 0x50
  li        r5, 0
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     

.loc_0xE0:
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
 * Address:	8046A238
 * Size:	000144
 */
void startMainSeq__Q23PSM10Scene_CaveFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  lwz       r3, 0x44(r29)
  cmplwi    r3, 0
  beq-      .loc_0x44
  bl        -0x1295CC

.loc_0x44:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x128

.loc_0x5C:
  lwz       r0, 0x50(r29)
  cmplwi    r0, 0
  beq-      .loc_0xF4
  lwz       r30, 0x10(r29)
  li        r31, 0
  b         .loc_0xD4

.loc_0x74:
  lwz       r3, 0x0(r30)
  lwz       r12, 0x10(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0xCC
  lwz       r3, 0x0(r30)
  lwz       r12, 0x10(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0xCC
  lwz       r12, 0x10(r3)
  li        r4, 0
  lfs       f1, 0x293C(r2)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xCC:
  lwz       r30, 0xC(r30)
  addi      r31, r31, 0x1

.loc_0xD4:
  cmplwi    r30, 0
  bne+      .loc_0x74
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x110

.loc_0xF4:
  mr        r3, r29
  bl        -0x128A38
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     

.loc_0x110:
  lwz       r3, 0x44(r29)
  cmplwi    r3, 0
  beq-      .loc_0x120
  bl        -0x1296A8

.loc_0x120:
  li        r0, 0
  stw       r0, 0x4C(r29)

.loc_0x128:
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
 * Address:	8046A37C
 * Size:	00024C
 */
void init__Q23PSM10Scene_CaveFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r4, 0x26F8
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x43FD94

.loc_0x5C:
  lwz       r29, -0x6780(r13)
  cmplwi    r29, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x43FDB4

.loc_0x7C:
  mr        r3, r29
  mr        r4, r30
  bl        -0xFD60
  lbz       r0, -0x6778(r13)
  li        r29, 0x1
  cmplwi    r0, 0
  bne-      .loc_0xFC
  lwz       r3, 0x24(r30)
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x14
  beq-      .loc_0xFC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x100
  lwz       r3, 0x24(r30)
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x3
  bne-      .loc_0x100
  bl        -0x1361E4
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0x100
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x100

.loc_0xFC:
  li        r29, 0

.loc_0x100:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x130
  lwz       r0, -0x6E50(r13)
  cmplwi    r0, 0
  bne-      .loc_0x128
  addi      r3, r31, 0x30
  addi      r5, r31, 0x24
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x43FE60

.loc_0x128:
  lwz       r0, -0x6E50(r13)
  stw       r0, 0x50(r30)

.loc_0x130:
  li        r0, 0
  stw       r0, 0x50(r30)
  b         .loc_0x230

.loc_0x13C:
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x15C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x43FE94

.loc_0x15C:
  lwz       r29, -0x6780(r13)
  cmplwi    r29, 0
  bne-      .loc_0x17C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x43FEB4

.loc_0x17C:
  mr        r3, r29
  mr        r4, r30
  bl        -0xFE60
  lbz       r0, -0x6778(r13)
  li        r29, 0x1
  cmplwi    r0, 0
  bne-      .loc_0x1FC
  lwz       r3, 0x24(r30)
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x14
  beq-      .loc_0x1FC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x200
  lwz       r3, 0x24(r30)
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x3
  bne-      .loc_0x200
  bl        -0x1362E4
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0x200
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x200

.loc_0x1FC:
  li        r29, 0

.loc_0x200:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x230
  lwz       r0, -0x6E50(r13)
  cmplwi    r0, 0
  bne-      .loc_0x228
  addi      r3, r31, 0x30
  addi      r5, r31, 0x24
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x43FF60

.loc_0x228:
  lwz       r0, -0x6E50(r13)
  stw       r0, 0x50(r30)

.loc_0x230:
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
 * Address:	8046A5C8
 * Size:	0001D0
 */
void bossAppear__Q23PSM10Scene_CaveFPQ23PSM9EnemyBossUs(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x804A
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r30, r3
  mr        r27, r4
  mr        r31, r5
  subi      r29, r6, 0x26F8
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF4
  lbz       r0, 0x5C(r30)
  cmplwi    r0, 0
  bne-      .loc_0x1BC
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x68
  addi      r3, r29, 0x3C
  addi      r5, r29, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x43FFEC

.loc_0x68:
  lwz       r28, -0x6780(r13)
  cmplwi    r28, 0
  bne-      .loc_0x88
  addi      r3, r29, 0x3C
  addi      r5, r29, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x44000C

.loc_0x88:
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  bne-      .loc_0xA8
  addi      r3, r29, 0x48
  addi      r5, r29, 0x24
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x44002C

.loc_0xA8:
  lwz       r3, 0x4(r28)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0xC0
  li        r29, 0
  b         .loc_0xC8

.loc_0xC0:
  bl        -0x135008
  mr        r29, r3

.loc_0xC8:
  cmplwi    r29, 0
  beq-      .loc_0xE8
  mr        r3, r29
  mr        r4, r31
  bl        -0x1370F0
  mr        r3, r29
  li        r4, 0xB4
  bl        -0x136D1C

.loc_0xE8:
  li        r0, 0x1
  stb       r0, 0x5C(r30)
  b         .loc_0x1BC

.loc_0xF4:
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x114
  addi      r3, r29, 0x3C
  addi      r5, r29, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x440098

.loc_0x114:
  lwz       r28, -0x6780(r13)
  cmplwi    r28, 0
  bne-      .loc_0x134
  addi      r3, r29, 0x3C
  addi      r5, r29, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x4400B8

.loc_0x134:
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  bne-      .loc_0x154
  addi      r3, r29, 0x48
  addi      r5, r29, 0x24
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x4400D8

.loc_0x154:
  lwz       r3, 0x4(r28)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0x16C
  li        r3, 0
  b         .loc_0x170

.loc_0x16C:
  bl        -0x1350B4

.loc_0x170:
  cmplwi    r3, 0
  beq-      .loc_0x1BC
  lwz       r3, 0x50(r30)
  cmplwi    r3, 0
  beq-      .loc_0x190
  lwz       r0, 0x24(r3)
  cmpwi     r0, 0
  bne-      .loc_0x1BC

.loc_0x190:
  mr        r3, r27
  mr        r4, r31
  lwz       r12, 0x28(r27)
  lwz       r12, 0xD4(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x50(r30)
  cmplwi    r3, 0
  beq-      .loc_0x1BC
  li        r0, 0x1
  stb       r0, 0x38(r3)

.loc_0x1BC:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8046A798
 * Size:	000318
 */
void bossKilled__Q23PSM10Scene_CaveFPQ23PSM9EnemyBoss(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r5, 0x26F8
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x168
  lwz       r0, -0x6E50(r13)
  li        r29, 0
  cmplwi    r0, 0
  bne-      .loc_0x64
  addi      r3, r31, 0x30
  addi      r5, r31, 0x24
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x4401B8

.loc_0x64:
  lwz       r3, -0x6E50(r13)
  lwz       r4, 0x4(r3)
  b         .loc_0x88

.loc_0x70:
  lwz       r3, 0x0(r4)
  lbz       r0, 0xFE(r3)
  cmplwi    r0, 0
  beq-      .loc_0x84
  li        r29, 0x1

.loc_0x84:
  lwz       r4, 0xC(r4)

.loc_0x88:
  cmplwi    r4, 0
  bne+      .loc_0x70
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0xB0
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x440204

.loc_0xB0:
  lwz       r28, -0x6780(r13)
  cmplwi    r28, 0
  bne-      .loc_0xD0
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x440224

.loc_0xD0:
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  bne-      .loc_0xF0
  addi      r3, r31, 0x48
  addi      r5, r31, 0x24
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x440244

.loc_0xF0:
  lwz       r3, 0x4(r28)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0x108
  li        r3, 0
  b         .loc_0x10C

.loc_0x108:
  bl        -0x135220

.loc_0x10C:
  cmplwi    r3, 0
  beq-      .loc_0x2F8
  rlwinm.   r0,r29,0,24,31
  bne-      .loc_0x134
  lwz       r12, 0x10(r3)
  li        r4, 0x28
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2F8

.loc_0x134:
  lhz       r0, 0x130(r3)
  cmplwi    r0, 0x2
  beq-      .loc_0x14C
  rlwinm    r0,r0,0,16,31
  cmplwi    r0, 0x8
  bne-      .loc_0x2F8

.loc_0x14C:
  mr        r3, r30
  li        r4, 0x1
  lwz       r12, 0x28(r30)
  lwz       r12, 0xD4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2F8

.loc_0x168:
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x188
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x4402DC

.loc_0x188:
  lwz       r28, -0x6780(r13)
  cmplwi    r28, 0
  bne-      .loc_0x1A8
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x4402FC

.loc_0x1A8:
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  bne-      .loc_0x1C8
  addi      r3, r31, 0x48
  addi      r5, r31, 0x24
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x44031C

.loc_0x1C8:
  lwz       r3, 0x4(r28)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0x1E0
  li        r29, 0
  b         .loc_0x1E8

.loc_0x1E0:
  bl        -0x1352F8
  mr        r29, r3

.loc_0x1E8:
  lwz       r0, -0x6E50(r13)
  li        r28, 0x1
  cmplwi    r0, 0
  bne-      .loc_0x20C
  addi      r3, r31, 0x30
  addi      r5, r31, 0x24
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x440360

.loc_0x20C:
  lwz       r3, -0x6E50(r13)
  lwz       r4, 0x4(r3)
  b         .loc_0x230

.loc_0x218:
  lwz       r3, 0x0(r4)
  lbz       r0, 0xFE(r3)
  cmplwi    r0, 0
  beq-      .loc_0x22C
  li        r28, 0

.loc_0x22C:
  lwz       r4, 0xC(r4)

.loc_0x230:
  cmplwi    r4, 0
  bne+      .loc_0x218
  rlwinm.   r0,r28,0,24,31
  bne-      .loc_0x2F8
  cmplwi    r29, 0
  beq-      .loc_0x2F8
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x268
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x4403BC

.loc_0x268:
  lwz       r28, -0x6780(r13)
  cmplwi    r28, 0
  bne-      .loc_0x288
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x4403DC

.loc_0x288:
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  bne-      .loc_0x2A8
  addi      r3, r31, 0x48
  addi      r5, r31, 0x24
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x4403FC

.loc_0x2A8:
  lwz       r3, 0x4(r28)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0x2C0
  li        r3, 0
  b         .loc_0x2C4

.loc_0x2C0:
  bl        -0x1353D8

.loc_0x2C4:
  cmplwi    r3, 0
  beq-      .loc_0x2F8
  lhz       r0, 0x130(r3)
  cmplwi    r0, 0x2
  beq-      .loc_0x2E0
  cmplwi    r0, 0x8
  bne-      .loc_0x2F8

.loc_0x2E0:
  mr        r3, r30
  li        r4, 0x1
  lwz       r12, 0x28(r30)
  lwz       r12, 0xD4(r12)
  mtctr     r12
  bctrl     

.loc_0x2F8:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8046AAB0
 * Size:	0000D4
 */
void akubiOK__Q23PSM10Scene_CaveFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x38
  li        r3, 0
  b         .loc_0xBC

.loc_0x38:
  li        r31, 0
  bl        -0x3B05F8
  lfs       f0, 0x2944(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x88
  bl        -0x12200
  cmplwi    r3, 0
  beq-      .loc_0x68
  bl        -0x1220C
  bl        -0x127A44
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x88

.loc_0x68:
  bl        -0x12324
  cmplwi    r3, 0
  beq-      .loc_0x84
  bl        -0x12330
  bl        -0x127A60
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x88

.loc_0x84:
  li        r31, 0x1

.loc_0x88:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0xB8
  mr        r3, r30
  bl        -0x1354C4
  cmplwi    r3, 0
  beq-      .loc_0xB8
  mr        r3, r30
  bl        -0x1354D4
  lhz       r0, 0x130(r3)
  cmplwi    r0, 0
  beq-      .loc_0xB8
  li        r31, 0

.loc_0xB8:
  mr        r3, r31

.loc_0xBC:
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
 * Address:	8046AB84
 * Size:	0001EC
 */
void __ct__Q23PSM15Scene_ChallengeFUcPQ26PSGame9SceneInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x804A
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r27, r3
  mr        r30, r5
  subi      r31, r6, 0x26F8
  mr        r28, r27
  mr        r29, r27
  mr        r26, r27
  bl        -0x1355CC
  lis       r3, 0x804F
  cmplwi    r30, 0
  subi      r0, r3, 0x97C
  stw       r0, 0x0(r26)
  stw       r30, 0x24(r26)
  bne-      .loc_0x5C
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x24
  crclr     6, 0x6
  bl        -0x44059C

.loc_0x5C:
  mr        r3, r26
  lwz       r12, 0x0(r26)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804F
  li        r4, 0
  subi      r3, r3, 0xA7C
  lis       r0, 0xF000
  stw       r3, 0x0(r29)
  li        r3, 0x50
  stw       r4, 0x28(r29)
  stw       r4, 0x2C(r29)
  stb       r4, 0x30(r29)
  stw       r0, 0x34(r29)
  bl        -0x446D78
  mr.       r0, r3
  beq-      .loc_0xAC
  bl        -0x135F60
  mr        r0, r3

.loc_0xAC:
  stw       r0, 0x28(r29)
  mr        r3, r30
  li        r4, 0x1
  bl        -0x1356DC
  rlwinm    r0,r3,0,24,31
  subfic    r0, r0, 0x1
  cntlzw    r0, r0
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0xD8
  bl        0x7C50
  b         .loc_0xDC

.loc_0xD8:
  bl        0x7CB8

.loc_0xDC:
  lwz       r0, -0x6E44(r13)
  cmplwi    r0, 0
  beq-      .loc_0x110
  bne-      .loc_0x100
  addi      r3, r31, 0x30
  addi      r5, r31, 0x24
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x440640

.loc_0x100:
  lwz       r0, -0x6E44(r13)
  stw       r0, 0x2C(r29)
  lwz       r3, 0x2C(r29)
  stw       r29, 0x2C(r3)

.loc_0x110:
  lis       r4, 0x804F
  addi      r3, r28, 0x38
  subi      r0, r4, 0xB18
  stw       r0, 0x0(r28)
  bl        -0x4443D4
  li        r4, 0
  li        r0, -0x1
  stw       r4, 0x44(r28)
  li        r3, 0x14
  stw       r4, 0x48(r28)
  stw       r0, 0x4C(r28)
  stw       r4, 0x50(r28)
  stw       r4, 0x58(r28)
  bl        -0x446E24
  mr.       r0, r3
  beq-      .loc_0x158
  bl        0x2BFC
  mr        r0, r3

.loc_0x158:
  lis       r3, 0x804F
  stw       r0, 0x54(r28)
  subi      r0, r3, 0xC18
  li        r3, 0
  stw       r0, 0x0(r27)
  li        r0, -0x1
  stb       r3, 0x5C(r27)
  stw       r0, 0x64(r27)
  lwz       r0, 0x38(r30)
  cmpwi     r0, 0x4
  bge-      .loc_0x190
  cmpwi     r0, 0
  bge-      .loc_0x19C
  b         .loc_0x1B4

.loc_0x190:
  cmpwi     r0, 0x6
  bge-      .loc_0x1B4
  b         .loc_0x1A8

.loc_0x19C:
  lfs       f0, 0x2AC0(r2)
  stfs      f0, 0x60(r27)
  b         .loc_0x1C8

.loc_0x1A8:
  lfs       f0, 0x293C(r2)
  stfs      f0, 0x60(r27)
  b         .loc_0x1C8

.loc_0x1B4:
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x3B9
  crclr     6, 0x6
  bl        -0x440708

.loc_0x1C8:
  lis       r4, 0x804F
  mr        r3, r27
  subi      r0, r4, 0xC8C
  stw       r0, 0x0(r27)
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8046AD70
 * Size:	000178
 */
void __dt__Q23PSM10Scene_CaveFv(void)
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
  beq-      .loc_0x15C
  lis       r3, 0x804F
  subi      r0, r3, 0xC18
  stw       r0, 0x0(r30)
  beq-      .loc_0x14C
  lis       r3, 0x804F
  subi      r0, r3, 0xB18
  stw       r0, 0x0(r30)
  lwz       r3, -0x6E50(r13)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  li        r0, 0
  stw       r0, -0x6E50(r13)
  lwz       r3, 0x44(r30)
  cmplwi    r3, 0
  beq-      .loc_0x78
  li        r4, 0x1
  bl        -0x12A16C

.loc_0x78:
  addic.    r0, r30, 0x38
  beq-      .loc_0x8C
  addi      r3, r30, 0x38
  li        r4, 0
  bl        -0x444590

.loc_0x8C:
  cmplwi    r30, 0
  beq-      .loc_0x14C
  lis       r3, 0x804F
  subi      r0, r3, 0xA7C
  stw       r0, 0x0(r30)
  lwz       r3, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0xC0
  lwz       r12, 0x28(r3)
  li        r4, 0x1
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0xC0:
  lwz       r3, -0x6E4C(r13)
  li        r0, 0
  stw       r0, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0xE8
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xE8:
  li        r0, 0
  stw       r0, -0x6E4C(r13)
  lwz       r3, 0x2C(r30)
  cmplwi    r3, 0
  beq-      .loc_0x104
  stw       r0, 0x2C(r3)
  stw       r0, 0x2C(r30)

.loc_0x104:
  lwz       r3, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0x124
  lwz       r12, 0x28(r3)
  li        r4, 0x1
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0x124:
  li        r0, 0
  cmplwi    r30, 0
  stw       r0, -0x6E44(r13)
  beq-      .loc_0x14C
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x97C
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x135898

.loc_0x14C:
  extsh.    r0, r31
  ble-      .loc_0x15C
  mr        r3, r30
  bl        -0x446E14

.loc_0x15C:
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
 * Address:	8046AEE8
 * Size:	00024C
 */
void init__Q23PSM15Scene_ChallengeFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r4, 0x26F8
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x440900

.loc_0x5C:
  lwz       r29, -0x6780(r13)
  cmplwi    r29, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x440920

.loc_0x7C:
  mr        r3, r29
  mr        r4, r30
  bl        -0x108CC
  lbz       r0, -0x6778(r13)
  li        r29, 0x1
  cmplwi    r0, 0
  bne-      .loc_0xFC
  lwz       r3, 0x24(r30)
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x14
  beq-      .loc_0xFC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x100
  lwz       r3, 0x24(r30)
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x3
  bne-      .loc_0x100
  bl        -0x136D50
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0x100
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x100

.loc_0xFC:
  li        r29, 0

.loc_0x100:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x130
  lwz       r0, -0x6E50(r13)
  cmplwi    r0, 0
  bne-      .loc_0x128
  addi      r3, r31, 0x30
  addi      r5, r31, 0x24
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x4409CC

.loc_0x128:
  lwz       r0, -0x6E50(r13)
  stw       r0, 0x50(r30)

.loc_0x130:
  li        r0, 0
  stw       r0, 0x50(r30)
  b         .loc_0x230

.loc_0x13C:
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x15C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x440A00

.loc_0x15C:
  lwz       r29, -0x6780(r13)
  cmplwi    r29, 0
  bne-      .loc_0x17C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x440A20

.loc_0x17C:
  mr        r3, r29
  mr        r4, r30
  bl        -0x109CC
  lbz       r0, -0x6778(r13)
  li        r29, 0x1
  cmplwi    r0, 0
  bne-      .loc_0x1FC
  lwz       r3, 0x24(r30)
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x14
  beq-      .loc_0x1FC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x200
  lwz       r3, 0x24(r30)
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x3
  bne-      .loc_0x200
  bl        -0x136E50
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0x200
  lwz       r3, 0x24(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x200

.loc_0x1FC:
  li        r29, 0

.loc_0x200:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x230
  lwz       r0, -0x6E50(r13)
  cmplwi    r0, 0
  bne-      .loc_0x228
  addi      r3, r31, 0x30
  addi      r5, r31, 0x24
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x440ACC

.loc_0x228:
  lwz       r0, -0x6E50(r13)
  stw       r0, 0x50(r30)

.loc_0x230:
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
 * Address:	8046B134
 * Size:	0001FC
 */
void startMainSeq__Q23PSM15Scene_ChallengeFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  lwz       r3, 0x44(r29)
  cmplwi    r3, 0
  beq-      .loc_0x44
  bl        -0x12A4C8

.loc_0x44:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x128

.loc_0x5C:
  lwz       r0, 0x50(r29)
  cmplwi    r0, 0
  beq-      .loc_0xF4
  lwz       r30, 0x10(r29)
  li        r31, 0
  b         .loc_0xD4

.loc_0x74:
  lwz       r3, 0x0(r30)
  lwz       r12, 0x10(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0xCC
  lwz       r3, 0x0(r30)
  lwz       r12, 0x10(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0xCC
  lwz       r12, 0x10(r3)
  li        r4, 0
  lfs       f1, 0x293C(r2)
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xCC:
  lwz       r30, 0xC(r30)
  addi      r31, r31, 0x1

.loc_0xD4:
  cmplwi    r30, 0
  bne+      .loc_0x74
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x110

.loc_0xF4:
  mr        r3, r29
  bl        -0x129934
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     

.loc_0x110:
  lwz       r3, 0x44(r29)
  cmplwi    r3, 0
  beq-      .loc_0x120
  bl        -0x12A5A4

.loc_0x120:
  li        r0, 0
  stw       r0, 0x4C(r29)

.loc_0x128:
  lwz       r3, 0x24(r29)
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x6
  bne-      .loc_0x1E0
  addi      r3, r29, 0x10
  li        r4, 0x2
  bl        -0x4445A0
  mr.       r31, r3
  bne-      .loc_0x168
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x48A
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x440C58

.loc_0x168:
  lwz       r31, 0x0(r31)
  cmplwi    r31, 0
  bne-      .loc_0x190
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x48D
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x440C80

.loc_0x190:
  mr        r3, r31
  lwz       r12, 0x10(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x10(r31)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x1E0
  lwz       r12, 0x10(r3)
  li        r4, 0
  lfs       f1, 0x293C(r2)
  li        r5, 0x2
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x1E0:
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
 * Address:	........
 * Size:	000108
 */
void changeToKeyBgm__Q23PSM15Scene_ChallengeFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8046B330
 * Size:	000078
 */
void akubiOK__Q23PSM15Scene_ChallengeFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  bl        -0x3B0E50
  lfs       f0, 0x2944(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x60
  bl        -0x12A58
  cmplwi    r3, 0
  beq-      .loc_0x40
  bl        -0x12A64
  bl        -0x12829C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x60

.loc_0x40:
  bl        -0x12B7C
  cmplwi    r3, 0
  beq-      .loc_0x5C
  bl        -0x12B88
  bl        -0x1282B8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x60

.loc_0x5C:
  li        r31, 0x1

.loc_0x60:
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
 * Address:	8046B3A8
 * Size:	000008
 */
void getCamDistVol__Q23PSM11Scene_ZukanFUc(void)
{
/*
.loc_0x0:
  lfs       f1, 0x2950(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8046B3B0
 * Size:	0000BC
 */
void getSeSceneGate__Q23PSM11Scene_ZukanFPQ23PSM7ObjBaseUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  rlwinm.   r3,r5,2,30,31
  stw       r0, 0x14(r1)
  rlwinm    r0,r5,20,28,31
  bne-      .loc_0x1C
  b         .loc_0x88

.loc_0x1C:
  cmplwi    r3, 0x2
  bne-      .loc_0x44
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26A4
  li        r4, 0x1F
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x440DAC
  b         .loc_0x68

.loc_0x44:
  cmplwi    r3, 0x3
  bne-      .loc_0x68
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26A4
  li        r4, 0x23
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x440DD4

.loc_0x68:
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26A4
  li        r4, 0x25
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x440DF0
  li        r0, 0

.loc_0x88:
  cmplwi    r0, 0x1
  beq-      .loc_0xA0
  cmplwi    r0, 0x5
  beq-      .loc_0xA0
  cmplwi    r0, 0x3
  bne-      .loc_0xA8

.loc_0xA0:
  li        r3, 0x1
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8046B46C
 * Size:	0000D4
 */
void __ct__Q23PSM14Scene_WorldMapFUcPQ26PSGame9SceneInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  mr        r0, r28
  mr        r29, r0
  mr        r30, r0
  bl        -0x135EB8
  lis       r3, 0x804F
  cmplwi    r31, 0
  subi      r0, r3, 0x97C
  stw       r0, 0x0(r30)
  stw       r31, 0x24(r30)
  bne-      .loc_0x68
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26EC
  li        r4, 0x24
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x440E90

.loc_0x68:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804F
  lis       r4, 0x804F
  subi      r0, r3, 0xD8C
  li        r3, 0x20
  stw       r0, 0x0(r29)
  subi      r0, r4, 0xD38
  stw       r0, 0x0(r28)
  bl        -0x447660
  mr.       r0, r3
  beq-      .loc_0xAC
  bl        0x1E50
  mr        r0, r3

.loc_0xAC:
  stw       r0, 0x28(r28)
  mr        r3, r28
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8046B540
 * Size:	000070
 */
void __dt__Q23PSM15Scene_NoObjectsFv(void)
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
  beq-      .loc_0x54
  lis       r4, 0x804F
  subi      r0, r4, 0xD8C
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x97C
  stw       r0, 0x0(r30)
  bl        -0x135F60

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x4474DC

.loc_0x54:
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
 * Address:	8046B5B0
 * Size:	000008
 */
void getCamDistVol__Q23PSM15Scene_NoObjectsFUc(void)
{
/*
.loc_0x0:
  lfs       f1, -0x25C(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8046B5B8
 * Size:	0001B8
 */
void PSChangeBgm_ChallengeGame()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r3, 0x26F8
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x40
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x440FB4

.loc_0x40:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x60
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x440FD4

.loc_0x60:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x80
  addi      r3, r31, 0x48
  addi      r5, r31, 0x24
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x440FF4

.loc_0x80:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA4
  addi      r3, r31, 0x48
  addi      r5, r31, 0x64
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x441018

.loc_0xA4:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC4
  b         .loc_0xC8

.loc_0xC4:
  li        r30, 0

.loc_0xC8:
  cmplwi    r30, 0
  beq-      .loc_0x19C
  addi      r29, r30, 0x10
  li        r4, 0
  mr        r3, r29
  bl        -0x1377F8
  mr.       r30, r3
  bne-      .loc_0xFC
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x49D
  crclr     6, 0x6
  bl        -0x441070

.loc_0xFC:
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x138
  lwz       r12, 0x10(r3)
  li        r4, 0
  lfs       f1, 0x293C(r2)
  li        r5, 0x1
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x138:
  mr        r3, r29
  li        r4, 0x2
  bl        -0x13785C
  mr.       r29, r3
  bne-      .loc_0x160
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x4A6
  crclr     6, 0x6
  bl        -0x4410D4

.loc_0x160:
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x19C
  lwz       r12, 0x10(r3)
  li        r4, 0x1E
  lfs       f1, 0x2940(r2)
  li        r5, 0x2
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x19C:
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
 * Address:	8046B770
 * Size:	000100
 */
void PSStart2DStream(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r4, 0x26F8
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x44
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x441170

.loc_0x44:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x64
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x441190

.loc_0x64:
  lwz       r3, 0x4(r30)
  li        r4, 0x1
  addi      r3, r3, 0x10
  bl        -0x137944
  mr.       r30, r3
  bne-      .loc_0x90
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x72
  crclr     6, 0x6
  bl        -0x4411BC

.loc_0x90:
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x1
  beq-      .loc_0xC4
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x73
  crclr     6, 0x6
  bl        -0x4411F0

.loc_0xC4:
  mr        r3, r30
  mr        r4, r29
  bl        -0x139434
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
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
 * Address:	8046B870
 * Size:	0000EC
 */
void PSStop2DStream()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x26F8
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x441268

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x441288

.loc_0x5C:
  lwz       r3, 0x4(r30)
  li        r4, 0x1
  addi      r3, r3, 0x10
  bl        -0x137A3C
  mr.       r30, r3
  bne-      .loc_0x88
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x72
  crclr     6, 0x6
  bl        -0x4412B4

.loc_0x88:
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x1
  beq-      .loc_0xBC
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x73
  crclr     6, 0x6
  bl        -0x4412E8

.loc_0xBC:
  mr        r3, r30
  li        r4, 0x1E
  lwz       r12, 0x10(r30)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
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
 * Address:	8046B95C
 * Size:	0001EC
 */
void PSPause_StartMenuOn()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r3, 0x2
  li        r4, 0x2
  stw       r0, 0x24(r1)
  bl        0x1F8
  li        r0, 0
  lwz       r3, -0x6D20(r13)
  lis       r4, 0x804B
  stw       r0, 0x14(r1)
  subi      r4, r4, 0x434C
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x58
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1BC

.loc_0x58:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xC4

.loc_0x70:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1BC
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xC4:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x70
  b         .loc_0x1BC

.loc_0xE4:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x26C(r3)
  bl        -0x8E14
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x12C
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1BC

.loc_0x12C:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x1A0

.loc_0x14C:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1BC
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x1A0:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x14C

.loc_0x1BC:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0xE4
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8046BB48
 * Size:	000020
 */
void PSPause_StartMenuOff()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x100
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8046BB68
 * Size:	0000EC
 */
void PSPauseOn(unsigned char, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r5, 0x26F8
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x4C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x441570

.loc_0x4C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x6C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x441590

.loc_0x6C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x8C
  addi      r3, r31, 0x48
  addi      r5, r31, 0x24
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x4415B0

.loc_0x8C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xB0
  addi      r3, r31, 0x48
  addi      r5, r31, 0x64
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x4415D4

.loc_0xB0:
  mr        r3, r30
  mr        r4, r28
  lwz       r12, 0x0(r30)
  mr        r5, r29
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8046BC54
 * Size:	0000CC
 */
void PSPauseOff()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x26F8
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x44164C

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x44166C

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x48
  addi      r5, r31, 0x24
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x44168C

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x48
  addi      r5, r31, 0x64
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x4416B0

.loc_0xA0:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
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
 * Address:	8046BD20
 * Size:	0001C8
 */
void PSStartChallengeTimeUpStream()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x26F8
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x441718

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x441738

.loc_0x5C:
  lwz       r3, 0x4(r30)
  li        r4, 0x1
  addi      r3, r3, 0x10
  bl        -0x137EEC
  mr.       r30, r3
  bne-      .loc_0x88
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x72
  crclr     6, 0x6
  bl        -0x441764

.loc_0x88:
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x1
  beq-      .loc_0xBC
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x73
  crclr     6, 0x6
  bl        -0x441798

.loc_0xBC:
  lis       r4, 0xC001
  mr        r3, r30
  addi      r4, r4, 0x1016
  bl        -0x1399E0
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x100
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x4417DC

.loc_0x100:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x120
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x24
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x4417FC

.loc_0x120:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x140
  addi      r3, r31, 0x48
  addi      r5, r31, 0x24
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x44181C

.loc_0x140:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0x164
  addi      r3, r31, 0x48
  addi      r5, r31, 0x64
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x441840

.loc_0x164:
  lwz       r12, 0x0(r30)
  mr        r3, r30
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x194
  addi      r3, r31, 0x88
  addi      r5, r31, 0x24
  li        r4, 0x177
  crclr     6, 0x6
  bl        -0x441870

.loc_0x194:
  mr        r3, r30
  li        r4, 0x2
  lwz       r12, 0x0(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  bl        .loc_0x1C8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x1C8:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void PSStopChallengeTimeUpStream()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8046BEE8
 * Size:	0000B4
 */
void PSMuteSE_on2D()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x38
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26BC
  li        r4, 0x1D3
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x4418DC

.loc_0x38:
  lwz       r31, -0x6780(r13)
  cmplwi    r31, 0
  bne-      .loc_0x60
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26BC
  li        r4, 0x1DC
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x441904

.loc_0x60:
  lwz       r3, 0x4(r31)
  li        r4, 0
  addi      r3, r3, 0x10
  bl        -0x1380B8
  lwz       r12, 0x10(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  li        r4, 0
  lfs       f1, 0x293C(r2)
  li        r5, 0
  lwz       r12, 0x10(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8046BF9C
 * Size:	0000B4
 */
void PSMuteOffSE_on2D()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x38
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26BC
  li        r4, 0x1D3
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x441990

.loc_0x38:
  lwz       r31, -0x6780(r13)
  cmplwi    r31, 0
  bne-      .loc_0x60
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x26BC
  li        r4, 0x1DC
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x4419B8

.loc_0x60:
  lwz       r3, 0x4(r31)
  li        r4, 0
  addi      r3, r3, 0x10
  bl        -0x13816C
  lwz       r12, 0x10(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  li        r4, 0
  lfs       f1, 0x2940(r2)
  li        r5, 0
  lwz       r12, 0x10(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C050
 * Size:	000070
 */
void __dt__Q23PSM10Scene_DemoFv(void)
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
  beq-      .loc_0x54
  lis       r4, 0x804F
  subi      r0, r4, 0xA24
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x97C
  stw       r0, 0x0(r30)
  bl        -0x136A70

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x447FEC

.loc_0x54:
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
 * Address:	8046C0C0
 * Size:	000008
 */
void isCave__Q23PSM10Scene_CaveFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C0C8
 * Size:	000008
 */
void getPollutUpTimer__Q23PSM10Scene_CaveCFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x64(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C0D0
 * Size:	000008
 */
void isDemoScene__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C0D8
 * Size:	000008
 */
void isGameScene__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C0E0
 * Size:	000178
 */
void __dt__Q23PSM12Scene_GroundFv(void)
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
  beq-      .loc_0x15C
  lis       r3, 0x804F
  subi      r0, r3, 0xBA4
  stw       r0, 0x0(r30)
  beq-      .loc_0x14C
  lis       r3, 0x804F
  subi      r0, r3, 0xB18
  stw       r0, 0x0(r30)
  lwz       r3, -0x6E50(r13)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  li        r0, 0
  stw       r0, -0x6E50(r13)
  lwz       r3, 0x44(r30)
  cmplwi    r3, 0
  beq-      .loc_0x78
  li        r4, 0x1
  bl        -0x12B4DC

.loc_0x78:
  addic.    r0, r30, 0x38
  beq-      .loc_0x8C
  addi      r3, r30, 0x38
  li        r4, 0
  bl        -0x445900

.loc_0x8C:
  cmplwi    r30, 0
  beq-      .loc_0x14C
  lis       r3, 0x804F
  subi      r0, r3, 0xA7C
  stw       r0, 0x0(r30)
  lwz       r3, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0xC0
  lwz       r12, 0x28(r3)
  li        r4, 0x1
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0xC0:
  lwz       r3, -0x6E4C(r13)
  li        r0, 0
  stw       r0, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0xE8
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xE8:
  li        r0, 0
  stw       r0, -0x6E4C(r13)
  lwz       r3, 0x2C(r30)
  cmplwi    r3, 0
  beq-      .loc_0x104
  stw       r0, 0x2C(r3)
  stw       r0, 0x2C(r30)

.loc_0x104:
  lwz       r3, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0x124
  lwz       r12, 0x28(r3)
  li        r4, 0x1
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0x124:
  li        r0, 0
  cmplwi    r30, 0
  stw       r0, -0x6E44(r13)
  beq-      .loc_0x14C
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x97C
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x136C08

.loc_0x14C:
  extsh.    r0, r31
  ble-      .loc_0x15C
  mr        r3, r30
  bl        -0x448184

.loc_0x15C:
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
 * Address:	8046C258
 * Size:	000018
 */
void isPollutUp__Q23PSM12Scene_GroundFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0x5C(r3)
  subfic    r3, r4, -0x1
  addi      r0, r4, 0x1
  or        r0, r3, r0
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C270
 * Size:	000008
 */
void getPollutUpTimer__Q23PSM12Scene_GroundCFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x5C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C278
 * Size:	000008
 */
void isBossFloor__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C280
 * Size:	000008
 */
void isPollutUp__Q23PSM10Scene_GameFv(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C288
 * Size:	000008
 */
void getPollutUpTimer__Q23PSM10Scene_GameCFv(void)
{
/*
.loc_0x0:
  li        r3, -0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C290
 * Size:	000008
 */
void isDemoScene__Q23PSM10Scene_DemoFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C298
 * Size:	00003C
 */
void getSeSceneGate__Q23PSM12Scene_GlobalFPQ23PSM7ObjBaseUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  lis       r5, 0x804A
  stw       r0, 0x14(r1)
  subi      r3, r3, 0x2670
  li        r4, 0x3F
  subi      r5, r5, 0x26D4
  crclr     6, 0x6
  bl        -0x441C7C
  lwz       r0, 0x14(r1)
  li        r3, 0
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C2D4
 * Size:	000080
 */
void __dt__Q23PSM14Scene_WorldMapFv(void)
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
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0xD38
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r4, 0x804F
  subi      r0, r4, 0xD8C
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x97C
  stw       r0, 0x0(r30)
  bl        -0x136D04

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x448280

.loc_0x64:
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
 * Address:	8046C354
 * Size:	000114
 */
void __dt__Q23PSM11Scene_ZukanFv(void)
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
  beq-      .loc_0xF8
  lis       r3, 0x804F
  subi      r0, r3, 0xCE4
  stw       r0, 0x0(r30)
  beq-      .loc_0xE8
  lis       r3, 0x804F
  subi      r0, r3, 0xA7C
  stw       r0, 0x0(r30)
  lwz       r3, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x28(r3)
  li        r4, 0x1
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  lwz       r3, -0x6E4C(r13)
  li        r0, 0
  stw       r0, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0x84
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x84:
  li        r0, 0
  stw       r0, -0x6E4C(r13)
  lwz       r3, 0x2C(r30)
  cmplwi    r3, 0
  beq-      .loc_0xA0
  stw       r0, 0x2C(r3)
  stw       r0, 0x2C(r30)

.loc_0xA0:
  lwz       r3, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0xC0
  lwz       r12, 0x28(r3)
  li        r4, 0x1
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0xC0:
  li        r0, 0
  cmplwi    r30, 0
  stw       r0, -0x6E44(r13)
  beq-      .loc_0xE8
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x97C
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x136E18

.loc_0xE8:
  extsh.    r0, r31
  ble-      .loc_0xF8
  mr        r3, r30
  bl        -0x448394

.loc_0xF8:
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
 * Address:	8046C468
 * Size:	000188
 */
void __dt__Q23PSM15Scene_ChallengeFv(void)
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
  beq-      .loc_0x16C
  lis       r3, 0x804F
  subi      r0, r3, 0xC8C
  stw       r0, 0x0(r30)
  beq-      .loc_0x15C
  lis       r3, 0x804F
  subi      r0, r3, 0xC18
  stw       r0, 0x0(r30)
  beq-      .loc_0x15C
  lis       r3, 0x804F
  subi      r0, r3, 0xB18
  stw       r0, 0x0(r30)
  lwz       r3, -0x6E50(r13)
  cmplwi    r3, 0
  beq-      .loc_0x6C
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x6C:
  li        r0, 0
  stw       r0, -0x6E50(r13)
  lwz       r3, 0x44(r30)
  cmplwi    r3, 0
  beq-      .loc_0x88
  li        r4, 0x1
  bl        -0x12B874

.loc_0x88:
  addic.    r0, r30, 0x38
  beq-      .loc_0x9C
  addi      r3, r30, 0x38
  li        r4, 0
  bl        -0x445C98

.loc_0x9C:
  cmplwi    r30, 0
  beq-      .loc_0x15C
  lis       r3, 0x804F
  subi      r0, r3, 0xA7C
  stw       r0, 0x0(r30)
  lwz       r3, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0xD0
  lwz       r12, 0x28(r3)
  li        r4, 0x1
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0xD0:
  lwz       r3, -0x6E4C(r13)
  li        r0, 0
  stw       r0, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0xF8
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xF8:
  li        r0, 0
  stw       r0, -0x6E4C(r13)
  lwz       r3, 0x2C(r30)
  cmplwi    r3, 0
  beq-      .loc_0x114
  stw       r0, 0x2C(r3)
  stw       r0, 0x2C(r30)

.loc_0x114:
  lwz       r3, -0x6E44(r13)
  cmplwi    r3, 0
  beq-      .loc_0x134
  lwz       r12, 0x28(r3)
  li        r4, 0x1
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0x134:
  li        r0, 0
  cmplwi    r30, 0
  stw       r0, -0x6E44(r13)
  beq-      .loc_0x15C
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x97C
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x136FA0

.loc_0x15C:
  extsh.    r0, r31
  ble-      .loc_0x16C
  mr        r3, r30
  bl        -0x44851C

.loc_0x16C:
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
 * Address:	8046C5F0
 * Size:	000050
 */
void __dt__Q28PSSystem39SingletonBase<PSM::BossBgmFader::Mgr>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x38
  lis       r5, 0x804F
  extsh.    r0, r4
  subi      r4, r5, 0xB30
  li        r0, 0
  stw       r4, 0x0(r31)
  stw       r0, -0x6E50(r13)
  ble-      .loc_0x38
  bl        -0x448570

.loc_0x38:
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
 * Address:	8046C640
 * Size:	000050
 */
void __dt__Q28PSSystem34SingletonBase<PSM::ObjCalcBase>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x38
  lis       r5, 0x804F
  extsh.    r0, r4
  subi      r4, r5, 0xAA4
  li        r0, 0
  stw       r4, 0x0(r31)
  stw       r0, -0x6E4C(r13)
  ble-      .loc_0x38
  bl        -0x4485C0

.loc_0x38:
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
 * Address:	8046C690
 * Size:	000028
 */
void __sinit_PSMainSide_Scene_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x6368(r13)
  stfsu     f0, -0xD98(r3)
  stfs      f0, -0x6364(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}