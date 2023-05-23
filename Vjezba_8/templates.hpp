using namespace std;
#include <iostream>

template <typename tn> class set{
    int size, capacity;
    tn* arr;

    public:
    int contains(tn a);
    int add(tn a);
    int remove(tn a);

    set(int cap);
    ~set();
};

template <typename tn> class point{
    public:
    tn x, y;// operator<< function can't access it if it's private

    
    point(tn xin, tn yin) {x = xin; y = yin;};
    ~point(){};

    //friend ostream& operator<<(ostream& os, const point<tn>& a);// compiler complains
    float operator-(point<tn> in);
};