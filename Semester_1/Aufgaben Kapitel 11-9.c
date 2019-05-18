/*Aufgabe 11 - 9 Funktionen*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)

double volumen(int, double, double);

int main(void)
{
	int art = 0;
	double radius;
	double hoehe;
	double volumenErg;
	
	printf("Welche Art von Koerper wollen Sie berechnen?\n1. Kegel\n2. Zylinder\n");
	scanf("%i", &art);
	printf("\nBitte Radius eingeben: ");
	scanf("%lf", &radius);
	printf("\nBitte Hoehe eingeben: ");
	scanf("%lf", &hoehe);
	
	volumenErg = volumen(art, radius, hoehe);
	printf("%lf\n", volumenErg);
	
	system("Pause");
	return(999);
}

double volumen(int art, double radius, double hoehe)
{
	double erg;
	
	if(art == 1)
	{
		erg = (M_PI*radius*radius*hoehe)/3;
		printf("\nDas Volumen des Kegels betraegt ");
	}
	else if(art == 2)
	{
		erg = M_PI*radius*radius*hoehe;
		printf("\nDas Volumen des Zylinders betraegt ");
	}
	else
	{
		printf("Fehler, falsche Eingabe!");
		erg = -1;
	}
	return(erg);
}
