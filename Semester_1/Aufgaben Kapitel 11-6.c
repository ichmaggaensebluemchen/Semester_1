#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <winbase.h>
#include <dos.h>
#pragma warning(disable : 4996)

void tonausgabe(int);

int main(void)
{
	/*Aufgabe 11 - 6*/
	
	int anzahl = 0;

	printf("Wie oft soll der Ton ausgegeben werden?");
	scanf("%i", &anzahl);
	printf("Die Anzahl ist: %i\n", anzahl);
	fflush(stdin);	
	tonausgabe(anzahl);

	system("Pause");
	return(999);
}


void tonausgabe(int a)
{
	while (a > 0)
	{
		Beep(400, 300);
		Sleep(300);
		printf("Es sollte %i mal beep machen!", a);
		a--;
	}
}
