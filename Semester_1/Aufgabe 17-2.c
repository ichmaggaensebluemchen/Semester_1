#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

void print_rev(int, char *);

//Augabe 17-2
int main(int argc, char *argv[]) 
{	
	char array[80+1];
	int laenge = 0;
	
	printf("Geben Sie einen Satz oder Wort ein, das rueckwaerts ausgegeben werden soll!\n");
	fflush(stdin);
	gets(array);
	laenge = strlen(array);
	print_rev(laenge, array);
	
	return 0;
}

void print_rev(int laenge, char *a)
{
	int i;
	for(i = laenge; i >= 0; i--)
	{
		printf("%c", a[i]);	
	}
}
