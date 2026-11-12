#include "VectorMath.h"
#include <cstdio>
#include <cmath>

vector3d operace(vector3d u, vector3d v, typOperace typ)
{
    vector3d w = { 0, 0, 0 };

    switch (typ)
    {

    case(soucet):
        w.x = u.x + v.x;
        w.y = u.y + v.y;
        w.z = u.z + v.z;
        break;
    case(skalarniSoucin):
        w.x = u.x * v.x + u.y * v.y + u.z * v.z;
        break;

    case(vektorovySoucin):
        w.x = u.y * v.z - u.z * v.y;
        w.y = u.z * v.x - u.x * v.z;
        w.z = u.x * v.y - u.y * v.x;
        break;
    default:
        printf("Spatne cislo");
    }
    return w;
}
void tisk_skalar(vector3d w)
{

    printf("w = %lf\n", w.x);
}

void tisk(vector3d w)
{
    double velikost = sqrt(w.x * w.x + w.y * w.y + w.z * w.z);
        printf("w = (%lf, %lf, %lf)\n", w.x, w.y, w.z);
        printf("|w| = %lf\n", velikost);
}

int porovnejFunkci(struct vector3d u, struct vector3d v)
{
    double velikost_u= sqrt(u.x * u.x + u.y * u.y + u.z * u.z);
    double velikost_v= sqrt(v.x * v.x + v.y * v.y + v.z * v.z);

    if (velikost_u < velikost_v)
    {
        return -1;
    }
    else if (velikost_u == velikost_v)
    {
        return 0;
    }
    else
    {
        return 1;
    }

}

void tisk_porovnani(int x)
{
    if (x == -1)
    {
        printf("|u| < |v|");
    }
    else if (x == 0)
    {
        printf("|u| = |v|");
    }
    else
    {
        printf("|u| > |v|");
    }

}