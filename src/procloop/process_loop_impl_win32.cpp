// ft_base_lib headers
#include "base/platform.h"

#ifdef FT_OS_WINDOWS

#include "process_loop_impl_win32.h"

// Include Windows API headers
#include "base/windows_include.h"

int ft::os::procloop::process_loop_impl::execute()
{
    ::MSG msg;
    ::BOOL result;

    result = ::GetMessageA(&msg, nullptr, 0, 0);

    while (result > 0)
    {
        ::TranslateMessage(&msg);
        ::DispatchMessageA(&msg);

        result = ::GetMessageA(&msg, nullptr, 0, 0);
    }

    return static_cast<int>(msg.wParam);
}

#endif  // FT_OS_WINDOWS
