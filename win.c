#include <stdio.h>
#include <windows.h>
#include <conio.h>
extern int score1,score2;
extern double times;
void win(void){
    system("CLS");
    printf("\n Player 1: %d\n Player 2: %d", score1, score2);
    if (score1 > score2)
        printf("\n\n Player 1 has won!\n\n Press any key to quit the game...");
    else if (score1 == score2) {
        printf("\n\n Draw!\n\n Press any key to quit the game...");
    } else {
        printf("\n\n Player 2 has won!\n\n Press any key to quit the game...");
    }
    getch();
}