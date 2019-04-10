#include <stdlib.h>
#include "prototypes.h"
#include <windows.h>
#define LEN 200
int dots,obstac[LEN][LEN],dot[LEN][LEN],X[LEN][LEN],Y[LEN][LEN],x,y,x_p_x,x_p_y;
char game_map[LEN + 1][LEN + 1];
extern int score1, score2;
void move_up(void){
    if (X[x_p_x][x_p_y] == 1) {
        if (game_map[x_p_x - 1][x_p_y] == ' ') {
            X[x_p_x][x_p_y] = 0;
            X[x_p_x - 1][x_p_y] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        } else if (game_map[x_p_x - 1][x_p_y] == '.') {
            score1++;
            dot[x_p_x- 1][x_p_y] = 0;
            rand1(1,dot);
            X[x_p_x][x_p_y] = 0;
            X[x_p_x - 1][x_p_y] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        }
    }
}
void move_down(void){
    if (X[x_p_x][x_p_y] == 1) {
        if (game_map[x_p_x + 1][x_p_y] == ' ') {
            X[x_p_x][x_p_y] = 0;
            X[x_p_x + 1][x_p_y] = 1;
            system("CLS");
            game_map_making();
            print_map();
            delay(200);
        } else if (game_map[x_p_x + 1][x_p_y] == '.') {
            score1++;
            rand1(1,dot);
            dot[x_p_x + 1][x_p_y] = 0;
            X[x_p_x][x_p_y] = 0;
            X[x_p_x + 1][x_p_y] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        }
    }
}
void move_right(void) {
    if (X[x_p_x][x_p_y] == 1) {
        if (game_map[x_p_x][x_p_y+1] == ' ') {
            X[x_p_x][x_p_y] = 0;
            X[x_p_x][x_p_y + 1] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        } else if (game_map[x_p_x][x_p_y+1] == '.') {
            score1++;
            rand1(1,dot);
            dot[x_p_x][x_p_y+1] = 0;
            X[x_p_x][x_p_y] = 0;
            X[x_p_x][x_p_y + 1] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        }
    }
}
void move_left(void) {
    if(X[x_p_x][x_p_y] == 1) {
        if (game_map[x_p_x][x_p_y-1] == ' ') {
            X[x_p_x][x_p_y] = 0;
            X[x_p_x][x_p_y-1] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        } else if (game_map[x_p_x][x_p_y-1] == '.') {
            score1++;
            rand1(1,dot);
            dot[x_p_x][x_p_y-1] = 0;
            X[x_p_x][x_p_y] = 0;
            X[x_p_x][x_p_y - 1] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        }
    }
}