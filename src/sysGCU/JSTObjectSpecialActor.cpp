

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80437400
 * Size:	000058
 */
void Game::P2JST::ObjectSpecialActor::__ct((char const*, Game::MoviePlayer*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x8AB4
      lis       r4, 0x804F
      mr        r3, r31
      subi      r4, r4, 0x37D4
      stw       r4, 0x0(r31)
      addi      r0, r4, 0x8C
      stw       r0, 0x4(r31)
      lwz       r12, 0x0(r31)
      lwz       r12, 0xA8(r12)
      mtctr     r12
      bctrl
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
 * Address:	80437458
 * Size:	00005C
 */
void Game::P2JST::ObjectSpecialActor::reset(void)
{
    /*
    .loc_0x0:
      li        r4, 0
      li        r0, -0x1
      stw       r4, 0x70(r3)
      lfs       f0, 0x2500(r2)
      stw       r0, 0x74(r3)
      stw       r0, 0x78(r3)
      stw       r0, 0x7C(r3)
      stw       r0, 0x80(r3)
      stw       r0, 0x84(r3)
      stw       r0, 0x88(r3)
      stw       r0, 0x8C(r3)
      stw       r0, 0x90(r3)
      stw       r0, 0x94(r3)
      stw       r0, 0x98(r3)
      stw       r0, 0x9C(r3)
      stw       r0, 0xA0(r3)
      stw       r0, 0xA4(r3)
      stw       r0, 0xA8(r3)
      stw       r0, 0xAC(r3)
      stw       r0, 0xB0(r3)
      stb       r4, 0xB4(r3)
      stfs      f0, 0xB8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	804374B4
 * Size:	000004
 */
void Game::P2JST::ObjectSpecialActor::stop(void)
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	804374B8
 * Size:	000254
 */
void Game::P2JST::ObjectSpecialActor::update(void)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lfs       f1, 0x2500(r2)
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      mr        r29, r3
      lfs       f2, 0xB8(r3)
      fcmpo     cr0, f2, f1
      ble-      .loc_0x54
      lwz       r3, -0x6514(r13)
      lfs       f0, 0x54(r3)
      fsubs     f0, f2, f0
      stfs      f0, 0xB8(r29)
      lfs       f0, 0xB8(r29)
      fcmpo     cr0, f0, f1
      cror      2, 0, 0x2
      bne-      .loc_0x54
      li        r0, 0x1
      stb       r0, 0xB4(r29)

    .loc_0x54:
      lbz       r0, 0xB4(r29)
      cmplwi    r0, 0
      beq-      .loc_0x74
      lwz       r3, -0x6C18(r13)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x9C(r12)
      mtctr     r12
      bctrl

    .loc_0x74:
      mr        r31, r29
      li        r30, 0
      b         .loc_0x1E0

    .loc_0x80:
      lwz       r4, 0x74(r31)
      cmpwi     r4, 0x64
      bgt-      .loc_0xA8
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0xB8(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1D8

    .loc_0xA8:
      cmpwi     r4, 0xC8
      bgt-      .loc_0xEC
      cmpwi     r4, 0x66
      beq-      .loc_0xDC
      bge-      .loc_0x1D8
      cmpwi     r4, 0x65
      bge-      .loc_0xC8
      b         .loc_0x1D8

    .loc_0xC8:
      lwz       r3, -0x6960(r13)
      li        r4, 0x2
      li        r5, 0
      bl        -0x1E5040
      b         .loc_0x1D8

    .loc_0xDC:
      lwz       r3, -0x6960(r13)
      li        r4, 0x2
      bl        -0x1E4FC0
      b         .loc_0x1D8

    .loc_0xEC:
      cmpwi     r4, 0x12C
      bgt-      .loc_0x150
      cmpwi     r4, 0xCB
      beq-      .loc_0x130
      bge-      .loc_0x1D8
      cmpwi     r4, 0xC9
      beq-      .loc_0x110
      b         .loc_0x1D8
      b         .loc_0x1D8

    .loc_0x110:
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x1F0(r3)
      rlwinm.   r0,r0,0,30,30
      bne-      .loc_0x1D8
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      bl        -0x1FBDD4
      b         .loc_0x1D8

    .loc_0x130:
      lwz       r3, -0x64AC(r13)
      lwz       r0, 0x1F0(r3)
      rlwinm.   r0,r0,0,30,30
      bne-      .loc_0x1D8
      lwz       r3, -0x6C18(r13)
      lwz       r3, 0x58(r3)
      bl        -0x1FBDF4
      b         .loc_0x1D8

    .loc_0x150:
      cmpwi     r4, 0x190
      bgt-      .loc_0x1B8
      cmpwi     r4, 0x12E
      beq-      .loc_0x194
      bge-      .loc_0x1D8
      cmpwi     r4, 0x12D
      bge-      .loc_0x170
      b         .loc_0x1D8

    .loc_0x170:
      lfs       f0, 0x2504(r2)
      stfs      f0, 0xB8(r29)
      lwz       r3, -0x6C18(r13)
      lfs       f1, 0xB8(r29)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x90(r12)
      mtctr     r12
      bctrl
      b         .loc_0x1D8

    .loc_0x194:
      lwz       r3, -0x6C18(r13)
      lfs       f1, 0x2504(r2)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x94(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stb       r0, 0xB4(r29)
      b         .loc_0x1D8

    .loc_0x1B8:
      lis       r3, 0x804A
      lis       r5, 0x804A
      mr        r6, r4
      li        r4, 0xA6
      subi      r3, r3, 0x57A8
      subi      r5, r5, 0x578C
      crclr     6, 0x6
      bl        -0x40D04C

    .loc_0x1D8:
      addi      r31, r31, 0x4
      addi      r30, r30, 0x1

    .loc_0x1E0:
      lwz       r0, 0x70(r29)
      cmpw      r30, r0
      blt+      .loc_0x80
      li        r3, 0
      li        r0, -0x1
      stw       r3, 0x70(r29)
      stw       r0, 0x74(r29)
      stw       r0, 0x78(r29)
      stw       r0, 0x7C(r29)
      stw       r0, 0x80(r29)
      stw       r0, 0x84(r29)
      stw       r0, 0x88(r29)
      stw       r0, 0x8C(r29)
      stw       r0, 0x90(r29)
      stw       r0, 0x94(r29)
      stw       r0, 0x98(r29)
      stw       r0, 0x9C(r29)
      stw       r0, 0xA0(r29)
      stw       r0, 0xA4(r29)
      stw       r0, 0xA8(r29)
      stw       r0, 0xAC(r29)
      stw       r0, 0xB0(r29)
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
 * Address:	8043770C
 * Size:	000084
 */
void Game::P2JST::ObjectSpecialActor::JSGSetAnimation((unsigned long))
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
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x70(r30)
      cmpwi     r0, 0x10
      blt-      .loc_0x54
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x57A8
      li        r4, 0xBB
      subi      r5, r5, 0x576C
      crclr     6, 0x6
      bl        -0x40D11C

    .loc_0x54:
      lwz       r4, 0x70(r30)
      addi      r3, r4, 0x1
      rlwinm    r0,r4,2,0,29
      stw       r3, 0x70(r30)
      add       r3, r30, r0
      stw       r31, 0x74(r3)
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
 * Address:	80437790
 * Size:	000004
 */
void Game::P2JST::ObjectSpecialActor::parseUserData_((unsigned long,
                                                      void const*))
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80437794
 * Size:	000068
 */
void Game::P2JST::ObjectSpecialActor::__dt(void)
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
      beq-      .loc_0x4C
      lis       r5, 0x804F
      li        r4, 0
      subi      r5, r5, 0x37D4
      stw       r5, 0x0(r30)
      addi      r0, r5, 0x8C
      stw       r0, 0x4(r30)
      bl        -0x8D9C
      extsh.    r0, r31
      ble-      .loc_0x4C
      mr        r3, r30
      bl        -0x413728

    .loc_0x4C:
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
 * Address:	804377FC
 * Size:	000028
 */
void __sinit_JSTObjectSpecialActor_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804F
      stw       r0, -0x6438(r13)
      stfsu     f0, -0x37E0(r3)
      stfs      f0, -0x6434(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80437824
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectSpecialActor::parseUserData_((unsigned long,
                                                          void const*))
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x98
    */
}

/*
 * --INFO--
 * Address:	8043782C
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectSpecialActor::stop(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x37C
    */
}

/*
 * --INFO--
 * Address:	80437834
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectSpecialActor::update(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x380
    */
}

/*
 * --INFO--
 * Address:	8043783C
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectSpecialActor::reset(void)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x4
      b         -0x3E8
    */
}
