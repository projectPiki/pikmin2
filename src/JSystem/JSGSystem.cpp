

/*
 * --INFO--
 * Address:	8009876C
 * Size:	000060
 */
void JStage::TSystem::__dt(void)
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
  addi      r0, r5, 0x3598
  stw       r0, 0x0(r30)
  bl        0x138
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x746F8

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
 * Address:	800987CC
 * Size:	000008
 */
void JStage::TSystem::JSGFGetType( const
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	800987D4
 * Size:	000008
 */
void JStage::TSystem::JSGFindObject( const(JStage::TObject **, char const *, JStage::TEObject))
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	800987DC
 * Size:	000008
 */
void JStage::TSystem::JSGCreateObject( (char const *, JStage::TEObject, unsigned long))
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800987E4
 * Size:	000004
 */
void JStage::TSystem::JSGDestroyObject( (JStage::TObject *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800987E8
 * Size:	000008
 */
void JStage::TSystem::JSGGetSystemData( (unsigned long))
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800987F0
 * Size:	000004
 */
void JStage::TSystem::JSGSetSystemData( (unsigned long, unsigned long))
{
/*
.loc_0x0:
  blr
*/
}
