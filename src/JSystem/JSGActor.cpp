

/*
 * --INFO--
 * Address:	80098990
 * Size:	000060
 */
void JStage::TActor::__dt(void)
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
void JStage::TActor::JSGFGetType( const
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
void JStage::TActor::JSGGetTranslation( const(Vec *))
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
void JStage::TActor::JSGSetTranslation( (Vec const &))
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
void JStage::TActor::JSGGetScaling( const(Vec *))
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
void JStage::TActor::JSGSetScaling( (Vec const &))
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
void JStage::TActor::JSGGetRotation( const(Vec *))
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
void JStage::TActor::JSGSetRotation( (Vec const &))
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
void JStage::TActor::JSGGetShape( const
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
void JStage::TActor::JSGSetShape( (unsigned long))
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
void JStage::TActor::JSGGetAnimation( const
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
void JStage::TActor::JSGSetAnimation( (unsigned long))
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
void JStage::TActor::JSGGetAnimationFrame( const
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
void JStage::TActor::JSGSetAnimationFrame( (float))
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
void JStage::TActor::JSGGetAnimationFrameMax( const
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
void JStage::TActor::JSGGetAnimationTransition( const
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
void JStage::TActor::JSGSetAnimationTransition( (float))
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
void JStage::TActor::JSGGetTextureAnimation( const
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
void JStage::TActor::JSGSetTextureAnimation( (unsigned long))
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
void JStage::TActor::JSGGetTextureAnimationFrame( const
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
void JStage::TActor::JSGSetTextureAnimationFrame( (float))
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
void JStage::TActor::JSGGetTextureAnimationFrameMax( const
{
    /*
    .loc_0x0:
      lfs       f1, -0x76E0(r2)
      blr
    */
}
