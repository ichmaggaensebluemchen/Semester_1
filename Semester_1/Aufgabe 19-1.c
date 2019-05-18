//Aufgabe 19-1

#include <stdio.h> 
#include <stdlib.h> 
#pragma warning(disable : 4996)

int main(void) 
{
	typedef struct strukturname
	{
		char name[30+1];
		float gehalt;
		int alter;
		char department[80+1];
		char haus;
		struct strukturname *next;
	} datensatz;
	
	datensatz *liste;
	datensatz *start = 0;
	datensatz *tmp = 0;
	
	liste = malloc(sizeof(datensatz));
	
	if(!tmp)
	{
		start = liste;
	}
	else
	{
		tmp->next = liste;
	}
	tmp = liste;
	
	printf("Bitte Namen eingeben: ");
	fflush(stdin);
	gets(liste->name);
	printf("Bitte Gehalt eingeben: ");
	fflush(stdin);
	scanf("%f", &(liste->gehalt));
	printf("Bitte Alter eingeben: ");
	fflush(stdin);
	scanf("%i", &(liste->alter));
	printf("Bitte Department eingeben: ");
	fflush(stdin);
	gets(liste->department);
	printf("Bitte Gebaeude eingeben: ");
	fflush(stdin);
	scanf("%c", &(liste->haus));
	
	liste->next = 0;
	
	tmp = start;
	
	while(tmp)
	{
		printf("\n%s bekommt %.2f Euro Gehalt, ist %i Jahre alt, gehoert zum %s Department und sitzt im Gebaeude %c.", tmp->name, tmp->gehalt, tmp->alter, tmp->department, tmp->haus);
		
		tmp = tmp->next;
	}
	
	return 0;
}
