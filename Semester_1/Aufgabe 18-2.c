//Aufgabe 18-2

#include <stdio.h> 
#include <stdlib.h> 
#pragma warning(disable : 4996)

int main(void) 
{
	int anzahlZeichen;
	char *zeichen;
	
	printf("Wie viele Zeichen moechten Sie eingeben? ");
	fflush(stdin);
	scanf("%i", &anzahlZeichen);
	zeichen = malloc((sizeof(char))*anzahlZeichen);
	
	printf("Bitte die Zeichen eingeben: ");
	fflush(stdin);
	gets(zeichen);
	printf("\nDer reservierte Speicherplatz betraegt: %i", (sizeof(char))*anzahlZeichen);
	printf("\nDie eingegebenen Zeichen sind: %s", zeichen);
	
	free(zeichen);
}
