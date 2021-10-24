/**
 * @file glouton.h
 * @author Oscar SAPY
 * @version 0.1
 * @date 2021-10-24
 * 
 * @copyright Copyright (c) 2021
 */

typedef struct
{
    float valeur;
    float poid;
} Sack;

void tri_decroi(Sack array[], int size);
Sack *sac_glouton(Sack array[], int size, int poidMax);