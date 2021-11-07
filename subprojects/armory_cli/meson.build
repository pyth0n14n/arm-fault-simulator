project('ARMORY command line interface', 'cpp',
 version : '0.1',
 default_options : ['warning_level=3', 'cpp_std=c++17'])

libarmory_dep = subproject('armory').get_variable('libarmory_dep')

incdir = include_directories('include')

src = []
subdir('src')

libarmory_cli = static_library('armory_cli', sources: src, include_directories : incdir, dependencies: libarmory_dep)
libarmory_cli_dep = declare_dependency(include_directories : incdir, link_with: libarmory_cli, dependencies: libarmory_dep)
