// bonus cv.3.cpp : Defines the entry point for the application.
//

#include "bonus cv.3.h"

using namespace std;

int main()
{
	int  cislo1prvnisouradnice;
	int cislo1druhasouradnice;
	
	int cislo2druhasouradnice;
	int cislo2prvnisouradnice;

	int soucin1;
	int soucin2;


	printf("Zadejte prvni vektor, 1. souradnici :");
	scanf("%i  %i", &cislo1prvnisouradnice, &cislo1druhasouradnice);

	printf("Zadejte druhy vektor, 1. souradnici :");
	scanf("%i %i", &cislo2prvnisouradnice, &cislo2druhasouradnice);
	
	soucin1 = cislo1prvnisouradnice * cislo2prvnisouradnice;
	soucin2 = cislo1druhasouradnice * cislo2druhasouradnice;

	printf("Soucin vektoru: (%i, %i)", soucin1, soucin2);


	return 0;
}
