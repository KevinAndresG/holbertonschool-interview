#include "sandpiles.h"

/**
 * sandpiles_sum - Function that computes the sum of two sandpiles.
 * @grid1: First SandPile
 * @grid2: Second SandPile
 * Return: Nothing
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j, a, s;
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
		int k, l;

		for (k = 0; k < 3; k++)
		{
			for (l = 0; l < 3; l++)
			{
				if (l)
					printf(" ");
				printf("%d", grid1[k][l]);
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
		for (a = 0; a < 3; a++)
		{
			for (s = 0; s < 3; s++)
			{
				gridcoppy[a][s] = grid1[a][s];
			}
		}
	}
}
