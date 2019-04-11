#include <math.h>
#include "prototypes.h"
#define LEN 100
extern int x_p_x,x_p_y;
extern int game[LEN][LEN];
int FindPath(int c2) {
    int i, j, cdotx, cdoty, cbigdotx, cbigdoty, firstdot = 1, firstbigdot = 1;
    double dist1, dist2, weightdot, weightbigdot;
    for (i = x_p_x - 25; i < x_p_x + 25; i++) {
        for (j = x_p_y - 25; j < x_p_y + 25; j++) {
            if (game[i][j] == 1) {
                if (firstdot) {
                    cdotx = i;
                    cdoty = j;
                    firstdot = 0;
                } else {
                    dist1 = sqrt(pow((cdotx - x_p_x), 2) + pow((cdoty - x_p_y), 2));
                    dist2 = sqrt(pow((i - x_p_x), 2) + pow((j - x_p_y), 2));
                    if (dist2 < dist1) {
                        cdotx = i;
                        cdoty = j;
                    }
                }
            } else if (game[i][j] == 5) {
                if (firstbigdot) {
                    cbigdotx = i;
                    cbigdoty = j;
                    firstbigdot = 0;
                } else {
                    dist1 = sqrt(pow((cbigdotx - x_p_x), 2) + pow((cbigdoty - x_p_y), 2));
                    dist2 = sqrt(pow((i - x_p_x), 2) + pow((j - x_p_y), 2));
                    if (dist2 < dist1) {
                        cbigdotx = i;
                        cbigdoty = j;
                    }
                }
            }

        }
    }
    weightdot = 1.0 / sqrt(pow((cdotx - x_p_x), 2) + pow((cdoty - x_p_y), 2));
    weightbigdot = 5.0 / sqrt(pow((cbigdotx - x_p_x), 2) + pow((cbigdoty - x_p_y), 2));
    if(weightbigdot < weightdot){
        return moveco(cdotx,cdoty);
    } else{
        return moveco(cbigdotx,cbigdoty);
    }
}