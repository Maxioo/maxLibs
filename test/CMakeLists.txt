add_executable(test maxString_test/mstring_test.cpp)
target_link_libraries(test maxString_dll gtest_main)
add_test(NAME example_test COMMAND test)