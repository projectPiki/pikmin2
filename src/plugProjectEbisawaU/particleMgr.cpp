

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
 * Address:	803BAF70
 * Size:	000044
 */
void ParticleMgr::globalInstance()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, -0x65E8(r13)
      cmplwi    r0, 0
      bne-      .loc_0x34
      li        r3, 0xAC
      bl        -0x3970E8
      mr.       r0, r3
      beq-      .loc_0x30
      bl        0x64
      mr        r0, r3

    .loc_0x30:
      stw       r0, -0x65E8(r13)

    .loc_0x34:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BAFB4
 * Size:	000048
 */
void ParticleMgr::deleteInstance()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, -0x65E8(r13)
      cmplwi    r3, 0
      beq-      .loc_0x38
      beq-      .loc_0x30
      lwz       r12, 0x0(r3)
      li        r4, 0x1
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl

    .loc_0x30:
      li        r0, 0
      stw       r0, -0x65E8(r13)

    .loc_0x38:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BAFFC
 * Size:	000114
 */
void ParticleMgr::ParticleMgr()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      stw       r29, 0x14(r1)
      bl        0x56378
      lis       r3, 0x804E
      addi      r30, r31, 0x1C
      addi      r0, r3, 0x7694
      stw       r0, 0x0(r31)
      mr        r3, r30
      bl        0x56360
      lis       r4, 0x804B
      lis       r3, 0x804E
      subi      r0, r4, 0x5324
      lis       r5, 0x804B
      stw       r0, 0x0(r30)
      addi      r0, r3, 0x77E4
      lis       r4, 0x804E
      lis       r3, 0x804E
      stw       r0, 0x0(r30)
      li        r0, 0
      addi      r6, r4, 0x7768
      addi      r4, r3, 0x76E8
      stb       r0, 0x18(r30)
      subi      r0, r5, 0x4A10
      addi      r29, r30, 0x20
      addi      r5, r6, 0x2C
      stw       r0, 0x1C(r30)
      addi      r0, r4, 0x2C
      mr        r3, r29
      stw       r6, 0x0(r30)
      stw       r5, 0x1C(r30)
      stw       r4, 0x0(r30)
      stw       r0, 0x1C(r30)
      bl        0x56300
      lis       r3, 0x804E
      addi      r30, r31, 0x60
      addi      r0, r3, 0x76D8
      stw       r0, 0x0(r29)
      mr        r3, r30
      bl        0x562E8
      lis       r3, 0x804B
      lis       r4, 0x804E
      addi      r0, r3, 0xCEC
      lis       r3, 0x8049
      stw       r0, 0x0(r30)
      addi      r0, r4, 0x76BC
      addi      r5, r3, 0x5BE0
      li        r4, 0
      stw       r0, 0x0(r30)
      li        r0, 0xC8
      mr        r3, r31
      stw       r5, 0x14(r31)
      stw       r4, 0xA0(r31)
      stw       r4, 0x98(r31)
      stw       r4, 0x9C(r31)
      stw       r4, 0x80(r31)
      stw       r0, 0xA8(r31)
      stw       r4, 0x18(r31)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803BB110
 * Size:	000070
 */
void ModelEffectDataRoot::~ModelEffectDataRoot()
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
      lis       r4, 0x804E
      addi      r0, r4, 0x76BC
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      addi      r0, r5, 0xCEC
      stw       r0, 0x0(r30)
      bl        0x56438

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x3970AC

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
 * Address:	803BB180
 * Size:	0000C8
 */
