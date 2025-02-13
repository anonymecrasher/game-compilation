#include "distance_calculation.h"

coords vector(coords point1, coords point2){
    coords n = {point1.x - point2.x, point1.y - point2.y, point1.z - point2.z };
    return n;
}

double norm(coords point1, coords point2) {
    coords n = vector(point1 , point2);
    return (sqrt((double)(((n.x) * (n.x) + (n.y) * (n.y) + (n.z) * (n.z)))));
}

double delta_norm(coords dep, coords ar1, coords ar2){
    return norm(dep, ar1) - norm(dep, ar2);
}

int main(void){
    return 0;
}