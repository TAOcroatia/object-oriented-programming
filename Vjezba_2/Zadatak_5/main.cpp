using namespace std;
#include <iostream>
#include <string>

void fixFormat(string &str){
    for(size_t i = 1; i < str.length(); i++){
        if(str[i] == ',' || str[i] == '.'){
            while(str[i-1] == ' '){
                str.erase(i-1, 1);
                i--;
            }
            if(str[i+1] != ' '){
                str.insert(i+1, " ");
                i++;
            }
        }
    }
    if(str[str.length() - 1] == ' '){
        str.erase(str.length() - 1);
    }
}

int main(){
    string mystr = "Ja bih ,ako ikako mogu ,ovu recenicu napisala ispravno .";

    fixFormat(mystr);

    cout << mystr << endl;
}