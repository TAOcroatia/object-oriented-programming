#include "point.hpp"
#include <iostream>
#include <cmath>

void point::setVal(const double inx, const double iny, const double inz){
    x = inx; y = iny; z = inz;
}

void point::setRand(const double min, const double max){
    double points[] = {0, 0, 0};

    for(int i = 0; i < 3; i++){
        double range = max - min;
        double div = RAND_MAX / range;
        points[i] = min + (rand() / div);
    }

    x = points[0]; y = points[1]; z = points[2];
}

void point::getVal(double &outx, double &outy, double &outz){
    outx = x; outy = y; outz = z;
}

double point::distance2D(point input){
    return sqrt(pow(input.x - x, 2) + pow(input.y - y, 2));
}

double point::distance3D(const point input){
    return sqrt(pow(input.x - x, 2) + pow(input.y - y, 2) + pow(input.z - z, 2));
}

bool weapon::shoot(){
    if(size > 0){
        size--;
        return 1;
    }else{
        return 0;
    }
}

void weapon::reload(){
    size = capacity;
}