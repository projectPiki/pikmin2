

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void JAInter::ObjectBase::__ct( (Vec *, JKRHeap *, unsigned char))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B95FC
 * Size:	000074
 */
void JAInter::ObjectBase::__dt(void)
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
  beq-      .loc_0x58
  lis       r4, 0x804A
  addi      r0, r4, 0x6694
  stw       r0, 0x0(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  li        r4, 0
  bl        -0x9C60C
  extsh.    r0, r31
  ble-      .loc_0x58
  mr        r3, r30
  bl        -0x9559C

.loc_0x58:
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
 * Address:	800B9670
 * Size:	000164
 */
void JAInter::ObjectBase::startSound( (unsigned long, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm.   r0,r4,0,20,20
  stmw      r27, 0xC(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r31, r5
  li        r28, 0
  bne-      .loc_0x3C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3

.loc_0x3C:
  cmplwi    r28, 0
  bne-      .loc_0x5C
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3

.loc_0x5C:
  cmplwi    r28, 0
  beq-      .loc_0x8C
  lwz       r3, -0x7498(r13)
  mr        r4, r30
  lwz       r6, 0x24(r29)
  mr        r5, r28
  mr        r7, r31
  li        r8, 0
  li        r9, 0x4
  bl        -0xA3E84
  lwz       r3, 0x0(r28)
  b         .loc_0x150

.loc_0x8C:
  lbz       r5, 0x19(r29)
  li        r28, 0xFF
  li        r27, 0xFF
  li        r6, 0
  b         .loc_0xCC

.loc_0xA0:
  lwz       r4, 0x1C(r29)
  rlwinm    r3,r6,2,22,29
  rlwinm    r0,r28,0,24,31
  lwzx      r3, r4, r3
  lwz       r3, 0x44(r3)
  lbz       r3, 0x4(r3)
  cmplw     r3, r0
  bgt-      .loc_0xC8
  mr        r28, r3
  mr        r27, r6

.loc_0xC8:
  addi      r6, r6, 0x1

.loc_0xCC:
  rlwinm    r0,r6,0,24,31
  cmplw     r0, r5
  blt+      .loc_0xA0
  rlwinm    r0,r27,0,24,31
  cmplwi    r0, 0xFF
  beq-      .loc_0x14C
  mr        r3, r30
  bl        -0x2240
  lbz       r3, 0x4(r3)
  rlwinm    r0,r28,0,24,31
  cmplw     r3, r0
  blt-      .loc_0x14C
  mr        r3, r29
  mr        r4, r27
  lwz       r12, 0x0(r29)
  li        r5, 0
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1C(r29)
  rlwinm    r28,r27,2,22,29
  lwz       r3, -0x7498(r13)
  mr        r4, r30
  lwz       r6, 0x24(r29)
  mr        r7, r31
  add       r5, r0, r28
  li        r8, 0
  li        r9, 0x4
  bl        -0xA3F40
  lwz       r3, 0x1C(r29)
  lwzx      r3, r3, r28
  b         .loc_0x150

.loc_0x14C:
  li        r3, 0

.loc_0x150:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800B97D4
 * Size:	000044
 */
void JAInter::ObjectBase::handleStop( (unsigned char, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,2,22,29
  lwz       r3, 0x1C(r3)
  lwzx      r3, r3, r0
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x10(r3)
  mr        r4, r5
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800B9818
 * Size:	000048
 */
void JAInter::ObjectBase::startSound( (unsigned char, unsigned long, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r9, r3
  mr        r7, r6
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,2,22,29
  mr        r4, r5
  lwz       r8, 0x1C(r3)
  lwz       r6, 0x24(r9)
  li        r9, 0x4
  add       r5, r8, r0
  lwz       r3, -0x7498(r13)
  li        r8, 0
  bl        -0xA3FE0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800B9860
 * Size:	000044
 */
void JAInter::ObjectBase::startSound( (JAISound **, unsigned long, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r8, r3
  mr        r7, r6
  stw       r0, 0x14(r1)
  mr        r0, r4
  mr        r4, r5
  li        r9, 0x4
  lwz       r6, 0x24(r8)
  mr        r5, r0
  lwz       r3, -0x7498(r13)
  li        r8, 0
  bl        -0xA4024
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800B98A4
 * Size:	000060
 */
void JAInter::ObjectBase::stopSound( (unsigned long, unsigned long))
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
  bl        0x1E0
  rlwinm    r0,r3,0,24,31
  mr        r4, r3
  cmplwi    r0, 0xFF
  beq-      .loc_0x48
  lwz       r12, 0x0(r30)
  mr        r3, r30
  mr        r5, r31
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     

.loc_0x48:
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
 * Address:	800B9904
 * Size:	000068
 */
void JAInter::ObjectBase::stopAllSound(void)
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
  b         .loc_0x40

.loc_0x20:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1

.loc_0x40:
  lbz       r0, 0x19(r30)
  rlwinm    r3,r31,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x20
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
 * Address:	800B996C
 * Size:	000044
 */
void JAInter::ObjectBase::disable(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0x18(r31)
  stw       r0, 0x20(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800B99B0
 * Size:	000040
 */
void JAInter::ObjectBase::dispose(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x1C(r31)
  bl        -0x95900
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800B99F0
 * Size:	00005C
 */
void JAInter::ObjectBase::getFreeSoundHandlePointer(void)
{
/*
.loc_0x0:
  lbz       r0, 0x19(r3)
  li        r8, 0
  li        r6, 0
  li        r4, 0x1
  mtctr     r0
  cmplwi    r0, 0
  ble-      .loc_0x54

.loc_0x1C:
  lwz       r7, 0x1C(r3)
  lwzx      r0, r7, r6
  cmplwi    r0, 0
  bne-      .loc_0x48
  lwz       r5, 0x20(r3)
  slw       r0, r4, r8
  and.      r0, r5, r0
  bne-      .loc_0x48
  rlwinm    r0,r8,2,0,29
  add       r3, r7, r0
  blr       

.loc_0x48:
  addi      r6, r6, 0x4
  addi      r8, r8, 0x1
  bdnz+     .loc_0x1C

.loc_0x54:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JAInter::ObjectBase::getFreeSoundHandleNo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B9A4C
 * Size:	000054
 */
void JAInter::ObjectBase::getUseSoundHandlePointer( (unsigned long))
{
/*
.loc_0x0:
  lbz       r0, 0x19(r3)
  li        r8, 0
  li        r5, 0
  mtctr     r0
  cmplwi    r0, 0
  ble-      .loc_0x4C

.loc_0x18:
  lwz       r7, 0x1C(r3)
  lwzx      r6, r7, r5
  cmplwi    r6, 0
  beq-      .loc_0x40
  lwz       r0, 0x20(r6)
  cmplw     r4, r0
  bne-      .loc_0x40
  rlwinm    r0,r8,2,0,29
  add       r3, r7, r0
  blr       

.loc_0x40:
  addi      r5, r5, 0x4
  addi      r8, r8, 0x1
  bdnz+     .loc_0x18

.loc_0x4C:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800B9AA0
 * Size:	00004C
 */
void JAInter::ObjectBase::getUseSoundHandleNo( (unsigned long))
{
/*
.loc_0x0:
  lbz       r6, 0x19(r3)
  li        r7, 0
  b         .loc_0x38

.loc_0xC:
  lwz       r5, 0x1C(r3)
  rlwinm    r0,r7,2,22,29
  lwzx      r5, r5, r0
  cmplwi    r5, 0
  beq-      .loc_0x34
  lwz       r0, 0x20(r5)
  cmplw     r4, r0
  bne-      .loc_0x34
  mr        r3, r7
  blr       

.loc_0x34:
  addi      r7, r7, 0x1

.loc_0x38:
  rlwinm    r0,r7,0,24,31
  cmplw     r0, r6
  blt+      .loc_0xC
  li        r3, 0xFF
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JAInter::ObjectBase::reserveSoundHandle( (unsigned char))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAInter::ObjectBase::cancelSoundHandle( (unsigned char))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B9AEC
 * Size:	0000F4
 */
void JAInter::Object::__ct( (Vec *, JKRHeap *, unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  bl        -0x9CB4C
  lis       r3, 0x804A
  cmplwi    r31, 0
  addi      r0, r3, 0x6694
  stw       r0, 0x0(r28)
  bne-      .loc_0x48
  lwz       r31, -0x77D4(r13)

.loc_0x48:
  stb       r30, 0x19(r28)
  mr        r4, r31
  li        r5, 0
  lbz       r0, 0x19(r28)
  rlwinm    r3,r0,2,0,29
  bl        -0x95B00
  li        r5, 0
  stw       r3, 0x1C(r28)
  mr        r4, r5
  b         .loc_0x80

.loc_0x70:
  lwz       r3, 0x1C(r28)
  rlwinm    r0,r5,2,22,29
  addi      r5, r5, 0x1
  stwx      r4, r3, r0

.loc_0x80:
  lbz       r0, 0x19(r28)
  rlwinm    r3,r5,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x70
  stw       r29, 0x24(r28)
  li        r0, 0
  lis       r3, 0x804A
  li        r4, 0x1
  stw       r0, 0x20(r28)
  addi      r0, r3, 0x6658
  lfs       f1, -0x7308(r2)
  mr        r3, r28
  stb       r4, 0x18(r28)
  lfs       f0, -0x7304(r2)
  stw       r0, 0x0(r28)
  stfs      f1, 0x28(r28)
  stfs      f1, 0x2C(r28)
  stfs      f1, 0x30(r28)
  stfs      f1, 0x34(r28)
  stfs      f0, 0x38(r28)
  stfs      f1, 0x3C(r28)
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
 * Address:	800B9BE0
 * Size:	000084
 */
void JAInter::Object::__dt(void)
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
  beq-      .loc_0x68
  lis       r4, 0x804A
  addi      r0, r4, 0x6658
  stw       r0, 0x0(r30)
  beq-      .loc_0x58
  lis       r4, 0x804A
  addi      r0, r4, 0x6694
  stw       r0, 0x0(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  li        r4, 0
  bl        -0x9CC00

.loc_0x58:
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x95B90

.loc_0x68:
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
 * Address:	800B9C64
 * Size:	00021C
 */
void JAInter::Object::startSound( (unsigned long, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  rlwinm.   r0,r4,0,20,20
  stmw      r27, 0x3C(r1)
  mr        r28, r4
  mr        r27, r3
  mr        r29, r5
  li        r30, 0
  bne-      .loc_0x3C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3

.loc_0x3C:
  cmplwi    r30, 0
  bne-      .loc_0x5C
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3

.loc_0x5C:
  cmplwi    r30, 0
  beq-      .loc_0xD0
  cmplwi    r27, 0
  lwz       r4, 0x24(r27)
  bne-      .loc_0x78
  mr        r3, r4
  b         .loc_0x7C

.loc_0x78:
  mr        r3, r27

.loc_0x7C:
  li        r0, 0
  cmplwi    r4, 0
  stw       r3, 0x1C(r1)
  stw       r4, 0x20(r1)
  stw       r0, 0x24(r1)
  stw       r0, 0x28(r1)
  bne-      .loc_0xA4
  li        r0, 0x1
  stb       r0, 0x2C(r1)
  b         .loc_0xAC

.loc_0xA4:
  li        r0, 0x1
  stb       r0, 0x2C(r1)

.loc_0xAC:
  lwz       r3, -0x7498(r13)
  mr        r4, r28
  mr        r5, r30
  mr        r7, r29
  addi      r6, r1, 0x1C
  li        r8, 0x4
  bl        -0xA445C
  lwz       r3, 0x0(r30)
  b         .loc_0x208

.loc_0xD0:
  lbz       r6, 0x19(r27)
  li        r31, 0xFF
  li        r30, 0xFF
  li        r7, 0
  li        r5, 0x1
  b         .loc_0x128

.loc_0xE8:
  rlwinm    r0,r7,0,24,31
  lwz       r3, 0x20(r27)
  slw       r0, r5, r0
  and.      r0, r3, r0
  bne-      .loc_0x124
  lwz       r4, 0x1C(r27)
  rlwinm    r3,r7,2,22,29
  rlwinm    r0,r31,0,24,31
  lwzx      r3, r4, r3
  lwz       r3, 0x44(r3)
  lbz       r3, 0x4(r3)
  cmplw     r3, r0
  bgt-      .loc_0x124
  mr        r31, r3
  mr        r30, r7

.loc_0x124:
  addi      r7, r7, 0x1

.loc_0x128:
  rlwinm    r0,r7,0,24,31
  cmplw     r0, r6
  blt+      .loc_0xE8
  rlwinm    r0,r30,0,24,31
  cmplwi    r0, 0xFF
  beq-      .loc_0x204
  mr        r3, r28
  bl        -0x2890
  lbz       r3, 0x4(r3)
  rlwinm    r0,r31,0,24,31
  cmplw     r3, r0
  blt-      .loc_0x204
  mr        r3, r27
  li        r4, 0
  lwz       r12, 0x0(r27)
  li        r5, 0
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  cmplwi    r27, 0
  lwz       r4, 0x24(r27)
  bne-      .loc_0x188
  mr        r3, r4
  b         .loc_0x18C

.loc_0x188:
  mr        r3, r27

.loc_0x18C:
  li        r0, 0
  cmplwi    r4, 0
  stw       r3, 0x8(r1)
  stw       r4, 0xC(r1)
  stw       r0, 0x10(r1)
  stw       r0, 0x14(r1)
  bne-      .loc_0x1B4
  li        r0, 0x1
  stb       r0, 0x18(r1)
  b         .loc_0x1BC

.loc_0x1B4:
  li        r0, 0x1
  stb       r0, 0x18(r1)

.loc_0x1BC:
  lwz       r0, 0x1C(r27)
  rlwinm    r30,r30,2,22,29
  lwz       r3, -0x7498(r13)
  mr        r4, r28
  mr        r7, r29
  add       r5, r0, r30
  addi      r6, r1, 0x8
  li        r8, 0x4
  bl        -0xA4574
  lwz       r3, 0x1C(r27)
  lwzx      r3, r3, r30
  cmplwi    r3, 0
  beq-      .loc_0x1F8
  li        r0, 0x1
  stb       r0, 0x1A(r3)

.loc_0x1F8:
  lwz       r3, 0x1C(r27)
  lwzx      r3, r3, r30
  b         .loc_0x208

.loc_0x204:
  li        r3, 0

.loc_0x208:
  lmw       r27, 0x3C(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	800B9E80
 * Size:	000158
 */
void JAInter::Object::disable(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  li        r29, 0
  stw       r28, 0x10(r1)
  mr        r28, r3
  b         .loc_0x120

.loc_0x2C:
  lwz       r3, 0x1C(r28)
  rlwinm    r31,r29,2,22,29
  lwzx      r3, r3, r31
  cmplwi    r3, 0
  beq-      .loc_0x11C
  lwz       r0, 0x20(r3)
  rlwinm.   r0,r0,0,0,1
  bne-      .loc_0x100
  lis       r4, 0x1
  subi      r4, r4, 0x8000
  bl        -0x6380
  cmplwi    r3, 0
  beq-      .loc_0x100
  cmplwi    r30, 0
  bne-      .loc_0x74
  bl        -0xC384
  bl        -0xC980
  mr        r30, r3

.loc_0x74:
  cmplwi    r30, 0
  beq-      .loc_0xE0
  lwz       r3, 0x24(r28)
  li        r5, 0
  addi      r4, r30, 0xC
  addi      r0, r30, 0x8
  lfs       f0, 0x0(r3)
  stfs      f0, 0xC(r30)
  lfs       f0, 0x4(r3)
  stfs      f0, 0x10(r30)
  lfs       f0, 0x8(r3)
  stfs      f0, 0x14(r30)
  lwz       r3, 0x1C(r28)
  lwzx      r3, r3, r31
  stw       r3, 0x8(r30)
  lwz       r3, 0x1C(r28)
  lwzx      r3, r3, r31
  stb       r5, 0x1A(r3)
  lwz       r3, 0x1C(r28)
  lwzx      r3, r3, r31
  stw       r4, 0x3C(r3)
  lwz       r3, 0x1C(r28)
  lwzx      r3, r3, r31
  stw       r0, 0x40(r3)
  lwz       r3, 0x1C(r28)
  stwx      r5, r3, r31
  b         .loc_0x11C

.loc_0xE0:
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  li        r5, 0
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x11C

.loc_0x100:
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  li        r5, 0
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     

.loc_0x11C:
  addi      r29, r29, 0x1

.loc_0x120:
  lbz       r0, 0x19(r28)
  rlwinm    r3,r29,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x2C
  li        r0, 0
  stb       r0, 0x18(r28)
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
 * Address:	800B9FD8
 * Size:	000214
 */
void JAInter::Object::loop(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  li        r29, 0
  stw       r28, 0x10(r1)
  mr        r28, r3
  b         .loc_0x1E8

.loc_0x30:
  lwz       r3, 0x1C(r28)
  lwzx      r0, r3, r31
  cmplwi    r0, 0
  beq-      .loc_0x1E0
  rlwinm.   r0,r30,0,24,31
  bne-      .loc_0x164
  lwz       r4, 0x24(r28)
  cmplwi    r4, 0
  beq-      .loc_0x164
  lwz       r3, -0x7498(r13)
  addi      r5, r28, 0x28
  lwz       r3, 0x4(r3)
  lwz       r3, 0x8(r3)
  bl        0x30B9C
  lfs       f1, 0x28(r28)
  lfs       f0, 0x2C(r28)
  fmuls     f2, f1, f1
  lfs       f3, 0x30(r28)
  fmuls     f1, f0, f0
  lfs       f0, -0x7308(r2)
  fmuls     f3, f3, f3
  fadds     f1, f2, f1
  fadds     f4, f3, f1
  fcmpo     cr0, f4, f0
  ble-      .loc_0xDC
  fsqrte    f1, f4
  lfd       f3, -0x7300(r2)
  lfd       f2, -0x72F8(r2)
  fmul      f0, f1, f1
  fmul      f1, f3, f1
  fnmsub    f0, f4, f0, f2
  fmul      f1, f1, f0
  fmul      f0, f1, f1
  fmul      f1, f3, f1
  fnmsub    f0, f4, f0, f2
  fmul      f1, f1, f0
  fmul      f0, f1, f1
  fmul      f1, f3, f1
  fnmsub    f0, f4, f0, f2
  fmul      f0, f1, f0
  fmul      f4, f4, f0
  frsp      f4, f4
  b         .loc_0x160

.loc_0xDC:
  lfd       f0, -0x72F0(r2)
  fcmpo     cr0, f4, f0
  bge-      .loc_0xF4
  lis       r3, 0x8051
  lfs       f4, 0x48B0(r3)
  b         .loc_0x160

.loc_0xF4:
  stfs      f4, 0x8(r1)
  lis       r0, 0x7F80
  lwz       r4, 0x8(r1)
  rlwinm    r3,r4,0,1,8
  cmpw      r3, r0
  beq-      .loc_0x11C
  bge-      .loc_0x14C
  cmpwi     r3, 0
  beq-      .loc_0x134
  b         .loc_0x14C

.loc_0x11C:
  rlwinm.   r0,r4,0,9,31
  beq-      .loc_0x12C
  li        r0, 0x1
  b         .loc_0x150

.loc_0x12C:
  li        r0, 0x2
  b         .loc_0x150

.loc_0x134:
  rlwinm.   r0,r4,0,9,31
  beq-      .loc_0x144
  li        r0, 0x5
  b         .loc_0x150

.loc_0x144:
  li        r0, 0x3
  b         .loc_0x150

.loc_0x14C:
  li        r0, 0x4

.loc_0x150:
  cmpwi     r0, 0x1
  bne-      .loc_0x160
  lis       r3, 0x8051
  lfs       f4, 0x48B0(r3)

.loc_0x160:
  stfs      f4, 0x34(r28)

.loc_0x164:
  lwz       r3, 0x1C(r28)
  rlwinm.   r0,r30,0,24,31
  lfs       f0, 0x28(r28)
  lwzx      r3, r3, r31
  lwz       r3, 0x34(r3)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x2C(r28)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x30(r28)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x34(r28)
  stfs      f0, 0x18(r3)
  bne-      .loc_0x1E0
  lwz       r0, 0x24(r28)
  cmplwi    r0, 0
  beq-      .loc_0x1DC
  lwz       r3, 0x1C(r28)
  lwzx      r3, r3, r31
  lwz       r12, 0x10(r3)
  lwz       r12, 0xC0(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x38(r28)
  lwz       r3, 0x1C(r28)
  lwzx      r3, r3, r31
  lwz       r12, 0x10(r3)
  lwz       r12, 0xC4(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x3C(r28)

.loc_0x1DC:
  li        r30, 0x1

.loc_0x1E0:
  addi      r31, r31, 0x4
  addi      r29, r29, 0x1

.loc_0x1E8:
  lbz       r0, 0x19(r28)
  cmplw     r29, r0
  blt+      .loc_0x30
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
