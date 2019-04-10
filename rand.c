#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 100
extern int obstac[LEN][LEN],x,y;
extern char game_map[LEN][LEN];
void rand1(int n,int ran[][LEN]){
    int count,counter1 = 0,ran_x,ran_y;
    srand(time(NULL));
    for(count = 0; count < n; count++) {
        ran_x = rand() % x;
        ran_y = rand() % y;
        if (ran[ran_x][ran_y] != 1 && game_map[ran_x][ran_y] == ' ') {
            ran[ran_x][ran_y] = 1;
            counter1++;
        } else {
            count--;
        }
    }
}