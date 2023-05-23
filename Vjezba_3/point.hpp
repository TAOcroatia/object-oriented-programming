using namespace std;

class point {
    double x, y, z;
    public:
    void setVal(const double inx = 0, const double iny = 0, const double inz = 0);
    void setRand(const double min, const double max);
    void getVal(double &outx, double &outy, double &outz);
    double distance2D(const point input);
    double distance3D(const point input);
};

class weapon{
    public:
    point location;
    int capacity;
    int size;
    bool shoot();
    void reload();
};

class target{
    public:
    point bl, tr;
    bool hit;
};