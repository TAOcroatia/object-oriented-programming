using namespace std;
#include <iostream>

#include "vec.hpp"
using namespace OOP;

int main(){
    Vec3 test(1.0, 2.0, 3.0);
    Vec3 test2;

    //cin >> test;
    cout << test << endl;

    test2 = test;
    cout << test2 << endl;

    cout << (test + test2) << (test - test2) << (test * test2) << endl << (test * 2) << (test / 2) << endl;

    cout << (test += test2) << (test -= test2) << (test *= 3) << (test /= 2) << test[0] << endl;

    return 0;
}