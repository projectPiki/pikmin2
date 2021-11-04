#include "types.h"

/*
 * --INFO--
 * Address:	800A8FA4
 * Size:	000090
 */
void JASAramStream::initSystem(unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x800B
	  stw       r0, 0x14(r1)
	  subi      r0, r5, 0x6548
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r0
	  bl        -0x45C4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  lwz       r0, -0x74E8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  bl        -0x265C
	  stw       r3, -0x74E8(r13)

	.loc_0x4C:
	  addi      r0, r30, 0x20
	  lwz       r4, -0x7548(r13)
	  mullw     r3, r0, r31
	  li        r5, 0x20
	  bl        -0x84FB8
	  li        r0, 0
	  stw       r3, -0x74E4(r13)
	  stw       r30, -0x74E0(r13)
	  stw       r31, -0x74DC(r13)
	  stb       r0, -0x74D8(r13)
	  stb       r0, -0x74D7(r13)

	.loc_0x78:
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
 * Size:	000008
 */
void JASAramStream::setLoadThread(JASTaskThread*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A9034
 * Size:	000158
 */
JASAramStream::JASAramStream()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lfs       f3, -0x74B0(r2)
	  stw       r0, 0x198(r3)
	  lfs       f2, -0x74AC(r2)
	  stb       r0, 0x19C(r3)
	  lfs       f1, -0x74A8(r2)
	  stb       r0, 0x19D(r3)
	  lfs       f0, -0x74B0(r2)
	  stb       r0, 0x19E(r3)
	  stw       r0, 0x1A0(r3)
	  stw       r0, 0x1A4(r3)
	  stw       r0, 0x1A8(r3)
	  stw       r0, 0x1AC(r3)
	  stb       r0, 0x1B0(r3)
	  stw       r0, 0x1B4(r3)
	  stfs      f3, 0x1B8(r3)
	  stw       r0, 0x1F8(r3)
	  stw       r0, 0x1FC(r3)
	  stw       r0, 0x200(r3)
	  stb       r0, 0x204(r3)
	  stw       r0, 0x208(r3)
	  stw       r0, 0x21C(r3)
	  stw       r0, 0x238(r3)
	  stw       r0, 0x23C(r3)
	  stw       r0, 0x240(r3)
	  stw       r0, 0x244(r3)
	  sth       r0, 0x248(r3)
	  sth       r0, 0x24A(r3)
	  stw       r0, 0x24C(r3)
	  stw       r0, 0x250(r3)
	  stw       r0, 0x254(r3)
	  stb       r0, 0x258(r3)
	  stw       r0, 0x25C(r3)
	  stw       r0, 0x260(r3)
	  stfs      f2, 0x264(r3)
	  stfs      f2, 0x268(r3)
	  stb       r0, 0x2D8(r3)
	  stw       r0, 0x180(r3)
	  sth       r0, 0x220(r3)
	  sth       r0, 0x22C(r3)
	  stfs      f2, 0x26C(r3)
	  stfs      f1, 0x284(r3)
	  stfs      f0, 0x29C(r3)
	  stfs      f0, 0x2B4(r3)
	  stw       r0, 0x184(r3)
	  sth       r0, 0x222(r3)
	  sth       r0, 0x22E(r3)
	  stfs      f2, 0x270(r3)
	  stfs      f1, 0x288(r3)
	  stfs      f0, 0x2A0(r3)
	  stfs      f0, 0x2B8(r3)
	  stw       r0, 0x188(r3)
	  sth       r0, 0x224(r3)
	  sth       r0, 0x230(r3)
	  stfs      f2, 0x274(r3)
	  stfs      f1, 0x28C(r3)
	  stfs      f0, 0x2A4(r3)
	  stfs      f0, 0x2BC(r3)
	  stw       r0, 0x18C(r3)
	  sth       r0, 0x226(r3)
	  sth       r0, 0x232(r3)
	  stfs      f2, 0x278(r3)
	  stfs      f1, 0x290(r3)
	  stfs      f0, 0x2A8(r3)
	  stfs      f0, 0x2C0(r3)
	  stw       r0, 0x190(r3)
	  sth       r0, 0x228(r3)
	  sth       r0, 0x234(r3)
	  stfs      f2, 0x27C(r3)
	  stfs      f1, 0x294(r3)
	  stfs      f0, 0x2AC(r3)
	  stfs      f0, 0x2C4(r3)
	  stw       r0, 0x194(r3)
	  sth       r0, 0x22A(r3)
	  sth       r0, 0x236(r3)
	  stfs      f2, 0x280(r3)
	  stfs      f1, 0x298(r3)
	  stfs      f0, 0x2B0(r3)
	  stfs      f0, 0x2C8(r3)
	  sth       r0, 0x2CC(r3)
	  sth       r0, 0x2CE(r3)
	  sth       r0, 0x2D0(r3)
	  sth       r0, 0x2D2(r3)
	  sth       r0, 0x2D4(r3)
	  sth       r0, 0x2D6(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A918C
 * Size:	0000F8
 */
void JASAramStream::init(unsigned long, unsigned long,
                         void (*)(unsigned long, JASAramStream*, void*), void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x74B0(r2)
	  li        r9, 0
	  stw       r0, 0x14(r1)
	  lis       r8, 0x1
	  lfs       f2, -0x74AC(r2)
	  subi      r0, r8, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f1, -0x74A8(r2)
	  stw       r4, 0x238(r3)
	  addi      r4, r31, 0x40
	  stw       r5, 0x23C(r3)
	  li        r5, 0x10
	  stfs      f0, 0x1B8(r3)
	  lfs       f0, -0x74B0(r2)
	  stb       r9, 0x19E(r3)
	  stb       r9, 0x19C(r3)
	  stb       r9, 0x19D(r3)
	  stb       r9, 0x204(r3)
	  sth       r9, 0x24A(r3)
	  stfs      f2, 0x26C(r3)
	  stfs      f1, 0x284(r3)
	  stfs      f0, 0x29C(r3)
	  stfs      f0, 0x2B4(r3)
	  stfs      f2, 0x270(r3)
	  stfs      f1, 0x288(r3)
	  stfs      f0, 0x2A0(r3)
	  stfs      f0, 0x2B8(r3)
	  stfs      f2, 0x274(r3)
	  stfs      f1, 0x28C(r3)
	  stfs      f0, 0x2A4(r3)
	  stfs      f0, 0x2BC(r3)
	  stfs      f2, 0x278(r3)
	  stfs      f1, 0x290(r3)
	  stfs      f0, 0x2A8(r3)
	  stfs      f0, 0x2C0(r3)
	  stfs      f2, 0x27C(r3)
	  stfs      f1, 0x294(r3)
	  stfs      f0, 0x2AC(r3)
	  stfs      f0, 0x2C4(r3)
	  stfs      f2, 0x280(r3)
	  stfs      f1, 0x298(r3)
	  stfs      f0, 0x2B0(r3)
	  stfs      f0, 0x2C8(r3)
	  stfs      f2, 0x264(r3)
	  stfs      f2, 0x268(r3)
	  stb       r9, 0x2D8(r3)
	  sth       r0, 0x2CC(r3)
	  stw       r6, 0x240(r3)
	  stw       r7, 0x244(r3)
	  bl        0x46260
	  addi      r3, r31, 0x20
	  addi      r4, r31, 0x80
	  li        r5, 0x4
	  bl        0x46250
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
 * Size:	000010
 */
void JASAramStream::setBusSetting(unsigned long, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JASAramStream::prepare(const char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A9284
 * Size:	0000B8
 */
void JASAramStream::prepare(long, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r4
	  addi      r4, r30, 0x1BC
	  bl        0x331B0
	  cmpwi     r3, 0
	  bne-      .loc_0x38
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x38:
	  lis       r3, 0x800B
	  mr        r4, r30
	  subi      r3, r3, 0x6568
	  bl        -0x48BC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x58:
	  lbz       r0, 0x204(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x6C:
	  stw       r30, 0x8(r1)
	  lis       r3, 0x800B
	  subi      r4, r3, 0x6BCC
	  lwz       r3, -0x74E8(r13)
	  lwz       r0, 0x23C(r30)
	  addi      r5, r1, 0x8
	  li        r6, 0xC
	  stw       r0, 0xC(r1)
	  stw       r31, 0x10(r1)
	  bl        -0x94C
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31

	.loc_0xA0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A933C
 * Size:	000034
 */
void JASAramStream::start()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        0x461CC
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A9370
 * Size:	000038
 */
void JASAramStream::stop(unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,16,0,15
	  ori       r4, r0, 0x1
	  bl        0x46194
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A93A8
 * Size:	000048
 */
void JASAramStream::pause(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  li        r4, 0x3
	  beq-      .loc_0x1C
	  li        r4, 0x2

	.loc_0x1C:
	  li        r5, 0
	  bl        0x46154
	  cmpwi     r3, 0
	  bne-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x38

	.loc_0x34:
	  li        r3, 0x1

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A93F0
 * Size:	000044
 */
void JASAramStream::cancel()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x800B
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  subi      r4, r4, 0x6AA0
	  stb       r0, 0x204(r3)
	  lwz       r3, -0x74E8(r13)
	  bl        -0x7EC
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JASAramStream::getBlockSamples() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A9434
 * Size:	000030
 */
void JASAramStream::headerLoadTask(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r5)
	  lwz       r3, 0x0(r3)
	  lwz       r5, 0x8(r5)
	  bl        0x1C8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A9464
 * Size:	0000DC
 */
void JASAramStream::firstLoadTask(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  lwz       r30, 0x0(r3)
	  mr        r3, r30
	  bl        0x360
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  lwz       r3, 0x8(r31)
	  cmpwi     r3, 0
	  ble-      .loc_0x70
	  subi      r0, r3, 0x1
	  stw       r0, 0x8(r31)
	  lwz       r0, 0x8(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x70
	  lis       r4, 0x800B
	  lwz       r3, -0x74E8(r13)
	  subi      r4, r4, 0x6A40
	  mr        r5, r30
	  bl        -0x898
	  cmpwi     r3, 0
	  bne-      .loc_0x70
	  li        r0, 0x1
	  stb       r0, -0x74D7(r13)

	.loc_0x70:
	  lwz       r3, 0x4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  subi      r0, r3, 0x1
	  lis       r3, 0x800B
	  stw       r0, 0x4(r31)
	  subi      r4, r3, 0x6B9C
	  mr        r5, r31
	  li        r6, 0xC
	  lwz       r3, -0x74E8(r13)
	  bl        -0xB34
	  cmpwi     r3, 0
	  bne-      .loc_0xAC
	  li        r0, 0x1
	  stb       r0, -0x74D7(r13)

	.loc_0xAC:
	  bl        0x45728
	  lwz       r4, 0x208(r30)
	  stw       r3, 0x8(r1)
	  addi      r0, r4, 0x1
	  stw       r0, 0x208(r30)
	  bl        0x4573C

	.loc_0xC4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A9540
 * Size:	000020
 */
void JASAramStream::loadToAramTask(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x298
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A9560
 * Size:	000060
 */
void JASAramStream::finishTask(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x800B
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  subi      r3, r4, 0x6568
	  mr        r4, r31
	  bl        -0x4C38
	  lwz       r12, 0x240(r31)
	  cmplwi    r12, 0
	  beq-      .loc_0x4C
	  mr        r4, r31
	  lwz       r5, 0x244(r31)
	  li        r3, 0
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x240(r31)

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A95C0
 * Size:	000058
 */
void JASAramStream::prepareFinishTask(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x4
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x20
	  bl        0x45F3C
	  lwz       r12, 0x240(r31)
	  cmplwi    r12, 0
	  beq-      .loc_0x44
	  mr        r4, r31
	  lwz       r5, 0x244(r31)
	  li        r3, 0x1
	  mtctr     r12
	  bctrl

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
 * Address:	800A9618
 * Size:	0001CC
 */
void JASAramStream::headerLoad(unsigned long, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r5
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lbz       r0, -0x74D7(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  li        r3, 0
	  b         .loc_0x1B0

	.loc_0x38:
	  lbz       r0, 0x204(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  li        r3, 0
	  b         .loc_0x1B0

	.loc_0x4C:
	  lwz       r4, -0x74E4(r13)
	  addi      r3, r29, 0x1BC
	  li        r5, 0x40
	  li        r6, 0
	  li        r7, 0x1
	  bl        0x33408
	  cmpwi     r3, 0
	  bge-      .loc_0x7C
	  li        r0, 0x1
	  li        r3, 0
	  stb       r0, -0x74D7(r13)
	  b         .loc_0x1B0

	.loc_0x7C:
	  lwz       r5, -0x74E4(r13)
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  li        r0, 0
	  lbz       r3, 0x9(r5)
	  cmpwi     r31, 0
	  lfd       f2, -0x74A0(r2)
	  sth       r3, 0x248(r29)
	  lfs       f0, -0x74A4(r2)
	  lhz       r3, 0xC(r5)
	  sth       r3, 0x24A(r29)
	  lwz       r3, 0x10(r5)
	  stw       r3, 0x254(r29)
	  lhz       r4, 0xE(r5)
	  neg       r3, r4
	  or        r3, r3, r4
	  rlwinm    r3,r3,1,31,31
	  stb       r3, 0x258(r29)
	  lwz       r3, 0x18(r5)
	  stw       r3, 0x25C(r29)
	  lwz       r3, 0x1C(r5)
	  stw       r3, 0x260(r29)
	  lbz       r3, 0x28(r5)
	  stw       r3, 0x1C(r1)
	  lfd       f1, 0x18(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x264(r29)
	  stw       r0, 0x208(r29)
	  stw       r0, 0x200(r29)
	  stw       r0, 0x1FC(r29)
	  lwz       r3, -0x74E0(r13)
	  lhz       r0, 0xC(r5)
	  divwu     r3, r30, r3
	  divwu     r0, r3, r0
	  stw       r0, 0x250(r29)
	  lwz       r0, 0x250(r29)
	  stw       r0, 0x24C(r29)
	  lwz       r3, 0x24C(r29)
	  subi      r0, r3, 0x1
	  stw       r0, 0x24C(r29)
	  lwz       r0, 0x24C(r29)
	  stw       r0, 0x1F8(r29)
	  blt-      .loc_0x138
	  lwz       r0, 0x1F8(r29)
	  cmplw     r31, r0
	  ble-      .loc_0x13C

	.loc_0x138:
	  lwz       r31, 0x1F8(r29)

	.loc_0x13C:
	  lbz       r0, 0x204(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x150
	  li        r3, 0
	  b         .loc_0x1B0

	.loc_0x150:
	  stw       r29, 0xC(r1)
	  lis       r3, 0x800B
	  subi      r4, r3, 0x6B9C
	  lwz       r3, -0x74E8(r13)
	  lwz       r7, 0x1F8(r29)
	  addi      r5, r1, 0xC
	  li        r6, 0xC
	  subi      r0, r7, 0x1
	  stw       r31, 0x14(r1)
	  stw       r0, 0x10(r1)
	  bl        -0xDC8
	  cmpwi     r3, 0
	  bne-      .loc_0x194
	  li        r0, 0x1
	  li        r3, 0
	  stb       r0, -0x74D7(r13)
	  b         .loc_0x1B0

	.loc_0x194:
	  bl        0x4548C
	  lwz       r4, 0x208(r29)
	  stw       r3, 0x8(r1)
	  addi      r0, r4, 0x1
	  stw       r0, 0x208(r29)
	  bl        0x454A0
	  li        r3, 0x1

	.loc_0x1B0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A97E4
 * Size:	0002B4
 */
void JASAramStream::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r26, 0x18(r1)
	  mr        r27, r3
	  bl        0x45440
	  lwz       r4, 0x208(r27)
	  stw       r3, 0x8(r1)
	  subi      r0, r4, 0x1
	  stw       r0, 0x208(r27)
	  bl        0x45454
	  lbz       r0, -0x74D7(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x2A0

	.loc_0x40:
	  lbz       r0, 0x204(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  li        r3, 0
	  b         .loc_0x2A0

	.loc_0x54:
	  lhz       r4, 0x248(r27)
	  cmplwi    r4, 0
	  bne-      .loc_0x7C
	  lwz       r0, -0x74E0(r13)
	  lis       r3, 0x38E4
	  subi      r3, r3, 0x71C7
	  rlwinm    r0,r0,4,0,27
	  mulhwu    r0, r3, r0
	  rlwinm    r5,r0,31,1,31
	  b         .loc_0x84

	.loc_0x7C:
	  lwz       r0, -0x74E0(r13)
	  rlwinm    r5,r0,31,1,31

	.loc_0x84:
	  lwz       r3, 0x260(r27)
	  cmplwi    r4, 0
	  lwz       r4, 0x25C(r27)
	  subi      r0, r3, 0x1
	  divwu     r31, r0, r5
	  bne-      .loc_0xB8
	  lwz       r0, -0x74E0(r13)
	  lis       r3, 0x38E4
	  subi      r3, r3, 0x71C7
	  rlwinm    r0,r0,4,0,27
	  mulhwu    r0, r3, r0
	  rlwinm    r0,r0,31,1,31
	  b         .loc_0xC0

	.loc_0xB8:
	  lwz       r0, -0x74E0(r13)
	  rlwinm    r0,r0,31,1,31

	.loc_0xC0:
	  divwu     r30, r4, r0
	  lwz       r4, 0x200(r27)
	  cmplw     r4, r31
	  ble-      .loc_0xD8
	  li        r3, 0
	  b         .loc_0x2A0

	.loc_0xD8:
	  lwz       r3, -0x74E0(r13)
	  lhz       r0, 0x24A(r27)
	  mullw     r3, r3, r0
	  addi      r0, r3, 0x20
	  mullw     r3, r4, r0
	  mr        r5, r0
	  addi      r6, r3, 0x40
	  bne-      .loc_0x100
	  lwz       r0, 0x1F0(r27)
	  sub       r5, r0, r6

	.loc_0x100:
	  lwz       r4, -0x74E4(r13)
	  addi      r3, r27, 0x1BC
	  li        r7, 0x1
	  bl        0x33190
	  cmpwi     r3, 0
	  bge-      .loc_0x128
	  li        r0, 0x1
	  li        r3, 0
	  stb       r0, -0x74D7(r13)
	  b         .loc_0x2A0

	.loc_0x128:
	  lwz       r3, 0x1FC(r27)
	  li        r28, 0
	  lwz       r0, -0x74E0(r13)
	  lwz       r4, 0x238(r27)
	  mullw     r0, r3, r0
	  lwz       r29, -0x74E4(r13)
	  add       r26, r4, r0
	  b         .loc_0x1A4

	.loc_0x148:
	  lwz       r3, -0x74E0(r13)
	  li        r6, 0
	  lwz       r0, 0x250(r27)
	  li        r7, 0
	  lwz       r5, 0x4(r29)
	  li        r8, 0
	  mullw     r0, r3, r0
	  lwz       r4, -0x74E4(r13)
	  li        r9, -0x1
	  li        r10, 0
	  mullw     r3, r5, r28
	  addi      r3, r3, 0x20
	  mullw     r0, r28, r0
	  add       r3, r4, r3
	  add       r4, r26, r0
	  bl        -0x91CA8
	  cmplwi    r3, 0
	  bne-      .loc_0x1A0
	  li        r0, 0x1
	  li        r3, 0
	  stb       r0, -0x74D7(r13)
	  b         .loc_0x2A0

	.loc_0x1A0:
	  addi      r28, r28, 0x1

	.loc_0x1A4:
	  lhz       r0, 0x24A(r27)
	  cmpw      r28, r0
	  blt+      .loc_0x148
	  lwz       r3, 0x1FC(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x1FC(r27)
	  lwz       r0, 0x1FC(r27)
	  lwz       r3, 0x1F8(r27)
	  cmplw     r0, r3
	  blt-      .loc_0x274
	  lbz       r0, 0x258(r27)
	  lwz       r4, 0x200(r27)
	  cmplwi    r0, 0
	  add       r4, r3, r4
	  subi      r4, r4, 0x1
	  beq-      .loc_0x1F8
	  b         .loc_0x1F0

	.loc_0x1E8:
	  sub       r4, r4, r31
	  add       r4, r4, r30

	.loc_0x1F0:
	  cmplw     r4, r31
	  bgt+      .loc_0x1E8

	.loc_0x1F8:
	  cmplw     r4, r31
	  beq-      .loc_0x20C
	  addi      r0, r4, 0x2
	  cmplw     r0, r31
	  bne-      .loc_0x228

	.loc_0x20C:
	  lwz       r0, 0x250(r27)
	  addi      r3, r27, 0x20
	  li        r4, 0x5
	  li        r5, 0x1
	  stw       r0, 0x1F8(r27)
	  bl        0x45B18
	  b         .loc_0x234

	.loc_0x228:
	  lwz       r3, 0x250(r27)
	  subi      r0, r3, 0x1
	  stw       r0, 0x1F8(r27)

	.loc_0x234:
	  mr        r3, r29
	  mr        r4, r27
	  li        r5, 0
	  b         .loc_0x260

	.loc_0x244:
	  lha       r0, 0x8(r3)
	  addi      r5, r5, 0x1
	  sth       r0, 0x220(r4)
	  lha       r0, 0xA(r3)
	  addi      r3, r3, 0x4
	  sth       r0, 0x22C(r4)
	  addi      r4, r4, 0x2

	.loc_0x260:
	  lhz       r0, 0x24A(r27)
	  cmpw      r5, r0
	  blt+      .loc_0x244
	  li        r0, 0
	  stw       r0, 0x1FC(r27)

	.loc_0x274:
	  lwz       r3, 0x200(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x200(r27)
	  lwz       r0, 0x200(r27)
	  cmplw     r0, r31
	  ble-      .loc_0x29C
	  lbz       r0, 0x258(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x29C
	  stw       r30, 0x200(r27)

	.loc_0x29C:
	  li        r3, 0x1

	.loc_0x2A0:
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A9A98
 * Size:	000020
 */
void JASAramStream::channelProcCallback(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x804
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A9AB8
 * Size:	00005C
 */
void JASAramStream::dvdErrorCheck(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x352EC
	  addi      r0, r3, 0x1
	  cmplwi    r0, 0xC
	  bgt-      .loc_0x40
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x44A0
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r0, 0
	  stb       r0, -0x74D8(r13)
	  b         .loc_0x48

	.loc_0x40:
	  li        r0, 0x1
	  stb       r0, -0x74D8(r13)

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A9B14
 * Size:	00003C
 */
void JASAramStream::channelCallback(unsigned long, JASChannel*,
                                    JASDsp::TChannel*, void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r8, r3
	  mr        r7, r4
	  stw       r0, 0x14(r1)
	  mr        r0, r5
	  mr        r3, r6
	  mr        r4, r8
	  mr        r5, r7
	  mr        r6, r0
	  bl        .loc_0x3C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x3C:
	*/
}

/*
 * --INFO--
 * Address:	800A9B50
 * Size:	000758
 */
void JASAramStream::updateChannel(unsigned long, JASChannel*, JASDsp::TChannel*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r24, 0x30(r1)
	  mr        r27, r3
	  mr        r28, r5
	  mr        r29, r6
	  lhz       r0, 0x248(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  lwz       r0, -0x74E0(r13)
	  lis       r3, 0x38E4
	  subi      r3, r3, 0x71C7
	  rlwinm    r0,r0,4,0,27
	  mulhwu    r0, r3, r0
	  rlwinm    r31,r0,31,1,31
	  b         .loc_0x4C

	.loc_0x44:
	  lwz       r0, -0x74E0(r13)
	  rlwinm    r31,r0,31,1,31

	.loc_0x4C:
	  cmpwi     r4, 0x1
	  beq-      .loc_0x70
	  bge-      .loc_0x64
	  cmpwi     r4, 0
	  bge-      .loc_0xB8
	  b         .loc_0x72C

	.loc_0x64:
	  cmpwi     r4, 0x3
	  bge-      .loc_0x72C
	  b         .loc_0x62C

	.loc_0x70:
	  lwz       r0, 0x198(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x72C
	  stw       r28, 0x198(r27)
	  li        r4, 0
	  lwz       r0, 0x24C(r27)
	  mullw     r0, r31, r0
	  stw       r0, 0x1A4(r27)
	  stw       r4, 0x1A8(r27)
	  stw       r4, 0x1A0(r27)
	  lwz       r3, 0x260(r27)
	  subi      r0, r3, 0x1
	  divwu     r0, r0, r31
	  stw       r0, 0x1AC(r27)
	  stb       r4, 0x1B0(r27)
	  stw       r4, 0x1B4(r27)
	  stw       r4, 0x21C(r27)
	  b         .loc_0x72C

	.loc_0xB8:
	  lhz       r0, 0x8(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x72C
	  lwz       r0, 0x198(r27)
	  cmplw     r28, r0
	  bne-      .loc_0x55C
	  li        r6, 0
	  stw       r6, 0x21C(r27)
	  lwz       r3, 0x74(r29)
	  lhz       r0, 0x64(r29)
	  lwz       r4, 0x1A4(r27)
	  add       r7, r3, r0
	  cmplw     r7, r4
	  bgt-      .loc_0x104
	  lwz       r3, 0x1A8(r27)
	  sub       r0, r4, r7
	  add       r0, r3, r0
	  stw       r0, 0x1A8(r27)
	  b         .loc_0x1B8

	.loc_0x104:
	  lbz       r0, 0x1B0(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x138
	  lwz       r0, 0x1A8(r27)
	  add       r0, r0, r4
	  stw       r0, 0x1A8(r27)
	  lwz       r0, 0x24C(r27)
	  lwz       r3, 0x1A8(r27)
	  mullw     r0, r31, r0
	  sub       r0, r0, r7
	  add       r0, r3, r0
	  stw       r0, 0x1A8(r27)
	  b         .loc_0x1B8

	.loc_0x138:
	  lwz       r3, 0x1A8(r27)
	  li        r0, -0x1
	  add       r3, r3, r4
	  stw       r3, 0x1A8(r27)
	  lwz       r3, 0x24C(r27)
	  lwz       r4, 0x110(r29)
	  mullw     r3, r31, r3
	  lwz       r5, 0x1A8(r27)
	  sub       r3, r3, r7
	  sub       r3, r3, r4
	  add       r3, r5, r3
	  stw       r3, 0x1A8(r27)
	  lwz       r4, 0x260(r27)
	  lwz       r3, 0x1A8(r27)
	  sub       r3, r3, r4
	  stw       r3, 0x1A8(r27)
	  lwz       r4, 0x1A8(r27)
	  lwz       r3, 0x25C(r27)
	  add       r3, r4, r3
	  stw       r3, 0x1A8(r27)
	  stw       r6, 0x110(r29)
	  stw       r6, 0x210(r27)
	  lwz       r3, 0x21C(r27)
	  ori       r3, r3, 0x2
	  stw       r3, 0x21C(r27)
	  lwz       r3, 0x1B4(r27)
	  cmplw     r3, r0
	  bge-      .loc_0x1B0
	  addi      r0, r3, 0x1
	  stw       r0, 0x1B4(r27)

	.loc_0x1B0:
	  li        r0, 0
	  stb       r0, 0x1B0(r27)

	.loc_0x1B8:
	  lwz       r3, 0x1A8(r27)
	  lwz       r0, 0x260(r27)
	  cmplw     r3, r0
	  ble-      .loc_0x1D0
	  li        r0, 0x1
	  stb       r0, -0x74D7(r13)

	.loc_0x1D0:
	  lwz       r4, 0x25C(r27)
	  lis       r5, 0x4330
	  lwz       r3, 0x260(r27)
	  li        r0, -0x1
	  lwz       r6, 0x1B4(r27)
	  sub       r3, r3, r4
	  stw       r5, 0x10(r1)
	  lfd       f1, -0x74A0(r2)
	  cmplw     r6, r0
	  stw       r6, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  stw       r3, 0x1C(r1)
	  fsubs     f2, f0, f1
	  stw       r5, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f1
	  fmuls     f2, f2, f0
	  bge-      .loc_0x230
	  lwz       r0, 0x1A8(r27)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x24(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f1
	  fadds     f2, f2, f0

	.loc_0x230:
	  lwz       r3, 0x254(r27)
	  lis       r0, 0x4330
	  stw       r0, 0x28(r1)
	  lfd       f1, -0x74A0(r2)
	  stw       r3, 0x2C(r1)
	  lfd       f0, 0x28(r1)
	  fsubs     f0, f0, f1
	  fdivs     f2, f2, f0
	  stfs      f2, 0x1B8(r27)
	  lwz       r3, 0x1A8(r27)
	  lwz       r0, 0x260(r27)
	  addi      r3, r3, 0x190
	  cmplw     r3, r0
	  blt-      .loc_0x35C
	  lbz       r0, 0x1B0(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x35C
	  lbz       r0, 0x258(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x2CC
	  lwz       r3, 0x1AC(r27)
	  lwz       r0, 0x24C(r27)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  blt-      .loc_0x298
	  li        r3, 0

	.loc_0x298:
	  lwz       r4, 0x25C(r27)
	  mullw     r0, r3, r31
	  divwu     r3, r4, r31
	  mullw     r3, r3, r31
	  sub       r3, r4, r3
	  add       r0, r3, r0
	  stw       r0, 0x110(r29)
	  lwz       r0, 0x110(r29)
	  stw       r0, 0x210(r27)
	  lwz       r0, 0x21C(r27)
	  ori       r0, r0, 0x2
	  stw       r0, 0x21C(r27)
	  b         .loc_0x2E4

	.loc_0x2CC:
	  li        r0, 0
	  sth       r0, 0x102(r29)
	  sth       r0, 0x218(r27)
	  lwz       r0, 0x21C(r27)
	  ori       r0, r0, 0x8
	  stw       r0, 0x21C(r27)

	.loc_0x2E4:
	  lwz       r7, 0x260(r27)
	  li        r0, 0x1
	  lwz       r5, 0x1AC(r27)
	  divwu     r6, r7, r31
	  lwz       r4, 0x24C(r27)
	  lwz       r3, 0x74(r29)
	  mullw     r6, r6, r31
	  mullw     r5, r5, r31
	  sub       r6, r7, r6
	  mullw     r4, r31, r4
	  add       r5, r6, r5
	  sub       r4, r4, r5
	  sub       r3, r3, r4
	  stw       r3, 0x74(r29)
	  lwz       r3, 0x74(r29)
	  stw       r3, 0x20C(r27)
	  lwz       r3, 0x21C(r27)
	  ori       r3, r3, 0x1
	  stw       r3, 0x21C(r27)
	  lwz       r3, 0x260(r27)
	  lwz       r4, 0x25C(r27)
	  subi      r3, r3, 0x1
	  lwz       r5, 0x1AC(r27)
	  divwu     r4, r4, r31
	  divwu     r3, r3, r31
	  sub       r3, r3, r4
	  add       r3, r3, r5
	  addi      r3, r3, 0x1
	  stw       r3, 0x1AC(r27)
	  stb       r0, 0x1B0(r27)

	.loc_0x35C:
	  lwz       r3, 0xEC(r28)
	  lwz       r0, 0x70(r29)
	  sub.      r3, r0, r3
	  beq-      .loc_0x370
	  subi      r3, r3, 0x1

	.loc_0x370:
	  lwz       r0, -0x74E0(r13)
	  lwz       r4, 0x1A0(r27)
	  divwu     r30, r3, r0
	  cmplw     r30, r4
	  beq-      .loc_0x4F8
	  xor       r0, r4, r30
	  lis       r3, 0x800B
	  cntlzw    r0, r0
	  li        r26, 0
	  slw       r0, r4, r0
	  subi      r25, r3, 0x6AC0
	  rlwinm    r24,r0,1,31,31
	  b         .loc_0x400

	.loc_0x3A4:
	  lwz       r3, -0x74E8(r13)
	  mr        r4, r25
	  mr        r5, r27
	  bl        -0x12D8
	  cmpwi     r3, 0
	  bne-      .loc_0x3C8
	  li        r0, 0x1
	  stb       r0, -0x74D7(r13)
	  b         .loc_0x40C

	.loc_0x3C8:
	  bl        0x44D20
	  lwz       r4, 0x208(r27)
	  stw       r3, 0x8(r1)
	  addi      r0, r4, 0x1
	  stw       r0, 0x208(r27)
	  bl        0x44D34
	  lwz       r3, 0x1A0(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x1A0(r27)
	  lwz       r3, 0x1A0(r27)
	  lwz       r0, 0x24C(r27)
	  cmplw     r3, r0
	  blt-      .loc_0x400
	  stw       r26, 0x1A0(r27)

	.loc_0x400:
	  lwz       r0, 0x1A0(r27)
	  cmplw     r30, r0
	  bne+      .loc_0x3A4

	.loc_0x40C:
	  cmplwi    r24, 0
	  beq-      .loc_0x528
	  lwz       r3, 0x24C(r27)
	  lwz       r0, 0x1AC(r27)
	  sub       r0, r0, r3
	  stw       r0, 0x1AC(r27)
	  lbz       r0, 0x19D(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x490
	  lbz       r0, 0x1B0(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x45C
	  lwz       r0, 0x74(r29)
	  add       r0, r0, r31
	  stw       r0, 0x74(r29)
	  lwz       r0, 0x74(r29)
	  stw       r0, 0x20C(r27)
	  lwz       r0, 0x21C(r27)
	  ori       r0, r0, 0x1
	  stw       r0, 0x21C(r27)

	.loc_0x45C:
	  lwz       r3, 0x114(r29)
	  li        r0, 0
	  add       r3, r3, r31
	  stw       r3, 0x114(r29)
	  lwz       r3, 0x114(r29)
	  stw       r3, 0x214(r27)
	  lwz       r3, 0x21C(r27)
	  ori       r3, r3, 0x4
	  stw       r3, 0x21C(r27)
	  lwz       r3, 0x250(r27)
	  stw       r3, 0x24C(r27)
	  stb       r0, 0x19D(r27)
	  b         .loc_0x528

	.loc_0x490:
	  lwz       r3, 0x250(r27)
	  lwz       r0, 0x24C(r27)
	  subi      r3, r3, 0x1
	  cmplw     r0, r3
	  beq-      .loc_0x528
	  stw       r3, 0x24C(r27)
	  lwz       r0, 0x114(r29)
	  sub       r0, r0, r31
	  stw       r0, 0x114(r29)
	  lwz       r0, 0x114(r29)
	  stw       r0, 0x214(r27)
	  lwz       r0, 0x21C(r27)
	  ori       r0, r0, 0x4
	  stw       r0, 0x21C(r27)
	  lbz       r0, 0x1B0(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x528
	  lwz       r0, 0x74(r29)
	  sub       r0, r0, r31
	  stw       r0, 0x74(r29)
	  lwz       r0, 0x74(r29)
	  stw       r0, 0x20C(r27)
	  lwz       r0, 0x21C(r27)
	  ori       r0, r0, 0x1
	  stw       r0, 0x21C(r27)
	  b         .loc_0x528

	.loc_0x4F8:
	  lwz       r0, 0x208(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x528
	  lbz       r0, -0x74D8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x528
	  lbz       r0, 0x19E(r27)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x19E(r27)
	  lbz       r0, 0x19E(r27)
	  rlwinm    r0,r0,0,30,28
	  stb       r0, 0x19E(r27)

	.loc_0x528:
	  lwz       r3, 0x74(r29)
	  lhz       r0, 0x64(r29)
	  add       r0, r3, r0
	  stw       r0, 0x1A4(r27)
	  lwz       r3, 0x250(r27)
	  lwz       r4, 0x208(r27)
	  subi      r0, r3, 0x2
	  cmplw     r4, r0
	  blt-      .loc_0x5AC
	  lbz       r0, 0x19E(r27)
	  ori       r0, r0, 0x4
	  stb       r0, 0x19E(r27)
	  b         .loc_0x5AC

	.loc_0x55C:
	  lwz       r0, 0x21C(r27)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x570
	  lwz       r0, 0x20C(r27)
	  stw       r0, 0x74(r29)

	.loc_0x570:
	  lwz       r0, 0x21C(r27)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x584
	  lwz       r0, 0x210(r27)
	  stw       r0, 0x110(r29)

	.loc_0x584:
	  lwz       r0, 0x21C(r27)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x598
	  lwz       r0, 0x214(r27)
	  stw       r0, 0x114(r29)

	.loc_0x598:
	  lwz       r0, 0x21C(r27)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x5AC
	  lhz       r0, 0x218(r27)
	  sth       r0, 0x102(r29)

	.loc_0x5AC:
	  lwz       r0, 0x180(r27)
	  li        r3, 0
	  cmplw     r28, r0
	  beq-      .loc_0x610
	  lwz       r0, 0x184(r27)
	  li        r3, 0x1
	  cmplw     r28, r0
	  beq-      .loc_0x610
	  lwz       r0, 0x188(r27)
	  li        r3, 0x2
	  cmplw     r28, r0
	  beq-      .loc_0x610
	  lwz       r0, 0x18C(r27)
	  li        r3, 0x3
	  cmplw     r28, r0
	  beq-      .loc_0x610
	  lwz       r0, 0x190(r27)
	  li        r3, 0x4
	  cmplw     r28, r0
	  beq-      .loc_0x610
	  lwz       r0, 0x194(r27)
	  li        r3, 0x5
	  cmplw     r28, r0
	  beq-      .loc_0x610
	  li        r3, 0x6

	.loc_0x610:
	  rlwinm    r0,r3,1,0,30
	  add       r3, r27, r0
	  lha       r0, 0x220(r3)
	  sth       r0, 0x104(r29)
	  lha       r0, 0x22C(r3)
	  sth       r0, 0x106(r29)
	  b         .loc_0x72C

	.loc_0x62C:
	  lwz       r3, 0x180(r27)
	  li        r4, 0
	  li        r0, 0
	  cmplw     r28, r3
	  bne-      .loc_0x648
	  stw       r0, 0x180(r27)
	  b         .loc_0x654

	.loc_0x648:
	  cmplwi    r3, 0
	  beq-      .loc_0x654
	  li        r4, 0x1

	.loc_0x654:
	  lwz       r3, 0x184(r27)
	  cmplw     r28, r3
	  bne-      .loc_0x668
	  stw       r0, 0x184(r27)
	  b         .loc_0x674

	.loc_0x668:
	  cmplwi    r3, 0
	  beq-      .loc_0x674
	  li        r4, 0x1

	.loc_0x674:
	  lwz       r3, 0x188(r27)
	  cmplw     r28, r3
	  bne-      .loc_0x688
	  stw       r0, 0x188(r27)
	  b         .loc_0x694

	.loc_0x688:
	  cmplwi    r3, 0
	  beq-      .loc_0x694
	  li        r4, 0x1

	.loc_0x694:
	  lwz       r3, 0x18C(r27)
	  cmplw     r28, r3
	  bne-      .loc_0x6A8
	  stw       r0, 0x18C(r27)
	  b         .loc_0x6B4

	.loc_0x6A8:
	  cmplwi    r3, 0
	  beq-      .loc_0x6B4
	  li        r4, 0x1

	.loc_0x6B4:
	  lwz       r3, 0x190(r27)
	  cmplw     r28, r3
	  bne-      .loc_0x6C8
	  stw       r0, 0x190(r27)
	  b         .loc_0x6D4

	.loc_0x6C8:
	  cmplwi    r3, 0
	  beq-      .loc_0x6D4
	  li        r4, 0x1

	.loc_0x6D4:
	  lwz       r3, 0x194(r27)
	  cmplw     r28, r3
	  bne-      .loc_0x6E8
	  stw       r0, 0x194(r27)
	  b         .loc_0x6F4

	.loc_0x6E8:
	  cmplwi    r3, 0
	  beq-      .loc_0x6F4
	  li        r4, 0x1

	.loc_0x6F4:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x72C
	  li        r0, 0x1
	  lis       r3, 0x800B
	  stb       r0, 0x204(r27)
	  subi      r4, r3, 0x6AA0
	  mr        r5, r27
	  lwz       r3, -0x74E8(r13)
	  bl        -0x163C
	  cmpwi     r3, 0
	  bne-      .loc_0x72C
	  li        r0, 0x1
	  stb       r0, -0x74D7(r13)
	  b         .loc_0x744

	.loc_0x72C:
	  lbz       r4, 0x19E(r27)
	  mr        r3, r28
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r4,r0,1,31,31
	  bl        -0x6BFC

	.loc_0x744:
	  lmw       r24, 0x30(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AA2A8
 * Size:	0001E4
 */
void JASAramStream::channelProc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  li        r30, 0x1
	  b         .loc_0x48

	.loc_0x20:
	  lwz       r0, 0x8(r1)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x44
	  bge-      .loc_0x48
	  cmpwi     r0, 0x4
	  bge-      .loc_0x3C
	  b         .loc_0x48

	.loc_0x3C:
	  stb       r30, 0x19C(r31)
	  b         .loc_0x48

	.loc_0x44:
	  stb       r30, 0x19D(r31)

	.loc_0x48:
	  addi      r3, r31, 0x20
	  addi      r4, r1, 0x8
	  li        r5, 0
	  bl        0x452E8
	  cmpwi     r3, 0
	  bne+      .loc_0x20
	  lbz       r0, 0x19C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xE0
	  li        r3, 0
	  b         .loc_0x1CC
	  b         .loc_0xE0

	.loc_0x78:
	  lwz       r3, 0x8(r1)
	  rlwinm    r0,r3,0,24,31
	  cmpwi     r0, 0x2
	  beq-      .loc_0xC4
	  bge-      .loc_0x9C
	  cmpwi     r0, 0
	  beq-      .loc_0xA8
	  bge-      .loc_0xB4
	  b         .loc_0xE0

	.loc_0x9C:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xE0
	  b         .loc_0xD4

	.loc_0xA8:
	  mr        r3, r31
	  bl        .loc_0x1E4
	  b         .loc_0xE0

	.loc_0xB4:
	  rlwinm    r4,r3,16,16,31
	  mr        r3, r31
	  bl        0x368
	  b         .loc_0xE0

	.loc_0xC4:
	  lbz       r0, 0x19E(r31)
	  ori       r0, r0, 0x1
	  stb       r0, 0x19E(r31)
	  b         .loc_0xE0

	.loc_0xD4:
	  lbz       r0, 0x19E(r31)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x19E(r31)

	.loc_0xE0:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  li        r5, 0
	  bl        0x45250
	  cmpwi     r3, 0
	  bne+      .loc_0x78
	  lwz       r0, 0x180(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x10C
	  li        r3, 0
	  b         .loc_0x1CC

	.loc_0x10C:
	  lbz       r0, -0x74D7(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  lbz       r0, 0x19E(r31)
	  ori       r0, r0, 0x8
	  stb       r0, 0x19E(r31)

	.loc_0x124:
	  lbz       r0, -0x74D8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x13C
	  lbz       r0, 0x19E(r31)
	  ori       r0, r0, 0x2
	  stb       r0, 0x19E(r31)

	.loc_0x13C:
	  mr        r3, r31
	  li        r5, 0
	  b         .loc_0x190

	.loc_0x148:
	  lfs       f1, 0x264(r31)
	  lfs       f0, 0x26C(r3)
	  lwz       r4, 0x180(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x100(r4)
	  lfs       f0, 0x268(r31)
	  stfs      f0, 0x104(r4)
	  lbz       r0, 0x2D8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x178
	  lfs       f0, 0x284(r3)
	  stfs      f0, 0xD0(r4)

	.loc_0x178:
	  lfs       f0, 0x29C(r3)
	  addi      r5, r5, 0x1
	  stfs      f0, 0xD8(r4)
	  lfs       f0, 0x2B4(r3)
	  addi      r3, r3, 0x4
	  stfs      f0, 0xE0(r4)

	.loc_0x190:
	  lhz       r4, 0x24A(r31)
	  cmpw      r5, r4
	  blt+      .loc_0x148
	  lbz       r0, 0x2D8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C8
	  cmplwi    r4, 0x2
	  bne-      .loc_0x1C8
	  lfs       f1, -0x74B0(r2)
	  lwz       r3, 0x180(r31)
	  lfs       f0, -0x74AC(r2)
	  stfs      f1, 0xD0(r3)
	  lwz       r3, 0x184(r31)
	  stfs      f0, 0xD0(r3)

	.loc_0x1C8:
	  li        r3, 0

	.loc_0x1CC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x1E4:
	*/
}

/*
 * --INFO--
 * Address:	800AA48C
 * Size:	000240
 */
void JASAramStream::channelStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stmw      r21, 0x24(r1)
	  mr        r23, r3
	  lhz       r0, 0x248(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x40
	  bge-      .loc_0x44
	  cmpwi     r0, 0
	  bge-      .loc_0x38
	  b         .loc_0x44

	.loc_0x38:
	  li        r26, 0
	  b         .loc_0x44

	.loc_0x40:
	  li        r26, 0x3

	.loc_0x44:
	  lis       r3, 0x8048
	  lfd       f31, -0x74A0(r2)
	  mr        r28, r23
	  mr        r27, r23
	  subi      r31, r3, 0x69B4
	  li        r25, 0
	  lis       r30, 0x4330
	  b         .loc_0x210

	.loc_0x64:
	  addi      r24, r28, 0x90
	  li        r3, -0x1
	  stb       r26, 0x90(r28)
	  li        r0, 0
	  stw       r3, 0xA0(r28)
	  stw       r0, 0xA4(r28)
	  lhz       r0, 0x248(r23)
	  lwz       r4, 0x24C(r23)
	  cmplwi    r0, 0
	  bne-      .loc_0xA8
	  lwz       r0, -0x74E0(r13)
	  lis       r3, 0x38E4
	  subi      r3, r3, 0x71C7
	  rlwinm    r0,r0,4,0,27
	  mulhwu    r0, r3, r0
	  rlwinm    r0,r0,31,1,31
	  b         .loc_0xB0

	.loc_0xA8:
	  lwz       r0, -0x74E0(r13)
	  rlwinm    r0,r0,31,1,31

	.loc_0xB0:
	  mullw     r4, r4, r0
	  li        r3, 0
	  subi      r0, r2, 0x7498
	  stw       r4, 0x18(r24)
	  lwz       r4, 0x18(r24)
	  stw       r4, 0x1C(r24)
	  sth       r3, 0x20(r24)
	  sth       r3, 0x22(r24)
	  stw       r0, 0x24(r24)
	  lwz       r0, -0x75DC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x11C
	  bl        0x446CC
	  lwz       r0, -0x75DC(r13)
	  stw       r3, 0x8(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r4, -0x7548(r13)
	  li        r3, 0xC
	  li        r5, 0
	  bl        -0x8664C
	  mr.       r29, r3
	  beq-      .loc_0x110
	  bl        -0x3414

	.loc_0x110:
	  stw       r29, -0x75DC(r13)

	.loc_0x114:
	  lwz       r3, 0x8(r1)
	  bl        0x446BC

	.loc_0x11C:
	  lwz       r3, -0x75DC(r13)
	  li        r4, 0x118
	  bl        -0x3384
	  mr.       r29, r3
	  beq-      .loc_0x144
	  lis       r4, 0x800B
	  mr        r5, r23
	  subi      r4, r4, 0x64EC
	  bl        -0x73C4
	  mr        r29, r3

	.loc_0x144:
	  lfs       f1, -0x74B0(r2)
	  li        r0, 0x7F
	  sth       r0, 0xBC(r29)
	  mr        r3, r29
	  fmr       f2, f1
	  lfs       f3, -0x74AC(r2)
	  bl        -0x6F4C
	  li        r0, 0x1
	  mr        r22, r23
	  stb       r0, 0x108(r29)
	  li        r21, 0
	  stb       r0, 0x109(r29)
	  stb       r0, 0x10A(r29)

	.loc_0x178:
	  lhz       r5, 0x2CC(r22)
	  mr        r3, r29
	  mr        r4, r21
	  bl        -0x7098
	  addi      r21, r21, 0x1
	  addi      r22, r22, 0x2
	  cmpwi     r21, 0x6
	  blt+      .loc_0x178
	  bl        -0x2434
	  lwz       r0, 0x254(r23)
	  mr        r3, r29
	  stw       r30, 0x10(r1)
	  mr        r5, r31
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f31
	  fdivs     f0, f0, f1
	  stfs      f0, 0xF0(r29)
	  lfs       f0, 0xF0(r29)
	  stfs      f0, 0xF8(r29)
	  bl        -0x7114
	  stw       r24, 0xE8(r29)
	  li        r0, 0
	  mr        r3, r29
	  lwz       r5, -0x74E0(r13)
	  lwz       r4, 0x250(r23)
	  lwz       r6, 0x238(r23)
	  mullw     r4, r5, r4
	  mullw     r4, r25, r4
	  add       r4, r6, r4
	  stw       r4, 0xEC(r29)
	  stb       r0, 0xE4(r29)
	  bl        -0x6F44
	  stw       r29, 0x180(r27)
	  addi      r28, r28, 0x28
	  addi      r27, r27, 0x4
	  addi      r25, r25, 0x1

	.loc_0x210:
	  lhz       r0, 0x24A(r23)
	  cmpw      r25, r0
	  blt+      .loc_0x64
	  li        r0, 0
	  stw       r0, 0x198(r23)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  lmw       r21, 0x24(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AA6CC
 * Size:	000078
 */
void JASAramStream::channelStop(unsigned short)
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
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r31, r28
	  b         .loc_0x4C

	.loc_0x30:
	  lwz       r3, 0x180(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  mr        r4, r29
	  bl        -0x6F44

	.loc_0x44:
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x4C:
	  lhz       r0, 0x24A(r28)
	  cmpw      r30, r0
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
