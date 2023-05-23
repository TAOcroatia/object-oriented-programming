#include "species.hpp"

class Kukac: public Zivotinja{
    public:
    string type;
    int legCnt;
    Kukac(string ty = "insect", int leg = 6) : Zivotinja(ty, leg){};
};

class Pauk: public Zivotinja{
    public:
    string type;
    int legCnt;
    Pauk(string ty = "spider", int leg = 8) : Zivotinja(ty, leg){};
};

class Ptica: public Zivotinja{
    public:
    string type;
    int legCnt;
    Ptica(string ty = "bird", int leg = 2) : Zivotinja(ty, leg){};
};