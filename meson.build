project('compiler-infastructure', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

# These arguments are only used to build the shared library
# not the executables that use the library.
lib_args = ['-DBUILDING_COMPILER_INFASTRUCTURE']

shlib = shared_library('compiler_infastructure', 'compiler_infastructure.c', 'token.c',
  install : true,
  c_args : lib_args,
  gnu_symbol_visibility : 'hidden',
)

test_exe = executable('compiler_infastructure_test', 'compiler_infastructure_test.c',
  link_with : shlib)
test('compiler_infastructure', test_exe)

# Make this library usable as a Meson subproject.
compiler_infastructure_dep = declare_dependency(
  include_directories: include_directories('.'),
  link_with : shlib)

# Make this library usable from the system's
# package manager.
install_headers('compiler_infastructure.h', subdir : 'compiler_infastructure')

pkg_mod = import('pkgconfig')
pkg_mod.generate(
  name : 'compiler-infastructure',
  filebase : 'compiler_infastructure',
  description : 'Meson sample project.',
  subdirs : 'compiler_infastructure',
  libraries : shlib,
  version : '0.1',
)
