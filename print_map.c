#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <windows.h>
#include "prototypes.h"
#define LEN 100
extern int x,y,game[LEN][LEN];
extern int game_map[LEN][LEN];
extern int score1, score2;
extern double times;
extern char *p1name, *p2name;
extern int mode;
void print_map(void){
    hidecursor();
    for (int i = 0; i < x; i++) {
        printf("\n");
        for (int j = 0; j < y; j++) {
            printf("%c",game_map[i][j]);
        }
    }
    printf("\n\n%s score: %d", p1name, score1);
    printf("\n%s score: %d", p2name, score2);
    printf("\nRemaining time: %.2f", times);
    times = times - 0.2;
    delay(200);
}
