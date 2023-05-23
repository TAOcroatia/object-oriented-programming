using namespace std;
#include <iostream>
#include <string>

int substrCnt(string str){
    int count = 0;
    int pos = 0;
    while((pos = str.find("me", pos)) != -1){
        pos++;
        count++;
    }

    return count;
}

int main(){
    string mystr = "\
So the FCC won't let me be\
Or let me be me, so let me see\
They try to shut me down on MTV\
But it feels so empty, without me\
    ";

    cout << substrCnt(mystr) << endl;
}