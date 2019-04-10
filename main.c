#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "prototypes.h"
int x, y, dots, score1 = 0, score2 = 0;
int obstac[100][100] = {0},dot[100][100] = {0},X[100][100] = {0},Y[100][100] =  {0};
double times;
char game_map[101][101];
int main() {
    int ans;
    char config[100];
    read_from_file(config, "test_case_1.txt");
    load_config(config);
    ans = welcome_screen();
    hidecursor();
    if(ans)
        mode_1();
    else
        //mode_2();
    return 0;
}