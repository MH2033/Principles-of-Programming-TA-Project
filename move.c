#include <stdlib.h>
#include "prototypes.h"
#include <windows.h>
int dots,obstac[100][100],dot[100][100],X[100][100],Y[100][100],x,y,x_p_x,x_p_y;
char game_map[101][101];
int move_up(void){
    int score1 = 0;
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
    return score1;
}
int move_down(void){
    int score1 = 0;
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
    return score1;
}
int move_right(void) {
    int score1 = 0;
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
    return score1;
}
int move_left(void){
    int score1 = 0;
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
    return score1;
}