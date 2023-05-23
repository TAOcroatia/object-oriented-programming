#include <exception>
using namespace std;

class divZero : public exception{
    public:
    const char* what() const noexcept {return "divide by zero\n";}
};

class invOp : public exception{
    public:
    const char* what() const noexcept {return "invalid operation\n";}

};

class nan : public exception{
    public:
    const char* what() const noexcept {return "not a number\n";}

};