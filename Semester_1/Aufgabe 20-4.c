#include <stdio.h>
#pragma warning(disable : 4996)

int main (void)
{
	FILE *p_file1;
	FILE *p_file2;
	char dateiname1[255];
	char dateiname2[255];
	char chardatei1;
	char chardatei2;
	char textDatei1[255];
	char textDatei2[255];
	printf("Bitte Dateinamen der ersten Datei eingeben: ");
	gets(dateiname1);
	printf("Bitte Dateinamen der zweiten Datei eingeben: ");
	gets(dateiname2);	
	p_file1 = fopen(dateiname1,"r");
	p_file2 = fopen(dateiname2,"r");
 	
	 if (p_file1 != NULL && p_file2 != NULL) 
		 { 
		 printf("Die Dateien existieren\n");
		 while(((chardatei1=fgetc(p_file1)) != EOF) | ((chardatei2=fgetc(p_file2)) != EOF))
		 	{				
				if (chardatei1 != chardatei2)
				{
					printf("Das erste unterschiedliche Zeichen kommt an der Stelle %i vor", ftell(p_file1)); 
					break;		
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
