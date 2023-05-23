#include<iostream>
using namespace std;

void arrInput(int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++){
        cout << i << ". array member: ";
        int tmp;
        cin >> tmp;
        arr[i] = tmp;
        cout << endl;
    }
}

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

int* remDup(int ogArr[], int arrSize, int& newArrSize){
    int* arr = new int[arrSize];

    for (int i = 0; i < arrSize; i++){
        arr[i] = ogArr[i];
    }

    for (int i = 0; i < arrSize; i++){
        for (int j = 0; j < arrSize; j++){
            if (i != j && arr[i] == arr[j]){
                for (int k = j; k < arrSize-1; k++){
                    arr[k] = arr[k + 1];
                }
                arrSize--;
            }
        }
    }

    int* out = new int[arrSize];

    for (int i = 0; i < arrSize; i++){
        out[i] = arr[i];
    }
    delete arr;

    newArrSize = arrSize;

    return out;
}

int main(){
    int arrSize;
    cout << "Enter the array size: ";
    cin >> arrSize;
    cout << endl;
    int* arr = new int[arrSize];

    arrInput(arr, arrSize);
    arrPrint(arr, arrSize);

    int newArrSize;
    int* newArr = remDup(arr, arrSize, newArrSize);
    delete arr;

    arrPrint(newArr, newArrSize);
    delete newArr;
    newArr = NULL;

    return 0;
}