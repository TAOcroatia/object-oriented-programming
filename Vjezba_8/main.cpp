using namespace std;
#include <iostream>

#include "templates.cpp"

void arrPrint(int arr[], int arrSize){
    cout << "[ ";
    for (int i = 0; i < arrSize; i++){
        int tmp = arr[i];
        cout << tmp;
        if (i < arrSize - 1){
            cout << ", ";
        }else{
            cout << " ";
        }
    }
    cout << "]" << endl;
}

template <typename var> var lesser(var x, var y){
    return (x < y) ? x : y;
}

template <typename var> var* arrSort(var* arr, int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (arr[i] < arr[j]){
                var tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    return arr;
}

template <> char* arrSort(char* arr, int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (tolower(arr[i]) < tolower(arr[j])){
                char tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    return arr;
}

int main(){
    cout << lesser<int>(10, 20) << endl << endl;

    set<int> skup(100);
    skup.add(10);
    skup.add(20);
    skup.add(15);
    skup.add(-102);

    cout << skup.contains(15) << endl;
    skup.remove(15);
    cout << skup.contains(15) << endl << endl;

    int intArr[] = {2, 4, 6, 7, 8, 41, 1, 6, 4, 5};
    arrPrint(arrSort(intArr, 10), 10);

    char charArr[] = {'a', 'f', 'w', 'F', 'k', 'Q', 'l', 'E'};
    cout << arrSort(charArr, 8) << endl << endl;

    point<int> p1(2, 3), p2(3, 4);
    cout << "Udaljenost tocaka " << p1 << " i " << p2 << " je " << p1 - p2 << endl;

    return 0;
}