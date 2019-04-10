#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "prototypes.h"
#define LEN 100
extern int dots,times,obstac[LEN][LEN],dot[LEN][LEN],X[LEN][LEN],Y[LEN][LEN],x,y,y_p_y,y_p_x,x_p_x,x_p_y,score[2],score1,score2;
extern char game_map[LEN][LEN];
extern int bigdot[LEN][LEN];
void mode_1(void) {
    int c = 0, move_x = 0, move_y;
    game_map_making();
    rand1(dots, dot);
    game_map_making();
    rand1(1, X);
    game_map_making();
    rand1(1, Y);
    game_map_making();
    rand1(1, bigdot);
    game_map_making();
    system("CLS");
    print_map();
    while (c != 'q') {
        if (kbhit()) {
            c = getch();
            if (c == 'w' || c == 'a' || c == 's' || c == 'd') {
                move_x = c;
                continue;
            }
            if (c == 'i' || c == 'k' || c == 'l' || c == 'j') {
                move_y = c;
                continue;
            }
        }
        movex(move_x);
        movey(move_y);
    }
}