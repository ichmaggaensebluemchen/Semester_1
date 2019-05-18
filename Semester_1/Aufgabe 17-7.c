#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

//Funktionsprototypen
long int atolNeu(char *);

//Augabe 17-7
int main(int argc, char *argv[])
{
	char text[80+1] = {0};
	long int umwandlung;

	printf("Bitte geben Sie eine Zahl ein: ");
	gets(text);

	umwandlung = atol(text);
	printf("Die Zahl ist: %ld", umwandlung);
}

long int atolNeu(char *text)
{
	long int ergebnis;
	
	int i;
	for(i = 0; text[i] !='\0'; i++)
	{
		ergebnis = ergebnis * 10 + text[i] - '0';
	}
	return ergebnis;
}
