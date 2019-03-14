#ifndef ATOMIC_WIN32_H
#define ATOMIC_WIN32_H

#include <intrin.h>

static SW_INLINE bool
atomic_swap_bool(volatile bool *obj, bool desired)
{
    return (_InterlockedExchange8(obj, desired));
}

#endif
