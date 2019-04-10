#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 100
extern int game[LEN][LEN],x,y;
extern char game_map[LEN][LEN];
void rand1(int n,int l){
    int count,counter1 = 0,ran_x,ran_y;
    srand(time(NULL));
    while(counter1 < n){
        ran_x = rand() % x;
        ran_y = rand() % y;
        if (game[ran_x][ran_y] == 0) {
            game[ran_x][ran_y] = l;
            counter1++;
        }
    }
}