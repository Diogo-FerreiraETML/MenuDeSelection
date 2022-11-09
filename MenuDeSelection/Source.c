//Nom du projet			: DemoProjet
//Nom du fichier		: Source.c
//Nom auteur			: Diogo Ferreira
//Date de création		: 27.09.2022
//Date de modification	: 27.09.2022 DF
/*
  Description:
  Exercice de création de projet en C sur VS.
  Fichier de calcul d'un cercle

  Remarque:
  -
*/

//Librairie (standart)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Librairie perso

//constante

//ANSI escape code
#define ShowCursor printf("\033[?25h")
#define HideCursor printf("\033[?25l")
#define gotoxy(x,y) printf("%c[%d;%df",0x1B,y,x)

//Appelle prototype

int main()
{
	int max = 2;
	char input;

	//system("Start E:\\Dossier personnelle\\Programmation\\RC Générator\\RC Générator\\bin\\Debug\\RC Générator.exe");
	
	
	printf("\n[*]Diagram\n[ ]RC");
	HideCursor;
	int index = 0;
	do 
	{
		input = getch();
		gotoxy(2, 2+index);
		printf(" ");
		switch (input)
		{ 
			//fléche du haut
			case 72:
				if (index == 0)
					index = max-1;
				else
					index--;
				break;
				//fléche du bas
			case 80:
				if (index == max-1)
					index = 0;
				else
					index++;
				break;
		}
		gotoxy(2, 2 + index);
		printf("*");
		gotoxy(0, 0);
		//system("CLS");
		printf("Index: %d ", index);
	} while(input != 13);

	switch (index)
	{
		case 0:
			system("\"E:\\Dossier personnelle\\Programmation\\GénérateurDiagram\\GénérateurDiagram\\bin\\Debug\\GénérateurDiagram.exe\"");
		break;
		case 1:
			system("\"E:\\Dossier personnelle\\Programmation\\RC Générator\\RC Générator\\bin\\Debug\\RC Générator.exe\"");
			break;
	}

	gotoxy(0, 10);

	system("pause");
	return 0;
}