#pragma once

// Includes Windows API headers if the current platform is Windows

// ft_base_lib headers
#include "base/platform.h"

#ifdef FT_OS_WINDOWS

    #define WIN32_LEAN_AND_MEAN
    #define NOMINMAX
    #include <windows.h>
#else   // FT_OS_WINDOWS

    #error windows_include.h included in a non-Windows build

#endif  // FT_OS_WINDOWS

