#include <stdio.h>
#include "prototypes.h"

char config[100];

int main() {
    int ans;
    read_from_file(config, "test_case_1.txt");
    ans = welcome_screen();
    return 0;
}