#include "math.h"
#include <stdio.h>

int indexNejblizsi(int velikost, int (*poleBodu)[2], int referencniX, int referencniY)
{
	int index = 0;
	int nejbliz = 500000;
	for (int i = 0; i < velikost; i++)
	{
		int x = poleBodu[i][0] - referencniX;
		int y = poleBodu[i][1] - referencniY;

		int vysledek = sqrt(x * x + y * y);

		if (vysledek < nejbliz)
		{
			nejbliz = vysledek;
			index = i;
		}
	}


	return index;

}



double prumernaVzdalenost(int velikost, int (*poleBodu)[2], int referencniX, int referencniY)
{
	double soucet = 0;
	

	for (int i = 0; i < velikost; i++)
	{
		int x = poleBodu[i][0] - referencniX;
		int y = poleBodu[i][1] - referencniY;

		double pocet = sqrt(x * x + y * y);


		soucet = soucet + pocet;
	}

	return soucet / velikost;
}

void vzdaleneBody(int velikost, int (*poleBodu)[2], int referencniX, int referencniY, int vzdalenost)
{
	int pocet = 0;
	for (int i = 0; i < velikost; i++)
	{
		int x = poleBodu[i][0] - referencniX;
		int y = poleBodu[i][1] - referencniY;

		int vysledek = sqrt(x * x + y * y);

		if (vysledek > vzdalenost)
		{
			pocet++;
			printf("Bod %d je mimo zadanou vzdalenost: %d , %d\n",i, poleBodu[i][0], poleBodu[i][1]);
		}
	
	}
	printf("pocet nalezenych bodu: %d", pocet);

}
