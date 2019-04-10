#include <stdio.h>
#include <conio.h>
#include "prototypes.h"
int dots,obstac[100][100],dot[100][100],X[100][100],Y[100][100],x,y;
char game_map[101][101];
void mode_1(void) {
    int i = 0, j = 0, k, l;
    char c;
    game_map_making();
    rand1(dots, dot, x, y);
    game_map_making();
    rand1(1, X, x, y);
    game_map_making();
    rand1(1, Y, x, y);
    game_map_making();
    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            if (c == 'w') {
                for (i = 0; i < x; i++) {
                    for (j = 0; j < y; j++) {
                        if (X[i][j] == 1) {
                            k = i;
                            l = j;
                            i = x;
                            j = y;
                            break;
                        }
                    }
                    X[k][l] = 0;
                    k--;
                    X[k][l] = 1;
                    game_map_making();
                }
            }
            //print_map();
        }
    }
}
