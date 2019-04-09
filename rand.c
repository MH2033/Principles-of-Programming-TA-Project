#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int obstac[100][100];
char game_map[101][101];
void rand1(int n,int ran[][100],int x,int y){
    int count,counter1 = 0,ran_x,ran_y;
    //srand(time(NULL));
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