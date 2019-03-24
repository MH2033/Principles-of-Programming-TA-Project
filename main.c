#include <stdio.h>
#include "prototypes.h"

int x, y, time, dots;

int main() {
    int ans;
    char config[100];
    read_from_file(config, "test_case_1.txt");
    load_config(config);
    ans = welcome_screen();
    return 0;
}