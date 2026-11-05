#include "abrahamek.h"


int prunik(double zacatek1, double konec1, double zacatek2, double konec2, double* vysl_zacatek, double* vysl_konec)
{
	if ((konec1 < zacatek1) && (konec2 < zacatek2))
	{
		return 0;
	}
	

	if (konec2 > konec1)
	{
		*vysl_konec = konec1;
	}
	else
	{
		*vysl_konec = konec2;
	}
	

	if (zacatek1 > zacatek2)
	{
		*vysl_zacatek = zacatek1;
	}
	else
	{
		*vysl_zacatek = zacatek2;
	}


	if (*vysl_zacatek <= *vysl_konec)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int prunik2(double zacatek1, double konec1, double zacatek2, double konec2, double* vysl_zacatek, double* vysl_konec)
{
	double x;

	if (zacatek1 > konec1)
	{
		x = zacatek1;
		zacatek1 = konec1;
		konec1 = x;
	}

	if (zacatek2 > konec2)
	{
		x = zacatek2;
		zacatek2 = konec2;
		konec2 = x;
	}



	if (konec2 < konec1)
	{
		*vysl_konec = konec2;
	}
	else
	{
		*vysl_konec = konec1;
	}


	if (zacatek1 > zacatek2)
	{
		*vysl_zacatek = zacatek1;
	}
	else
	{
		*vysl_zacatek = zacatek2;
	}

	

	if (*vysl_zacatek <= *vysl_konec)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
