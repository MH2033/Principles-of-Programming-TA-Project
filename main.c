#include <stdio.h>
#include "read_file.h"

char config[100];

int main() {
    read_from_file(config, "test_case_1.txt");
    return 0;
}