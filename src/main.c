#include <stdio.h>

#include "dichotomy/dichotomy.h"
#include "glouton/glouton.h"

int main()
{
	/* printf("Exercie 1 : \n");
	int table[] = {0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11}, taille = 12, result = 8;
	int n = find_by_dichotomy(table, taille, result);
	printf("%d\n\n", n); */

	printf("Exercie 2 : \n");

	Sack tableau_sac[3];

	Sack m1;
	m1.valeur = 7;
	m1.place = 6;

	Sack m2;
	m2.valeur = 5;
	m2.place = 5;

	Sack m3;
	m3.valeur = 5;
	m3.place = 5;

	tableau_sac[0] = m1;
	tableau_sac[1] = m2;
	tableau_sac[2] = m3;

	tri_decroi(tableau_sac, 3);

	int res = sac_glouton(tableau_sac, 3, 10);
	printf("%d\n", res);
}