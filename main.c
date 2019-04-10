#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "prototypes.h"
int x, y, times, dots;
int obstac[100][100] = {0},dot[100][100] = {0},X[100][100] = {0},Y[100][100] =  {0};
char game_map[101][101];
char config[100];
int main() {
    int ans;
    read_from_file(config, "test_case_1.txt");
    load_config(config);
    ans = welcome_screen();
    if(ans)
        mode_1();
    else
        //mode_2();
    return 0;
}