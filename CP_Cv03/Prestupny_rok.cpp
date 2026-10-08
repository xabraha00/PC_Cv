// Prestupny_rok.cpp : Defines the entry point for the application.
//

#include "Prestupny_rok.h"

using namespace std;

int jePrestupny(int rok)
{

	return (rok % 4 == 0 && (rok % 100 != 0) || (rok % 400 == 0));
}

int jeSude(int rok)
{

	return (rok % 2 == 0);

}





int main()
{

	printf("Rok\t Je prestupny?\t\tJe sudy?\n");

	printf("%d\t\t %d\t\t %d\n", 1000,jePrestupny(1000), jeSude(1000));
	printf("%d\t\t %d\t\t %d\n", 2000, jePrestupny(2000), jeSude(2000));
	printf("%d\t\t %d\t\t %d\n", 2002, jePrestupny(2002), jeSude(2002));
	printf("%d\t\t %d\t\t %d\n", 2012, jePrestupny(2012), jeSude(2012));
	printf("%d\t\t %d\t\t %d\n", 2013, jePrestupny(2013), jeSude(2013));
	printf("%d\t\t %d\t\t %d\n", 2022, jePrestupny(2022), jeSude(2022));
	printf("%d\t\t %d\t\t %d\n", 2200, jePrestupny(2200), jeSude(2200));


	return 0;	
}
