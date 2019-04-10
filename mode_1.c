#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "prototypes.h"
int dots,times,obstac[100][100],dot[100][100],X[100][100],Y[100][100],x,y;
char game_map[101][101];
void mode_1(void) {
    int c = 0, i = 0, j = 0, k, l, score1 = 0;
    game_map_making();
    rand1(dots, dot);
    game_map_making();
    rand1(1, X);
    game_map_making();
    rand1(1, Y);
    game_map_making();
    while (1) {
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
