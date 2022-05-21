#include <stdlib.h>
#include <stdio.h>
#include "sandpiles.h"

/**
 * sandpiles_sum - Function that computes the sum of two sandpiles.
 * @grid1: First SandPile
 * @grid2: Second SandPile
 * Return: Nothing
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j;
	int gridcoppy[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
			gridcoppy[i][j] = grid1[i][j];
		}
	}
	while (gridcoppy[0][0] > 3 || gridcoppy[0][1] > 3 || gridcoppy[0][2] > 3 ||
		   gridcoppy[1][0] > 3 || gridcoppy[1][1] > 3 || gridcoppy[1][2] > 3 ||
		   gridcoppy[2][0] > 3 || gridcoppy[2][1] > 3 || gridcoppy[2][2] > 3)
	{
		printf("=\n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (j)
					printf(" ");
				printf("%d", grid1[i][j]);
			}
			printf("\n");
		}
		if (gridcoppy[0][0] > 3)
		{
			grid1[0][1] += 1;
			grid1[1][0] += 1;
			grid1[0][0] -= 4;
		}
		if (gridcoppy[0][1] > 3)
		{
			grid1[0][2] += 1;
			grid1[0][0] += 1;
			grid1[1][1] += 1;
			grid1[0][1] -= 4;
		}
		if (gridcoppy[0][2] > 3)
		{
			grid1[0][1] += 1;
			grid1[1][2] += 1;
			grid1[0][2] -= 4;
		}
		if (gridcoppy[1][0] > 3)
		{
			grid1[0][0] += 1;
			grid1[1][1] += 1;
			grid1[2][0] += 1;
			grid1[1][0] -= 4;
		}
		if (gridcoppy[1][1] > 3)
		{
			grid1[0][1] += 1;
			grid1[1][2] += 1;
			grid1[1][0] += 1;
			grid1[2][1] += 1;
			grid1[1][1] -= 4;
		}
		if (gridcoppy[1][2] > 3)
		{
			grid1[0][2] += 1;
			grid1[1][1] += 1;
			grid1[2][2] += 1;
			grid1[1][2] -= 4;
		}
		if (gridcoppy[2][0] > 3)
		{
			grid1[1][0] += 1;
			grid1[2][1] += 1;
			grid1[2][0] -= 4;
		}
		if (gridcoppy[2][1] > 3)
		{
			grid1[2][0] += 1;
			grid1[1][1] += 1;
			grid1[2][2] += 1;
			grid1[2][1] -= 4;
		}
		if (gridcoppy[2][2] > 3)
		{
			grid1[2][1] += 1;
			grid1[1][2] += 1;
			grid1[2][2] -= 4;
		}
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				gridcoppy[i][j] = grid1[i][j];
			}
		}
	}
}
