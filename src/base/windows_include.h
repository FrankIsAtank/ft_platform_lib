#pragma once

// Includes Windows API headers if the current platform is Windows

// ft_base_lib headers
#include "base/platform.h"

#ifdef FT_OS_WINDOWS
    
    #ifndef WIN32_LEAN_AND_MEAN
        #define WIN32_LEAN_AND_MEAN 1
    #endif
    #ifndef NOMINMAX
        #define NOMINMAX 1
    #endif
    #include <windows.h>
#else   // FT_OS_WINDOWS

    #error windows_include.h included in a non-Windows build

#endif  // FT_OS_WINDOWS

