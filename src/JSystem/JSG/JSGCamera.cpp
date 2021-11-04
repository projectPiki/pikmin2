#include "types.h"

/*
 * --INFO--
 * Address:	800987F4
 * Size:	000060
 */
void JStage::TCamera::__dt(void)
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
	  addi      r0, r5, 0x35E8
	  stw       r0, 0x0(r30)
	  bl        0xB0
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x74780

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
 * Address:	80098854
 * Size:	000008
 */
u32  JStage::TCamera::JSGFGetType( const
{
	return 0x3;
}

/*
 * --INFO--
 * Address:	8009885C
 * Size:	000008
 */
u32  JStage::TCamera::JSGGetProjectionType( const
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	80098864
 * Size:	000004
 */
void JStage::TCamera::JSGSetProjectionType( (JStage::TECameraProjection))
{
}

/*
 * --INFO--
 * Address:	80098868
 * Size:	000008
 */
void JStage::TCamera::JSGGetProjectionNear( const
{
	/*
	.loc_0x0:
	  lfs       f1, -0x76F0(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098870
 * Size:	000004
 */
void JStage::TCamera::JSGSetProjectionNear( (float))
{
}

/*
 * --INFO--
 * Address:	80098874
 * Size:	00000C
 */
void JStage::TCamera::JSGGetProjectionFar( const
{
	/*
	.loc_0x0:
	  lis       r3, 0x8051
	  lfs       f1, 0x48D8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098880
 * Size:	000004
 */
void JStage::TCamera::JSGSetProjectionFar( (float))
{
}

/*
 * --INFO--
 * Address:	80098884
 * Size:	000008
 */
void JStage::TCamera::JSGGetProjectionFovy( const
{
	/*
	.loc_0x0:
	  lfs       f1, -0x76F0(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009888C
 * Size:	000004
 */
void JStage::TCamera::JSGSetProjectionFovy( (float))
{
}

/*
 * --INFO--
 * Address:	80098890
 * Size:	000008
 */
void JStage::TCamera::JSGGetProjectionAspect( const
{
	/*
	.loc_0x0:
	  lfs       f1, -0x76F0(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098898
 * Size:	000004
 */
void JStage::TCamera::JSGSetProjectionAspect( (float))
{
}

/*
 * --INFO--
 * Address:	8009889C
 * Size:	000004
 */
void JStage::TCamera::JSGGetProjectionField( const(float *))
{
}

/*
 * --INFO--
 * Address:	800988A0
 * Size:	000004
 */
void JStage::TCamera::JSGSetProjectionField( (float const *))
{
}

/*
 * --INFO--
 * Address:	800988A4
 * Size:	000008
 */
u32  JStage::TCamera::JSGGetViewType( const
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	800988AC
 * Size:	000004
 */
void JStage::TCamera::JSGSetViewType( (JStage::TECameraView))
{
}

/*
 * --INFO--
 * Address:	800988B0
 * Size:	000004
 */
void JStage::TCamera::JSGGetViewPosition( const(Vec *))
{
}

/*
 * --INFO--
 * Address:	800988B4
 * Size:	000004
 */
void JStage::TCamera::JSGSetViewPosition( (Vec const &))
{
}

/*
 * --INFO--
 * Address:	800988B8
 * Size:	000004
 */
void JStage::TCamera::JSGGetViewUpVector( const(Vec *))
{
}

/*
 * --INFO--
 * Address:	800988BC
 * Size:	000004
 */
void JStage::TCamera::JSGSetViewUpVector( (Vec const &))
{
}

/*
 * --INFO--
 * Address:	800988C0
 * Size:	000004
 */
void JStage::TCamera::JSGGetViewTargetPosition( const(Vec *))
{
}

/*
 * --INFO--
 * Address:	800988C4
 * Size:	000004
 */
void JStage::TCamera::JSGSetViewTargetPosition( (Vec const &))
{
}

/*
 * --INFO--
 * Address:	800988C8
 * Size:	000008
 */
void JStage::TCamera::JSGGetViewRoll( const
{
	/*
	.loc_0x0:
	  lfs       f1, -0x76F0(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800988D0
 * Size:	000004
 */
void JStage::TCamera::JSGSetViewRoll( (float))
{
}
