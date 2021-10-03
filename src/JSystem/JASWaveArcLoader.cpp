

/*
 * --INFO--
 * Address:	8009BA08
 * Size:	00002C
 */
void JASWaveArcLoader::init(JASHeap*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      cmplwi    r3, 0
      stw       r0, 0x14(r1)
      bne-      .loc_0x18
      bl        0xBA2C

    .loc_0x18:
      stw       r3, -0x75C0(r13)
      lwz       r0, 0x14(r1)
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
void JASWaveArcLoader::getRootHeap()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BA34
 * Size:	000060
 */
void JASWaveArcLoader::setCurrentDir(const char*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x804A
      mr        r4, r3
      stw       r0, 0x14(r1)
      addi      r3, r5, 0x3898
      bl        0x2EE0C
      lis       r3, 0x804A
      addi      r3, r3, 0x3898
      bl        0x2EEB8
      lis       r4, 0x804A
      addi      r6, r4, 0x3898
      add       r5, r6, r3
      lbz       r0, -0x1(r5)
      cmpwi     r0, 0x2F
      beq-      .loc_0x50
      li        r4, 0x2F
      li        r0, 0
      stbx      r4, r6, r3
      stb       r0, 0x1(r5)

    .loc_0x50:
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JASWaveArcLoader::getCurrentDir()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BA94
 * Size:	00006C
 */
void JASWaveArc::JASWaveArc()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x804A
      stw       r0, 0x14(r1)
      addi      r0, r4, 0x38EC
      stw       r31, 0xC(r1)
      mr        r31, r3
      lis       r3, 0x804A
      stw       r0, 0x0(r31)
      addi      r0, r3, 0x38D8
      mr        r4, r31
      addi      r3, r31, 0x4
      stw       r0, 0x0(r31)
      bl        0xAFD4
      li        r4, 0
      li        r0, -0x1
      stw       r4, 0x48(r31)
      mr        r3, r31
      stw       r4, 0x4C(r31)
      stw       r0, 0x50(r31)
      stw       r4, 0x54(r31)
      stw       r4, 0x58(r31)
      lwz       r31, 0xC(r1)
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8009BB00
 * Size:	000078
 */
void JASHeap::~JASHeap()
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
      beq-      .loc_0x5C
      beq-      .loc_0x4C
      addic.    r0, r30, 0xC
      beq-      .loc_0x38
      addi      r3, r30, 0xC
      li        r4, 0
      bl        -0x75364

    .loc_0x38:
      cmplwi    r30, 0
      beq-      .loc_0x4C
      mr        r3, r30
      li        r4, 0
      bl        -0x752E0

    .loc_0x4C:
      extsh.    r0, r31
      ble-      .loc_0x5C
      mr        r3, r30
      bl        -0x77AA4

    .loc_0x5C:
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
 * Size:	000084
 */
void JASWaveArc::loadSetup(unsigned long)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JASWaveArc::eraseSetup()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BB78
 * Size:	0000C8
 */
void JASWaveArc::loadToAramCallback(void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      li        r5, 0
      li        r6, 0
      stw       r0, 0x24(r1)
      li        r7, 0
      li        r8, 0
      stw       r31, 0x1C(r1)
      mr        r31, r3
      stw       r30, 0x18(r1)
      lwz       r3, 0x4(r3)
      lwz       r4, 0x8(r31)
      bl        -0x7E41C
      cmplwi    r3, 0
      beq-      .loc_0xB0
      lwz       r30, 0x0(r31)
      lwz       r31, 0xC(r31)
      bl        0x5307C
      lwz       r0, 0x58(r30)
      stw       r3, 0x8(r1)
      cmplw     r0, r31
      beq-      .loc_0x64
      bl        0x53090
      li        r0, 0
      b         .loc_0x94

    .loc_0x64:
      lwz       r0, 0x4C(r30)
      cmpwi     r0, 0x1
      beq-      .loc_0x7C
      bl        0x53078
      li        r0, 0
      b         .loc_0x94

    .loc_0x7C:
      li        r4, 0x1
      li        r0, 0x2
      stw       r4, 0x48(r30)
      stw       r0, 0x4C(r30)
      bl        0x5305C
      li        r0, 0x1

    .loc_0x94:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0xB0
      mr        r3, r30
      lwz       r12, 0x0(r30)
      lwz       r12, 0xC(r12)
      mtctr     r12
      bctrl

    .loc_0xB0:
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
 * Address:	........
 * Size:	0000A8
 */
void JASWaveArc::sendLoadCmd()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JASWaveArc::execLoad()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BC40
 * Size:	000128
 */
void JASWaveArc::load(JASHeap*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      lwz       r0, 0x50(r3)
      cmpwi     r0, 0
      bge-      .loc_0x30
      li        r3, 0
      b         .loc_0x110

    .loc_0x30:
      bl        0x52FC8
      lwz       r0, 0x4C(r30)
      stw       r3, 0xC(r1)
      cmpwi     r0, 0
      beq-      .loc_0x50
      bl        0x52FDC
      li        r3, 0
      b         .loc_0x110

    .loc_0x50:
      cmplwi    r31, 0
      bne-      .loc_0x5C
      lwz       r31, -0x75C0(r13)

    .loc_0x5C:
      lwz       r5, 0x54(r30)
      mr        r4, r31
      addi      r3, r30, 0x4
      bl        0xAE68
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x84
      lwz       r3, 0xC(r1)
      bl        0x52FA8
      li        r3, 0
      b         .loc_0x110

    .loc_0x84:
      bl        0x52F74
      li        r4, 0
      li        r0, 0x1
      stw       r4, 0x48(r30)
      stw       r0, 0x4C(r30)
      stw       r30, 0x10(r1)
      lwz       r0, 0x50(r30)
      stw       r3, 0x8(r1)
      stw       r0, 0x14(r1)
      lwz       r0, 0x3C(r30)
      stw       r0, 0x18(r1)
      lwz       r3, 0x58(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x58(r30)
      stw       r0, 0x1C(r1)
      bl        0xAC8C
      lis       r4, 0x800A
      addi      r5, r1, 0x10
      subi      r4, r4, 0x4488
      li        r6, 0x10
      bl        0xCCB4
      cmpwi     r3, 0
      bne-      .loc_0xF8
      addi      r3, r30, 0x4
      bl        0xB0A4
      lwz       r3, 0x8(r1)
      bl        0x52F34
      li        r31, 0
      b         .loc_0x104

    .loc_0xF8:
      lwz       r3, 0x8(r1)
      bl        0x52F24
      li        r31, 0x1

    .loc_0x104:
      lwz       r3, 0xC(r1)
      bl        0x52F18
      mr        r3, r31

    .loc_0x110:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	8009BD68
 * Size:	000128
 */
void JASWaveArc::loadTail(JASHeap*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stw       r31, 0x2C(r1)
      mr        r31, r4
      stw       r30, 0x28(r1)
      mr        r30, r3
      lwz       r0, 0x50(r3)
      cmpwi     r0, 0
      bge-      .loc_0x30
      li        r3, 0
      b         .loc_0x110

    .loc_0x30:
      bl        0x52EA0
      lwz       r0, 0x4C(r30)
      stw       r3, 0xC(r1)
      cmpwi     r0, 0
      beq-      .loc_0x50
      bl        0x52EB4
      li        r3, 0
      b         .loc_0x110

    .loc_0x50:
      cmplwi    r31, 0
      bne-      .loc_0x5C
      lwz       r31, -0x75C0(r13)

    .loc_0x5C:
      lwz       r5, 0x54(r30)
      mr        r4, r31
      addi      r3, r30, 0x4
      bl        0xAF10
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x84
      lwz       r3, 0xC(r1)
      bl        0x52E80
      li        r3, 0
      b         .loc_0x110

    .loc_0x84:
      bl        0x52E4C
      li        r4, 0
      li        r0, 0x1
      stw       r4, 0x48(r30)
      stw       r0, 0x4C(r30)
      stw       r30, 0x10(r1)
      lwz       r0, 0x50(r30)
      stw       r3, 0x8(r1)
      stw       r0, 0x14(r1)
      lwz       r0, 0x3C(r30)
      stw       r0, 0x18(r1)
      lwz       r3, 0x58(r30)
      addi      r0, r3, 0x1
      stw       r0, 0x58(r30)
      stw       r0, 0x1C(r1)
      bl        0xAB64
      lis       r4, 0x800A
      addi      r5, r1, 0x10
      subi      r4, r4, 0x4488
      li        r6, 0x10
      bl        0xCB8C
      cmpwi     r3, 0
      bne-      .loc_0xF8
      addi      r3, r30, 0x4
      bl        0xAF7C
      lwz       r3, 0x8(r1)
      bl        0x52E0C
      li        r31, 0
      b         .loc_0x104

    .loc_0xF8:
      lwz       r3, 0x8(r1)
      bl        0x52DFC
      li        r31, 0x1

    .loc_0x104:
      lwz       r3, 0xC(r1)
      bl        0x52DF0
      mr        r3, r31

    .loc_0x110:
      lwz       r0, 0x34(r1)
      lwz       r31, 0x2C(r1)
      lwz       r30, 0x28(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void JASWaveArc::loadBlock(JASHeap*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void JASWaveArc::loadBlockTail(JASHeap*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BE90
 * Size:	000024
 */
void JASWaveArc::erase()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r3, r3, 0x4
      stw       r0, 0x14(r1)
      bl        0xAF28
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8009BEB4
 * Size:	000094
 */
void JASWaveArc::onDispose()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      mr        r31, r3
      bl        0x52D70
      lwz       r0, 0x4C(r31)
      stw       r3, 0x8(r1)
      cmpwi     r0, 0
      bne-      .loc_0x34
      bl        0x52D84
      li        r0, 0
      b         .loc_0x64

    .loc_0x34:
      cmpwi     r0, 0x1
      bne-      .loc_0x50
      li        r0, 0
      stw       r0, 0x4C(r31)
      bl        0x52D68
      li        r0, 0
      b         .loc_0x64

    .loc_0x50:
      li        r0, 0
      stw       r0, 0x48(r31)
      stw       r0, 0x4C(r31)
      bl        0x52D50
      li        r0, 0x1

    .loc_0x64:
      rlwinm.   r0,r0,0,24,31
      beq-      .loc_0x80
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl

    .loc_0x80:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void JASWaveArc::setEntryNum(long)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BF48
 * Size:	0000E4
 */
void JASWaveArc::setFileName(const char*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      lis       r5, 0x804A
      stw       r0, 0x64(r1)
      stw       r31, 0x5C(r1)
      stw       r30, 0x58(r1)
      stw       r29, 0x54(r1)
      mr        r29, r4
      stw       r28, 0x50(r1)
      mr        r28, r3
      addi      r3, r5, 0x3898
      bl        0x2E99C
      mr        r31, r3
      mr        r3, r29
      bl        0x2E990
      add       r31, r31, r3
      bl        0xB434
      mr        r4, r3
      addi      r3, r31, 0x1
      li        r5, -0x4
      bl        -0x77F50
      lis       r4, 0x804A
      mr        r30, r3
      addi      r4, r4, 0x3898
      bl        0x2E8B0
      mr        r3, r30
      mr        r4, r29
      bl        0x2E834
      li        r0, 0
      mr        r3, r30
      stbx      r0, r30, r31
      bl        0x401A0
      mr        r0, r3
      mr        r3, r30
      mr        r30, r0
      bl        -0x77EFC
      cmpwi     r30, 0
      blt-      .loc_0xC4
      blt-      .loc_0xC4
      mr        r3, r30
      addi      r4, r1, 0x8
      bl        0x4046C
      cmpwi     r3, 0
      beq-      .loc_0xC4
      lwz       r0, 0x3C(r1)
      addi      r3, r1, 0x8
      stw       r0, 0x54(r28)
      bl        0x40590
      stw       r30, 0x50(r28)

    .loc_0xC4:
      lwz       r0, 0x64(r1)
      lwz       r31, 0x5C(r1)
      lwz       r30, 0x58(r1)
      lwz       r29, 0x54(r1)
      lwz       r28, 0x50(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	8009C02C
 * Size:	000004
 */
void JASDisposer::onDispose()
{
    /*
    .loc_0x0:
      blr
    */
}