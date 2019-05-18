#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int main(int argc, char *argv[]) 
{
	//Aufgabe 13-10
	
	char zeichenkette1[100];
	char zeichenkette2[100];
	int laenge;
	
	printf("Geben Sie einen Satz ein: ");
	gets(zeichenkette1);
	laenge = sizeof(zeichenkette1);
	
	int i;
	for (i = 0; i <= laenge; i++)
	{
		zeichenkette2[i] = zeichenkette1[i];
	}
	
	printf("Ihr String ist %s", zeichenkette2);
	
	//Aufgabe 13-11
	
	char st1[100];
	char st2[100];
	int length1;
	int length2;
	char tausch[100];
	
	printf("\n\nGeben Sie einen Satz ein: ");
	gets(st1);
	printf("Geben Sie einen zweiten Satz ein: ");
	gets(st2);
	length1 = sizeof(st1);
	length2 = sizeof(st2);
	
	int c;
	for (c = 0; c <= length1; c++)
	{
		tausch[c] = st1[c];
	}
	
	int k;
	for (k = 0; k <= length2; k++)
	{
		st1[k] = st2[k];
	}
	
	int m;
	for (m = 0; m <= length1; m++)
	{
		st2[m] = tausch[m];
	}
	
	printf("\nString 1: %s", st1);
	printf("\nString 2: %s", st2);
	
	//Aufgabe 13-12
	
	char str[100];
	char stringRev[100];
	int groesse;
	int z;
	
	printf("\n\nGeben Sie ein Wort ein: ");
	gets(str);
	
	groesse = strlen(str);
	z = groesse-1;
	
	int l;
	for(l = 0; l <= groesse; l++)
	{
		stringRev[l] = str[z];
		z--;
	}
	
	int n;
	for (n = 0; n < groesse; n++)
	{
		printf("%c", stringRev[n]);
	}
	
	//Aufgabe 13-13
	
	char klein[100] = {0};
	char gross[100] = {0};
	
	printf("\n\nGeben Sie ein Wort ein: ");
	gets(klein);
	
	int p;
	for(p = 0; p <= strlen(klein)-1; p++)
	{
		if('a' <= klein[p] && 'z' >= klein[p])
		{
			gross[p] = klein[p] - 32;
		}
		else if ('A' <= klein[p] && 'Z' >= klein[p])
		{
			gross[p] = klein[p];
		}
		else
		{
			printf("kein Buchstabe!");
		}
	}
	
	printf("%s", gross);
	
	//Aufgabe 13-16
	
	char satz[100+1] = {0};
	int anzahlBuchstabe[122+1] = {0};
	int satzLaenge = 0;
	int anzKlein = 0;
	int anzGross = 0;
	int anzLeerz = 0;
	int anzBuchstaben = 0;
	double prozent = 0;
	
	printf("\n\nGeben Sie einen Satz ein: ");
	gets(satz);
	satzLaenge = strlen(satz);
	
	int y;
	for(y = 0; y <= satzLaenge; y++)
	{
		if('a' <= satz[y] && 'z' >= satz[y])
		{
			anzKlein++;
		}
		else if ('A' <= satz[y] && 'Z' >= satz[y])
		{
			anzGross++;
		}
		else if (' ' == satz[y])
		{
			anzLeerz++;
		}
	}
	
	printf("Es gibt %i Gro%cbuchstaben, %i Kleinbuchstaben und %i Leerzeichen in diesem Satz.\n", anzGross, 225, anzKlein, anzLeerz);
	anzBuchstaben = anzGross + anzKlein;
	
	char o;
	for (o = 'A'; o <= 'z'; o++)
	{
		int v;
		for (v = 0; v <= satzLaenge; v++)
		{
			if (satz[v] == o)
			{
				int ii = o;
				if (o > 96)
				{
					ii = o - 32;
				}
				anzahlBuchstabe[ii]++;
			}
		}
	}
	
	int f;
	for (f = 0; f < 122; f++)
	{
		if (anzahlBuchstabe[f] != 0)
		{
			prozent = (double) (((anzahlBuchstabe[f]) / anzBuchstaben) * 100);
			printf("Der Buchstabe %c, %c kommt %i Mal vor %.3lf Prozent\n", f, f+32, anzahlBuchstabe[f], prozent);
		}
	}
	
	
	//Aufgabe 13-19
	
	unsigned long long int brett[7][7] = {0};
	unsigned long long int gesamtReis = 0;
	double gewicht = 0.0;
	double jahre = 0.0;
	
	//Befüllung
	int r;
	int s;
	for (r = 0; r <= 6; r++)
	{
		for (s = 0; s<= 6; s++)
		{
			if(s == 0 && r == 0)
			{
				brett[0][0] = 1;;
			}
			else
			{
				if (s == 0)
				{
					brett[r][0] = 2* (brett[r-1][6]);
				}
				else
				{
					brett[r][s] = 2*(brett[r][s-1]);
				}
			}
		}
	}
	
	//Ausgabe
	int w;
	int q;
	printf("\n\n\n");
	for (w = 0; w <= 6; w++)
	{
		for (q = 0; q <= 6; q++)
		{
			printf("  %I64u", brett[w][q]);
		}
		printf("\n");
	}
	
	//Gesamtanzahl berechnen
	for (r = 0; r <= 6; r++)
	{
		for (s = 0; s<= 6; s++)
		{
			gesamtReis += brett[r][s];
		}
	}
	
	printf("\nDie Gesamtanzahl an Reiskoerner ist: %lu", gesamtReis);
	
	//Gewicht berechnen --> 40 Reiskörner = 1 Gramm
	gewicht = (double) (gesamtReis / 40.0);
	gewicht = gewicht / 1000.0 / 1000.0;
	printf("\nDas Gewicht in Tonnen betraegt: %lf", gewicht);
	
	//540 Mio Tonnen Reis pro Jahr 
	jahre = gewicht / 540000000;
	printf("\n%lf", jahre);
	
	return 0;
}
