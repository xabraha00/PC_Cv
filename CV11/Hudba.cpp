// Auta.cpp : Defines the entry point for the application.
//

#include "Hudba.h"

#include <stdio.h>
#include <ctype.h>              // tolower
#include <stdlib.h>				// system

#include "HudbaDB.h"

struct t_auto* prvni = NULL; // globalni ukazatel na prvni auto

void OnAdd()			//HOTOVO
{
	char my_name[ZNACKA_SIZE];
	char my_album[ALBUM_SIZE];
	int my_year;

	printf("\nInterpret : ");         // dotazeme se na polozky
	scanf_s("%s", my_name, ZNACKA_SIZE);
	while (getchar() != '\n');

	printf("\nNazev alba : ");
	scanf_s("%s", my_album, ALBUM_SIZE);
	while (getchar() != '\n');
	
	printf("\nRok vydani : ");
	scanf_s("%d", &my_year);
	while (getchar() != '\n');
	add(my_name, my_album, my_year, &prvni);         // volame pridavaci funkci
}

void OnDel()
{
	int my_year;

	printf("\nRok : ");
	scanf_s("%d", &my_year);
	while (getchar() != '\n');
	del(my_year, &prvni);         // volame mazaci funkci
}

void ShowCars()
{
	char volba;
	char pismeno;

	struct t_auto* aktAuto = prvni; // ukazatel na aktualni auto
	printf("\n\n");
	
	printf("Pro vypsani vsech interpretu stisknete A\n");
	printf("Pro vypsani podle prvniho pismene stisknete C\n");


	scanf(" %c", &volba);
	while (getchar() != '\n');
	
	if (volba == 'c' || volba == 'C') {
		printf("Zadejte prvni pismeno znacky: ");
		scanf(" %c", &pismeno);
		while (getchar() != '\n');
	}	
	 
	while (aktAuto) // prochazeni seznamu
	{
		if (volba == 'a' || volba == 'A')
		{
			printf("Interpret: %s, Album: %s , Rok: %d\n", aktAuto->znacka, aktAuto->album, aktAuto->rok); // tisk radku
		}
		else if(volba == 'c' || volba == 'C')
		{
			if (aktAuto->znacka[0] == pismeno)
			{
				printf("Interpret: %s, Album: %s , Rok: %d\n", aktAuto->znacka, aktAuto->album, aktAuto->rok); // tisk radku
			}
		}
		aktAuto = aktAuto->dalsi; // posun na dalsi auto
	}
	getchar();
}


int main()
{
	char  cmd;

	do
	{
		system("cls");		// smaze obrazovku
		printf("A: Pridat     ");
		printf("D: Smazat     ");
		printf("P: Tisk     ");
		printf("Q: Konec\n\n");

		cmd = tolower(getchar());
		while (getchar() != '\n');

		switch (cmd)
		{
		case 'a':
			OnAdd();					// volame pridani
			break;
		case 'd':
			OnDel();					// volame mazani
			break;
		case 'p':
			ShowCars();
			break;
		}
	} while (cmd != 'q');     // koncime az pri Q
	return 0;
}


