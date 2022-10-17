cmake_minimum_required(VERSION 3.1.14)

set(CMAKE_INSTALL_PREFIX_PATH ./)
set(CMAKE_C_COMPILE "E:/Cplus/cygwin/bin/gcc.exe")
set(CMAKE_CXX_COMPILE "E:/Cplus/cygwin/bin/g++.exe")

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Werror")
project(main)
aux_source_directory (./ SRC_LIST)

add_executable(main ${SRC_LIST})
