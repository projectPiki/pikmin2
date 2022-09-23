#include "P2DScreen.h"

/* Whole file is #ifdef'd out because it was meant
 * for a UI based on Windows, not for the GC.
 *
 * The only thing in here left is the weak P2DScreen::Mgr dtor, so
 * the fake function is here in place of the #ifdef'd stuff to gen it.
 */

namespace P2DScreen {

static void fakeInfoWindowFunc(Mgr* mgr) { mgr->~Mgr(); }

} // namespace P2DScreen
