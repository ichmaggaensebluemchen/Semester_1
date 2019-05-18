#include <stdio.h>
#pragma warning(disable : 4996)

int main (void)
{
	FILE *p_file;
	char dateiname[255];
	char dateiinhalt[80+1];
	printf("Bitte Dateinamen eingeben: ");
	gets(dateiname);	
	p_file = fopen(dateiname,"r"); 
 
	 if (p_file != NULL) 
		 { 
		 printf("Die Datei existiert\n");
			 while (!feof(p_file))
			 {
			 	fgets(dateiinhalt,80,p_file);
			 	printf("%s",dateiinhalt);
			 }
		 } 
		 else 		 { 
		 printf("Die Datei existiert nicht\n"); 
		 } 
	 fclose(p_file); 
  return(999); 
}

