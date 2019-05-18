//Aufgabe 19-3
//Verkettete Listen mit Funktion(nicht hinbekommen--> direkt in der Mein) die zwei Elemente miteinander vertauscht

#include <stdio.h> 
#include <stdlib.h> 
#pragma warning(disable : 4996)

int main(void)
{
	int counter;
	int zahlEins;
	int zahlZwei;

	typedef struct strukturname
	{
		int ganzzahl;

		struct strukturname *previous;
		struct strukturname *next;

	} zahl;

	zahl *liste;       //Zeiger auf das aktuelle Element der Liste
	zahl *start = 0;   //Zeiger auf das erste Element der Liste
	zahl *tmp = 0;     //Zeiger als Zwischenspeicher

	zahl *eins = 0;
	zahl *zwei = 0;
	zahl *aktuell = 0;
	int vorgEins;
	int nachfolgerEins;
	int vorgZwei;
	int nachfolgerZwei;

	//Start des Programms
	printf("Wie viele Zahlen moechten Sie eingeben? Mindestens drei Zahlen! ");
	scanf_s("%i", &counter);

	//Anlegen einer Liste mit so vielen Elemneten wie in counter steht
	while (counter > 0)
	{
		liste = malloc(sizeof(zahl));

		if (!tmp) // wenn im Zwischenspeicher 0 steht
		{
			start = liste; //Zeiger auf Start der Liste bekommt die Adresse des ersten Elements übergeben
			liste->previous = 0;	//akutelles Element der Liste bekommt als Vorgänger eine 0 --> konkret das erste Element
		}
		else
		{
			tmp->next = liste;   //Vorgängerelement erhält als next die Adresse des aktullen Elements
			liste->previous = tmp;  //aktuelles Element erhält als Vorgänger die Adresse des vorherigen Elements (akutelles tmp) 
		}

		//nach Zahl fragen und im aktullen Element der Liste speichern
		printf("Bitte Zahl eingeben: ");
		fflush(stdin);
		scanf_s("%i", &(liste->ganzzahl));

		tmp = liste; //der Zwischenspeicher erhält die Adresse des aktuellen Elements

		counter--;
		if (counter == 0)
		{
			liste->next = 0;
		}
	}
	
	//Ausgabe aller Listen, die der Benutzer eingegeben hat
	tmp = start;

	while (tmp)		//solange tmp ungleich 0
	{
		printf("\n%i", tmp->ganzzahl);		//Ausgabe der Zahl des aktuellen Elements

		tmp = tmp->next;
	}

	//Teil 2 des Programms: Zahlen vertauschen
	printf("\nWelche Zahlen wollen Sie vertauschen?\nBitte geben Sie die erste Zahl ein: ");
	fflush(stdin);
	scanf_s("%i", &zahlEins);
	printf("Bitte geben Sie nun die zweite Zahl ein: ");
	fflush(stdin);
	scanf_s("%i", &zahlZwei);

	//durchgehen aller Elemente
	tmp = start;

	while (tmp)		//solange tmp ungleich 0
	{
		if ((tmp->ganzzahl == zahlEins) || (tmp->ganzzahl == zahlZwei))
		{
			if (tmp->ganzzahl == zahlEins)
			{
				eins = tmp;
			}
			else
			{
				zwei = tmp;
			}
		}
		tmp = tmp->next;
	}
	//Zwischenspeicher
	vorgEins = eins->previous;
	nachfolgerEins = eins->next;
	vorgZwei = zwei->previous;
	nachfolgerZwei = zwei->next;

	//Verschiebung der Elemente
	eins->previous = vorgZwei;
	eins->next = nachfolgerZwei;
	zwei->previous = vorgEins;
	zwei->next = nachfolgerEins;

	//Änderungen bei Nachbarn
	aktuell = vorgEins;
	aktuell->next = zwei;
	aktuell = nachfolgerEins;
	aktuell->previous = zwei;
	aktuell = vorgZwei;
	aktuell->next = eins;
	aktuell = nachfolgerZwei;
	aktuell->previous = eins;

	//neue Ausgabe
	printf("\nDas ist die neue Reihenfolge der Zahlen:\n");
	tmp = start;

	while (tmp)		//solange tmp ungleich 0
	{
		printf("\n%i", tmp->ganzzahl);		//Ausgabe der Zahl des aktuellen Elements

		tmp = tmp->next;
	}

	getch();
	return 0;
}
