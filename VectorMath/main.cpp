#include "VectorMath.h"
#include <cstdio>


using namespace std;

int main()
{
	vector3d u, v;
	vector3d w = {0,0,0};
	typOperace op;


	printf("Zadejte vektor u (hodnota x,y,z oddelene carkou):");
	if (scanf("%lf,%lf,%lf", &u.x, &u.y, &u.z) != 3)
	{
		printf("Spatne zadany vektor u\n");
		return 0;
	}

	printf("Zadejte vektor v (hodnota x,y,z oddelene carkou):");
	if (scanf("%lf,%lf,%lf", &v.x, &v.y, &v.z) != 3)
	{
		printf("Spatne zadany vektor v\n");
		return 0;
	}

	printf("Zadejte operaci (1 = soucet; 2 = skalarniSoucin; 3 = vektorovysoucin; 4 = porovnani):");
	scanf("%d", &op);

	if (op > 0 && op < 4 )
	{
		if (op == skalarniSoucin)
		{
			w = operace(u, v, op);
			tisk_skalar(w);
		}
		else
		{
			w = operace(u, v, op);
			tisk(w);
		}
	}
	else if (op == 4)
	{
		int x = porovnejFunkci(u,v);
		tisk_porovnani(x);
	}
	else
	{
		printf("Spatny cislo pro operaci\n");
	}
	return 0;
}
