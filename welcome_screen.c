#include <stdio.h>
#include <stdlib.h>
int welcome_screen(void)
{
    system("CLS");
	printf("\n 1. Player 1 vs Player 2");
	printf("\n 2. Player 1 vs Computer");
	printf("\n\n Enter a number: ");
	if(getchar() == '1')
		return 1;
	else
		return 0;
}