#include <stdio.h>
#pragma warning(disable : 4996)
//Test Test

int main(void)
{
	/*Aufgabe 1*/
	printf("Hallo,\nmein Name ist\nHugo Napf!!\n");
	
	/*Aufgabe 2*/
	printf("zwoelf geteilt\tdurch\tvier\ngleich 3\n"); 

	/*Aufgabe 3*/
	printf("TESTTEST\rHAHAHA\r \rR\nI\nC\nH\nT\nI\nG\n"); 
	

	/*Aufagabe 4*/
	printf("Diese\n"); 
	printf("Worte\n"); 
	printf("sollen\nalle"); 
	printf("\nin\neiner\nneuen");
	printf("\nZeile\nstehen\n");

	/*Aufgabe 5*/
	printf("Das ist ein Text\n\n"); /*Auf dem Bildschirm soll "Das ist ein Text" ausgegeben werden.*/


	/*Aufgabe 6*/
	printf("%c, %c, %c, die%c %c%c%c k%c%cne %c%c%c\n", 49, 50, 51, 115, 105, 115, 116, 101, 105, 46, 46, 46);
	
	/*Aufgabe 8*/
	printf("\a\a\a\a\a");

	/*Aufgabe 9*/
	printf("Wenn S%cren M%cller n%cmlich mit \'h\' schreibt,\nsch%clgt ihn Lie%cchen M%cller auf den Kopf.\n\n\n", 148, 129, 132, 132, 225, 129);

	/*Aufgabe 10*/
	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186);
	printf("%cDein Name %c\n", 186, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);


	/*Aufgabe 11*/
	printf("#include <stdio.h>\n\nint main(void)\n {\n \tprintf(\"1, 2, 3, dies ist keine Hexerei\");\n\tsystem(\"Pause\");\n\treturn(999);\n }\n");

	/*Aufgabe 12*/
	printf("Gebe eine Zahl ein:\n"); 
	int zahl;
	scanf_s("%d", &zahl); 
	printf("Die eingegebene Zahl war: %u\n", zahl);

	/*Aufgabe 13*/
	float radius; 
	printf("Gebe den Radius ein:\n"); 
	scanf_s("%f", &radius); 
	printf("Der Radius ist: %f\n", radius);

	/*Aufgabe 14*/
	int number;
	printf("Bitte geben Sie eine Zahl ein: ");
	scanf_s("%i", &number);
	printf("Die eingegebene Zahl war: %i\n\n", number);

	/*Aufgabe 15*/
	int alter = 0;
	int geburtstag = 0;
	int geburtsmonat = 0;
	int geburtsjahr = 0;
	printf("\nBitte geben Sie Ihr Alter ein: ");
	scanf_s("%i", &alter);
	printf("Bitte geben Sie Ihren Geburtstag ein: ");
	scanf_s("%i", &geburtstag);
	printf("Bitte geben Sie Ihren Geburtsmonat ein: ");
	scanf_s("%i", &geburtsmonat);
	printf("Bitte geben Sie Ihr Geburtsjahr ein: ");
	scanf_s("%i", &geburtsjahr);
	printf("Alter: %i\nGeboren am %i.%i.%i\n\n", alter, geburtstag, geburtsmonat, geburtsjahr);

	/*Aufgabe 16*/
	int x1, x2, x3, sum; 
	printf("Bitte die erste Zahl eingeben: "); 
	scanf_s("%d", &x1); 
	printf("Bitte die zweite Zahl eingeben: "); 
	scanf_s("%d", &x2); 
	printf("Bitte die dritte Zahl eingeben: "); 
	scanf_s("%d", &x3); 
	printf_s("Summe der eingegebenen Zahlen: %d\n", x1 + x2 + x3); 
	sum = x1 + x2 + x3; 
	printf("x1 + x2 + x3 = %d\n", sum);

	system("Pause");
	return(999);
}
