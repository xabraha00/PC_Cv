// CV10.cpp : Defines the entry point for the application.
//

#include "CV10.h"

using namespace std;

int main()
{
	const char* Cesta_in = "..\\..\\..\\vstup.txt";
	const char* Cesta_out = "..\\..\\..\\vysledky.txt";

	int znak;
	int pismena = 0;
	int cisla = 0;
	int slova = 0;
	int vet = 0;
	int ve_slove = 0;
	int minuly_znak = 0;

	FILE* vstup;
	FILE* vysledky;

	if (fopen_s(&vstup, Cesta_in, "r") != 0)
	{
		printf("Soubor se nepodarilo otevrit pro cteni\n");
		return -1;
	}

	if (fopen_s(&vysledky, Cesta_out, "w") != 0)
	{
		printf("Soubor se nepodarilo otevrit pro zapis\n");
		return -1;
	}

	
	

	while ((znak = fgetc(vstup)) != EOF)
	{
		if (znak >= 'a' && znak <= 'z')
		{
			pismena++;
		}
		if (znak >= 'A' && znak <= 'Z')
		{
			pismena++;
		}
		if (znak >= '0' && znak <= '9')
		{
			cisla++;
		}

		
		if (isalpha(znak) )
		{	
			if (ve_slove == 0) {
				ve_slove = 1;
				slova++;
			}
		}
		else 
		{
			ve_slove = 0;
		}

		
		if (isalpha(minuly_znak) && znak == '.')
		{
			vet++;
		}
		minuly_znak = znak;

	}




	fclose(vstup);
	
	fprintf(vysledky, "V souboru se nachazi %d pismen a % d cisel\n\n", pismena, cisla );
	fprintf(vysledky, "V souboru se nachazi %d slov\n\n", slova);
	fprintf(vysledky, "V souboru se nachazi %d vet", vet);
	fclose(vysledky);

	printf("V souboru se nachazi %d pismen a %d cisel\n\n", pismena, cisla);
	printf("V souboru se nachazi %d slov\n\n", slova);
	printf("V souboru se nachazi %d vet\n", vet);
	return 0;
}
