#include <stdio.h>
#define LEN 100
extern int x,y;
extern char game_map[LEN][LEN];
extern int score1, score2;
extern double times;
void print_map(void){
    for (int i = 0; i <= x; ++i) {
        printf("\n");
        for (int j = 0; j <= y; ++j) {
            printf("%c",game_map[i][j]);
        }
    }
    times = times - 0.2;
    printf("\n\nPlayer 1 score: %d", score1);
    printf("\nPlayer 2 score: %d", score2);
    printf("\nRemaining time: %.2f", times);
}