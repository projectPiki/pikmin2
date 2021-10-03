

/*
 * --INFO--
 * Address:	8000CAA4
 * Size:	000090
 */
void JStudio::TControl::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      bl        0x3DA4
      lis       r4, 0x804A
      addi      r3, r31, 0x60
      subi      r0, r4, 0x1974
      stw       r0, 0x0(r31)
      bl        -0xBF8
      li        r0, 0
      lis       r3, 0x8047
      stb       r0, 0x74(r31)
      addi      r7, r3, 0x3340
      lfs       f1, -0x7F68(r2)
      mr        r3, r31
      stb       r0, 0x75(r31)
      addi      r4, r1, 0x8
      lwz       r6, 0x0(r7)
      lwz       r5, 0x4(r7)
      lwz       r0, 0x8(r7)
      stw       r6, 0x8(r1)
      stw       r5, 0xC(r1)
      stw       r0, 0x10(r1)
      bl        0x9C
      lfs       f1, -0x7F68(r2)
      mr        r3, r31
      addi      r4, r1, 0x8
      bl        0x10C
      lwz       r0, 0x24(r1)
      mr        r3, r31
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	8000CB34
 * Size:	000070
 */
void JStudio::TControl::__dt(void)
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
      lis       r4, 0x804A
      addi      r3, r30, 0x60
      subi      r0, r4, 0x1974
      li        r4, -0x1
      stw       r0, 0x0(r30)
      bl        -0xC64
      mr        r3, r30
      li        r4, 0
      bl        0x3DD8
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        0x17530

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
 * Address:	8000CBA4
 * Size:	000080
 */
