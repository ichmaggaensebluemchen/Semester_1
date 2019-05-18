#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	/*Aufgabe 8-4*/
	int geburtsjahr;
	printf("\nBitte geben Sie Ihr Geburtsjahr ein: ");
	scanf("%i", &geburtsjahr);
	if (geburtsjahr <= 2000)
	{
		printf("\nSie sind volljaehrig\n");
	}
	else 
	{
		printf("\nSie sind nicht volljaehrig!\n");
	}
	
	/*Aufgabe 8-7*/
	int i=2,j=3,k=5; 
	
	if(k=i) 
	{ 
		if(k==i) 
		{ 
			j=k*2*i; 
		} 
		else 
		{ 
			i=i*j; 
			
			if(j=k) printf("i: %d, j: %d, k: %d",i,j,k); 
		} 
	} 
	else 
	{ 
		printf("i: %d, j: %d, k: %d",i,j,k); 
	} 
	if((j/2)==(k*i)) 
	{ 
		printf("i: %d, j: %d, k: %d",i,j,k);
	}
	
	/*Aufgabe 8-7*/
	int bruttogehalt;
	float steuerbetrag;
	
	printf("\n\nBitte geben Sie Ihr Bruttogehalt ein: ");
	scanf("%i", &bruttogehalt);
	
	if (bruttogehalt <= 1000)
	{
		printf("Der Steuerbetrag betraegt 0 Euro");
	}
	else if (bruttogehalt > 1000 && bruttogehalt <= 5000)
	{
		steuerbetrag = (float) bruttogehalt * 0.45;
		printf("\nDer Steuerbetrag betraegt %.2f Euro\n", steuerbetrag);
	}
	else
	{
		steuerbetrag = (float) bruttogehalt * 0.55;
		printf("\nDer Steuerbetrag betraegt %.2f Euro\n", steuerbetrag);
	}
	
	
	/*Aufgabe 8-8*/	
	int x;
	int h;
	
	printf("\n\nBitte geben Sie einen Wert fuer die Variable x ein.\n");
	scanf("%i", &x);
	
	if (x > 7) h=4;
	else h=-3;
	
	printf("Nach der Formel: 4x² + 7x + h ergibt sich folgendes Ergebnis: %i\n", (4*x*x + 7*x +h));
	
	
	/*Aufgabe 8-13*/
	int menuepunkt;
	
	printf("\n\nBitte waehle einen Menuepunkt mit der jeweiligen Zahl:\n\n1. Daten eingeben\n2. Daten ausgeben\n3. Beenden\n");
	scanf("%i", &menuepunkt);
	
	switch (menuepunkt)
	{
		case 1: 
			printf("\nDu hast Menuepunkt 1 gewaehlt!\n");
			break;
		case 2: 
			printf("\nDu hast Menuepunkt 2 gewaehlt!\n");
			break;
		case 3:
			printf("\nDu hast Menuepunkt 3 gewaehlt!\n");
			break;
		default: printf("\nEingabefehler!\n");
	}
	
	
	system("Pause");
	return(999);
}
