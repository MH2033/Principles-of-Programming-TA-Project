#include <stdio.h>
#include <string.h>
#include <stdlib.h>
extern int score1, score2;
extern char *p1name, *p2name;
void save_scores(){
    FILE *file;
    int s1 = 0, s2 = 0, c, i = 0, j = 0, flag = 0;
    char **content, *lines, *temp;
    char *p1, *p2;
    lines = (char *)malloc(sizeof(char) * 1000);
    content = (char **)malloc(sizeof(char*) * 1000);
    file = fopen("leaderboard.txt", "r");
    while((c = getc(file)) != EOF){
        if(c == '\n'){
            lines[j] = 0;
            content[i] = lines;
            lines = (char *)malloc(sizeof(char) * 1000);
            j = 0;
            i++;
        }
        else{
            lines[j] = c;
            j++;
        }
    }
    content[i] = NULL;
    fclose(file);
    i = 0;
    while(content[i] != NULL){
        if((p1 = strstr(content[i], p1name)) != NULL && (p2 = strstr(content[i], p2name)) != NULL){
            flag = 1;
            if(score1 > score2){
                if(p1 == content[i]){
                    while(*p1 != '-'){
                        p1++;
                    }
                    p1 -= 2;
                    while(*p1 != '\t'){
                        p1--;
                    }
                    p1++;
                    while(*p1 != '\t'){
                        s1 = s1 * 10 + *p1- '0';
                        p1++;
                    }
                    s1++;
                    temp = (char *)malloc(sizeof(char)* 1000);
                    sprintf(temp, "%s\t%d%s", p1name, s1, p1);
                    content[i] = temp;
                }
                else{
                    p1 -= 2;
                    while(*p1 != '\t'){
                        p1--;
                    }
                    p1++;
                    while(*p1 != '\t'){
                        s1 = s1 * 10 + *p1- '0';
                        p1++;
                    }
                    s1++;
                    j = 0;
                    while(content[i][j] != '-')
                        j++;
                    content[i][j] = 0;
                    temp = (char *)malloc(sizeof(char)* 1000);
                    sprintf(temp, "%s-\t%d\t%s", content[i], s1, p1name);
                    content[i] = temp;
                }
            }
            else if(score2 > score1){
                if(p2 == content[i]){
                    while(*p2 != '-'){
                        p2++;
                    }
                    p2 -= 2;
                    while(*p2 != '\t'){
                        p2--;
                    }
                    p2++;
                    while(*p2 != '\t'){
                        s2 = s2 * 10 + *p2- '0';
                        p2++;
                    }
                    s2++;
                    temp = (char *)malloc(sizeof(char)* 1000);
                    sprintf(temp, "%s\t%d%s", p2name, s2, p2);
                    content[i] = temp;
                }
                else{
                    p2 -= 2;
                    while(*p2 != '\t'){
                        p2--;
                    }
                    p2++;
                    while(*p2 != '\t'){
                        s2 = s2 * 10 + *p2- '0';
                        p2++;
                    }
                    s2++;
                    j = 0;
                    while(content[i][j] != '-')
                        j++;
                    content[i][j] = 0;
                    temp = (char *)malloc(sizeof(char)* 1000);
                    sprintf(temp, "%s-\t%d\t%s", content[i], s2, p2name);
                    content[i] = temp;
                }
            }
        }
        i++;
    }
    if(flag == 0){
        if(score1 > score2)
            s1++;
        else if(score2 > score1)
            s2++;
        temp = (char *)malloc(sizeof(char) * 1000);
        sprintf(temp, "%s\t%d\t-\t%d\t%s", p1name, s1, s2, p2name);
        content[i] = temp;
        content[i+1] = NULL;
    }
    file = fopen("leaderboard.txt", "w");
    for(i = 0; content[i] != NULL; i++){
        for(j = 0; content[i][j] != 0; j++){
            putc(content[i][j], file);
        }
        putc('\n', file);
    }
    fclose(file);
}
