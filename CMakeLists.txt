cmake_minimum_required(VERSION 3.0.0)
project(BinaryToolkit VERSION 00.00.000.001 LANGUAGES CXX)

include(CTest)
enable_testing()

add_executable(BinaryToolkit main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
