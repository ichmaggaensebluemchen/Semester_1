#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	/*Aufgabe 7-1*/
	long int tageInMinuten;
	long int anzahlTage;
	
	printf("Bitte geben Sie eine Anzahl von Tagen ein: ");
	scanf("%i", &anzahlTage);
	
	tageInMinuten = anzahlTage * 24 *60;
	printf("Ihre Anzahl Tage betraegt: %ld Minuten\n\n", tageInMinuten);	

	/*Aufgabe 7-2*/
	int i=0; 
	int j=1; 
	printf("%d,%d\n",++i,j++); 
	printf("\n%i,%u\n",1-i,j*2); 
	printf("\n%u\n",i/j);
	
	/*Aufgabe 7-8*/
	int zahl;
	int negiert;
	printf("Geben Sie eine Zahl ein: ");
	scanf("%i", &zahl);
	negiert = ~zahl;
	negiert++;
	printf("%i\n\n", negiert);
	
	/*Aufgabe 7-9*/
	int a;
	int b;
	int add;
	printf("Geben Sie eine Zahl ein: ");
	scanf("%i", &a);
	printf("Geben Sie noch eine Zahl ein: ");
	scanf("%i", &b);
	add = a + b;
	//einzelnen Bits durch modulo und Verschiebung bestimmen
	printf("\n%d", (add>>6)%2); //die Summe beider Zahlen wird um 6 Stellen nach rechts verschoben Bsp: 13d = 1101b nach der Verschiebung 000000b, anschließend wird mit %2 der Rest aus der Division mit 2 gebildet: hier 0
	printf("\n%d", (add>>5)%2);	//die Summe beider Zahlen wird um 5 Stellen nach rechts verschoben: 00000b % 2 = 0
	printf("\n%d", (add>>4)%2);	//die Summe beider Zahlen wird um 4 Stellen nach rechts verschoben: 0000b % 2 = 0
	printf("\n%d", (add>>3)%2);	//die Summe beider Zahlen wird um 3 Stellen nach rechts verschoben: 0001b % 2 = 1
	printf("\n%d", (add>>2)%2);	//die Summe beider Zahlen wird um 2 Stellen nach rechts verschoben: 0011 % 2 = 1
	printf("\n%d", (add>>1)%2);	//die Summe beider Zahlen wird um 1 Stellen nach rechts verschoben: 0110 % 2 = 0
	printf("\n%d\n\n\n", add%2);	//1101 % 2 = 1 ==> entspricht der Zahl 13 im dezimalen Zahlensystem
	
	/*Aufgabe 7-10*/
	unsigned char zeichen = 0x9d;	//9D entspricht 1001 1101b entspricht 157 dezimal
	printf("%X\n", zeichen);
	printf("%d", (zeichen>>7)%2);
	printf("%d", (zeichen>>6)%2); 
	printf("%d", (zeichen>>5)%2);	
	printf("%d", (zeichen>>4)%2);	
	printf("%d", (zeichen>>3)%2);	
	printf("%d", (zeichen>>2)%2);	
	printf("%d", (zeichen>>1)%2);	
	printf("%d\n\n\n", zeichen%2);	
	
	zeichen = zeichen | 0x40; //das Programm soll das  zweite Bit von vorne auf einen 1 setzen --> 1101 1101 entspricht DD entspricht 221 dezimal
	printf("%X\n", zeichen);
	printf("%d", (zeichen>>7)%2);
	printf("%d", (zeichen>>6)%2); 
	printf("%d", (zeichen>>5)%2);	
	printf("%d", (zeichen>>4)%2);	
	printf("%d", (zeichen>>3)%2);	
	printf("%d", (zeichen>>2)%2);	
	printf("%d", (zeichen>>1)%2);	
	printf("%d\n\n\n", zeichen%2);
	
	/*Aufgabe 7-10*/
	int jahr;
	int schaltjahr; //1 = Schaltjahr	 0 = kein Schaltjahr
	printf("Geben Sie eine Jahreszahl ein: ");
	scanf("%i", &jahr);
	if (jahr%4 == 0)
	{
		if (jahr%100 == 0)
		{
			schaltjahr = 0;
			if (jahr%400 == 0)
			{
				schaltjahr = 1;
			}
		}
		else
		{
			schaltjahr = 1;
		}
	}
	else
	{
		schaltjahr = 0;
	}
	printf("%i\n", schaltjahr);
	
			
	system("Pause");
	return(999);
}
