using namespace std;
#include <iostream>
#include <vector>
#include <exception>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <limits>
#include <math.h>

int isLess(int i){
    return i < 300;
}

int main(){
    vector<int> vec({16, 20, 600, 30, 500, 41, 98754, 20, 9});
    ofstream joso;
    joso.open("numbers.txt");

    copy(vec.begin(), vec.end(), ostream_iterator<int>(joso, " "));

    joso.close();

    vector<int> readVec;
    ifstream pulic;

    // 1a
    try{
        pulic.open("numbers.txt");
    }catch(const ifstream::failure& e){
        cout << e.what() << endl;
    }

    //1b
    istream_iterator<int> beginSource(pulic);
    istream_iterator<int> end;

    copy(beginSource, end, back_inserter(readVec));

    //1c
    vector<int> greater;
    auto it = copy_if(readVec.begin(), readVec.end(), back_inserter(greater), [](int i){return i > 500;} );

    cout << *greater.data() << endl;

    //1d
    cout << *min_element(readVec.begin(), readVec.end()) << ", " << *max_element(readVec.begin(), readVec.end()) << endl;

    //1e
    readVec.erase(remove_if(readVec.begin(), readVec.end(), isLess), readVec.end());
    cout << *readVec.data() << endl;

    //1d
    sort(readVec.begin(), readVec.end());
    cout << *readVec.data() << endl;

    //2a
    cout << *find_if(vec.begin(), vec.end(), [](int i){return i%2;}) << endl;

    //2b
    cout << count_if(vec.begin(), vec.end(), [](int i){return i%2;}) << endl;

    //2c
    replace_if(vec.begin(), vec.end(), [](int i){return (i & (i - 1) == 0);}, 2);
    cout << *vec.data() << ", " << *(vec.data() + 1) << endl;

    //2d
    vector<int> parni;
    vector<int> neparni;

    copy_if(vec.begin(), vec.end(), back_inserter(parni), [](int i){return i%2;} );
    copy_if(vec.begin(), vec.end(), back_inserter(neparni), [](int i){return !(i%2);} );

    sort(vec.begin(), vec.end());
    //todo fix

    return 0;
}