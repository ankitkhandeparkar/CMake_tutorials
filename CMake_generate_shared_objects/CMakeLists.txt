cmake_minimum_required(VERSION 3.28.1)

project(test)

#library folder "lib" is added to path
#so no need to include lib/calc/sum.h
#instead do #include "calc/sub.h"
#or do this include_directories(lib/calc) => #include "sum.h"
include_directories(lib)

#add_executable( executable_name source_files ... )
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} calc)

#another CMakeLists.txt will build the shared library
#It is necessary to say where
add_subdirectory(lib)

