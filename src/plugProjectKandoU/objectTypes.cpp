

/*
 * --INFO--
 * Address:	8017D3F8
 * Size:	000054
 */
void Game::ObjType::getName((unsigned short))
{
    /*
    .loc_0x0:
      lis       r4, 0x804B
      rlwinm    r0,r3,0,16,31
      addi      r3, r4, 0x2C88
      li        r5, 0

    .loc_0x10:
      lhz       r4, 0x0(r3)
      cmplwi    r4, 0xFFFF
      bne-      .loc_0x24
      li        r3, 0
      blr

    .loc_0x24:
      cmplw     r0, r4
      bne-      .loc_0x44
      lis       r3, 0x804B
      rlwinm    r0,r5,3,0,28
      addi      r3, r3, 0x2C88
      add       r3, r3, r0
      lwz       r3, 0x4(r3)
      blr

    .loc_0x44:
      addi      r3, r3, 0x8
      addi      r5, r5, 0x1
      b         .loc_0x10
      blr
    */
}
