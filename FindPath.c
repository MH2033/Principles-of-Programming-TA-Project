#include <math.h>
#define LEN 100
extern int x_p_x,x_p_y;
extern char game_map[LEN][LEN];
int FindPath(int c2) {
    int i, j, cdotx, cdoty, cbigdotx, cbigdoty, firstdot = 1, firstbigdot = 1;
    double dist1, dist2, weightdot, weightbigdot;
    for (i = x_p_x - 25; i < x_p_x + 25; i++) {
        for (j = x_p_y - 25; j < x_p_y + 25; j++) {
            if (game_map[i][j] == '.') {
                if (firstdot) {
                    cdotx = i;
                    cdoty = j;
                    firstdot = 0;
                } else {
                    dist1 = sqrt(pow(cdotx, 2) + pow(cdoty, 2));
                    dist2 = sqrt(pow(i, 2) + pow(j, 2));
                    if (dist2 < dist1) {
                        cdotx = i;
                        cdoty = j;
                    }
                }
            } else if (game_map[i][j] == 'F') {
                if (firstbigdot) {
                    cbigdotx = i;
                    cbigdoty = j;
                    firstbigdot = 0;
                } else {
                    dist1 = sqrt(pow(cbigdotx, 2) + pow(cbigdoty, 2));
                    dist2 = sqrt(pow(i, 2) + pow(j, 2));
                    if (dist2 < dist1) {
                        cbigdotx = i;
                        cbigdoty = j;
                    }
                }
            }

        }
    }
    weightdot = 1.0 / sqrt(pow(cdotx, 2) + pow(cdoty, 2));
    weightbigdot = 5.0 / sqrt(pow(cbigdotx, 2) + pow(cbigdoty, 2));
}