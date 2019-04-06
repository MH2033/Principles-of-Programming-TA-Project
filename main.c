#include <stdio.h>
#include "prototypes.h"
int x, y, time, dots;
int main() {
    int ans;
    int rand[100][100] = {0};
    char config[100],game_map[100][100];
    read_from_file(config, "test_case_1.txt");
    load_config(config);
    ans = welcome_screen();
    return 0;
}