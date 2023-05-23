using namespace std;
#include <iostream>
namespace OOP{
    class Vec3{
        public:
        double x, y, z;

        Vec3():x(0.0), y(0.0), z(0.0){};
        Vec3(double ix, double iy, double iz):x(ix), y(iy), z(iz){};

        friend istream& operator>>(istream& is, Vec3& a);
        friend ostream& operator<<(ostream& os, const Vec3& a);
        Vec3& operator=(const Vec3& in);
        Vec3 operator+(const Vec3& in);
        Vec3 operator-(const Vec3& in);
        Vec3 operator*(const double in);
        double operator*(const Vec3& in);
        Vec3 operator/(const double in);
        Vec3& operator+=(const Vec3& in);
        Vec3& operator-=(const Vec3& in);
        Vec3& operator*=(const double in);
        Vec3& operator/=(const double in);
        int operator==(const Vec3& in);
        int operator!=(const Vec3& in);
        double operator[](const int in);

        double norm();
    };
}