#pragma once

// standard headers
#include <memory>

namespace ft {
namespace os {

// Platform-dependent component of this class
class process_loop_impl;

class process_loop final
{
public:
    // Static class
    process_loop() = delete;

    // Execute this process' main loop
    // Returns a platform specific return code when the loop ends
    static int execute();

};  // class render_frame

}   // namespace os
}   // namespace ft
