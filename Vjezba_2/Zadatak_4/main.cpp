using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

vector<string> inputStrVec(){
    vector<string> out;
    string tmp;

    while(1){
        getline(cin, tmp);
        if(tmp == "") break;
        out.push_back(tmp);
    }

    return out;
}

void vecStrFlip(vector<string> &in){
    for(auto it = in.begin(); it != in.end(); it++){
        string &tmpstr = *it;
        int strlen = tmpstr.length();//doesn't work directly for some reason
        for(int i = 0, j = strlen - 1; i < strlen / 2; i++, j--){
            char tmpchar = tmpstr[i];
            tmpstr[i] = tmpstr[j];
            tmpstr[j] = tmpchar;
        }
    }
}

int main(){
    vector<string> mystrA = {"So the FCC won't let me be",
                            "Or let me be me, so let me see",
                            "They try to shut me down on MTV",
                            "But it feels so empty, without me"};

    cout << "Input strings seperated by enter. Blank string continues the program." << endl;;

    vector<string> mystr = inputStrVec();
    
    vecStrFlip(mystr);
    sort(mystr.begin(), mystr.end());
    for (auto recenica: mystr)
        cout << recenica << endl;
    cout << endl;
}