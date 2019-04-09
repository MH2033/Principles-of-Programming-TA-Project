#include <stdio.h>
int x,y;
char game_map[101][101];
void print_map(void){
    for (int i = 0; i <= x; ++i) {
        for (int j = 0; j <= y; ++j) {
            printf("%c",game_map[i][j]);
        }
        printf("\n");
    }
}