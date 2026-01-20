#define __FILE_TAG_DEBUG_UNTRACKED_JUL_11_2011__ "C:\\SD\\Reach\\Publishing\\Main\\shared\\engine\\source\\core\\corelib\\cseries\\events\\event_handler.cpp"
/* ---------- headers */

#include "core\corelib\cseries\events\event_handler.h"
#include "core\corelib\cseries\cseries_asserts.h"

/* ---------- constants */

/* ---------- definitions */

c_event_handler* c_event_handler_hook::g_event_handler;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

void c_event_handler_hook::attach_handler(class c_event_handler * handler)
{
    mangled_ppc("?attach_handler@c_event_handler_hook@@SAXPAVc_event_handler@@@Z");
    assert_tag_debug_untracked_jul_11_2011(22, g_event_handler==NULL);
    assert_tag_debug_untracked_jul_11_2011(23, handler);

    g_event_handler = handler;
};

void c_event_handler_hook::detach_handler(class c_event_handler * handler)
{
    mangled_ppc("?detach_handler@c_event_handler_hook@@SAXPAVc_event_handler@@@Z");
    assert_tag_debug_untracked_jul_11_2011(30, g_event_handler==handler);
    assert_tag_debug_untracked_jul_11_2011(31, handler);

    g_event_handler = NULL;
};

bool c_event_handler_hook::active(void)
{
    mangled_ppc("?active@c_event_handler_hook@@SA_NXZ");

    return g_event_handler != NULL;
};

c_event_handler * c_event_handler_hook::get_handler(void)
{
    mangled_ppc("?get_handler@c_event_handler_hook@@SAPAVc_event_handler@@XZ");
    assert_tag_debug_untracked_jul_11_2011(44, g_event_handler);

    return g_event_handler;
};

/* ---------- private code */

/* ---------- reverse engineering */
