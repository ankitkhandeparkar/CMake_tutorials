add_library(my_math SHARED src/addition.cpp src/division.cpp)

target_include_directories(my_math PUBLIC include)
target_include_directories(my_math PRIVATE ../print/include)