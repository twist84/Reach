/* ---------- headers */

#define NULL 0

#include <ctype.h>
#include <string.h>
#include <vadefs.h>
#include <stdarg.h>
#include <stdio.h>

//struct s_slim_assert_info
//{
//	const char* expression;
//	const char* file;
//	unsigned __int32 line : 31;
//	unsigned __int32 fatal : 1;
//};
//extern void handle_slim_assert(struct s_slim_assert_info const* info);
//#define assert(expression) if(!(expression)) handle_slim_assert();


#define assert(expression) if(!(expression) && !assert_handle(#expression, __FILE__, __LINE__)) { if(assert_is_debugger_present()) { __trap(); } else { assert_halt(); } }
#define assert_decomp(expression, file, line) if(!(expression) && !assert_handle(#expression, file, line)) { if(assert_is_debugger_present()) { __trap(); } else { assert_halt(); } }

extern bool assert_handle(char const *,char const *,long);
extern bool assert_is_debugger_present(void);
extern void assert_halt(void);
extern long cvsnzprintf(char * buffer, size_t size, char const * format, va_list arglist);

extern "C" size_t strlen_debug(char const* str);
extern unsigned int csstrnlen(char const *, unsigned int);
extern "C" void* csmemset(void *buffer, int value, size_t size);

#define NULL 0
#define __trap() __debugbreak()

#define __FILE_TAG_DEBUG_UNTRACKED_JUL_11_2011__ "C:\\SD\\Reach\\Publishing\\Main\\shared\\engine\\source\\core\\corelib\\cseries\\cseries_string.cpp"
#define assert_tag_debug_untracked_jul_11_2011(LINE, ...) if(!(__VA_ARGS__) && !assert_handle(#__VA_ARGS__, __FILE_TAG_DEBUG_UNTRACKED_JUL_11_2011__, LINE)) { if(assert_is_debugger_present()) { __trap(); } else { assert_halt(); } }

const size_t k_maximum_memcmp_size = 0x20000000;
const size_t k_maximum_memcpy_size = 0x20000000;
const size_t k_maximum_memmove_size = 0x20000000;
const size_t k_maximum_memset_size = 0x80000000;
const size_t k_maximum_string_size = 0x100000;

template<typename t_type>
t_type int_min(t_type const & a, t_type const & b)
{
    return a > b ? b : a;
}

template<typename t_type>
t_type int_min3(t_type const & a, t_type const & b, t_type const & c)
{
    return int_min(a, int_min(b, c));
}

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

bool ascii_islower(long character_code)
{
    bool result = bool(character_code >= 'a' && character_code <= 'z');
    return result;
}

bool ascii_isupper(long character_code)
{
    bool result = bool(character_code >= 'A' && character_code <= 'Z');
    return result;
}

bool ascii_isdigit(long character_code)
{
    bool result = bool(character_code >= '0' && character_code <= '9');
    return result;
}

bool ascii_isalnum(long character_code)
{
    bool result = bool(ascii_isupper(character_code) || ascii_islower(character_code) || ascii_isdigit(character_code));
    return result;
}

bool ascii_isspace(long character_code)
{
    bool result = bool(character_code >= '\t' && character_code <= '\r' || character_code == ' ');
    return result;
}

bool ascii_isspace(char character_code)
{
    return ascii_isspace(static_cast<long>(static_cast<unsigned char>(character_code)));
}

long ascii_tolower(long character_code)
{
    long result = ascii_isupper(character_code) ? character_code + 32 : character_code;

    return result;
}

long ascii_toupper(long character_code)
{
    long result = ascii_islower(character_code) ? character_code - 32 : character_code;

    return result;
}

char* ascii_strnupr(char* string, size_t count)
{
    assert_tag_debug_untracked_jul_11_2011(134, string!=NULL || count==0);
    assert_tag_debug_untracked_jul_11_2011(135, count>=0 && count<k_maximum_string_size);

    for(long character_index = 0; character_index < count && string[character_index]; character_index++)
    {
        if(ascii_islower(string[character_index]))
        {
            string[character_index] -= 32;
        }
    }

    return string;
}

