cmake_minimum_required(VERSION 3.19)
project(chitu_lang C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(chitu_lang
        chitu-bool.c
        chitu-common.c
        chitu-float.c
        chitu-int.c
        chitu-string.c
        main.c)
