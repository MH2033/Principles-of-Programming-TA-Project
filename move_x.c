#include <windows.h>
#include "prototypes.h"
#define LEN 100
extern int o_p_x,o_p_y,x_p_x,x_p_y,score[2],score1,score2;
void move(int move_x,int move_y) {
    if (move_x == 'w') {
        move_up(o_p_x, o_p_y, 4, score, 0);
        score1 = score[0];
    } else if (move_x == 's') {
        move_down(o_p_x, o_p_y, 4, score, 0);
        score1 = score[0];
    } else if (move_x == 'a') {
        move_left(o_p_x, o_p_y, 4, score, 0);
        score1 = score[0];
    } else if (move_x == 'd') {
        move_right(o_p_x, o_p_y, 4, score, 0);
        score1 = score[0];
    }else if (move_x == 'f');
    if (move_y == 'i') {
        move_up(x_p_x, x_p_y, 3, score, 1);
        score2 = score[1];
    } else if (move_y == 'k') {
        move_down(x_p_x, x_p_y, 3, score, 1);
        score2 = score[1];
    } else if (move_y == 'j') {
        move_left(x_p_x, x_p_y,3, score, 1);
        score2 = score[1];
    } else if (move_y == 'l') {
        move_right(x_p_x, x_p_y, 3, score, 1);
        score2 = score[1];
    }else if (move_y ==';');
    print_map();
    system("CLS");
}