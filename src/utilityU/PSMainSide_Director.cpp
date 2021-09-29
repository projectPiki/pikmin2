

/*
 * --INFO--
 * Address:	80456AF8
 * Size:	000080
 */
void __ct__Q23PSM14DamageDirectorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x14(r1)
  subi      r5, r4, 0x3268
  li        r4, 0x1
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x113C64
  lis       r3, 0x804E
  lis       r4, 0x804F
  subi      r0, r3, 0x4FF8
  lis       r3, 0x804F
  stw       r0, 0x0(r31)
  subi      r0, r4, 0x1EE0
  li        r5, 0
  subi      r4, r3, 0x1F18
  stw       r0, 0x0(r31)
  li        r0, 0xE1
  lfs       f1, 0x28A0(r2)
  mr        r3, r31
  stw       r5, 0x48(r31)
  lfs       f0, 0x28A4(r2)
  stw       r4, 0x0(r31)
  stfs      f1, 0x4C(r31)
  stfs      f0, 0x50(r31)
  stw       r0, 0x54(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80456B78
 * Size:	000080
 */
void __dt__Q23PSM15OneShotDirectorFv(void)
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
  subi      r0, r4, 0x1EE0
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r4, 0x804E
  subi      r0, r4, 0x4FF8
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39C9CC

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x432B24

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
 * Address:	80456BF8
 * Size:	000034
 */
void directOnTrack__Q23PSM14DamageDirectorFRQ28PSSystem12SeqTrackBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  stw       r0, 0x14(r1)
  lfs       f1, 0x4C(r3)
  mr        r3, r4
  lfs       f2, 0x50(r5)
  lwz       r4, 0x54(r5)
  bl        -0x114474
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80456C2C
 * Size:	00003C
 */
void execInner__Q23PSM14DamageDirectorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x48(r3)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __ct__Q23PSM23TempoChangeDirectorBaseFPCcfl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80456C68
 * Size:	000080
 */
void __dt__Q23PSM16SwitcherDirectorFv(void)
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
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39CABC

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x432C14

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
 * Address:	80456CE8
 * Size:	000030
 */
void directOnTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  stw       r0, 0x14(r1)
  lfs       f1, 0x48(r3)
  mr        r3, r4
  lwz       r4, 0x4C(r5)
  bl        -0x1144D8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80456D18
 * Size:	000030
 */
void directOffTrack__Q23PSM23TempoChangeDirectorBaseFRQ28PSSystem12SeqTrackBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  lfs       f1, 0x28A8(r2)
  stw       r0, 0x14(r1)
  mr        r3, r4
  lwz       r4, 0x4C(r5)
  bl        -0x114508
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80456D48
 * Size:	000084
 */
void __ct__Q23PSM25ActorDirector_TempoChangeFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x14(r1)
  subi      r5, r4, 0x325C
  li        r4, 0x1
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x113EB4
  lis       r4, 0x804E
  lis       r3, 0x804F
  subi      r0, r4, 0x5030
  lis       r4, 0x804F
  stw       r0, 0x0(r31)
  subi      r5, r3, 0x1F50
  lis       r3, 0x804F
  subi      r0, r4, 0x1F88
  stw       r5, 0x0(r31)
  li        r5, 0x64
  lfs       f0, 0x28AC(r2)
  li        r4, 0
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x1FC0
  mr        r3, r31
  stfs      f0, 0x48(r31)
  stw       r5, 0x4C(r31)
  stw       r4, 0x50(r31)
  stw       r0, 0x0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80456DCC
 * Size:	000090
 */
void __dt__Q23PSM23TempoChangeDirectorBaseFv(void)
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
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x1F88
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39CC30

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x432D88

.loc_0x74:
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
 * Address:	80456E5C
 * Size:	00003C
 */
void execInner__Q23PSM25ActorDirector_TempoChangeFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x50(r3)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80456E98
 * Size:	000078
 */
void __ct__Q23PSM20PikminNumberDirectorFiUcRQ28PSSystem11DirectedBgm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r6, 0x804A
  stw       r0, 0x14(r1)
  subi      r0, r6, 0x3250
  stw       r31, 0xC(r1)
  mr        r31, r5
  mr        r5, r0
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x11400C
  lis       r3, 0x804E
  lis       r4, 0x804F
  subi      r0, r3, 0x5030
  lis       r3, 0x804F
  stw       r0, 0x0(r30)
  subi      r5, r4, 0x1F50
  li        r4, 0
  subi      r0, r3, 0x1FF8
  stw       r5, 0x0(r30)
  mr        r3, r30
  stw       r4, 0x48(r30)
  stw       r0, 0x0(r30)
  stb       r31, 0x4C(r30)
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
 * Address:	80456F10
 * Size:	00004C
 */
void directOnTrack__Q23PSM20PikminNumberDirectorFRQ28PSSystem12SeqTrackBase(void)
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
  mr        r3, r31
  bl        -0x114C2C
  lbz       r4, 0x4C(r30)
  mr        r3, r31
  mr        r5, r30
  bl        -0x114180
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
 * Address:	80456F5C
 * Size:	00002C
 */
void directOffTrack__Q23PSM20PikminNumberDirectorFRQ28PSSystem12SeqTrackBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  mr        r3, r4
  stw       r0, 0x14(r1)
  li        r4, 0
  bl        -0x1141B4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80456F88
 * Size:	00003C
 */
void execInner__Q23PSM20PikminNumberDirectorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x48(r3)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80456FC4
 * Size:	000094
 */
void __ct__Q23PSM28PikminNumberDirector_AutoBgmFiUcRQ28PSSystem11DirectedBgm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r7, 0x804A
  stw       r0, 0x24(r1)
  subi      r0, r7, 0x3250
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  mr        r5, r0
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        -0x114140
  lis       r4, 0x804E
  lis       r3, 0x804F
  subi      r0, r4, 0x5030
  lis       r4, 0x804F
  stw       r0, 0x0(r29)
  subi      r0, r3, 0x1F50
  lis       r3, 0x804F
  li        r5, 0
  stw       r0, 0x0(r29)
  subi      r4, r4, 0x1FF8
  subi      r0, r3, 0x2030
  mr        r3, r29
  stw       r5, 0x48(r29)
  stw       r4, 0x0(r29)
  stb       r30, 0x4C(r29)
  stw       r0, 0x0(r29)
  stw       r31, 0x50(r29)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80457058
 * Size:	000090
 */
void __dt__Q23PSM20PikminNumberDirectorFv(void)
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
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x1FF8
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39CEBC

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x433014

.loc_0x74:
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
 * Address:	804570E8
 * Size:	000088
 */
void directOnTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0xF8
  lwz       r4, 0x50(r30)
  li        r0, 0x1
  mr        r30, r3
  stb       r0, 0x34E(r4)
  lwz       r31, 0x340(r4)
  b         .loc_0x68

.loc_0x34:
  lwz       r3, 0x0(r31)
  lbz       r4, 0x18(r3)
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r0,r0,1,31,31
  cmplwi    r0, 0x1
  bne-      .loc_0x64
  lwz       r12, 0x14(r3)
  mr        r4, r30
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x64:
  lwz       r31, 0xC(r31)

.loc_0x68:
  cmplwi    r31, 0
  bne+      .loc_0x34
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
 * Address:	80457170
 * Size:	000088
 */
void directOffTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        .loc_0x88
  lwz       r4, 0x50(r30)
  li        r0, 0
  mr        r30, r3
  stb       r0, 0x34E(r4)
  lwz       r31, 0x340(r4)
  b         .loc_0x68

.loc_0x34:
  lwz       r3, 0x0(r31)
  lbz       r4, 0x18(r3)
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r0,r0,1,31,31
  cmplwi    r0, 0x1
  bne-      .loc_0x64
  lwz       r12, 0x14(r3)
  mr        r4, r30
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x64:
  lwz       r31, 0xC(r31)

.loc_0x68:
  cmplwi    r31, 0
  bne+      .loc_0x34
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x88:
*/
}

