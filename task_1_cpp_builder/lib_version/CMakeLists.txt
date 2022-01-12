cmake_minimum_required(VERSION 3.2)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(LIB_VERSION 0.0.${PATCH_VERSION})

project(lib_version VERSION ${LIB_VERSION})

configure_file(src/version_consts.hpp.in src/version_consts.hpp)

add_library(lib_version src/version.cpp)

target_include_directories(lib_version
    PRIVATE src/ include/ "${CMAKE_BINARY_DIR}"
)

if (MSVC)
    target_compile_options(lib_version PRIVATE
        /W4
    )
else ()
    target_compile_options(lib_version PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
endif()
