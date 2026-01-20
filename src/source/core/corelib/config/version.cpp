#define __FILE_TAG_DEBUG_UNTRACKED_JUL_11_2011__ "C:\\SD\\Reach\\Publishing\\Main\\shared\\engine\\source\\core\\corelib\\config\\version.cpp"
/* ---------- headers */

#include "core\corelib\config\version.h"
#include "core\corelib\cseries\cseries_asserts.h"
#include "core\corelib\cseries\cseries_string.h"
#include "core\corelib\cseries\cseries_macros.h"

/* ---------- constants */

/* ---------- definitions */

struct s_version_globals
{
    bool g_version_is_tracked_build;
    __int64 build_identifier;
    char build_identifier_string[0x200];
    char full_string[0x200];
};

/* ---------- prototypes */

/* ---------- globals */

char const *const k_build_identifier_delimiter = "__"; // "?k_build_identifier_delimiter@@3PBDB"

static s_project_version g_project_version;
static s_version_globals version_globals =
{
    /*.g_version_is_tracked_build=*/false,
    /*.build_identifier=*/-1,
    /*.build_identifier_string=*/"unknown",
    /*.full_string=*/"untracked"
};

/* ---------- public code */

bool version_is_tracked_build(void)
{
    mangled_ppc("?version_is_tracked_build@@YA_NXZ");

    return version_globals.g_version_is_tracked_build;
};

char const * version_get_full_string(void)
{
    mangled_ppc("?version_get_full_string@@YAPBDXZ");

    return version_globals.full_string;
};

char const * version_get_build_string(void)
{
    mangled_ppc("?version_get_build_string@@YAPBDXZ");

    return g_project_version.build_string;
};

char const * version_get_build_name(void)
{
    mangled_ppc("?version_get_build_name@@YAPBDXZ");

    return g_project_version.build_name;
};

char const * version_get_build_identifier_string(void)
{
    mangled_ppc("?version_get_build_identifier_string@@YAPBDXZ");

    return version_globals.build_identifier_string;
};

long version_get_build_number(void)
{
    mangled_ppc("?version_get_build_number@@YAJXZ");

    return g_project_version.build_number;
};

long version_get_build_number_sequence_identifier(void)
{
    mangled_ppc("?version_get_build_number_sequence_identifier@@YAJXZ");

    return 2; // $todo what is this?
};

__int64 version_get_build_identifier(void)
{
    mangled_ppc("?version_get_build_identifier@@YA_JXZ");

    return version_globals.build_identifier;
};

char const * version_get_target_application(void)
{
    mangled_ppc("?version_get_target_application@@YAPBDXZ");

    return g_project_version.target_application;
};

char const * version_get_target_variant(void)
{
    mangled_ppc("?version_get_target_variant@@YAPBDXZ");

    return g_project_version.target_variant;
};

char const * version_get_target_configuration(void)
{
    mangled_ppc("?version_get_target_configuration@@YAPBDXZ");

    return g_project_version.target_configuration;
};

char const * version_get_project_name(void)
{
    mangled_ppc("?version_get_project_name@@YAPBDXZ");

    return g_project_version.project_name;
};

char const * version_get_project_xsync_directory(void)
{
    mangled_ppc("?version_get_project_xsync_directory@@YAPBDXZ");

    return g_project_version.project_xsync_directory;
};

char const * version_get_project_branch_name(void)
{
    mangled_ppc("?version_get_project_branch_name@@YAPBDXZ");

    return g_project_version.project_branch_name;
};

char const * version_get_project_executable_name(void)
{
    mangled_ppc("?version_get_project_executable_name@@YAPBDXZ");

    return g_project_version.project_executable_name;
};

