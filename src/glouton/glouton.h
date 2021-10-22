typedef struct
{
    float valeur;
    float poid;
} Sack;

void tri_decroi(Sack array[], int size);
Sack *sac_glouton(Sack array[], int size, int poidMax);