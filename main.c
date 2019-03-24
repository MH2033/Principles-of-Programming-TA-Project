#include <stdio.h>
#include "prototypes.h"

int main() {
    int ans;
    char config[100];
    read_from_file(config, "test_case_1.txt");
    ans = welcome_screen();
    return 0;
}