/*
 * --INFO--
 * Address:	804571F8
 * Size:	0000B8
 */
void getTrack__Q23PSM28PikminNumberDirector_AutoBgmFRQ28PSSystem12SeqTrackBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r4
  bl        -0x114F10
  lwz       r4, 0x24(r3)
  lwz       r3, 0x50(r30)
  lwz       r0, 0x348(r4)
  lwz       r3, 0x308(r3)
  rlwinm    r0,r0,0,28,31
  mr        r31, r0
  bl        -0x11A71C
  rlwinm    r3,r3,0,24,31
  rlwinm    r0,r31,0,24,31
  cmplw     r0, r3
  blt-      .loc_0x68
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x3244
  li        r4, 0xC2
  subi      r5, r5, 0x322C
  crclr     6, 0x6
  bl        -0x42CC1C

.loc_0x68:
  lwz       r3, 0x50(r30)
  mr        r4, r31
  lwz       r3, 0x308(r3)
  bl        -0x11A370
  mr.       r31, r3
  bne-      .loc_0x9C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x3244
  li        r4, 0xC4
  subi      r5, r5, 0x322C
  crclr     6, 0x6
  bl        -0x42CC50

.loc_0x9C:
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
 * Address:	804572B0
 * Size:	00007C
 */
void __ct__Q23PSM19TrackOnDirectorBaseFiPCcll(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r7
  stw       r30, 0x18(r1)
  mr        r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        -0x114420
  lis       r3, 0x804E
  lis       r4, 0x804F
  subi      r0, r3, 0x5030
  lis       r3, 0x804F
  stw       r0, 0x0(r29)
  subi      r5, r4, 0x1F50
  subi      r4, r3, 0x2068
  li        r0, 0
  stw       r5, 0x0(r29)
  mr        r3, r29
  stw       r4, 0x0(r29)
  stw       r30, 0x48(r29)
  stw       r31, 0x4C(r29)
  stb       r0, 0x50(r29)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8045732C
 * Size:	000034
 */
void onPlayInit__Q23PSM19TrackOnDirectorBaseFP8JASTrack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  li        r4, 0x1
  stw       r0, 0x14(r1)
  lbz       r0, 0x358(r3)
  ori       r0, r0, 0x60
  stb       r0, 0x358(r3)
  bl        -0x3B6068
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80457360
 * Size:	000050
 */
void directOnTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  stw       r0, 0x14(r1)
  lbz       r0, 0x50(r3)
  cmplwi    r0, 0
  beq-      .loc_0x30
  lfs       f1, 0x28B0(r2)
  mr        r3, r4
  li        r4, 0
  bl        -0x114738
  b         .loc_0x40

.loc_0x30:
  mr        r3, r4
  lfs       f1, 0x28A8(r2)
  lwz       r4, 0x48(r5)
  bl        -0x11474C

.loc_0x40:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804573B0
 * Size:	00002C
 */
void directOffTrack__Q23PSM19TrackOnDirectorBaseFRQ28PSSystem12SeqTrackBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  mr        r3, r4
  stw       r0, 0x14(r1)
  lwz       r4, 0x4C(r5)
  bl        -0x1146F4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804573DC
 * Size:	000090
 */
void execInner__Q23PSM22TrackOnDirector_VotingFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x54(r3)
  cmplwi    r0, 0
  bne-      .loc_0x44
  bl        -0x114334
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x44
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x74

.loc_0x44:
  lbz       r0, 0x54(r31)
  cmplwi    r0, 0
  beq-      .loc_0x74
  mr        r3, r31
  bl        -0x114368
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x74
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x74:
  li        r0, 0
  stb       r0, 0x54(r31)
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
 * Size:	0000E4
 */
void __ct__Q23PSM22TrackOnDirector_ScaledFPCciffllUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8045746C
 * Size:	000090
 */
void __dt__Q23PSM19TrackOnDirectorBaseFv(void)
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
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x2068
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39D2D0

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x433428

.loc_0x74:
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
 * Address:	804574FC
 * Size:	0000FC
 */
void underDirection__Q23PSM22TrackOnDirector_ScaledFv(void)
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
  lbz       r0, -0x6778(r13)
  mr        r28, r3
  lfs       f31, 0x28A8(r2)
  cmplwi    r0, 0
  bne-      .loc_0x6C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x5C(r28)
  li        r3, 0
  lfs       f4, 0x28B0(r2)
  lfs       f1, 0x5C(r28)
  lfs       f2, 0x58(r28)
  lfs       f3, 0x54(r28)
  lfs       f5, 0x28A8(r2)
  bl        -0x39D31C
  fmr       f31, f1

.loc_0x6C:
  lis       r4, 0x804A
  lis       r3, 0x804A
  subi      r30, r4, 0x3220
  li        r29, 0
  subi      r31, r3, 0x322C
  b         .loc_0xC4

.loc_0x84:
  rlwinm    r0,r29,0,24,31
  cmplw     r0, r3
  blt-      .loc_0xA4
  mr        r3, r30
  mr        r5, r31
  li        r4, 0x33
  crclr     6, 0x6
  bl        -0x42CF5C

.loc_0xA4:
  lwz       r3, 0x4(r28)
  rlwinm    r0,r29,2,22,29
  fmr       f1, f31
  lwz       r4, 0x60(r28)
  lwzx      r3, r3, r0
  li        r5, 0
  bl        -0x114870
  addi      r29, r29, 0x1

.loc_0xC4:
  lbz       r3, 0x41(r28)
  rlwinm    r0,r29,0,24,31
  cmplw     r0, r3
  blt+      .loc_0x84
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
 * Address:	804575F8
 * Size:	00008C
 */
void onUpdateFromMasterD__Q23PSM17ListDirectorActorFv(void)
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
  bne-      .loc_0x48
  lwz       r3, 0x4(r31)
  bl        -0x114554
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x48
  lwz       r3, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x78

.loc_0x48:
  lwz       r0, 0xC(r31)
  cmplwi    r0, 0
  beq-      .loc_0x78
  lwz       r3, 0x4(r31)
  bl        -0x114588
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x78
  lwz       r3, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x78:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80457684
 * Size:	000098
 */
void __ct__Q23PSM21ActorDirector_TrackOnFPCcill(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  mr        r0, r4
  mr        r4, r5
  stw       r31, 0x1C(r1)
  mr        r31, r7
  mr        r5, r0
  stw       r30, 0x18(r1)
  mr        r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        -0x114800
  lis       r4, 0x804E
  lis       r3, 0x804F
  subi      r0, r4, 0x5030
  lis       r4, 0x804F
  stw       r0, 0x0(r29)
  subi      r0, r3, 0x1F50
  lis       r3, 0x804F
  subi      r5, r4, 0x2068
  stw       r0, 0x0(r29)
  li        r4, 0
  subi      r0, r3, 0x2128
  mr        r3, r29
  stw       r5, 0x0(r29)
  stw       r30, 0x48(r29)
  stw       r31, 0x4C(r29)
  stb       r4, 0x50(r29)
  stw       r4, 0x54(r29)
  stw       r0, 0x0(r29)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8045771C
 * Size:	00003C
 */
void execInner__Q23PSM21ActorDirector_TrackOnFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x54(r3)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80457758
 * Size:	0000F4
 */
void __ct__Q23PSM20ActorDirector_ScaledFPCciffllUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  fmr       f30, f1
  mr        r0, r4
  fmr       f31, f2
  mr        r4, r5
  mr        r28, r3
  mr        r29, r6
  mr        r30, r7
  mr        r31, r8
  mr        r5, r0
  bl        -0x1148F4
  lis       r4, 0x804E
  lis       r3, 0x804F
  subi      r0, r4, 0x5030
  lis       r5, 0x804F
  stw       r0, 0x0(r28)
  subi      r0, r3, 0x1F50
  lis       r4, 0x804F
  lis       r3, 0x804F
  stw       r0, 0x0(r28)
  subi      r0, r5, 0x2068
  li        r6, 0
  subi      r5, r4, 0x20DC
  stw       r0, 0x0(r28)
  li        r4, 0x1
  lfs       f0, 0x28B4(r2)
  subi      r0, r3, 0x2168
  stw       r29, 0x48(r28)
  mr        r3, r28
  stw       r30, 0x4C(r28)
  stb       r6, 0x50(r28)
  stw       r5, 0x0(r28)
  stfs      f30, 0x54(r28)
  stfs      f31, 0x58(r28)
  stfs      f0, 0x5C(r28)
  stw       r31, 0x60(r28)
  stb       r4, 0x50(r28)
  stw       r6, 0x64(r28)
  stw       r0, 0x0(r28)
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x44(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8045784C
 * Size:	0000A0
 */
void __dt__Q23PSM22TrackOnDirector_ScaledFv(void)
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
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x20DC
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x2068
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39D6C0

.loc_0x74:
  extsh.    r0, r31
  ble-      .loc_0x84
  mr        r3, r30
  bl        -0x433818

.loc_0x84:
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
 * Address:	804578EC
 * Size:	00003C
 */
void execInner__Q23PSM20ActorDirector_ScaledFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x64(r3)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80457928
 * Size:	000614
 */
void getNearestDistance__Q23PSM20ActorDirector_ScaledFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x1D0(r1)
  mflr      r0
  stw       r0, 0x1D4(r1)
  stfd      f31, 0x1C0(r1)
  psq_st    f31,0x1C8(r1),0,0
  stfd      f30, 0x1B0(r1)
  psq_st    f30,0x1B8(r1),0,0
  stfd      f29, 0x1A0(r1)
  psq_st    f29,0x1A8(r1),0,0
  stfd      f28, 0x190(r1)
  psq_st    f28,0x198(r1),0,0
  stfd      f27, 0x180(r1)
  psq_st    f27,0x188(r1),0,0
  stfd      f26, 0x170(r1)
  psq_st    f26,0x178(r1),0,0
  stfd      f25, 0x160(r1)
  psq_st    f25,0x168(r1),0,0
  stfd      f24, 0x150(r1)
  psq_st    f24,0x158(r1),0,0
  stw       r31, 0x14C(r1)
  stw       r30, 0x148(r1)
  stw       r29, 0x144(r1)
  stw       r28, 0x140(r1)
  lwz       r0, -0x6E4C(r13)
  lis       r4, 0x804A
  mr        r30, r3
  cmplwi    r0, 0
  subi      r31, r4, 0x3268
  bne-      .loc_0x88
  addi      r3, r31, 0x58
  addi      r5, r31, 0x3C
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x42D36C

.loc_0x88:
  lwz       r3, -0x6E4C(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  lfs       f24, 0x28B8(r2)
  bne-      .loc_0x3EC
  lwz       r3, -0x6D20(r13)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  mr        r0, r3
  lwz       r3, -0x6D20(r13)
  mr        r29, r0
  li        r4, 0x1
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  cmplwi    r29, 0
  mr        r28, r3
  li        r0, 0
  beq-      .loc_0xFC
  cmplwi    r28, 0
  beq-      .loc_0xFC
  li        r0, 0x1

.loc_0xFC:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x118
  addi      r3, r31, 0x24
  addi      r5, r31, 0x3C
  li        r4, 0x18A
  crclr     6, 0x6
  bl        -0x42D3FC

.loc_0x118:
  mr        r4, r29
  addi      r3, r1, 0x134
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r28
  addi      r3, r1, 0x128
  lwz       r12, 0x0(r28)
  lfs       f30, 0x134(r1)
  lwz       r12, 0x8(r12)
  lfs       f29, 0x138(r1)
  lfs       f28, 0x13C(r1)
  mtctr     r12
  bctrl     
  lwz       r3, 0x64(r30)
  lfs       f27, 0x128(r1)
  cmplwi    r3, 0
  lfs       f26, 0x12C(r1)
  lfs       f25, 0x130(r1)
  beq-      .loc_0x170
  addi      r3, r3, 0xC

.loc_0x170:
  lwz       r31, 0x0(r3)
  lfs       f31, 0x28B0(r2)
  b         .loc_0x3E0

.loc_0x17C:
  lwz       r4, 0x0(r31)
  addi      r3, r1, 0x11C
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x120(r1)
  lfs       f0, 0x11C(r1)
  stfs      f30, 0xA4(r1)
  lfs       f2, 0x124(r1)
  stfs      f29, 0xA8(r1)
  lwz       r0, 0xA4(r1)
  stfs      f0, 0xB0(r1)
  lwz       r6, 0xA8(r1)
  stfs      f1, 0xB4(r1)
  lwz       r4, 0xB0(r1)
  lwz       r3, 0xB4(r1)
  stfs      f28, 0xAC(r1)
  lfs       f0, 0x11C(r1)
  stfs      f2, 0xB8(r1)
  lwz       r5, 0xAC(r1)
  stw       r0, 0x104(r1)
  lwz       r0, 0xB8(r1)
  stw       r6, 0x108(r1)
  lfs       f5, 0x104(r1)
  stw       r4, 0x110(r1)
  lfs       f3, 0x108(r1)
  stw       r3, 0x114(r1)
  lfs       f6, 0x110(r1)
  lfs       f4, 0x114(r1)
  stw       r5, 0x10C(r1)
  fsubs     f6, f6, f5
  fsubs     f5, f4, f3
  stw       r0, 0x118(r1)
  lfs       f3, 0x10C(r1)
  lfs       f4, 0x118(r1)
  stfs      f6, 0x68(r1)
  fsubs     f3, f4, f3
  stfs      f5, 0x6C(r1)
  lwz       r0, 0x68(r1)
  lwz       r3, 0x6C(r1)
  stfs      f3, 0x70(r1)
  stw       r0, 0x50(r1)
  lwz       r0, 0x70(r1)
  stw       r3, 0x54(r1)
  lfs       f4, 0x50(r1)
  lfs       f3, 0x54(r1)
  stw       r0, 0x58(r1)
  fmuls     f5, f4, f4
  fmuls     f4, f3, f3
  lfs       f3, 0x58(r1)
  stfs      f5, 0x50(r1)
  fmuls     f3, f3, f3
  stfs      f4, 0x54(r1)
  lwz       r0, 0x50(r1)
  lwz       r3, 0x54(r1)
  stfs      f3, 0x58(r1)
  stw       r0, 0x5C(r1)
  lwz       r0, 0x58(r1)
  stw       r3, 0x60(r1)
  lfs       f4, 0x5C(r1)
  lfs       f3, 0x60(r1)
  stw       r0, 0x64(r1)
  fadds     f3, f4, f3
  lfs       f4, 0x64(r1)
  fadds     f4, f4, f3
  fcmpo     cr0, f4, f31
  ble-      .loc_0x294
  fsqrte    f3, f4
  fmuls     f4, f3, f4

.loc_0x294:
  stfs      f27, 0x8C(r1)
  stfs      f26, 0x90(r1)
  lwz       r0, 0x8C(r1)
  stfs      f0, 0x98(r1)
  lwz       r6, 0x90(r1)
  stfs      f1, 0x9C(r1)
  lwz       r4, 0x98(r1)
  lwz       r3, 0x9C(r1)
  stfs      f25, 0x94(r1)
  stfs      f2, 0xA0(r1)
  lwz       r5, 0x94(r1)
  stw       r0, 0xEC(r1)
  lwz       r0, 0xA0(r1)
  stw       r6, 0xF0(r1)
  lfs       f2, 0xEC(r1)
  stw       r4, 0xF8(r1)
  lfs       f0, 0xF0(r1)
  stw       r3, 0xFC(r1)
  lfs       f3, 0xF8(r1)
  lfs       f1, 0xFC(r1)
  stw       r5, 0xF4(r1)
  fsubs     f3, f3, f2
  fsubs     f2, f1, f0
  stw       r0, 0x100(r1)
  lfs       f0, 0xF4(r1)
  lfs       f1, 0x100(r1)
  stfs      f3, 0x44(r1)
  fsubs     f0, f1, f0
  stfs      f2, 0x48(r1)
  lwz       r0, 0x44(r1)
  lwz       r3, 0x48(r1)
  stfs      f0, 0x4C(r1)
  stw       r0, 0x2C(r1)
  lwz       r0, 0x4C(r1)
  stw       r3, 0x30(r1)
  lfs       f1, 0x2C(r1)
  lfs       f0, 0x30(r1)
  stw       r0, 0x34(r1)
  fmuls     f2, f1, f1
  fmuls     f1, f0, f0
  lfs       f0, 0x34(r1)
  stfs      f2, 0x2C(r1)
  fmuls     f0, f0, f0
  stfs      f1, 0x30(r1)
  lwz       r0, 0x2C(r1)
  lwz       r3, 0x30(r1)
  stfs      f0, 0x34(r1)
  stw       r0, 0x38(r1)
  lwz       r0, 0x34(r1)
  stw       r3, 0x3C(r1)
  lfs       f1, 0x38(r1)
  lfs       f0, 0x3C(r1)
  stw       r0, 0x40(r1)
  fadds     f0, f1, f0
  lfs       f1, 0x40(r1)
  fadds     f0, f1, f0
  fcmpo     cr0, f0, f31
  ble-      .loc_0x384
  fsqrte    f1, f0
  fmuls     f0, f1, f0

.loc_0x384:
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  bne-      .loc_0x3B8
  fcmpo     cr0, f4, f24
  bge-      .loc_0x3DC
  mr        r3, r30
  fmr       f24, f4
  lwz       r12, 0x0(r30)
  lwz       r4, 0x0(r31)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x3DC

.loc_0x3B8:
  fcmpo     cr0, f0, f24
  bge-      .loc_0x3DC
  mr        r3, r30
  fmr       f24, f0
  lwz       r12, 0x0(r30)
  lwz       r4, 0x0(r31)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     

.loc_0x3DC:
  lwz       r31, 0xC(r31)

.loc_0x3E0:
  cmplwi    r31, 0
  bne+      .loc_0x17C
  b         .loc_0x5B0

.loc_0x3EC:
  lwz       r3, -0x6D20(r13)
  bl        -0x2FD0F8
  cmplwi    r3, 0
  bne-      .loc_0x438
  lwz       r3, -0x6E4C(r13)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  lwz       r3, -0x7498(r13)
  mulli     r0, r0, 0xC
  lwz       r3, 0x4(r3)
  lwzx      r3, r3, r0
  lfs       f25, 0x0(r3)
  lfs       f26, 0x4(r3)
  lfs       f27, 0x8(r3)
  b         .loc_0x45C

.loc_0x438:
  mr        r4, r3
  addi      r3, r1, 0xE0
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f25, 0xE0(r1)
  lfs       f26, 0xE4(r1)
  lfs       f27, 0xE8(r1)

.loc_0x45C:
  lwz       r3, 0x64(r30)
  lfs       f28, 0x28B0(r2)
  lwz       r31, 0xC(r3)
  b         .loc_0x5A8

.loc_0x46C:
  lwz       r4, 0x0(r31)
  addi      r3, r1, 0xD4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0xD4(r1)
  lfs       f1, 0xD8(r1)
  stfs      f25, 0x74(r1)
  lfs       f0, 0xDC(r1)
  stfs      f26, 0x78(r1)
  lwz       r0, 0x74(r1)
  stfs      f2, 0x80(r1)
  lwz       r6, 0x78(r1)
  stfs      f1, 0x84(r1)
  lwz       r4, 0x80(r1)
  lwz       r3, 0x84(r1)
  stfs      f27, 0x7C(r1)
  stfs      f0, 0x88(r1)
  lwz       r5, 0x7C(r1)
  stw       r0, 0xBC(r1)
  lwz       r0, 0x88(r1)
  stw       r6, 0xC0(r1)
  lfs       f2, 0xBC(r1)
  stw       r4, 0xC8(r1)
  lfs       f0, 0xC0(r1)
  stw       r3, 0xCC(r1)
  lfs       f3, 0xC8(r1)
  lfs       f1, 0xCC(r1)
  stw       r5, 0xC4(r1)
  fsubs     f3, f3, f2
  fsubs     f2, f1, f0
  stw       r0, 0xD0(r1)
  lfs       f0, 0xC4(r1)
  lfs       f1, 0xD0(r1)
  stfs      f3, 0x20(r1)
  fsubs     f0, f1, f0
  stfs      f2, 0x24(r1)
  lwz       r0, 0x20(r1)
  lwz       r3, 0x24(r1)
  stfs      f0, 0x28(r1)
  stw       r0, 0x8(r1)
  lwz       r0, 0x28(r1)
  stw       r3, 0xC(r1)
  lfs       f1, 0x8(r1)
  lfs       f0, 0xC(r1)
  stw       r0, 0x10(r1)
  fmuls     f2, f1, f1
  fmuls     f1, f0, f0
  lfs       f0, 0x10(r1)
  stfs      f2, 0x8(r1)
  fmuls     f0, f0, f0
  stfs      f1, 0xC(r1)
  lwz       r0, 0x8(r1)
  lwz       r3, 0xC(r1)
  stfs      f0, 0x10(r1)
  stw       r0, 0x14(r1)
  lwz       r0, 0x10(r1)
  stw       r3, 0x18(r1)
  lfs       f1, 0x14(r1)
  lfs       f0, 0x18(r1)
  stw       r0, 0x1C(r1)
  fadds     f0, f1, f0
  lfs       f1, 0x1C(r1)
  fadds     f0, f1, f0
  fcmpo     cr0, f0, f28
  ble-      .loc_0x580
  fsqrte    f1, f0
  fmuls     f0, f1, f0

.loc_0x580:
  fcmpo     cr0, f0, f24
  bge-      .loc_0x5A4
  mr        r3, r30
  fmr       f24, f0
  lwz       r12, 0x0(r30)
  lwz       r4, 0x0(r31)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     

.loc_0x5A4:
  lwz       r31, 0xC(r31)

.loc_0x5A8:
  cmplwi    r31, 0
  bne+      .loc_0x46C

.loc_0x5B0:
  fmr       f1, f24
  psq_l     f31,0x1C8(r1),0,0
  lfd       f31, 0x1C0(r1)
  psq_l     f30,0x1B8(r1),0,0
  lfd       f30, 0x1B0(r1)
  psq_l     f29,0x1A8(r1),0,0
  lfd       f29, 0x1A0(r1)
  psq_l     f28,0x198(r1),0,0
  lfd       f28, 0x190(r1)
  psq_l     f27,0x188(r1),0,0
  lfd       f27, 0x180(r1)
  psq_l     f26,0x178(r1),0,0
  lfd       f26, 0x170(r1)
  psq_l     f25,0x168(r1),0,0
  lfd       f25, 0x160(r1)
  psq_l     f24,0x158(r1),0,0
  lfd       f24, 0x150(r1)
  lwz       r31, 0x14C(r1)
  lwz       r30, 0x148(r1)
  lwz       r29, 0x144(r1)
  lwz       r0, 0x1D4(r1)
  lwz       r28, 0x140(r1)
  mtlr      r0
  addi      r1, r1, 0x1D0
  blr
*/
}

/*
 * --INFO--
 * Address:	80457F3C
 * Size:	0000E4
 */
void __ct__Q23PSM19ActorDirector_EnemyFPCcillUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  mr        r0, r4
  mr        r4, r5
  stw       r31, 0x1C(r1)
  mr        r31, r3
  mr        r5, r0
  stw       r30, 0x18(r1)
  mr        r30, r8
  stw       r29, 0x14(r1)
  mr        r29, r7
  stw       r28, 0x10(r1)
  mr        r28, r6
  bl        -0x1150C0
  lis       r3, 0x804E
  lis       r4, 0x804F
  subi      r0, r3, 0x5030
  lis       r3, 0x804F
  stw       r0, 0x0(r31)
  subi      r0, r4, 0x1F50
  lis       r5, 0x804F
  lis       r4, 0x804F
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x2068
  lis       r3, 0x804F
  li        r7, 0
  stw       r0, 0x0(r31)
  subi      r6, r5, 0x20DC
  lfs       f2, 0x28A8(r2)
  li        r5, 0x1
  stw       r28, 0x48(r31)
  subi      r4, r4, 0x2168
  lfs       f1, 0x28B0(r2)
  subi      r0, r3, 0x21B0
  stw       r29, 0x4C(r31)
  mr        r3, r31
  lfs       f0, 0x28B4(r2)
  stb       r7, 0x50(r31)
  stw       r6, 0x0(r31)
  stfs      f2, 0x54(r31)
  stfs      f1, 0x58(r31)
  stfs      f0, 0x5C(r31)
  stw       r30, 0x60(r31)
  stb       r5, 0x50(r31)
  stw       r7, 0x64(r31)
  stw       r4, 0x0(r31)
  stw       r0, 0x0(r31)
  stw       r7, 0x68(r31)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80458020
 * Size:	0000B0
 */
void __dt__Q23PSM20ActorDirector_ScaledFv(void)
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
  lis       r4, 0x804F
  subi      r0, r4, 0x2168
  stw       r0, 0x0(r30)
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x20DC
  stw       r0, 0x0(r30)
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x2068
  stw       r0, 0x0(r30)
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x84
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x84
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39DEA4

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x433FFC

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
 * Address:	804580D0
 * Size:	000008
 */
void onSetMinDistObj__Q23PSM19ActorDirector_EnemyFPQ24Game8Creature(void)
{
/*
.loc_0x0:
  stw       r4, 0x68(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	804580D8
 * Size:	0001D0
 */
void underDirection__Q23PSM19ActorDirector_EnemyFv(void)
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
  mr        r29, r3
  li        r0, 0
  stw       r0, 0x68(r3)
  lis       r3, 0x804A
  lfs       f31, 0x28A8(r2)
  subi      r31, r3, 0x3268
  lbz       r0, -0x6778(r13)
  cmplwi    r0, 0
  bne-      .loc_0x154
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x64
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42DAF8

.loc_0x64:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x84
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42DB18

.loc_0x84:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0xA4
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42DB38

.loc_0xA4:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xC8
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42DB5C

.loc_0xC8:
  mr        r3, r30
  bl        0xF570
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0xD
  bne-      .loc_0xE4
  lfs       f31, 0x28A8(r2)
  b         .loc_0x154

.loc_0xE4:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x5C(r29)
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r4, 0x68(r29)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r29)
  fmr       f31, f1
  mr        r3, r29
  lwz       r4, 0x68(r29)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  fmr       f0, f1
  lfs       f1, 0x5C(r29)
  fmr       f2, f31
  lfs       f4, 0x28B0(r2)
  lfs       f5, 0x28A8(r2)
  li        r3, 0
  fmr       f3, f0
  bl        -0x39DFE0
  fmr       f31, f1

.loc_0x154:
  li        r30, 0
  b         .loc_0x19C

.loc_0x15C:
  rlwinm    r0,r30,0,24,31
  cmplw     r0, r3
  blt-      .loc_0x17C
  addi      r3, r31, 0x48
  addi      r5, r31, 0x3C
  li        r4, 0x33
  crclr     6, 0x6
  bl        -0x42DC10

.loc_0x17C:
  lwz       r3, 0x4(r29)
  rlwinm    r0,r30,2,22,29
  fmr       f1, f31
  lwz       r4, 0x60(r29)
  lwzx      r3, r3, r0
  li        r5, 0
  bl        -0x115524
  addi      r30, r30, 0x1

.loc_0x19C:
  lbz       r3, 0x41(r29)
  rlwinm    r0,r30,0,24,31
  cmplw     r0, r3
  blt+      .loc_0x15C
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	804582A8
 * Size:	000044
 */
void getVolZeroDist__Q23PSM20ActorDirector_BattleFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x28C(r4)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  subi      r0, r3, 0x2
  lis       r3, 0x804A
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x1E70
  lfsx      f1, r3, r0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804582EC
 * Size:	000044
 */
void getVolMaxDist__Q23PSM20ActorDirector_BattleFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x28C(r4)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  subi      r0, r3, 0x2
  lis       r3, 0x804A
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x1EA8
  lfsx      f1, r3, r0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80458330
 * Size:	000044
 */
void getVolZeroDist__Q23PSM19ActorDirector_KehaiFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x28C(r4)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  subi      r0, r3, 0x2
  lis       r3, 0x804A
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x1E8C
  lfsx      f1, r3, r0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80458374
 * Size:	000044
 */
void getVolMaxDist__Q23PSM19ActorDirector_KehaiFPQ24Game9EnemyBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x28C(r4)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  subi      r0, r3, 0x2
  lis       r3, 0x804A
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x1EC4
  lfsx      f1, r3, r0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void __ct__Q23PSM27ActorDirector_IchouNBeedamaFPCciffllUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void execInner__Q23PSM27ActorDirector_IchouNBeedamaFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F8
 */
void getPSOtakara__Q23PSM27ActorDirector_IchouNBeedamaFPQ24Game8Creature(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00037C
 */
void getNearestDistance__Q23PSM27ActorDirector_IchouNBeedamaFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804583B8
 * Size:	00007C
 */
void __ct__Q23PSM17PikAttackDirectorFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x14(r1)
  subi      r5, r5, 0x31B0
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x115520
  lis       r4, 0x804E
  lis       r3, 0x804F
  subi      r0, r4, 0x5030
  lis       r4, 0x804F
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x1F50
  lis       r3, 0x804F
  subi      r6, r4, 0x2068
  stw       r0, 0x0(r31)
  li        r5, 0x64
  li        r4, 0
  subi      r0, r3, 0x2278
  stw       r6, 0x0(r31)
  mr        r3, r31
  stw       r5, 0x48(r31)
  stw       r5, 0x4C(r31)
  stb       r4, 0x50(r31)
  stw       r0, 0x0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80458434
 * Size:	00007C
 */
void __ct__Q23PSM13ExiteDirectorFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x14(r1)
  subi      r5, r5, 0x31A4
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x11559C
  lis       r4, 0x804E
  lis       r3, 0x804F
  subi      r0, r4, 0x5030
  lis       r4, 0x804F
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x1F50
  lis       r3, 0x804F
  subi      r6, r4, 0x2068
  stw       r0, 0x0(r31)
  li        r5, 0x64
  li        r4, 0
  subi      r0, r3, 0x22B0
  stw       r6, 0x0(r31)
  mr        r3, r31
  stw       r5, 0x48(r31)
  stw       r5, 0x4C(r31)
  stb       r4, 0x50(r31)
  stw       r0, 0x0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804584B0
 * Size:	000068
 */
void __ct__Q23PSM15DirectorUpdatorFPQ28PSSystem12DirectorBaseUcQ33PSM15DirectorUpdator4Type(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm.   r0,r5,0,24,31
  stw       r31, 0xC(r1)
  mr        r31, r3
  stb       r5, 0x0(r3)
  li        r3, 0
  stw       r6, 0x4(r31)
  stb       r3, 0x8(r31)
  stb       r3, 0x9(r31)
  stw       r4, 0xC(r31)
  bne-      .loc_0x50
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x3244
  li        r4, 0x2BA
  subi      r5, r5, 0x322C
  crclr     6, 0x6
  bl        -0x42DEBC

.loc_0x50:
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
 * Address:	80458518
 * Size:	000034
 */
void directOn__Q23PSM15DirectorUpdatorFUc(void)
{
/*
.loc_0x0:
  rlwinm    r0,r4,0,24,31
  li        r4, 0x1
  lbz       r5, 0x9(r3)
  slw       r4, r4, r0
  and.      r0, r5, r4
  bnelr-    
  lbz       r0, 0x8(r3)
  or        r0, r0, r4
  stb       r0, 0x8(r3)
  lbz       r0, 0x9(r3)
  or        r0, r0, r4
  stb       r0, 0x9(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8045854C
 * Size:	000034
 */
void directOff__Q23PSM15DirectorUpdatorFUc(void)
{
/*
.loc_0x0:
  rlwinm    r0,r4,0,24,31
  li        r4, 0x1
  lbz       r5, 0x9(r3)
  slw       r4, r4, r0
  and.      r0, r5, r4
  bnelr-    
  lbz       r0, 0x8(r3)
  andc      r0, r0, r4
  stb       r0, 0x8(r3)
  lbz       r0, 0x9(r3)
  or        r0, r0, r4
  stb       r0, 0x9(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80458580
 * Size:	00012C
 */
void frameEndWork__Q23PSM15DirectorUpdatorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x118
  lwz       r0, 0x4(r31)
  li        r7, 0
  cmpwi     r0, 0x1
  beq-      .loc_0x80
  bge-      .loc_0xC0
  cmpwi     r0, 0
  bge-      .loc_0x40
  b         .loc_0xC0

.loc_0x40:
  lbz       r6, 0x0(r31)
  li        r8, 0
  li        r4, 0x1
  b         .loc_0x70

.loc_0x50:
  rlwinm    r0,r8,0,24,31
  lbz       r5, 0x8(r31)
  slw       r0, r4, r0
  and.      r0, r5, r0
  beq-      .loc_0x6C
  li        r7, 0x1
  b         .loc_0xC0

.loc_0x6C:
  addi      r8, r8, 0x1

.loc_0x70:
  rlwinm    r0,r8,0,24,31
  cmplw     r0, r6
  blt+      .loc_0x50
  b         .loc_0xC0

.loc_0x80:
  lbz       r6, 0x0(r31)
  li        r7, 0x1
  li        r8, 0
  li        r4, 0x1
  b         .loc_0xB4

.loc_0x94:
  rlwinm    r0,r8,0,24,31
  lbz       r5, 0x8(r31)
  slw       r0, r4, r0
  and.      r0, r5, r0
  bne-      .loc_0xB0
  li        r7, 0
  b         .loc_0xC0

.loc_0xB0:
  addi      r8, r8, 0x1

.loc_0xB4:
  rlwinm    r0,r8,0,24,31
  cmplw     r0, r6
  blt+      .loc_0x94

.loc_0xC0:
  rlwinm.   r0,r7,0,24,31
  beq-      .loc_0xEC
  bl        -0x115580
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x10C
  lwz       r3, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x10C

.loc_0xEC:
  bl        -0x1155A4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x10C
  lwz       r3, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x10C:
  li        r0, 0
  stb       r0, 0x8(r31)
  stb       r0, 0x9(r31)

.loc_0x118:
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
 * Size:	000044
 */
void PSMGetStageDirector(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804586AC
 * Size:	000148
 */
void PSMGetBattleDirector(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  subi      r30, r4, 0x3268
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x48
  addi      r3, r30, 0x64
  addi      r5, r30, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42E0B0

.loc_0x48:
  lwz       r29, -0x6780(r13)
  cmplwi    r29, 0
  bne-      .loc_0x68
  addi      r3, r30, 0x64
  addi      r5, r30, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42E0D0

.loc_0x68:
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  bne-      .loc_0x88
  addi      r3, r30, 0x70
  addi      r5, r30, 0x3C
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x42E0F0

.loc_0x88:
  lwz       r3, 0x4(r29)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0xA0
  li        r29, 0
  b         .loc_0xA8

.loc_0xA0:
  bl        -0x1230CC
  mr        r29, r3

.loc_0xA8:
  cmplwi    r29, 0
  bne-      .loc_0xB8
  li        r3, 0
  b         .loc_0x128

.loc_0xB8:
  mr        r3, r29
  li        r31, 0
  lwz       r12, 0x10(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x2
  beq-      .loc_0xFC
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  bne-      .loc_0x100

.loc_0xFC:
  li        r31, 0x1

.loc_0x100:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0x11C
  addi      r3, r30, 0x24
  addi      r5, r30, 0x3C
  li        r4, 0x32A
  crclr     6, 0x6
  bl        -0x42E184

.loc_0x11C:
  mr        r3, r29
  mr        r4, r28
  bl        -0x125C54

.loc_0x128:
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
 * Address:	........
 * Size:	000144
 */
void PSMGetCaveResultDirector(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void PSIs2PBattleStage()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804587F4
 * Size:	000108
 */
void PSMGetKehaiD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42E1EC

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42E20C

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42E22C

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42E250

.loc_0xA0:
  mr        r3, r30
  bl        0xEE7C
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  bne-      .loc_0xD4
  bl        -0x120C00
  cmplwi    r3, 0
  beq-      .loc_0xCC
  li        r4, 0x1
  bl        -0x125D3C
  b         .loc_0xF0

.loc_0xCC:
  li        r3, 0
  b         .loc_0xF0

.loc_0xD4:
  bl        -0x120C20
  cmplwi    r3, 0
  beq-      .loc_0xEC
  li        r4, 0x2
  bl        -0x125D5C
  b         .loc_0xF0

.loc_0xEC:
  li        r3, 0

.loc_0xF0:
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
 * Address:	804588FC
 * Size:	000108
 */
void PSMGetBattleD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42E2F4

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42E314

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42E334

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42E358

.loc_0xA0:
  mr        r3, r30
  bl        0xED74
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  bne-      .loc_0xD4
  bl        -0x120D08
  cmplwi    r3, 0
  beq-      .loc_0xCC
  li        r4, 0x2
  bl        -0x125E44
  b         .loc_0xF0

.loc_0xCC:
  li        r3, 0
  b         .loc_0xF0

.loc_0xD4:
  bl        -0x120D28
  cmplwi    r3, 0
  beq-      .loc_0xEC
  li        r4, 0x3
  bl        -0x125E64
  b         .loc_0xF0

.loc_0xEC:
  li        r3, 0

.loc_0xF0:
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
 * Address:	80458A04
 * Size:	000108
 */
void PSMGetEventD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42E3FC

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42E41C

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42E43C

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42E460

.loc_0xA0:
  mr        r3, r30
  bl        0xEC6C
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  bne-      .loc_0xD4
  bl        -0x120E10
  cmplwi    r3, 0
  beq-      .loc_0xCC
  li        r4, 0
  bl        -0x125F4C
  b         .loc_0xF0

.loc_0xCC:
  li        r3, 0
  b         .loc_0xF0

.loc_0xD4:
  bl        -0x120E30
  cmplwi    r3, 0
  beq-      .loc_0xEC
  li        r4, 0
  bl        -0x125F6C
  b         .loc_0xF0

.loc_0xEC:
  li        r3, 0

.loc_0xF0:
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
 * Address:	80458B0C
 * Size:	0000F0
 */
void PSMGetOtakaraEventD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42E504

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42E524

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42E544

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42E568

.loc_0xA0:
  mr        r3, r30
  bl        0xEB64
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  beq-      .loc_0xD4
  bl        -0x120F18
  cmplwi    r3, 0
  beq-      .loc_0xCC
  li        r4, 0x1
  bl        -0x126054
  b         .loc_0xD8

.loc_0xCC:
  li        r3, 0
  b         .loc_0xD8

.loc_0xD4:
  li        r3, 0

.loc_0xD8:
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
 * Address:	80458BFC
 * Size:	000194
 */
void PSMGetGroundD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42E5F4

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42E614

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42E634

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42E658

.loc_0xA0:
  mr        r3, r30
  bl        0xEA74
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  beq-      .loc_0x178
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42E68C

.loc_0xD4:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0xF4
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42E6AC

.loc_0xF4:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x114
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42E6CC

.loc_0x114:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0x138
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42E6F0

.loc_0x138:
  mr        r3, r30
  bl        0xE9DC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x178
  bl        -0x1210AC
  cmplwi    r3, 0
  beq-      .loc_0x170
  li        r4, 0x4
  bl        -0x1261E8
  b         .loc_0x17C

.loc_0x170:
  li        r3, 0
  b         .loc_0x17C

.loc_0x178:
  li        r3, 0

.loc_0x17C:
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
 * Address:	80458D90
 * Size:	0000F0
 */
void PSMGetPikminNumD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42E788

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42E7A8

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42E7C8

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42E7EC

.loc_0xA0:
  mr        r3, r30
  bl        0xE8E0
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  beq-      .loc_0xD4
  bl        -0x12119C
  cmplwi    r3, 0
  beq-      .loc_0xCC
  li        r4, 0x5
  bl        -0x1262D8
  b         .loc_0xD8

.loc_0xCC:
  li        r3, 0
  b         .loc_0xD8

.loc_0xD4:
  li        r3, 0

.loc_0xD8:
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
 * Address:	80458E80
 * Size:	0000F0
 */
void PSMGetDamageD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42E878

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42E898

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42E8B8

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42E8DC

.loc_0xA0:
  mr        r3, r30
  bl        0xE7F0
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  beq-      .loc_0xD4
  bl        -0x12128C
  cmplwi    r3, 0
  beq-      .loc_0xCC
  li        r4, 0x6
  bl        -0x1263C8
  b         .loc_0xD8

.loc_0xCC:
  li        r3, 0
  b         .loc_0xD8

.loc_0xD4:
  li        r3, 0

.loc_0xD8:
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
 * Address:	80458F70
 * Size:	0000F0
 */
void PSMGetLifeD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42E968

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42E988

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42E9A8

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42E9CC

.loc_0xA0:
  mr        r3, r30
  bl        0xE700
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  beq-      .loc_0xD4
  bl        -0x12137C
  cmplwi    r3, 0
  beq-      .loc_0xCC
  li        r4, 0x7
  bl        -0x1264B8
  b         .loc_0xD8

.loc_0xCC:
  li        r3, 0
  b         .loc_0xD8

.loc_0xD4:
  li        r3, 0

.loc_0xD8:
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
 * Address:	80459060
 * Size:	0000F0
 */
void PSMGetBeedamaForOrimerD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42EA58

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42EA78

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42EA98

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42EABC

.loc_0xA0:
  mr        r3, r30
  bl        0xE610
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  bne-      .loc_0xD4
  bl        -0x12146C
  cmplwi    r3, 0
  beq-      .loc_0xCC
  li        r4, 0x3
  bl        -0x1265A8
  b         .loc_0xD8

.loc_0xCC:
  li        r3, 0
  b         .loc_0xD8

.loc_0xD4:
  li        r3, 0

.loc_0xD8:
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
 * Address:	80459150
 * Size:	0000F0
 */
void PSMGetBeedamaForLugieD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42EB48

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42EB68

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42EB88

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42EBAC

.loc_0xA0:
  mr        r3, r30
  bl        0xE520
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  bne-      .loc_0xD4
  bl        -0x12155C
  cmplwi    r3, 0
  beq-      .loc_0xCC
  li        r4, 0x4
  bl        -0x126698
  b         .loc_0xD8

.loc_0xCC:
  li        r3, 0
  b         .loc_0xD8

.loc_0xD4:
  li        r3, 0

.loc_0xD8:
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
 * Address:	80459240
 * Size:	0000F0
 */
void PSMGetIchouForOrimerD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42EC38

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42EC58

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42EC78

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42EC9C

.loc_0xA0:
  mr        r3, r30
  bl        0xE430
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  bne-      .loc_0xD4
  bl        -0x12164C
  cmplwi    r3, 0
  beq-      .loc_0xCC
  li        r4, 0x5
  bl        -0x126788
  b         .loc_0xD8

.loc_0xCC:
  li        r3, 0
  b         .loc_0xD8

.loc_0xD4:
  li        r3, 0

.loc_0xD8:
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
 * Address:	80459330
 * Size:	0000F0
 */
void PSMGetIchouForLugieD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42ED28

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42ED48

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42ED68

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42ED8C

.loc_0xA0:
  mr        r3, r30
  bl        0xE340
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  bne-      .loc_0xD4
  bl        -0x12173C
  cmplwi    r3, 0
  beq-      .loc_0xCC
  li        r4, 0x6
  bl        -0x126878
  b         .loc_0xD8

.loc_0xCC:
  li        r3, 0
  b         .loc_0xD8

.loc_0xD4:
  li        r3, 0

.loc_0xD8:
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
 * Address:	80459420
 * Size:	0000F0
 */
void PSMGetPikiBattleD()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x3268
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x42EE18

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x64
  addi      r5, r31, 0x3C
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x42EE38

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x70
  addi      r5, r31, 0x3C
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x42EE58

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0x70
  addi      r5, r31, 0x7C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x42EE7C

.loc_0xA0:
  mr        r3, r30
  bl        0xE250
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x7
  bne-      .loc_0xD4
  bl        -0x12182C
  cmplwi    r3, 0
  beq-      .loc_0xCC
  li        r4, 0x7
  bl        -0x126968
  b         .loc_0xD8

.loc_0xCC:
  li        r3, 0
  b         .loc_0xD8

.loc_0xD4:
  li        r3, 0

.loc_0xD8:
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
 * Address:	80459510
 * Size:	0000A0
 */
void __dt__Q23PSM13ExiteDirectorFv(void)
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
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x22B0
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x2068
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39F384

.loc_0x74:
  extsh.    r0, r31
  ble-      .loc_0x84
  mr        r3, r30
  bl        -0x4354DC

.loc_0x84:
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
 * Address:	804595B0
 * Size:	000004
 */
void onSetMinDistObj__Q23PSM20ActorDirector_ScaledFPQ24Game8Creature(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	804595B4
 * Size:	000008
 */
void is1PGame__Q23PSM11ObjCalcBaseFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	804595BC
 * Size:	000008
 */
void is2PBattle__Q23PSM16OtakaraEventLinkFv(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	804595C4
 * Size:	0000A0
 */
void __dt__Q23PSM17PikAttackDirectorFv(void)
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
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x2278
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x2068
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39F438

.loc_0x74:
  extsh.    r0, r31
  ble-      .loc_0x84
  mr        r3, r30
  bl        -0x435590

.loc_0x84:
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
 * Address:	........
 * Size:	0000B0
 */
void __dt__Q23PSM27ActorDirector_IchouNBeedamaFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80459664
 * Size:	0000D0
 */
void __dt__Q23PSM19ActorDirector_KehaiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  beq-      .loc_0xB4
  lis       r4, 0x804F
  subi      r0, r4, 0x2240
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r4, 0x804F
  subi      r0, r4, 0x21B0
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r4, 0x804F
  subi      r0, r4, 0x2168
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r4, 0x804F
  subi      r0, r4, 0x20DC
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r4, 0x804F
  subi      r0, r4, 0x2068
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r31)
  bl        -0x39F508

.loc_0xA4:
  extsh.    r0, r30
  ble-      .loc_0xB4
  mr        r3, r31
  bl        -0x435660

.loc_0xB4:
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
 * Address:	80459734
 * Size:	0000D0
 */
void __dt__Q23PSM20ActorDirector_BattleFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  beq-      .loc_0xB4
  lis       r4, 0x804F
  subi      r0, r4, 0x21F8
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r4, 0x804F
  subi      r0, r4, 0x21B0
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r4, 0x804F
  subi      r0, r4, 0x2168
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r4, 0x804F
  subi      r0, r4, 0x20DC
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r4, 0x804F
  subi      r0, r4, 0x2068
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r31)
  beq-      .loc_0xA4
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r31)
  bl        -0x39F5D8

.loc_0xA4:
  extsh.    r0, r30
  ble-      .loc_0xB4
  mr        r3, r31
  bl        -0x435730

.loc_0xB4:
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
 * Address:	80459804
 * Size:	0000C0
 */
void __dt__Q23PSM19ActorDirector_EnemyFv(void)
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
  beq-      .loc_0xA4
  lis       r4, 0x804F
  subi      r0, r4, 0x21B0
  stw       r0, 0x0(r30)
  beq-      .loc_0x94
  lis       r4, 0x804F
  subi      r0, r4, 0x2168
  stw       r0, 0x0(r30)
  beq-      .loc_0x94
  lis       r4, 0x804F
  subi      r0, r4, 0x20DC
  stw       r0, 0x0(r30)
  beq-      .loc_0x94
  lis       r4, 0x804F
  subi      r0, r4, 0x2068
  stw       r0, 0x0(r30)
  beq-      .loc_0x94
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x94
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x94
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39F698

.loc_0x94:
  extsh.    r0, r31
  ble-      .loc_0xA4
  mr        r3, r30
  bl        -0x4357F0

.loc_0xA4:
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
 * Address:	804598C4
 * Size:	0000A0
 */
void __dt__Q23PSM21ActorDirector_TrackOnFv(void)
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
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x2128
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x2068
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39F738

.loc_0x74:
  extsh.    r0, r31
  ble-      .loc_0x84
  mr        r3, r30
  bl        -0x435890

.loc_0x84:
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
 * Address:	80459964
 * Size:	0000A0
 */
void __dt__Q23PSM22TrackOnDirector_VotingFv(void)
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
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x20A0
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x2068
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39F7D8

.loc_0x74:
  extsh.    r0, r31
  ble-      .loc_0x84
  mr        r3, r30
  bl        -0x435930

.loc_0x84:
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
 * Address:	80459A04
 * Size:	0000A0
 */
void __dt__Q23PSM28PikminNumberDirector_AutoBgmFv(void)
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
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x2030
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x1FF8
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39F878

.loc_0x74:
  extsh.    r0, r31
  ble-      .loc_0x84
  mr        r3, r30
  bl        -0x4359D0

.loc_0x84:
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
 * Address:	80459AA4
 * Size:	0000A0
 */
void __dt__Q23PSM25ActorDirector_TempoChangeFv(void)
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
  beq-      .loc_0x84
  lis       r4, 0x804F
  subi      r0, r4, 0x1FC0
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x1F88
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x1F50
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39F918

.loc_0x74:
  extsh.    r0, r31
  ble-      .loc_0x84
  mr        r3, r30
  bl        -0x435A70

.loc_0x84:
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
 * Address:	80459B44
 * Size:	000090
 */
void __dt__Q23PSM14DamageDirectorFv(void)
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
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x1F18
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x1EE0
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804E
  subi      r0, r4, 0x4FF8
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x39F9A8

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x435B00

.loc_0x74:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}