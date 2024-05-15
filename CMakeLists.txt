cmake_minimum_required(VERSION 3.28)
project(SingleC C)

set(CMAKE_C_STANDARD 99)

add_executable(SingleC chapter3/main.c)

add_executable(array_test chapter3/array_test.c
        chapter3/absdiff_se.c
        chapter3/gotodiff_se.c
        chapter3/cond.c
        chapter3/absdiff.c
        chapter3/cmovdiff.c)
add_executable(showbyte chapter3/showbyte.c)