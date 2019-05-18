/*Aufgabe 11 - 15 Funktionen und Rekursion*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)

//Prototypten der Funktionen
	void anzeige();
	void bewegen(int, int);
	void hanoi(int, int, int);
	
//globale Variablen
	int anzScheiben;
	int spielfeld[3][20]; //Array mit [Stabnummer][Höhe der Scheibe auf dem Stab] = Breite der Scheibe

int main(void)
{
	printf("Bitte waehlen Sie eine Anzahl der Scheiben.");
	scanf("%i", &anzScheiben);
	
	//Initalisierung des Spielfeldes
	int i, j, c;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j <= anzScheiben; j++)
		{
			spielfeld[i][j] = 0;
		}
	}
	int scheiben = anzScheiben;
	//Startaufstellung
	for(c = 0; c <= anzScheiben; c++)
	{
		spielfeld[0][c] = anzScheiben; //Position der Scheibe auf dem Stab 0 und breite der Scheibe, unten größte Scheibe
	}
	//Startmeldung
	printf("\t\tDie Tuerme von Hanoi\n\n\n\n");
	anzeige();
	Sleep(5000);
	
	//Beginn der Bewegung
	system("cls");
	printf("\t\tDie Tuerme von Hanoi\n\n\n\n");
	hanoi(0, 2, anzScheiben);

	system("Pause");
	return(999);
}

//Anzeige der Türme von Hanoi
void anzeige()
{
	int breite = 1; //Breite der Scheibe = Wert des Arrays
	int rand = 15; //Leerzeichen vom Rand weg
	int stab = 0; //Stäbe
	int scheibe = 0;	//aktuelle Scheibe
	
	for(scheibe = anzScheiben; scheibe >= 0; scheibe--)		//Schleife über die Scheiben
	{
		for(stab = 0; stab < 3; scheibe++)	//Schleife über die Stäbe
		{
			for(rand = 0; rand < (15 - spielfeld[stab][scheibe]); rand++)
			{
				printf(" ");
			}
			for(breite = 0; breite < (spielfeld[stab][scheibe]); breite++)
			{
				printf("X");
			}
			printf("|");
			for(breite = 0; breite < (spielfeld[stab][scheibe]); breite++)
			{
				printf("X");
			}
			for(rand = 0; rand < (15 - spielfeld[stab][scheibe]); rand++)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void hanoi(int von, int nach, int hoehe)		//Türme von Hanoi rekursiv bewegen
{
	int hilfe;
	if (hoehe == 1)	//2 - transportiere eine (die größte Scheibe) von Stab 0 dirket nach Stab 2
	{
		bewegen(von, nach);
	}
	else
	{
		//drei verschiedene Fälle, wenn anzScheiben > 1
		//1 - bewegen von anzScheiben-1 (nicht mehrere auf einmal, nur weniger als anzScheiben) von Stab 0 über Stab 2 nach Stab 1
		//3 - bewegen von anzScheiben-1 von Stab 2 über Stab 0 nach Stab 2
		int hilfe = 3 - von - nach; //Ermittlung des freien Stabes
		
		hanoi(von,hilfe,hoehe-1);
   		bewegen(von,nach);
   		hanoi(hilfe,von,hoehe-1);
   		hanoi(von,nach,hoehe-1);
	}	
}

void bewegen(int von, int nach) //Spielfeld neue Anordnen
{
	int i,j;
 	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nBewege eine Scheibe von %d nach %d\n\n",von,nach);
 	for(i=anzScheiben -1; !(spielfeld[von][i]); i--);
	for(j=anzScheiben -1; !(spielfeld[nach][j]) && j>=0; j--);
 	spielfeld[nach][j+1] = spielfeld[von][i];
	spielfeld[von][i] = 0;
 	anzeige();
 	Sleep(5000);
 	system("cls");
}
