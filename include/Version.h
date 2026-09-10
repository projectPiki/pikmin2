#ifndef VERSION_H
#define VERSION_H

// The build system defines exactly one version flag. For version-specific behaviour,
// test flags with defined() not their numeric values.
#if defined(VERNUM) || defined(BUILDTARGET)
#error Use a VERSION_<game ID> flag instead of VERNUM or BUILDTARGET
#endif

#if (defined(VERSION_GPVE01) + defined(VERSION_GPVE01_D17) + defined(VERSION_GPVE01_D18) + defined(VERSION_GPVJ01) \
     + defined(VERSION_GPVP01))                                                                                    \
    != 1
#error Define exactly one supported version: VERSION_GPVE01, VERSION_GPVE01_D17, VERSION_GPVE01_D18, VERSION_GPVJ01 or VERSION_GPVP01
#endif

// aliases so code is more readable
#if defined(VERSION_GPVE01)
#define VERSION_US
#elif defined(VERSION_GPVE01_D17)
#define VERSION_US_DEMO1
#define VERSION_US_DEMO
#elif defined(VERSION_GPVE01_D18)
#define VERSION_US_DEMO2
#define VERSION_US_DEMO
#elif defined(VERSION_GPVJ01)
#define VERSION_JP
#elif defined(VERSION_GPVP01)
#define VERSION_PAL
#endif

#endif
