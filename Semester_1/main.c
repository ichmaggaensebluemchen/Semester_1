#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(int argc, char *argv[]) 
{
	//Aufgabe 14-3
	
	struct
	{
		char vorname[80+1];
		char nachname[80+1];
		char strasse[80+1];
		char plz[10];
		char ort[80+1];
		char telefon[20];
	} eintrag;
	
	printf("Geben Sie Ihren Vornamen ein: ");
	gets(eintrag.vorname);
	printf("Geben Sie Ihren Nachnamen ein: ");
	gets(eintrag.nachname);
	printf("Geben Sie Ihre Stra%ce mit Hausnummer ein: ", 225);
	gets(eintrag.strasse);
	printf("Geben Sie Ihre Postleitzahl ein: ");
	gets(eintrag.plz);
	printf("Geben Sie Ihren Wohnort ein: ");
	gets(eintrag.ort);
	printf("Geben Sie Ihre Telefonnummer ein: ");
	gets(eintrag.telefon);
	
	printf("\n%s %s", eintrag.vorname, eintrag.nachname);
	printf("\n%s", eintrag.strasse);
	printf("\n%s %s", eintrag.plz, eintrag.ort);
	printf("\nTel: %s", eintrag.telefon);
	getch();
	
	//Aufgabe 14-4
	
	int nochmal = 1;
	int menuepunkt = 0;
	int i = 0;
	int welcher = 0;
	int aktion = 1;
	int c;
	
	typedef struct
	{
		char vorname[80+1];
		char nachname[80+1];
		char strasse[80+1];
		char plz[10];
		char ort[80+1];
		char telefon[20];
	} datensatz_Person;
	
	datensatz_Person personen[30+1];
	
	while (nochmal == 1)
	{
		system("cls");
		printf("Bitte geben Sie ein Ihre Daten ein: \n");
		fflush(stdin);
		printf("Geben Sie Ihren Vornamen ein: ");
		gets(personen[i].vorname);
		printf("Geben Sie Ihren Nachnamen ein: ");
		gets(personen[i].nachname);
		printf("Geben Sie Ihre Stra%ce mit Hausnummer ein: ", 225);
		gets(personen[i].strasse);
		printf("Geben Sie Ihre Postleitzahl ein: ");
		gets(personen[i].plz);
		printf("Geben Sie Ihren Wohnort ein: ");
		gets(personen[i].ort);
		printf("Geben Sie Ihre Telefonnummer ein: ");
		gets(personen[i].telefon);
		i++;
		printf("\nMoechten Sie noch weitere Datensaetze einlesen?\nJa = 1\nNein = 0\n");
		scanf("%i", &nochmal);
	}
	
	while(aktion == 1)
	{
		system("cls");
		printf("Was moechten Sie tun?\nAlle Datensaetze anzeigen = 1\nEinen Datensatz anzeigen = 2\nEinen Datensatz eingeben = 3\nEinen Datensatz aendern = 4\nProgrammbeenden = 5\n");
		scanf("%i", &menuepunkt);

		switch (menuepunkt)
		{
			case 1:
				printf("\tVorname\t\tNachname\t\tStrasse\t\tPLZ\t\tOrt\t\tTelefon\n");
				for (c = 0; c <= i+1; c++)
				{
					printf("%i:\t%s\t\t%s\t\t\t%s\t\t%s\t\t%s\t\t%s\n", c+1, personen[c].vorname, personen[c].nachname, personen[c].strasse, personen[c].plz, personen[c].ort, personen[c].telefon);
				}
				getch();
				break;
			case 2: 
				printf("\n\nWelcher Datensatz soll ausgegeben werden?");
				scanf("%i", &welcher);
				welcher -= 1;
				printf("\n%s %s", personen[welcher].vorname, personen[welcher].nachname);
				printf("\n%s", personen[welcher].strasse);
				printf("\n%s %s", personen[welcher].plz, personen[welcher].ort);
				printf("\nTel: %s", personen[welcher].telefon);
				getch();
				break;
			case 3:
				system("cls");
				printf("Bitte geben Sie ein Ihre Daten ein ");
				printf("Geben Sie Ihren Vornamen ein: ");
				gets(personen[i].vorname);
				printf("Geben Sie Ihren Nachnamen ein: ");
				gets(personen[i].nachname);
				printf("Geben Sie Ihre Stra%ce mit Hausnummer ein: ", 225);
				gets(personen[i].strasse);
				printf("Geben Sie Ihre Postleitzahl ein: ");
				gets(personen[i].plz);
				printf("Geben Sie Ihren Wohnort ein: ");
				gets(personen[i].ort);
				printf("Geben Sie Ihre Telefonnummer ein: ");
				gets(personen[i].telefon);
				i++;
				break;
			case 4:
				system("cls");
				printf("\n\nWelcher Datensatz veraendert werden?");
				scanf("%i", &welcher);
				welcher -= 1;
				printf("\n%s %s", personen[welcher].vorname, personen[welcher].nachname);
				printf("\n%s", personen[welcher].strasse);
				printf("\n%s %s", personen[welcher].plz, personen[welcher].ort);
				printf("\nTel: %s", personen[welcher].telefon);
				getch();
				fflush(stdin);
				printf("Bitte geben Sie die veraenderten Daten ein ");
				printf("Geben Sie Ihren Vornamen ein: ");
				gets(personen[welcher].vorname);
				printf("Geben Sie Ihren Nachnamen ein: ");
				gets(personen[welcher].nachname);
				printf("Geben Sie Ihre Stra%ce mit Hausnummer ein: ", 225);
				gets(personen[welcher].strasse);
				printf("Geben Sie Ihre Postleitzahl ein: ");
				gets(personen[welcher].plz);
				printf("Geben Sie Ihren Wohnort ein: ");
				gets(personen[welcher].ort);
				printf("Geben Sie Ihre Telefonnummer ein: ");
				gets(personen[welcher].telefon);
				printf("Das ist der veraenderte Datensatz: ");
				printf("\n%s %s", personen[welcher].vorname, personen[welcher].nachname);
				printf("\n%s", personen[welcher].strasse);
				printf("\n%s %s", personen[welcher].plz, personen[welcher].ort);
				printf("\nTel: %s", personen[welcher].telefon);
				getch();
				break;
			case 5:
				aktion = 0;
				break;
			default: printf("Falsche Eingabe");
		}
	}
	printf("Sie haben das Programm beendet!");

	return 0;
}
