#include<iostream>
using namespace std;

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

int* doubler(int count){
    int* out = new int[count+2];
    out[0] = 1; out[1] = 1;

    for (int i = 2; i < count+2; i++){
        out[i] = out[i-1] + out[i-2];
    }

    return out;
}

int main(){
    int* arr = doubler(10);
    arrPrint(arr, 10+2);

    delete arr;
    arr = NULL;
    return 0;
}