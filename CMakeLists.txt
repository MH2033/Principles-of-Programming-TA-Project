cmake_minimum_required(VERSION 3.13)
project(P.O.P_Grader_project C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "-O3")
add_executable(P.O.P_Grader_Project main.c game_map.c print_map.c rand.c load_config.c prototypes.h mode_1.c mode_2.c FindCloseFood.c move.c delay.c move_x.c hidecursor.c welcome_screen.c ShowWinner.c moveco.c read_from_file.c save_scores.c)
