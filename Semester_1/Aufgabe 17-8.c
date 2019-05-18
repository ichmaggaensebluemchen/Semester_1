#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

//Funktionsprototypen

//Augabe 17-8
int main(char argv, char *argc[])
{
	if(argc[2] == "passwort")
	{
		printf("Hallo %s, das Passwort war richtig.", argc[1]);
	}
	return 0;
}
