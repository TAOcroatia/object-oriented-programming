#include "vector.hpp"

void MyVector::vector_new (size_t sz)
{
    arr = new int[sz];
    size = 0;
    capacity = sz;
}
void MyVector::vector_delete()
{
    delete arr;
    size = 0;
    capacity = 0;
}
void MyVector::vector_push_back(int n)
{
    if (size == capacity) vector_extend();
    arr[size] = n;
    size++;
}
void MyVector::vector_pop_back()
{
    size--;
}
int& MyVector::vector_front()
{
    return *arr;
}
int& MyVector::vector_back()
{
    return arr[size - 1];
}
size_t MyVector::vector_size() 
{
    return size;
}
void MyVector::vector_extend(){
    capacity *= 2;
    int* tmp = new int[capacity];

    for (int i = 0; i < size; i++){
        tmp[i] = arr[i];
    }

    delete arr;
    arr = tmp;
    tmp = NULL;
}


void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}