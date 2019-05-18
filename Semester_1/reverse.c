	//Aufgabe 13-12
#pragma warning(disable : 4996)

	int main(int argc, char *argv[]) 
	{
		char str[100];
		char stringRev[100];
		int groesse;
		int z;
		
		printf("\nGeben Sie ein Wort ein: ");
		gets(str);
		
		groesse = sizeof(str);
		z = sizeof(groesse);
		
		for(int l = 0; l < groesse; l++)
		{
			stringRev[l] = str[z];
			z--;
		}
		
		printf("Reverse String: %s", stringRev);
		
		return 0;
	}
