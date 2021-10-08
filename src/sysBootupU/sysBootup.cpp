#include "Dolphin/os.h"
#include "System.h"

/*
 * --INFO--
 * Address:	804111B4
 * Size:	000050
 */
int main(void)
{
    OSReport("bootup -----------------------\n");

    System::initialize();
    System* sysInstance = new System();
    return sysInstance->run();
}
