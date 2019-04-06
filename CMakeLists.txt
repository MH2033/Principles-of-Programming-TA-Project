cmake_minimum_required(VERSION 3.13)
project(p_o_p_g_project C)

set(CMAKE_C_STANDARD 99)

add_executable(p_o_p_g_project main.c welcome_screen.c hidecursor.c read_file.o prototypes.h load_config.c delay.c  rand.c game_map.c)