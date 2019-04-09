#include <stdio.h>
#include "prototypes.h"
int x, y, time, dots;
int obstac[100][100] = {0},dot[100][100] = {0};
char game_map[101][101];
int main() {
    int ans;
    int rand[100][100] = {0};
    char config[100];
    read_from_file(config, "test_case_1.txt");
    load_config(config);
    game_map_making();
    rand1(dots, dot, x, y);
    game_map_making();
    print_map();
    //ans = welcome_screen();
    /*if(ans)
        mode_1();
    else
        mode_2();*/
    return 0;
}