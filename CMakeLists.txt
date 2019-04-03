cmake_minimum_required(VERSION 3.14)
project(google_test_probe)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set (GOOGLE_TEST_DIR "lib/googletest")
add_subdirectory(${GOOGLE_TEST_DIR})
include_directories(${GOOGLE_TEST_DIR}/googletest/include)
include_directories(${GOOGLE_TEST_DIR}/googlemock/include)

set(SOURCE_FILES Main.cpp app/Person.h tests/TestPerson.cpp app/Person.cpp Main.cpp)
add_executable(google_test_probe ${SOURCE_FILES} app/Person.h tests/TestPerson.cpp app/Person.cpp Main.cpp)
target_link_libraries(google_test_probe gtest gtest_main)
target_link_libraries(google_test_probe gmock gmock_main)
