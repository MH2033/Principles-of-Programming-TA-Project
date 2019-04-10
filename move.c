#include <stdlib.h>
#include "prototypes.h"
#define LEN 100
extern int game[LEN][LEN],TX[2],TY[2],x,y;
extern char game_map[LEN][LEN];
void move_up(int x_p_x ,int x_p_y,int l,int score[],int i){
    if (game[x_p_x][x_p_y] == l) {
        if (game[x_p_x - 1][x_p_y] == 0) {
            game[x_p_x][x_p_y] = 0;
            game[x_p_x - 1][x_p_y] = l;
            game_map_making();
        } else if (game[x_p_x - 1][x_p_y] == 1) {
            score[i]++;
            game[x_p_x - 1][x_p_y] = 0;
            rand1(1,1);
            game[x_p_x][x_p_y] = 0;
            game[x_p_x - 1][x_p_y] = l;
            game_map_making();
        }
        else if (game[x_p_x - 1][x_p_y] == 5) {
            score[i] += 5;
            game[x_p_x - 1][x_p_y] = 0;
            rand1(1,5);
            game[x_p_x][x_p_y] = 0;
            game[x_p_x - 1][x_p_y] = l;
            game_map_making();
        }else if(game[x_p_x - 1][x_p_y] == 6){
            game [x_p_x - 1][x_p_y] = 0;
            game [x_p_x][x_p_y] = 0;
            for (int j = 0; j < 2; j++) {
                if(game[TX[j]][TY[j]] == 6){
                    game[TX[j]][TY[j]] = 0;
                    x_p_x = TX[j];
                    x_p_y = TY[j];
                    rand1(2,6);
                }
            }
            game[x_p_x][x_p_y] = 0;
            game[x_p_x][x_p_y] = l;
            game_map_making();
        }
    }
}
void move_down(int x_p_x ,int x_p_y,int l,int score[],int i){
    if (game[x_p_x][x_p_y] == l) {
        if (game[x_p_x +1][x_p_y] == 0) {
            game[x_p_x][x_p_y] = 0;
            game[x_p_x + 1][x_p_y] = l;
            game_map_making();
        } else if (game[x_p_x + 1][x_p_y] == 1) {
            score[i]++;
            game[x_p_x + 1][x_p_y] = 0;
            rand1(1,1);
            game[x_p_x][x_p_y] = 0;
            game[x_p_x + 1][x_p_y] = l;
            game_map_making();
        }
        else if (game[x_p_x + 1][x_p_y] == 5) {
            score[i] += 5;
            game[x_p_x + 1][x_p_y] = 0;
            rand1(1,5);
            game[x_p_x][x_p_y] = 0;
            game[x_p_x + 1][x_p_y] = l;
            game_map_making();
        }else if(game[x_p_x + 1][x_p_y] == 6){
            game [x_p_x + 1][x_p_y] = 0;
            game [x_p_x][x_p_y] = 0;
            for (int j = 0; j < 2; j++) {
                if(game[TX[j]][TY[j]] == 6){
                    game[TX[j]][TY[j]] = 0;
                    x_p_x = TX[j];
                    x_p_y = TY[j];
                }
            }
            rand1(2,6);
            game[x_p_x][x_p_y] = 0;
            game[x_p_x][x_p_y] = l;
            game_map_making();
        }
    }
}
void move_right(int x_p_x ,int x_p_y,int l,int score[],int i) {
    if (game[x_p_x][x_p_y] == l) {
        if (game[x_p_x][x_p_y +1] == 0) {
            game[x_p_x][x_p_y] = 0;
            game[x_p_x][x_p_y +1] = l;
            game_map_making();
        } else if (game[x_p_x][x_p_y +1] == 1) {
            score[i]++;
            game[x_p_x][x_p_y + 1] = 0;
            rand1(1,1);
            game[x_p_x][x_p_y] = 0;
            game[x_p_x][x_p_y +1] = l;
            game_map_making();
        }
        else if (game[x_p_x][x_p_y +1]== 5) {
            score[i] += 5;
            game[x_p_x][x_p_y +1] = 0;
            rand1(1,5);
            game[x_p_x][x_p_y] = 0;
            game[x_p_x][x_p_y +1] = l;
            game_map_making();
        }else if(game[x_p_x][x_p_y + 1] == 6){
            game [x_p_x][x_p_y + 1] = 0;
            game [x_p_x][x_p_y] = 0;
            for (int j = 0; j < 2; j++) {
                if(game[TX[j]][TY[j]] == 6){
                    game[TX[j]][TY[j]] = 0;
                    x_p_x = TX[j];
                    x_p_y = TY[j];
                    rand1(2,6);
                }
            }
            game[x_p_x][x_p_y] = 0;
            game[x_p_x][x_p_y] = l;
            game_map_making();
        }
    }
}
void move_left(int x_p_x ,int x_p_y,int l,int score[],int i) {
    if (game[x_p_x][x_p_y] == l) {
        if (game[x_p_x][x_p_y -1] == 0) {
            game[x_p_x][x_p_y] = 0;
            game[x_p_x][x_p_y - 1] = l;
            game_map_making();
        } else if (game[x_p_x][x_p_y -1] == 1) {
            score[i]++;
            game[x_p_x][x_p_y - 1] = 0;
            rand1(1,1);
            game[x_p_x][x_p_y] = 0;
            game[x_p_x][x_p_y -1] = l;
            game_map_making();
        }
        else if (game[x_p_x][x_p_y -1]== 5) {
            score[i] += 5;
            game[x_p_x][x_p_y -1] = 0;
            rand1(1,5);
            game[x_p_x][x_p_y] = 0;
            game[x_p_x][x_p_y -1] = l;
            game_map_making();
        }else if(game[x_p_x][x_p_y -1] == 6){
            game [x_p_x][x_p_y -1 ] = 0;
            game [x_p_x][x_p_y] = 0;
            for (int j = 0; j < 2; j++) {
                if(game[TX[j]][TY[j]] == 6){
                    game[TX[j]][TY[j]] = 0;
                    x_p_x = TX[j];
                    x_p_y = TY[j];
                    rand1(2,6);
                }
            }
            game[x_p_x][x_p_y] = 0;
            game[x_p_x][x_p_y] = l;
            game_map_making();
        }
    }
}