cmake_minimum_required(VERSION 3.15)
project(ircServer C)

set(CMAKE_C_STANDARD 99)

add_executable(ircServer Src/client.c Header/client.h Src/linked_list.c Header/linked_list.h Header/Channels.h Src/Channels.c Src/main.c)