char* ascii_strnlwr(char* string, size_t count)
{
    assert_tag_debug_untracked_jul_11_2011(152, string!=NULL || count==0);
    assert_tag_debug_untracked_jul_11_2011(153, count>=0 && count<k_maximum_string_size);

    for(long character_index = 0; character_index < count && string[character_index]; character_index++)
    {
        if(ascii_isupper(string[character_index]))
        {
            string[character_index] += 32;
        }
    }

    return string;
}

#define UINT_MAX 0xFFFFFFFFu

extern long ascii_strnicmp(char const *, char const *, unsigned int);

unsigned int ascii_stristr(char const * look_inside, char const * look_for)
{
    unsigned int index_of_substring = UINT_MAX;
    
    assert_tag_debug_untracked_jul_11_2011(173, look_inside && look_for);

    size_t look_for_length = strlen_debug(look_for);
    if(look_for_length == 0)
    {
        index_of_substring = 0;
    }
    else
    {
        long a = ascii_tolower(*look_for);
        for(size_t character_index = 0; ; character_index++)
        {
            long b = ascii_tolower(look_inside[character_index]);
            if(!b)
            {
                break;
            }
            if ( a == b && !ascii_strnicmp(&look_inside[character_index], look_for, look_for_length) )
            {
                index_of_substring = character_index;
                break;
            }
        }
    }

    return index_of_substring;
}

long ascii_strnicmp(char const* s1, char const* s2, size_t maximum_character_comparisons)
{
    // mangled_assert_ppc("?ascii_strnicmp@@YAHPEBD0_K@Z");

    long result = 0;

    assert_tag_debug_untracked_jul_11_2011(215, s1 && s2);
    assert_tag_debug_untracked_jul_11_2011(216, maximum_character_comparisons>=0 && maximum_character_comparisons<k_maximum_string_size);

    for(long character_index = 0; character_index < maximum_character_comparisons; character_index++)
    {
        long a = ascii_tolower(s1[character_index]);
        long b = ascii_tolower(s2[character_index]);    
        
        if ( !a )
        {
            result = b ? -1 : 0;
            break;
        }
        else if(!b)
        {
            result = a ? 1 : 0;
            break;
        }
        else if(a != b)
        {
            result = a > b ? 1 : -1;
            break;
        }
    }

    return result;
}

long ascii_stricmp(char const * s1, char const * s2)
{
    long result = 0;

    assert_tag_debug_untracked_jul_11_2011(253, s1 && s2);

    for(long character_index = 0; ; character_index++)
    {
        long a = ascii_tolower(s1[character_index]);
        long b = ascii_tolower(s2[character_index]);    
        
        if (!a)
        {
            result = b ? -1 : 0;
            break;
        }
        else if(!b)
        {
            result = a ? 1 : 0;
            break;
        }
        else if(a != b)
        {
            result = a > b ? 1 : -1;
            break;
        }
    }

    return result;
}

long csstricmp(char const * s1, char const * s2)
{
    long result = 0;
    long character_index = 0;

    assert_tag_debug_untracked_jul_11_2011(293, s1 && s2);

    while(true)
    {
        long a = towlower(static_cast<short>(s1[character_index]));
        long b = towlower(static_cast<short>(s2[character_index]));    
        
        if (!a)
        {
            result = b ? -1 : 0;
            break;
        }
        else if(!b)
        {
            result = a ? 1 : 0;
            break;
        }
        else if(a != b)
        {
            result = a > b ? 1 : -1;
            break;
        }

        character_index++;
    }

    return result;
}

long csstrnicmp(char const* s1, char const* s2, size_t count)
{
    long result = 0;
    long character_index;

    assert_tag_debug_untracked_jul_11_2011(330, s1 && s2);

    for(character_index = 0; character_index != count; character_index++)
    {
        long a = towlower(static_cast<short>(s1[character_index]));
        long b = towlower(static_cast<short>(s2[character_index]));    
        
        if (!a)
        {
            result = b ? -1 : 0;
            break;
        }
        else if(!b)
        {
            result = a ? 1 : 0;
            break;
        }
        else if(a != b)
        {
            result = a > b ? 1 : -1;
            break;
        }
    }

    return result;
}

char * csstristr(char const * haystack, char const * needle)
{
    char c;
    char sc;
    unsigned long len;
    
    c = needle[0];
    needle++;
    if(c)
    {
        len = strlen_debug(needle);
        do
        {
            sc = *haystack++;
            if(!sc)
            {
                return 0;
            }
        }
        while(tolower(sc) != tolower(c) || csstrnicmp(haystack, needle, len));
        --haystack;
    }
    return const_cast<char*>(haystack);
}

