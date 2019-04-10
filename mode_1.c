#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "prototypes.h"
#define LEN 100
extern int dots,times,obstac[LEN][LEN],dot[LEN][LEN],X[LEN][LEN],Y[LEN][LEN],x,y,y_p_y,y_p_x,x_p_x,x_p_y,score1,score2;
extern char game_map[LEN][LEN];
void mode_1(void) {
    int c = 0,move_x = 0,move_y,score[2] = {0};
    game_map_making();
    rand1(dots, dot);
    game_map_making();
    rand1(1, X);
    game_map_making();
    rand1(1, Y);
    game_map_making();
    system("CLS");
    print_map();
    while (c != 'q') {
        if(kbhit()) {
            c = getch();
            if (c == 'w' || c== 'a'|| c == 's' || c == 'd') {
                move_x = c;
                continue;
            }
            if (c == 'i' || c== 'k'|| c == 'l' || c == 'j'){
                move_y = c;
                continue;
            }
        }
        else if (move_x == 'w') {
            move_up(x_p_x,x_p_y,X,score,0);
            score1 = score[0];
        }
        else if (move_x == 's'){
            move_down(x_p_x,x_p_y,X,score,0);
            score1 = score[0];
        }
        else if (move_x == 'a'){
            move_left(x_p_x,x_p_y,X,score,0);
            score1 = score[0];
        }
        else if(move_x == 'd') {
            move_right(x_p_x, x_p_y, X, score, 0);
            score1 = score[0];
        }
        if (move_y == 'i') {
            move_up(y_p_x,y_p_y,Y,score,1);
            score2 = score[1];
        }
        else if (move_y == 'k'){
            move_down(y_p_x,y_p_y,Y,score,1);
            score2 = score[1];
        }
        else if (move_y == 'j'){
            move_left(y_p_x,y_p_y,Y,score,1);
            score2 = score[1];
        }
        else if(move_y == 'l'){
            move_right(y_p_x,y_p_y,Y,score,1);
            score2 = score[1];
        }
    }
}