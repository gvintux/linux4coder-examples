cmake_minimum_required(VERSION 3.9)
project(ex_6)
set(CMAKE_C_STANDARD 11)
set(SRC_DIR src)
set(BUILD_DIR build)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -O0 -g")
set(STRUCT_SRCS ${SRC_DIR}/struct/main.c)
set(TYPEDEF_SRCS ${SRC_DIR}/typedef/main.c)
set(UNION_ENUM_SRCS ${SRC_DIR}/union_enum/main.c)
add_executable(struct ${STRUCT_SRCS})
add_executable(typedef ${TYPEDEF_SRCS})
add_executable(union_enum ${UNION_ENUM_SRCS})
