#include "alloc.h"

#include <stdio.h>
#include <stdlib.h>

static void default_oom_handler(void);

static const Allocator k_default_allocater = {
    .allocate = malloc,
    .clear_allocate = calloc,
    .reallocate = realloc,
    .free = free
};

static Allocator g_allocater;
static OutOfMemoryHandler g_oom_handler = default_oom_handler;

void set_oom_handler(OutOfMemoryHandler callback) {
    g_oom_handler = callback;
}

void restore_default_oom_handler(void) {
    g_oom_handler = default_oom_handler;
}

void set_global_allocator(Allocator alloc) {
    g_allocater = alloc;
}

void restore_default_allocator(void) {
    g_allocater = k_default_allocater;
}

void *allocate(size_t size) {
    void *allocated = g_allocater.allocate(size);
    if (!allocated) {
        g_oom_handler();
    }
    return allocated;
}

void *clear_allocate(size_t num_elements, size_t size) {
    void *clear_allocated = g_allocater.clear_allocate(num_elements, size);
    if (!clear_allocated) {
        g_oom_handler();
    }
    return clear_allocated;
}

void *reallocate(void *ptr, size_t size) {
    void *reallocated = g_allocater.reallocate(ptr, size);
    if (!reallocated) {
        g_oom_handler();
    }
    return reallocated;
}

void free(void *ptr) {
    g_allocater.free(ptr);
}

void default_oom_handler(void) {
    fputs("Warning: out of memory!", stderr);
}
