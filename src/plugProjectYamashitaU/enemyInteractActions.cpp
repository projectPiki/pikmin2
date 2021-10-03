

/*
 * --INFO--
 * Address:	80127884
 * Size:	00005C
 */
void Game::InteractFarmKarero::actEnemy((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfd       f1, -0x63D0(r2)
      mr        r6, r3
      stw       r0, 0x14(r1)
      lis       r0, 0x4330
      lwz       r5, 0x8(r3)
      mr        r3, r4
      lwz       r12, 0x0(r4)
      stw       r0, 0x8(r1)
      neg       r0, r5
      xoris     r0, r0, 0x8000
      lwz       r12, 0x290(r12)
      stw       r0, 0xC(r1)
      lwz       r4, 0x4(r6)
      lfd       f0, 0x8(r1)
      fsubs     f1, f0, f1
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
 * Address:	801278E0
 * Size:	000058
 */
void Game::InteractFarmHaero::actEnemy((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lfd       f1, -0x63D0(r2)
      mr        r6, r3
      stw       r0, 0x14(r1)
      lis       r0, 0x4330
      lwz       r5, 0x8(r3)
      mr        r3, r4
      lwz       r12, 0x0(r4)
      stw       r0, 0x8(r1)
      xoris     r0, r5, 0x8000
      lwz       r12, 0x290(r12)
      stw       r0, 0xC(r1)
      lwz       r4, 0x4(r6)
      lfd       f0, 0x8(r1)
      fsubs     f1, f0, f1
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
 * Address:	80127938
 * Size:	00003C
 */
void Game::InteractDope::actEnemy((Game::EnemyBase*))
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      mr        r5, r3
      mr        r3, r4
      stw       r0, 0x14(r1)
      lwz       r12, 0x0(r3)
      lwz       r4, 0x4(r5)
      lwz       r12, 0x29C(r12)
      lwz       r5, 0x8(r5)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}
