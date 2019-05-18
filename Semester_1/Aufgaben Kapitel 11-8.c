/*Aufgabe 11 - 8 Funktionen*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

double potenzieren(double, int);

int main(void)
{
	double basis;
	int exponent;
	double hoch; //Ergebnis der Potenzierung
	
	printf("Bitte geben Sie eine Zahl als Basis ein: ");
	scanf("%lf", &basis);
	printf("Bitte geben Sie eine Zahl als Exponent ein: ");
	scanf("%i", &exponent);
	
	if(exponent == 0) //hoch Null gibt immer 1
	{
		hoch = 1;
		printf("\nDas Ergebnis der Potenzierung ist: %lf", hoch);
	}
	else if(exponent < 0) //negativer Exponent ergibt Fehler
	{
		hoch = -1;
		printf("\nFehler: Negativer Exponent!");
		printf("\nDas Ergebnis der Potenzierung ist: %lf", hoch);
	}
	else if(exponent == 1) //Exponent ist Eins, dann ist Ergebnis gleich der Basis
	{
		hoch = basis;
		printf("\nDas Ergebnis der Potenzierung ist: %lf", hoch);
	}
	else //sonst wird die Funktion potenzieren aufgerufen, sie soll das Ergebnis der Potenzierung berechnen
	{
		hoch = potenzieren(basis, exponent);
		printf("\nDas Ergebnis der Potenzierung ist: %lf", hoch);
	}

	system("Pause");
	return(999);
}

double potenzieren (double basis, int exponent)
{
	double ergebnis = basis; //das Ergebnis bekommt den Wert der Basis, damit ergebnis mal basis basis hoch 2 entspricht
	while (exponent > 1)
	{
		ergebnis = ergebnis * basis;
		exponent--;
	}
	return(ergebnis);
}
