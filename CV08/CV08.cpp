// CV08.cpp : Defines the entry point for the application.
//


#include "abrahamek.h"
#include "stdio.h"
using namespace std;

int main()
{
	double zacatek1, konec1, zacatek2, konec2;
	double vysl_zacatek = 0;
	double vysl_konec = 0;

	printf("Zadejte 2 intervaly v kulate zavorce:");
	printf("Vzor: (1.1,2.2)(3.3,4.4)\n");
	scanf("(%lf,%lf)(%lf,%lf)", &zacatek1, &konec1, &zacatek2, &konec2);

	int hodnota = prunik( zacatek1,  konec1,  zacatek2,  konec2, &vysl_zacatek, &vysl_konec);

	if (hodnota == 0)
	{
		printf("Intervaly nemaji prunik\n");
	}
	else
	{
		printf("(%lf),(%lf)\n", vysl_zacatek, vysl_konec);
	}


	int prunikopak = prunik2(zacatek1, konec1, zacatek2, konec2, &vysl_zacatek, &vysl_konec);

	if (prunikopak == 0)
	{
		printf("Intervaly nemaji prunik\n");
	}
	else
	{
		printf("(%lf),(%lf)\n", vysl_zacatek, vysl_konec);
	}
			
	return 0;
}
