cmake_minimum_required(VERSION 3.0.0)
project(DataStructure VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(DataStructure main.cpp)

add_executable(linked_list src/linked_list.cpp)
add_executable(doubly_linked_list src/doubly_linked_list.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
