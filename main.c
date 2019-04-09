#include <stdio.h>
#include "prototypes.h"
#define LEN 200
int x, y, time, dots;
int obstac[LEN][LEN] = {0};
int main() {
    int ans;
    int rand[LEN][LEN] = {0};
    char config[LEN],game_map[LEN][LEN];
    read_from_file(config, "test_case_1.txt");
    load_config(config);
    ans = welcome_screen();
    /*if(ans)
        mode_1();
    else
        mode_2();*/
    return 0;
}