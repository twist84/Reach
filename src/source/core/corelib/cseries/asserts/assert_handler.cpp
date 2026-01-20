#define __FILE_TAG_DEBUG_UNTRACKED_JUL_11_2011__ "C:\\SD\\Reach\\Publishing\\Main\\shared\\engine\\source\\core\\corelib\\cseries\\asserts\\assert_handler.cpp"
/* ---------- headers */

#include "core\corelib\cseries\asserts\assert_handler.h"
#include "core\corelib\cseries\cseries_asserts.h"

/* ---------- constants */

/* ---------- definitions */

c_assert_handler* c_assert_handler_hook::g_assert_handler;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

void c_assert_handler_hook::attach_handler(class c_assert_handler * handler)
{
    mangled_ppc("?attach_handler@c_assert_handler_hook@@SAXPAVc_assert_handler@@@Z");
    assert_tag_debug_untracked_jul_11_2011(22, g_assert_handler==NULL);
    assert_tag_debug_untracked_jul_11_2011(23, handler);

    g_assert_handler = handler;
};

void c_assert_handler_hook::detach_handler(class c_assert_handler * handler)
{
    mangled_ppc("?detach_handler@c_assert_handler_hook@@SAXPAVc_assert_handler@@@Z");
    assert_tag_debug_untracked_jul_11_2011(30, g_assert_handler==handler);
    assert_tag_debug_untracked_jul_11_2011(31, handler);

    g_assert_handler = NULL;
};

bool c_assert_handler_hook::active(void)
{
    mangled_ppc("?active@c_assert_handler_hook@@SA_NXZ");

    return g_assert_handler != NULL;
};

c_assert_handler * c_assert_handler_hook::get_handler(void)
{
    mangled_ppc("?get_handler@c_assert_handler_hook@@SAPAVc_assert_handler@@XZ");
    assert_tag_debug_untracked_jul_11_2011(46, g_assert_handler);

    return g_assert_handler;
};

/* ---------- private code */

/* ---------- reverse engineering */
