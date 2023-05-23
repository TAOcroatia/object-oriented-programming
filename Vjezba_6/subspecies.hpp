#include "animals.hpp"

class Kokos: public Ptica{
    public:
    string type;
    int legCnt;
    Kokos() : Ptica("bird"){};
};
class Tarantula: public Pauk{
    public:
    string type;
    int legCnt;
    Tarantula() : Pauk("spider"){};
};
class Mrav: public Kukac{
    public:
    string type;
    int legCnt;
    Mrav() : Kukac("ant"){};
};