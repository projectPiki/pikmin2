#include "JSystem/JGadget/allocator.h"
#include "JSystem/JGadget/vector.h"
#include "types.h"

/*
    Generated from dpostproc
*/

typedef JGadget::TVector<void*, JGadget::TAllocator<void*>> TVPVBase;

namespace JGadget {
/*
 * --INFO--
 * Address:	8002766C
 * Size:	000008
 */
void vector::extend_default(unsigned long, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r3,r4,1,0,30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80027674
 * Size:	00002C
 * __ct__Q27JGadget20TVector_pointer_voidFRCQ27JGadget14TAllocator<Pv>
 */
TVector_pointer_void::TVector_pointer_void(const TAllocator<void*>& allocator)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  li        r5, 0
	  lis       r4, 0x8002
	  stb       r0, 0x0(r3)
	  addi      r0, r4, 0x766C
	  stw       r5, 0x4(r3)
	  lwz       r4, 0x4(r3)
	  stw       r4, 0x8(r3)
	  stw       r5, 0xC(r3)
	  stw       r0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
template <>
TVPVBase::~TVector()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
TVector_pointer_void::TVector_pointer_void(u32, void* const&, const JGadget::TAllocator<void*>& allocator)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
template <>
TVPVBase::TVector(u32, void* const&, const TAllocator<void*>&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800276A0
 * Size:	000078
 */
template <>
void TVPVBase::insert(void**, u32, void* const&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr.       r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  beq-      .loc_0x5C
	  bl        .loc_0x78
	  lwz       r0, 0x8(r29)
	  cmplw     r3, r0
	  beq-      .loc_0x5C
	  lwz       r0, 0x0(r31)
	  mtctr     r30
	  cmplwi    r30, 0
	  beq-      .loc_0x5C

	.loc_0x48:
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  stw       r0, 0x0(r3)

	.loc_0x54:
	  addi      r3, r3, 0x4
	  bdnz+     .loc_0x48

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x78:
	*/
}

/*
 * --INFO--
 * Address:	80027718
 * Size:	000470
 */
template <>
void TVPVBase::Insert_raw(void**, u32)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr.       r28, r5
	  mr        r27, r3
	  mr        r30, r4
	  bne-      .loc_0x28
	  mr        r3, r4
	  b         .loc_0x45C

	.loc_0x28:
	  lwz       r5, 0x4(r27)
	  cmplwi    r5, 0
	  bne-      .loc_0x3C
	  li        r0, 0
	  b         .loc_0x4C

	.loc_0x3C:
	  lwz       r0, 0x8(r27)
	  sub       r0, r0, r5
	  srawi     r0, r0, 0x2
	  addze     r0, r0

	.loc_0x4C:
	  lwz       r3, 0xC(r27)
	  add       r0, r28, r0
	  cmplw     r0, r3
	  bgt-      .loc_0x270
	  rlwinm    r7,r28,2,0,29
	  lwz       r6, 0x8(r27)
	  add       r8, r30, r7
	  cmplw     r8, r6
	  bge-      .loc_0x1B0
	  sub       r9, r6, r7
	  addi      r3, r6, 0x3
	  cmplw     r9, r6
	  sub       r3, r3, r9
	  mr        r5, r9
	  rlwinm    r3,r3,30,2,31
	  bge-      .loc_0x104
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0xEC

	.loc_0x98:
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x0(r6)
	  lwz       r0, 0x4(r5)
	  stw       r0, 0x4(r6)
	  lwz       r0, 0x8(r5)
	  stw       r0, 0x8(r6)
	  lwz       r0, 0xC(r5)
	  stw       r0, 0xC(r6)
	  lwz       r0, 0x10(r5)
	  stw       r0, 0x10(r6)
	  lwz       r0, 0x14(r5)
	  stw       r0, 0x14(r6)
	  lwz       r0, 0x18(r5)
	  stw       r0, 0x18(r6)
	  lwz       r0, 0x1C(r5)
	  addi      r5, r5, 0x20
	  stw       r0, 0x1C(r6)
	  addi      r6, r6, 0x20
	  bdnz+     .loc_0x98
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x104

	.loc_0xEC:
	  mtctr     r3

	.loc_0xF0:
	  lwz       r0, 0x0(r5)
	  addi      r5, r5, 0x4
	  stw       r0, 0x0(r6)
	  addi      r6, r6, 0x4
	  bdnz+     .loc_0xF0

	.loc_0x104:
	  addi      r3, r9, 0x3
	  cmplw     r9, r30
	  sub       r3, r3, r30
	  lwz       r6, 0x8(r27)
	  mr        r5, r9
	  rlwinm    r3,r3,30,2,31
	  ble-      .loc_0x188
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0x178

	.loc_0x12C:
	  lwz       r0, -0x4(r5)
	  stw       r0, -0x4(r6)
	  lwz       r0, -0x8(r5)
	  stw       r0, -0x8(r6)
	  lwz       r0, -0xC(r5)
	  stw       r0, -0xC(r6)
	  lwz       r0, -0x10(r5)
	  stw       r0, -0x10(r6)
	  lwz       r0, -0x14(r5)
	  stw       r0, -0x14(r6)
	  lwz       r0, -0x18(r5)
	  stw       r0, -0x18(r6)
	  lwz       r0, -0x1C(r5)
	  stw       r0, -0x1C(r6)
	  lwzu      r0, -0x20(r5)
	  stwu      r0, -0x20(r6)
	  bdnz+     .loc_0x12C
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x188

	.loc_0x178:
	  mtctr     r3

	.loc_0x17C:
	  lwzu      r0, -0x4(r5)
	  stwu      r0, -0x4(r6)
	  bdnz+     .loc_0x17C

	.loc_0x188:
	  mr        r3, r30
	  b         .loc_0x194

	.loc_0x190:
	  addi      r3, r3, 0x4

	.loc_0x194:
	  cmplw     r3, r8
	  bne+      .loc_0x190
	  lwz       r0, 0x8(r27)
	  mr        r3, r4
	  add       r0, r0, r7
	  stw       r0, 0x8(r27)
	  b         .loc_0x45C

	.loc_0x1B0:
	  addi      r3, r6, 0x3
	  cmplw     r30, r6
	  sub       r3, r3, r30
	  mr        r6, r8
	  mr        r5, r30
	  rlwinm    r3,r3,30,2,31
	  bge-      .loc_0x244
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0x22C

	.loc_0x1D8:
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x0(r6)
	  lwz       r0, 0x4(r5)
	  stw       r0, 0x4(r6)
	  lwz       r0, 0x8(r5)
	  stw       r0, 0x8(r6)
	  lwz       r0, 0xC(r5)
	  stw       r0, 0xC(r6)
	  lwz       r0, 0x10(r5)
	  stw       r0, 0x10(r6)
	  lwz       r0, 0x14(r5)
	  stw       r0, 0x14(r6)
	  lwz       r0, 0x18(r5)
	  stw       r0, 0x18(r6)
	  lwz       r0, 0x1C(r5)
	  addi      r5, r5, 0x20
	  stw       r0, 0x1C(r6)
	  addi      r6, r6, 0x20
	  bdnz+     .loc_0x1D8
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x244

	.loc_0x22C:
	  mtctr     r3

	.loc_0x230:
	  lwz       r0, 0x0(r5)
	  addi      r5, r5, 0x4
	  stw       r0, 0x0(r6)
	  addi      r6, r6, 0x4
	  bdnz+     .loc_0x230

	.loc_0x244:
	  lwz       r0, 0x8(r27)
	  mr        r3, r30
	  b         .loc_0x254

	.loc_0x250:
	  addi      r3, r3, 0x4

	.loc_0x254:
	  cmplw     r3, r0
	  bne+      .loc_0x250
	  lwz       r0, 0x8(r27)
	  mr        r3, r4
	  add       r0, r0, r7
	  stw       r0, 0x8(r27)
	  b         .loc_0x45C

	.loc_0x270:
	  cmplwi    r5, 0
	  bne-      .loc_0x280
	  li        r4, 0
	  b         .loc_0x290

	.loc_0x280:
	  lwz       r0, 0x8(r27)
	  sub       r0, r0, r5
	  srawi     r0, r0, 0x2
	  addze     r4, r0

	.loc_0x290:
	  lwz       r12, 0x10(r27)
	  mr        r5, r28
	  add       r29, r4, r28
	  mtctr     r12
	  bctrl
	  cmplw     r29, r3
	  mr        r31, r3
	  ble-      .loc_0x2B4
	  mr        r31, r29

	.loc_0x2B4:
	  rlwinm    r3,r31,2,0,29
	  bl        -0x3B2C
	  mr.       r0, r3
	  bne-      .loc_0x2CC
	  lwz       r3, 0x8(r27)
	  b         .loc_0x45C

	.loc_0x2CC:
	  lwz       r5, 0x4(r27)
	  addi      r4, r30, 0x3
	  stw       r27, 0x8(r1)
	  mr        r6, r0
	  cmplw     r5, r30
	  sub       r4, r4, r5
	  stw       r0, 0xC(r1)
	  rlwinm    r4,r4,30,2,31
	  bge-      .loc_0x368
	  rlwinm.   r3,r4,29,3,31
	  mtctr     r3
	  beq-      .loc_0x350

	.loc_0x2FC:
	  lwz       r3, 0x0(r5)
	  stw       r3, 0x0(r6)
	  lwz       r3, 0x4(r5)
	  stw       r3, 0x4(r6)
	  lwz       r3, 0x8(r5)
	  stw       r3, 0x8(r6)
	  lwz       r3, 0xC(r5)
	  stw       r3, 0xC(r6)
	  lwz       r3, 0x10(r5)
	  stw       r3, 0x10(r6)
	  lwz       r3, 0x14(r5)
	  stw       r3, 0x14(r6)
	  lwz       r3, 0x18(r5)
	  stw       r3, 0x18(r6)
	  lwz       r3, 0x1C(r5)
	  addi      r5, r5, 0x20
	  stw       r3, 0x1C(r6)
	  addi      r6, r6, 0x20
	  bdnz+     .loc_0x2FC
	  andi.     r4, r4, 0x7
	  beq-      .loc_0x368

	.loc_0x350:
	  mtctr     r4

	.loc_0x354:
	  lwz       r3, 0x0(r5)
	  addi      r5, r5, 0x4
	  stw       r3, 0x0(r6)
	  addi      r6, r6, 0x4
	  bdnz+     .loc_0x354

	.loc_0x368:
	  lwz       r5, 0x8(r27)
	  rlwinm    r3,r28,2,0,29
	  mr        r29, r6
	  mr        r7, r30
	  addi      r4, r5, 0x3
	  cmplw     r30, r5
	  sub       r4, r4, r30
	  add       r5, r6, r3
	  rlwinm    r4,r4,30,2,31
	  bge-      .loc_0x408
	  rlwinm.   r3,r4,29,3,31
	  mtctr     r3
	  beq-      .loc_0x3F0

	.loc_0x39C:
	  lwz       r3, 0x0(r7)
	  stw       r3, 0x0(r5)
	  lwz       r3, 0x4(r7)
	  stw       r3, 0x4(r5)
	  lwz       r3, 0x8(r7)
	  stw       r3, 0x8(r5)
	  lwz       r3, 0xC(r7)
	  stw       r3, 0xC(r5)
	  lwz       r3, 0x10(r7)
	  stw       r3, 0x10(r5)
	  lwz       r3, 0x14(r7)
	  stw       r3, 0x14(r5)
	  lwz       r3, 0x18(r7)
	  stw       r3, 0x18(r5)
	  lwz       r3, 0x1C(r7)
	  addi      r7, r7, 0x20
	  stw       r3, 0x1C(r5)
	  addi      r5, r5, 0x20
	  bdnz+     .loc_0x39C
	  andi.     r4, r4, 0x7
	  beq-      .loc_0x408

	.loc_0x3F0:
	  mtctr     r4

	.loc_0x3F4:
	  lwz       r3, 0x0(r7)
	  addi      r7, r7, 0x4
	  stw       r3, 0x0(r5)
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0x3F4

	.loc_0x408:
	  lwz       r3, 0x4(r27)
	  lwz       r5, 0x8(r27)
	  mr        r4, r3
	  b         .loc_0x41C

	.loc_0x418:
	  addi      r4, r4, 0x4

	.loc_0x41C:
	  cmplw     r4, r5
	  bne+      .loc_0x418
	  lwz       r5, 0x4(r27)
	  lwz       r4, 0x8(r27)
	  stw       r3, 0xC(r1)
	  sub       r4, r4, r5
	  srawi     r4, r4, 0x2
	  addze     r4, r4
	  add       r4, r28, r4
	  rlwinm    r4,r4,2,0,29
	  add       r4, r0, r4
	  stw       r4, 0x8(r27)
	  stw       r0, 0x4(r27)
	  stw       r31, 0xC(r27)
	  bl        -0x3AB8
	  mr        r3, r29

	.loc_0x45C:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// template <>
// TVPVBase::Destructed_deallocate_::~Destructed_deallocate_()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80027B88
 * Size:	000108
 */
TVector_pointer_void::~TVector_pointer_void()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80027C74
	beq      lbl_80027C64
	lwz      r5, 8(r30)
	lwz      r4, 4(r30)
	addi     r3, r5, 3
	cmplw    r5, r5
	subf     r3, r5, r3
	srwi     r3, r3, 2
	bge      lbl_80027C40
	rlwinm.  r0, r3, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_80027C28

lbl_80027BD4:
	lwz      r0, 0(r5)
	stw      r0, 0(r4)
	lwz      r0, 4(r5)
	stw      r0, 4(r4)
	lwz      r0, 8(r5)
	stw      r0, 8(r4)
	lwz      r0, 0xc(r5)
	stw      r0, 0xc(r4)
	lwz      r0, 0x10(r5)
	stw      r0, 0x10(r4)
	lwz      r0, 0x14(r5)
	stw      r0, 0x14(r4)
	lwz      r0, 0x18(r5)
	stw      r0, 0x18(r4)
	lwz      r0, 0x1c(r5)
	addi     r5, r5, 0x20
	stw      r0, 0x1c(r4)
	addi     r4, r4, 0x20
	bdnz     lbl_80027BD4
	andi.    r3, r3, 7
	beq      lbl_80027C40

lbl_80027C28:
	mtctr    r3

lbl_80027C2C:
	lwz      r0, 0(r5)
	addi     r5, r5, 4
	stw      r0, 0(r4)
	addi     r4, r4, 4
	bdnz     lbl_80027C2C

lbl_80027C40:
	lwz      r0, 8(r30)
	mr       r3, r4
	b        lbl_80027C50

lbl_80027C4C:
	addi     r3, r3, 4

lbl_80027C50:
	cmplw    r3, r0
	bne      lbl_80027C4C
	stw      r4, 8(r30)
	lwz      r3, 4(r30)
	bl       __dl__FPv

lbl_80027C64:
	extsh.   r0, r31
	ble      lbl_80027C74
	mr       r3, r30
	bl       __dl__FPv

lbl_80027C74:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80027C90
 * Size:	000020
 */
void TVector_pointer_void::insert(void**, void* const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl "insert__Q27JGadget38TVector<Pv,Q27JGadget14TAllocator<Pv>>FPPvRCPv" lwz
	r0, 0x14(r1) mtlr     r0 addi     r1, r1, 0x10 blr
	*/
}

/*
 * --INFO--
 * Address:	80027CB0
 * Size:	000058
 */
template <>
void TVPVBase::insert(void**, void* const&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r5
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0x4(r3)
	  sub       r0, r4, r0
	  srawi     r0, r0, 0x2
	  addze     r31, r0
	  bl        -0x640
	  lwz       r3, 0x4(r30)
	  rlwinm    r0,r31,2,0,29
	  add       r3, r3, r0
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
 * Address:	........
 * Size:	000020
 */
void TVector_pointer_void::insert(void**, unsigned long, void* const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void TVector_pointer_void::erase(void**)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80027D08
 * Size:	0000B8
 */
void TVector_pointer_void::erase(void**, void**)
{
	/*
	lwz      r7, 8(r3)
	addi     r6, r7, 3
	cmplw    r5, r7
	subf     r6, r5, r6
	mr       r7, r4
	srwi     r6, r6, 2
	bge      lbl_80027D9C
	rlwinm.  r0, r6, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_80027D84

lbl_80027D30:
	lwz      r0, 0(r5)
	stw      r0, 0(r7)
	lwz      r0, 4(r5)
	stw      r0, 4(r7)
	lwz      r0, 8(r5)
	stw      r0, 8(r7)
	lwz      r0, 0xc(r5)
	stw      r0, 0xc(r7)
	lwz      r0, 0x10(r5)
	stw      r0, 0x10(r7)
	lwz      r0, 0x14(r5)
	stw      r0, 0x14(r7)
	lwz      r0, 0x18(r5)
	stw      r0, 0x18(r7)
	lwz      r0, 0x1c(r5)
	addi     r5, r5, 0x20
	stw      r0, 0x1c(r7)
	addi     r7, r7, 0x20
	bdnz     lbl_80027D30
	andi.    r6, r6, 7
	beq      lbl_80027D9C

lbl_80027D84:
	mtctr    r6

lbl_80027D88:
	lwz      r0, 0(r5)
	addi     r5, r5, 4
	stw      r0, 0(r7)
	addi     r7, r7, 4
	bdnz     lbl_80027D88

lbl_80027D9C:
	lwz      r0, 8(r3)
	mr       r5, r7
	b        lbl_80027DAC

lbl_80027DA8:
	addi     r5, r5, 4

lbl_80027DAC:
	cmplw    r5, r0
	bne      lbl_80027DA8
	stw      r7, 8(r3)
	mr       r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void TVector_pointer_void::assign(unsigned long, void* const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
template <>
void TVPVBase::assign(u32, void* const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void TVector_pointer_void::resize(unsigned long, void* const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
template <>
void TVPVBase::resize(u32, void* const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
template <>
void TVPVBase::Resize_raw(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
void JGadget::TVector_pointer_void::reserve(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JGadget::TVector_pointer_void::operator=(TVector_pointer_void const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000368
 */
template <>
void TVPVBase::operator=(const TVPVBase& rhs)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JGadget::TVector_pointer_void::Insert_raw(void**, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JGadget::TVector_pointer_void::Resize_raw(unsigned long)
{
	// UNUSED FUNCTION
}
} // namespace JGadget
