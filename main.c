
/*NOTE: Compile with "-lm" flag or you'll get an error*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "prototypes.h"
#define LEN 100
int dots, score1 = 0,score2 = 0,x,y,x_p_x,x_p_y,o_p_y,o_p_x,score[2] = {0};
int x, y ,game[LEN][LEN] = {0},TX[2]={0},TY[2] = {0};
double times;
char game_map[101][101];
int main() {
    int ans;
    char config[LEN];
    read_from_file(config, "test_case_1.txt");
    load_config(config);
    ans = welcome_screen();
    hidecursor();
    if(ans)
        mode_1();
    else
        mode_2();
    return 0;
}