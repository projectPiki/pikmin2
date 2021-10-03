#include "System.h"

extern "C" void OSReport(char*, ...);
extern char lbl_804995D0[33];


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
 * Address:	804111B4
 * Size:	000050
 */
int main(void)
{
  System *system;
  OSReport(lbl_804995D0);
  System::initialize();
  system = new System();
  return system->run();
}
