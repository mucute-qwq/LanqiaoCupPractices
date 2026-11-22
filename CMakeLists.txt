cmake_minimum_required(VERSION 3.10)
project(LanqiaoCupPractices)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(FILE_INDEX 0)

file(GLOB_RECURSE SOURCES "编程语言基础/*.c" "编程语言基础/*.cpp")

foreach(FILE ${SOURCES})
    cmake_path(GET FILE STEM LAST_ONLY FILE_WITHOUT_EXT)
    add_executable("file${FILE_INDEX}" ${FILE})
    math(EXPR FILE_INDEX "${FILE_INDEX} + 1")
endforeach()