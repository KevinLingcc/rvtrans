project('rvtrans', ['c', 'cpp','python'],
  version : '0.1',
  default_options : ['warning_level=3'])

public_c_cpp_compile_argument=["-Wall", "-Wextra"]
add_global_arguments(public_c_cpp_compile_argument, language: 'cpp')
add_global_arguments(public_c_cpp_compile_argument, language: 'c')



c_exe = executable('rvtrans_c', 'rvtrans_c.c',
  install : true)

test('basic', c_exe)





cpp_exe = executable('rvtrans_cpp', 'rvtrans_cpp.cpp',
  install : true)

test('basic', cpp_exe)
