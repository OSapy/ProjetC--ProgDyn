typedef struct
{
    float valeur;
    float place;
} Sack;

void tri_decroi(Sack array[], int size);
int sac_glouton(Sack array[], int size, int placeMax);