#include "Body2D.h"

int main()
{
	int ref_bod[2];

	double vysledna[10][10];

	int body[10][2] =	{
						  5, 10,
						-14,  2,
						 45,  4,
						 -9,  8,
						 58, -3,
						 47,  5,
						-18,-86,
						 75,  7,
						-25, 51,
						 17, 98
						};

	for (int i = 0; i < 10; i++)
	{
		printf("%d %d \n", body[i][0], body[i][1]);
	}
	printf("\n");

	vzajemneVzdalenosti(10, body, vysledna);
	
	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k < 10; k++)
		{
			printf("%.2lf \t", vysledna[j][k]);
		}
		printf("\n");
	}

	printf("\nzadej souradnice ref bodu ve tvaru 'x, y'\n");
	scanf("%d, %d", &(ref_bod[0]), &(ref_bod[1]));
	printf("\nnejblizsi bod je na indexu %d v matici\nprumerna vzdalenost bodu od ref. bodu je %lf", indexNejblizsi(10, body, ref_bod[0], ref_bod[1]), prumernaVzdalenost(10, body, ref_bod[0], ref_bod[1]));
	
	return 0;
}
