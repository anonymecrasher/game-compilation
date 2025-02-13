#ifndef DISTANCE_CALCULATION
#define DISTANCE_CALCULATION


#include <stdlib.h>
#include <stdlib.h>
#include <math.h>

struct coord_s {
    int x;
    int y;
    int z;
};

typedef struct coord_s coords;



coords vector(coords point1, coords point2);
double norm(coords point1, coords point2);
double delta_norm(coords dep, coords ar1, coords ar2);




#endif