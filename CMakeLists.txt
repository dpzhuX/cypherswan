cmake_minimum_required(VERSION 3.0)
project(CypherSwan)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -O3 -fPIC -ggdb -std=c++11 -Wall -Wno-deprecated -Werror -Wno-unused-function -Wno-builtin-macro-redefined -Wno-deprecated-declarations")
set(CMAKE_C_FLAGS "$ENV{CXXFLAGS} -rdynamic -O3 -fPIC -ggdb -std=c11 -Wall -Wno-deprecated -Werror -Wno-unused-function -Wno-builtin-macro-redefined -Wno-deprecated-declarations")

# Set up directories
set(SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(TEST_DIR "${CMAKE_CURRENT_SOURCE_DIR}/tests")


# Include directories
include_directories(${INCLUDE_DIR})

# Add library target
add_library(log ${SOURCE_DIR}/log.c)

# Define test executable
add_executable(test_log ${TEST_DIR}/test_log.c)
target_link_libraries(test_log log)

# Add test
enable_testing()
add_test(NAME test_log COMMAND test_log)
