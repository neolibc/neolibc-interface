project(
    'neolibc',
    'c',
    default_options: ['default_library=static', 'c_std=c11'],
    license: 'MIT'
)

compiler = meson.get_compiler('c').get_id()

incdir = include_directories('include')

sources = files([
    'src/alloc.c'
])

library_args = {
    'include_directories': incdir,
}

if compiler == 'gcc'
    message('Using GNU C11 standard.')
    library_args += {'override_options': 'c_std=gnu11'}
endif

library('neolibc', sources, kwargs: library_args)
