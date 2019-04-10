#include <stdio.h>
#define LEN 100
extern int x_p_x,x_p_y,o_p_y,o_p_x,x,y;
extern char game_map[LEN][LEN];
extern int y,x,game[LEN][LEN],TX[2],TY[2];

void game_map_making(void){
    int i,j,k = 0,g = 0;
    for (i = 0; i <= x; i++) {
        for (j = 0; j <= y; j++) {
            if (game[i][j] == 1) {
                game_map[i][j] = '.';
            } else if (game[i][j] == 9) {
                game_map[i][j] = '!';
            } else if (game[i][j] == 2) {
                game_map[i][j] = 'B';
            } else if (game[i][j] == 4) {
                game_map[i][j] = 'O';
                o_p_x = i;
                o_p_y = j;
            } else if (game[i][j] == 3) {
                game_map[i][j] = 'X';
                x_p_x = i;
                x_p_y = j;
            } else if (game[i][j] == 5) {
                game_map[i][j] = 'F';
            }else if(game[i][j] == 6){
                game_map[i][j] = 'T';
                TX[k] = i;
                TY[g] = j;
                g++;k++;
            }else {
                game_map[i][j] = ' ';
            }
        }
    }
}