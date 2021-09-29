

/*
 * --INFO--
 * Address:	8008B114
 * Size:	00003C
 */
void JPASetPointSize(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x7828(r2)
  li        r4, 0x5
  stw       r0, 0x14(r1)
  lfs       f0, 0x144(r3)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r3, 0xC(r1)
  bl        0x5A9E4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B150
 * Size:	00003C
 */
void JPASetLineWidth(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x7828(r2)
  li        r4, 0x5
  stw       r0, 0x14(r1)
  lfs       f0, 0x144(r3)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r3, 0xC(r1)
  bl        0x5A968
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B18C
 * Size:	000044
 */
void JPASetPointSize(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x7828(r2)
  stw       r0, 0x14(r1)
  lfs       f0, 0x144(r3)
  lfs       f2, 0x60(r4)
  li        r4, 0x5
  fmuls     f0, f1, f0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r3, 0xC(r1)
  bl        0x5A964
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B1D0
 * Size:	000044
 */
void JPASetLineWidth(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x7828(r2)
  stw       r0, 0x14(r1)
  lfs       f0, 0x144(r3)
  lfs       f2, 0x60(r4)
  li        r4, 0x5
  fmuls     f0, f1, f0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r3, 0xC(r1)
  bl        0x5A8E0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B214
 * Size:	00009C
 */
void JPARegistPrm(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  addi      r4, r1, 0x8
  lwz       r8, 0x0(r3)
  li        r3, 0x1
  lwz       r0, 0x108(r8)
  lbz       r5, 0xB8(r8)
  stw       r0, 0xC(r1)
  lbz       r7, 0xB9(r8)
  addi      r10, r5, 0x1
  lbz       r6, 0xBA(r8)
  lbz       r5, 0xBB(r8)
  addi      r8, r7, 0x1
  lbz       r7, 0xC(r1)
  addi      r6, r6, 0x1
  lbz       r9, 0xD(r1)
  addi      r0, r5, 0x1
  mullw     r10, r7, r10
  lbz       r7, 0xE(r1)
  lbz       r5, 0xF(r1)
  mullw     r8, r9, r8
  rlwinm    r9,r10,24,24,31
  stb       r9, 0xC(r1)
  mullw     r6, r7, r6
  rlwinm    r7,r8,24,24,31
  stb       r7, 0xD(r1)
  mullw     r0, r5, r0
  rlwinm    r5,r6,24,24,31
  stb       r5, 0xE(r1)
  rlwinm    r0,r0,24,24,31
  stb       r0, 0xF(r1)
  lwz       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        0x5D3C4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B2B0
 * Size:	000084
 */
void JPARegistEnv(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  addi      r4, r1, 0x8
  lwz       r7, 0x0(r3)
  li        r3, 0x2
  lwz       r0, 0x10C(r7)
  lbz       r5, 0xBC(r7)
  stw       r0, 0xC(r1)
  addi      r8, r5, 0x1
  lbz       r5, 0xBE(r7)
  lbz       r6, 0xBD(r7)
  lbz       r9, 0xC(r1)
  addi      r0, r5, 0x1
  lbz       r5, 0xE(r1)
  addi      r6, r6, 0x1
  lbz       r7, 0xD(r1)
  mullw     r8, r9, r8
  mullw     r6, r7, r6
  rlwinm    r7,r8,24,24,31
  stb       r7, 0xC(r1)
  mullw     r0, r5, r0
  rlwinm    r5,r6,24,24,31
  stb       r5, 0xD(r1)
  rlwinm    r0,r0,24,24,31
  stb       r0, 0xE(r1)
  lwz       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        0x5D340
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B334
 * Size:	000118
 */
void JPARegistPrmEnv(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  addi      r4, r1, 0xC
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  lwz       r9, 0x0(r3)
  li        r3, 0x1
  lwz       r0, 0x108(r9)
  lbz       r5, 0xB8(r9)
  stw       r0, 0x14(r1)
  addi      r8, r5, 0x1
  lbz       r6, 0xBA(r9)
  lbz       r5, 0xBB(r9)
  lbz       r7, 0xB9(r9)
  addi      r12, r6, 0x1
  lbz       r6, 0x14(r1)
  addi      r10, r5, 0x1
  lbz       r31, 0x16(r1)
  addi      r0, r7, 0x1
  mullw     r8, r6, r8
  lbz       r5, 0x15(r1)
  lbz       r11, 0x17(r1)
  lwz       r7, 0x10C(r9)
  lbz       r6, 0xBD(r9)
  stw       r7, 0x10(r1)
  mullw     r30, r5, r0
  rlwinm    r29,r8,24,24,31
  lbz       r7, 0xBC(r9)
  lbz       r5, 0xBE(r9)
  addi      r0, r7, 0x1
  lbz       r9, 0x10(r1)
  rlwinm    r30,r30,24,24,31
  addi      r7, r6, 0x1
  lbz       r8, 0x11(r1)
  mullw     r12, r31, r12
  stb       r29, 0x14(r1)
  addi      r5, r5, 0x1
  lbz       r6, 0x12(r1)
  stb       r30, 0x15(r1)
  mullw     r10, r11, r10
  rlwinm    r11,r12,24,24,31
  stb       r11, 0x16(r1)
  mullw     r9, r9, r0
  rlwinm    r0,r10,24,24,31
  stb       r0, 0x17(r1)
  lwz       r0, 0x14(r1)
  mullw     r7, r8, r7
  stw       r0, 0xC(r1)
  rlwinm    r8,r9,24,24,31
  stb       r8, 0x10(r1)
  mullw     r0, r6, r5
  rlwinm    r5,r7,24,24,31
  stb       r5, 0x11(r1)
  rlwinm    r0,r0,24,24,31
  stb       r0, 0x12(r1)
  bl        0x5D248
  lwz       r0, 0x10(r1)
  addi      r4, r1, 0x8
  li        r3, 0x2
  stw       r0, 0x8(r1)
  bl        0x5D234
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B44C
 * Size:	0000B0
 */
void JPARegistAlpha(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r10, 0x0(r3)
  li        r3, 0x1
  lbz       r5, 0x96(r4)
  addi      r4, r1, 0x8
  lwz       r7, 0x108(r10)
  lbz       r8, 0xB8(r10)
  addi      r0, r5, 0x1
  lbz       r6, 0xBB(r10)
  stw       r7, 0xC(r1)
  addi      r9, r8, 0x1
  addi      r5, r6, 0x1
  lbz       r7, 0xB9(r10)
  lbz       r6, 0xF(r1)
  lbz       r8, 0xD(r1)
  addi      r7, r7, 0x1
  mullw     r5, r6, r5
  lbz       r6, 0xBA(r10)
  lbz       r10, 0xC(r1)
  addi      r6, r6, 0x1
  rlwinm    r11,r5,24,24,31
  lbz       r5, 0xE(r1)
  mullw     r0, r11, r0
  stb       r11, 0xF(r1)
  mullw     r5, r5, r6
  rlwinm    r0,r0,24,24,31
  stb       r0, 0xF(r1)
  mullw     r7, r8, r7
  rlwinm    r5,r5,24,24,31
  stb       r5, 0xE(r1)
  mullw     r9, r10, r9
  rlwinm    r6,r7,24,24,31
  stb       r6, 0xD(r1)
  rlwinm    r8,r9,24,24,31
  stb       r8, 0xC(r1)
  lwz       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        0x5D178
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B4FC
 * Size:	0000B0
 */
void JPARegistPrmAlpha(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x8C(r4)
  lwz       r8, 0x0(r3)
  li        r3, 0x1
  stw       r0, 0xC(r1)
  lbz       r5, 0xBB(r8)
  lbz       r6, 0xF(r1)
  addi      r0, r5, 0x1
  lbz       r7, 0xB8(r8)
  mullw     r5, r6, r0
  lbz       r4, 0x96(r4)
  lbz       r10, 0xC(r1)
  addi      r9, r7, 0x1
  addi      r0, r4, 0x1
  lbz       r6, 0xB9(r8)
  rlwinm    r11,r5,24,24,31
  lbz       r4, 0xBA(r8)
  mullw     r0, r11, r0
  addi      r7, r6, 0x1
  lbz       r8, 0xD(r1)
  addi      r5, r4, 0x1
  stb       r11, 0xF(r1)
  addi      r4, r1, 0x8
  rlwinm    r0,r0,24,24,31
  lbz       r6, 0xE(r1)
  mullw     r9, r10, r9
  stb       r0, 0xF(r1)
  rlwinm    r0,r9,24,24,31
  stb       r0, 0xC(r1)
  mullw     r0, r6, r5
  mullw     r7, r8, r7
  rlwinm    r0,r0,24,24,31
  stb       r0, 0xE(r1)
  rlwinm    r5,r7,24,24,31
  stb       r5, 0xD(r1)
  lwz       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        0x5D0C8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B5AC
 * Size:	000134
 */
void JPARegistPrmAlphaEnv(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  stw       r28, 0x20(r1)
  lwz       r0, 0x8C(r4)
  lwz       r28, 0x0(r3)
  li        r3, 0x1
  stw       r0, 0x14(r1)
  lbz       r5, 0xBB(r28)
  lbz       r6, 0x17(r1)
  addi      r0, r5, 0x1
  lbz       r5, 0xB8(r28)
  mullw     r0, r6, r0
  lbz       r7, 0xB9(r28)
  lbz       r6, 0xBA(r28)
  addi      r8, r5, 0x1
  addi      r12, r7, 0x1
  lwz       r7, 0x90(r4)
  lbz       r5, 0x96(r4)
  rlwinm    r29,r0,24,24,31
  lbz       r4, 0x14(r1)
  addi      r10, r6, 0x1
  addi      r0, r5, 0x1
  lbz       r31, 0x15(r1)
  lbz       r11, 0x16(r1)
  mullw     r9, r29, r0
  lbz       r5, 0xBD(r28)
  stw       r7, 0x10(r1)
  lbz       r6, 0xBC(r28)
  addi      r0, r5, 0x1
  lbz       r5, 0x12(r1)
  mullw     r30, r4, r8
  lbz       r4, 0xBE(r28)
  addi      r7, r6, 0x1
  lbz       r8, 0x10(r1)
  lbz       r6, 0x11(r1)
  addi      r4, r4, 0x1
  mullw     r12, r31, r12
  rlwinm    r31,r30,24,24,31
  stb       r29, 0x17(r1)
  rlwinm    r9,r9,24,24,31
  stb       r31, 0x14(r1)
  mullw     r10, r11, r10
  rlwinm    r11,r12,24,24,31
  stb       r9, 0x17(r1)
  stb       r11, 0x15(r1)
  mullw     r7, r8, r7
  rlwinm    r8,r10,24,24,31
  stb       r8, 0x16(r1)
  mullw     r6, r6, r0
  lwz       r0, 0x14(r1)
  rlwinm    r7,r7,24,24,31
  stw       r0, 0xC(r1)
  stb       r7, 0x10(r1)
  mullw     r5, r5, r4
  rlwinm    r4,r6,24,24,31
  stb       r4, 0x11(r1)
  addi      r4, r1, 0xC
  rlwinm    r0,r5,24,24,31
  stb       r0, 0x12(r1)
  bl        0x5CFB8
  lwz       r0, 0x10(r1)
  addi      r4, r1, 0x8
  li        r3, 0x2
  stw       r0, 0x8(r1)
  bl        0x5CFA4
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B6E0
 * Size:	000124
 */
void JPARegistAlphaEnv(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  lwz       r31, 0x0(r3)
  li        r3, 0x1
  lbz       r5, 0x96(r4)
  lwz       r0, 0x108(r31)
  lwz       r7, 0x90(r4)
  addi      r10, r5, 0x1
  stw       r0, 0x14(r1)
  addi      r4, r1, 0xC
  lbz       r5, 0xBB(r31)
  lbz       r6, 0x17(r1)
  addi      r0, r5, 0x1
  stw       r7, 0x10(r1)
  mullw     r0, r6, r0
  lbz       r7, 0xB8(r31)
  lbz       r6, 0xB9(r31)
  lbz       r9, 0x14(r1)
  addi      r7, r7, 0x1
  lbz       r5, 0xBA(r31)
  rlwinm    r30,r0,24,24,31
  addi      r0, r5, 0x1
  mullw     r9, r9, r7
  lbz       r11, 0x16(r1)
  lbz       r5, 0xBE(r31)
  addi      r6, r6, 0x1
  lbz       r8, 0x15(r1)
  lbz       r7, 0xBC(r31)
  mullw     r12, r8, r6
  lbz       r6, 0xBD(r31)
  rlwinm    r31,r9,24,24,31
  lbz       r9, 0x10(r1)
  addi      r8, r7, 0x1
  lbz       r7, 0x11(r1)
  mullw     r11, r11, r0
  addi      r0, r6, 0x1
  rlwinm    r12,r12,24,24,31
  lbz       r6, 0x12(r1)
  addi      r5, r5, 0x1
  stb       r30, 0x17(r1)
  rlwinm    r11,r11,24,24,31
  stb       r31, 0x14(r1)
  mullw     r8, r9, r8
  stb       r12, 0x15(r1)
  stb       r11, 0x16(r1)
  mullw     r10, r30, r10
  rlwinm    r8,r8,24,24,31
  stb       r8, 0x10(r1)
  rlwinm    r9,r10,24,24,31
  mullw     r7, r7, r0
  stb       r9, 0x17(r1)
  lwz       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  mullw     r5, r6, r5
  rlwinm    r6,r7,24,24,31
  stb       r6, 0x11(r1)
  rlwinm    r0,r5,24,24,31
  stb       r0, 0x12(r1)
  bl        0x5CE8C
  lwz       r0, 0x10(r1)
  addi      r4, r1, 0x8
  li        r3, 0x2
  stw       r0, 0x8(r1)
  bl        0x5CE78
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
 * Address:	8008B804
 * Size:	000084
 */
void JPARegistEnv(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r5, 0x0(r3)
  li        r3, 0x2
  lwz       r0, 0x90(r4)
  addi      r4, r1, 0x8
  lbz       r7, 0xBC(r5)
  lbz       r6, 0xBD(r5)
  stw       r0, 0xC(r1)
  addi      r8, r7, 0x1
  lbz       r5, 0xBE(r5)
  addi      r6, r6, 0x1
  lbz       r9, 0xC(r1)
  lbz       r7, 0xD(r1)
  addi      r0, r5, 0x1
  lbz       r5, 0xE(r1)
  mullw     r8, r9, r8
  mullw     r6, r7, r6
  rlwinm    r7,r8,24,24,31
  stb       r7, 0xC(r1)
  mullw     r0, r5, r0
  rlwinm    r5,r6,24,24,31
  stb       r5, 0xD(r1)
  rlwinm    r0,r0,24,24,31
  stb       r0, 0xE(r1)
  lwz       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        0x5CDEC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B888
 * Size:	00002C
 */
void JPACalcClrIdxNormal(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  lwz       r4, 0x4(r3)
  lwz       r5, 0x0(r3)
  lwz       r4, 0x1C(r4)
  lwz       r0, 0x100(r5)
  lwz       r4, 0x0(r4)
  lha       r4, 0x24(r4)
  cmplw     r0, r4
  bge-      .loc_0x24
  extsh     r4, r0

.loc_0x24:
  sth       r4, 0x214(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B8B4
 * Size:	000028
 */
void JPACalcClrIdxNormal(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  lwz       r5, 0x4(r3)
  lha       r0, 0x80(r4)
  lwz       r4, 0x1C(r5)
  lwz       r4, 0x0(r4)
  lha       r4, 0x24(r4)
  cmpw      r0, r4
  bge-      .loc_0x20
  mr        r4, r0

.loc_0x20:
  sth       r4, 0x214(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B8DC
 * Size:	000030
 */
void JPACalcClrIdxRepeat(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  lwz       r4, 0x4(r3)
  lwz       r5, 0x0(r3)
  lwz       r4, 0x1C(r4)
  lwz       r5, 0x100(r5)
  lwz       r4, 0x0(r4)
  lha       r4, 0x24(r4)
  addi      r4, r4, 0x1
  divwu     r0, r5, r4
  mullw     r0, r0, r4
  sub       r0, r5, r0
  sth       r0, 0x214(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B90C
 * Size:	00003C
 */
void JPACalcClrIdxRepeat(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  lwz       r5, 0x4(r3)
  lbz       r6, 0x95(r4)
  lwz       r5, 0x1C(r5)
  lha       r0, 0x80(r4)
  lwz       r4, 0x0(r5)
  lbz       r5, 0x2F(r4)
  lha       r4, 0x24(r4)
  and       r5, r6, r5
  add       r5, r0, r5
  addi      r4, r4, 0x1
  divw      r0, r5, r4
  mullw     r0, r0, r4
  sub       r0, r5, r0
  sth       r0, 0x214(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B948
 * Size:	000040
 */
void JPACalcClrIdxReverse(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  lwz       r5, 0x4(r3)
  lwz       r4, 0x0(r3)
  lwz       r5, 0x1C(r5)
  lwz       r6, 0x100(r4)
  lwz       r4, 0x0(r5)
  lha       r5, 0x24(r4)
  divwu     r4, r6, r5
  mullw     r0, r4, r5
  rlwinm    r4,r4,0,31,31
  sub       r6, r6, r0
  rlwinm    r0,r6,1,0,30
  sub       r0, r5, r0
  mullw     r0, r4, r0
  add       r0, r6, r0
  sth       r0, 0x214(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B988
 * Size:	00004C
 */
void JPACalcClrIdxReverse(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  lwz       r5, 0x4(r3)
  lbz       r6, 0x95(r4)
  lwz       r5, 0x1C(r5)
  lha       r0, 0x80(r4)
  lwz       r5, 0x0(r5)
  lbz       r4, 0x2F(r5)
  lha       r7, 0x24(r5)
  and       r4, r6, r4
  add       r5, r0, r4
  divw      r4, r5, r7
  mullw     r0, r4, r7
  rlwinm    r4,r4,0,31,31
  sub       r5, r5, r0
  rlwinm    r0,r5,1,0,30
  sub       r0, r7, r0
  mullw     r0, r4, r0
  add       r0, r5, r0
  sth       r0, 0x214(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B9D4
 * Size:	00000C
 */
void JPACalcClrIdxMerge(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  li        r0, 0
  sth       r0, 0x214(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008B9E0
 * Size:	000070
 */
void JPACalcClrIdxMerge(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lis       r0, 0x4330
  lfd       f1, -0x7820(r2)
  lwz       r5, 0x4(r3)
  lfs       f2, 0x84(r4)
  lwz       r5, 0x1C(r5)
  stw       r0, 0x8(r1)
  lwz       r6, 0x0(r5)
  lbz       r4, 0x95(r4)
  lha       r5, 0x24(r6)
  lbz       r0, 0x2F(r6)
  addi      r7, r5, 0x1
  xoris     r5, r7, 0x8000
  and       r0, r4, r0
  stw       r5, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r4, 0x14(r1)
  add       r4, r4, r0
  divw      r0, r4, r7
  mullw     r0, r0, r7
  sub       r0, r4, r0
  sth       r0, 0x214(r3)
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BA50
 * Size:	00000C
 */
void JPACalcClrIdxRandom(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  li        r0, 0
  sth       r0, 0x214(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BA5C
 * Size:	000034
 */
void JPACalcClrIdxRandom(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  lwz       r5, 0x4(r3)
  lbz       r6, 0x95(r4)
  lwz       r4, 0x1C(r5)
  lwz       r4, 0x0(r4)
  lbz       r0, 0x2F(r4)
  lha       r4, 0x24(r4)
  and       r5, r6, r0
  addi      r4, r4, 0x1
  divw      r0, r5, r4
  mullw     r0, r0, r4
  sub       r0, r5, r0
  sth       r0, 0x214(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BA90
 * Size:	000040
 */
void JPACalcPrm(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  lwz       r4, 0x4(r3)
  lha       r0, 0x214(r3)
  lwz       r4, 0x1C(r4)
  rlwinm    r0,r0,2,0,29
  lwz       r5, 0x0(r3)
  lwz       r3, 0xC(r4)
  add       r3, r3, r0
  lbz       r0, 0x0(r3)
  stb       r0, 0x108(r5)
  lbz       r0, 0x1(r3)
  stb       r0, 0x109(r5)
  lbz       r0, 0x2(r3)
  stb       r0, 0x10A(r5)
  lbz       r0, 0x3(r3)
  stb       r0, 0x10B(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BAD0
 * Size:	00003C
 */
void JPACalcPrm(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  lwz       r5, 0x4(r3)
  lha       r0, 0x214(r3)
  lwz       r3, 0x1C(r5)
  rlwinm    r0,r0,2,0,29
  lwz       r3, 0xC(r3)
  add       r3, r3, r0
  lbz       r0, 0x0(r3)
  stb       r0, 0x8C(r4)
  lbz       r0, 0x1(r3)
  stb       r0, 0x8D(r4)
  lbz       r0, 0x2(r3)
  stb       r0, 0x8E(r4)
  lbz       r0, 0x3(r3)
  stb       r0, 0x8F(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BB0C
 * Size:	000040
 */
void JPACalcEnv(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  lwz       r4, 0x4(r3)
  lha       r0, 0x214(r3)
  lwz       r4, 0x1C(r4)
  rlwinm    r0,r0,2,0,29
  lwz       r5, 0x0(r3)
  lwz       r3, 0x10(r4)
  add       r3, r3, r0
  lbz       r0, 0x0(r3)
  stb       r0, 0x10C(r5)
  lbz       r0, 0x1(r3)
  stb       r0, 0x10D(r5)
  lbz       r0, 0x2(r3)
  stb       r0, 0x10E(r5)
  lbz       r0, 0x3(r3)
  stb       r0, 0x10F(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BB4C
 * Size:	00003C
 */
void JPACalcEnv(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  lwz       r5, 0x4(r3)
  lha       r0, 0x214(r3)
  lwz       r3, 0x1C(r5)
  rlwinm    r0,r0,2,0,29
  lwz       r3, 0x10(r3)
  add       r3, r3, r0
  lbz       r0, 0x0(r3)
  stb       r0, 0x90(r4)
  lbz       r0, 0x1(r3)
  stb       r0, 0x91(r4)
  lbz       r0, 0x2(r3)
  stb       r0, 0x92(r4)
  lbz       r0, 0x3(r3)
  stb       r0, 0x93(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BB88
 * Size:	000048
 */
void JPACalcColorCopy(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  lwz       r3, 0x0(r3)
  lbz       r0, 0x108(r3)
  stb       r0, 0x8C(r4)
  lbz       r0, 0x109(r3)
  stb       r0, 0x8D(r4)
  lbz       r0, 0x10A(r3)
  stb       r0, 0x8E(r4)
  lbz       r0, 0x10B(r3)
  stb       r0, 0x8F(r4)
  lbz       r0, 0x10C(r3)
  stb       r0, 0x90(r4)
  lbz       r0, 0x10D(r3)
  stb       r0, 0x91(r4)
  lbz       r0, 0x10E(r3)
  stb       r0, 0x92(r4)
  lbz       r0, 0x10F(r3)
  stb       r0, 0x93(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BBD0
 * Size:	000038
 */
void JPAGenTexCrdMtxIdt(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0
  li        r4, 0x1
  stw       r0, 0x14(r1)
  li        r5, 0x4
  li        r6, 0x3C
  li        r7, 0
  li        r8, 0x7D
  bl        0x59128
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BC08
 * Size:	000038
 */
void JPAGenTexCrdMtxAnm(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0
  li        r4, 0x1
  stw       r0, 0x14(r1)
  li        r5, 0x4
  li        r6, 0x1E
  li        r7, 0
  li        r8, 0x7D
  bl        0x590F0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BC40
 * Size:	000038
 */
void JPAGenTexCrdMtxPrj(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0
  li        r4, 0
  stw       r0, 0x14(r1)
  li        r5, 0
  li        r6, 0x1E
  li        r7, 0
  li        r8, 0x7D
  bl        0x590B8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BC78
 * Size:	000198
 */
void JPAGenCalcTexCrdMtxAnm(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  lwz       r5, 0x4(r3)
  lis       r8, 0x4330
  lwz       r4, 0x0(r3)
  lis       r3, 0x8050
  lwz       r9, 0x1C(r5)
  addi      r7, r3, 0x71A0
  lwz       r0, 0x100(r4)
  addi      r3, r1, 0x8
  lwz       r6, 0x0(r9)
  li        r4, 0x1E
  stw       r0, 0x3C(r1)
  li        r5, 0x1
  lwz       r0, 0x8(r6)
  stw       r8, 0x38(r1)
  rlwinm    r6,r0,7,31,31
  lfd       f3, -0x7808(r2)
  lfd       f0, 0x38(r1)
  rlwinm    r0,r0,6,31,31
  lwz       r9, 0x4(r9)
  fsubs     f6, f0, f3
  stw       r6, 0x44(r1)
  lfs       f1, 0x24(r9)
  stw       r8, 0x40(r1)
  lfs       f0, 0x10(r9)
  lfd       f2, 0x40(r1)
  fmadds    f0, f6, f1, f0
  stw       r0, 0x4C(r1)
  fsubs     f2, f2, f3
  lfs       f7, -0x7814(r2)
  stw       r8, 0x48(r1)
  fctiwz    f0, f0
  lfd       f1, 0x48(r1)
  fadds     f2, f7, f2
  lfs       f5, -0x7818(r2)
  fsubs     f1, f1, f3
  stfd      f0, 0x50(r1)
  fmuls     f11, f5, f2
  lfs       f3, 0x14(r9)
  lfs       f2, 0x0(r9)
  fadds     f4, f7, f1
  fmadds    f8, f6, f3, f2
  lwz       r0, 0x54(r1)
  lfs       f1, 0x18(r9)
  rlwinm    r0,r0,30,18,28
  fmuls     f12, f5, f4
  lfs       f0, 0x4(r9)
  add       r6, r7, r0
  fadds     f10, f11, f8
  fmadds    f4, f6, f1, f0
  lfs       f3, 0x1C(r9)
  lfs       f2, 0x8(r9)
  lfs       f1, 0x20(r9)
  lfs       f0, 0xC(r9)
  fmadds    f13, f6, f3, f2
  lfs       f9, 0x4(r6)
  fadds     f3, f12, f4
  fmadds    f31, f6, f1, f0
  lfsx      f8, r7, r0
  lfs       f5, -0x7810(r2)
  fmuls     f1, f9, f10
  stfs      f7, 0x30(r1)
  fmuls     f0, f9, f3
  fmuls     f4, f13, f9
  stfs      f5, 0x10(r1)
  fmsubs    f1, f8, f3, f1
  fneg      f2, f13
  stfs      f5, 0x20(r1)
  fmuls     f3, f31, f8
  stfs      f4, 0x8(r1)
  fmadds    f4, f13, f1, f11
  fmuls     f6, f2, f8
  fmuls     f2, f31, f9
  stfs      f5, 0x28(r1)
  fneg      f1, f31
  fmadds    f0, f8, f10, f0
  stfs      f6, 0xC(r1)
  stfs      f4, 0x14(r1)
  fmadds    f0, f1, f0, f12
  stfs      f3, 0x18(r1)
  stfs      f2, 0x1C(r1)
  stfs      f0, 0x24(r1)
  stfs      f5, 0x2C(r1)
  stfs      f5, 0x34(r1)
  bl        0x5D874
  li        r3, 0
  li        r4, 0x1
  li        r5, 0x4
  li        r6, 0x1E
  li        r7, 0
  li        r8, 0x7D
  bl        0x58F28
  psq_l     f31,0x68(r1),0,0
  lwz       r0, 0x74(r1)
  lfd       f31, 0x60(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BE10
 * Size:	000170
 */
void JPALoadCalcTexCrdMtxAnm(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r8, 0x4330
  lfd       f1, -0x7820(r2)
  stw       r0, 0x64(r1)
  lfd       f3, -0x7808(r2)
  lwz       r5, 0x4(r3)
  lis       r3, 0x8050
  lha       r0, 0x80(r4)
  addi      r7, r3, 0x71A0
  lwz       r6, 0x1C(r5)
  addi      r3, r1, 0x8
  xoris     r0, r0, 0x8000
  stw       r8, 0x38(r1)
  lwz       r5, 0x0(r6)
  li        r4, 0x1E
  stw       r0, 0x3C(r1)
  lwz       r0, 0x8(r5)
  li        r5, 0x1
  lfd       f0, 0x38(r1)
  lwz       r9, 0x4(r6)
  rlwinm    r6,r0,7,31,31
  fsubs     f10, f0, f1
  rlwinm    r0,r0,6,31,31
  stw       r6, 0x44(r1)
  lfs       f1, 0x24(r9)
  stw       r8, 0x40(r1)
  lfs       f0, 0x10(r9)
  lfd       f2, 0x40(r1)
  fmadds    f0, f10, f1, f0
  stw       r0, 0x4C(r1)
  fsubs     f2, f2, f3
  lfs       f6, -0x7814(r2)
  stw       r8, 0x48(r1)
  fctiwz    f0, f0
  lfd       f1, 0x48(r1)
  fadds     f5, f6, f2
  lfs       f7, -0x7818(r2)
  fsubs     f1, f1, f3
  stfd      f0, 0x50(r1)
  lfs       f0, 0x0(r9)
  fmuls     f11, f7, f5
  lwz       r0, 0x54(r1)
  fadds     f4, f6, f1
  lfs       f1, 0x14(r9)
  rlwinm    r0,r0,30,18,28
  add       r6, r7, r0
  lfs       f3, 0x18(r9)
  fmadds    f5, f10, f1, f0
  fmuls     f12, f7, f4
  lfs       f2, 0x4(r9)
  lfs       f1, 0x1C(r9)
  lfs       f0, 0x8(r9)
  fmadds    f2, f10, f3, f2
  fadds     f9, f11, f5
  fmadds    f13, f10, f1, f0
  lfs       f8, 0x4(r6)
  fadds     f5, f12, f2
  lfs       f1, 0x20(r9)
  lfs       f0, 0xC(r9)
  lfs       f4, -0x7810(r2)
  fmadds    f10, f10, f1, f0
  lfsx      f7, r7, r0
  fmuls     f2, f13, f8
  stfs      f4, 0x10(r1)
  fmuls     f0, f8, f5
  fmuls     f1, f8, f9
  stfs      f2, 0x8(r1)
  fneg      f3, f13
  fmadds    f0, f7, f9, f0
  fmsubs    f2, f7, f5, f1
  stfs      f4, 0x20(r1)
  fmuls     f5, f3, f7
  fmuls     f1, f10, f7
  stfs      f4, 0x28(r1)
  fmadds    f3, f13, f2, f11
  fmuls     f2, f10, f8
  stfs      f5, 0xC(r1)
  stfs      f1, 0x18(r1)
  fneg      f1, f10
  stfs      f3, 0x14(r1)
  fmadds    f0, f1, f0, f12
  stfs      f2, 0x1C(r1)
  stfs      f0, 0x24(r1)
  stfs      f4, 0x2C(r1)
  stfs      f6, 0x30(r1)
  stfs      f4, 0x34(r1)
  bl        0x5D6E0
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BF80
 * Size:	000054
 */
void JPALoadTex(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  lwz       r5, 0x4(r3)
  lwz       r6, 0x8(r3)
  lwz       r3, 0x1C(r5)
  lwz       r5, 0x38(r5)
  lwz       r3, 0x0(r3)
  lwz       r6, 0x8(r6)
  lbz       r0, 0x20(r3)
  rlwinm    r0,r0,1,0,30
  lhzx      r0, r5, r0
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r6, r0
  addi      r3, r3, 0x4
  bl        -0x58990
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008BFD4
 * Size:	000050
 */
void JPALoadTexAnm(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  lwz       r5, 0x0(r3)
  lwz       r6, 0x4(r3)
  lbz       r0, 0x111(r5)
  lwz       r5, 0x38(r6)
  rlwinm    r0,r0,1,0,30
  lwz       r3, 0x8(r3)
  lhzx      r0, r5, r0
  lwz       r3, 0x8(r3)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  addi      r3, r3, 0x4
  bl        -0x589E0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C024
 * Size:	00004C
 */
void JPALoadTexAnm(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r5, 0x4(r3)
  lbz       r0, 0x94(r4)
  li        r4, 0
  lwz       r5, 0x38(r5)
  rlwinm    r0,r0,1,0,30
  lwz       r3, 0x8(r3)
  lhzx      r0, r5, r0
  lwz       r3, 0x8(r3)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  addi      r3, r3, 0x4
  bl        -0x58A2C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C070
 * Size:	00003C
 */
void JPACalcTexIdxNormal(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  lwz       r4, 0x4(r3)
  lwz       r5, 0x0(r3)
  lwz       r6, 0x1C(r4)
  lwz       r4, 0x100(r5)
  lwz       r3, 0x0(r6)
  lbz       r3, 0x1F(r3)
  subi      r0, r3, 0x1
  cmplw     r0, r4
  bge-      .loc_0x28
  mr        r4, r0

.loc_0x28:
  lwz       r3, 0x8(r6)
  rlwinm    r0,r4,0,24,31
  lbzx      r0, r3, r0
  stb       r0, 0x111(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C0AC
 * Size:	000038
 */
void JPACalcTexIdxNormal(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  lwz       r3, 0x4(r3)
  lha       r5, 0x80(r4)
  lwz       r6, 0x1C(r3)
  lwz       r3, 0x0(r6)
  lbz       r3, 0x1F(r3)
  subi      r0, r3, 0x1
  cmpw      r0, r5
  bge-      .loc_0x24
  mr        r5, r0

.loc_0x24:
  lwz       r3, 0x8(r6)
  rlwinm    r0,r5,0,24,31
  lbzx      r0, r3, r0
  stb       r0, 0x94(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C0E4
 * Size:	000038
 */
void JPACalcTexIdxRepeat(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  lwz       r4, 0x4(r3)
  lwz       r6, 0x0(r3)
  lwz       r5, 0x1C(r4)
  lwz       r4, 0x100(r6)
  lwz       r3, 0x0(r5)
  lwz       r5, 0x8(r5)
  lbz       r3, 0x1F(r3)
  divwu     r0, r4, r3
  mullw     r0, r0, r3
  sub       r0, r4, r0
  rlwinm    r0,r0,0,24,31
  lbzx      r0, r5, r0
  stb       r0, 0x111(r6)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C11C
 * Size:	000044
 */
void JPACalcTexIdxRepeat(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  lwz       r3, 0x4(r3)
  lbz       r7, 0x95(r4)
  lwz       r5, 0x1C(r3)
  lha       r0, 0x80(r4)
  lwz       r3, 0x0(r5)
  lwz       r6, 0x8(r5)
  lbz       r5, 0x30(r3)
  lbz       r3, 0x1F(r3)
  and       r5, r7, r5
  add       r5, r0, r5
  divw      r0, r5, r3
  mullw     r0, r0, r3
  sub       r0, r5, r0
  rlwinm    r0,r0,0,24,31
  lbzx      r0, r6, r0
  stb       r0, 0x94(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C160
 * Size:	000050
 */
void JPACalcTexIdxReverse(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  lwz       r4, 0x4(r3)
  lwz       r5, 0x0(r3)
  lwz       r4, 0x1C(r4)
  lwz       r6, 0x100(r5)
  lwz       r3, 0x0(r4)
  lwz       r4, 0x8(r4)
  lbz       r3, 0x1F(r3)
  subi      r7, r3, 0x1
  divw      r3, r6, r7
  mullw     r0, r3, r7
  rlwinm    r3,r3,0,31,31
  sub       r6, r6, r0
  rlwinm    r0,r6,1,0,30
  sub       r0, r7, r0
  mullw     r0, r3, r0
  add       r0, r6, r0
  rlwinm    r0,r0,0,24,31
  lbzx      r0, r4, r0
  stb       r0, 0x111(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C1B0
 * Size:	00005C
 */
void JPACalcTexIdxReverse(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  lwz       r3, 0x4(r3)
  lbz       r7, 0x95(r4)
  lwz       r5, 0x1C(r3)
  lha       r0, 0x80(r4)
  lwz       r3, 0x0(r5)
  lwz       r5, 0x8(r5)
  lbz       r6, 0x30(r3)
  lbz       r3, 0x1F(r3)
  and       r6, r7, r6
  add       r6, r0, r6
  subi      r7, r3, 0x1
  divw      r3, r6, r7
  mullw     r0, r3, r7
  rlwinm    r3,r3,0,31,31
  sub       r6, r6, r0
  rlwinm    r0,r6,1,0,30
  sub       r0, r7, r0
  mullw     r0, r3, r0
  add       r0, r6, r0
  rlwinm    r0,r0,0,24,31
  lbzx      r0, r5, r0
  stb       r0, 0x94(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C20C
 * Size:	00001C
 */
void JPACalcTexIdxMerge(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  lwz       r4, 0x4(r3)
  lwz       r3, 0x0(r3)
  lwz       r4, 0x1C(r4)
  lwz       r4, 0x0(r4)
  lbz       r0, 0x20(r4)
  stb       r0, 0x111(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C228
 * Size:	000078
 */
void JPACalcTexIdxMerge(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lis       r0, 0x4330
  lfd       f2, -0x7820(r2)
  lwz       r3, 0x4(r3)
  stw       r0, 0x8(r1)
  lwz       r7, 0x1C(r3)
  lfs       f0, 0x84(r4)
  lwz       r6, 0x0(r7)
  lbz       r3, 0x95(r4)
  lbz       r8, 0x1F(r6)
  lbz       r0, 0x30(r6)
  xoris     r5, r8, 0x8000
  stw       r5, 0xC(r1)
  and       r0, r3, r0
  lwz       r5, 0x8(r7)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r3, 0x14(r1)
  add       r3, r3, r0
  divw      r0, r3, r8
  mullw     r0, r0, r8
  sub       r0, r3, r0
  rlwinm    r0,r0,0,24,31
  lbzx      r0, r5, r0
  stb       r0, 0x94(r4)
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C2A0
 * Size:	00001C
 */
void JPACalcTexIdxRandom(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  lwz       r4, 0x4(r3)
  lwz       r3, 0x0(r3)
  lwz       r4, 0x1C(r4)
  lwz       r4, 0x0(r4)
  lbz       r0, 0x20(r4)
  stb       r0, 0x111(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C2BC
 * Size:	00003C
 */
void JPACalcTexIdxRandom(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  lwz       r3, 0x4(r3)
  lbz       r6, 0x95(r4)
  lwz       r5, 0x1C(r3)
  lwz       r3, 0x0(r5)
  lwz       r5, 0x8(r5)
  lbz       r0, 0x30(r3)
  lbz       r3, 0x1F(r3)
  and       r6, r6, r0
  divw      r0, r6, r3
  mullw     r0, r0, r3
  sub       r0, r6, r0
  rlwinm    r0,r0,0,24,31
  lbzx      r0, r5, r0
  stb       r0, 0x94(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C2F8
 * Size:	000028
 */
void JPALoadPosMtxCam(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  addi      r3, r3, 0x184
  stw       r0, 0x14(r1)
  bl        0x5D26C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C320
 * Size:	000004
 */
void noLoadPrj(const JPAEmitterWorkData *, const float (*) [4])
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C324
 * Size:	000038
 */
void loadPrj(const JPAEmitterWorkData *, const float (*) [4])
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  addi      r3, r3, 0x1B4
  stw       r0, 0x44(r1)
  addi      r5, r1, 0x8
  bl        0x5DFC8
  addi      r3, r1, 0x8
  li        r4, 0x1E
  li        r5, 0
  bl        0x5D304
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C35C
 * Size:	0001AC
 */
void loadPrjAnm(const JPAEmitterWorkData *, const float (*) [4])
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  lwz       r7, 0x4(r3)
  lis       r8, 0x4330
  lwz       r6, 0x0(r3)
  mr        r10, r3
  lwz       r9, 0x1C(r7)
  lis       r5, 0x8050
  lwz       r0, 0x100(r6)
  mr        r31, r4
  lwz       r6, 0x0(r9)
  addi      r7, r5, 0x71A0
  stw       r0, 0x3C(r1)
  addi      r3, r1, 0x8
  lwz       r0, 0x8(r6)
  mr        r5, r3
  stw       r8, 0x38(r1)
  addi      r4, r10, 0x1B4
  rlwinm    r6,r0,7,31,31
  lfd       f3, -0x7808(r2)
  lfd       f0, 0x38(r1)
  rlwinm    r0,r0,6,31,31
  lwz       r9, 0x4(r9)
  fsubs     f6, f0, f3
  stw       r6, 0x44(r1)
  lfs       f1, 0x24(r9)
  stw       r8, 0x40(r1)
  lfs       f0, 0x10(r9)
  lfd       f2, 0x40(r1)
  fmadds    f0, f6, f1, f0
  stw       r0, 0x4C(r1)
  fsubs     f2, f2, f3
  lfs       f7, -0x7814(r2)
  stw       r8, 0x48(r1)
  fctiwz    f0, f0
  lfd       f1, 0x48(r1)
  fadds     f2, f7, f2
  lfs       f5, -0x7818(r2)
  fsubs     f1, f1, f3
  stfd      f0, 0x50(r1)
  fmuls     f11, f5, f2
  lfs       f3, 0x14(r9)
  lfs       f2, 0x0(r9)
  fadds     f4, f7, f1
  fmadds    f8, f6, f3, f2
  lwz       r0, 0x54(r1)
  lfs       f1, 0x18(r9)
  rlwinm    r0,r0,30,18,28
  fmuls     f12, f5, f4
  lfs       f0, 0x4(r9)
  add       r6, r7, r0
  fadds     f10, f11, f8
  fmadds    f5, f6, f1, f0
  lfs       f3, 0x1C(r9)
  lfs       f2, 0x8(r9)
  lfs       f1, 0x20(r9)
  lfs       f0, 0xC(r9)
  fmadds    f13, f6, f3, f2
  lfs       f9, 0x4(r6)
  fadds     f3, f12, f5
  fmadds    f31, f6, f1, f0
  lfsx      f8, r7, r0
  lfs       f4, -0x7810(r2)
  fmuls     f1, f9, f10
  stfs      f7, 0x30(r1)
  fmuls     f0, f9, f3
  fmuls     f5, f13, f9
  stfs      f4, 0x14(r1)
  fmsubs    f1, f8, f3, f1
  fneg      f2, f13
  stfs      f4, 0x24(r1)
  fmuls     f3, f31, f8
  stfs      f5, 0x8(r1)
  fmadds    f5, f13, f1, f11
  fmuls     f6, f2, f8
  fmuls     f2, f31, f9
  stfs      f4, 0x28(r1)
  fneg      f1, f31
  fmadds    f0, f8, f10, f0
  stfs      f6, 0xC(r1)
  stfs      f5, 0x10(r1)
  fmadds    f0, f1, f0, f12
  stfs      f3, 0x18(r1)
  stfs      f2, 0x1C(r1)
  stfs      f0, 0x20(r1)
  stfs      f4, 0x2C(r1)
  stfs      f4, 0x34(r1)
  bl        0x5DE38
  addi      r3, r1, 0x8
  mr        r4, r31
  mr        r5, r3
  bl        0x5DE28
  addi      r3, r1, 0x8
  li        r4, 0x1E
  li        r5, 0
  bl        0x5D164
  psq_l     f31,0x68(r1),0,0
  lwz       r0, 0x74(r1)
  lfd       f31, 0x60(r1)
  lwz       r31, 0x5C(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C508
 * Size:	0000E8
 */
void JPADrawBillboard(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r4
  stw       r30, 0x48(r1)
  mr        r30, r3
  lwz       r0, 0x7C(r4)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0xD0
  addi      r3, r30, 0x184
  addi      r5, r1, 0x8
  bl        0x5E6A0
  lfs       f2, 0x144(r30)
  addi      r3, r1, 0x14
  lfs       f1, 0x60(r31)
  li        r4, 0
  lfs       f0, 0x8(r1)
  fmuls     f1, f2, f1
  lfs       f3, 0xC(r1)
  stfs      f0, 0x20(r1)
  lfs       f2, -0x7814(r2)
  stfs      f1, 0x14(r1)
  lfs       f1, 0x10(r1)
  lfs       f5, 0x148(r30)
  lfs       f4, 0x64(r31)
  lfs       f0, -0x7810(r2)
  fmuls     f4, f5, f4
  stfs      f3, 0x30(r1)
  stfs      f2, 0x3C(r1)
  stfs      f4, 0x28(r1)
  stfs      f1, 0x40(r1)
  stfs      f0, 0x38(r1)
  stfs      f0, 0x34(r1)
  stfs      f0, 0x2C(r1)
  stfs      f0, 0x24(r1)
  stfs      f0, 0x1C(r1)
  stfs      f0, 0x18(r1)
  bl        0x5CFD8
  lwz       r0, 0x210(r30)
  lis       r3, 0x804A
  addi      r5, r3, 0x30E0
  mr        r3, r30
  rlwinm    r0,r0,2,0,29
  addi      r4, r1, 0x14
  lwzx      r12, r5, r0
  mtctr     r12
  bctrl     
  lis       r3, 0x804A
  li        r4, 0x20
  addi      r3, r3, 0x30A0
  bl        0x5CE04

.loc_0xD0:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C5F0
 * Size:	000118
 */
void JPADrawRotBillboard(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r4
  stw       r30, 0x48(r1)
  mr        r30, r3
  lwz       r0, 0x7C(r4)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0x100
  addi      r3, r30, 0x184
  addi      r5, r1, 0x8
  bl        0x5E5B8
  lhz       r0, 0x88(r31)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  lfs       f1, 0x144(r30)
  rlwinm    r0,r0,30,18,28
  lfs       f0, 0x60(r31)
  lfsx      f4, r3, r0
  add       r3, r3, r0
  lfs       f3, 0x148(r30)
  fmuls     f6, f1, f0
  lfs       f2, 0x64(r31)
  fneg      f1, f4
  lfs       f0, -0x7810(r2)
  li        r4, 0
  fmuls     f3, f3, f2
  lfs       f2, 0x4(r3)
  fmuls     f5, f4, f6
  stfs      f0, 0x38(r1)
  addi      r3, r1, 0x14
  fmuls     f8, f2, f6
  fmuls     f7, f1, f3
  lfs       f6, 0x8(r1)
  fmuls     f4, f2, f3
  lfs       f3, 0xC(r1)
  lfs       f2, -0x7814(r2)
  lfs       f1, 0x10(r1)
  stfs      f8, 0x14(r1)
  stfs      f7, 0x18(r1)
  stfs      f6, 0x20(r1)
  stfs      f5, 0x24(r1)
  stfs      f4, 0x28(r1)
  stfs      f3, 0x30(r1)
  stfs      f2, 0x3C(r1)
  stfs      f1, 0x40(r1)
  stfs      f0, 0x34(r1)
  stfs      f0, 0x2C(r1)
  stfs      f0, 0x1C(r1)
  bl        0x5CEC0
  lwz       r0, 0x210(r30)
  lis       r3, 0x804A
  addi      r5, r3, 0x30E0
  mr        r3, r30
  rlwinm    r0,r0,2,0,29
  addi      r4, r1, 0x14
  lwzx      r12, r5, r0
  mtctr     r12
  bctrl     
  lis       r3, 0x804A
  li        r4, 0x20
  addi      r3, r3, 0x30A0
  bl        0x5CCEC

.loc_0x100:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C708
 * Size:	0000FC
 */
void JPADrawYBillboard(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r4
  stw       r30, 0x48(r1)
  mr        r30, r3
  lwz       r0, 0x7C(r4)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0xE4
  addi      r3, r30, 0x184
  addi      r5, r1, 0x8
  bl        0x5E4A0
  lfs       f1, 0x144(r30)
  addi      r3, r1, 0x14
  lfs       f0, 0x60(r31)
  li        r4, 0
  lfs       f3, 0x148(r30)
  lfs       f2, 0x64(r31)
  fmuls     f1, f1, f0
  lfs       f0, 0x8(r1)
  fmuls     f4, f3, f2
  lfs       f2, 0xC(r1)
  stfs      f1, 0x14(r1)
  lfs       f1, 0x10(r1)
  stfs      f0, 0x20(r1)
  lfs       f0, -0x7810(r2)
  lfs       f3, 0x168(r30)
  fmuls     f3, f3, f4
  stfs      f3, 0x28(r1)
  lfs       f3, 0x16C(r30)
  stfs      f3, 0x2C(r1)
  stfs      f2, 0x30(r1)
  lfs       f2, 0x178(r30)
  fmuls     f2, f2, f4
  stfs      f2, 0x38(r1)
  lfs       f2, 0x17C(r30)
  stfs      f2, 0x3C(r1)
  stfs      f1, 0x40(r1)
  stfs      f0, 0x34(r1)
  stfs      f0, 0x24(r1)
  stfs      f0, 0x1C(r1)
  stfs      f0, 0x18(r1)
  bl        0x5CDC4
  lwz       r0, 0x210(r30)
  lis       r3, 0x804A
  addi      r5, r3, 0x30E0
  mr        r3, r30
  rlwinm    r0,r0,2,0,29
  addi      r4, r1, 0x14
  lwzx      r12, r5, r0
  mtctr     r12
  bctrl     
  lis       r3, 0x804A
  li        r4, 0x20
  addi      r3, r3, 0x30A0
  bl        0x5CBF0

.loc_0xE4:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C804
 * Size:	000130
 */
void JPADrawRotYBillboard(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r4
  stw       r30, 0x48(r1)
  mr        r30, r3
  lwz       r0, 0x7C(r4)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0x118
  addi      r3, r30, 0x184
  addi      r5, r1, 0x8
  bl        0x5E3A4
  lhz       r0, 0x88(r31)
  lis       r3, 0x8050
  lfs       f3, 0x144(r30)
  addi      r4, r3, 0x71A0
  lfs       f2, 0x60(r31)
  rlwinm    r0,r0,30,18,28
  add       r3, r4, r0
  lfs       f1, 0x148(r30)
  fmuls     f6, f3, f2
  lfsx      f2, r4, r0
  lfs       f5, 0x4(r3)
  addi      r3, r1, 0x14
  lfs       f0, 0x64(r31)
  li        r4, 0
  fmuls     f8, f1, f0
  lfs       f13, 0x178(r30)
  fmuls     f10, f2, f6
  lfs       f12, 0x168(r30)
  fmuls     f9, f5, f6
  lfs       f1, -0x7810(r2)
  fmuls     f11, f5, f8
  stfs      f1, 0x1C(r1)
  fneg      f2, f2
  lfs       f7, 0x8(r1)
  fneg      f4, f13
  lfs       f3, 0xC(r1)
  fmuls     f8, f2, f8
  lfs       f0, 0x10(r1)
  fmuls     f6, f10, f12
  stfs      f9, 0x14(r1)
  fmuls     f5, f11, f12
  fmuls     f2, f10, f13
  fmuls     f1, f11, f13
  stfs      f8, 0x18(r1)
  stfs      f7, 0x20(r1)
  stfs      f6, 0x24(r1)
  stfs      f5, 0x28(r1)
  stfs      f4, 0x2C(r1)
  stfs      f3, 0x30(r1)
  stfs      f2, 0x34(r1)
  stfs      f1, 0x38(r1)
  stfs      f12, 0x3C(r1)
  stfs      f0, 0x40(r1)
  bl        0x5CC94
  lwz       r0, 0x210(r30)
  lis       r3, 0x804A
  addi      r5, r3, 0x30E0
  mr        r3, r30
  rlwinm    r0,r0,2,0,29
  addi      r4, r1, 0x14
  lwzx      r12, r5, r0
  mtctr     r12
  bctrl     
  lis       r3, 0x804A
  li        r4, 0x20
  addi      r3, r3, 0x30A0
  bl        0x5CAC0

.loc_0x118:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C934
 * Size:	00001C
 */
void dirTypeVel(const JPAEmitterWorkData *, const JPABaseParticle *, JGeometry::TVec3<float> *)
{
/*
.loc_0x0:
  lfs       f0, 0x24(r4)
  lfs       f1, 0x28(r4)
  stfs      f0, 0x0(r5)
  lfs       f0, 0x2C(r4)
  stfs      f1, 0x4(r5)
  stfs      f0, 0x8(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C950
 * Size:	00001C
 */
void dirTypePos(const JPAEmitterWorkData *, const JPABaseParticle *, JGeometry::TVec3<float> *)
{
/*
.loc_0x0:
  lfs       f0, 0xC(r4)
  lfs       f1, 0x10(r4)
  stfs      f0, 0x0(r5)
  lfs       f0, 0x14(r4)
  stfs      f1, 0x4(r5)
  stfs      f0, 0x8(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C96C
 * Size:	000040
 */
void dirTypePosInv(const JPAEmitterWorkData *, const JPABaseParticle *, JGeometry::TVec3<float> *)
{
/*
.loc_0x0:
  lfs       f0, 0xC(r4)
  lfs       f1, 0x10(r4)
  stfs      f0, 0x0(r5)
  lfs       f0, 0x14(r4)
  stfs      f1, 0x4(r5)
  stfs      f0, 0x8(r5)
  lfs       f0, 0x0(r5)
  fneg      f0, f0
  stfs      f0, 0x0(r5)
  lfs       f0, 0x4(r5)
  fneg      f0, f0
  stfs      f0, 0x4(r5)
  lfs       f0, 0x8(r5)
  fneg      f0, f0
  stfs      f0, 0x8(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C9AC
 * Size:	00001C
 */
void dirTypeEmtrDir(const JPAEmitterWorkData *, const JPABaseParticle *, JGeometry::TVec3<float> *)
{
/*
.loc_0x0:
  lfs       f0, 0x120(r3)
  lfs       f1, 0x124(r3)
  stfs      f0, 0x0(r5)
  lfs       f0, 0x128(r3)
  stfs      f1, 0x4(r5)
  stfs      f0, 0x8(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008C9C8
 * Size:	0000C0
 */
void dirTypePrevPtcl(const JPAEmitterWorkData *, const JPABaseParticle *, JGeometry::TVec3<float> *)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stfd      f29, 0x10(r1)
  psq_st    f29,0x18(r1),0,0
  stw       r31, 0xC(r1)
  lwz       r6, 0x1E8(r3)
  mr        r31, r5
  lfs       f31, 0x0(r4)
  lwz       r5, 0x0(r6)
  lfs       f30, 0x4(r4)
  cmplwi    r5, 0
  lfs       f29, 0x8(r4)
  beq-      .loc_0x64
  lfs       f0, 0x8(r5)
  stfs      f0, 0x0(r31)
  lfs       f0, 0xC(r5)
  stfs      f0, 0x4(r31)
  lfs       f0, 0x10(r5)
  stfs      f0, 0x8(r31)
  b         .loc_0x70

.loc_0x64:
  lwz       r3, 0x0(r3)
  mr        r4, r31
  bl        0x3A74

.loc_0x70:
  lfs       f0, 0x0(r31)
  fsubs     f0, f0, f31
  stfs      f0, 0x0(r31)
  lfs       f0, 0x4(r31)
  fsubs     f0, f0, f30
  stfs      f0, 0x4(r31)
  lfs       f0, 0x8(r31)
  fsubs     f0, f0, f29
  stfs      f0, 0x8(r31)
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  psq_l     f29,0x18(r1),0,0
  lfd       f29, 0x10(r1)
  lwz       r0, 0x44(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8008CA88
 * Size:	000040
 */
void rotTypeY(float, float, float (&) [3][4])
{
/*
.loc_0x0:
  stfs      f2, 0x0(r3)
  fneg      f3, f1
  lfs       f4, -0x7810(r2)
  lfs       f0, -0x7814(r2)
  stfs      f4, 0x4(r3)
  stfs      f3, 0x8(r3)
  stfs      f4, 0xC(r3)
  stfs      f4, 0x10(r3)
  stfs      f0, 0x14(r3)
  stfs      f4, 0x18(r3)
  stfs      f4, 0x1C(r3)
  stfs      f1, 0x20(r3)
  stfs      f4, 0x24(r3)
  stfs      f2, 0x28(r3)
  stfs      f4, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008CAC8
 * Size:	000040
 */
void rotTypeX(float, float, float (&) [3][4])
{
/*
.loc_0x0:
  lfs       f4, -0x7814(r2)
  fneg      f0, f1
  lfs       f3, -0x7810(r2)
  stfs      f4, 0x0(r3)
  stfs      f3, 0x4(r3)
  stfs      f3, 0x8(r3)
  stfs      f3, 0xC(r3)
  stfs      f3, 0x10(r3)
  stfs      f2, 0x14(r3)
  stfs      f0, 0x18(r3)
  stfs      f3, 0x1C(r3)
  stfs      f3, 0x20(r3)
  stfs      f1, 0x24(r3)
  stfs      f2, 0x28(r3)
  stfs      f3, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008CB08
 * Size:	000040
 */
void rotTypeZ(float, float, float (&) [3][4])
{
/*
.loc_0x0:
  fneg      f4, f1
  stfs      f2, 0x0(r3)
  lfs       f3, -0x7810(r2)
  lfs       f0, -0x7814(r2)
  stfs      f4, 0x4(r3)
  stfs      f3, 0x8(r3)
  stfs      f3, 0xC(r3)
  stfs      f1, 0x10(r3)
  stfs      f2, 0x14(r3)
  stfs      f3, 0x18(r3)
  stfs      f3, 0x1C(r3)
  stfs      f3, 0x20(r3)
  stfs      f3, 0x24(r3)
  stfs      f0, 0x28(r3)
  stfs      f3, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008CB48
 * Size:	00005C
 */
void rotTypeXYZ(float, float, float (&) [3][4])
{
/*
.loc_0x0:
  lfs       f3, -0x7814(r2)
  lfs       f0, -0x77FC(r2)
  fsubs     f3, f3, f2
  lfs       f4, -0x7800(r2)
  fmuls     f1, f0, f1
  lfs       f0, -0x7810(r2)
  fmuls     f3, f4, f3
  fadds     f4, f3, f1
  fsubs     f1, f3, f1
  fadds     f3, f3, f2
  stfs      f3, 0x0(r3)
  stfs      f1, 0x4(r3)
  stfs      f4, 0x8(r3)
  stfs      f0, 0xC(r3)
  stfs      f4, 0x10(r3)
  stfs      f3, 0x14(r3)
  stfs      f1, 0x18(r3)
  stfs      f0, 0x1C(r3)
  stfs      f1, 0x20(r3)
  stfs      f4, 0x24(r3)
  stfs      f3, 0x28(r3)
  stfs      f0, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008CBA4
 * Size:	00004C
 */
void basePlaneTypeXY(float (*) [4], float, float)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x0(r3)
  lfs       f0, 0x10(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x10(r3)
  lfs       f0, 0x20(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x20(r3)
  lfs       f0, 0x4(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0x4(r3)
  lfs       f0, 0x14(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0x14(r3)
  lfs       f0, 0x24(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0x24(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008CBF0
 * Size:	00004C
 */
void basePlaneTypeXZ(float (*) [4], float, float)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x0(r3)
  lfs       f0, 0x10(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x10(r3)
  lfs       f0, 0x20(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x20(r3)
  lfs       f0, 0x8(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0x8(r3)
  lfs       f0, 0x18(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0x18(r3)
  lfs       f0, 0x28(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0x28(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008CC3C
 * Size:	000070
 */
void basePlaneTypeX(float (*) [4], float, float)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x0(r3)
  lfs       f0, 0x10(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x10(r3)
  lfs       f0, 0x20(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x20(r3)
  lfs       f0, 0x4(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0x4(r3)
  lfs       f0, 0x14(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0x14(r3)
  lfs       f0, 0x24(r3)
  fmuls     f0, f0, f2
  stfs      f0, 0x24(r3)
  lfs       f0, 0x8(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x8(r3)
  lfs       f0, 0x18(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x18(r3)
  lfs       f0, 0x28(r3)
  fmuls     f0, f0, f1
  stfs      f0, 0x28(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008CCAC
 * Size:	000350
 */
void JPADrawDirection(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x64(r1)
  stw       r31, 0x5C(r1)
  mr        r31, r3
  stw       r30, 0x58(r1)
  addi      r30, r5, 0x30A0
  stw       r29, 0x54(r1)
  mr        r29, r4
  lwz       r0, 0x7C(r4)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0x334
  lwz       r0, 0x200(r31)
  addi      r6, r30, 0x4C
  addi      r5, r1, 0x8
  rlwinm    r0,r0,2,0,29
  lwzx      r12, r6, r0
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0xC(r1)
  fmuls     f3, f1, f1
  lfs       f4, 0x10(r1)
  fmuls     f2, f0, f0
  lfs       f1, -0x77F8(r2)
  lfs       f0, 0x48DC(r3)
  fmuls     f4, f4, f4
  fadds     f2, f3, f2
  fmuls     f0, f1, f0
  fadds     f4, f4, f2
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  beq-      .loc_0x334
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  beq-      .loc_0xF0
  lfs       f0, -0x7810(r2)
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  bne-      .loc_0xAC
  b         .loc_0xCC

.loc_0xAC:
  fsqrte    f3, f4
  lfs       f2, -0x7818(r2)
  lfs       f0, -0x77F4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f4, f1, f0
  fmuls     f4, f2, f0

.loc_0xCC:
  lfs       f2, 0x8(r1)
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  fmuls     f2, f2, f4
  fmuls     f1, f1, f4
  fmuls     f0, f0, f4
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)

.loc_0xF0:
  lfs       f6, 0x54(r29)
  lis       r3, 0x8051
  lfs       f5, 0x10(r1)
  lfs       f7, 0xC(r1)
  lfs       f2, 0x5C(r29)
  fmuls     f1, f6, f5
  lfs       f4, 0x8(r1)
  fmuls     f0, f2, f7
  lfs       f8, 0x58(r29)
  fmsubs    f3, f2, f4, f1
  lfs       f2, -0x77F8(r2)
  fmuls     f4, f8, f4
  lfs       f1, 0x48DC(r3)
  fmsubs    f0, f8, f5, f0
  fmuls     f5, f3, f3
  fmuls     f2, f2, f1
  fmsubs    f4, f6, f7, f4
  fmadds    f1, f0, f0, f5
  fmadds    f7, f4, f4, f1
  fcmpo     cr0, f7, f2
  cror      2, 0, 0x2
  beq-      .loc_0x334
  fcmpo     cr0, f7, f2
  cror      2, 0, 0x2
  beq-      .loc_0x194
  lfs       f1, -0x7810(r2)
  fcmpo     cr0, f7, f1
  cror      2, 0, 0x2
  bne-      .loc_0x168
  b         .loc_0x188

.loc_0x168:
  fsqrte    f6, f7
  lfs       f5, -0x7818(r2)
  lfs       f1, -0x77F4(r2)
  frsp      f6, f6
  fmuls     f2, f6, f6
  fmuls     f5, f5, f6
  fnmsubs   f1, f7, f2, f1
  fmuls     f7, f5, f1

.loc_0x188:
  fmuls     f0, f0, f7
  fmuls     f3, f3, f7
  fmuls     f4, f4, f7

.loc_0x194:
  lfs       f8, 0x10(r1)
  lis       r3, 0x8051
  lfs       f7, 0x8(r1)
  fmuls     f1, f8, f3
  lfs       f9, 0xC(r1)
  fmuls     f5, f7, f4
  lfs       f2, -0x77F8(r2)
  fmuls     f6, f9, f0
  fmsubs    f1, f9, f4, f1
  fmsubs    f5, f8, f0, f5
  fmsubs    f6, f7, f3, f6
  stfs      f1, 0x54(r29)
  stfs      f5, 0x58(r29)
  stfs      f6, 0x5C(r29)
  lfs       f5, 0x54(r29)
  lfs       f1, 0x58(r29)
  fmuls     f6, f5, f5
  lfs       f7, 0x5C(r29)
  fmuls     f5, f1, f1
  lfs       f1, 0x48DC(r3)
  fmuls     f7, f7, f7
  fmuls     f1, f2, f1
  fadds     f2, f6, f5
  fadds     f7, f7, f2
  fcmpo     cr0, f7, f1
  cror      2, 0, 0x2
  beq-      .loc_0x258
  lfs       f1, -0x7810(r2)
  fcmpo     cr0, f7, f1
  cror      2, 0, 0x2
  bne-      .loc_0x214
  b         .loc_0x234

.loc_0x214:
  fsqrte    f6, f7
  lfs       f5, -0x7818(r2)
  lfs       f1, -0x77F4(r2)
  frsp      f6, f6
  fmuls     f2, f6, f6
  fmuls     f5, f5, f6
  fnmsubs   f1, f7, f2, f1
  fmuls     f7, f5, f1

.loc_0x234:
  lfs       f1, 0x54(r29)
  fmuls     f1, f1, f7
  stfs      f1, 0x54(r29)
  lfs       f1, 0x58(r29)
  fmuls     f1, f1, f7
  stfs      f1, 0x58(r29)
  lfs       f1, 0x5C(r29)
  fmuls     f1, f1, f7
  stfs      f1, 0x5C(r29)

.loc_0x258:
  lfs       f5, 0x144(r31)
  addi      r4, r30, 0x74
  lfs       f1, 0x60(r29)
  addi      r3, r1, 0x14
  lfs       f7, 0x148(r31)
  lfs       f2, 0x64(r29)
  fmuls     f1, f5, f1
  lfs       f6, 0x54(r29)
  lfs       f5, 0x8(r1)
  fmuls     f2, f7, f2
  stfs      f6, 0x14(r1)
  lfs       f6, 0xC(r1)
  stfs      f5, 0x18(r1)
  lfs       f5, 0x10(r1)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x0(r29)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x58(r29)
  stfs      f0, 0x24(r1)
  stfs      f6, 0x28(r1)
  stfs      f3, 0x2C(r1)
  lfs       f0, 0x4(r29)
  stfs      f0, 0x30(r1)
  lfs       f0, 0x5C(r29)
  stfs      f0, 0x34(r1)
  stfs      f5, 0x38(r1)
  stfs      f4, 0x3C(r1)
  lfs       f0, 0x8(r29)
  stfs      f0, 0x40(r1)
  lwz       r0, 0x208(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r12, r4, r0
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x14
  addi      r3, r31, 0x184
  mr        r5, r4
  bl        0x5D368
  addi      r3, r1, 0x14
  li        r4, 0
  bl        0x5C5D4
  lwz       r0, 0x210(r31)
  addi      r5, r30, 0x40
  mr        r3, r31
  addi      r4, r1, 0x14
  rlwinm    r0,r0,2,0,29
  lwzx      r12, r5, r0
  mtctr     r12
  bctrl     
  lwz       r0, 0x20C(r31)
  subi      r3, r13, 0x7F00
  li        r4, 0x20
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  bl        0x5C3FC

.loc_0x334:
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  lwz       r29, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8008CFFC
 * Size:	0003FC
 */
void JPADrawRotDirection(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stfd      f31, 0xD0(r1)
  psq_st    f31,0xD8(r1),0,0
  stfd      f30, 0xC0(r1)
  psq_st    f30,0xC8(r1),0,0
  stfd      f29, 0xB0(r1)
  psq_st    f29,0xB8(r1),0,0
  stfd      f28, 0xA0(r1)
  psq_st    f28,0xA8(r1),0,0
  stfd      f27, 0x90(r1)
  psq_st    f27,0x98(r1),0,0
  stw       r31, 0x8C(r1)
  stw       r30, 0x88(r1)
  stw       r29, 0x84(r1)
  lwz       r0, 0x7C(r4)
  lis       r5, 0x804A
  mr        r30, r4
  mr        r29, r3
  rlwinm.   r0,r0,0,28,28
  addi      r31, r5, 0x30A0
  bne-      .loc_0x3B8
  lhz       r7, 0x88(r30)
  lis       r6, 0x8050
  lwz       r0, 0x200(r29)
  addi      r5, r31, 0x4C
  extsh     r8, r7
  addi      r7, r6, 0x71A0
  rlwinm    r8,r8,30,18,28
  rlwinm    r0,r0,2,0,29
  lwzx      r12, r5, r0
  add       r6, r7, r8
  addi      r5, r1, 0x8
  lfsx      f31, r7, r8
  lfs       f30, 0x4(r6)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0xC(r1)
  fmuls     f3, f1, f1
  lfs       f4, 0x10(r1)
  fmuls     f2, f0, f0
  lfs       f1, -0x77F8(r2)
  lfs       f0, 0x48DC(r3)
  fmuls     f4, f4, f4
  fadds     f2, f3, f2
  fmuls     f0, f1, f0
  fadds     f4, f4, f2
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  beq-      .loc_0x3B8
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  beq-      .loc_0x138
  lfs       f0, -0x7810(r2)
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  bne-      .loc_0xF4
  b         .loc_0x114

.loc_0xF4:
  fsqrte    f3, f4
  lfs       f2, -0x7818(r2)
  lfs       f0, -0x77F4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f4, f1, f0
  fmuls     f4, f2, f0

.loc_0x114:
  lfs       f2, 0x8(r1)
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  fmuls     f2, f2, f4
  fmuls     f1, f1, f4
  fmuls     f0, f0, f4
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)

.loc_0x138:
  lfs       f4, 0x54(r30)
  lis       r3, 0x8051
  lfs       f6, 0x10(r1)
  lfs       f5, 0xC(r1)
  lfs       f1, 0x5C(r30)
  fmuls     f0, f4, f6
  lfs       f3, 0x8(r1)
  fmuls     f2, f1, f5
  lfs       f7, 0x58(r30)
  fmsubs    f28, f1, f3, f0
  lfs       f1, -0x77F8(r2)
  fmuls     f3, f7, f3
  lfs       f0, 0x48DC(r3)
  fmsubs    f29, f7, f6, f2
  fmuls     f2, f28, f28
  fmuls     f1, f1, f0
  fmsubs    f27, f4, f5, f3
  fmadds    f0, f29, f29, f2
  fmadds    f4, f27, f27, f0
  fcmpo     cr0, f4, f1
  cror      2, 0, 0x2
  beq-      .loc_0x3B8
  fcmpo     cr0, f4, f1
  cror      2, 0, 0x2
  beq-      .loc_0x1DC
  lfs       f0, -0x7810(r2)
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1B0
  b         .loc_0x1D0

.loc_0x1B0:
  fsqrte    f3, f4
  lfs       f2, -0x7818(r2)
  lfs       f0, -0x77F4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f4, f1, f0
  fmuls     f4, f2, f0

.loc_0x1D0:
  fmuls     f29, f29, f4
  fmuls     f28, f28, f4
  fmuls     f27, f27, f4

.loc_0x1DC:
  lfs       f5, 0x10(r1)
  lis       r3, 0x8051
  lfs       f4, 0x8(r1)
  fmuls     f0, f5, f28
  lfs       f6, 0xC(r1)
  fmuls     f2, f4, f27
  lfs       f1, -0x77F8(r2)
  fmuls     f3, f6, f29
  fmsubs    f0, f6, f27, f0
  fmsubs    f2, f5, f29, f2
  fmsubs    f3, f4, f28, f3
  stfs      f0, 0x54(r30)
  stfs      f2, 0x58(r30)
  stfs      f3, 0x5C(r30)
  lfs       f2, 0x54(r30)
  lfs       f0, 0x58(r30)
  fmuls     f3, f2, f2
  lfs       f4, 0x5C(r30)
  fmuls     f2, f0, f0
  lfs       f0, 0x48DC(r3)
  fmuls     f4, f4, f4
  fmuls     f0, f1, f0
  fadds     f1, f3, f2
  fadds     f4, f4, f1
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  beq-      .loc_0x2A0
  lfs       f0, -0x7810(r2)
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  bne-      .loc_0x25C
  b         .loc_0x27C

.loc_0x25C:
  fsqrte    f3, f4
  lfs       f2, -0x7818(r2)
  lfs       f0, -0x77F4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f4, f1, f0
  fmuls     f4, f2, f0

.loc_0x27C:
  lfs       f0, 0x54(r30)
  fmuls     f0, f0, f4
  stfs      f0, 0x54(r30)
  lfs       f0, 0x58(r30)
  fmuls     f0, f0, f4
  stfs      f0, 0x58(r30)
  lfs       f0, 0x5C(r30)
  fmuls     f0, f0, f4
  stfs      f0, 0x5C(r30)

.loc_0x2A0:
  lwz       r0, 0x204(r29)
  addi      r3, r31, 0x60
  lfs       f5, 0x144(r29)
  fmr       f1, f31
  rlwinm    r0,r0,2,0,29
  lfs       f4, 0x60(r30)
  lfs       f3, 0x148(r29)
  fmr       f2, f30
  lfs       f0, 0x64(r30)
  lwzx      r12, r3, r0
  fmuls     f30, f5, f4
  fmuls     f31, f3, f0
  addi      r3, r1, 0x44
  mtctr     r12
  bctrl     
  lwz       r0, 0x208(r29)
  addi      r4, r31, 0x74
  fmr       f1, f30
  addi      r3, r1, 0x44
  rlwinm    r0,r0,2,0,29
  fmr       f2, f31
  lwzx      r12, r4, r0
  mtctr     r12
  bctrl     
  lfs       f1, 0x54(r30)
  addi      r4, r1, 0x44
  lfs       f0, 0x8(r1)
  mr        r5, r4
  stfs      f1, 0x14(r1)
  addi      r3, r1, 0x14
  lfs       f1, 0xC(r1)
  stfs      f0, 0x18(r1)
  lfs       f0, 0x10(r1)
  stfs      f29, 0x1C(r1)
  lfs       f2, 0x0(r30)
  stfs      f2, 0x20(r1)
  lfs       f2, 0x58(r30)
  stfs      f2, 0x24(r1)
  stfs      f1, 0x28(r1)
  stfs      f28, 0x2C(r1)
  lfs       f1, 0x4(r30)
  stfs      f1, 0x30(r1)
  lfs       f1, 0x5C(r30)
  stfs      f1, 0x34(r1)
  stfs      f0, 0x38(r1)
  stfs      f27, 0x3C(r1)
  lfs       f0, 0x8(r30)
  stfs      f0, 0x40(r1)
  bl        0x5CFA4
  addi      r3, r29, 0x184
  addi      r4, r1, 0x44
  addi      r5, r1, 0x14
  bl        0x5CF94
  addi      r3, r1, 0x14
  li        r4, 0
  bl        0x5C200
  lwz       r0, 0x210(r29)
  addi      r5, r31, 0x40
  mr        r3, r29
  addi      r4, r1, 0x14
  rlwinm    r0,r0,2,0,29
  lwzx      r12, r5, r0
  mtctr     r12
  bctrl     
  lwz       r0, 0x20C(r29)
  subi      r3, r13, 0x7F00
  li        r4, 0x20
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  bl        0x5C028

.loc_0x3B8:
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  psq_l     f29,0xB8(r1),0,0
  lfd       f29, 0xB0(r1)
  psq_l     f28,0xA8(r1),0,0
  lfd       f28, 0xA0(r1)
  psq_l     f27,0x98(r1),0,0
  lfd       f27, 0x90(r1)
  lwz       r31, 0x8C(r1)
  lwz       r30, 0x88(r1)
  lwz       r0, 0xE4(r1)
  lwz       r29, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	8008D3F8
 * Size:	000208
 */
void JPADrawDBillboard(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x64(r1)
  stw       r31, 0x5C(r1)
  addi      r31, r5, 0x30A0
  stw       r30, 0x58(r1)
  mr        r30, r4
  stw       r29, 0x54(r1)
  mr        r29, r3
  lwz       r0, 0x7C(r4)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0x1EC
  lwz       r0, 0x200(r29)
  addi      r6, r31, 0x4C
  addi      r5, r1, 0x14
  rlwinm    r0,r0,2,0,29
  lwzx      r12, r6, r0
  mtctr     r12
  bctrl     
  lfs       f4, 0x1AC(r29)
  lis       r3, 0x8051
  lfs       f7, 0x14(r1)
  lfs       f5, 0x1A8(r29)
  lfs       f1, 0x1C(r1)
  fmuls     f0, f7, f4
  lfs       f3, 0x1A4(r29)
  fmuls     f2, f1, f5
  lfs       f8, 0x18(r1)
  fmsubs    f6, f1, f3, f0
  lfs       f1, -0x77F8(r2)
  fmuls     f3, f8, f3
  lfs       f0, 0x48DC(r3)
  fmsubs    f4, f8, f4, f2
  stfs      f6, 0x18(r1)
  fmsubs    f5, f7, f5, f3
  fmuls     f2, f6, f6
  fmuls     f6, f1, f0
  stfs      f4, 0x14(r1)
  fmuls     f3, f4, f4
  fmuls     f1, f5, f5
  stfs      f5, 0x1C(r1)
  fadds     f0, f3, f2
  fadds     f4, f1, f0
  fcmpo     cr0, f4, f6
  cror      2, 0, 0x2
  beq-      .loc_0x1EC
  fcmpo     cr0, f4, f6
  cror      2, 0, 0x2
  beq-      .loc_0x120
  lfs       f0, -0x7810(r2)
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  bne-      .loc_0xDC
  b         .loc_0xFC

.loc_0xDC:
  fsqrte    f3, f4
  lfs       f2, -0x7818(r2)
  lfs       f0, -0x77F4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f4, f1, f0
  fmuls     f4, f2, f0

.loc_0xFC:
  lfs       f2, 0x14(r1)
  lfs       f1, 0x18(r1)
  lfs       f0, 0x1C(r1)
  fmuls     f2, f2, f4
  fmuls     f1, f1, f4
  fmuls     f0, f0, f4
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)

.loc_0x120:
  addi      r4, r1, 0x14
  addi      r3, r29, 0x184
  mr        r5, r4
  bl        0x5D708
  mr        r4, r30
  addi      r3, r29, 0x184
  addi      r5, r1, 0x8
  bl        0x5D6A4
  lfs       f5, 0x18(r1)
  addi      r3, r1, 0x20
  lfs       f4, 0x144(r29)
  li        r4, 0
  lfs       f0, 0x60(r30)
  fneg      f1, f5
  lfs       f3, 0x148(r29)
  lfs       f2, 0x64(r30)
  fmuls     f7, f4, f0
  lfs       f4, 0x14(r1)
  lfs       f0, -0x7810(r2)
  fmuls     f2, f3, f2
  fmuls     f8, f4, f7
  lfs       f6, 0x8(r1)
  fmuls     f5, f5, f7
  lfs       f3, 0xC(r1)
  fmuls     f7, f1, f2
  fmuls     f4, f4, f2
  lfs       f2, -0x7814(r2)
  lfs       f1, 0x10(r1)
  stfs      f8, 0x20(r1)
  stfs      f7, 0x24(r1)
  stfs      f6, 0x2C(r1)
  stfs      f5, 0x30(r1)
  stfs      f4, 0x34(r1)
  stfs      f3, 0x3C(r1)
  stfs      f2, 0x48(r1)
  stfs      f1, 0x4C(r1)
  stfs      f0, 0x44(r1)
  stfs      f0, 0x40(r1)
  stfs      f0, 0x28(r1)
  bl        0x5BFC4
  lwz       r0, 0x210(r29)
  addi      r5, r31, 0x40
  mr        r3, r29
  addi      r4, r1, 0x20
  rlwinm    r0,r0,2,0,29
  lwzx      r12, r5, r0
  mtctr     r12
  bctrl     
  addi      r3, r31, 0
  li        r4, 0x20
  bl        0x5BDF8

.loc_0x1EC:
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  lwz       r29, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8008D600
 * Size:	000150
 */
void JPADrawRotation(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stfd      f30, 0x50(r1)
  psq_st    f30,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  mr        r31, r4
  lis       r4, 0x804A
  lwz       r0, 0x7C(r31)
  mr        r30, r3
  addi      r29, r4, 0x30A0
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0x124
  lwz       r0, 0x204(r30)
  lis       r3, 0x8050
  lhz       r5, 0x88(r31)
  addi      r4, r3, 0x71A0
  addi      r3, r29, 0x60
  rlwinm    r0,r0,2,0,29
  rlwinm    r5,r5,30,18,28
  lwzx      r12, r3, r0
  lfsx      f1, r4, r5
  add       r4, r4, r5
  lfs       f4, 0x144(r30)
  addi      r3, r1, 0x8
  lfs       f3, 0x60(r31)
  lfs       f2, 0x148(r30)
  lfs       f0, 0x64(r31)
  fmuls     f31, f4, f3
  fmuls     f30, f2, f0
  lfs       f2, 0x4(r4)
  mtctr     r12
  bctrl     
  lwz       r0, 0x208(r30)
  addi      r4, r29, 0x74
  fmr       f1, f31
  addi      r3, r1, 0x8
  rlwinm    r0,r0,2,0,29
  fmr       f2, f30
  lwzx      r12, r4, r0
  mtctr     r12
  bctrl     
  lfs       f0, 0x0(r31)
  addi      r4, r1, 0x8
  mr        r5, r4
  addi      r3, r30, 0x184
  stfs      f0, 0x14(r1)
  lfs       f0, 0x4(r31)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x8(r31)
  stfs      f0, 0x34(r1)
  bl        0x5CC24
  addi      r3, r1, 0x8
  li        r4, 0
  bl        0x5BE90
  lwz       r0, 0x210(r30)
  addi      r5, r29, 0x40
  mr        r3, r30
  addi      r4, r1, 0x8
  rlwinm    r0,r0,2,0,29
  lwzx      r12, r5, r0
  mtctr     r12
  bctrl     
  lwz       r0, 0x20C(r30)
  subi      r3, r13, 0x7F00
  li        r4, 0x20
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  bl        0x5BCB8

.loc_0x124:
  psq_l     f31,0x68(r1),0,0
  lfd       f31, 0x60(r1)
  psq_l     f30,0x58(r1),0,0
  lfd       f30, 0x50(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r0, 0x74(r1)
  lwz       r29, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	8008D750
 * Size:	00009C
 */
void JPADrawPoint(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r0, 0x7C(r4)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0x88
  li        r3, 0x9
  li        r4, 0x1
  bl        0x56B0C
  li        r3, 0xD
  li        r4, 0x1
  bl        0x56B00
  li        r3, 0xB8
  li        r4, 0x1
  li        r5, 0x1
  bl        0x581F4
  lfs       f3, 0x8(r31)
  lis       r5, 0xCC01
  lfs       f2, 0x4(r31)
  li        r3, 0x9
  lfs       f1, 0x0(r31)
  li        r4, 0x2
  lfs       f0, -0x7810(r2)
  stfs      f1, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f3, -0x8000(r5)
  stfs      f0, -0x8000(r5)
  stfs      f0, -0x8000(r5)
  bl        0x56ABC
  li        r3, 0xD
  li        r4, 0x2
  bl        0x56AB0

.loc_0x88:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008D7EC
 * Size:	0001B8
 */
void JPADrawLine(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stfd      f30, 0x50(r1)
  psq_st    f30,0x58(r1),0,0
  stfd      f29, 0x40(r1)
  psq_st    f29,0x48(r1),0,0
  stfd      f28, 0x30(r1)
  psq_st    f28,0x38(r1),0,0
  stfd      f27, 0x20(r1)
  psq_st    f27,0x28(r1),0,0
  lwz       r0, 0x7C(r4)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0x180
  lfs       f6, 0x28(r4)
  lis       r5, 0x8051
  lwz       r7, 0x0(r4)
  fmuls     f0, f6, f6
  lfs       f5, 0x24(r4)
  lwz       r6, 0x4(r4)
  lwz       r0, 0x8(r4)
  fmadds    f2, f5, f5, f0
  lfs       f7, 0x2C(r4)
  lfs       f1, -0x77F8(r2)
  lfs       f0, 0x48DC(r5)
  fmadds    f8, f7, f7, f2
  stw       r7, 0x8(r1)
  fmuls     f0, f1, f0
  stw       r6, 0xC(r1)
  fcmpo     cr0, f8, f0
  stw       r0, 0x10(r1)
  cror      2, 0, 0x2
  beq-      .loc_0x180
  lfs       f1, -0x7828(r2)
  fcmpo     cr0, f8, f0
  lfs       f0, 0x64(r4)
  lfs       f2, 0x148(r3)
  fmuls     f0, f1, f0
  fmuls     f3, f2, f0
  cror      2, 0, 0x2
  beq-      .loc_0xF0
  lfs       f0, -0x7810(r2)
  fcmpo     cr0, f8, f0
  cror      2, 0, 0x2
  bne-      .loc_0xC0
  b         .loc_0xE0

.loc_0xC0:
  fsqrte    f4, f8
  lfs       f2, -0x7818(r2)
  lfs       f0, -0x77F4(r2)
  frsp      f4, f4
  fmuls     f1, f4, f4
  fmuls     f2, f2, f4
  fnmsubs   f0, f8, f1, f0
  fmuls     f8, f2, f0

.loc_0xE0:
  fmuls     f0, f8, f3
  fmuls     f5, f5, f0
  fmuls     f6, f6, f0
  fmuls     f7, f7, f0

.loc_0xF0:
  lfs       f0, 0x8(r1)
  li        r3, 0x9
  lfs       f31, 0xC(r1)
  li        r4, 0x1
  lfs       f30, 0x10(r1)
  fsubs     f29, f0, f5
  fsubs     f28, f31, f6
  fsubs     f27, f30, f7
  bl        0x56988
  li        r3, 0xD
  li        r4, 0x1
  bl        0x5697C
  li        r3, 0xA8
  li        r4, 0x1
  li        r5, 0x2
  bl        0x58070
  lfs       f0, 0x8(r1)
  lis       r5, 0xCC01
  lfs       f1, -0x7810(r2)
  li        r3, 0x9
  stfs      f0, -0x8000(r5)
  li        r4, 0x2
  lfs       f0, -0x7814(r2)
  stfs      f31, -0x8000(r5)
  stfs      f30, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  stfs      f29, -0x8000(r5)
  stfs      f28, -0x8000(r5)
  stfs      f27, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  stfs      f0, -0x8000(r5)
  bl        0x56928
  li        r3, 0xD
  li        r4, 0x2
  bl        0x5691C

.loc_0x180:
  psq_l     f31,0x68(r1),0,0
  lfd       f31, 0x60(r1)
  psq_l     f30,0x58(r1),0,0
  lfd       f30, 0x50(r1)
  psq_l     f29,0x48(r1),0,0
  lfd       f29, 0x40(r1)
  psq_l     f28,0x38(r1),0,0
  lfd       f28, 0x30(r1)
  psq_l     f27,0x28(r1),0,0
  lwz       r0, 0x74(r1)
  lfd       f27, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	8008D9A4
 * Size:	000008
 */
void getNext(JPANode<JPABaseParticle> *)
{
/*
.loc_0x0:
  lwz       r3, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008D9AC
 * Size:	000008
 */
void getPrev(JPANode<JPABaseParticle> *)
{
/*
.loc_0x0:
  lwz       r3, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008D9B4
 * Size:	000588
 */
void JPADrawStripe(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x130(r1)
  mflr      r0
  stw       r0, 0x134(r1)
  stfd      f31, 0x120(r1)
  psq_st    f31,0x128(r1),0,0
  stfd      f30, 0x110(r1)
  psq_st    f30,0x118(r1),0,0
  stfd      f29, 0x100(r1)
  psq_st    f29,0x108(r1),0,0
  stfd      f28, 0xF0(r1)
  psq_st    f28,0xF8(r1),0,0
  stfd      f27, 0xE0(r1)
  psq_st    f27,0xE8(r1),0,0
  stfd      f26, 0xD0(r1)
  psq_st    f26,0xD8(r1),0,0
  stfd      f25, 0xC0(r1)
  psq_st    f25,0xC8(r1),0,0
  stfd      f24, 0xB0(r1)
  psq_st    f24,0xB8(r1),0,0
  stfd      f23, 0xA0(r1)
  psq_st    f23,0xA8(r1),0,0
  stfd      f22, 0x90(r1)
  psq_st    f22,0x98(r1),0,0
  stmw      r24, 0x70(r1)
  mr        r30, r3
  lwz       r5, 0x1E4(r3)
  lwz       r3, 0x4(r3)
  lwz       r26, 0x8(r5)
  lwz       r3, 0x1C(r3)
  cmplwi    r26, 0x2
  blt-      .loc_0x524
  lis       r4, 0x4330
  lwz       r3, 0x0(r3)
  stw       r26, 0x64(r1)
  lwz       r0, 0x8(r3)
  stw       r4, 0x60(r1)
  lfd       f1, -0x7808(r2)
  rlwinm.   r0,r0,0,10,10
  lfd       f0, 0x60(r1)
  lfs       f4, -0x7814(r2)
  fsubs     f3, f0, f1
  lfs       f5, 0x14C(r30)
  lfs       f1, -0x7828(r2)
  lfs       f0, 0x144(r30)
  fadds     f2, f4, f5
  fsubs     f3, f3, f4
  fmuls     f1, f1, f0
  lfs       f26, -0x7810(r2)
  fsubs     f0, f4, f5
  fdivs     f25, f4, f3
  fmuls     f24, f2, f1
  fmuls     f23, f0, f1
  beq-      .loc_0xF0
  lis       r3, 0x8009
  fmr       f26, f4
  subi      r0, r3, 0x2654
  fneg      f25, f25
  lwz       r25, 0x4(r5)
  mr        r31, r0
  b         .loc_0x100

.loc_0xF0:
  lis       r3, 0x8009
  lwz       r25, 0x0(r5)
  subi      r0, r3, 0x265C
  mr        r31, r0

.loc_0x100:
  addi      r3, r30, 0x184
  li        r4, 0
  bl        0x5BABC
  lwz       r0, 0x210(r30)
  lis       r3, 0x804A
  addi      r5, r3, 0x30E0
  mr        r3, r30
  rlwinm    r0,r0,2,0,29
  addi      r4, r30, 0x184
  lwzx      r12, r5, r0
  mtctr     r12
  bctrl     
  li        r3, 0x9
  li        r4, 0x1
  bl        0x56798
  li        r3, 0xD
  li        r4, 0x1
  bl        0x5678C
  rlwinm    r5,r26,1,16,30
  li        r3, 0x98
  li        r4, 0x1
  bl        0x57E80
  lis       r5, 0x8050
  lis       r4, 0x804A
  lis       r3, 0x8051
  lfs       f30, -0x7810(r2)
  lfs       f31, -0x77F8(r2)
  mr        r24, r25
  lfs       f22, -0x7814(r2)
  addi      r26, r5, 0x71A0
  addi      r27, r4, 0x30EC
  addi      r28, r3, 0x48DC
  lis       r29, 0xCC01
  b         .loc_0x504

.loc_0x188:
  stw       r24, 0x1E8(r30)
  addi      r25, r24, 0x8
  mr        r3, r30
  addi      r5, r1, 0x8
  lfs       f1, 0x68(r24)
  mr        r4, r25
  lhz       r0, 0x90(r24)
  fneg      f0, f1
  lfs       f29, 0x8(r24)
  rlwinm    r0,r0,30,18,28
  fmuls     f1, f1, f23
  add       r6, r26, r0
  lfs       f28, 0xC(r24)
  lfs       f27, 0x10(r24)
  fmuls     f0, f0, f24
  lfs       f4, 0x0(r6)
  lfs       f5, 0x4(r6)
  fmuls     f3, f0, f4
  stfs      f30, 0x18(r1)
  fmuls     f2, f0, f5
  stfs      f0, 0x14(r1)
  fmuls     f4, f1, f4
  fmuls     f0, f1, f5
  stfs      f30, 0x1C(r1)
  stfs      f1, 0x20(r1)
  stfs      f30, 0x24(r1)
  stfs      f30, 0x28(r1)
  stfs      f2, 0x14(r1)
  stfs      f30, 0x18(r1)
  stfs      f3, 0x1C(r1)
  stfs      f0, 0x20(r1)
  stfs      f30, 0x24(r1)
  stfs      f4, 0x28(r1)
  lwz       r0, 0x200(r30)
  rlwinm    r0,r0,2,0,29
  lwzx      r12, r27, r0
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lfs       f0, 0xC(r1)
  fmuls     f2, f1, f1
  lfs       f3, 0x10(r1)
  fmuls     f1, f0, f0
  lfs       f0, 0x0(r28)
  fmuls     f3, f3, f3
  fmuls     f4, f31, f0
  fadds     f0, f2, f1
  fadds     f5, f3, f0
  fcmpo     cr0, f5, f4
  cror      2, 0, 0x2
  bne-      .loc_0x26C
  lfs       f1, -0x7810(r2)
  lfs       f0, -0x7814(r2)
  stfs      f1, 0x8(r1)
  stfs      f0, 0xC(r1)
  stfs      f1, 0x10(r1)
  b         .loc_0x2D0

.loc_0x26C:
  fcmpo     cr0, f5, f4
  cror      2, 0, 0x2
  beq-      .loc_0x2D0
  lfs       f0, -0x7810(r2)
  fcmpo     cr0, f5, f0
  cror      2, 0, 0x2
  bne-      .loc_0x28C
  b         .loc_0x2AC

.loc_0x28C:
  fsqrte    f3, f5
  lfs       f2, -0x7818(r2)
  lfs       f0, -0x77F4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f5, f1, f0
  fmuls     f5, f2, f0

.loc_0x2AC:
  lfs       f2, 0x8(r1)
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  fmuls     f2, f2, f5
  fmuls     f1, f1, f5
  fmuls     f0, f0, f5
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)

.loc_0x2D0:
  lfs       f4, 0x54(r25)
  lfs       f6, 0x10(r1)
  lfs       f0, 0x0(r28)
  fmuls     f1, f4, f6
  lfs       f5, 0xC(r1)
  lfs       f3, 0x5C(r25)
  fmuls     f8, f31, f0
  lfs       f2, 0x8(r1)
  fmuls     f0, f3, f5
  fmsubs    f1, f3, f2, f1
  lfs       f7, 0x58(r25)
  fmuls     f2, f7, f2
  fmuls     f3, f1, f1
  fmsubs    f0, f7, f6, f0
  fmsubs    f2, f4, f5, f2
  fmadds    f3, f0, f0, f3
  fmadds    f7, f2, f2, f3
  fcmpo     cr0, f7, f8
  cror      2, 0, 0x2
  bne-      .loc_0x330
  lfs       f1, -0x7810(r2)
  lfs       f0, -0x7814(r2)
  fmr       f2, f1
  b         .loc_0x37C

.loc_0x330:
  fcmpo     cr0, f7, f8
  cror      2, 0, 0x2
  beq-      .loc_0x37C
  lfs       f3, -0x7810(r2)
  fcmpo     cr0, f7, f3
  cror      2, 0, 0x2
  bne-      .loc_0x350
  b         .loc_0x370

.loc_0x350:
  fsqrte    f6, f7
  lfs       f5, -0x7818(r2)
  lfs       f3, -0x77F4(r2)
  frsp      f6, f6
  fmuls     f4, f6, f6
  fmuls     f5, f5, f6
  fnmsubs   f3, f7, f4, f3
  fmuls     f7, f5, f3

.loc_0x370:
  fmuls     f0, f0, f7
  fmuls     f1, f1, f7
  fmuls     f2, f2, f7

.loc_0x37C:
  lfs       f7, 0x10(r1)
  lfs       f6, 0x8(r1)
  fmuls     f3, f7, f1
  lfs       f8, 0xC(r1)
  fmuls     f4, f6, f2
  fmuls     f5, f8, f0
  fmsubs    f3, f8, f2, f3
  fmsubs    f4, f7, f0, f4
  fmsubs    f5, f6, f1, f5
  stfs      f3, 0x54(r25)
  stfs      f4, 0x58(r25)
  stfs      f5, 0x5C(r25)
  lfs       f4, 0x54(r25)
  lfs       f3, 0x58(r25)
  fmuls     f5, f4, f4
  lfs       f6, 0x5C(r25)
  fmuls     f4, f3, f3
  lfs       f3, 0x0(r28)
  fmuls     f6, f6, f6
  fmuls     f3, f31, f3
  fadds     f4, f5, f4
  fadds     f7, f6, f4
  fcmpo     cr0, f7, f3
  cror      2, 0, 0x2
  beq-      .loc_0x438
  lfs       f3, -0x7810(r2)
  fcmpo     cr0, f7, f3
  cror      2, 0, 0x2
  bne-      .loc_0x3F4
  b         .loc_0x414

.loc_0x3F4:
  fsqrte    f6, f7
  lfs       f5, -0x7818(r2)
  lfs       f3, -0x77F4(r2)
  frsp      f6, f6
  fmuls     f4, f6, f6
  fmuls     f5, f5, f6
  fnmsubs   f3, f7, f4, f3
  fmuls     f7, f5, f3

.loc_0x414:
  lfs       f3, 0x54(r25)
  fmuls     f3, f3, f7
  stfs      f3, 0x54(r25)
  lfs       f3, 0x58(r25)
  fmuls     f3, f3, f7
  stfs      f3, 0x58(r25)
  lfs       f3, 0x5C(r25)
  fmuls     f3, f3, f7
  stfs      f3, 0x5C(r25)

.loc_0x438:
  lfs       f4, 0x8(r1)
  addi      r4, r1, 0x14
  stfs      f0, 0x2C(r1)
  mr        r5, r4
  lfs       f3, 0xC(r1)
  addi      r3, r1, 0x2C
  stfs      f4, 0x30(r1)
  li        r6, 0x2
  lfs       f0, 0x10(r1)
  lfs       f4, 0x54(r25)
  stfs      f4, 0x34(r1)
  stfs      f30, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stfs      f3, 0x40(r1)
  lfs       f1, 0x58(r25)
  stfs      f1, 0x44(r1)
  stfs      f30, 0x48(r1)
  stfs      f2, 0x4C(r1)
  stfs      f0, 0x50(r1)
  lfs       f0, 0x5C(r25)
  stfs      f0, 0x54(r1)
  stfs      f30, 0x58(r1)
  bl        0x5CE3C
  lfs       f0, 0x14(r1)
  mr        r12, r31
  mr        r3, r24
  fadds     f0, f0, f29
  stfs      f0, -0x8000(r29)
  lfs       f0, 0x18(r1)
  fadds     f0, f0, f28
  stfs      f0, -0x8000(r29)
  lfs       f0, 0x1C(r1)
  fadds     f0, f0, f27
  stfs      f0, -0x8000(r29)
  stfs      f30, -0x8000(r29)
  stfs      f26, -0x8000(r29)
  lfs       f0, 0x20(r1)
  fadds     f0, f0, f29
  stfs      f0, -0x8000(r29)
  lfs       f0, 0x24(r1)
  fadds     f0, f0, f28
  stfs      f0, -0x8000(r29)
  lfs       f0, 0x28(r1)
  fadds     f0, f0, f27
  stfs      f0, -0x8000(r29)
  stfs      f22, -0x8000(r29)
  stfs      f26, -0x8000(r29)
  mtctr     r12
  bctrl     
  fadds     f26, f26, f25
  mr        r24, r3

.loc_0x504:
  cmplwi    r24, 0
  bne+      .loc_0x188
  li        r3, 0x9
  li        r4, 0x2
  bl        0x563BC
  li        r3, 0xD
  li        r4, 0x2
  bl        0x563B0

.loc_0x524:
  psq_l     f31,0x128(r1),0,0
  lfd       f31, 0x120(r1)
  psq_l     f30,0x118(r1),0,0
  lfd       f30, 0x110(r1)
  psq_l     f29,0x108(r1),0,0
  lfd       f29, 0x100(r1)
  psq_l     f28,0xF8(r1),0,0
  lfd       f28, 0xF0(r1)
  psq_l     f27,0xE8(r1),0,0
  lfd       f27, 0xE0(r1)
  psq_l     f26,0xD8(r1),0,0
  lfd       f26, 0xD0(r1)
  psq_l     f25,0xC8(r1),0,0
  lfd       f25, 0xC0(r1)
  psq_l     f24,0xB8(r1),0,0
  lfd       f24, 0xB0(r1)
  psq_l     f23,0xA8(r1),0,0
  lfd       f23, 0xA0(r1)
  psq_l     f22,0x98(r1),0,0
  lfd       f22, 0x90(r1)
  lmw       r24, 0x70(r1)
  lwz       r0, 0x134(r1)
  mtlr      r0
  addi      r1, r1, 0x130
  blr
*/
}

/*
 * --INFO--
 * Address:	8008DF3C
 * Size:	0009AC
 */
void JPADrawStripeX(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x160(r1)
  mflr      r0
  stw       r0, 0x164(r1)
  stfd      f31, 0x150(r1)
  psq_st    f31,0x158(r1),0,0
  stfd      f30, 0x140(r1)
  psq_st    f30,0x148(r1),0,0
  stfd      f29, 0x130(r1)
  psq_st    f29,0x138(r1),0,0
  stfd      f28, 0x120(r1)
  psq_st    f28,0x128(r1),0,0
  stfd      f27, 0x110(r1)
  psq_st    f27,0x118(r1),0,0
  stfd      f26, 0x100(r1)
  psq_st    f26,0x108(r1),0,0
  stfd      f25, 0xF0(r1)
  psq_st    f25,0xF8(r1),0,0
  stfd      f24, 0xE0(r1)
  psq_st    f24,0xE8(r1),0,0
  stfd      f23, 0xD0(r1)
  psq_st    f23,0xD8(r1),0,0
  stfd      f22, 0xC0(r1)
  psq_st    f22,0xC8(r1),0,0
  stfd      f21, 0xB0(r1)
  psq_st    f21,0xB8(r1),0,0
  stfd      f20, 0xA0(r1)
  psq_st    f20,0xA8(r1),0,0
  stfd      f19, 0x90(r1)
  psq_st    f19,0x98(r1),0,0
  stmw      r22, 0x68(r1)
  mr        r27, r3
  lwz       r5, 0x1E4(r3)
  lwz       r3, 0x4(r3)
  lwz       r31, 0x8(r5)
  lwz       r3, 0x1C(r3)
  cmplwi    r31, 0x2
  blt-      .loc_0x930
  lis       r4, 0x4330
  lwz       r3, 0x0(r3)
  stw       r31, 0x64(r1)
  lwz       r0, 0x8(r3)
  stw       r4, 0x60(r1)
  lfd       f1, -0x7808(r2)
  rlwinm.   r0,r0,0,10,10
  lfd       f0, 0x60(r1)
  lfs       f6, -0x7814(r2)
  fsubs     f0, f0, f1
  lfs       f1, 0x14C(r27)
  lfs       f19, -0x7810(r2)
  lfs       f7, 0x150(r27)
  fadds     f5, f6, f1
  fsubs     f0, f0, f6
  fsubs     f2, f6, f1
  lfs       f4, -0x7828(r2)
  lfs       f3, 0x144(r27)
  fadds     f1, f6, f7
  fdivs     f31, f6, f0
  lfs       f0, 0x148(r27)
  fmuls     f3, f4, f3
  fmuls     f4, f4, f0
  fsubs     f0, f6, f7
  fmr       f25, f19
  fmuls     f24, f5, f3
  fmuls     f23, f2, f3
  fmuls     f20, f1, f4
  fmuls     f21, f0, f4
  beq-      .loc_0x12C
  lis       r3, 0x8009
  fmr       f25, f6
  subi      r0, r3, 0x2654
  fmr       f19, f6
  fneg      f31, f31
  lwz       r29, 0x4(r5)
  mr        r28, r0
  b         .loc_0x13C

.loc_0x12C:
  lis       r3, 0x8009
  lwz       r29, 0x0(r5)
  subi      r0, r3, 0x265C
  mr        r28, r0

.loc_0x13C:
  addi      r3, r27, 0x184
  li        r4, 0
  bl        0x5B4F8
  lwz       r0, 0x210(r27)
  lis       r3, 0x804A
  addi      r5, r3, 0x30E0
  mr        r3, r27
  rlwinm    r0,r0,2,0,29
  addi      r4, r27, 0x184
  lwzx      r12, r5, r0
  mtctr     r12
  bctrl     
  li        r3, 0x9
  li        r4, 0x1
  bl        0x561D4
  li        r3, 0xD
  li        r4, 0x1
  bl        0x561C8
  rlwinm    r30,r31,1,0,30
  rlwinm    r5,r31,1,16,30
  li        r3, 0x98
  li        r4, 0x1
  bl        0x578B8
  lis       r5, 0x8050
  lis       r4, 0x804A
  lis       r3, 0x8051
  lfs       f29, -0x7810(r2)
  lfs       f30, -0x77F8(r2)
  mr        r31, r29
  lfs       f22, -0x7814(r2)
  addi      r23, r5, 0x71A0
  addi      r24, r4, 0x30EC
  addi      r25, r3, 0x48DC
  lis       r26, 0xCC01
  b         .loc_0x544

.loc_0x1C8:
  stw       r31, 0x1E8(r27)
  addi      r22, r31, 0x8
  mr        r3, r27
  addi      r5, r1, 0x8
  lfs       f1, 0x68(r31)
  mr        r4, r22
  lhz       r0, 0x90(r31)
  fneg      f0, f1
  lfs       f28, 0x8(r31)
  rlwinm    r0,r0,30,18,28
  fmuls     f1, f1, f23
  add       r6, r23, r0
  lfs       f27, 0xC(r31)
  lfs       f26, 0x10(r31)
  fmuls     f0, f0, f24
  lfs       f4, 0x0(r6)
  lfs       f5, 0x4(r6)
  fmuls     f3, f0, f4
  stfs      f29, 0x18(r1)
  fmuls     f2, f0, f5
  stfs      f0, 0x14(r1)
  fmuls     f4, f1, f4
  fmuls     f0, f1, f5
  stfs      f29, 0x1C(r1)
  stfs      f1, 0x20(r1)
  stfs      f29, 0x24(r1)
  stfs      f29, 0x28(r1)
  stfs      f2, 0x14(r1)
  stfs      f29, 0x18(r1)
  stfs      f3, 0x1C(r1)
  stfs      f0, 0x20(r1)
  stfs      f29, 0x24(r1)
  stfs      f4, 0x28(r1)
  lwz       r0, 0x200(r27)
  rlwinm    r0,r0,2,0,29
  lwzx      r12, r24, r0
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lfs       f0, 0xC(r1)
  fmuls     f2, f1, f1
  lfs       f3, 0x10(r1)
  fmuls     f1, f0, f0
  lfs       f0, 0x0(r25)
  fmuls     f3, f3, f3
  fmuls     f4, f30, f0
  fadds     f0, f2, f1
  fadds     f5, f3, f0
  fcmpo     cr0, f5, f4
  cror      2, 0, 0x2
  bne-      .loc_0x2AC
  lfs       f1, -0x7810(r2)
  lfs       f0, -0x7814(r2)
  stfs      f1, 0x8(r1)
  stfs      f0, 0xC(r1)
  stfs      f1, 0x10(r1)
  b         .loc_0x310

.loc_0x2AC:
  fcmpo     cr0, f5, f4
  cror      2, 0, 0x2
  beq-      .loc_0x310
  lfs       f0, -0x7810(r2)
  fcmpo     cr0, f5, f0
  cror      2, 0, 0x2
  bne-      .loc_0x2CC
  b         .loc_0x2EC

.loc_0x2CC:
  fsqrte    f3, f5
  lfs       f2, -0x7818(r2)
  lfs       f0, -0x77F4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f5, f1, f0
  fmuls     f5, f2, f0

.loc_0x2EC:
  lfs       f2, 0x8(r1)
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  fmuls     f2, f2, f5
  fmuls     f1, f1, f5
  fmuls     f0, f0, f5
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)

.loc_0x310:
  lfs       f4, 0x54(r22)
  lfs       f6, 0x10(r1)
  lfs       f0, 0x0(r25)
  fmuls     f1, f4, f6
  lfs       f5, 0xC(r1)
  lfs       f3, 0x5C(r22)
  fmuls     f8, f30, f0
  lfs       f2, 0x8(r1)
  fmuls     f0, f3, f5
  fmsubs    f1, f3, f2, f1
  lfs       f7, 0x58(r22)
  fmuls     f2, f7, f2
  fmuls     f3, f1, f1
  fmsubs    f0, f7, f6, f0
  fmsubs    f2, f4, f5, f2
  fmadds    f3, f0, f0, f3
  fmadds    f7, f2, f2, f3
  fcmpo     cr0, f7, f8
  cror      2, 0, 0x2
  bne-      .loc_0x370
  lfs       f1, -0x7810(r2)
  lfs       f0, -0x7814(r2)
  fmr       f2, f1
  b         .loc_0x3BC

.loc_0x370:
  fcmpo     cr0, f7, f8
  cror      2, 0, 0x2
  beq-      .loc_0x3BC
  lfs       f3, -0x7810(r2)
  fcmpo     cr0, f7, f3
  cror      2, 0, 0x2
  bne-      .loc_0x390
  b         .loc_0x3B0

.loc_0x390:
  fsqrte    f6, f7
  lfs       f5, -0x7818(r2)
  lfs       f3, -0x77F4(r2)
  frsp      f6, f6
  fmuls     f4, f6, f6
  fmuls     f5, f5, f6
  fnmsubs   f3, f7, f4, f3
  fmuls     f7, f5, f3

.loc_0x3B0:
  fmuls     f0, f0, f7
  fmuls     f1, f1, f7
  fmuls     f2, f2, f7

.loc_0x3BC:
  lfs       f7, 0x10(r1)
  lfs       f6, 0x8(r1)
  fmuls     f3, f7, f1
  lfs       f8, 0xC(r1)
  fmuls     f4, f6, f2
  fmuls     f5, f8, f0
  fmsubs    f3, f8, f2, f3
  fmsubs    f4, f7, f0, f4
  fmsubs    f5, f6, f1, f5
  stfs      f3, 0x54(r22)
  stfs      f4, 0x58(r22)
  stfs      f5, 0x5C(r22)
  lfs       f4, 0x54(r22)
  lfs       f3, 0x58(r22)
  fmuls     f5, f4, f4
  lfs       f6, 0x5C(r22)
  fmuls     f4, f3, f3
  lfs       f3, 0x0(r25)
  fmuls     f6, f6, f6
  fmuls     f3, f30, f3
  fadds     f4, f5, f4
  fadds     f7, f6, f4
  fcmpo     cr0, f7, f3
  cror      2, 0, 0x2
  beq-      .loc_0x478
  lfs       f3, -0x7810(r2)
  fcmpo     cr0, f7, f3
  cror      2, 0, 0x2
  bne-      .loc_0x434
  b         .loc_0x454

.loc_0x434:
  fsqrte    f6, f7
  lfs       f5, -0x7818(r2)
  lfs       f3, -0x77F4(r2)
  frsp      f6, f6
  fmuls     f4, f6, f6
  fmuls     f5, f5, f6
  fnmsubs   f3, f7, f4, f3
  fmuls     f7, f5, f3

.loc_0x454:
  lfs       f3, 0x54(r22)
  fmuls     f3, f3, f7
  stfs      f3, 0x54(r22)
  lfs       f3, 0x58(r22)
  fmuls     f3, f3, f7
  stfs      f3, 0x58(r22)
  lfs       f3, 0x5C(r22)
  fmuls     f3, f3, f7
  stfs      f3, 0x5C(r22)

.loc_0x478:
  lfs       f4, 0x8(r1)
  addi      r4, r1, 0x14
  stfs      f0, 0x2C(r1)
  mr        r5, r4
  lfs       f3, 0xC(r1)
  addi      r3, r1, 0x2C
  stfs      f4, 0x30(r1)
  li        r6, 0x2
  lfs       f0, 0x10(r1)
  lfs       f4, 0x54(r22)
  stfs      f4, 0x34(r1)
  stfs      f29, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stfs      f3, 0x40(r1)
  lfs       f1, 0x58(r22)
  stfs      f1, 0x44(r1)
  stfs      f29, 0x48(r1)
  stfs      f2, 0x4C(r1)
  stfs      f0, 0x50(r1)
  lfs       f0, 0x5C(r22)
  stfs      f0, 0x54(r1)
  stfs      f29, 0x58(r1)
  bl        0x5C874
  lfs       f0, 0x14(r1)
  mr        r12, r28
  mr        r3, r31
  fadds     f0, f0, f28
  stfs      f0, -0x8000(r26)
  lfs       f0, 0x18(r1)
  fadds     f0, f0, f27
  stfs      f0, -0x8000(r26)
  lfs       f0, 0x1C(r1)
  fadds     f0, f0, f26
  stfs      f0, -0x8000(r26)
  stfs      f29, -0x8000(r26)
  stfs      f25, -0x8000(r26)
  lfs       f0, 0x20(r1)
  fadds     f0, f0, f28
  stfs      f0, -0x8000(r26)
  lfs       f0, 0x24(r1)
  fadds     f0, f0, f27
  stfs      f0, -0x8000(r26)
  lfs       f0, 0x28(r1)
  fadds     f0, f0, f26
  stfs      f0, -0x8000(r26)
  stfs      f22, -0x8000(r26)
  stfs      f25, -0x8000(r26)
  mtctr     r12
  bctrl     
  fadds     f25, f25, f31
  mr        r31, r3

.loc_0x544:
  cmplwi    r31, 0
  bne+      .loc_0x1C8
  fmr       f25, f19
  rlwinm    r5,r30,0,16,31
  li        r3, 0x98
  li        r4, 0x1
  bl        0x574F0
  lis       r5, 0x8050
  lis       r4, 0x804A
  lis       r3, 0x8051
  lfs       f24, -0x7810(r2)
  lfs       f23, -0x77F8(r2)
  mr        r23, r29
  lfs       f22, -0x7814(r2)
  addi      r26, r5, 0x71A0
  addi      r31, r4, 0x30EC
  addi      r30, r3, 0x48DC
  lis       r29, 0xCC01
  b         .loc_0x910

.loc_0x590:
  stw       r23, 0x1E8(r27)
  addi      r22, r23, 0x8
  mr        r3, r27
  addi      r5, r1, 0x8
  lhz       r0, 0x90(r23)
  mr        r4, r22
  lfs       f1, 0x6C(r23)
  rlwinm    r0,r0,30,18,28
  lfs       f26, 0x8(r23)
  fneg      f0, f1
  add       r6, r26, r0
  lfs       f2, 0x0(r6)
  fmuls     f1, f1, f21
  lfs       f3, 0x4(r6)
  fneg      f5, f2
  fmuls     f0, f0, f20
  lfs       f27, 0xC(r23)
  lfs       f28, 0x10(r23)
  fmuls     f4, f1, f3
  stfs      f24, 0x18(r1)
  fmuls     f3, f0, f3
  fmuls     f2, f0, f5
  stfs      f0, 0x14(r1)
  fmuls     f0, f1, f5
  stfs      f24, 0x1C(r1)
  stfs      f1, 0x20(r1)
  stfs      f24, 0x24(r1)
  stfs      f24, 0x28(r1)
  stfs      f2, 0x14(r1)
  stfs      f24, 0x18(r1)
  stfs      f3, 0x1C(r1)
  stfs      f0, 0x20(r1)
  stfs      f24, 0x24(r1)
  stfs      f4, 0x28(r1)
  lwz       r0, 0x200(r27)
  rlwinm    r0,r0,2,0,29
  lwzx      r12, r31, r0
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lfs       f0, 0xC(r1)
  fmuls     f2, f1, f1
  lfs       f3, 0x10(r1)
  fmuls     f1, f0, f0
  lfs       f0, 0x0(r30)
  fmuls     f3, f3, f3
  fmuls     f4, f23, f0
  fadds     f0, f2, f1
  fadds     f5, f3, f0
  fcmpo     cr0, f5, f4
  cror      2, 0, 0x2
  bne-      .loc_0x678
  lfs       f1, -0x7810(r2)
  lfs       f0, -0x7814(r2)
  stfs      f1, 0x8(r1)
  stfs      f0, 0xC(r1)
  stfs      f1, 0x10(r1)
  b         .loc_0x6DC

.loc_0x678:
  fcmpo     cr0, f5, f4
  cror      2, 0, 0x2
  beq-      .loc_0x6DC
  lfs       f0, -0x7810(r2)
  fcmpo     cr0, f5, f0
  cror      2, 0, 0x2
  bne-      .loc_0x698
  b         .loc_0x6B8

.loc_0x698:
  fsqrte    f3, f5
  lfs       f2, -0x7818(r2)
  lfs       f0, -0x77F4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f5, f1, f0
  fmuls     f5, f2, f0

.loc_0x6B8:
  lfs       f2, 0x8(r1)
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  fmuls     f2, f2, f5
  fmuls     f1, f1, f5
  fmuls     f0, f0, f5
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)

.loc_0x6DC:
  lfs       f4, 0x54(r22)
  lfs       f6, 0x10(r1)
  lfs       f0, 0x0(r30)
  fmuls     f1, f4, f6
  lfs       f5, 0xC(r1)
  lfs       f3, 0x5C(r22)
  fmuls     f8, f23, f0
  lfs       f2, 0x8(r1)
  fmuls     f0, f3, f5
  fmsubs    f1, f3, f2, f1
  lfs       f7, 0x58(r22)
  fmuls     f2, f7, f2
  fmuls     f3, f1, f1
  fmsubs    f0, f7, f6, f0
  fmsubs    f2, f4, f5, f2
  fmadds    f3, f0, f0, f3
  fmadds    f7, f2, f2, f3
  fcmpo     cr0, f7, f8
  cror      2, 0, 0x2
  bne-      .loc_0x73C
  lfs       f1, -0x7810(r2)
  lfs       f0, -0x7814(r2)
  fmr       f2, f1
  b         .loc_0x788

.loc_0x73C:
  fcmpo     cr0, f7, f8
  cror      2, 0, 0x2
  beq-      .loc_0x788
  lfs       f3, -0x7810(r2)
  fcmpo     cr0, f7, f3
  cror      2, 0, 0x2
  bne-      .loc_0x75C
  b         .loc_0x77C

.loc_0x75C:
  fsqrte    f6, f7
  lfs       f5, -0x7818(r2)
  lfs       f3, -0x77F4(r2)
  frsp      f6, f6
  fmuls     f4, f6, f6
  fmuls     f5, f5, f6
  fnmsubs   f3, f7, f4, f3
  fmuls     f7, f5, f3

.loc_0x77C:
  fmuls     f0, f0, f7
  fmuls     f1, f1, f7
  fmuls     f2, f2, f7

.loc_0x788:
  lfs       f7, 0x10(r1)
  lfs       f6, 0x8(r1)
  fmuls     f3, f7, f1
  lfs       f8, 0xC(r1)
  fmuls     f4, f6, f2
  fmuls     f5, f8, f0
  fmsubs    f3, f8, f2, f3
  fmsubs    f4, f7, f0, f4
  fmsubs    f5, f6, f1, f5
  stfs      f3, 0x54(r22)
  stfs      f4, 0x58(r22)
  stfs      f5, 0x5C(r22)
  lfs       f4, 0x54(r22)
  lfs       f3, 0x58(r22)
  fmuls     f5, f4, f4
  lfs       f6, 0x5C(r22)
  fmuls     f4, f3, f3
  lfs       f3, 0x0(r30)
  fmuls     f6, f6, f6
  fmuls     f3, f23, f3
  fadds     f4, f5, f4
  fadds     f7, f6, f4
  fcmpo     cr0, f7, f3
  cror      2, 0, 0x2
  beq-      .loc_0x844
  lfs       f3, -0x7810(r2)
  fcmpo     cr0, f7, f3
  cror      2, 0, 0x2
  bne-      .loc_0x800
  b         .loc_0x820

.loc_0x800:
  fsqrte    f6, f7
  lfs       f5, -0x7818(r2)
  lfs       f3, -0x77F4(r2)
  frsp      f6, f6
  fmuls     f4, f6, f6
  fmuls     f5, f5, f6
  fnmsubs   f3, f7, f4, f3
  fmuls     f7, f5, f3

.loc_0x820:
  lfs       f3, 0x54(r22)
  fmuls     f3, f3, f7
  stfs      f3, 0x54(r22)
  lfs       f3, 0x58(r22)
  fmuls     f3, f3, f7
  stfs      f3, 0x58(r22)
  lfs       f3, 0x5C(r22)
  fmuls     f3, f3, f7
  stfs      f3, 0x5C(r22)

.loc_0x844:
  lfs       f4, 0x8(r1)
  addi      r4, r1, 0x14
  stfs      f0, 0x2C(r1)
  mr        r5, r4
  lfs       f3, 0xC(r1)
  addi      r3, r1, 0x2C
  stfs      f4, 0x30(r1)
  li        r6, 0x2
  lfs       f0, 0x10(r1)
  lfs       f4, 0x54(r22)
  stfs      f4, 0x34(r1)
  stfs      f24, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stfs      f3, 0x40(r1)
  lfs       f1, 0x58(r22)
  stfs      f1, 0x44(r1)
  stfs      f24, 0x48(r1)
  stfs      f2, 0x4C(r1)
  stfs      f0, 0x50(r1)
  lfs       f0, 0x5C(r22)
  stfs      f0, 0x54(r1)
  stfs      f24, 0x58(r1)
  bl        0x5C4A8
  lfs       f0, 0x14(r1)
  mr        r12, r28
  mr        r3, r23
  fadds     f0, f0, f26
  stfs      f0, -0x8000(r29)
  lfs       f0, 0x18(r1)
  fadds     f0, f0, f27
  stfs      f0, -0x8000(r29)
  lfs       f0, 0x1C(r1)
  fadds     f0, f0, f28
  stfs      f0, -0x8000(r29)
  stfs      f24, -0x8000(r29)
  stfs      f25, -0x8000(r29)
  lfs       f0, 0x20(r1)
  fadds     f0, f0, f26
  stfs      f0, -0x8000(r29)
  lfs       f0, 0x24(r1)
  fadds     f0, f0, f27
  stfs      f0, -0x8000(r29)
  lfs       f0, 0x28(r1)
  fadds     f0, f0, f28
  stfs      f0, -0x8000(r29)
  stfs      f22, -0x8000(r29)
  stfs      f25, -0x8000(r29)
  mtctr     r12
  bctrl     
  fadds     f25, f25, f31
  mr        r23, r3

.loc_0x910:
  cmplwi    r23, 0
  bne+      .loc_0x590
  li        r3, 0x9
  li        r4, 0x2
  bl        0x55A28
  li        r3, 0xD
  li        r4, 0x2
  bl        0x55A1C

.loc_0x930:
  psq_l     f31,0x158(r1),0,0
  lfd       f31, 0x150(r1)
  psq_l     f30,0x148(r1),0,0
  lfd       f30, 0x140(r1)
  psq_l     f29,0x138(r1),0,0
  lfd       f29, 0x130(r1)
  psq_l     f28,0x128(r1),0,0
  lfd       f28, 0x120(r1)
  psq_l     f27,0x118(r1),0,0
  lfd       f27, 0x110(r1)
  psq_l     f26,0x108(r1),0,0
  lfd       f26, 0x100(r1)
  psq_l     f25,0xF8(r1),0,0
  lfd       f25, 0xF0(r1)
  psq_l     f24,0xE8(r1),0,0
  lfd       f24, 0xE0(r1)
  psq_l     f23,0xD8(r1),0,0
  lfd       f23, 0xD0(r1)
  psq_l     f22,0xC8(r1),0,0
  lfd       f22, 0xC0(r1)
  psq_l     f21,0xB8(r1),0,0
  lfd       f21, 0xB0(r1)
  psq_l     f20,0xA8(r1),0,0
  lfd       f20, 0xA0(r1)
  psq_l     f19,0x98(r1),0,0
  lfd       f19, 0x90(r1)
  lmw       r22, 0x68(r1)
  lwz       r0, 0x164(r1)
  mtlr      r0
  addi      r1, r1, 0x160
  blr
*/
}

/*
 * --INFO--
 * Address:	8008E8E8
 * Size:	00003C
 */
void JPADrawEmitterCallBackB(JPAEmitterWorkData *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, 0x0(r3)
  lwz       r3, 0xEC(r4)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008E924
 * Size:	000044
 */
void JPADrawParticleCallBack(JPAEmitterWorkData *, JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r6, 0x0(r3)
  lwz       r3, 0xF0(r6)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8008E968
 * Size:	000004
 */
void JPAParticleCallBack::draw(JPABaseEmitter *, JPABaseParticle *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8008E96C
 * Size:	000284
 */
void makeColorTable(_GXColor **, const JPAClrAnmKeyData *, unsigned char, short, JKRHeap *)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  extsh     r6, r6
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  addi      r31, r6, 0x1
  stw       r30, 0x38(r1)
  mr        r30, r3
  rlwinm    r3,r31,2,0,29
  stw       r29, 0x34(r1)
  mr        r29, r5
  mr        r5, r7
  stw       r28, 0x30(r1)
  mr        r28, r4
  li        r4, 0x4
  bl        -0x6B3C8
  lbz       r7, 0x3(r28)
  lis       r10, 0x4330
  lfs       f6, -0x7810(r2)
  mr        r4, r28
  lbz       r9, 0x4(r28)
  mr        r5, r3
  stw       r7, 0x14(r1)
  fmr       f5, f6
  lbz       r0, 0x2(r28)
  fmr       f3, f6
  stw       r10, 0x10(r1)
  fmr       f4, f6
  lbz       r8, 0x5(r28)
  stw       r0, 0xC(r1)
  rlwinm    r0,r29,0,24,31
  lfd       f2, -0x7808(r2)
  li        r6, 0
  lfd       f1, 0x10(r1)
  li        r7, 0
  stw       r10, 0x8(r1)
  fsubs     f7, f1, f2
  lfd       f0, 0x8(r1)
  stw       r9, 0x1C(r1)
  fsubs     f0, f0, f2
  stw       r10, 0x18(r1)
  lfd       f1, 0x18(r1)
  stw       r8, 0x24(r1)
  fsubs     f8, f1, f2
  stw       r10, 0x20(r1)
  lfd       f1, 0x20(r1)
  fsubs     f9, f1, f2
  b         .loc_0x254

.loc_0xC0:
  lha       r8, 0x0(r4)
  extsh     r9, r7
  cmpw      r9, r8
  bne-      .loc_0x1FC
  lbz       r10, 0x3(r4)
  lis       r12, 0x4330
  lbz       r11, 0x2(r4)
  addi      r6, r6, 0x1
  lbz       r9, 0x4(r4)
  cmpw      r6, r0
  stw       r10, 0x1C(r1)
  lbz       r8, 0x5(r4)
  addi      r4, r4, 0x6
  stw       r12, 0x18(r1)
  lfd       f5, -0x7808(r2)
  lfd       f1, 0x18(r1)
  stb       r11, 0x0(r5)
  fsubs     f7, f1, f5
  stb       r10, 0x1(r5)
  stb       r9, 0x2(r5)
  stw       r9, 0x14(r1)
  stw       r12, 0x10(r1)
  lfd       f1, 0x10(r1)
  stw       r11, 0x24(r1)
  fsubs     f8, f1, f5
  stw       r12, 0x20(r1)
  lfd       f0, 0x20(r1)
  stw       r8, 0xC(r1)
  fsubs     f0, f0, f5
  stw       r12, 0x8(r1)
  lfd       f1, 0x8(r1)
  stb       r8, 0x3(r5)
  fsubs     f9, f1, f5
  bge-      .loc_0x1E8
  lha       r9, -0x6(r4)
  lha       r8, 0x0(r4)
  lbz       r11, 0x2(r4)
  sub       r8, r8, r9
  lbz       r10, 0x3(r4)
  xoris     r8, r8, 0x8000
  stw       r12, 0x20(r1)
  lbz       r9, 0x4(r4)
  stw       r8, 0x24(r1)
  lfd       f2, -0x7820(r2)
  lfd       f1, 0x20(r1)
  lfs       f3, -0x7814(r2)
  fsubs     f1, f1, f2
  lbz       r8, 0x5(r4)
  stw       r11, 0x1C(r1)
  fdivs     f6, f3, f1
  stw       r12, 0x18(r1)
  lfd       f2, 0x18(r1)
  stw       r10, 0x14(r1)
  stw       r12, 0x10(r1)
  lfd       f1, 0x10(r1)
  fsubs     f3, f2, f5
  stw       r9, 0xC(r1)
  fsubs     f2, f1, f5
  stw       r12, 0x8(r1)
  fsubs     f4, f3, f0
  lfd       f1, 0x8(r1)
  fsubs     f3, f2, f7
  stw       r8, 0x2C(r1)
  fsubs     f2, f1, f5
  stw       r12, 0x28(r1)
  fmuls     f4, f6, f4
  fmuls     f3, f6, f3
  lfd       f1, 0x28(r1)
  fsubs     f2, f2, f8
  fsubs     f1, f1, f5
  fmuls     f5, f6, f2
  fsubs     f1, f1, f9
  fmuls     f6, f6, f1
  b         .loc_0x24C

.loc_0x1E8:
  lfs       f6, -0x7810(r2)
  fmr       f5, f6
  fmr       f3, f6
  fmr       f4, f6
  b         .loc_0x24C

.loc_0x1FC:
  fadds     f0, f0, f4
  fadds     f7, f7, f3
  fadds     f8, f8, f5
  fctiwz    f2, f0
  fctiwz    f1, f7
  fadds     f9, f9, f6
  stfd      f2, 0x28(r1)
  fctiwz    f2, f8
  stfd      f1, 0x20(r1)
  fctiwz    f1, f9
  lwz       r8, 0x2C(r1)
  stfd      f2, 0x18(r1)
  lwz       r9, 0x24(r1)
  stb       r8, 0x0(r5)
  lwz       r8, 0x1C(r1)
  stb       r9, 0x1(r5)
  stfd      f1, 0x10(r1)
  stb       r8, 0x2(r5)
  lwz       r8, 0x14(r1)
  stb       r8, 0x3(r5)

.loc_0x24C:
  addi      r5, r5, 0x4
  addi      r7, r7, 0x1

.loc_0x254:
  extsh     r8, r7
  cmpw      r8, r31
  blt+      .loc_0xC0
  stw       r3, 0x0(r30)
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  lwz       r28, 0x30(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8008EBF0
 * Size:	000114
 */
void JPABaseShape::JPABaseShape(const unsigned char *, JKRHeap *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r30, 0x0(r3)
  lwz       r3, 0x0(r3)
  lwz       r0, 0x8(r3)
  rlwinm.   r0,r0,0,7,7
  beq-      .loc_0x44
  addi      r0, r30, 0x34
  stw       r0, 0x4(r29)
  b         .loc_0x4C

.loc_0x44:
  li        r0, 0
  stw       r0, 0x4(r29)

.loc_0x4C:
  lwz       r3, 0x0(r29)
  lbz       r0, 0x1E(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x7C
  lwz       r0, 0x8(r3)
  li        r3, 0x34
  rlwinm.   r0,r0,0,7,7
  beq-      .loc_0x70
  li        r3, 0x5C

.loc_0x70:
  add       r0, r30, r3
  stw       r0, 0x8(r29)
  b         .loc_0x84

.loc_0x7C:
  li        r0, 0
  stw       r0, 0x8(r29)

.loc_0x84:
  lwz       r4, 0x0(r29)
  lbz       r0, 0x21(r4)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0xB4
  lha       r0, 0xC(r4)
  mr        r7, r31
  lbz       r5, 0x22(r4)
  addi      r3, r29, 0xC
  lha       r6, 0x24(r4)
  add       r4, r30, r0
  bl        -0x330
  b         .loc_0xBC

.loc_0xB4:
  li        r0, 0
  stw       r0, 0xC(r29)

.loc_0xBC:
  lwz       r4, 0x0(r29)
  lbz       r0, 0x21(r4)
  rlwinm.   r0,r0,0,28,28
  beq-      .loc_0xEC
  lha       r0, 0xE(r4)
  mr        r7, r31
  lbz       r5, 0x23(r4)
  addi      r3, r29, 0x10
  lha       r6, 0x24(r4)
  add       r4, r30, r0
  bl        -0x368
  b         .loc_0xF4

.loc_0xEC:
  li        r0, 0
  stw       r0, 0x10(r29)

.loc_0xF4:
  lwz       r0, 0x24(r1)
  mr        r3, r29
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
 * Address:	........
 * Size:	0003F4
 */
void JPABaseShape::init_jpa(const unsigned char *, JKRHeap *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008ED04
 * Size:	000140
 */
void JPABaseShape::setGX(JPAEmitterWorkData *) const
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r4, 0x0(r28)
  lis       r3, 0x804A
  addi      r31, r3, 0x30A0
  lhz       r0, 0x18(r4)
  addi      r3, r31, 0x80
  lwz       r9, 0x8(r4)
  addi      r7, r31, 0x8C
  rlwinm    r8,r0,2,28,29
  rlwinm    r4,r0,0,26,29
  rlwinm    r5,r0,28,26,29
  rlwinm    r10,r9,21,25,27
  addi      r30, r31, 0x124
  addi      r6, r31, 0xB4
  rlwinm    r0,r0,24,26,29
  rlwinm    r9,r9,18,27,27
  addi      r29, r31, 0x184
  lwzx      r3, r3, r8
  lwzx      r4, r7, r4
  add       r30, r30, r10
  lwzx      r5, r7, r5
  add       r29, r29, r9
  lwzx      r6, r6, r0
  bl        0x5A35C
  lwz       r3, 0x0(r28)
  addi      r4, r31, 0xF4
  lbz       r5, 0x1D(r3)
  rlwinm    r0,r5,1,27,29
  rlwinm    r3,r5,0,31,31
  lwzx      r4, r4, r0
  rlwinm    r5,r5,28,31,31
  bl        0x5A3E8
  lwz       r8, 0x0(r28)
  addi      r7, r31, 0xF4
  addi      r5, r31, 0x114
  lbz       r0, 0x1A(r8)
  lbz       r4, 0x1B(r8)
  rlwinm    r3,r0,2,27,29
  rlwinm    r6,r0,31,28,29
  rlwinm    r0,r0,29,27,29
  lwzx      r5, r5, r6
  lwzx      r3, r7, r3
  lwzx      r6, r7, r0
  lbz       r7, 0x1C(r8)
  bl        0x59B7C
  lwz       r4, 0x0(r30)
  li        r3, 0
  lwz       r5, 0x4(r30)
  lwz       r6, 0x8(r30)
  lwz       r7, 0xC(r30)
  bl        0x59720
  lwz       r4, 0x0(r29)
  li        r3, 0
  lwz       r5, 0x4(r29)
  lwz       r6, 0x8(r29)
  lwz       r7, 0xC(r29)
  bl        0x5974C
  li        r3, 0
  bl        0x59570
  li        r3, 0x1
  bl        0x59568
  lwz       r3, 0x0(r28)
  lbz       r0, 0x1D(r3)
  rlwinm    r3,r0,27,31,31
  bl        0x5A398
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