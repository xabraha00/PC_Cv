// Cv_05.cpp : Defines the entry point for the application.
//

#include "Cv_05.h"

using namespace std;


void soucet(double a[3], double b[3], double c[3])
{
	c[0] = a[0] + b[0];
	c[1] = a[1] + b[1];
	c[2] = a[2] + b[2];
	

	return;
}

double velikost(double a[3])
{


	return sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
	
}

double skalarniSoucin(double a[3], double b[3])
{

	return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];


}
void VektorovysoucinAB(double a[3], double b[3], double q[3])
{
	q[0] = a[1] * b[2] - a[2] * b[1];
	q[1] = a[2] * b[0] - a[0] * b[2];
	q[2] = a[0] * b[1] - a[1] * b[0];


}






int main()
{
	double a[3] = {0}, b[3] = {0}, c[3], q[3];

	printf("Vektor A (3 hodnoty oddelene carkou) :");
	scanf("%lf,%lf,%lf", &a[0], &a[1], &a[2]);

	printf("\n");


	printf("Vektor A (3 hodnoty oddelene carkou) :");
	scanf("%lf,%lf,%lf", &b[0], &b[1], &b[2]);

	

	soucet(a, b, c);
	
	printf("Soucet A + B : (%lf, %lf, %lf)\n", c[0],c[1],c[2]);
	

	printf("Velikost  A: %lf\n", velikost(a));
	

	printf("Skalarni soucit AB: %lf\n", skalarniSoucin(a,b));

	VektorovysoucinAB(a, b, q);

	printf("Vektorovy soucin A x B: (%lf, %lf, %lf)", q[0], q[1], q[2]);


	
	return 0;
}
