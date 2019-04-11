#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "prototypes.h"
#define LEN 100
extern int dots,times,x,y,o_p_y,o_p_x,x_p_x,x_p_y,score[2],score1,score2;
extern char game_map[LEN][LEN];
extern int game[LEN][LEN];
void mode_1(void) {
    int c = 0, move_x = 0, move_o = 0;
    for (int i = 0; i <= x; i++) {
        for (int j = 0; j <= y; j++)
            if (i == 0 || j == 0 || i == x || j == y)
                game[i][j] = 9;
    }
    system("CLS");
    printf(" Player 1: W(up), S(down), D(right), A(left)\n\n Player 2: I(up), K(down), L(right), J(left)\n\n Q(quit the game)");
    printf(" \n\nPress any key to enter the game...");
    getch();
    system("CLS");
    rand1(dots, 1);
    rand1(1,4);
    rand1(1,3);
    rand1(1,5);
    rand1(2,6);
    system("CLS");
    game_map_making();
    print_map();
    while (c != 'q' && times > 0) {
        if (kbhit()) {
            c = getch();
            if (c == 'w' || c == 'a' || c == 's' || c == 'd') {
                move_o = c;
                continue;
            }
            if (c == 'i' || c == 'k' || c == 'l' || c == 'j') {
                move_x = c;
                continue;
            }
        }
        move(move_o,move_x);
    }
}