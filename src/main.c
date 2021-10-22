#include <stdio.h>

#include "dichotomy/dichotomy.h"

int main()
{
	int table[] = {0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11}, taille = 12, result = 8;
	find_by_dichotomy(table, taille, result);
}