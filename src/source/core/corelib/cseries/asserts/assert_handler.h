#pragma once
#ifndef __ASSERT_HANDLER_H__
#define __ASSERT_HANDLER_H__

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class c_assert_handler
{
public: 
    virtual long register_tracked_assert(char const *,long) = 0;
    virtual void log_tracked_assert(long) = 0;
    virtual bool debugger_present(void) = 0;
    virtual bool handle_assert(char const * expression, char const * file, long line) = 0;
    virtual void halt_execution(void) = 0;
    virtual void handle_slim_assert_constant(struct s_slim_assert_info const * info) = 0;
    virtual void handle_slim_assert_dynamic(struct s_slim_assert_info const * info,class c_assert_string const &) = 0;
};

class c_assert_handler_hook
{
private: 
    static c_assert_handler* g_assert_handler;
public:
    static void attach_handler(c_assert_handler * handler);
    static void detach_handler(c_assert_handler * handler);
    static bool active(void);
    static c_assert_handler * get_handler(void);
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

#endif // __ASSERT_HANDLER_H__
