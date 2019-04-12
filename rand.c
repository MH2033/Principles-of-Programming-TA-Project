#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 100
extern int game[LEN][LEN],x,y, randomness;
extern char game_map[LEN][LEN];
extern double times;
void rand1(int n,int l){
    int counter1 = 0,ran_x,ran_y;
    srand(randomness);
    randomness++;
    while(counter1 < n){
        ran_x = (rand() % (x - 2)) + 1;
        ran_y = (rand() % (y - 2)) + 1;
        if (game[ran_x][ran_y] == 0) {
            game[ran_x][ran_y] = l;
            counter1++;
        }
        else {
            srand(randomness);
            randomness++;
        }
    }
}