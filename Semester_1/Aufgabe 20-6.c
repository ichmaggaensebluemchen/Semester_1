#include <stdio.h>
#pragma warning(disable : 4996)
#define MAXSTRASSE 81
#define MAXSORT 81

int main(void)
{
	FILE *p_datei;
	FILE *p_dateir;
	
	typedef struct
	{
		char strasse[MAXSTRASSE];
		int hausnummer;
		int plz;
		char ort[MAXSORT];
	} adresse;
	
	adresse anschrift;	
	adresse anschriftr;
		
	printf("Geben Sie den Strassennamen ein: ");
	gets(anschrift.strasse);
	printf("\nGeben Sie die Hausnummer ein: ");
	scanf("%i", &anschrift.hausnummer);
	printf("\nGeben Sie die Postleitzahl ein: ");
	scanf("%i", &anschrift.plz);
	printf("\nGeben Sie den Ort ein: ");
	fflush(stdin);
	gets(anschrift.ort);
	
	p_datei=fopen("adresdatei.txt","wb");
	if(p_datei!=NULL)
	{
		fwrite(anschrift.strasse, sizeof (anschrift.strasse), 1, p_datei);	
		fwrite(&anschrift.plz, sizeof (&anschrift.plz), 1, p_datei);
		fwrite(&anschrift.hausnummer, sizeof (&anschrift.hausnummer), 1, p_datei);
		fwrite(anschrift.ort, sizeof (anschrift.ort), 1, p_datei);	
	}
	fclose(p_datei);	

	p_dateir = fopen("adresdatei.txt","rb");
	if(p_datei!=NULL)
	{
		fread(anschriftr.strasse, sizeof (anschriftr.strasse), 1, p_dateir);	
		fread(&anschriftr.plz, sizeof (&anschriftr.plz), 1, p_dateir);
		fread(&anschriftr.hausnummer, sizeof (&anschriftr.hausnummer), 1, p_dateir);
		fread(anschriftr.ort, sizeof (anschriftr.ort), 1, p_dateir);	
	}
	fclose(p_dateir);
	
	printf("Strasse: %s",anschriftr.strasse);
	printf("\nHausnummer : %i",anschriftr.hausnummer);
	printf("\nPlz: %i",anschriftr.plz);
	printf("\nOrt: %s",anschriftr.ort);
	return (999);
}
