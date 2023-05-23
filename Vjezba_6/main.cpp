using namespace std;
#include <iostream>
#include <string>

#include "main.hpp"

void counter::addSpecies(Zivotinja anm){
    legs += anm.legCnt;
    cout << "added: " << anm.type << endl;
}

void counter::printLegs(){
    cout << "total legs: " << legs << endl;
}

int main(){
    Kokos an1;
    Tarantula an2;
    Mrav an3;

    counter cnt;

    cnt.addSpecies(an1);
    cnt.addSpecies(an2);
    cnt.addSpecies(an3);

    cnt.printLegs();

    return 0;
}