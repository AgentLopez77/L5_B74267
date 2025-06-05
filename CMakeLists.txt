cmake_minimum_required(VERSION 3.10)
project(proyecto C)

set(CMAKE_C_STANDARD 99)

include_directories(src cJSON)

add_executable(main src/main.c src/json.c cJSON/cJSON.c)
