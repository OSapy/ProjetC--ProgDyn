#include <stdio.h>
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
            if (array[i].valeur / array[i].place <= array[j].valeur / array[j].place)
            {
                temp.place = array[i].place;
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
 * @param placeMax 
 * @return int 
 */

int sac_glouton(Sack array[], int size, int placeMax)
{
    int total = 0;
    for (int i = 0; i < size; ++i)
    {
        if (array[i].place <= placeMax)
        {
            placeMax -= array[i].place;
            total += array[i].valeur;
        }
    }
    return total;
}