#include <stdio.h>
#define LEN 100
extern int x, y, dots;
extern int obstac[LEN][LEN];
extern double times;
void load_config(const char config[]) {
    int i, j = 0, lcount = 0, tempx = 0, tempy = 0;
    x = 0;
    y = 0;
    times = 0;
    dots = 0;
    for(i = 0; config[i] != '\0'; i++) {
        if(config[i] == '\n') {
            lcount++;
            continue;
        }
        if(lcount == 0) {
            while (config[i] != ' ') {
                x = x * 10 + (config[i] - '0');
                i++;
            }
            i++;
            while (config[i] != '\n') {
                y = y * 10 + (config[i] - '0');
                i++;
            }
            i--;
        }
        else if(lcount == 1) {
            while (config[i] != '\n') {
                times = times * 10 + (config[i] - '0');
                i++;
            }
            i--;
        }
        else if(lcount == 2){
            while (config[i] != '\n') {
                dots = dots * 10 + (config[i] - '0');
                i++;
            }
            i--;
        }
        else {
            while(config[i] != '\0') {
                tempx = 0;
                tempy = 0;
                while(config[i] != ' ') {
                    tempx = tempx * 10 + (config[i] - '0');
                    i++;
                }
                i++;
                while (config[i] != '\n' && config[i] != '\0') {
                    tempy = tempy * 10 + (config[i] - '0');
                    i++;
                }
                i++;
                obstac[tempx][tempy] = 1;
            }
            break;
        }

    }
}