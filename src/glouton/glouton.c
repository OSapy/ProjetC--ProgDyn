/**
 * @file glouton.c
 * @author Oscar SAPY
 * @version 0.1
 * @date 2021-10-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "glouton.h"

/**
 * @author Oscar SAPY
 * @brief Tri a panel passed in parameter depending on the backpack method.
 * @param array
 * @param size
 */
void tri_decroi(Sack array[], int size)
{
    Sack temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i].valeur / array[i].poid <= array[j].valeur / array[j].poid)
            {
                temp.poid = array[i].poid;
                temp.valeur = array[i].valeur;
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

/**
 * @brief Filled the backpack via a panel passed.Returns a float of the weight of the bag.
 * 
 * @param array 
 * @param size 
 * @param poidMax 
 * @return int 
 */

Sack *sac_glouton(Sack array[], int size, int poidMax)
{
    Sack *sac = (Sack *)malloc(sizeof(Sack));
    int poid_actuelle = 0;
    for (int i = 0; i < size; ++i)
    {
        if (array[i].poid + poid_actuelle <= poidMax)
        {
            poid_actuelle += array[i].poid;
            sac[i] = array[i];
        }
    }
    return sac;
}