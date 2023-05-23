using namespace std;
#include <iostream>
#include <string>
#include <vector>

#include "exceptions.h"


int inputInt(){
    int out;

    cout << "Enter integer: ";
    if (!(cin >> out)) throw nan();
    cout << endl;

    return out;
}

char inputOp(){
    char out;

    cout << "Enter operator: ";
    cin >> out;
    cout << endl;
    if((out != '+') && (out != '-') && (out != '*') && (out != '/')) throw invOp();

    return out;
}

void calc(int a, int b, char op){
    if (!b) throw divZero();

    cout << a << op << b << '=';

    int out;
    switch(op){
        case '+':
            out = a + b;
        case '-':
            out = a - b;
        case '*':
            out = a * b;
        case '/':
            out = a / b;
    }

    cout << out << endl;
}

int main(){
    vector<string> exs;

    
    try{
        while(1){
            int a = inputInt();
            int b = inputInt();
            char c = inputOp();
            calc(a, b, c);
        }
    }catch(exception& e){
        time_t curr_time;
        curr_time = time(NULL);
        string tm = ctime(&curr_time);

        exs.push_back(tm.erase(24, 1) + ' ' + e.what());
    }

    cout << exs.back();

    return 0;
}