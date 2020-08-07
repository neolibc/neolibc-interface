#include "types.h"

typedef struct {
    void *(*allocate)(size_t size);
    void *(*reallocate)(void *ptr, size_t size);
    void (*free)(void *ptr);
} Allocator;

typedef void (*OutOfMemoryHandler)(void);

void set_global_allocator(Allocator alloc);
void restore_default_allocator(void);

void set_oom_handler(OutOfMemoryHandler callback);
void restore_default_oom_handler(void);

void *allocate(size_t size);
void *reallocate(void *ptr, size_t size);
void free(void *ptr);
