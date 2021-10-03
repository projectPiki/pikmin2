

/*
 * --INFO--
 * Address:	8041C434
 * Size:	00000C
 */
void MapCode::Code::getAttribute(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0x0(r3)
      rlwinm    r3,r0,0,28,31
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void MapCode::Code::getAttributeName(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041C440
 * Size:	00000C
 */
void MapCode::Code::getSlipCode(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0x0(r3)
      rlwinm    r3,r0,28,30,31
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void MapCode::Code::getSlipCodeName(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041C44C
 * Size:	00000C
 */
void MapCode::Code::isBald(void)
{
    /*
    .loc_0x0:
      lbz       r0, 0x0(r3)
      rlwinm    r3,r0,26,31,31
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void MapCode::Code::write((Stream&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void MapCode::Code::read((Stream&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041C458
 * Size:	000024
 */
void MapCode::Code::setCode((int, int, bool))
{
    /*
    .loc_0x0:
      rlwinm    r6,r6,0,24,31
      rlwinm    r5,r5,4,0,27
      neg       r0, r6
      or        r0, r0, r6
      rlwimi    r5,r4,0,28,31
      rlwinm    r0,r0,7,25,25
      or        r0, r5, r0
      stb       r0, 0x0(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C47C
 * Size:	00007C
 */
void MapCode::Mgr::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0xB100
      lis       r4, 0x804B
      lis       r3, 0x804F
      subi      r0, r4, 0x5324
      lis       r4, 0x804F
      stw       r0, 0x0(r31)
      subi      r0, r3, 0x4650
      lis       r3, 0x804F
      li        r6, 0
      stw       r0, 0x0(r31)
      subi      r5, r4, 0x4698
      li        r4, 0x1
      subi      r0, r3, 0x46E0
      stb       r6, 0x18(r31)
      mr        r3, r31
      stw       r5, 0x0(r31)
      stb       r4, 0x18(r31)
      stw       r6, 0x20(r31)
      stw       r6, 0x1C(r31)
      stw       r6, 0x24(r31)
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
 * Address:	8041C4F8
 * Size:	000090
 */
void MapCode::Mgr::CodeArray::__dt(void)
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
      subi      r0, r4, 0x46E0
      stw       r0, 0x0(r30)
      beq-      .loc_0x64
      lis       r4, 0x804F
      subi      r0, r4, 0x4698
      stw       r0, 0x0(r30)
      beq-      .loc_0x64
      lis       r4, 0x804F
      subi      r0, r4, 0x4650
      stw       r0, 0x0(r30)
      beq-      .loc_0x64
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        -0xAFD0

    .loc_0x64:
      extsh.    r0, r31
      ble-      .loc_0x74
      mr        r3, r30
      bl        -0x3F84B4

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
 * Address:	8041C588
 * Size:	000080
 */
void ArrayContainer<MapCode::Code>::~ArrayContainer()
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
      subi      r0, r4, 0x4698
      stw       r0, 0x0(r30)
      beq-      .loc_0x54
      lis       r4, 0x804F
      subi      r0, r4, 0x4650
      stw       r0, 0x0(r30)
      beq-      .loc_0x54
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        -0xB050

    .loc_0x54:
      extsh.    r0, r31
      ble-      .loc_0x64
      mr        r3, r30
      bl        -0x3F8534

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
 * Address:	8041C608
 * Size:	000070
 */
void Container<MapCode::Code>::~Container()
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
      subi      r0, r4, 0x4650
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        -0xB0C0

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x3F85A4

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
 * Address:	........
 * Size:	000094
 */
void MapCode::Mgr::__dt(void)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void MapCode::Mgr::write((Stream&))
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041C678
 * Size:	0000E4
 */
void ArrayContainer<MapCode::Code>::write(Stream&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      lwz       r4, 0x14(r3)
      mr        r3, r29
      bl        -0x8688
      lwz       r4, 0x414(r29)
      mr        r3, r29
      bl        -0x827C
      lwz       r4, 0x20(r28)
      mr        r3, r29
      bl        -0x6EFC
      mr        r3, r29
      addi      r4, r2, 0x2048
      crclr     6, 0x6
      bl        -0x84F0
      lis       r3, 0x804A
      li        r30, 0
      subi      r31, r3, 0x6848
      b         .loc_0xB0

    .loc_0x68:
      lwz       r4, 0x414(r29)
      mr        r3, r29
      bl        -0x82B4
      mr        r3, r28
      lwz       r0, 0x24(r28)
      lwz       r12, 0x0(r28)
      mr        r4, r29
      add       r5, r0, r30
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r6, 0x20(r28)
      mr        r3, r29
      mr        r4, r31
      mr        r5, r30
      crclr     6, 0x6
      bl        -0x8544
      addi      r30, r30, 0x1

    .loc_0xB0:
      lwz       r0, 0x20(r28)
      cmpw      r30, r0
      blt+      .loc_0x68
      mr        r3, r29
      bl        -0x8698
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
 * Address:	8041C75C
 * Size:	000004
 */
void ArrayContainer<MapCode::Code>::writeObject(Stream&, MapCode::Code&)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C760
 * Size:	00002C
 */
void MapCode::Mgr::read((Stream&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x38(r12)
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
 * Address:	8041C78C
 * Size:	0000A0
 */
void ArrayContainer<MapCode::Code>::read(Stream&)
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
      mr        r3, r30
      bl        -0x7D20
      stw       r3, 0x20(r29)
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r4, 0x20(r29)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x20(r29)
      li        r31, 0
      stw       r0, 0x1C(r29)
      b         .loc_0x78

    .loc_0x54:
      mr        r3, r29
      lwz       r0, 0x24(r29)
      lwz       r12, 0x0(r29)
      mr        r4, r30
      add       r5, r0, r31
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      addi      r31, r31, 0x1

    .loc_0x78:
      lwz       r0, 0x20(r29)
      cmpw      r31, r0
      blt+      .loc_0x54
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
 * Address:	8041C82C
 * Size:	000004
 */
void ArrayContainer<MapCode::Code>::readObject(Stream&, MapCode::Code&)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C830
 * Size:	00004C
 */
void ArrayContainer<MapCode::Code>::alloc(int)
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
      bl        -0x3F88A4
      stw       r3, 0x24(r30)
      li        r0, 0
      stw       r31, 0x20(r30)
      stw       r0, 0x1C(r30)
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
 * Address:	8041C87C
 * Size:	000044
 */
void MapCode::Mgr::attachCodes((Sys::TriangleTable*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      li        r8, 0
      li        r7, 0
      b         .loc_0x30

    .loc_0x10:
      lwz       r6, 0x24(r3)
      addi      r0, r7, 0x5C
      lwz       r5, 0x24(r4)
      addi      r7, r7, 0x60
      lbzx      r6, r6, r8
      addi      r8, r8, 0x1
      stb       r6, 0x8(r1)
      stbx      r6, r5, r0

    .loc_0x30:
      lwz       r0, 0x20(r3)
      cmpw      r8, r0
      blt+      .loc_0x10
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C8C0
 * Size:	00002C
 */
void MapCode::Mgr::CodeArray::writeObject((Stream&, MapCode::Code&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      lbz       r0, 0x0(r5)
      mr        r4, r0
      bl        -0x7268
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C8EC
 * Size:	000034
 */
void MapCode::Mgr::CodeArray::readObject((Stream&, MapCode::Code&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r3, r4
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r5
      bl        -0x8468
      stb       r3, 0x0(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C920
 * Size:	000028
 */
void ArrayContainer<MapCode::Code>::addOne(MapCode::Code&)
{
    /*
    .loc_0x0:
      lwz       r6, 0x1C(r3)
      lwz       r0, 0x20(r3)
      cmpw      r6, r0
      bgelr-
      lwz       r5, 0x24(r3)
      addi      r0, r6, 0x1
      stw       r0, 0x1C(r3)
      lbz       r0, 0x0(r4)
      stbx      r0, r5, r6
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C948
 * Size:	000010
 */
void ArrayContainer<MapCode::Code>::setArray(MapCode::Code*, int)
{
    /*
    .loc_0x0:
      stw       r4, 0x24(r3)
      stw       r5, 0x20(r3)
      stw       r5, 0x1C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C958
 * Size:	00000C
 */
void ArrayContainer<MapCode::Code>::get(void*)
{
    /*
    .loc_0x0:
      lwz       r0, 0x24(r3)
      add       r3, r0, r4
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C964
 * Size:	000008
 */
void ArrayContainer<MapCode::Code>::getNext(void*)
{
    /*
    .loc_0x0:
      addi      r3, r4, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C96C
 * Size:	000008
 */
void ArrayContainer<MapCode::Code>::getStart()
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C974
 * Size:	000008
 */
void ArrayContainer<MapCode::Code>::getEnd()
{
    /*
    .loc_0x0:
      lwz       r3, 0x1C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C97C
 * Size:	00000C
 */
void ArrayContainer<MapCode::Code>::getAt(int)
{
    /*
    .loc_0x0:
      lwz       r0, 0x24(r3)
      add       r3, r0, r4
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C988
 * Size:	000008
 */
void ArrayContainer<MapCode::Code>::getTo()
{
    /*
    .loc_0x0:
      lwz       r3, 0x20(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C990
 * Size:	00002C
 */
void Container<MapCode::Code>::getObject(void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
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
 * Address:	8041C9BC
 * Size:	000008
 */
void Container<MapCode::Code>::getAt(int)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	8041C9C4
 * Size:	000008
 */
void Container<MapCode::Code>::getTo()
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}
