#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

//Aufgabe 19-4

int main(int argv, int *argc[])
{
	//Variablen
	int auswahl;
	char eingabe[30+1];
	int vorgAktuell;
	int nachfolgerAktuell;
	float neuesGehalt;

	//Struktur
	typedef struct struktur
	{
		char vorname[80 + 1];
		char nachname[80 + 1];
		char abteilung[80 + 1];
		char position[80 + 1];
		float gehalt;

		struct struktur *previous;
		struct struktur *next;
	} mitarbeiter;

	mitarbeiter *aktuell = 0; //Zeiger auf aktuelles Element der Liste
	mitarbeiter *tmp = 0; //Zeiger auf Zwischenspiecher
	mitarbeiter *start = 0; // Zeiger auf erstes Element der Liste

	while (1)
	{
		system("cls");
		printf("Waehlen Sie ein Programmpunkt:\n1-Neuen Mitarbeiter eingeben\n2-Mitarbeiter aendern\n3-Mitarbeiter loeschen\n4-Individuelle Gehaltserhoehung\n5-Generelle Gehaltserhoehung\n6-Mitarbeiter ausgeben\n7-Programm beenden");
		scanf_s("%i", &auswahl);
		switch (auswahl)
		{
		case 1:
			system("cls");
			aktuell = malloc(sizeof(mitarbeiter));

			if (!tmp) // wenn im Zwischenspeicher 0 steht
			{
				start = aktuell; //Zeiger auf Start der Liste bekommt die Adresse des ersten Elements übergeben
				aktuell->previous = 0;	//akutelles Element der Liste bekommt als Vorgänger eine 0 --> konkret das erste Element
			}
			else
			{
				tmp->next = aktuell;   //Vorgängerelement erhält als next die Adresse des aktullen Elements
				aktuell->previous = tmp;  //aktuelles Element erhält als Vorgänger die Adresse des vorherigen Elements (akutelles tmp) 
			}

			//nach Inhalten für Mitarbeiter fragen und im aktullen Element der Liste speichern
			printf("Bitte Mitarbeitervorname eingeben ");
			fflush(stdin);
			gets(aktuell->vorname);
			printf("Bitte Mitarbeiternachname eingeben ");
			fflush(stdin);
			gets(aktuell->nachname);
			printf("Bitte Abteilung des Mitarbeiters eingeben ");
			fflush(stdin);
			gets(aktuell->abteilung);
			printf("Bitte Position des Mitarbeiters eingeben ");
			fflush(stdin);
			gets(aktuell->position);
			printf("Bitte Gehalt des Mitarbeiters eingeben ");
			fflush(stdin);
			scanf_s("%f", &aktuell->gehalt);

			aktuell->next = 0; //vorsorglich Element als letztes der Liste markieren

			tmp = aktuell; //der Zwischenspeicher erhält die Adresse des aktuellen Elements
			break;
		case 2:
			//Mitarbeiter ändern
			system("cls");
			printf("Welchen Mitarbeiter wollen Sie bearbeiten? Bitte geben Sie seinen Nachname ein!");
			fflush(stdin);
			gets(eingabe);
			tmp = start;
			while (tmp)		//solange tmp ungleich 0
			{
				if (tmp->nachname == eingabe)
				{
					aktuell = tmp;
					tmp = 0;
				}
				else
				{
					tmp = tmp->next;	
				}
			}
			printf("\nDer Mitarbeiter %s", aktuell->vorname);
			printf("%s aus der Abteilung", aktuell->nachname);
			printf("%s hat die Position", aktuell->abteilung);
			printf("%s und verdient", aktuell->position);
			printf("%f Euro.\n", &aktuell->gehalt);
			printf("\nBitte geben Sie nun die neuen Daten fuer den Mitarbeiter %s ein", aktuell->nachname);
			printf("\nBitte Mitarbeitervorname eingeben ");
			fflush(stdin);
			gets(aktuell->vorname);
			printf("Bitte Mitarbeiternachname eingeben ");
			fflush(stdin);
			gets(aktuell->nachname);
			printf("Bitte Abteilung des Mitarbeiters eingeben ");
			fflush(stdin);
			gets(aktuell->abteilung);
			printf("Bitte Position des Mitarbeiters eingeben ");
			fflush(stdin);
			gets(aktuell->position);
			printf("Bitte Gehalt des Mitarbeiters eingeben ");
			fflush(stdin);
			scanf_s("%f", &aktuell->gehalt);
			break;
		case 3:
			printf("Welchen Mitarbeiter wollen Sie loeschen? Bitte geben Sie den Nachnamen ein: ");
			fflush(stdin);
			gets(eingabe);
			tmp = start;
			while (tmp)		//solange tmp ungleich 0
			{
				if (tmp->nachname == eingabe)
				{
					aktuell = tmp;
					tmp = 0;
				}
				else
				{
					tmp = tmp->next;	
				}
			}
			vorgAktuell = (int) aktuell->previous;
			nachfolgerAktuell = (int) aktuell->next;
			tmp = (int) vorgAktuell;
			tmp->next = nachfolgerAktuell;
			tmp = nachfolgerAktuell;
			tmp->previous = vorgAktuell;
			free(aktuell);
			break;
		case 4:
			//Individuelle Gehaltserhöhung
			system("cls");
			printf("Welchem Mitarbeiter wollen Sie das Gehalt erhoehen? Bitte geben Sie den Nachnamen ein: ");
			fflush(stdin);
			gets(eingabe);
			tmp = start;
			while (tmp)		//solange tmp ungleich 0
			{
				if (tmp->nachname == eingabe)
				{
					aktuell = tmp;
					tmp = 0;
				}
				else
				{
					tmp = tmp->next;	
				}
			}
			printf("Bitte geben Sie das neue Gehalt ein: ");
			scanf("%f", &aktuell->gehalt);
			break;
		case 5:
			//Generelle Gehaltserhöhung
			system("cls");
			printf("Auf welchen Betrag wollen Sie das Gehalt aendern: ");
			scanf("%f", &neuesGehalt);
			tmp = start;
			while (tmp)		//solange tmp ungleich 0
			{
				tmp->gehalt = neuesGehalt;
				tmp = tmp->next;
			}
			break;
		case 6:
			tmp = start;
			while (tmp)		//solange tmp ungleich 0
			{
				printf("Der Mitarbeiter %s", aktuell->vorname);
				printf("%s aus der Abteilung", aktuell->nachname);
				printf("%s hat die Position", aktuell->abteilung);
				printf("%s und verdient", aktuell->position);
				printf("%f Euro.\n", &aktuell->gehalt);

				tmp = tmp->next;
			}
			break;
		case 7: exit(0);
			break;
		default: printf("Falsche Eingabe!!");
		}
	}

	return 0;
}
