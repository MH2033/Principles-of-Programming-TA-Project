#include <stdio.h>
#include <string.h>
extern int score1, score2;
extern char *p1name, *p2name;
void save_scores(){
    FILE *file;
    int s1, s2, c, i = 0;
    char content[1000];
    file = fopen("leaderboard.txt", "r");
    while((c = getc(file)) != EOF){
        content[i] = c;
        i++;
    }
    content[i] = 0;
    fclose(file);
}
