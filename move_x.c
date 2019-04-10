#include "prototypes.h"
#define LEN 100
extern int X[LEN][LEN],x_p_x,x_p_y,score[2],score1,score2;
void movex(int move_x) {
    if (move_x == 'w') {
        move_up(x_p_x, x_p_y, X, score, 0);
        score1 = score[0];
    } else if (move_x == 's') {
        move_down(x_p_x, x_p_y, X, score, 0);
        score1 = score[0];
    } else if (move_x == 'a') {
        move_left(x_p_x, x_p_y, X, score, 0);
        score1 = score[0];
    } else if (move_x == 'd') {
        move_right(x_p_x, x_p_y, X, score, 0);
        score1 = score[0];
    }
}