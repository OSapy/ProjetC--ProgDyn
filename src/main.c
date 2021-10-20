#include <stdio.h>

#include "dichotomy/dichotomy.c"

int main()
{
	int table[] = {0, 1, 2, 3, 4, 5, 6}, taille = 7, result = 5;
	find_by_dichotomy(table, taille, result);
}