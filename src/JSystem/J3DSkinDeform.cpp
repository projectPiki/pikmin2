

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void J3DSkin1List::J3DSkin1List()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void J3DSkin2List::J3DSkin2List()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void J3DSkinNList::J3DSkinNList()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void J3DSkin1List::calcSkin_VtxPosF32(float (*)[4], void*, void*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void J3DSkin1List::calcSkin_VtxNrmF32(float (*)[4], void*, void*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void J3DSkin2List::calcSkin_VtxPosF32(float (*)[4], void*, void*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void J3DSkin2List::calcSkin_VtxNrmF32(float (*)[4], void*, void*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void J3DPSWeightMTXMultVec(float (*)[4], float, Vec*, Vec*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void J3DPSWeightMTXMultVecSR(float (*)[4], float, Vec*, Vec*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void J3DSkinNList::calcSkin_VtxPosF32(float (*)[4], void*, void*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void J3DSkinNList::calcSkin_VtxNrmF32(float (*)[4], void*, void*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void J3DSkinDeform::J3DSkinDeform()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000F94
 */
void J3DSkinDeform::initSkinInfo(J3DModelData*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00042C
 */
void J3DSkinDeform::initMtxIndexArray(J3DModelData*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000244
 */
void J3DSkinDeform::changeFastSkinDL(J3DModelData*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00016C
 */
void J3DSkinDeform::calcNrmMtx(J3DMtxBuffer*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
void J3DSkinDeform::transformVtxPosNrm(J3DModelData*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void J3DSkinDeform::calcAnmInvJointMtx(J3DMtxBuffer*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00029C
 */
void J3DSkinDeform::deformFastVtxPos_F32(J3DVertexBuffer*, J3DMtxBuffer*) const
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000334
 */
void J3DSkinDeform::deformFastVtxNrm_F32(J3DVertexBuffer*, J3DMtxBuffer*) const
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000234
 */
void J3DSkinDeform::deformVtxPos_F32(J3DVertexBuffer*, J3DMtxBuffer*) const
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00025C
 */
void J3DSkinDeform::deformVtxPos_S16(J3DVertexBuffer*, J3DMtxBuffer*) const
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001FC
 */
void J3DSkinDeform::deformVtxNrm_F32(J3DVertexBuffer*) const
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000218
 */
void J3DSkinDeform::deformVtxNrm_S16(J3DVertexBuffer*) const
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80088658
 * Size:	000088
 */
void J3DSkinDeform::deform(J3DModel*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r4
      stw       r0, 0x14(r1)
      lwz       r0, 0x8(r4)
      rlwinm.   r0,r0,0,29,29
      beq-      .loc_0x2C
      lwz       r0, 0x14(r3)
      ori       r0, r0, 0x2
      stw       r0, 0x14(r3)
      b         .loc_0x38

    .loc_0x2C:
      lwz       r0, 0x14(r3)
      rlwinm    r0,r0,0,31,29
      stw       r0, 0x14(r3)

    .loc_0x38:
      lwz       r0, 0x8(r5)
      rlwinm.   r0,r0,0,28,28
      beq-      .loc_0x54
      lwz       r0, 0x14(r3)
      ori       r0, r0, 0x1
      stw       r0, 0x14(r3)
      b         .loc_0x60

    .loc_0x54:
      lwz       r0, 0x14(r3)
      rlwinm    r0,r0,0,0,30
      stw       r0, 0x14(r3)

    .loc_0x60:
      lwz       r12, 0x0(r3)
      addi      r4, r5, 0x88
      lwz       r5, 0x84(r5)
      lwz       r12, 0x8(r12)
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
 * Address:	........
 * Size:	000870
 */
void J3DSkinDeform::deform(J3DVertexBuffer*, J3DMtxBuffer*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800886E0
 * Size:	000030
 */
void J3DVtxColorCalc::calc(J3DModel*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      addi      r4, r4, 0x88
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r12, 0x8(r12)
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
 * Address:	80088710
 * Size:	0000F4
 */
void J3DVtxColorCalc::calc(J3DVertexBuffer*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      stw       r0, 0x34(r1)
      stmw      r27, 0x1C(r1)
      mr        r29, r3
      mr        r30, r4
      lwz       r0, 0x4(r3)
      rlwinm.   r0,r0,0,31,31
      beq-      .loc_0xE0
      lwz       r0, 0x8(r29)
      cmplwi    r0, 0
      beq-      .loc_0xE0
      lwz       r3, 0x14(r30)
      li        r31, 0
      lwz       r0, 0x18(r30)
      stw       r0, 0x14(r30)
      stw       r3, 0x18(r30)
      lwz       r3, 0x8(r29)
      lwz       r27, 0x14(r30)
      lhz       r28, 0xC(r3)
      b         .loc_0xBC

    .loc_0x54:
      lwz       r3, 0x8(r29)
      mr        r5, r31
      addi      r6, r1, 0x8
      li        r4, 0
      lwz       r12, 0x0(r3)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r3, 0x8(r29)
      rlwinm    r0,r31,3,13,28
      li        r7, 0
      li        r6, 0
      lwz       r3, 0x10(r3)
      add       r5, r3, r0
      b         .loc_0xAC

    .loc_0x90:
      lwz       r3, 0x4(r5)
      addi      r7, r7, 0x1
      lwz       r4, 0x8(r1)
      lhzx      r0, r3, r6
      addi      r6, r6, 0x2
      rlwinm    r0,r0,2,0,29
      stwx      r4, r27, r0

    .loc_0xAC:
      lhz       r0, 0x0(r5)
      cmplw     r7, r0
      blt+      .loc_0x90
      addi      r31, r31, 0x1

    .loc_0xBC:
      rlwinm    r0,r31,0,16,31
      cmplw     r0, r28
      blt+      .loc_0x54
      lwz       r4, 0x0(r30)
      mr        r3, r27
      lwz       r0, 0x8(r4)
      rlwinm    r4,r0,2,0,29
      bl        0x63F60
      stw       r27, 0x34(r30)

    .loc_0xE0:
      lmw       r27, 0x1C(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	80088804
 * Size:	000048
 */
void J3DVtxColorCalc::~J3DVtxColorCalc()
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
      addi      r0, r5, 0x2FD0
      stw       r0, 0x0(r31)
      ble-      .loc_0x30
      bl        -0x6477C

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
 * Address:	........
 * Size:	000048
 */
void J3DSkinDeform::~J3DSkinDeform()
{
    // UNUSED FUNCTION
}