char * csstrnzcpy(char * s1, char const * s2, size_t s1_size)
{
    assert_tag_debug_untracked_jul_11_2011(398, s1 && s2);
    assert_tag_debug_untracked_jul_11_2011(399, s1_size>0 && s1_size<=k_maximum_string_size);

    size_t len = csstrnlen(s2, s1_size);
    strncpy_s(s1, s1_size, s2, _TRUNCATE);

    if(len < s1_size)
    {
        csmemset(&s1[len], 0, s1_size - len);
    }
    else
    {
        s1[s1_size - 1] = 0;
    }

    return s1;
}

char* csstrnzcat(char* s1, char const* s2, size_t s1_size)
{
    assert_tag_debug_untracked_jul_11_2011(429, s1 && s2);
    assert_tag_debug_untracked_jul_11_2011(430, s1_size>0 && s1_size<=k_maximum_string_size);

	size_t s1_len = csstrnlen(s1, s1_size);
	size_t s2_len = csstrnlen(s2, s1_size);
	strncpy_s(&s1[s1_len], s1_size - s1_len, s2, _TRUNCATE);
	if (s1_len + s2_len < s1_size)
	{
		csmemset(&s1[s1_len + s2_len], 0, s1_size - (s1_len + s2_len));
	}
	else
	{
		s1[s1_size - 1] = 0;
	}
	return s1;
}

char * csstrnzncat(char * s1, char const * s2, size_t s1_size, size_t count)
{
    assert_tag_debug_untracked_jul_11_2011(463, s1 && s2);
    assert_tag_debug_untracked_jul_11_2011(464, s1_size>0 && s1_size<=k_maximum_string_size);
    assert_tag_debug_untracked_jul_11_2011(465, count>0 && count<=k_maximum_string_size);

	size_t s1_len = csstrnlen(s1, s1_size);
	size_t s2_len = csstrnlen(s2, s1_size);
    size_t length = int_min3<size_t>(count, s2_len, s1_size - s1_len - 1);
    if(length > 0)
    {
        strncpy_s(&s1[s1_len], s1_size - s1_len, s2, length);
        if (s1_len + length < s1_size)
        {
            csmemset(&s1[s1_len + length], 0, s1_size - (s1_len + length));
        }
        else
        {
            s1[s1_size - 1] = 0;
        }
    }
	return s1;
}

extern size_t csstrnlen(char const * s, size_t size)
{
    size_t length = 0;
    
    assert_tag_debug_untracked_jul_11_2011(498, s);
    assert_tag_debug_untracked_jul_11_2011(499, size>=0 && size<=k_maximum_string_size);

    while(length < size && *s++ != 0)
    {
        length++;
    }
    return length;
}

char * csstrnupr(char * s, unsigned int size)
{
    size_t len = size;

    assert_tag_debug_untracked_jul_11_2011(515, s);
    assert_tag_debug_untracked_jul_11_2011(516, size>=0 && size<=k_maximum_string_size);

    for(char * ptr = s; len > 0 && *ptr; --len, ++ptr)
    {
        *ptr = toupper(*ptr);
    }

    return s;
}

char * csstrnlwr(char * s, unsigned int size)
{
    size_t len = size;

    assert_tag_debug_untracked_jul_11_2011(532, s);
    assert_tag_debug_untracked_jul_11_2011(533, size>=0 && size<=k_maximum_string_size);

    for(char * ptr = s; len > 0 && *ptr; --len, ++ptr)
    {
        *ptr = tolower(*ptr);
    }

    return s;
}

char * csnzappendf(char * buffer, size_t size, char const * format, ...)
{
    assert_tag_debug_untracked_jul_11_2011(567, size>0 && size<=k_maximum_string_size);
    
    size_t current_length = strlen_debug(buffer);

    assert_tag_debug_untracked_jul_11_2011(570, current_length>=0 && current_length<size);

    va_list arglist;
    va_start(arglist, format);
    cvsnzprintf(&buffer[current_length], size - current_length, format, arglist);
    va_end(arglist);

    return buffer;
}

