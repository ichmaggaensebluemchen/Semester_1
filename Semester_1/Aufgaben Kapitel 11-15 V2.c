/*Aufgabe 11 - 15 Funktionen und Rekursion*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)

//Prototypten der Funktionen
void anzeige();
void bewegen();

//globale Variablen
int anzScheiben;
int spielfeld[3][20]; //Array mit [Stabnummer][Höhe der Scheibe auf dem Stab] = Breite der Scheibe

int main(void)
{
	printf("Bitte waehlen Sie eine Anzahl der Scheiben.");
	scanf_s("%i", &anzScheiben);

	//Initalisierung des Spielfeldes
	int i, j, c;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < anzScheiben; j++)
		{
			spielfeld[i][j] = 0;
		}
	}
	//Startaufstellung
	int breite = anzScheiben;
	for (c = 0; c <= anzScheiben; c++)
	{
		spielfeld[0][c] = breite; //Position der Scheibe auf dem Stab 0 und breite der Scheibe, unten größte Scheibe
		breite--;
	}
	anzeige();
	Sleep(5000);
	//Startmeldung
	system("cls");
	printf("\t\tDie Tuerme von Hanoi\n\n\n\n");

	do
	{
		//Aufruf der Anzeige
		system("cls");
		printf("\t\tDie Tuerme von Hanoi\n\n\n\n");
		//Scheibenschrittweise verschieben
		bewegen();
		anzeige();
		Sleep(5000);
	} while (spielfeld[2][anzScheiben - 1] != 1);

	system("Pause");
	return(999);
}

//Anzeige der Türme von Hanoi
void anzeige()
{
	int rand = 15;
	int breite = 1;
	int stab = 0;
	int scheibe = 0;

	for (scheibe = anzScheiben; scheibe >= 0; scheibe--)
	{
		for (stab = 0; stab < 3; stab++)
		{
			for (rand = 0; rand < (15 - spielfeld[stab][scheibe]); rand++)
			{
				printf(" ");
			}
			for (breite = 0; breite < (spielfeld[stab][scheibe]); breite++)
			{
				printf("X");
			}
			printf("|");
			for (breite = 0; breite < (spielfeld[stab][scheibe]); breite++)
			{
				printf("X");
			}
			for (rand = 0; rand < (15 - spielfeld[stab][scheibe]); rand++)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void bewegen()
{
	if (anzScheiben == 1)
	{
		spielfeld[0][0] = 0;
		spielfeld[2][anzScheiben-1] = 1;
	}
}