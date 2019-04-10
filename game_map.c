#include <stdio.h>
#define LEN 100
extern int obstac[LEN][LEN],dot[LEN][LEN],X[LEN][LEN],Y[LEN][LEN],x_p_x,x_p_y,x,y;
extern char game_map[LEN][LEN];
void game_map_making(void){
    int i,j;
    for (i = 0; i <= x; i++) {
        for (j = 0; j <= y; j++) {
            if (dot[i][j] == 1) {
                game_map[i][j] = '.';
            }else if(X[i][j] == 1){
                game_map[i][j] = 'X';
                x_p_x = i;
                x_p_y = j;
            }else if(Y[i][j] == 1){
                game_map[i][j] = 'Y';
            } else if (obstac[i][j] == 1) {
                game_map[i][j] = 'B';
            } else if (i == 0 || j == 0 || i == x || j == y) {
                game_map[i][j] = '!';
            } else {
                game_map[i][j] = ' ';
            }
        }
    }
}