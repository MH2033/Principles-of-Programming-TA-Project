#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *p1name, *p2name;

int welcome_screen(void)
{
    int i = 1, c, flag;
    system("CLS");
	printf("\n 1. Player vs Player");
	printf("\n 2. Player vs Computer");
	printf("\n\n Enter a number: ");
	p1name = (char *)malloc(sizeof(char) * i);
	if(getchar() == '1') {
        printf("\n Enter Player 1 name:");
        getchar();//flushes '\n' from buffer
        while((c = getchar()) != '\n'){
            *(p1name + i - 1) = c;
            realloc(p1name, sizeof(char) * (i+1));
            i++;
        }
        *(p1name + i - 1) = 0;
        printf("\n Enter Player 2 name:");
        p2name = (char *)malloc(sizeof(char) * i);
        i = 1;
        while((c = getchar()) != '\n'){
            *(p2name + i - 1) = c;
            realloc(p2name, sizeof(char) * (i+1));
            i++;
        }
        *(p2name + i - 1) = 0;
        return 1;
    }
	else {
        printf("\n Enter Player 1 name:");
        getchar();//flushes '\n' from buffer
        while ((c = getchar()) != '\n') {
            *(p1name + i - 1) = c;
            realloc(p1name, sizeof(char) * (i + 1));
            i++;
        }
        *(p1name + i - 1) = 0;
        if(strcmp(p1name, "Computer") == 0){
            flag = 1;
            while(flag) {
                printf("\n This name is reserved by computer try another one:");
                i = 1;
                p1name = (char *)malloc(sizeof(char) * i);
                while ((c = getchar()) != '\n') {
                    *(p1name + i - 1) = c;
                    realloc(p1name, sizeof(char) * (i + 1));
                    i++;
                }
                *(p1name + i - 1) = 0;
                if(strcmp(p1name, "Computer") != 0)
                    flag = 0;
            }
        }
        return 0;
    }
}