#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

void print_brett(char (*)[9]);

//Augabe 17-3
void main(void)
{
	char brett[9][9] = {' '};
	brett[4][2] = '*';

	int c;
	for (c = 1; c <= 8; c++)
	{
		brett[0][c] = 48 + c;
	}

	for (c = 1; c <= 8; c++)
	{
		brett[c][0] = 64 + c;
	}

	print_brett(brett);
	getch();
}
/*  1. Möglichkeit :
*     Automatische Umsetzung, wird vom Compiler vorgenommen
*     void print_brett(char b[9])
*/
/*  2. Möglichkeit:
*     Explizite Umsetzung
*/
void print_brett(char (*b)[9])
{
	int i;
	int j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", b[i][j]);
		}
		printf("\n");
	}
}
