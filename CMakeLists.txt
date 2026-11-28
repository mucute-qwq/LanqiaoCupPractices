cmake_minimum_required(VERSION 3.28)

include(FetchContent)
FetchContent_Declare(xclang
    GIT_REPOSITORY https://github.com/clice-io/xclang
    GIT_TAG latest)
FetchContent_MakeAvailable(xclang)
set(XCLANG_CMAKE_FILE "${xclang_SOURCE_DIR}/packages/cmake/xclang.cmake")
file(READ "${XCLANG_CMAKE_FILE}" _xclang_content)
string(REGEX REPLACE
    "unknown-linux-gnu"
    "unknown-linux-musl"
    _xclang_content_modified
    "${_xclang_content}"
)
file(WRITE "${XCLANG_CMAKE_FILE}" "${_xclang_content_modified}")
include(${XCLANG_CMAKE_FILE})

project(LanqiaoCupPractices)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(FILE_INDEX 0)

find_package(xclang REQUIRED CONFIG)

file(GLOB_RECURSE SOURCES "编程语言基础/*.c" "编程语言基础/*.cpp")

foreach(FILE ${SOURCES})
    cmake_path(GET FILE STEM LAST_ONLY FILE_WITHOUT_EXT)
    add_executable("file${FILE_INDEX}" ${FILE})
    target_link_libraries("file${FILE_INDEX}" PRIVATE xclang::std)
    math(EXPR FILE_INDEX "${FILE_INDEX} + 1")
endforeach()