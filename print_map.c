#include <stdio.h>
int x,y;
char game_map[101][101];
extern int score1, score2;
void print_map(void){
    for (int i = 0; i <= x; ++i) {
        printf("\n");
        for (int j = 0; j <= y; ++j) {
            printf("%c",game_map[i][j]);
        }
    }
    printf("\n\nPlayer 1 score: %d", score1);
    printf("\nPlayer 2 score: %d", score2);
    //printf("Remaining time: %f", time);
}