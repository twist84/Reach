#pragma once
#ifndef __VERSION_H__
#define __VERSION_H__

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct s_project_version
{
  char const* build_string;
  char const* build_name;
  long build_number;
  char const* build_date;
  char const* build_time;
  char const* target_application;
  char const* target_variant;
  char const* target_configuration;
  char const* project_name;
  char const* project_xsync_directory;
  char const* project_branch_name;
  char const* project_executable_name;
};

/* ---------- prototypes */

extern bool version_is_tracked_build(void);
extern char const * version_get_full_string(void);
extern char const * version_get_build_string(void);
extern char const * version_get_build_name(void);
extern char const * version_get_build_identifier_string(void);
extern long version_get_build_number(void);
extern long version_get_build_number_sequence_identifier(void);
extern __int64 version_get_build_identifier(void);
extern char const * version_get_target_application(void);
extern char const * version_get_target_variant(void);
extern char const * version_get_target_configuration(void);
extern char const * version_get_project_name(void);
extern char const * version_get_project_xsync_directory(void);
extern char const * version_get_project_branch_name(void);
extern char const * version_get_project_executable_name(void);
extern void version_set_project(s_project_version const * version);

/* ---------- globals */

extern char const *const k_build_identifier_delimiter;

/* ---------- public code */

#endif // __VERSION_H__
