#include <math.h>
#include "vec.hpp"


namespace OOP{
    istream& operator>>(istream& is, Vec3& a){
        is >> a.x >> a.y >> a.z;
        return is;
    }

    ostream& operator<<(ostream& os, const Vec3& a){
        os << a.x << ", " << a.y << ", " << a.z << endl;
        return os;
    }

    Vec3& Vec3::operator=(const Vec3& in){
        x = in.x; y = in.y; z = in.z;
        return *this;
    }

    Vec3 Vec3::operator+(const Vec3& in){
        return Vec3(x + in.x, y + in.y, z + in.z);
    }

    Vec3 Vec3::operator-(const Vec3& in){
        return Vec3(x - in.x, y - in.y, z - in.z);
    }

    Vec3 Vec3::operator*(const double in){
        return Vec3(x * in, y * in, z * in);
    }

    double Vec3::operator*(const Vec3& in){
        return in.x * x + in.y * y + in.z + z;
    }

    Vec3 Vec3::operator/(const double in){
        return Vec3(x / in, y / in, z / in);
    }

    Vec3& Vec3::operator+=(const Vec3& in){
        x = x + in.x; y = y + in.y; z = z + in.z;
        return *this;
    }

    Vec3& Vec3::operator-=(const Vec3& in){
        x = x - in.x; y = y - in.y; z = z - in.z;
        return *this;
    }

    Vec3& Vec3::operator*=(const double in){
        x = x * in; y = y * in; z = z * in;
        return *this;
    }

    Vec3& Vec3::operator/=(const double in){
        x = x / in; y = y / in; z = z / in;
        return *this;
    }

    int Vec3::operator==(const Vec3& in){
        if (x == in.x && y == in.y && z == in.z) return 1;
        else return 0;
    }

    int Vec3::operator!=(const Vec3& in){
        if (x != in.x && y != in.y && z != in.z) return 1;
        else return 0;
    }

    double Vec3::operator[](const int in){
        if(in == 0) return x;
        if(in == 1) return y;
        if(in == 2) return z;
        return 0.0;
    }

    double Vec3::norm(){
        return sqrt(x * x + y * y + z * z);
    }
}