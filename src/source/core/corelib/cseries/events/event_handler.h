#pragma once
#ifndef __EVENT_HANDLER_H__
#define __EVENT_HANDLER_H__

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class c_event_handler;

class c_event_handler_hook
{
private: 
    static c_event_handler* g_event_handler;
public:
    static void attach_handler(c_event_handler * handler);
    static void detach_handler(c_event_handler * handler);
    static bool active(void);
    static c_event_handler * get_handler(void);
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

#endif // __EVENT_HANDLER_H__

