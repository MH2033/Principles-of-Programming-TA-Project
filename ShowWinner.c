#include <stdio.h>
#include <windows.h>
#include <conio.h>
extern int score1,score2, mode;
extern double times;
extern char *p1name, *p2name;
void ShowWinner(void){
    system("CLS");
    if(mode) {
        printf("\n %s: %d\n %s: %d", p1name, score1, p2name, score2);
        if (score1 > score2)
            printf("\n\n %s has won!\n\n Press Enter to quit the game...", p1name);
        else if (score1 == score2) {
            printf("\n\n Draw!\n\n Press Enter to quit the game...");
        } else {
            printf("\n\n %s has won!\n\n Press Enter to quit the game...", p2name);
        }
    }
    else{
        printf("\n %s: %d\n Computer: %d", p1name, score1, score2);
        if (score1 > score2)
            printf("\n\n %s has won!\n\n Press Enter to quit the game...", p1name);
        else if (score1 == score2) {
            printf("\n\n Draw!\n\n Press Enter to quit the game...");
        } else {
            printf("\n\n Computer has won!\n\n Press Enter to quit the game...");
        }
    }
    while(getch() != '\r');
}