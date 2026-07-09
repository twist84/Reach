#pragma once
#ifndef __CSERIES_MACROS_H__
#define __CSERIES_MACROS_H__

/* ---------- headers */

/* ---------- constants */

#define NUMBEROF(_array) (sizeof(_array) / sizeof(_array[0]))
#define IN_RANGE_INCLUSIVE(value, begin, end) ((value) >= (begin) && (value) <= (end))

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

#endif // __CSERIES_MACROS_H__
