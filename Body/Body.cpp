// Body.cpp : Defines the entry point for the application.
//
#include "math.h"
#include <stdio.h>
#include "Body2d.h"
#define POCET_BODU 10

using namespace std;

int main()
{
	int body[POCET_BODU][2] = { 5, 10,
 -14, 2,
 45, 4,
 -9, 8,
 58, -3,
 47, 5,
 -18, -86,
 75, 7,
 -25, 51,
 17, 98 };


	int x, y, z;
	

	printf("zadejte souradnici x:");
	scanf_s("%d", &x);

	printf("zadejte souradnici y:");
	scanf_s("%d", &y);

	printf("vzdalenost pro body mimo dosah bodu:");
	scanf_s("%d", &z);

	int index = indexNejblizsi(POCET_BODU, body, x, y);

	printf("Nejblizsi bod: %d, %d\n", body[index][0] ,body[index][1]);

	printf("prumerna vzdalenost: %f\n", prumernaVzdalenost(POCET_BODU, body, x, y));

	vzdaleneBody(POCET_BODU, body, x, y, z);


	return 0;
}
