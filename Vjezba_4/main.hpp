using namespace std;
#include <cstring>

class Point{
public:
    double x, y;
};

class Board{// todo: clean up
    const char borChar = '#';
    const int x; const int y;
    char **brd;
public:
    Board() = default;
    Board(int xin, int yin) : x(xin), y(yin){ //todo: relocate code
        brd = new char*[x];
        for(int i = 0; i < x; i++){
            brd[i] = new char[y];
            for(int j = 0; j < y; j++){
                if(i == 0 || i == xin - 1) brd[i][j] = borChar;else
                if(j == 0 || j == yin - 1) brd[i][j] = borChar;else
                brd[i][j] = ' ';
            }
        }
    }
    Board(Board& other) : x(other.x), y(other.y){memcpy(brd, other.brd, x*y*sizeof(char));};
    Board(Board&& other) : x(other.x), y(other.y){brd = other.brd; other.brd = NULL;};
    ~Board(){delete(brd);}; //todo

    void draw_char(Point p, char ch);
    void draw_up_line(Point p, char ch);
    void draw_line(Point p1, Point p2, char ch);
    void print_board();
};