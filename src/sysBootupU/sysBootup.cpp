#include "System.h"

extern "C" void OSReport(char*, ...);

// "bootup -----------------------\n"
extern char gMainBootupStr[33];

/*
 * --INFO--
 * Address:	804111B4
 * Size:	000050
 */
int main(void)
{
    OSReport(gMainBootupStr);

    System::initialize();
    System* sysInstance = new System();
    return sysInstance->run();
}
