#include <math.h>

#include "templates.hpp"

template <typename tn> set<tn>::set(int cap){
    capacity = cap;
    size = 0;
    arr = new tn(cap);
}

template <typename tn> set<tn>::~set(){
    delete arr;
}

template <typename tn> int set<tn>::contains(tn a){
    for (int i = 0; i < size; i++){
        if (a == arr[i]) return i;
    }
    return 0;
}

template <typename tn> int set<tn>::add(tn a){
    if (size >= capacity) return 1;

    if (!contains(a)){
        arr[size] = a;
        size++;
    }

    return 0;
}

template <typename tn> int set<tn>::remove(tn a){
    for (int i = contains(a); i < size - 1; i++){
        arr[i] = arr[i + 1];
    }

    size--;

    return 0;
}

template <typename tn> ostream& operator<<(ostream& os, const point<tn>& a){
    os << '(' << a.x << ", " << a.y << ')';
    return os;
}

template <typename tn> float point<tn>::operator-(point<tn> in){
    return sqrt((in.x - x) << 1 + (in.y - y) << 1) / 2;// result is double if i don't divide it for some reason
}