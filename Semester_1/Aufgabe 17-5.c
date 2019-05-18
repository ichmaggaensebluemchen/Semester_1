#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

//globale Variablen
int erg, rest;

//Funktionsprototypen
int teile(int, int, int *, int *);
int teile2(int, int);

//Augabe 17-5
void main(void)
{
	int i, j;
	int e;
	int r;
	int division;
	int division2;

	printf("Bitte geben Sie eine Zahl ein: ");
	scanf_s("%i", &i);
	printf("Bitte geben Sie eine zweite Zahl ein, durch diese die erste geteilt wird: ");
	scanf_s("%i", &j);

	division = teile(i, j, &e, &r);
	if (division == 0)
	{
		printf("\nEs ist keine Divison durch 0 moeglich!");
	}
	else
	{
		printf("Das Divisionsergebnis ist: %i und der Rest ist: %i.", e, r);
	}


	division2 = teile2(i, j);
	if (division2 == 0)
	{
		printf("\nEs ist keine Divison durch 0 moeglich!");
	}
	else
	{
		printf("\nDas Divisionsergebnis ist: %i und der Rest ist: %i.", erg, rest);
	}

	getch();
}

int teile(int i, int j, int *e, int *r)
{
	if (j == 0)
	{
		return 0;
	}
	else
	{
		*e = i / j;
		*r = i % j;

		return 1;
	}
}

int teile2(int i, int j)
{
	if (j == 0)
	{
		return 0;
	}
	else
	{
		erg = i / j;
		rest = i % j;

		return 1;
	}
}

