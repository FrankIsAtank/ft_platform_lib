#pragma once

// ft_base_lib headers
#include "build/platform.h"

#ifdef FT_OS_WINDOWS

namespace ft {
namespace os {

class process_loop_impl
{
public:
    // Execute this process main loop
    // Returns a platform specific return code
    static int execute();

};  // class process_loop_impl

}   // namespace os
}   // namespace ft

#endif  // FT_OS_WINDOWS
