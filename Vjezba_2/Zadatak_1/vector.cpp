#include "vector.hpp"

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

vector<int> inputVector(){
    vector<int> out;
    int input;
    cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
    while(cin >> input)
        out.push_back(input);
    return out;
}