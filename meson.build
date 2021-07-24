project('ARMORY_EXAMPLE', 'cpp',
 version : '0.1',
 default_options : ['warning_level=3', 'cpp_std=c++17', 'b_lto=true'])

message(get_option('buildtype'), 'build')

libfault_simulator_dep = subproject('fault_simulator').get_variable('libfault_simulator_dep')

executable('armory_example',
    sources: files('src/main.cpp'),
    include_directories : include_directories('include'),
    dependencies: libfault_simulator_dep)

