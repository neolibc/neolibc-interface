#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/*
    This skeleton code can be used to remove the C standard library
    dependency if needed.

    Simply uncomment any definitions that are missing on your target
    and provide a compatible type.

    For example, on a 32-bit x86 machine, you could hand-specify the
    uint16_t and uint32_t types by writing:

    typedef unsigned short uint16_t;
    typedef unsigned uint32_t;
*/

/*
    Boolean type

    The special semantics of a boolean type called _Bool are specified
    by the C standard, but the shorthand type "bool" is provided by a
    standard header. It could alternatively be defined here.
*/

// typedef bool bool;

/*
    Size types

    These types represent memory block sizes and pointer differences.
    The C standard library defines them as aliases for natural integer
    types, varying by architecture. Specify compatible size types here.
*/

// typedef ptrdiff_t ptrdiff_t;
// typedef size_t size_t;

/*
    Wide character type

    Wide characters are defined by the target and may only be 8 bits.
    Not all implementations are guaranteed compatible with any Unicode
    encoding. Specify the target's native wide character type here.
*/

// typedef wchar_t wchar_t;

/*
    Integers

    These are integers of a guaranteed number of bits. The types beginning
    with u are unsigned, and those beginning with i are signed. Specify the
    target's appropriate types for each size here.
*/

// typedef uint8_t uint8_t;
// typedef uint16_t uint16_t;
// typedef uint32_t uint32_t;
// typedef uint64_t uint64_t;

// typedef int8_t int8_t;
// typedef int16_t int16_t;
// typedef int32_t int32_t;
// typedef int64_t int64_t;
