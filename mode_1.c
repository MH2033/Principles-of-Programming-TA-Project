#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "prototypes.h"
#define LEN 200
extern int dots,times,obstac[LEN][LEN],dot[LEN][LEN],X[LEN][LEN],Y[LEN][LEN],x,y;
extern char game_map[LEN][LEN];
void mode_1(void) {
    int c = 0, i = 0, j = 0;
    game_map_making();
    rand1(dots, dot);
    game_map_making();
    rand1(1, X);
    game_map_making();
    rand1(1, Y);
    game_map_making();
    while (c != 'q') {
        if(kbhit())
            c = getch();
        else if (c == 'w') {
            move_up();
        }
        else if (c == 's'){
            move_down();
        }
        else if (c == 'a'){
            move_left();
        }
        else if(c == 'd'){
            move_right();
        }
    }
}