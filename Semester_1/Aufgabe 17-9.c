//Aufgabe 17-9

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#pragma warning(disable : 4996)

double dreieck(float *a, float *b, float *c);

int main(void)
{
	float a, b, c;
	double flaecheninhalt;
	
	printf("Bitte geben Sie die erste Seitenlaenge des Dreiecks ein: ");
	scanf("%f", &a);
	printf("Bitte geben Sie die zweite Seitenlaenge des Dreiecks ein: ");
	scanf("%f", &b);
	printf("Bitte geben Sie die dritte Seitenlaenge des Dreiecks ein: ");
	scanf("%f", &c);
	
	flaecheninhalt = dreieck(&a, &b, &c);
	printf("Der Flaecheninhalt des Dreiecks betraegt: %lf", flaecheninhalt);
	
	return 0;
}

double dreieck (float *a, float *b, float *c)
{
	float s;
	double flaeche = 0;
	
	s = (*a + *b + *c) / 2.0;
	flaeche = (double) sqrt(s * (s - (*a)) * (s - (*b)) * (s - (*c)));
	
	return flaeche;
}
