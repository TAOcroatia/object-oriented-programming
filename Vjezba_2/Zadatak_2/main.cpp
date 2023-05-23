using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

void printVector(vector<int> &in){
    cout << "{ ";
    for(size_t i = 0; i < in.size(); i++){
        cout << in[i];
        if(i != in.size() - 1){
            cout << ", ";
        }
    }
    cout << " }" << endl;
}

int main(){
    vector<int> veko1 = {5, 4, 6, 54, 21, 98, 78, 23, 64};
    printVector(veko1);
    sort(veko1.begin(), veko1.end());
    printVector(veko1);
    cout << endl;

    vector<int> veko2 = {21, 45, 95, 78, 65, 987, 2143, 8, 98, 324, 9};
    printVector(veko2);
    vector<int>::iterator veko2Min = min_element(veko2.begin(), veko2.end());
    veko2.insert(veko2Min, 0);
    printVector(veko2);
    cout << endl;

    vector<int> veko3 = {5, 4, 6, 54, 21, 98, 78, 23, 64};
    printVector(veko3);
    vector<int>::iterator veko3It = max_element(veko3.begin(), veko3.end());
    veko3It++;
    int veko3Sum = 0;
    while(veko3It != veko3.end()){
        veko3Sum += *veko3It;
        veko3It++;
    }
    cout << veko3Sum << endl;
}