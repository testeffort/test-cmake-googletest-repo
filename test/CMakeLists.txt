include_directories(${gtest_SOURCE_DIR}/include)

add_executable(SomeClassTest SomeClassTest.cpp)
target_link_libraries(SomeClassTest gtest_main)
target_link_libraries(SomeClassTest SomeClass)

if(CMAKE_COMPILER_IS_GNUC OR CMAKE_COMPILER_IS_GNUCXX)
  target_link_libraries(SomeClassTest pthread)
endif(CMAKE_COMPILER_IS_GNUC OR CMAKE_COMPILER_IS_GNUCXX)

add_test(SomeClassTest SomeClassTest.cpp)
