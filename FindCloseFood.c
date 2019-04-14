#include <math.h>
#include "prototypes.h"
#define LEN 100
extern int x_p_x,x_p_y,x,y;
extern int game[LEN][LEN];
int FindCloseFood(void) {
    int i, j,k = 1, cdotx, cdoty, cbigdotx, cbigdoty, firstdot = 1, firstbigdot = 1;
    double dist1, dist2, weightdot, weightbigdot;
    while(firstdot == 1 && firstbigdot == 1) {
        for (i = x_p_x - k; i < x_p_x + k; i++) {
            for (j = x_p_y - k; j < x_p_y + k; j++) {
                if (i > 0 && j > 0 && i < x && j < y) {
                    k++;
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
                        }
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