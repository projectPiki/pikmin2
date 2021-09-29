

/*
 * --INFO--
 * Address:	80098990
 * Size:	000060
 */
void __dt__Q26JStage6TActorFv(void)
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
  beq-      .loc_0x44
  lis       r5, 0x804A
  li        r4, 0
  addi      r0, r5, 0x36C0
  stw       r0, 0x0(r30)
  bl        -0xEC
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x7491C

.loc_0x44:
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
 * Address:	800989F0
 * Size:	000008
 */
void JSGFGetType__Q26JStage6TActorCFv(void)
{
/*
.loc_0x0:
  li        r3, 0x2
  blr
*/
}

/*
 * --INFO--
 * Address:	800989F8
 * Size:	000004
 */
void JSGGetTranslation__Q26JStage6TActorCFP3Vec(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800989FC
 * Size:	000004
 */
void JSGSetTranslation__Q26JStage6TActorFRC3Vec(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A00
 * Size:	000004
 */
void JSGGetScaling__Q26JStage6TActorCFP3Vec(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A04
 * Size:	000004
 */
void JSGSetScaling__Q26JStage6TActorFRC3Vec(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A08
 * Size:	000004
 */
void JSGGetRotation__Q26JStage6TActorCFP3Vec(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A0C
 * Size:	000004
 */
void JSGSetRotation__Q26JStage6TActorFRC3Vec(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A10
 * Size:	000008
 */
void JSGGetShape__Q26JStage6TActorCFv(void)
{
/*
.loc_0x0:
  li        r3, -0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A18
 * Size:	000004
 */
void JSGSetShape__Q26JStage6TActorFUl(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A1C
 * Size:	000008
 */
void JSGGetAnimation__Q26JStage6TActorCFv(void)
{
/*
.loc_0x0:
  li        r3, -0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A24
 * Size:	000004
 */
void JSGSetAnimation__Q26JStage6TActorFUl(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A28
 * Size:	000008
 */
void JSGGetAnimationFrame__Q26JStage6TActorCFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x76E0(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A30
 * Size:	000004
 */
void JSGSetAnimationFrame__Q26JStage6TActorFf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A34
 * Size:	000008
 */
void JSGGetAnimationFrameMax__Q26JStage6TActorCFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x76E0(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A3C
 * Size:	000008
 */
void JSGGetAnimationTransition__Q26JStage6TActorCFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x76E0(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A44
 * Size:	000004
 */
void JSGSetAnimationTransition__Q26JStage6TActorFf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A48
 * Size:	000008
 */
void JSGGetTextureAnimation__Q26JStage6TActorCFv(void)
{
/*
.loc_0x0:
  li        r3, -0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A50
 * Size:	000004
 */
void JSGSetTextureAnimation__Q26JStage6TActorFUl(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A54
 * Size:	000008
 */
void JSGGetTextureAnimationFrame__Q26JStage6TActorCFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x76E0(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A5C
 * Size:	000004
 */
void JSGSetTextureAnimationFrame__Q26JStage6TActorFf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80098A60
 * Size:	000008
 */
void JSGGetTextureAnimationFrameMax__Q26JStage6TActorCFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x76E0(r2)
  blr
*/
}