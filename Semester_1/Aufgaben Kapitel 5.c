#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	/*Aufgabe 5-6*/
	int ganz_zahl = 100;
	printf("Ganzzahl: %d\n\n", ganz_zahl);
	
	/*Aufgabe 5-7*/
	float pi = 3.141592654;
	float radius;
	float flaeche;
	
	printf("Bitte geben Sie ein Radius ein (Kommazahl): ");
	scanf("%f", &radius);
	flaeche = pi * radius * radius;
	printf("Der Radius ist: %f\n\n", flaeche);
	
	/*Aufgabe 5-9*/
	float kommazahl;
	
	printf("Bitte geben Sie eine Kommazahl ein: ");
	scanf("%f", &kommazahl);
	printf("%.3f\n\n", kommazahl);
	
	/*Aufgabe 5-10*/
	float getankteLiter;
	float gefahreneKm;
	float verbrauch;
	
	printf("Bitte geben Sie an, wie viele Liter sie getankt haben: ");
	scanf("%f", &getankteLiter);
	printf("Bitte geben Sie an, wie weit Sie gefahren sind (km)): ");
	scanf("%f", &gefahreneKm);
	
	verbrauch = (getankteLiter * 100)/gefahreneKm;
	printf("Der Verbrauch ist: %f\n\n", verbrauch);
	
	/*Aufgabe 5-15*/
	int zahl = 77; 
	char buchstabe = 'A'; 
	float kommazahl2 = 2.123; 
	printf("%c\n%d\n%c\n%d\n%f\n\n\n",zahl,zahl,buchstabe,buchstabe,kommazahl2);

	/*Aufgabe 5-17*/
	int i; 
	unsigned int ui; 
	float f1, f2; 
	i = -5./3.; 
	ui = -5/3; 
	f1 = -5./3.; 
	f2 = -5/3;
	
	printf("%d\n", i);
	printf("%u\n", ui);
	printf("%f\n", f1);
	printf("%f\n", f2);
			
	system("Pause");
	return(999);
}
