# cmake_minimum_required(VERSION <specify CMake version here>)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_LEGACY_CYGWIN_WIN32 1)

project(ch6exe7)
set(SOURCE_FILES ch6exe7.cpp)
add_executable(ch6exe7 ${SOURCE_FILES})

project(ch7exe1)
set(SOURCE_FILES ch7exe1.cpp)
add_executable(ch7exe1 ${SOURCE_FILES})

project(ch7exe2)
set(SOURCE_FILES ch7exe2.cpp)
add_executable(ch7exe2 ${SOURCE_FILES})

project(ch7exe3)
set(SOURCE_FILES ch7exe3.cpp)
add_executable(ch7exe3 ${SOURCE_FILES})

project(ch9exe1)
set(SOURCE_FILES ch9exe1.cpp ch9exe1.hpp)
add_executable(ch9exe1 ${SOURCE_FILES})

project(ch10exe1)
set(SOURCE_FILES ch10exe1.cpp)
add_executable(ch10exe1 ${SOURCE_FILES})

project(ch10exe2)
set(SOURCE_FILES ch10exe2.cpp)
add_executable(ch10exe2 ${SOURCE_FILES})

project(veryLongDigit)
set(SOURCE_FILES veryLongDigit.cpp)
add_executable(veryLongDigit ${SOURCE_FILES})

project(houses2)
set(SOURCE_FILES house2.cpp)
add_executable(houses2 ${SOURCE_FILES})

