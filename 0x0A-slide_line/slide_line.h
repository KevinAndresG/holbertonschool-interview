#ifndef LISTS_H
#define LISTS_H
#define SLIDE_RIGHT 1
#define SLIDE_LEFT 2
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int slide_line(int *line, size_t size, int direction);
int *FillLeft(int *array, size_t size, size_t sizeOfNewArray);
int *FillRight(int *array, size_t size, size_t sizeOfNewArray);

#endif /* LISTS_H */
