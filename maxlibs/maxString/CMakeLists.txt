project(maxString VERSION 0.0.1 LANGUAGES CXX)
#set(maxString_LIB_NAME "mString")
set(maxString_build_include_dirs
        "${maxString_SOURCE_DIR}/include")
add_library(maxString_dll SHARED src/mstring.cpp)
target_include_directories(maxString_dll PUBLIC ${maxString_build_include_dirs})
