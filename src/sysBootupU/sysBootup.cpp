#include "types.h"

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
	return (new System())->run();
}
