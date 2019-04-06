#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rand1(int n,int ran[][100],int x,int y){
    int count,ran_x,ran_y;
    srand(time(NULL));
    for(count = 0; count < n; count++){
        ran_x = rand()%x;
        ran_y = rand()%y;
        if(ran[ran_x][ran_y] != 1){
            ran[ran_x][ran_y] = 1;
        }
        else{
            count--;
        }
    }
}