void JStudio::TControl::transformOnSet_setOrigin((Vec const&, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lfs       f2, 0x0(r4)
      fmr       f4, f1
      stw       r0, 0x44(r1)
      lfs       f0, -0x7F64(r2)
      stw       r31, 0x3C(r1)
      mr        r31, r4
      lfs       f3, 0x4(r31)
      fmuls     f1, f0, f4
      stw       r30, 0x38(r1)
      mr        r30, r3
      addi      r3, r1, 0x8
      li        r4, 0x79
      stfs      f2, 0x78(r30)
      lfs       f2, 0x8(r31)
      stfs      f3, 0x7C(r30)
      stfs      f2, 0x80(r30)
      stfs      f4, 0x90(r30)
      bl        0xDD924
      lfs       f1, 0x0(r31)
      addi      r3, r1, 0x8
      lfs       f2, 0x4(r31)
      addi      r4, r30, 0x98
      lfs       f3, 0x8(r31)
      bl        0xDDB80
      lwz       r0, 0x44(r1)
      lwz       r31, 0x3C(r1)
      lwz       r30, 0x38(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	8000CC24
 * Size:	000094
 */
void JStudio::TControl::transformOnGet_setOrigin((Vec const&, float))
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      stw       r0, 0x84(r1)
      stfd      f31, 0x70(r1)
      psq_st    f31,0x78(r1),0,0
      stw       r31, 0x6C(r1)
      lfs       f0, 0x0(r4)
      mr        r31, r3
      lfs       f3, 0x4(r4)
      fmr       f31, f1
      stfs      f0, 0x84(r3)
      fneg      f1, f0
      lfs       f0, 0x8(r4)
      fneg      f2, f3
      stfs      f3, 0x88(r3)
      fneg      f3, f0
      addi      r3, r1, 0x38
      stfs      f0, 0x8C(r31)
      stfs      f31, 0x94(r31)
      bl        0xDDAE4
      fneg      f0, f31
      lfs       f1, -0x7F64(r2)
      addi      r3, r1, 0x8
      li        r4, 0x79
      fmuls     f1, f1, f0
      bl        0xDD88C
      addi      r3, r1, 0x8
      addi      r4, r1, 0x38
      addi      r5, r31, 0xC8
      bl        0xDD668
      psq_l     f31,0x78(r1),0,0
      lwz       r0, 0x84(r1)
      lfd       f31, 0x70(r1)
      lwz       r31, 0x6C(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void JStudio::TControl::forward_value((unsigned long))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000CCB8
 * Size:	000048
 */
void JStudio::TCreateObject::__dt(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x30
      lis       r5, 0x804A
      extsh.    r0, r4
      subi      r0, r5, 0x1984
      stw       r0, 0x0(r31)
      ble-      .loc_0x30
      bl        0x173D0

    .loc_0x30:
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
 * Address:	8000CD00
 * Size:	000084
 */
void JStudio::TFactory::__dt(void)
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
      addi      r3, r30, 0x10
      subi      r0, r4, 0x1998
      li        r4, -0x1
      stw       r0, 0x0(r30)
      bl        -0xC18
      addic.    r0, r30, 0x4
      beq-      .loc_0x4C
      addi      r3, r30, 0x4
      li        r4, 0
      bl        0x1A59C

    .loc_0x4C:
      mr        r3, r30
      li        r4, 0
      bl        0x3EB4
      extsh.    r0, r31
      ble-      .loc_0x68
      mr        r3, r30
      bl        0x17350

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
 * Address:	8000CD84
 * Size:	000050
 */
void JStudio::TFactory::appendCreateObject((JStudio::TCreateObject*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      mr        r5, r3
      mr        r6, r4
      stw       r0, 0x24(r1)
      addi      r0, r5, 0x8
      addi      r4, r5, 0x4
      addi      r3, r1, 0x10
      stw       r0, 0xC(r1)
      addi      r5, r1, 0x14
      addi      r6, r6, 0x4
      stw       r0, 0x8(r1)
      stw       r0, 0x1C(r1)
      stw       r0, 0x18(r1)
      stw       r0, 0x14(r1)
      bl        0x1A560
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JStudio::TFactory::removeCreateObject((JStudio::TCreateObject*))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JStudio::TFactory::removeCreateObject_all(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000CDD4
 * Size:	0000B4
 */
void
    JStudio::TFactory::create((JStudio::stb::data::TParse_TBlock_object const&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stw       r31, 0x4C(r1)
      mr        r31, r4
      lwzu      r0, 0x8(r3)
      stw       r3, 0x24(r1)
      stw       r3, 0x20(r1)
      stw       r3, 0x34(r1)
      stw       r3, 0x30(r1)
      stw       r0, 0x1C(r1)
      stw       r0, 0x18(r1)
      stw       r0, 0x2C(r1)
      stw       r0, 0x28(r1)
      stw       r0, 0x3C(r1)
      stw       r3, 0x40(r1)
      b         .loc_0x7C

    .loc_0x44:
      lwz       r6, 0x3C(r1)
      mr        r5, r31
      addi      r4, r1, 0x38
      subi      r3, r6, 0x4
      lwz       r0, 0x0(r6)
      lwz       r12, -0x4(r6)
      stw       r0, 0x3C(r1)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x7C
      lwz       r3, 0x38(r1)
      b         .loc_0xA0

    .loc_0x7C:
      lwz       r3, 0x40(r1)
      lwz       r0, 0x3C(r1)
      stw       r3, 0x14(r1)
      cmplw     r0, r3
      stw       r0, 0x10(r1)
      stw       r3, 0xC(r1)
      stw       r0, 0x8(r1)
      bne+      .loc_0x44
      li        r3, 0

    .loc_0xA0:
      lwz       r0, 0x54(r1)
      lwz       r31, 0x4C(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	8000CE88
 * Size:	000054
 */
void JStudio::TParse::__ct((JStudio::TControl*))
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
      bl        0x3DF0
      lis       r4, 0x804A
      addi      r3, r30, 0x8
      subi      r0, r4, 0x19B8
      addi      r4, r31, 0x60
      stw       r0, 0x0(r30)
      bl        -0xA14
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
 * Address:	8000CEDC
 * Size:	000070
 */
void JStudio::TParse::__dt(void)
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
      lis       r4, 0x804A
      addi      r3, r30, 0x8
      subi      r0, r4, 0x19B8
      li        r4, -0x1
      stw       r0, 0x0(r30)
      bl        -0xA48
      mr        r3, r30
      li        r4, 0
      bl        0x3D98
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        0x17188

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
 * Address:	8000CF4C
 * Size:	000078
 */
void JStudio::TParse::parseHeader((JStudio::stb::data::TParse_THeader const&,
                                   unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lwz       r3, 0x0(r4)
      subi      r4, r2, 0x7F60
      stw       r0, 0x14(r1)
      li        r5, 0x8
      stw       r31, 0xC(r1)
      addi      r31, r3, 0x10
      mr        r3, r31
      bl        0xBA078
      cmpwi     r3, 0
      beq-      .loc_0x38
      li        r3, 0
      b         .loc_0x64

    .loc_0x38:
      lhz       r4, 0xE(r31)
      cmplwi    r4, 0x2
      bge-      .loc_0x4C
      li        r3, 0
      b         .loc_0x64

    .loc_0x4C:
      subfic    r0, r4, 0x4
      li        r3, 0x4
      orc       r3, r3, r4
      rlwinm    r0,r0,31,1,31
      sub       r0, r3, r0
      rlwinm    r3,r0,1,31,31

    .loc_0x64:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8000CFC4
 * Size:	000044
 */
void JStudio::TParse::parseBlock_block(
    (JStudio::stb::data::TParse_TBlock const&, unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lwz       r7, 0x0(r4)
      lis       r6, 0x4A46
      stw       r0, 0x14(r1)
      addi      r0, r6, 0x5642
      lwz       r6, 0x4(r7)
      cmpw      r6, r0
      beq-      .loc_0x28
      b         .loc_0x30

    .loc_0x28:
      bl        .loc_0x44
      b         .loc_0x34

    .loc_0x30:
      bl        0x3E44

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x44:
    */
}

/*
 * --INFO--
 * Address:	8000D008
 * Size:	000060
 */
void JStudio::TParse::parseBlock_block_fvb_(
    (JStudio::stb::data::TParse_TBlock const&, unsigned long))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lwz       r4, 0x0(r4)
      rlwinm    r6,r5,0,28,31
      stw       r0, 0x14(r1)
      rlwinm.   r0,r5,0,27,27
      addi      r4, r4, 0x8
      beq-      .loc_0x24
      ori       r6, r6, 0x10

    .loc_0x24:
      rlwinm.   r0,r5,0,26,26
      beq-      .loc_0x30
      ori       r6, r6, 0x20

    .loc_0x30:
      rlwinm.   r0,r5,0,25,25
      beq-      .loc_0x3C
      ori       r6, r6, 0x40

    .loc_0x3C:
      stw       r4, 0x8(r1)
      mr        r5, r6
      addi      r3, r3, 0x8
      addi      r4, r1, 0x8
      bl        0x1A184
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}