void NodeObjectMgr<ModelEffect>::~NodeObjectMgr()
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
      beq-      .loc_0xAC
      lis       r3, 0x804E
      addic.    r0, r30, 0x20
      addi      r3, r3, 0x76E8
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x54
      lis       r4, 0x804E
      addi      r3, r30, 0x20
      addi      r0, r4, 0x76D8
      li        r4, 0
      stw       r0, 0x20(r30)
      bl        0x563B8

    .loc_0x54:
      cmplwi    r30, 0
      beq-      .loc_0x9C
      lis       r3, 0x804E
      addi      r3, r3, 0x7768
      stw       r3, 0x0(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x9C
      lis       r3, 0x804E
      addi      r0, r3, 0x77E4
      stw       r0, 0x0(r30)
      beq-      .loc_0x9C
      lis       r4, 0x804B
      mr        r3, r30
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x0(r30)
      bl        0x56370

    .loc_0x9C:
      extsh.    r0, r31
      ble-      .loc_0xAC
      mr        r3, r30
      bl        -0x397174

    .loc_0xAC:
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
 * Address:	803BB248
 * Size:	000060
 */
void TObjectNode<ModelEffect>::~TObjectNode()
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
      lis       r5, 0x804E
      li        r4, 0
      addi      r0, r5, 0x76D8
      stw       r0, 0x0(r30)
      bl        0x56310
      extsh.    r0, r31
      ble-      .loc_0x44
      mr        r3, r30
      bl        -0x3971D4

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
 * Address:	803BB2A8
 * Size:	000088
 */
void ObjectMgr<ModelEffect>::~ObjectMgr()
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
      beq-      .loc_0x6C
      lis       r4, 0x804E
      addi      r4, r4, 0x7768
      stw       r4, 0x0(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x1C(r30)
      beq-      .loc_0x5C
      lis       r4, 0x804E
      addi      r0, r4, 0x77E4
      stw       r0, 0x0(r30)
      beq-      .loc_0x5C
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x56288

    .loc_0x5C:
      extsh.    r0, r31
      ble-      .loc_0x6C
      mr        r3, r30
      bl        -0x39725C

    .loc_0x6C:
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
 * Address:	803BB330
 * Size:	000070
 */
void Container<ModelEffect>::~Container()
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
      lis       r4, 0x804E
      addi      r0, r4, 0x77E4
      stw       r0, 0x0(r30)
      beq-      .loc_0x44
      lis       r5, 0x804B
      li        r4, 0
      subi      r0, r5, 0x5324
      stw       r0, 0x0(r30)
      bl        0x56218

    .loc_0x44:
      extsh.    r0, r31
      ble-      .loc_0x54
      mr        r3, r30
      bl        -0x3972CC

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
 * Address:	803BB3A0
 * Size:	00012C
 */
void ParticleMgr::~ParticleMgr()
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
      beq-      .loc_0x110
      lis       r4, 0x804E
      li        r3, 0
      addi      r4, r4, 0x7694
      addic.    r0, r30, 0x60
      stw       r4, 0x0(r30)
      stw       r3, 0x18(r30)
      stw       r3, 0xA0(r30)
      beq-      .loc_0x6C
      lis       r3, 0x804E
      addic.    r0, r30, 0x60
      addi      r0, r3, 0x76BC
      stw       r0, 0x60(r30)
      beq-      .loc_0x6C
      lis       r4, 0x804B
      addi      r3, r30, 0x60
      addi      r0, r4, 0xCEC
      li        r4, 0
      stw       r0, 0x60(r30)
      bl        0x56180

    .loc_0x6C:
      addic.    r0, r30, 0x1C
      beq-      .loc_0xF4
      lis       r4, 0x804E
      addic.    r3, r30, 0x3C
      addi      r4, r4, 0x76E8
      stw       r4, 0x1C(r30)
      addi      r0, r4, 0x2C
      stw       r0, 0x38(r30)
      beq-      .loc_0xA4
      lis       r4, 0x804E
      addi      r0, r4, 0x76D8
      stw       r0, 0x3C(r30)
      li        r4, 0
      bl        0x56148

    .loc_0xA4:
      addic.    r0, r30, 0x1C
      beq-      .loc_0xF4
      lis       r3, 0x804E
      addic.    r0, r30, 0x1C
      addi      r3, r3, 0x7768
      stw       r3, 0x1C(r30)
      addi      r0, r3, 0x2C
      stw       r0, 0x38(r30)
      beq-      .loc_0xF4
      lis       r3, 0x804E
      addic.    r0, r30, 0x1C
      addi      r0, r3, 0x77E4
      stw       r0, 0x1C(r30)
      beq-      .loc_0xF4
      lis       r4, 0x804B
      addi      r3, r30, 0x1C
      subi      r0, r4, 0x5324
      li        r4, 0
      stw       r0, 0x1C(r30)
      bl        0x560F8

    .loc_0xF4:
      mr        r3, r30
      li        r4, 0
      bl        0x560EC
      extsh.    r0, r31
      ble-      .loc_0x110
      mr        r3, r30
      bl        -0x3973F8

    .loc_0x110:
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
 * Address:	803BB4CC
 * Size:	000070
 */
void ParticleMgr::createHeap(unsigned long)
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
      lwz       r0, 0xA0(r3)
      cmplwi    r0, 0
      beq-      .loc_0x44
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5BEC
      li        r4, 0xCA
      addi      r5, r5, 0x5BFC
      crclr     6, 0x6
      bl        -0x390ECC

    .loc_0x44:
      lwz       r4, -0x77D4(r13)
      mr        r3, r31
      li        r5, 0x1
      bl        -0x3967AC
      stw       r3, 0xA0(r30)
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
 * Address:	803BB53C
 * Size:	00014C
 */
void ParticleMgr::createMgr(char*, unsigned long, unsigned long, unsigned long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      mr        r31, r3
      lis       r3, 0x8049
      mr        r25, r4
      mr        r26, r5
      mr        r27, r6
      addi      r30, r3, 0x5BC8
      lwz       r0, 0xA0(r31)
      cmplwi    r0, 0
      bne-      .loc_0x48
      addi      r3, r30, 0x24
      addi      r5, r30, 0x40
      li        r4, 0xD1
      crclr     6, 0x6
      bl        -0x390F40

    .loc_0x48:
      lwz       r3, -0x6514(r13)
      addi      r4, r30, 0xC
      lwz       r5, 0xA0(r31)
      bl        0x67DCC
      lwz       r29, -0x77D4(r13)
      lwz       r3, 0xA0(r31)
      bl        -0x397FF8
      li        r0, 0
      mr        r3, r25
      stw       r0, 0x8(r1)
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0
      li        r8, 0x1
      li        r9, 0
      li        r10, 0
      bl        -0x39C440
      mr.       r28, r3
      bne-      .loc_0xB0
      mr        r6, r25
      addi      r3, r30, 0x24
      addi      r5, r30, 0x60
      li        r4, 0xDF
      crclr     6, 0x6
      bl        -0x390FA8

    .loc_0xB0:
      mr        r3, r29
      bl        -0x39804C
      lwz       r4, 0xA0(r31)
      li        r3, 0x14
      li        r5, 0
      bl        -0x3976C0
      mr.       r0, r3
      beq-      .loc_0xE0
      lwz       r5, 0xA0(r31)
      mr        r4, r28
      bl        -0x323144
      mr        r0, r3

    .loc_0xE0:
      stw       r0, 0x9C(r31)
      li        r3, 0x30
      li        r5, 0
      lwz       r4, 0xA0(r31)
      bl        -0x3976EC
      mr.       r0, r3
      beq-      .loc_0x118
      lwz       r6, 0xA0(r31)
      mr        r4, r26
      mr        r5, r27
      li        r7, 0x9
      li        r8, 0x8
      bl        -0x32B114
      mr        r0, r3

    .loc_0x118:
      stw       r0, 0x98(r31)
      li        r5, 0
      lwz       r3, 0x98(r31)
      lwz       r4, 0x9C(r31)
      bl        -0x32A8F8
      lwz       r3, -0x6514(r13)
      addi      r4, r30, 0xC
      bl        0x67CF4
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803BB688
 * Size:	000020
 */
void ParticleMgr::Instance_TPkEffectMgr()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x9900
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BB6A8
 * Size:	000020
 */
void ParticleMgr::deleteInstance_TPkEffectMgr()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      bl        0x9904
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void ParticleMgr::destroyHeap()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BB6C8
 * Size:	00002C
 */
void ParticleMgr::beginEntryModelEffect()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r0, -0x77D4(r13)
      stw       r0, 0xA4(r3)
      lwz       r3, 0xA0(r3)
      bl        -0x39813C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BB6F4
 * Size:	000024
 */
void ParticleMgr::endEntryModelEffect()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0xA4(r3)
      bl        -0x398160
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BB718
 * Size:	000024
 */
void ParticleMgr::start()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, -0x65B0(r13)
      bl        0xAEF8
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BB73C
 * Size:	000058
 */
void ParticleMgr::reset()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, -0x65B0(r13)
      cmplwi    r0, 0
      beq-      .loc_0x28
      mr        r3, r0
      bl        0xAF58

    .loc_0x28:
      addi      r3, r31, 0x1C
      lwz       r12, 0x1C(r31)
      lwz       r12, 0x7C(r12)
      mtctr     r12
      bctrl
      li        r0, 0
      stw       r0, 0x18(r31)
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BB794
 * Size:	000024
 */
void ParticleMgr::killAll()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x98(r3)
      bl        -0x32AB5C
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BB7B8
 * Size:	00002C
 */
void ParticleMgr::update()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      lwz       r3, 0x98(r3)
      bl        -0x32AE30
      lwz       r3, -0x65B0(r13)
      bl        0xAFBC
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BB7E4
 * Size:	00002C
 */
void ParticleMgr::setXfb(const ResTIMG*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x8049
      stw       r0, 0x14(r1)
      addi      r5, r5, 0x5C4C
      lwz       r3, 0x9C(r3)
      bl        -0x323294
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BB810
 * Size:	0000A4
 */
void ParticleMgr::draw(Viewport*, unsigned char)
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      mflr      r0
      stw       r0, 0x94(r1)
      stfd      f31, 0x80(r1)
      psq_st    f31,0x88(r1),0,0
      stfd      f30, 0x70(r1)
      psq_st    f30,0x78(r1),0,0
      stw       r31, 0x6C(r1)
      stw       r30, 0x68(r1)
      lwz       r6, 0x44(r4)
      mr        r30, r3
      mr        r3, r4
      mr        r31, r5
      lfs       f30, 0x2C(r6)
      li        r4, 0x1
      lfs       f31, 0x28(r6)
      bl        0x6990C
      addi      r4, r1, 0x8
      bl        -0x2D158C
      lfs       f3, 0x1390(r2)
      fmr       f1, f31
      fmr       f2, f30
      lfs       f4, 0x1394(r2)
      fmr       f5, f3
      addi      r3, r1, 0x38
      fmr       f6, f3
      bl        -0x2D0DF4
      lwz       r3, 0x98(r30)
      mr        r5, r31
      addi      r4, r1, 0x8
      bl        -0x32AE40
      psq_l     f31,0x88(r1),0,0
      lfd       f31, 0x80(r1)
      psq_l     f30,0x78(r1),0,0
      lfd       f30, 0x70(r1)
      lwz       r31, 0x6C(r1)
      lwz       r0, 0x94(r1)
      lwz       r30, 0x68(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	803BB8B4
 * Size:	0000C8
 */
void ParticleMgr::create(unsigned short, Vector3<float>&, unsigned char)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r6
      stw       r30, 0x18(r1)
      mr        r30, r5
      stw       r29, 0x14(r1)
      mr        r29, r4
      stw       r28, 0x10(r1)
      mr        r28, r3
      lwz       r3, 0x9C(r3)
      bl        -0x3232A0
      rlwinm.   r0,r3,0,29,29
      beq-      .loc_0x44
      li        r6, 0
      b         .loc_0x58

    .loc_0x44:
      rlwinm.   r0,r3,0,31,31
      beq-      .loc_0x54
      li        r6, 0x1
      b         .loc_0x58

    .loc_0x54:
      li        r6, 0x2

    .loc_0x58:
      rlwinm.   r0,r6,0,24,31
      bne-      .loc_0x74
      lwz       r0, 0x94(r28)
      cmpwi     r0, 0x2
      blt-      .loc_0x74
      li        r3, 0
      b         .loc_0xA8

    .loc_0x74:
      lwz       r3, 0x98(r28)
      mr        r4, r30
      mr        r5, r29
      mr        r7, r31
      li        r8, 0
      li        r9, 0
      bl        -0x32B084
      mr        r0, r3
      mr        r3, r28
      mr        r31, r0
      mr        r4, r31
      bl        0x84
      mr        r3, r31

    .loc_0xA8:
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
 * Address:	803BB97C
 * Size:	00005C
 */
void ParticleMgr::createDemo(unsigned short, Vector3<float>&, unsigned char,
                             unsigned char)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r8, 0
      li        r9, 0
      stw       r0, 0x14(r1)
      mr        r0, r4
      mr        r4, r5
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r5, r0
      lwz       r3, 0x98(r3)
      bl        -0x32B0EC
      mr        r0, r3
      mr        r3, r31
      mr        r31, r0
      mr        r4, r31
      bl        .loc_0x5C
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0x5C:
    */
}

/*
 * --INFO--
 * Address:	803BB9D8
 * Size:	0000A8
 */
void ParticleMgr::setGlobalColor(JPABaseEmitter*)
{
    /*
    .loc_0x0:
      cmplwi    r4, 0
      beqlr-
      lwz       r5, 0xE8(r4)
      lwz       r7, 0x18(r3)
      lwz       r3, 0x2C(r5)
      cmplwi    r7, 0
      lwz       r3, 0x0(r3)
      lwz       r0, 0xC(r3)
      beqlr-
      rlwinm.   r0,r0,0,30,30
      beqlr-
      lwz       r5, 0x50(r7)
      lbz       r0, 0x30(r7)
      lbz       r3, 0x34(r5)
      lbz       r6, 0x31(r7)
      add       r0, r3, r0
      lbz       r3, 0x32(r7)
      rlwinm    r7,r0,1,0,30
      lbz       r0, 0x35(r5)
      cmpwi     r7, 0xFF
      lbz       r5, 0x36(r5)
      ble-      .loc_0x5C
      li        r7, 0xFF

    .loc_0x5C:
      add       r0, r0, r6
      rlwinm    r6,r7,0,24,31
      rlwinm    r7,r0,1,0,30
      cmpwi     r7, 0xFF
      ble-      .loc_0x74
      li        r7, 0xFF

    .loc_0x74:
      add       r0, r5, r3
      rlwinm    r3,r7,0,24,31
      rlwinm    r0,r0,1,0,30
      cmpwi     r0, 0xFF
      ble-      .loc_0x8C
      li        r0, 0xFF

    .loc_0x8C:
      stb       r6, 0xB8(r4)
      stb       r3, 0xB9(r4)
      stb       r0, 0xBA(r4)
      stb       r6, 0xBC(r4)
      stb       r3, 0xBD(r4)
      stb       r0, 0xBE(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBA80
 * Size:	00002C
 */
void ParticleMgr::forceKill(JPABaseEmitter*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r4, 0
      stw       r0, 0x14(r1)
      beq-      .loc_0x1C
      lwz       r3, 0x98(r3)
      bl        -0x32AD98

    .loc_0x1C:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBAAC
 * Size:	00002C
 */
void ParticleMgr::fade(JPABaseEmitter*)
{
    /*
    .loc_0x0:
      cmplwi    r4, 0
      beqlr-
      lwz       r3, 0xF4(r4)
      li        r0, 0x1
      ori       r3, r3, 0x1
      stw       r3, 0xF4(r4)
      stw       r0, 0x24(r4)
      lwz       r0, 0xF4(r4)
      rlwinm    r0,r0,0,26,24
      stw       r0, 0xF4(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBAD8
 * Size:	000028
 */
void ParticleMgr::setDemoResourceManager(JPAResourceManager*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r5, 0x7
      stw       r0, 0x14(r1)
      lwz       r3, 0x98(r3)
      bl        -0x32AD80
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBB00
 * Size:	000028
 */
void ParticleMgr::clearDemoResourceManager()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      li        r4, 0x7
      stw       r0, 0x14(r1)
      lwz       r3, 0x98(r3)
      bl        -0x32AD98
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBB28
 * Size:	0000A8
 */
void ParticleMgr::setViewport(Graphics&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      li        r0, 0
      stmw      r27, 0xC(r1)
      mr        r28, r4
      mr        r27, r3
      lwz       r31, 0x264(r4)
      cmpwi     r31, 0
      blt-      .loc_0x34
      cmpwi     r31, 0x4
      bge-      .loc_0x34
      li        r0, 0x1

    .loc_0x34:
      rlwinm.   r0,r0,0,24,31
      bne-      .loc_0x58
      lis       r3, 0x8049
      lis       r5, 0x8049
      addi      r3, r3, 0x5BEC
      li        r4, 0x1F8
      addi      r5, r5, 0x5BFC
      crclr     6, 0x6
      bl        -0x39153C

    .loc_0x58:
      stw       r31, 0x80(r27)
      mr        r30, r27
      li        r29, 0
      b         .loc_0x80

    .loc_0x68:
      mr        r3, r28
      mr        r4, r29
      bl        0x69A58
      stw       r3, 0x84(r30)
      addi      r30, r30, 0x4
      addi      r29, r29, 0x1

    .loc_0x80:
      cmpw      r29, r31
      blt+      .loc_0x68
      mr        r3, r28
      bl        0x69618
      stw       r3, 0x94(r27)
      lmw       r27, 0xC(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void ParticleMgr::cull(Sys::Sphere&)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BBBD0
 * Size:	000114
 */
void ParticleMgr::cullByResFlg(Vector3<float>&, unsigned short)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r27, 0x1C(r1)
      mr        r27, r3
      mr        r28, r4
      lbz       r0, -0x65E4(r13)
      cmplwi    r0, 0
      beq-      .loc_0x2C
      li        r3, 0
      b         .loc_0x100

    .loc_0x2C:
      lwz       r3, 0x9C(r27)
      mr        r4, r5
      bl        -0x3235C0
      rlwinm.   r0,r3,0,26,26
      beq-      .loc_0x58
      rlwinm.   r0,r3,0,27,27
      beq-      .loc_0x50
      lfs       f1, -0x79A0(r13)
      b         .loc_0x70

    .loc_0x50:
      lfs       f1, -0x79A4(r13)
      b         .loc_0x70

    .loc_0x58:
      rlwinm.   r0,r3,0,27,27
      beq-      .loc_0x68
      lfs       f1, -0x79A8(r13)
      b         .loc_0x70

    .loc_0x68:
      li        r3, 0
      b         .loc_0x100

    .loc_0x70:
      lfs       f0, 0x0(r28)
      lbz       r0, -0x65E4(r13)
      stfs      f0, 0x8(r1)
      cmplwi    r0, 0
      lfs       f0, 0x4(r28)
      stfs      f0, 0xC(r1)
      lfs       f0, 0x8(r28)
      stfs      f0, 0x10(r1)
      stfs      f1, 0x14(r1)
      beq-      .loc_0xA0
      li        r3, 0
      b         .loc_0x100

    .loc_0xA0:
      li        r30, 0
      mr        r28, r27
      mr        r31, r30
      b         .loc_0xE8

    .loc_0xB0:
      lwz       r3, 0x84(r28)
      lwz       r29, 0x44(r3)
      bl        0x695B8
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xE0
      mr        r3, r29
      addi      r4, r1, 0x8
      bl        0x5E4F4
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xE0
      li        r30, 0x1
      b         .loc_0xF4

    .loc_0xE0:
      addi      r28, r28, 0x4
      addi      r31, r31, 0x1

    .loc_0xE8:
      lwz       r0, 0x80(r27)
      cmpw      r31, r0
      blt+      .loc_0xB0

    .loc_0xF4:
      rlwinm    r0,r30,0,24,31
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31

    .loc_0x100:
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBCE4
 * Size:	000178
 */
void ParticleMgr::cullByResFlg(JPABaseEmitter*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      stw       r0, 0x44(r1)
      stmw      r26, 0x28(r1)
      mr        r30, r3
      mr        r31, r4
      lbz       r0, -0x65E4(r13)
      cmplwi    r0, 0
      beq-      .loc_0x2C
      li        r3, 0
      b         .loc_0x164

    .loc_0x2C:
      lwz       r3, 0xE8(r31)
      lwz       r3, 0x2C(r3)
      lwz       r3, 0x0(r3)
      lwz       r3, 0xC(r3)
      rlwinm.   r0,r3,0,26,26
      beq-      .loc_0x5C
      rlwinm.   r0,r3,0,27,27
      beq-      .loc_0x54
      lfs       f3, -0x79A0(r13)
      b         .loc_0x74

    .loc_0x54:
      lfs       f3, -0x79A4(r13)
      b         .loc_0x74

    .loc_0x5C:
      rlwinm.   r0,r3,0,27,27
      beq-      .loc_0x6C
      lfs       f3, -0x79A8(r13)
      b         .loc_0x74

    .loc_0x6C:
      li        r3, 0
      b         .loc_0x164

    .loc_0x74:
      lbz       r0, -0x65E4(r13)
      lfs       f2, 0xA4(r31)
      lfs       f1, 0xA8(r31)
      cmplwi    r0, 0
      lfs       f0, 0xAC(r31)
      stfs      f2, 0x18(r1)
      stfs      f1, 0x1C(r1)
      stfs      f0, 0x20(r1)
      stfs      f2, 0x8(r1)
      stfs      f1, 0xC(r1)
      stfs      f0, 0x10(r1)
      stfs      f3, 0x14(r1)
      beq-      .loc_0xB0
      li        r0, 0
      b         .loc_0x110

    .loc_0xB0:
      li        r28, 0
      mr        r26, r30
      mr        r29, r28
      b         .loc_0xF8

    .loc_0xC0:
      lwz       r3, 0x84(r26)
      lwz       r27, 0x44(r3)
      bl        0x69494
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF0
      mr        r3, r27
      addi      r4, r1, 0x8
      bl        0x5E3D0
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0xF0
      li        r28, 0x1
      b         .loc_0x104

    .loc_0xF0:
      addi      r26, r26, 0x4
      addi      r29, r29, 0x1

    .loc_0xF8:
      lwz       r0, 0x80(r30)
      cmpw      r29, r0
      blt+      .loc_0xC0

    .loc_0x104:
      rlwinm    r0,r28,0,24,31
      cntlzw    r0, r0
      rlwinm    r0,r0,27,5,31

    .loc_0x110:
      rlwinm    r0,r0,0,24,31
      cntlzw    r3, r0
      rlwinm.   r0,r3,27,24,31
      rlwinm    r3,r3,27,5,31
      beq-      .loc_0x140
      lwz       r0, 0xF4(r31)
      rlwinm    r0,r0,0,30,28
      stw       r0, 0xF4(r31)
      lwz       r0, 0xF4(r31)
      rlwinm    r0,r0,0,0,30
      stw       r0, 0xF4(r31)
      b         .loc_0x158

    .loc_0x140:
      lwz       r0, 0xF4(r31)
      ori       r0, r0, 0x4
      stw       r0, 0xF4(r31)
      lwz       r0, 0xF4(r31)
      ori       r0, r0, 0x1
      stw       r0, 0xF4(r31)

    .loc_0x158:
      rlwinm    r0,r3,0,24,31
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31

    .loc_0x164:
      lmw       r26, 0x28(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void ParticleMgr::cullCylinder(Sys::Cylinder&)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void ParticleMgr::draw2d()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BBE5C
 * Size:	000004
 */
void ModelEffectDataRoot::loadResources()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBE60
 * Size:	000010
 */
void ModelEffectDataRoot::getID()
{
    /*
    .loc_0x0:
      lis       r4, 0x524F
      li        r3, 0
      addi      r4, r4, 0x4F54
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBE70
 * Size:	000008
 */
void ModelEffectDataRoot::onCreate(ModelEffectCreateArg*)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBE78
 * Size:	000008
 */
void NodeObjectMgr<ModelEffect>::get(void*)
{
    /*
    .loc_0x0:
      lwz       r3, 0x18(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBE80
 * Size:	000008
 */
void NodeObjectMgr<ModelEffect>::getNext(void*)
{
    /*
    .loc_0x0:
      lwz       r3, 0x4(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBE88
 * Size:	000008
 */
void NodeObjectMgr<ModelEffect>::getStart()
{
    /*
    .loc_0x0:
      lwz       r3, 0x30(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBE90
 * Size:	000008
 */
void NodeObjectMgr<ModelEffect>::getEnd()
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBE98
 * Size:	000018
 */
void NodeObjectMgr<ModelEffect>::resetMgr()
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x30(r3)
      stw       r0, 0x2C(r3)
      stw       r0, 0x28(r3)
      stw       r0, 0x24(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBEB0
 * Size:	00002C
 */
void Container<ModelEffect>::getObject(void*)
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
 * Address:	803BBEDC
 * Size:	000008
 */
void Container<ModelEffect>::getAt(int)
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBEE4
 * Size:	000008
 */
void Container<ModelEffect>::getTo()
{
    /*
    .loc_0x0:
      li        r3, 0
      blr
    */
}

/*
 * --INFO--
 * Address:	803BBEEC
 * Size:	0001F4
 */
void ObjectMgr<ModelEffect>::doDirectDraw(Graphics&)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804E
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r5, r5, 0x7810
      stw       r31, 0x1C(r1)
      cmplwi    r0, 0
      mr        r31, r4
      stw       r0, 0x14(r1)
      stw       r5, 0x8(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x50
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x50:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xBC

    .loc_0x68:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1C0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xBC:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x68
      b         .loc_0x1C0

    .loc_0xDC:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r4, r31
      lwz       r12, 0x30(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x130
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x130:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1A4

    .loc_0x150:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1C0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x1A4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x150

    .loc_0x1C0:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xDC
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803BC0E0
 * Size:	00004C
 */
void Iterator<ModelEffect>::isDone()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r3, 0x8(r3)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x4(r31)
      sub       r0, r3, r0
      cntlzw    r0, r0
      rlwinm    r3,r0,27,5,31
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BC12C
 * Size:	0001F4
 */
void ObjectMgr<ModelEffect>::doSimulation(float)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804E
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x7810
      stfd      f31, 0x18(r1)
      fmr       f31, f1
      cmplwi    r0, 0
      stw       r4, 0x8(r1)
      stw       r0, 0x14(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x50
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x50:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xBC

    .loc_0x68:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1C0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xBC:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x68
      b         .loc_0x1C0

    .loc_0xDC:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      fmr       f1, f31
      lwz       r12, 0x2C(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x130
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x130:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1A4

    .loc_0x150:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1C0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x1A4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x150

    .loc_0x1C0:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xDC
      lwz       r0, 0x24(r1)
      lfd       f31, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803BC320
 * Size:	0001E4
 */
void ObjectMgr<ModelEffect>::doViewCalc()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804E
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x7810
      cmplwi    r0, 0
      stw       r0, 0x14(r1)
      stw       r4, 0x8(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x48
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B4

    .loc_0x48:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xB4

    .loc_0x60:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1B4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xB4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x60
      b         .loc_0x1B4

    .loc_0xD4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x124
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B4

    .loc_0x124:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x198

    .loc_0x144:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1B4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x198:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x144

    .loc_0x1B4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xD4
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803BC504
 * Size:	0001F4
 */
void ObjectMgr<ModelEffect>::doSetView(int)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804E
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r5, r5, 0x7810
      stw       r31, 0x1C(r1)
      cmplwi    r0, 0
      mr        r31, r4
      stw       r0, 0x14(r1)
      stw       r5, 0x8(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x50
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x50:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xBC

    .loc_0x68:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1C0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xBC:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x68
      b         .loc_0x1C0

    .loc_0xDC:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      mr        r4, r31
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x130
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1C0

    .loc_0x130:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1A4

    .loc_0x150:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1C0
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x1A4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x150

    .loc_0x1C0:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xDC
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803BC6F8
 * Size:	0001E4
 */
void ObjectMgr<ModelEffect>::doEntry()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804E
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x7810
      cmplwi    r0, 0
      stw       r0, 0x14(r1)
      stw       r4, 0x8(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x48
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B4

    .loc_0x48:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xB4

    .loc_0x60:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1B4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xB4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x60
      b         .loc_0x1B4

    .loc_0xD4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x124
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B4

    .loc_0x124:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x198

    .loc_0x144:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1B4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x198:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x144

    .loc_0x1B4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xD4
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803BC8DC
 * Size:	0001E4
 */
void ObjectMgr<ModelEffect>::doAnimation()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r4, 0x804E
      stw       r0, 0x24(r1)
      li        r0, 0
      addi      r4, r4, 0x7810
      cmplwi    r0, 0
      stw       r0, 0x14(r1)
      stw       r4, 0x8(r1)
      stw       r0, 0xC(r1)
      stw       r3, 0x10(r1)
      bne-      .loc_0x48
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B4

    .loc_0x48:
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0xB4

    .loc_0x60:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1B4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0xB4:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x60
      b         .loc_0x1B4

    .loc_0xD4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      lwz       r12, 0x0(r3)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      cmplwi    r0, 0
      bne-      .loc_0x124
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x1B4

    .loc_0x124:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)
      b         .loc_0x198

    .loc_0x144:
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x1B4
      lwz       r3, 0x10(r1)
      lwz       r4, 0xC(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0xC(r1)

    .loc_0x198:
      lwz       r12, 0x8(r1)
      addi      r3, r1, 0x8
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x144

    .loc_0x1B4:
      lwz       r3, 0x10(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xC(r1)
      cmplw     r4, r3
      bne+      .loc_0xD4
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	803BCAC0
 * Size:	000038
 */
void Iterator<ModelEffect>::operator*()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r4, r3
      stw       r0, 0x14(r1)
      lwz       r3, 0x8(r3)
      lwz       r4, 0x4(r4)
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
 * Address:	803BCAF8
 * Size:	0000E4
 */
void Iterator<ModelEffect>::next()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x40
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xD0

    .loc_0x40:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xB4

    .loc_0x60:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xD0
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)

    .loc_0xB4:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x60

    .loc_0xD0:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BCBDC
 * Size:	0000DC
 */
void Iterator<ModelEffect>::first()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      lwz       r0, 0xC(r3)
      cmplwi    r0, 0
      bne-      .loc_0x3C
      lwz       r3, 0x8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xC8

    .loc_0x3C:
      lwz       r3, 0x8(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)
      b         .loc_0xAC

    .loc_0x58:
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      lwz       r3, 0xC(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0xC8
      lwz       r3, 0x8(r31)
      lwz       r4, 0x4(r31)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl
      stw       r3, 0x4(r31)

    .loc_0xAC:
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq+      .loc_0x58

    .loc_0xC8:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	803BCCB8
 * Size:	000028
 */
void __sinit_particleMgr_cpp(void)
{
    /*
    .loc_0x0:
      lis       r4, 0x8051
      li        r0, -0x1
      lfs       f0, 0x48B0(r4)
      lis       r3, 0x804E
      stw       r0, -0x65F0(r13)
      stfsu     f0, 0x7688(r3)
      stfs      f0, -0x65EC(r13)
      stfs      f0, 0x4(r3)
      stfs      f0, 0x8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	803BCCE0
 * Size:	000008
 */
void NodeObjectMgr<ModelEffect>::@28 @resetMgr()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xE4C
    */
}

/*
 * --INFO--
 * Address:	803BCCE8
 * Size:	000008
 */
void ObjectMgr<ModelEffect>::@28 @doDirectDraw(Graphics&)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xE00
    */
}

/*
 * --INFO--
 * Address:	803BCCF0
 * Size:	000008
 */
void ObjectMgr<ModelEffect>::@28 @doSimulation(float)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0xBC8
    */
}

/*
 * --INFO--
 * Address:	803BCCF8
 * Size:	000008
 */
void ObjectMgr<ModelEffect>::@28 @doViewCalc()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x9DC
    */
}

/*
 * --INFO--
 * Address:	803BCD00
 * Size:	000008
 */
void ObjectMgr<ModelEffect>::@28 @doSetView(int)
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x800
    */
}

/*
 * --INFO--
 * Address:	803BCD08
 * Size:	000008
 */
void ObjectMgr<ModelEffect>::@28 @doEntry()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x614
    */
}

/*
 * --INFO--
 * Address:	803BCD10
 * Size:	000008
 */
void ObjectMgr<ModelEffect>::@28 @doAnimation()
{
    /*
    .loc_0x0:
      subi      r3, r3, 0x1C
      b         -0x438
    */
}