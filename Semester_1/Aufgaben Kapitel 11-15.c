/*Aufgabe 11 - 15 Funktionen*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)

void ausgabe(int);

int main(void)
{
	int anzScheiben;
	
	printf("Bitte waehlen Sie eine Anzahl der Scheiben zwischen 3 und 5!");
	scanf("%i", &anzScheiben);
	
	ausgabe(anzScheiben);
	
	system("Pause");
	return(999);
}

void ausgabe(int anzScheiben)
{
	system("cls");
	switch(anzScheiben)
	{
		case 3: //einziger Teil, der funktioniert (ohne Rekursion, reine Anzeige!)
			printf("Tuerme von Hanoi\n\n");
			printf("          x|x                   |                    |           \n");
			printf("         xx|xx                  |                    |           \n");
			printf("        xxx|xxx                 |                    |           \n");
			
			Sleep(1200);
			system("cls");
			printf("Tuerme von Hanoi\n\n");
			printf("           |                    |                    |           \n");
			printf("         xx|xx                  |                    |           \n");
			printf("        xxx|xxx                 |                   x|x          \n");
			
			Sleep(1200);
			system("cls");
			printf("Tuerme von Hanoi\n\n");
			printf("           |                    |                    |           \n");
			printf("           |                    |                    |           \n");
			printf("        xxx|xxx               xx|xx                 x|x          \n");
			
			Sleep(1200);
			system("cls");
			printf("Tuerme von Hanoi\n\n");
			printf("           |                    |                    |           \n");
			printf("           |                   x|x                   |           \n");
			printf("        xxx|xxx               xx|xx                  |           \n");
			
			Sleep(1200);
			system("cls");
			printf("Tuerme von Hanoi\n\n");
			printf("           |                    |                    |           \n");
			printf("           |                   x|x                   |           \n");
			printf("           |                  xx|xx               xxx|xxx        \n");
			
			Sleep(1200);
			system("cls");
			printf("Tuerme von Hanoi\n\n");
			printf("           |                    |                    |           \n");
			printf("           |                    |                    |           \n");
			printf("          x|x                 xx|xx               xxx|xxx        \n");
			
			Sleep(1200);
			system("cls");
			printf("Tuerme von Hanoi\n\n");
			printf("           |                    |                    |           \n");
			printf("           |                    |                  xx|xx         \n");
			printf("          x|x                   |                 xxx|xxx        \n");
			
			Sleep(1200);
			system("cls");
			printf("Tuerme von Hanoi\n\n");
			printf("           |                    |                   x|x          \n");
			printf("           |                    |                  xx|xx         \n");
			printf("           |                    |                 xxx|xxx        \n");
			
			break;
		case 4:
			printf("          x|x                   |                    |           \n");
			printf("         xx|xx                  |                    |           \n");
			printf("        xxx|xxx                 |                    |           \n");
			printf("       xxxx|xxxx                |                    |           \n");
			break;
		case 5:
			printf("          x|x                   |                    |           \n");
			printf("         xx|xx                  |                    |           \n");
			printf("        xxx|xxx                 |                    |           \n");
			printf("       xxxx|xxxx                |                    |           \n");
			printf("      xxxxx|xxxxx               |                    |           \n");
			break;
		default: printf("Eingabefehler");
	}
}
