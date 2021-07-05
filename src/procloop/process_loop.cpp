#include "process_loop.h"
#include "process_loop_impl.h"

// Execute this process main loop
// Returns a platform specific return code
int ft::os::procloop::process_loop::execute()
{
    return process_loop_impl::execute();
}
