#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main(int argc, char *argv[])
{
	//Aufgabe 13-13

	char klein[100] = { 0 };
	char gross[100] = { 0 };

	printf("\n\nGeben Sie ein Wort ein: ");
	//gets(klein);

	int p;
	for (p = 0; p <= strlen(klein) - 1; p++)
	{
		if ((gross[p] >= 'a') && (gross[p] <= 'z'))
		{
			gross[p] = klein[p] - 32;
		}
		else if ((gross[p] >= 'A') && (gross[p] <= 'Z'))
		{
			gross[p] = klein[p];
		}
		else
		{
			printf("kein Wort");
		}
	}

	printf("%s", gross);
	getchar();

	return 0;
}
