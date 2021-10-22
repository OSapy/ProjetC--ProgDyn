#include <stdio.h>
#include <stdlib.h>

/**
 * Search by dichotomy in an entire table
 * @param array The array of values
 * @param size_t The size of the array
 * @param value The value to find
 * @return The position of the value found or -1
 */

int find_by_dichotomy(int array[], int size_t, int value)
{
    int debut = 0, fin = size_t - 1;
    while (debut <= fin)
    {
        int milieu = (debut + fin) / 2;
        if (value < array[milieu])
        {
            fin = milieu - 1;
        }
        else if (value > array[milieu])
        {
            debut = milieu + 1;
        }
        else
        {
            return milieu;
        }
    }
    return -1;
}