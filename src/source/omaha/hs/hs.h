#pragma once
#ifndef __HS_H__
#define __HS_H__

/* ---------- headers */

/* ---------- constants */

enum e_hs_type; // $todo define here

/* ---------- definitions */

struct hs_global_external
{
    char const *name;
    e_hs_type type;
    void *pointer;
};

/* ---------- prototypes */

// void hs_initialize(void);
// bool hs_scenario_clean(struct scenario *);
// bool hs_scenario_merge(struct scenario *, struct scenario const *);
// void hs_find_or_add_tag_reference(struct scenario *, long);
// bool hs_scenario_postprocess(bool, bool, bool);
// void hs_initialize_for_new_map(void);
// void hs_initialize_for_new_map(bool, bool);
// void hs_dispose_from_old_map(void);
// void hs_reset_time(long);
// void hs_dispose(void);
// float hs_ticks_to_seconds(long);
// long hs_seconds_to_ticks(float);
// void hs_recompile(void);
// void hs_update(void);
// void hs_node_gc(void);
// struct hs_function_definition const * hs_function_get(short);
// short hs_find_script_by_name(long, short);
// short hs_find_tag_reference_by_index(long);
extern hs_global_external * hs_global_external_get(short global_index);
// extern short hs_global_get_type(short designator);
// extern char const * hs_global_get_name(short designator);
// extern short hs_script_find_parameter_by_name(long script_index, char const * name);
// short hs_find_global_by_name(char const *);
// short hs_find_function_by_name(char const *, short, short);
// short hs_verify_function(char const *, short, short);
// void hs_enumerate_special_form_names(void);
// void hs_tokens_enumerate_add_string(char const *);
// void hs_enumerate_script_type_names(void);
// void hs_enumerate_from_string_list(char const **, short, short);
// void hs_enumerate_type_names(void);
// void hs_enumerate_function_names(void);
// void hs_enumerate_script_names(void);
// void hs_enumerate_scenario_data_string_id(short, short, long);
// void hs_enumerate_block_data_string_id(struct s_tag_block const *, short, long);
// void hs_enumerate_variable_names(void);
// void hs_enumerate_scenario_data(short, short, long);
// void hs_enumerate_block_data(struct s_tag_block const *, short, long);
// void hs_enumerate_ai_names(void);
// void hs_enumerate_ai_command_list_names(void);
// void hs_enumerate_ai_command_script_names(void);
// void hs_enumerate_ai_behavior_names(void);
// void hs_enumerate_starting_profile_names(void);
// void hs_enumerate_conversation_names(void);
// void hs_enumerate_object_names(void);
// void hs_enumerate_trigger_volume_names(void);
// void hs_enumerate_cutscene_flag_names(void);
// void hs_enumerate_cutscene_camera_point_names(void);
// void hs_enumerate_cutscene_title_names(void);
// void hs_enumerate_cutscene_recording_names(void);
// void hs_enumerate_enum_skull_names(void);
// void hs_enumerate_enum_fp_evaluator_names(void);
// short hs_tokens_enumerate(char const *, long, char const **, short);
// bool sort_by_found_index(long, long, void const *);
// bool alphabetize(long, long, void const *);
// bool hs_initialize_source_file(struct hs_source_file *, struct s_file_reference *);
// bool hs_rebuild_source_file(struct hs_source_file *, struct s_file_reference const *);
// void hs_build_source_directory(char const *, char *, long, char *, long);
// bool hs_compile_register_error_listener(class c_hs_compile_error_listener *);
// void hs_compile_unregister_error_listener(class c_hs_compile_error_listener *);
// void hs_compile_source_error(char const *, char const *, char const *, char const *);
// void hs_help(char const *);
// void hs_doc(void);
// void hs_get_function_parameters_string(short, char *, long);
// void hs_get_function_documentation_string(short, char *, long);
// bool char_is_delimiter(char, char const *);
// void hs_validify_expression(char const *, char *, long);
// bool hs_compile_and_evaluate(enum e_event_level, char const *, char const *, bool);
// bool hs_compile_and_evaluate_no_networking(enum e_event_level, char const *, char const *, bool);
// void hs_make_interactive_scripts_deterministic(bool);
// bool hs_get_interactive_scripts_deterministic(void);
// void hs_set_executing_determinized_script(bool);
// bool hs_get_executing_determinized_script(void);
// bool hs_compile_and_evaluate_result(enum e_event_level, char const *, char const *, bool, bool, long *, enum e_hs_type *);
// void hs_result_coerce_to_native(long *, enum e_hs_type *);
// void hs_rebuild_and_compile(char *, long, bool);
// void resize_scenario_syntax_data(long);
// public: c_wrapped_array<char>::ctor<4096>(char (&)[4096]);

/* ---------- globals */

/* ---------- public code */

#endif // __HS_H__
