#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "prototypes.h"
#define LEN 100
extern int dots,x,y,o_p_y,o_p_x,x_p_x,x_p_y,score[2],score1,score2;
extern int game_map[LEN][LEN];
extern int game[LEN][LEN];
extern double times;
void mode_2(void) {
    int c1 = 0, c2,move_x = 0, move_o = 0, i, j;
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++)
            if (i == 0 || j == 0 || i == x-1 || j == y-1)
                game[i][j] = 9;
    }
    system("CLS");
    printf(" Moves: W(up), S(down), D(right), A(left)\n\n Q(quit the game)");
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
    system("CLS");
    while (c1 != 'q' && times > 0) {
        if (kbhit()) {
            c1 = getch();
            if (c1 == 'w' || c1 == 'a' || c1 == 's' || c1 == 'd') {
                move_o = c1;
            }
        }
        c2 = FindCloseFood();
        move_x = c2;
        move(move_o,move_x);
    }
}