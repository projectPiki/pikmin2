

/*
 * --INFO--
 * Address:	80453AE8
 * Size:	000090
 */
void Screen::ObjBase::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x804F
      stw       r0, 0x14(r1)
      subi      r0, r4, 0x4AD8
      li        r4, 0
      stw       r31, 0xC(r1)
      mr        r31, r3
      stw       r0, 0x0(r3)
      addi      r0, r2, 0x2828
      stw       r4, 0x10(r3)
      addi      r3, r31, 0x18
      stw       r4, 0xC(r31)
      stw       r4, 0x8(r31)
      stw       r4, 0x4(r31)
      stw       r0, 0x14(r31)
      bl        -0x436B5C
      lis       r4, 0x804E
      lis       r3, 0x804F
      subi      r4, r4, 0x7DC0
      li        r0, 0
      stw       r4, 0x0(r31)
      addi      r4, r4, 0x10
      subi      r5, r3, 0x28A8
      mr        r3, r31
      stw       r4, 0x18(r31)
      addi      r4, r5, 0x10
      stw       r5, 0x0(r31)
      stw       r4, 0x18(r31)
      stw       r0, 0x30(r31)
      stw       r0, 0x34(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80453B78
 * Size:	00002C
 */
void Screen::ObjBase::create((JKRArchive*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x4C(r12)
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
 * Address:	80453BA4
 * Size:	0000AC
 */
void Screen::ObjBase::start((Screen::StartSceneArg const*))
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
      lwz       r0, 0x30(r3)
      cmpwi     r0, 0x1
      beq-      .loc_0x6C
      bge-      .loc_0x38
      cmpwi     r0, 0
      bge-      .loc_0x44
      b         .loc_0x74

    .loc_0x38:
      cmpwi     r0, 0x4
      bge-      .loc_0x74
      b         .loc_0x90

    .loc_0x44:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x44(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x90
      li        r0, 0x1
      li        r31, 0x1
      stw       r0, 0x30(r30)
      b         .loc_0x90

    .loc_0x6C:
      li        r31, 0x1
      b         .loc_0x90

    .loc_0x74:
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x45A8
      li        r4, 0x61
      subi      r5, r5, 0x4598
      crclr     6, 0x6
      bl        -0x4295F0

    .loc_0x90:
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
 * Address:	80453C50
 * Size:	000138
 */
void Screen::ObjBase::end((Screen::EndSceneArg const*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      lwz       r0, 0x30(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0x50
      bge-      .loc_0x44
      cmpwi     r0, 0
      beq-      .loc_0xC0
      bge-      .loc_0x118
      b         .loc_0xFC

    .loc_0x44:
      cmpwi     r0, 0x4
      bge-      .loc_0xFC
      b         .loc_0xC8

    .loc_0x50:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x48(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x118
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x5C(r12)
      mtctr     r12
      bctrl
      cmplwi    r30, 0
      beq-      .loc_0xB0
      lbz       r0, 0x4(r30)
      cmplwi    r0, 0
      beq-      .loc_0xB0
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x30(r29)
      b         .loc_0xB8

    .loc_0xB0:
      li        r0, 0x3
      stw       r0, 0x30(r29)

    .loc_0xB8:
      li        r31, 0x1
      b         .loc_0x118

    .loc_0xC0:
      li        r31, 0x1
      b         .loc_0x118

    .loc_0xC8:
      cmplwi    r30, 0
      beq-      .loc_0xF4
      lbz       r0, 0x4(r30)
      cmplwi    r0, 0
      beq-      .loc_0xF4
      lwz       r12, 0x0(r3)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x30(r29)

    .loc_0xF4:
      li        r31, 0x1
      b         .loc_0x118

    .loc_0xFC:
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x45A8
      li        r4, 0x91
      subi      r5, r5, 0x4598
      crclr     6, 0x6
      bl        -0x429724

    .loc_0x118:
      lwz       r0, 0x24(r1)
      mr        r3, r31
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
 * Address:	80453D88
 * Size:	000110
 */
void Screen::ObjBase::update(void)
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
      lwz       r0, 0x30(r3)
      cmpwi     r0, 0x2
      beq-      .loc_0x88
      bge-      .loc_0x3C
      cmpwi     r0, 0
      beq-      .loc_0x48
      bge-      .loc_0x50
      b         .loc_0xF4

    .loc_0x3C:
      cmpwi     r0, 0x4
      bge-      .loc_0xF4
      b         .loc_0xC0

    .loc_0x48:
      li        r31, 0x1
      b         .loc_0xF4

    .loc_0x50:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x50(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF4
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x54(r12)
      mtctr     r12
      bctrl
      li        r0, 0x2
      stw       r0, 0x30(r30)
      b         .loc_0xF4

    .loc_0x88:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x58(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF4
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x5C(r12)
      mtctr     r12
      bctrl
      li        r0, 0x3
      stw       r0, 0x30(r30)
      b         .loc_0xF4

    .loc_0xC0:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x60(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF4
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0x64(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x30(r30)

    .loc_0xF4:
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
 * Address:	80453E98
 * Size:	000038
 */
void Screen::ObjBase::draw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, 0x30(r3)
      cmpwi     r0, 0
      beq-      .loc_0x28
      lwz       r12, 0x0(r3)
      lwz       r12, 0x68(r12)
      mtctr     r12
      bctrl

    .loc_0x28:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80453ED0
 * Size:	0000D8
 */
void Screen::ObjBase::doDraw((Graphics&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x80(r1)
      mflr      r0
      lfs       f1, 0x2830(r2)
      stw       r0, 0x84(r1)
      stw       r31, 0x7C(r1)
      mr        r31, r3
      addi      r3, r1, 0x18
      lwz       r4, -0x7628(r13)
      bl        -0x4167A0
      addi      r3, r1, 0x18
      bl        -0x4165A0
      li        r5, 0xFF
      lfs       f1, 0x2834(r2)
      stb       r5, 0x10(r1)
      addi      r3, r1, 0x18
      fmr       f2, f1
      stb       r5, 0x11(r1)
      stb       r5, 0x12(r1)
      stb       r5, 0x13(r1)
      lwz       r0, 0x10(r1)
      stb       r5, 0x8(r1)
      stw       r0, 0x14(r1)
      lbz       r4, 0x14(r1)
      lbz       r9, 0x15(r1)
      lbz       r8, 0x16(r1)
      lbz       r7, 0x17(r1)
      stb       r5, 0x9(r1)
      stb       r5, 0xA(r1)
      stb       r5, 0xB(r1)
      lwz       r0, 0x8(r1)
      stb       r4, 0x58(r1)
      stw       r0, 0xC(r1)
      lbz       r6, 0xC(r1)
      lbz       r5, 0xD(r1)
      lbz       r4, 0xE(r1)
      lbz       r0, 0xF(r1)
      stb       r9, 0x59(r1)
      stb       r8, 0x5A(r1)
      stb       r7, 0x5B(r1)
      stb       r6, 0x5C(r1)
      stb       r5, 0x5D(r1)
      stb       r4, 0x5E(r1)
      stb       r0, 0x5F(r1)
      lwz       r4, 0x14(r31)
      crset     6, 0x6
      bl        -0x41628C
      addi      r3, r1, 0x18
      li        r4, -0x1
      bl        -0x416680
      lwz       r0, 0x84(r1)
      lwz       r31, 0x7C(r1)
      mtlr      r0
      addi      r1, r1, 0x80
      blr
    */
}

/*
 * --INFO--
 * Address:	80453FA8
 * Size:	00000C
 */
void Screen::ObjBase::getDispMember(void)
{
    /*
    .loc_0x0:
      lwz       r3, 0x34(r3)
      lwz       r3, 0x21C(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80453FB4
 * Size:	00002C
 */
void Screen::ObjBase::confirmSetScene((Screen::SetSceneArg&))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x6C(r12)
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
 * Address:	80453FE0
 * Size:	00002C
 */
void Screen::ObjBase::confirmStartScene((Screen::StartSceneArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x70(r12)
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
 * Address:	8045400C
 * Size:	000034
 */
void Screen::ObjBase::confirmEndScene((Screen::EndSceneArg*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r4, 0x8(r1)
      addi      r4, r1, 0x8
      lwz       r12, 0x0(r3)
      lwz       r12, 0x74(r12)
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
 * Address:	80454040
 * Size:	000030
 */
void Screen::ObjBase::getGamePad( const
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      bl        -0x1E2C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80454070
 * Size:	000044
 */
void Screen::ObjMgrBase::__ct(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x42CF4
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x10(r31)
      stw       r0, 0xC(r31)
      stw       r0, 0x8(r31)
      stw       r0, 0x4(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	804540B4
 * Size:	000058
 */
void Screen::ObjMgrBase::registObj( (Screen::IObjBase *, Screen::SceneBase *))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r4, r5
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      mr        r3, r30
      mr        r4, r31
      bl        -0x42CE8
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
 * Address:	8045410C
 * Size:	000068
 */
void Screen::ObjMgrBase::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0x1
      stw       r30, 0x8(r1)
      lwz       r3, 0x10(r3)
      b         .loc_0x44

    .loc_0x20:
      lwz       r12, 0x0(r3)
      lwz       r30, 0x4(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x40
      li        r31, 0

    .loc_0x40:
      mr        r3, r30

    .loc_0x44:
      cmplwi    r3, 0
      bne+      .loc_0x20
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
 * Address:	80454174
 * Size:	00005C
 */
void Screen::ObjMgrBase::draw( (Graphics &))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      stw       r30, 0x8(r1)
      mr        r30, r4
      lwz       r3, 0x10(r3)
      b         .loc_0x3C

    .loc_0x20:
      lwz       r12, 0x0(r3)
      mr        r4, r30
      lwz       r31, 0x4(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r3, r31

    .loc_0x3C:
      cmplwi    r3, 0
      bne+      .loc_0x20
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
 * Address:	804541D0
 * Size:	000098
 */
void Screen::ObjMgrBase::search( (Screen::SceneBase *, char *))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r5
      stw       r28, 0x10(r1)
      mr        r28, r4
      lwz       r31, 0x10(r3)
      b         .loc_0x6C

    .loc_0x2C:
      mr        r3, r31
      lwz       r30, 0x4(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      cmplw     r3, r28
      bne-      .loc_0x68
      lwz       r3, 0x14(r31)
      mr        r4, r29
      bl        -0x389B64
      cmpwi     r3, 0
      bne-      .loc_0x68
      mr        r3, r31
      b         .loc_0x78

    .loc_0x68:
      mr        r31, r30

    .loc_0x6C:
      cmplwi    r31, 0
      bne+      .loc_0x2C
      li        r3, 0

    .loc_0x78:
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
 * Address:	80454268
 * Size:	000078
 */
void Screen::ObjMgrBase::start( (Screen::StartSceneArg *))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0x1
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r4
      lwz       r3, 0x10(r3)
      b         .loc_0x50

    .loc_0x28:
      lwz       r12, 0x0(r3)
      mr        r4, r29
      lwz       r30, 0x4(r3)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r31, 0

    .loc_0x4C:
      mr        r3, r30

    .loc_0x50:
      cmplwi    r3, 0
      bne+      .loc_0x28
      lwz       r0, 0x24(r1)
      mr        r3, r31
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
 * Address:	804542E0
 * Size:	000078
 */
void Screen::ObjMgrBase::end( (Screen::EndSceneArg *))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0x1
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r4
      lwz       r3, 0x10(r3)
      b         .loc_0x50

    .loc_0x28:
      lwz       r12, 0x0(r3)
      mr        r4, r29
      lwz       r30, 0x4(r3)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x4C
      li        r31, 0

    .loc_0x4C:
      mr        r3, r30

    .loc_0x50:
      cmplwi    r3, 0
      bne+      .loc_0x28
      lwz       r0, 0x24(r1)
      mr        r3, r31
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
 * Address:	80454358
 * Size:	00007C
 */
void Screen::ObjMgrBase::confirmSetScene( (Screen::SetSceneArg &))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0x1
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r4
      lwz       r3, 0x10(r3)
      b         .loc_0x54

    .loc_0x28:
      lwz       r12, 0x0(r3)
      mr        r4, r29
      lwz       r30, 0x4(r3)
      lwz       r12, 0x38(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x50
      li        r31, 0
      b         .loc_0x5C

    .loc_0x50:
      mr        r3, r30

    .loc_0x54:
      cmplwi    r3, 0
      bne+      .loc_0x28

    .loc_0x5C:
      lwz       r0, 0x24(r1)
      mr        r3, r31
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
 * Address:	804543D4
 * Size:	00007C
 */
void Screen::ObjMgrBase::confirmStartScene( (Screen::StartSceneArg *))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0x1
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r4
      lwz       r3, 0x10(r3)
      b         .loc_0x54

    .loc_0x28:
      lwz       r12, 0x0(r3)
      mr        r4, r29
      lwz       r30, 0x4(r3)
      lwz       r12, 0x3C(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x50
      li        r31, 0
      b         .loc_0x5C

    .loc_0x50:
      mr        r3, r30

    .loc_0x54:
      cmplwi    r3, 0
      bne+      .loc_0x28

    .loc_0x5C:
      lwz       r0, 0x24(r1)
      mr        r3, r31
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
 * Address:	80454450
 * Size:	00007C
 */
void Screen::ObjMgrBase::confirmEndScene( (Screen::EndSceneArg *))
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      li        r31, 0x1
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r4
      lwz       r3, 0x10(r3)
      b         .loc_0x54

    .loc_0x28:
      lwz       r12, 0x0(r3)
      mr        r4, r29
      lwz       r30, 0x4(r3)
      lwz       r12, 0x40(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x50
      li        r31, 0
      b         .loc_0x5C

    .loc_0x50:
      mr        r3, r30

    .loc_0x54:
      cmplwi    r3, 0
      bne+      .loc_0x28

    .loc_0x5C:
      lwz       r0, 0x24(r1)
      mr        r3, r31
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
 * Address:	804544CC
 * Size:	000008
 */
void @24@Screen::ObjBase::__dt(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x18
      b         -0x146C68
    */
}
