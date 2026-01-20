/* ---------- headers */

#include "core\corelib\cseries\cseries_asserts.h"
#include "core\corelib\cseries\asserts\assert_handler.h"

#include <stdlib.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

long register_tracked_assert(char const * arg1, long arg2)
{
    mangled_ppc("?register_tracked_assert@@YAJPBDJ@Z");

    // $todo names for arguments

    long result = -1; // $todo NONE
    if(c_assert_handler_hook::active())
    {
        result = c_assert_handler_hook::get_handler()->register_tracked_assert(arg1, arg2);
    }
    return result;
};

void log_tracked_assert(long arg1)
{
    mangled_ppc("?log_tracked_assert@@YAXJ@Z");

    // $todo names for arguments

    if(c_assert_handler_hook::active())
    {
        c_assert_handler_hook::get_handler()->log_tracked_assert(arg1);
    }
};

bool assert_handle(char const * expression, char const * file, long line)
{
    mangled_ppc("?assert_handle@@YA_NPBD0J@Z");

    // $todo names for arguments

    bool result = false;
    if(c_assert_handler_hook::active())
    {
        result = c_assert_handler_hook::get_handler()->handle_assert(expression, file, line);
    }
    return result;
};

void assert_halt(void)
{
    mangled_ppc("?assert_halt@@YAXXZ");

    if(c_assert_handler_hook::active())
    {
        c_assert_handler_hook::get_handler()->halt_execution();
    }
    else
    {
        __debugbreak();
        exit(-1);
    }
};

bool assert_is_debugger_present(void)
{
    mangled_ppc("?assert_is_debugger_present@@YA_NXZ");

    bool result = false;
    if(c_assert_handler_hook::active())
    {
        result = c_assert_handler_hook::get_handler()->debugger_present();
    }
    return result;
};

void assert_handle_slim_constant(s_slim_assert_info const * info)
{
    mangled_ppc("?assert_handle_slim_constant@@YAXPBUs_slim_assert_info@@@Z");

    if(c_assert_handler_hook::active())
    {
        c_assert_handler_hook::get_handler()->handle_slim_assert_constant(info);
    }
};

void assert_handle_slim_dynamic(s_slim_assert_info const * info, c_assert_string const & arg2)
{
    mangled_ppc("?assert_handle_slim_dynamic@@YAXPBUs_slim_assert_info@@ABVc_assert_string@@@Z");

    if(c_assert_handler_hook::active())
    {
        c_assert_handler_hook::get_handler()->handle_slim_assert_dynamic(info, arg2);
    }
};

/* ---------- private code */

/* ---------- reverse engineering */
