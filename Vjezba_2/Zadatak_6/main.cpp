using namespace std;
#include <iostream>
#include <vector>
#include <string>

vector<string> splitStrByWords(string str){
    vector<string> out;
    int start = 0;
    int stop = 0;

    for(int i = 0; i < str.size(); i++){
        if(!isalpha(str[i])){
            stop = i;
            if(stop-start > 1){
                out.push_back(str.substr(start, stop - start));
            }
            out.push_back(string(1, str[i]));// push char
            stop++; // skip char
            start = stop;
        }
    }

    for(int i = 0; i < out.size(); i++){
        cout << i << ": " << out[i] << endl;
    }

    return out;
}

int isVowel(char in){
    string vowels = "aeiouAEIOU";
    return vowels.find(in) != -1;
}

void pigLat(vector<string> in){


    string out;
    int randStrInd = rand() % in.size();
    vector<string> words = splitStrByWords(in[randStrInd]);

    for(int i = 0; i < words.size(); i++){
        if(words[i].size() == 1 && !isalpha(words[i][0])){
            out.push_back(words[i][0]);
            continue;
        }

        if(isVowel(words[i][0])){
            out = out + words[i] + "hay";
            continue;
        }
        
        vector<char> tmpWrd;
        bool hitVowel = false;
        for(int j = 0, ind = 0; j < words[i].size(); j++){
            char tmpChar = words[i][j];
            if(!isVowel(tmpChar) && !hitVowel){
                tmpWrd.push_back(tmpChar);
            }else{
                tmpWrd.insert(tmpWrd.begin() + ind, tmpChar);
                ind++;
                hitVowel = 1;
            }
        }

        out = out + string(tmpWrd.begin(), tmpWrd.end()) + "ay";

    }
    
    cout << in[randStrInd] << endl;
    cout << out << endl;
}

int main(){
    srand(time(NULL));
    vector<string> mystr = {"What time is it?", "How are you?", "He likes ice cream."};

    pigLat(mystr);
}