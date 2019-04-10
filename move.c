#include <stdlib.h>
#include "prototypes.h"
#include <windows.h>
#define LEN 100
extern int dots,obstac[LEN][LEN],dot[LEN][LEN],x,y;
extern char game_map[LEN][LEN];
//extern int score1, score2;
void move_up(int x_p_x ,int x_p_y,int move[][LEN],int score[],int i){
    if (move[x_p_x][x_p_y] == 1) {
        if (game_map[x_p_x - 1][x_p_y] == ' ') {
            move[x_p_x][x_p_y] = 0;
            move[x_p_x - 1][x_p_y] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        } else if (game_map[x_p_x - 1][x_p_y] == '.') {
            score[i]++;
            dot[x_p_x- 1][x_p_y] = 0;
            rand1(1,dot);
            move[x_p_x][x_p_y] = 0;
            move[x_p_x - 1][x_p_y] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        }
    }
}
void move_down(int x_p_x ,int x_p_y,int move[][LEN],int score[],int i){
    if (move[x_p_x][x_p_y] == 1) {
        if (game_map[x_p_x + 1][x_p_y] == ' ') {
            move[x_p_x][x_p_y] = 0;
            move[x_p_x + 1][x_p_y] = 1;
            system("CLS");
            game_map_making();
            print_map();
            delay(200);
        } else if (game_map[x_p_x + 1][x_p_y] == '.') {
            score[i]++;
            rand1(1,dot);
            dot[x_p_x + 1][x_p_y] = 0;
            move[x_p_x][x_p_y] = 0;
            move[x_p_x + 1][x_p_y] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        }
    }
}
void move_right(int x_p_x ,int x_p_y,int move[][LEN],int score[],int i) {
    if (move[x_p_x][x_p_y] == 1) {
        if (game_map[x_p_x][x_p_y+1] == ' ') {
            move[x_p_x][x_p_y] = 0;
            move[x_p_x][x_p_y + 1] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        } else if (game_map[x_p_x][x_p_y+1] == '.') {
            score[i]++;
            rand1(1,dot);
            dot[x_p_x][x_p_y+1] = 0;
            move[x_p_x][x_p_y] = 0;
            move[x_p_x][x_p_y + 1] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        }
    }
}
void move_left(int x_p_x ,int x_p_y,int move[][LEN],int score[],int i) {
    if(move[x_p_x][x_p_y] == 1) {
        if (game_map[x_p_x][x_p_y-1] == ' ') {
            move[x_p_x][x_p_y] = 0;
            move[x_p_x][x_p_y-1] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        } else if (game_map[x_p_x][x_p_y-1] == '.') {
            score[i]++;
            rand1(1,dot);
            dot[x_p_x][x_p_y-1] = 0;
            move[x_p_x][x_p_y] = 0;
            move[x_p_x][x_p_y - 1] = 1;
            game_map_making();
            system("CLS");
            print_map();
            delay(200);
        }
    }
}