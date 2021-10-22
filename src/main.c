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

	Sack m1;
	m1.valeur = 7;
	m1.poid = 6;

	Sack m2;
	m2.valeur = 5;
	m2.poid = 5;

	Sack m3;
	m3.valeur = 5;
	m3.poid = 5;

	Sack tableau_sac[3] = {m1, m2, m3};
	tri_decroi(tableau_sac, 3);

	Sack *res;
	res = sac_glouton(tableau_sac, 3, 20);
	int compteur = 0;
	while (res[compteur].poid != 0)
	{
		printf("poid de l'objet : %d\n", res[compteur].valeur);
		compteur++;
	}
	printf("il y a %d objet dans le sac \n", compteur);

	printf("Exercie 3 : ");
}