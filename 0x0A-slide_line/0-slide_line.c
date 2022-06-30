#include "slide_line.h"
/**
 * slide_line - reproduce the 2048 game on a single horizontal line.
 *
 * @line: Pointer To Array.
 * @size: Size Of Array.
 * @direction: Direction To Merge Numbers.
 * Return: An Int 1 If Succes, 0 If Failure
 */
int slide_line(int *line, size_t size, int direction)
{
	if (direction != 1 && direction != 2)
	{
		return (0);
	}
	else
	{
		size_t j, sizeOfNewArray = 0;
		int newArray[size];

		for (j = 0; j < size; j++)
		{
			newArray[j] = line[j];
			if (line[j] != 0)
			{
				sizeOfNewArray++;
			}
		}
		if (direction == 1)
		{
			FillRight(newArray, size, sizeOfNewArray);
		}
		else if (direction == 2)
		{
			FillLeft(newArray, size, sizeOfNewArray);
		}

		for (size_t l = 0; l < size; l++)
		{
			line[l] = newArray[l];
		}
	}
	return (1);
}
/**
 * FillLeft - Slide To Left
 *
 * @array: Array To Organize
 * @size: Size Of Array
 * @sizeOfNewArray: Just Numbers Differents To 0
 * Return: int*
 */
int *FillLeft(int *array, size_t size, size_t sizeOfNewArray)
{
	size_t i = 0, d = 0, x;
	int fillArray = 0;

	for (; i < size; i++)
	{
		if (array[i] != 0)
		{
			array[fillArray] = array[i];
			fillArray += 1;
		}
	}
	for (x = sizeOfNewArray; x < size; x++)
	{
		array[x] = 0;
	}
	for (i = 0; i < sizeOfNewArray; i++)
	{
		fillArray = 0;
		if (array[i] == array[i + 1])
		{
			array[i] += array[i + 1];
			array[i + 1] = 0;
		}
		for (; d < size; d++)
		{
			if (array[d] != 0)
			{
				array[fillArray] = array[d];
				fillArray += 1;
			}
		}
		for (x = sizeOfNewArray; x < size; x++)
		{
			array[x] = 0;
		}
	}
	return (array);
}
/**
 * FillRight - Slide To Left
 *
 * @array: Array To Organize
 * @size: Size Of Array
 * @sizeOfNewArray: Just Numbers Differents To 0
 * Return: int*
 */
int *FillRight(int *array, size_t size, size_t sizeOfNewArray)
{
	size_t i = sizeOfNewArray, d = sizeOfNewArray, x;
	int fillArray = sizeOfNewArray;

	for (; i > 0; i--)
	{
		if (array[i] != 0)
		{
			array[fillArray] = array[i];
			fillArray -= 1;
		}
	}
	for (x = 0; x < (size - sizeOfNewArray); x++)
	{
		array[x] = 0;
	}
	for (i = sizeOfNewArray; i > (size - sizeOfNewArray); i--)
	{
		fillArray = sizeOfNewArray;
		if (array[i] == array[i - 1])
		{
			array[i] += array[i - 1];
			array[i - 1] = 0;
		}
		for (; d > (size - sizeOfNewArray); d--)
		{
			if (array[d] != 0)
			{
				array[fillArray] = array[d];
				fillArray -= 1;
			}
		}
		for (x = 0; x < (size - sizeOfNewArray); x++)
		{
			array[x] = 0;
		}
	}
	return (array);
}
