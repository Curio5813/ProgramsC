cmake_minimum_required(VERSION 3.26)
project(Program C)

set(CMAKE_C_STANDARD 11)

add_executable(Program
        GeekUniversity/secao18/03-implementando-a-ordenacao-select-sort.c
)

target_link_libraries(Program m)
