include(CTest)

add_executable(hw05_test hw05_test.cpp)
add_executable(my_test my_test.cpp)

target_link_libraries(hw05_test
    PRIVATE
    GTest::gtest
    hw05
)
target_link_libraries(my_test
    PRIVATE
    GTest::gtest
    hw05
)

add_test(hw05_tests hw05_test)
add_test(my_tests my_test)
