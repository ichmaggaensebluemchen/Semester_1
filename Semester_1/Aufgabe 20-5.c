#include <stdio.h>
#pragma warning(disable : 4996)

int main (void)
{
	FILE *p_file1;
	FILE *p_file2;
	char dateiname1[] = "testdatei.txt";
	char dateiname2[] = "testdatei2.txt";
	//char dateiname1[255];
	//char dateiname2[255];
	char chardatei1;
	char chardatei2;
	char textDatei1[255];
	char textDatei2[255];
	int charpos;
	//printf("Bitte Dateinamen der ersten Datei eingeben: ");
	//gets(dateiname1);
	//printf("Bitte Dateinamen der zweiten Datei eingeben: ");
	//gets(dateiname2);	
	p_file1 = fopen(dateiname1,"r");
	p_file2 = fopen(dateiname2,"r");
	if (p_file1 != NULL && p_file2 != NULL) 
		 { 
		 printf("Die Dateien existieren\n");
		 charpos = 0;
		 while(((chardatei1=fgetc(p_file1)) != EOF) | ((chardatei2=fgetc(p_file2)) != EOF))
		 	{				
				charpos++;
				if (chardatei1 == chardatei2)
				{
					printf("Das Zeichen %c kommt in beiden Dateien an der Pos %i vor\n", chardatei1, charpos);	
				}
		 	}
		 } 
		 else 		 
		 { 
		 printf("Mindestens eine der Dateien existiert nicht"); 
		 } 
	 fclose(p_file1); 
	 fclose(p_file2);
  return(999); 
}
