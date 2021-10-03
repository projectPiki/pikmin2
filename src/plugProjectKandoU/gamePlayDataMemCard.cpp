

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Game::PlayData::prepareSave(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021CFF4
 * Size:	000740
 */
void Game::PlayData::write( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x140(r1)
  mflr      r0
  stw       r0, 0x144(r1)
  stmw      r25, 0x124(r1)
  mr        r29, r4
  lis       r4, 0x8048
  mr        r28, r3
  addi      r31, r4, 0x27B8
  mr        r3, r29
  addi      r4, r31, 0x10
  lwz       r30, 0x8(r29)
  bl        0x1F6FFC
  lwz       r4, -0x7BA0(r13)
  addi      r3, r1, 0x8
  bl        0x1F627C
  mr        r4, r29
  addi      r3, r1, 0x8
  bl        0x1F6428
  mr        r3, r29
  bl        0x1F7060
  mr        r3, r29
  addi      r4, r31, 0x1C
  bl        0x1F6FD0
  lwz       r4, 0xBC(r28)
  mr        r3, r29
  bl        0x1F8768
  mr        r3, r29
  bl        0x1F7040
  mr        r3, r29
  addi      r4, r31, 0x2C
  bl        0x1F6FB0
  li        r26, 0
  addi      r27, r28, 0xF0

.loc_0x84:
  lbz       r4, 0x0(r27)
  mr        r3, r29
  bl        0x1F85F0
  addi      r26, r26, 0x1
  addi      r27, r27, 0x1
  cmplwi    r26, 0x2
  blt+      .loc_0x84
  mr        r3, r29
  bl        0x1F7008
  mr        r3, r29
  addi      r4, r31, 0x40
  bl        0x1F6F78
  mr        r3, r29
  lbz       r4, 0x2F(r28)
  bl        0x1F85C0
  mr        r3, r29
  bl        0x1F6FE8
  mr        r3, r29
  addi      r4, r31, 0x54
  bl        0x1F6F58
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x1F7364
  lbz       r4, 0x19(r28)
  mr        r3, r29
  bl        0x1F8594
  mr        r3, r29
  subi      r4, r2, 0x42E8
  crclr     6, 0x6
  bl        0x1F70F0
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x1F733C
  lbz       r4, 0x2C(r28)
  mr        r3, r29
  bl        0x1F856C
  mr        r3, r29
  addi      r4, r31, 0x74
  crclr     6, 0x6
  bl        0x1F70C8
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x1F7314
  lbz       r4, 0x2D(r28)
  mr        r3, r29
  bl        0x1F8544
  mr        r3, r29
  addi      r4, r31, 0x8C
  crclr     6, 0x6
  bl        0x1F70A0
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x1F72EC
  lbz       r4, 0x2E(r28)
  mr        r3, r29
  bl        0x1F851C
  mr        r3, r29
  addi      r4, r31, 0xA8
  crclr     6, 0x6
  bl        0x1F7078
  mr        r3, r29
  bl        0x1F6F34
  mr        r3, r29
  addi      r4, r31, 0xC0
  bl        0x1F6EA4
  mr        r4, r29
  addi      r3, r28, 0x40
  bl        0x169BC
  mr        r3, r29
  bl        0x1F6F14
  mr        r3, r29
  addi      r4, r31, 0xC0
  bl        0x1F6E84
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x1F7290
  lwz       r4, -0x6C18(r13)
  mr        r3, r29
  lwz       r4, 0x40(r4)
  lwz       r4, 0x218(r4)
  bl        0x1F8608
  mr        r3, r29
  subi      r4, r2, 0x42E8
  crclr     6, 0x6
  bl        0x1F7014
  mr        r3, r29
  bl        0x1F6ED0
  mr        r3, r29
  addi      r4, r31, 0xCC
  bl        0x1F6E40
  mr        r4, r29
  addi      r3, r28, 0x48
  bl        0xD64
  mr        r4, r29
  addi      r3, r28, 0x4A
  bl        0xD58
  mr        r3, r29
  bl        0x1F6EA4
  mr        r3, r29
  addi      r4, r31, 0xEC
  bl        0x1F6E14
  mr        r4, r29
  addi      r3, r28, 0x4C
  bl        0xE10
  mr        r3, r29
  bl        0x1F6E84
  mr        r3, r29
  addi      r4, r31, 0x108
  bl        0x1F6DF4
  mr        r4, r29
  addi      r3, r28, 0x84
  bl        0x1F3ED0
  mr        r3, r29
  bl        0x1F6E64
  mr        r3, r29
  addi      r4, r31, 0x120
  bl        0x1F6DD4
  addi      r3, r28, 0xA8
  mr        r4, r29
  lwz       r12, 0xA8(r28)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  bl        0x1F6E38
  mr        r3, r29
  addi      r4, r31, 0x140
  bl        0x1F6DA8
  lwz       r3, 0xB0(r28)
  mr        r4, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  bl        0x1F6E0C
  mr        r3, r29
  addi      r4, r31, 0x15C
  bl        0x1F6D7C
  lwz       r3, 0xB4(r28)
  mr        r4, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  bl        0x1F6DE0
  mr        r3, r29
  addi      r4, r31, 0x180
  bl        0x1F6D50
  lwz       r3, 0xB8(r28)
  mr        r4, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  bl        0x1F6DB4
  mr        r3, r29
  addi      r4, r31, 0x1A4
  bl        0x1F6D24
  li        r27, 0
  mr        r26, r28

.loc_0x310:
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x1F7128
  lwz       r4, 0xC0(r26)
  mr        r3, r29
  bl        0x1F84A8
  mr        r5, r27
  addi      r3, r1, 0x14
  addi      r4, r31, 0x1C0
  crclr     6, 0x6
  bl        -0x155EF4
  mr        r3, r29
  addi      r4, r1, 0x14
  crclr     6, 0x6
  bl        0x1F6EA0
  addi      r27, r27, 0x1
  addi      r26, r26, 0x4
  cmpwi     r27, 0x2
  blt+      .loc_0x310
  li        r27, 0
  mr        r26, r28

.loc_0x364:
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x1F70D4
  lwz       r4, 0xC8(r26)
  mr        r3, r29
  bl        0x1F8454
  mr        r5, r27
  addi      r3, r1, 0x14
  addi      r4, r31, 0x1D0
  crclr     6, 0x6
  bl        -0x155F48
  mr        r3, r29
  addi      r4, r1, 0x14
  crclr     6, 0x6
  bl        0x1F6E4C
  addi      r27, r27, 0x1
  addi      r26, r26, 0x4
  cmpwi     r27, 0x2
  blt+      .loc_0x364
  mr        r3, r29
  bl        0x1F6CF8
  mr        r3, r29
  addi      r4, r31, 0x1E4
  bl        0x1F6C68
  lwz       r5, -0x6C38(r13)
  mr        r3, r29
  lwz       r4, 0x414(r29)
  lhz       r26, 0x100(r5)
  bl        0x1F706C
  mr        r3, r29
  mr        r4, r26
  bl        0x1F83EC
  mr        r3, r29
  addi      r4, r31, 0x1F4
  crclr     6, 0x6
  bl        0x1F6DF8
  li        r25, 0
  b         .loc_0x478

.loc_0x3FC:
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x1F703C
  lwz       r4, 0xD8(r28)
  mr        r3, r29
  lbzx      r4, r4, r25
  bl        0x1F8268
  lwz       r4, 0xDC(r28)
  mr        r3, r29
  lbzx      r4, r4, r25
  bl        0x1F8258
  lwz       r3, -0x6C38(r13)
  mr        r4, r25
  bl        -0x6F478
  mr.       r27, r3
  bne-      .loc_0x450
  addi      r3, r31, 0x204
  addi      r5, r31, 0x21C
  li        r4, 0x145
  crclr     6, 0x6
  bl        -0x1F2E00

.loc_0x450:
  lwz       r5, 0x14(r27)
  addi      r3, r1, 0x14
  subi      r4, r2, 0x42E4
  crclr     6, 0x6
  bl        -0x15601C
  mr        r3, r29
  addi      r4, r1, 0x14
  crclr     6, 0x6
  bl        0x1F6D78
  addi      r25, r25, 0x1

.loc_0x478:
  cmpw      r25, r26
  blt+      .loc_0x3FC
  mr        r3, r29
  bl        0x1F6C28
  mr        r3, r29
  addi      r4, r31, 0x228
  bl        0x1F6B98
  mr        r3, r28
  mr        r4, r29
  bl        -0x34844
  mr        r3, r29
  bl        0x1F6C08
  mr        r3, r29
  addi      r4, r31, 0x23C
  bl        0x1F6B78
  lwz       r3, -0x6C38(r13)
  li        r25, 0
  li        r27, 0
  lhz       r26, 0x100(r3)
  b         .loc_0x4E0

.loc_0x4C8:
  lwz       r0, 0xE4(r28)
  mr        r4, r29
  add       r3, r0, r27
  bl        0x6B4
  addi      r27, r27, 0x10
  addi      r25, r25, 0x1

.loc_0x4E0:
  cmpw      r25, r26
  blt+      .loc_0x4C8
  mr        r3, r29
  bl        0x1F6BC0
  mr        r3, r29
  addi      r4, r31, 0x24C
  bl        0x1F6B30
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x1F6F3C
  lwz       r4, 0xE8(r28)
  mr        r3, r29
  bl        0x1F82BC
  lwz       r4, 0xEC(r28)
  mr        r3, r29
  bl        0x1F82B0
  mr        r3, r29
  subi      r4, r2, 0x42E8
  crclr     6, 0x6
  bl        0x1F6CBC
  mr        r3, r29
  bl        0x1F6B78
  mr        r3, r29
  addi      r4, r31, 0x270
  bl        0x1F6AE8
  mr        r3, r29
  bl        0x13010
  mr        r3, r29
  bl        0x1F6B5C
  mr        r3, r29
  addi      r4, r31, 0x27C
  bl        0x1F6ACC
  mr        r3, r29
  bl        0x13B74
  mr        r3, r29
  bl        0x1F6B40
  mr        r3, r29
  addi      r4, r31, 0x288
  bl        0x1F6AB0
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x1F6EBC
  mr        r3, r29
  lbz       r4, 0x20(r28)
  bl        0x1F80EC
  mr        r3, r29
  subi      r4, r2, 0x42E8
  crclr     6, 0x6
  bl        0x1F6C48
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x1F6E94
  lfs       f1, 0x24(r28)
  mr        r3, r29
  bl        0x1F829C
  lfs       f1, 0x28(r28)
  mr        r3, r29
  bl        0x1F8290
  mr        r3, r29
  subi      r4, r2, 0x42E8
  crclr     6, 0x6
  bl        0x1F6C14
  mr        r3, r29
  bl        0x1F6AD0
  mr        r3, r29
  addi      r4, r31, 0x2A0
  bl        0x1F6A40
  lwz       r4, 0x414(r29)
  mr        r3, r29
  bl        0x1F6E4C
  mr        r4, r29
  addi      r3, r28, 0x30
  bl        0x1FEC78
  mr        r4, r29
  addi      r3, r28, 0x38
  bl        0x1FEC6C
  mr        r3, r29
  subi      r4, r2, 0x42E8
  crclr     6, 0x6
  bl        0x1F6BCC
  mr        r3, r29
  bl        0x1F6A88
  lwz       r5, -0x6C38(r13)
  mr        r3, r29
  addi      r4, r31, 0x2C4
  lhz       r26, 0x100(r5)
  bl        0x1F69F0
  li        r25, 0
  b         .loc_0x658

.loc_0x644:
  lwz       r4, 0xF4(r28)
  mr        r3, r29
  lbzx      r4, r4, r25
  bl        0x1F802C
  addi      r25, r25, 0x1

.loc_0x658:
  cmpw      r25, r26
  blt+      .loc_0x644
  lwz       r4, 0xFC(r28)
  mr        r3, r29
  bl        0x1F8164
  mr        r3, r28
  mr        r4, r29
  bl        -0x339F4
  mr        r3, r29
  bl        0x1F6A30
  lwz       r5, -0x6B40(r13)
  mr        r3, r29
  lwz       r0, 0x8(r29)
  addi      r4, r31, 0x2D8
  lwz       r6, 0x88(r5)
  lwz       r5, 0x80(r5)
  sub       r0, r0, r30
  sub       r5, r5, r6
  add       r27, r0, r5
  bl        0x1F6984
  li        r25, 0
  mr        r26, r28

.loc_0x6B0:
  lwz       r4, 0x100(r26)
  mr        r3, r29
  bl        0x1F8114
  lwz       r4, 0x118(r26)
  mr        r3, r29
  bl        0x1F8108
  mr        r3, r29
  subi      r4, r2, 0x42E8
  crclr     6, 0x6
  bl        0x1F6B14
  addi      r25, r25, 0x1
  addi      r26, r26, 0x4
  cmpwi     r25, 0x6
  blt+      .loc_0x6B0
  mr        r3, r29
  bl        0x1F69C0
  mr        r3, r29
  addi      r4, r31, 0x2EC
  bl        0x1F6930
  lwz       r3, -0x6B40(r13)
  mr        r4, r29
  bl        -0x2AD00
  mr        r3, r29
  bl        0x1F69A0
  li        r0, 0
  stw       r0, 0x1C(r28)
  lwz       r0, -0x6A54(r13)
  stw       r27, -0x6A58(r13)
  cmpw      r0, r27
  bge-      .loc_0x72C
  stw       r27, -0x6A54(r13)

.loc_0x72C:
  lmw       r25, 0x124(r1)
  lwz       r0, 0x144(r1)
  mtlr      r0
  addi      r1, r1, 0x140
  blr
*/
}

/*
 * --INFO--
 * Address:	8021D734
 * Size:	000404
 */
void Game::PlayData::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r25, 0x24(r1)
  mr        r29, r4
  mr        r28, r3
  lwz       r31, 0x8(r4)
  bl        -0x12ABC0
  stw       r4, 0xD4(r28)
  stw       r3, 0xD0(r28)
  addi      r3, r1, 0x14
  bl        0x1F5B10
  mr        r4, r29
  addi      r3, r1, 0x14
  bl        0x1F5D84
  lwz       r0, 0x1C(r1)
  lwz       r4, -0x7BA0(r13)
  mr        r30, r0
  cmplw     r4, r0
  beq-      .loc_0x58
  addi      r3, r1, 0x8
  bl        0x1F5B20

.loc_0x58:
  lis       r3, 0x6A30
  addi      r0, r3, 0x3034
  cmplw     r30, r0
  blt-      .loc_0x78
  mr        r3, r29
  bl        0x1F72F0
  stw       r3, 0xBC(r28)
  b         .loc_0x80

.loc_0x78:
  li        r0, 0
  stw       r0, 0xBC(r28)

.loc_0x80:
  lis       r3, 0x6A30
  addi      r0, r3, 0x3031
  cmplw     r30, r0
  blt-      .loc_0xB4
  li        r26, 0
  addi      r27, r28, 0xF0

.loc_0x98:
  mr        r3, r29
  bl        0x1F6CCC
  addi      r26, r26, 0x1
  stb       r3, 0x0(r27)
  cmplwi    r26, 0x2
  addi      r27, r27, 0x1
  blt+      .loc_0x98

.loc_0xB4:
  mr        r3, r29
  bl        0x1F6CB0
  stb       r3, 0x2F(r28)
  mr        r3, r29
  bl        0x1F6CA4
  stb       r3, 0x19(r28)
  mr        r3, r29
  bl        0x1F6C98
  stb       r3, 0x2C(r28)
  mr        r3, r29
  bl        0x1F6C8C
  lis       r4, 0x6A30
  stb       r3, 0x2D(r28)
  addi      r0, r4, 0x3037
  cmplw     r30, r0
  blt-      .loc_0x100
  mr        r3, r29
  bl        0x1F6C70
  stb       r3, 0x2E(r28)

.loc_0x100:
  mr        r4, r29
  addi      r3, r28, 0x40
  bl        0x163C4
  mr        r3, r29
  bl        0x1F724C
  lwz       r5, -0x6C18(r13)
  mr        r4, r29
  lwz       r5, 0x40(r5)
  stw       r3, 0x218(r5)
  addi      r3, r28, 0x48
  bl        0x76C
  mr        r4, r29
  addi      r3, r28, 0x4A
  bl        0x760
  mr        r4, r29
  mr        r5, r30
  addi      r3, r28, 0x4C
  bl        0x944
  mr        r4, r29
  addi      r3, r28, 0x84
  bl        0x1F37F8
  addi      r3, r28, 0xA8
  mr        r4, r29
  lwz       r12, 0xA8(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xB0(r28)
  mr        r4, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xB4(r28)
  mr        r4, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xB8(r28)
  mr        r4, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r27, 0
  mr        r26, r28

.loc_0x1BC:
  mr        r3, r29
  bl        0x1F719C
  addi      r27, r27, 0x1
  stw       r3, 0xC0(r26)
  cmpwi     r27, 0x2
  addi      r26, r26, 0x4
  blt+      .loc_0x1BC
  li        r27, 0
  mr        r26, r28

.loc_0x1E0:
  mr        r3, r29
  bl        0x1F7178
  addi      r27, r27, 0x1
  stw       r3, 0xC8(r26)
  cmpwi     r27, 0x2
  addi      r26, r26, 0x4
  blt+      .loc_0x1E0
  lwz       r4, -0x6C38(r13)
  mr        r3, r29
  lhz       r26, 0x100(r4)
  bl        0x1F7154
  cmpw      r3, r26
  beq-      .loc_0x23C
  lis       r5, 0x8048
  lis       r4, 0x8048
  addi      r0, r5, 0x29BC
  mr        r7, r3
  addi      r5, r4, 0x2AD0
  mr        r6, r26
  mr        r3, r0
  li        r4, 0x279
  crclr     6, 0x6
  bl        -0x1F332C

.loc_0x23C:
  lis       r3, 0x6A30
  li        r25, 0
  addi      r27, r3, 0x3035
  b         .loc_0x278

.loc_0x24C:
  mr        r3, r29
  bl        0x1F6B18
  lwz       r4, 0xD8(r28)
  cmplw     r30, r27
  stbx      r3, r4, r25
  blt-      .loc_0x274
  mr        r3, r29
  bl        0x1F6B00
  lwz       r4, 0xDC(r28)
  stbx      r3, r4, r25

.loc_0x274:
  addi      r25, r25, 0x1

.loc_0x278:
  cmpw      r25, r26
  blt+      .loc_0x24C
  mr        r3, r28
  mr        r4, r29
  bl        -0x34DD0
  lwz       r3, -0x6C38(r13)
  li        r25, 0
  li        r27, 0
  lhz       r26, 0x100(r3)
  b         .loc_0x2B8

.loc_0x2A0:
  lwz       r0, 0xE4(r28)
  mr        r4, r29
  add       r3, r0, r27
  bl        .loc_0x404
  addi      r27, r27, 0x10
  addi      r25, r25, 0x1

.loc_0x2B8:
  cmpw      r25, r26
  blt+      .loc_0x2A0
  mr        r3, r29
  bl        0x1F7098
  stw       r3, 0xE8(r28)
  mr        r3, r29
  bl        0x1F708C
  stw       r3, 0xEC(r28)
  mr        r3, r29
  bl        0x12A8C
  mr        r3, r29
  bl        0x13604
  mr        r3, r29
  bl        0x1F6A7C
  lis       r4, 0x6A30
  stb       r3, 0x20(r28)
  addi      r0, r4, 0x3036
  cmplw     r30, r0
  blt-      .loc_0x31C
  mr        r3, r29
  bl        0x1F7370
  stfs      f1, 0x24(r28)
  mr        r3, r29
  bl        0x1F7364
  stfs      f1, 0x28(r28)

.loc_0x31C:
  mr        r4, r29
  addi      r3, r28, 0x30
  bl        0x1FE7B0
  mr        r4, r29
  addi      r3, r28, 0x38
  bl        0x1FE7A4
  lis       r3, 0x6A30
  addi      r0, r3, 0x3038
  cmplw     r30, r0
  blt-      .loc_0x388
  lwz       r3, -0x6C38(r13)
  li        r25, 0
  lhz       r26, 0x100(r3)
  b         .loc_0x368

.loc_0x354:
  mr        r3, r29
  bl        0x1F6A10
  lwz       r4, 0xF4(r28)
  stbx      r3, r4, r25
  addi      r25, r25, 0x1

.loc_0x368:
  cmpw      r25, r26
  blt+      .loc_0x354
  mr        r3, r29
  bl        0x1F6FE8
  stw       r3, 0xFC(r28)
  mr        r3, r28
  mr        r4, r29
  bl        -0x33F18

.loc_0x388:
  li        r25, 0
  mr        r26, r28

.loc_0x390:
  mr        r3, r29
  bl        0x1F6FC8
  stw       r3, 0x100(r26)
  mr        r3, r29
  bl        0x1F6FBC
  addi      r25, r25, 0x1
  stw       r3, 0x118(r26)
  cmpwi     r25, 0x6
  addi      r26, r26, 0x4
  blt+      .loc_0x390
  lwz       r3, -0x6B40(r13)
  mr        r4, r29
  lwz       r0, 0x8(r29)
  lwz       r6, 0x88(r3)
  lwz       r5, 0x80(r3)
  sub       r0, r0, r31
  sub       r5, r5, r6
  add       r26, r0, r5
  bl        -0x2AEE0
  lwz       r0, -0x6A54(r13)
  stw       r26, -0x6A58(r13)
  cmpw      r0, r26
  bge-      .loc_0x3F0
  stw       r26, -0x6A54(r13)

.loc_0x3F0:
  lmw       r25, 0x24(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr       

.loc_0x404:
*/
}

/*
 * --INFO--
 * Address:	8021DB38
 * Size:	000044
 */
void Game::PlayData::LimitGen::read( (Stream &))
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
  bl        0x1FE6B4
  mr        r4, r31
  addi      r3, r30, 0x8
  bl        0x1FE6A8
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
 * Address:	8021DB7C
 * Size:	000078
 */
void Game::PlayData::LimitGen::write( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  addi      r4, r5, 0x2B00
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r31
  bl        0x1F6478
  mr        r3, r30
  mr        r4, r31
  bl        0x1FE6BC
  mr        r3, r31
  bl        0x1F64E8
  mr        r3, r31
  subi      r4, r2, 0x42DC
  bl        0x1F6458
  mr        r4, r31
  addi      r3, r30, 0x8
  bl        0x1FE69C
  mr        r3, r31
  bl        0x1F64C8
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
 * Address:	........
 * Size:	0000C8
 */
void Game::KindCounter::write( (Stream &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void Game::KindCounter::read( (Stream &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021DBF4
 * Size:	000208
 */
void Game::PelletCropMemory::write( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  mr        r3, r31
  stw       r29, 0x14(r1)
  addi      r29, r5, 0x27B8
  stw       r28, 0x10(r1)
  lwz       r4, 0x414(r4)
  bl        0x1F680C
  mr        r3, r31
  addi      r4, r29, 0x398
  crclr     6, 0x6
  bl        0x1F65A4
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x1F67F0
  lhz       r0, 0x4(r30)
  mr        r3, r31
  extsh     r4, r0
  bl        0x1F7ADC
  mr        r3, r31
  addi      r4, r29, 0x354
  bl        0x1F63BC
  li        r28, 0
  b         .loc_0xAC

.loc_0x78:
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x1F67C0
  lwz       r4, 0x8(r30)
  mr        r3, r31
  lbzx      r4, r4, r28
  bl        0x1F79EC
  mr        r3, r31
  mr        r5, r28
  addi      r4, r29, 0x360
  crclr     6, 0x6
  bl        0x1F6544
  addi      r28, r28, 0x1

.loc_0xAC:
  lhz       r0, 0x4(r30)
  cmpw      r28, r0
  blt+      .loc_0x78
  mr        r3, r31
  bl        0x1F63F0
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x1F6778
  mr        r3, r31
  addi      r4, r29, 0x3AC
  crclr     6, 0x6
  bl        0x1F6510
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x1F675C
  lhz       r0, 0xC(r30)
  mr        r3, r31
  extsh     r4, r0
  bl        0x1F7A48
  mr        r3, r31
  addi      r4, r29, 0x354
  bl        0x1F6328
  li        r28, 0
  b         .loc_0x140

.loc_0x10C:
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x1F672C
  lwz       r4, 0x10(r30)
  mr        r3, r31
  lbzx      r4, r4, r28
  bl        0x1F7958
  mr        r3, r31
  mr        r5, r28
  addi      r4, r29, 0x360
  crclr     6, 0x6
  bl        0x1F64B0
  addi      r28, r28, 0x1

.loc_0x140:
  lhz       r0, 0xC(r30)
  cmpw      r28, r0
  blt+      .loc_0x10C
  mr        r3, r31
  bl        0x1F635C
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x1F66E4
  mr        r3, r31
  addi      r4, r29, 0x3C0
  crclr     6, 0x6
  bl        0x1F647C
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x1F66C8
  lhz       r0, 0x14(r30)
  mr        r3, r31
  extsh     r4, r0
  bl        0x1F79B4
  mr        r3, r31
  addi      r4, r29, 0x354
  bl        0x1F6294
  li        r28, 0
  b         .loc_0x1D4

.loc_0x1A0:
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x1F6698
  lwz       r4, 0x18(r30)
  mr        r3, r31
  lbzx      r4, r4, r28
  bl        0x1F78C4
  mr        r3, r31
  mr        r5, r28
  addi      r4, r29, 0x360
  crclr     6, 0x6
  bl        0x1F641C
  addi      r28, r28, 0x1

.loc_0x1D4:
  lhz       r0, 0x14(r30)
  cmpw      r28, r0
  blt+      .loc_0x1A0
  mr        r3, r31
  bl        0x1F62C8
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
 * Address:	8021DDFC
 * Size:	000150
 */
void Game::PelletCropMemory::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  mr        r3, r31
  stw       r29, 0x14(r1)
  bl        0x1F6944
  lhz       r7, 0x4(r30)
  rlwinm    r6,r3,0,16,31
  cmpw      r6, r7
  beq-      .loc_0x54
  lis       r3, 0x8048
  lis       r4, 0x8048
  addi      r5, r4, 0x2B24
  addi      r3, r3, 0x29BC
  li        r4, 0x31A
  crclr     6, 0x6
  bl        -0x1F380C

.loc_0x54:
  li        r29, 0
  b         .loc_0x70

.loc_0x5C:
  mr        r3, r31
  bl        0x1F6640
  lwz       r4, 0x8(r30)
  stbx      r3, r4, r29
  addi      r29, r29, 0x1

.loc_0x70:
  lhz       r0, 0x4(r30)
  cmpw      r29, r0
  blt+      .loc_0x5C
  mr        r3, r31
  bl        0x1F68E8
  lhz       r7, 0xC(r30)
  rlwinm    r6,r3,0,16,31
  cmpw      r6, r7
  beq-      .loc_0xB0
  lis       r3, 0x8048
  lis       r4, 0x8048
  addi      r5, r4, 0x2B24
  addi      r3, r3, 0x29BC
  li        r4, 0x31A
  crclr     6, 0x6
  bl        -0x1F3868

.loc_0xB0:
  li        r29, 0
  b         .loc_0xCC

.loc_0xB8:
  mr        r3, r31
  bl        0x1F65E4
  lwz       r4, 0x10(r30)
  stbx      r3, r4, r29
  addi      r29, r29, 0x1

.loc_0xCC:
  lhz       r0, 0xC(r30)
  cmpw      r29, r0
  blt+      .loc_0xB8
  mr        r3, r31
  bl        0x1F688C
  lhz       r7, 0x14(r30)
  rlwinm    r6,r3,0,16,31
  cmpw      r6, r7
  beq-      .loc_0x10C
  lis       r3, 0x8048
  lis       r4, 0x8048
  addi      r5, r4, 0x2B24
  addi      r3, r3, 0x29BC
  li        r4, 0x31A
  crclr     6, 0x6
  bl        -0x1F38C4

.loc_0x10C:
  li        r29, 0
  b         .loc_0x128

.loc_0x114:
  mr        r3, r31
  bl        0x1F6588
  lwz       r4, 0x18(r30)
  stbx      r3, r4, r29
  addi      r29, r29, 0x1

.loc_0x128:
  lhz       r0, 0x14(r30)
  cmpw      r29, r0
  blt+      .loc_0x114
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
 * Address:	8021DF4C
 * Size:	00007C
 */
void Game::OlimarData::write( (Stream &))
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
  mr        r29, r4
  mr        r3, r29
  lwz       r4, 0x414(r4)
  bl        0x1F64C0
  li        r30, 0

.loc_0x30:
  lbz       r4, 0x0(r31)
  mr        r3, r29
  bl        0x1F76EC
  addi      r30, r30, 0x1
  addi      r31, r31, 0x1
  cmplwi    r30, 0x2
  blt+      .loc_0x30
  lis       r4, 0x8048
  mr        r3, r29
  addi      r4, r4, 0x2B8C
  crclr     6, 0x6
  bl        0x1F6234
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
 * Address:	8021DFC8
 * Size:	00005C
 */
void Game::OlimarData::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r4

.loc_0x24:
  mr        r3, r29
  bl        0x1F64AC
  addi      r30, r30, 0x1
  stb       r3, 0x0(r31)
  cmplwi    r30, 0x2
  addi      r31, r31, 0x1
  blt+      .loc_0x24
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
 * Address:	8021E024
 * Size:	000198
 */
void Game::CaveSaveData::write( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  addi      r31, r5, 0x27B8
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r30
  lwz       r4, 0x414(r4)
  bl        0x1F63E0
  mr        r3, r30
  addi      r4, r31, 0x3E4
  crclr     6, 0x6
  bl        0x1F6178
  addi      r3, r29, 0x14
  mr        r4, r30
  lwz       r12, 0x14(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x1F63AC
  lfs       f1, 0x1C(r29)
  mr        r3, r30
  bl        0x1F77B4
  mr        r3, r30
  addi      r4, r31, 0x3F8
  crclr     6, 0x6
  bl        0x1F6138
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x1F6384
  lwz       r0, 0x4(r29)
  mr        r3, r30
  rlwinm    r4,r0,0,24,31
  bl        0x1F75B0
  mr        r3, r30
  addi      r4, r31, 0x404
  crclr     6, 0x6
  bl        0x1F610C
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x1F6358
  mr        r4, r30
  addi      r3, r29, 0x8
  bl        0x1F5378
  mr        r3, r30
  addi      r4, r31, 0x418
  crclr     6, 0x6
  bl        0x1F60E4
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x1F6330
  lwz       r0, 0x28(r29)
  mr        r3, r30
  rlwinm    r4,r0,0,24,31
  bl        0x1F755C
  mr        r3, r30
  addi      r4, r31, 0x418
  crclr     6, 0x6
  bl        0x1F60B8
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x1F6304
  lbz       r4, 0x20(r29)
  mr        r3, r30
  bl        0x1F7534
  mr        r3, r30
  addi      r4, r31, 0x428
  crclr     6, 0x6
  bl        0x1F6090
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x1F62DC
  lfs       f1, 0x24(r29)
  mr        r3, r30
  bl        0x1F76E4
  mr        r3, r30
  addi      r4, r31, 0x43C
  crclr     6, 0x6
  bl        0x1F6068
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x1F62B4
  lbz       r4, 0x2C(r29)
  mr        r3, r30
  bl        0x1F74E4
  mr        r3, r30
  addi      r4, r31, 0x450
  crclr     6, 0x6
  bl        0x1F6040
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
 * Address:	8021E1BC
 * Size:	0000D0
 */
void Game::CaveSaveData::read( (Stream &, unsigned long))
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
  addi      r3, r29, 0x14
  lwz       r12, 0x14(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  bl        0x1F6BB4
  stfs      f1, 0x1C(r29)
  mr        r3, r30
  bl        0x1F6298
  extsb     r0, r3
  mr        r4, r30
  stw       r0, 0x4(r29)
  addi      r3, r29, 0x8
  bl        0x1F52D8
  mr        r3, r30
  bl        0x1F627C
  extsb     r0, r3
  mr        r3, r30
  stw       r0, 0x28(r29)
  bl        0x1F626C
  rlwinm    r4,r3,0,24,31
  mr        r3, r30
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r0,r0,1,31,31
  stb       r0, 0x20(r29)
  bl        0x1F6B60
  lis       r3, 0x6A30
  stfs      f1, 0x24(r29)
  addi      r0, r3, 0x3039
  cmplw     r31, r0
  blt-      .loc_0xB4
  mr        r3, r30
  bl        0x1F6234
  stb       r3, 0x2C(r29)

.loc_0xB4:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}
