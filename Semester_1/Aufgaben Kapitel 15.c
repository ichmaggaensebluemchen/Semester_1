#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	//Augabe 15-1
	
	int x, y;
	int *p_zahl;
	
	p_zahl = &x;
	*p_zahl = 5;
	printf("x ist: %i", x);
	
	p_zahl = &y;
	*p_zahl = 20;
	printf("\ny ist %i", y);

	
	return 0;
}
