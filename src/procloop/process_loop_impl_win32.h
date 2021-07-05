#pragma once

// ft_base_lib headers
#include "build/platform.h"

#ifdef FT_OS_WINDOWS

namespace ft {
namespace os {
namespace procloop {

class process_loop_impl
{
public:
    // Execute this process main loop
    // Returns a platform specific return code
    static int execute();

};  // class process_loop_impl

}   // namespace procloop
}   // namespace os
}   // namespace ft

#endif  // FT_OS_WINDOWS
