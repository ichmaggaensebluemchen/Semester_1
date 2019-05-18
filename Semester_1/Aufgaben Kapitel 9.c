#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	/*Aufgabe 9-10*/
	int zahl;
	int zt;
	int t;
	int h;
	int z;
	int e;
	
	printf("Geben Sie eine fuenstellige Ganzzahl ein: \n");
	scanf("%i", &zahl);
	
	zt = zahl/10000;
	printf("%i", zt);
	t = ((zahl/1000 - (zt*10)));
	printf("%i", t);
	h = ((zahl/100 - (zt*100) - (t*10)));
	printf("%i", h);
	z = ((zahl/10 - (zt*1000) - (t*100) - (h*10)));
	printf("%i", z);
	e = ((zahl - (zt*10000) - (t*1000) - (h*100) - (z*10)));
	printf("%i\n\n", e);
	
	switch(zt)
	{
		case 1:
			printf("Eins ");
			break;
		case 2:
			printf("Zwei ");
			break;
		case 3:
			printf("Drei ");
			break;
		case 4:
			printf("Vier ");
			break;
		case 5:
			printf("Fuenf ");
			break;
		case 6:
			printf("Sechs ");
			break;
		case 7:
			printf("Sieben ");
			break;
		case 8:
			printf("Acht ");
			break;
		case 9:
			printf("Neun ");
			break;
	}
	
		switch(t)
	{
		case 1:
			printf("Eins ");
			break;
		case 2:
			printf("Zwei ");
			break;
		case 3:
			printf("Drei ");
			break;
		case 4:
			printf("Vier ");
			break;
		case 5:
			printf("Fuenf ");
			break;
		case 6:
			printf("Sechs ");
			break;
		case 7:
			printf("Sieben ");
			break;
		case 8:
			printf("Acht ");
			break;
		case 9:
			printf("Neun ");
			break;
	}
	
		switch(h)
	{
		case 1:
			printf("Eins ");
			break;
		case 2:
			printf("Zwei ");
			break;
		case 3:
			printf("Drei ");
			break;
		case 4:
			printf("Vier ");
			break;
		case 5:
			printf("Fuenf ");
			break;
		case 6:
			printf("Sechs ");
			break;
		case 7:
			printf("Sieben ");
			break;
		case 8:
			printf("Acht ");
			break;
		case 9:
			printf("Neun ");
			break;
	}
	
		switch(z)
	{
		case 1:
			printf("Eins ");
			break;
		case 2:
			printf("Zwei ");
			break;
		case 3:
			printf("Drei ");
			break;
		case 4:
			printf("Vier ");
			break;
		case 5:
			printf("Fuenf ");
			break;
		case 6:
			printf("Sechs ");
			break;
		case 7:
			printf("Sieben ");
			break;
		case 8:
			printf("Acht ");
			break;
		case 9:
			printf("Neun ");
			break;
	}
	
		switch(e)
	{
		case 1:
			printf("Eins ");
			break;
		case 2:
			printf("Zwei ");
			break;
		case 3:
			printf("Drei ");
			break;
		case 4:
			printf("Vier ");
			break;
		case 5:
			printf("Fuenf ");
			break;
		case 6:
			printf("Sechs ");
			break;
		case 7:
			printf("Sieben ");
			break;
		case 8:
			printf("Acht ");
			break;
		case 9:
			printf("Neun ");
			break;
	}
	/*Aufgabe 9-17*/
	printf("\n"); 
	int zeile, spalte; 
	for(zeile=1; zeile<=20; zeile++) 
	{ 
		for(spalte=1; spalte<=zeile; spalte++) 
		{ 
			printf("*"); 
		} 
		printf("\n"); 
	}
		
	int zeile1, spalte1; 
	for(zeile1=20; zeile1>=1; zeile1--) 
	{ 
		for(spalte1=1; spalte1<=zeile1; spalte1++) 
		{ 
			printf("*"); 
		} 
			printf("\n"); 
	}
	
	
	/*Aufgabe 9-20*/
	
	unsigned int a;
	int i = 0;
	int dual[16];
	
	printf("Geben Sie eine positive ganze Zahl ein: ");
	scanf("%i", &a);
	printf("\n\n");
	
	//Array mit Nullen füllen
	int d;
	for (d = 0; d <= 16; d++)
	{
		dual[d] = 0;
	}
	//einzelnen Bits durch modulo bestimmen
	while (a > 0)
	{
		dual[i] = (a%2);
		a = a/2;
		i++;
	}
	//Ausgabe mit Array (noch nicht gelernt)
	while (i >= 0)
	{
		printf("%i", dual[i]);
		i--;
	}

	system("Pause");
	return(999);
}
