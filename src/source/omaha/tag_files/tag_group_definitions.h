#pragma once
#ifndef __TAG_GROUP_DEFINITIONS_H__
#define __TAG_GROUP_DEFINITIONS_H__

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct s_tag_struct_definition;
struct s_tag_block;
struct s_cache_file_builder_stream_context;

template<typename t_type> class c_basic_buffer;
class c_tag_allocator;

template<typename t_type>
struct s_tag_vtable_default_entry
{
    static t_type call(void);
};

struct s_tag_struct_legacy_vtable
{
    void (*byte_swap_proc)(void *);
    bool (*postprocess_proc)(long, void *, bool);
    bool (*new_proc)(void *);
    void (*delete_proc)(void *);
    bool (*copy_proc)(void const *, void *);
    char* (*format_proc)(long, __int64, s_tag_block *, long, char *, long);
    void (*write_to_cache_file_block)(long, s_tag_block *, s_cache_file_builder_stream_context const *, void **, void **);
};

struct s_tag_struct_manual_fixup_definition
{
    s_tag_struct_definition * from_struct_definition;
    bool (*fixup_proc)(c_basic_buffer<void> &, s_tag_struct_definition const *, c_basic_buffer<void> &, s_tag_struct_definition const *, c_tag_allocator *, bool);
};

class c_tag_struct_vtable_interface
{
public:
    virtual bool has_byte_swap_proc(void)const
    {
        return s_tag_vtable_default_entry<bool>::call();
    };
    virtual void byte_swap_block_proc(void *)const
    {
        s_tag_vtable_default_entry<void>::call();
    };
    virtual bool has_postprocess_proc(void)const
    {
        s_tag_vtable_default_entry<bool>::call();
    };
    virtual bool postprocess_thunk(long,void *,bool)const
    {
        return s_tag_vtable_default_entry<bool>::call();
    }
    virtual bool has_format_proc(void)const
    {
        return false;
    }
    virtual char * format_thunk(long,__int64,s_tag_block *,long,char *,long)const 
    {
        return s_tag_vtable_default_entry<char *>::call();
    };
    virtual bool has_on_delete_proc(void)const
    {
        return false;
    }
    virtual void on_delete_thunk(void *)const
    {
        return s_tag_vtable_default_entry<void>::call();
    };
    virtual bool has_on_new_proc(void)const
    {
        return false;
    }
    virtual bool on_new_thunk(void *)const
    {
        return s_tag_vtable_default_entry<bool>::call();
    };
    virtual bool has_on_copy_proc(void)const
    {
        return false;
    }
    virtual bool on_copy_thunk(void const *,void *)const
    {
        return s_tag_vtable_default_entry<bool>::call();
    };
    virtual bool has_write_to_cache_file_proc(void)const
    {
        return false;
    }
    virtual void write_to_cache_file_thunk(long,s_tag_block *,s_cache_file_builder_stream_context const *,void * *,void * *)const
    {
        return s_tag_vtable_default_entry<void>::call();
    };
    virtual bool has_block_does_not_exist_in_cache_file_proc(void)const
    {
        return false;
    }
    virtual bool block_does_not_exist_in_cache_file_thunk(void)const 
    {
        return s_tag_vtable_default_entry<bool>::call();
    };
    virtual bool has_fixup_old_struct_definition(void)const
    {
        return false;
    }
    virtual s_tag_struct_definition * get_fixup_source_definition_thunk(void)const
    {
        return s_tag_vtable_default_entry<s_tag_struct_definition *>::call();
    };
    virtual bool has_fixup_old_struct_proc(void)const
    {
        return false;
    }
    virtual bool fixup_old_struct_thunk(c_basic_buffer<void> &,s_tag_struct_definition const *,c_basic_buffer<void> &,s_tag_struct_definition const *,c_tag_allocator *,bool)const
    {
        return s_tag_vtable_default_entry<bool>::call();
    };
    virtual bool has_fixup_old_struct_from_disk_proc(void)const
    {
        return false;
    }
    virtual bool fixup_old_struct_from_disk_thunk(s_tag_struct_definition const *,c_basic_buffer<void> &,s_tag_struct_definition const *,c_basic_buffer<void> &,s_tag_struct_definition const *,c_tag_allocator *,bool)const
    {
        return s_tag_vtable_default_entry<bool>::call();
    };
};

class c_legacy_tag_struct_vtable_shim :
    public c_tag_struct_vtable_interface
{
public:
    virtual bool has_byte_swap_proc(void)const;
    virtual void byte_swap_block_proc(void *)const;
    virtual bool has_postprocess_proc(void)const;
    virtual bool postprocess_thunk(long,void *,bool)const;
    virtual bool has_format_proc(void)const;
    virtual char * format_thunk(long,__int64,s_tag_block *,long,char *,long)const ;
    virtual bool has_on_delete_proc(void)const;
    virtual void on_delete_thunk(void *)const;
    virtual bool has_on_new_proc(void)const;
    virtual bool on_new_thunk(void *)const;
    virtual bool has_on_copy_proc(void)const;
    virtual bool on_copy_thunk(void const *,void *)const;
    virtual bool has_write_to_cache_file_proc(void)const;
    virtual void write_to_cache_file_thunk(long,s_tag_block *,s_cache_file_builder_stream_context const *,void * *,void * *)const;
    virtual bool has_block_does_not_exist_in_cache_file_proc(void)const;
    virtual bool block_does_not_exist_in_cache_file_thunk(void)const ;
    virtual bool has_fixup_old_struct_definition(void)const;
    virtual s_tag_struct_definition * get_fixup_source_definition_thunk(void)const;
    virtual bool has_fixup_old_struct_proc(void)const;
    virtual bool fixup_old_struct_thunk(c_basic_buffer<void> &,s_tag_struct_definition const *,c_basic_buffer<void> &,s_tag_struct_definition const *,c_tag_allocator *,bool)const;
    virtual bool has_fixup_old_struct_from_disk_proc(void)const;
    virtual bool fixup_old_struct_from_disk_thunk(s_tag_struct_definition const *,c_basic_buffer<void> &,s_tag_struct_definition const *,c_basic_buffer<void> &,s_tag_struct_definition const *,c_tag_allocator *,bool)const;

    s_tag_struct_legacy_vtable const * m_struct_vtable;
    s_tag_struct_manual_fixup_definition const * m_manual_fixup;
};

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

#endif // __TAG_GROUP_DEFINITIONS_H__
