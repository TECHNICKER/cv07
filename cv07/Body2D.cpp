#include "Body2D.h"
#include <math.h>

int indexNejblizsi(int velikost, int(*poleBodu)[2], int referencniX, int referencniY) //vrací index prvního nalezeného nejbližšího bodu
{
	int vysledek[2] = {0, 0};
	int vzdalenost = 0;

	for (int i = 0; i < velikost; i++)
	{
		vzdalenost = sqrt(pow((referencniX - poleBodu[i][0]), 2) + pow((referencniY - poleBodu[i][1]), 2));

		switch (i)
		{
			case 0:

				vysledek[0] = i;
				vysledek[1] = vzdalenost;
				break;

			default:

				if (vzdalenost < vysledek[1])
				{
					vysledek[0] = i;
					vysledek[1] = vzdalenost;

				}
				break;
		}
	}

	return vysledek[0];

}
double prumernaVzdalenost(int velikost, int(*poleBodu)[2], int referencniX, int referencniY)
{
	double vysledek = 0;
	double vzdalenost = 0;

	for (int i = 0; i < velikost; i++)
	{
		vzdalenost += sqrt(pow((referencniX - poleBodu[i][0]), 2) + pow((referencniY - poleBodu[i][1]), 2));
	}

	vysledek = vzdalenost / velikost;
	
	return vysledek;
}