void version_set_project(s_project_version const * version)
{
    mangled_ppc("?version_set_project@@YAXPBUs_project_version@@@Z");

    assert_tag_debug_untracked_jul_11_2011(142, version);
    assert_tag_debug_untracked_jul_11_2011(143, version->build_number!=0);
    assert_tag_debug_untracked_jul_11_2011(144, g_project_version.build_number==0);

    g_project_version = *version;

    version_globals.g_version_is_tracked_build = g_project_version.build_number > 0;
    if(version_globals.g_version_is_tracked_build)
    {
        // $todo clean this up
        long _1_build_identifier_lo = g_project_version.build_number;
        long _0_build_identifier_hi = 2;
        version_globals.build_identifier = __int64(_1_build_identifier_lo) << 32 | _0_build_identifier_hi;

        csstrnzcpy(
            version_globals.build_identifier_string,
            g_project_version.build_string,
            NUMBEROF(version_globals.build_identifier_string));

        if ( g_project_version.build_name && *g_project_version.build_name )
        {
            csnzappendf(
                version_globals.build_identifier_string,
                NUMBEROF(version_globals.build_identifier_string),
                "%s%s",
                k_build_identifier_delimiter,
                g_project_version.build_name);
        }
    }
    else
    {
        version_globals.build_identifier = -1;
        csstrnzcpy(
            version_globals.build_identifier_string,
            "untracked",
            NUMBEROF(version_globals.build_identifier_string));
    }

    if ( g_project_version.target_variant && *g_project_version.target_variant )
    {
        csnzappendf(
            version_globals.build_identifier_string,
            NUMBEROF(version_globals.build_identifier_string),
            "%s%s",
            k_build_identifier_delimiter,
            g_project_version.target_variant);
    }

    if ( g_project_version.target_configuration && *g_project_version.target_configuration )
    {
        csnzappendf(
            version_globals.build_identifier_string,
            NUMBEROF(version_globals.build_identifier_string),
            "%s%s",
            k_build_identifier_delimiter,
            g_project_version.target_configuration);
    }

    if ( g_project_version.project_name && *g_project_version.project_name )
    {
        csstrnzcpy(
            version_globals.full_string,
            g_project_version.project_name,
            NUMBEROF(version_globals.full_string));
    }
    else 
    {
        csstrnzcpy(
            version_globals.full_string,
            "unknown",
            NUMBEROF(version_globals.full_string));
    }

    if ( g_project_version.target_application && *g_project_version.target_application )
    {
        csnzappendf(
            version_globals.full_string,
            NUMBEROF(version_globals.full_string),
            " %s",
            g_project_version.target_application);
    }

    if ( g_project_version.target_variant && *g_project_version.target_variant )
    {
        csnzappendf(
            version_globals.full_string,
            NUMBEROF(version_globals.full_string),
            " %s",
            g_project_version.target_variant);
    }

    if ( g_project_version.target_configuration && *g_project_version.target_configuration )
    {
        csnzappendf(
            version_globals.full_string,
            NUMBEROF(version_globals.full_string),
            " %s",
            g_project_version.target_configuration);
    }

    csstrnzcat(
        version_globals.full_string,
        " xenon",
        NUMBEROF(version_globals.full_string));

    if (version_globals.g_version_is_tracked_build)
    {
        csnzappendf(
            version_globals.full_string,
            NUMBEROF(version_globals.full_string),
            " %s",
            g_project_version.build_string);
        
        if ( g_project_version.build_name && *g_project_version.build_name )
        {
            csnzappendf(
                version_globals.full_string,
                NUMBEROF(version_globals.full_string),
                " %s",
                g_project_version.build_name);
        }
    }
    else
    {
        csnzappendf(
            version_globals.full_string,
            NUMBEROF(version_globals.full_string),
            " untracked");
    }

    if ( g_project_version.unknownC && *g_project_version.unknownC )
    {
        csnzappendf(
            version_globals.full_string,
            NUMBEROF(version_globals.full_string),
            " %s",
            g_project_version.unknownC);
    }

    if ( g_project_version.unknown10 && *g_project_version.unknown10 )
    {
        csnzappendf(
            version_globals.full_string,
            NUMBEROF(version_globals.full_string),
            " %s",
            g_project_version.unknown10);
    }
};

/* ---------- private code */

/* ---------- reverse engineering */
