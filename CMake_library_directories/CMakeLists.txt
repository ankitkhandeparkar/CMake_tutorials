cmake_minimum_required(VERSION 3.28.1)

project(test)

add_subdirectory(math)
add_subdirectory(print)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} my_math my_print)

#project_structure
#-CMakeLists.txt
#-main.cpp
#-math
#    -include
#        -math
#            -addition.h
#            -division.h
#    -src
#        -addition.cpp
#        -division.cpp
#    -CMakeLists.txt
#-print
#    -include
#        -math
#            -print.h
#    -src
#        -print.cpp
#    -CMakeLists.txt
