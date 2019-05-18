/*Aufgabe 11 - 15 Funktionen und Rekursion*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)

//Prototypten der Funktionen
	void anzeige();
	
//globale Variablen
	int anzScheiben;
	int spielfeld[3][100]; //Array mit [Stabnummer][Höhe der Scheibe auf dem Stab] = Breite der Scheibe

int main(void)
{
	printf("Bitte waehlen Sie eine Anzahl der Scheiben.");
	scanf("%i", &anzScheiben);
	
	//Initalisierung des Spielfeldes
	int i, j, c;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < anzScheiben; j++)
		{
			spielfeld[i][j] = 0;
		}
	}
	//Startaufstellung
	for(c = 0; c < anzScheiben; c++)
	{
		spielfeld[0][c] = anzScheiben; //Position der Scheibe auf dem Stab 0 und breite der Scheibe, unten größte Scheibe
	}
	//Startmeldung
	system("cls");
	printf("\t\tDie Tuerme von Hanoi\n\n\n\n");
	
	//Aufruf der anzeige
	anzeige();
	
	system("Pause");
	return(999);
}

//Anzeige der Türme von Hanoi
void anzeige()
{
	int breite; //Breite der Scheibe = Wert des Arrays
	int platz; //Leerzeichen vom Rand weg
	
	int j, i, k, c;
	
	for(j=0; j < 3; j++)
	{
		for(i = anzScheiben; i > 0; i--)
		{
			breite = spielfeld[j][i];
			platz = (24 - breite)/2;
			for (k = 1; k <= platz; k++)
			{
				printf(" ");
			}
			for(c = 1; c <= (breite/2); c++) //linke Seite der Scheibe
			{
				printf("X");
			}
			printf("|");					      //Mittelpunkt
			for(c = 1; c <= (breite/2); c++) //rechte Seite der Scheibe
			{
				printf("X");
			}
			for (k = 1; k <= platz; k++)
			{
				printf(" ");
			}
			printf("\n");
		}
	}
}
