#define __FILE_TAG_DEBUG_UNTRACKED_JUL_11_2011__ "C:\\SD\\Reach\\Publishing\\Main\\shared\\engine\\source\\foundation\\baselib\\algorithms\\qsort.cpp"
/* ---------- headers */

#include "foundation\baselib\algorithms\qsort.h"
#include "core\corelib\cseries\cseries_asserts.h"

/* ---------- constants */

/* ---------- definitions */

template<typename t_type>
class templated_sort
{
    public:
        void qsort(t_type *, long, bool (*)(t_type, t_type, void const *), void const *);
        static void shortsort(t_type *, t_type *, bool (*)(t_type, t_type, void const *), void const *);
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

void qsort_2byte(void *,long,bool (*const)(short,short,void const *),void const *)
{
    mangled_ppc("?qsort_2byte@@YAXPAXJQ6A_NFFPBX@Z1@Z");

    NOT_IMPLEMENTED;
}

void qsort_4byte(void *,long,bool (*const)(long,long,void const *),void const *)
{
    mangled_ppc("?qsort_4byte@@YAXPAXJQ6A_NJJPBX@Z1@Z");

    NOT_IMPLEMENTED;
}

void qsort_elements(void *,long,unsigned int,bool (*const)(void const *,void const *,void const *),void const *)
{
    mangled_ppc("?qsort_elements@@YAXPAXJIQ6A_NPBX11@Z1@Z");

    NOT_IMPLEMENTED;
}

void insertion_sort_elements(char *,char *,unsigned int,bool,bool (*const)(void const *,void const *,void const *),void const *)
{
    mangled_ppc("?insertion_sort_elements@@YAXPAD0I_NQ6A_NPBX22@Z2@Z");

    NOT_IMPLEMENTED;
    
    unsigned int c;

    assert_tag_debug_untracked_jul_11_2011(496, c > 0);
}

template<> void templated_sort<short>::qsort(short *, long, bool (*)(short, short, void const *), void const *)
{
    mangled_ppc("?qsort@?$templated_sort@F@@QAAXPAFJP6A_NFFPBX@Z1@Z");

    NOT_IMPLEMENTED;
};

template<> void templated_sort<long>::qsort(long *, long, bool (*)(long, long, void const *), void const *)
{
    mangled_ppc("?qsort@?$templated_sort@J@@QAAXPAJJP6A_NJJPBX@Z1@Z");

    NOT_IMPLEMENTED;
};

template<> void templated_sort<short>::shortsort(short *, short *, bool (*)(short, short, void const *), void const *)
{
    mangled_ppc("?shortsort@?$templated_sort@F@@SAXPAF0P6A_NFFPBX@Z1@Z");

    NOT_IMPLEMENTED;
};

template<> void templated_sort<long>::shortsort(long *, long *, bool (*)(long, long, void const *), void const *)
{
    mangled_ppc("?shortsort@?$templated_sort@J@@SAXPAJ0P6A_NJJPBX@Z1@Z");

    NOT_IMPLEMENTED;
};

/* ---------- private code */

/* ---------- reverse engineering */
