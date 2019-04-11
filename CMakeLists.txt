cmake_minimum_required(VERSION 3.13)
project(p_o_p_g_project C)

set(CMAKE_C_STANDARD 99)

add_executable(p_o_p_g_project main.c game_map.c print_map.c rand.c load_config.c read_file.o prototypes.h mode_1.c mode_2.c move.c delay.c move_x.c hidecursor.c welcome_screen.c)