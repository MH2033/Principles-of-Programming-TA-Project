#include "prototypes.h"
#define LEN 100
extern int Y[LEN][LEN],y_p_x,y_p_y,score[2],score1,score2;
void movey(int move_y) {
    if (move_y == 'i') {
        move_up(y_p_x, y_p_y, Y, score, 1);
        score2 = score[1];
    } else if (move_y == 'k') {
        move_down(y_p_x, y_p_y, Y, score, 1);
        score2 = score[1];
    } else if (move_y == 'j') {
        move_left(y_p_x, y_p_y, Y, score, 1);
        score2 = score[1];
    } else if (move_y == 'l') {
        move_right(y_p_x, y_p_y, Y, score, 1);
        score2 = score[1];
    }
}
