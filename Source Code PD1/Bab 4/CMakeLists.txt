cmake_minimum_required(VERSION 3.0.0)
project(Bab4 Praktik VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(Bab4 Praktik Bab4 Praktik.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
