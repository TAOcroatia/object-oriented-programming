using namespace std;
#include <iostream>
#include "point.hpp"

int main(){
    //Zadatak 1
    srand(time(NULL));

    point dot1;
    dot1.setVal(1.2, 3.4, 5.6);
    point dot2;
    dot2.setRand(1.1, 5.8);

    double x1, y1, z1;

    dot1.getVal(x1, y1, z1);

    cout << "2D distance: " << dot1.distance2D(dot2) << endl;
    cout << "3D distance: " << dot1.distance3D(dot2) << endl;

    cout << endl;

    //Zadatak 2, 3, 4
    int targetCount = 10;
    int hitCount = 0;

    target ship[targetCount];
    for(int i = 0; i < targetCount; i++){
        ship[i].bl.setRand(-10, 3);
        ship[i].tr.setRand(3, 10);
    }

    weapon cannon;
    cannon.location.setRand(-5, 5);
    cannon.capacity = 10;
    cannon.size = 10;

    //no rotation of targets is taken into account
    for(int i = 0; i < targetCount; i++){
        if(cannon.size == 0) break;
        double garb;
        double topz, bottomz, cannonz;
        ship[i].bl.getVal(garb, garb, bottomz);
        ship[i].tr.getVal(garb, garb, topz);
        cannon.location.getVal(garb, garb, cannonz);

        if(cannonz > bottomz && cannonz < topz){
            ship[i].hit = 1;
            hitCount++;
            cannon.size--;
        }
    }

    cout << "Ship count: " << targetCount << endl;
    cout << "Hit ships: " << hitCount << endl;

}