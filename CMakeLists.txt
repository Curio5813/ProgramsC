cmake_minimum_required(VERSION 3.26)
project(Program C)

set(CMAKE_C_STANDARD 11)

add_executable(Program
        GeekUniversity/secao16/programa38.c

)

target_link_libraries(Program m)
