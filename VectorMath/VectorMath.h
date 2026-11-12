#pragma once
enum typOperace { soucet = 1, skalarniSoucin, vektorovySoucin };

struct vector3d
{
	double x;
	double y;
	double z;
};

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ);

void tisk(struct vector3d u);

int porovnejFunkci(struct vector3d u, struct vector3d v);

void tisk_porovnani(int x);

void tisk_skalar(vector3d w);