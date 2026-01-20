#ifndef __CSERIES_MEMORY_H__
#define __CSERIES_MEMORY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

bool memory_is_filled_with(void const * source, size_t size, unsigned char c);
bool memory_is_zeroed(const void* source, size_t size);
void const * offset_pointer(const void* pointer, long offset); // $todo is this intptr_t equivelant?
void memmove_guarded(void* destination, const void* source, size_t size, const void* bounds_start, size_t bounds_size);
void * memcpy_big_crossplatform_internal(void * destination, void const * source, size_t size);
void * memset_big_crossplatform_internal(void * destination, int c, size_t size);

extern "C"
{
    void* csmemcpy(void* destination, const void* source, size_t size);
    void* csmemmove(void* destination, const void* source, size_t size);
    void* csmemset(void* buffer, int c, size_t size);
    int csmemcmp(const void* p1, const void* p2, size_t size);
}

/* ---------- globals */

/* ---------- public code */

inline bool pointer_is_aligned(void const *, long)
{
    mangled_ppc("?pointer_is_aligned@@YA_NPBXJ@Z");

    NOT_IMPLEMENTED;
};

inline unsigned long address_from_pointer(void const *)
{
    mangled_ppc("?address_from_pointer@@YAKPBX@Z");

    NOT_IMPLEMENTED;
};

inline bool address_is_aligned(unsigned long, long)
{
    mangled_ppc("?address_is_aligned@@YA_NKJ@Z");

    NOT_IMPLEMENTED;
};

inline void * pointer_from_address(unsigned long)
{
    mangled_ppc("?pointer_from_address@@YAPAXK@Z");

    NOT_IMPLEMENTED;
};

inline void * offset_pointer(void * pointer, long offset)
{
    mangled_ppc("?offset_pointer@@YAPAXPAXJ@Z");

    NOT_IMPLEMENTED;
};

inline void const * offset_pointer(const void* pointer, long offset)
{
    mangled_ppc("?offset_pointer@@YAPBXPBXJ@Z");

    return pointer_from_address(address_from_pointer(pointer) + offset);
};

#endif // __CSERIES_MEMORY_H__