extern long cvsnzprintf(char * buffer, size_t size, char const * format, va_list arglist)
{
    assert_tag_debug_untracked_jul_11_2011(587, buffer);
    assert_tag_debug_untracked_jul_11_2011(588, format);
    assert_tag_debug_untracked_jul_11_2011(589, size>0 && size<=k_maximum_string_size);
    
    long chars_written = vsnprintf_s(buffer, size, size - 1, format, arglist);
    buffer[size - 1] = 0;

    return chars_written;
}

char * csnzprintf(char * buffer, size_t size, char const *format, ...)
{
    va_list arglist;
    va_start(arglist, format);
    cvsnzprintf(buffer, size, format, arglist);
    va_end(arglist);

    return buffer;
}

struct csstrtok_data
{
    char * next_string; // 0x0
};

enum e_csstrtok_delimiter_mode
{
    _cstrtok_delimiter_mode_default,
    _cstrtok_delimiter_mode_skip,
    k_cstrtok_delimiter_mode_count,
};

#define VALID_INDEX(index, count) ((index) >= 0 && (index) < (count))
#define VALID_COUNT(index, count) ((index) >= 0 && (index) <= (count))

char * csstrtok(char * s, char const * delimiters, enum e_csstrtok_delimiter_mode delimiter_mode, struct csstrtok_data * data)
{
    char * result;
    char * next_string;

    assert_tag_debug_untracked_jul_11_2011(612, data);
    assert_tag_debug_untracked_jul_11_2011(613, VALID_INDEX(delimiter_mode, k_cstrtok_delimiter_mode_count));
    assert_tag_debug_untracked_jul_11_2011(614, delimiters);

    next_string = s == NULL ? data->next_string : s;
    if ( delimiter_mode == _cstrtok_delimiter_mode_skip )
    {
        if(next_string)
        {
            next_string = &next_string[strspn(next_string, delimiters)];
            if(!*next_string)
            {
                next_string = NULL;
            }
        }
    }
    result = next_string;
    if(next_string)
    {
            next_string = strpbrk(next_string, delimiters);
            if(next_string)
            {
                *next_string++ = 0;
            }
    }  
    data->next_string = next_string;

    return result;
}

extern "C" int strcmp_debug(const char* s1, const char* s2)
{
    assert_tag_debug_untracked_jul_11_2011(756, s1 && s2);
    return strcmp(s1, s2);
}

extern "C" int strncmp_debug(const char* s1, const char* s2, size_t size)
{
    assert_tag_debug_untracked_jul_11_2011(767, s1 && s2);
    assert_tag_debug_untracked_jul_11_2011(768, size>=0 && size<=k_maximum_string_size);
    return strncmp(s1, s2, size);
}

extern "C" size_t strlen_debug(const char* s)
{
    assert_tag_debug_untracked_jul_11_2011(779, s);
    size_t length = strlen(s);
    assert_tag_debug_untracked_jul_11_2011(781, length>=0 && length<k_maximum_string_size);
    return length;
}

extern "C" char* strstr_debug(const char* haystack, const char* needle)
{
    assert_tag_debug_untracked_jul_11_2011(793, haystack);
    assert_tag_debug_untracked_jul_11_2011(794, needle);
    char* substring = const_cast<char*>(strstr(haystack, needle));
    assert_tag_debug_untracked_jul_11_2011(796, substring==NULL || (substring>=haystack && substring<haystack+k_maximum_string_size));
    return substring;
}

extern "C" char* strchr_debug(const char* haystack, int needle)
{
    assert_tag_debug_untracked_jul_11_2011(808, haystack);
    char* substring = const_cast<char*>(strchr(haystack, needle));
    assert_tag_debug_untracked_jul_11_2011(810, substring==NULL || (substring>=haystack && substring<haystack+k_maximum_string_size));
    return substring;
}

extern "C" char* strrchr_debug(const char* haystack, int needle)
{
    assert_tag_debug_untracked_jul_11_2011(822, haystack);
    char* substring = const_cast<char*>(strrchr(haystack, needle));
    assert_tag_debug_untracked_jul_11_2011(824, substring==NULL || (substring>=haystack && substring<haystack+k_maximum_string_size));
    return substring;
}


/* ---------- private code */

/* ---------- reverse engineering */
