using namespace std;
#include <iostream>

#include "main.hpp"


void Board::draw_char(Point p, char ch){
    int int_x = (int)(p.x + 0.5);
    int int_y = (int)(p.y + 0.5);
    brd[int_x][int_y] = ch;
}

void Board::draw_up_line(Point p, char ch){
    int int_x = (int)(p.x + 0.5);
    int int_y = (int)(p.y + 0.5);

    for (int i = int_y; i > 0; i--) brd[int_x][i] = ch;
}

// todo maybe: https://en.wikipedia.org/wiki/Digital_differential_analyzer_(graphics_algorithm)
void Board::draw_line(Point p1, Point p2, char ch){
    int int_p1x = (int)(p1.x + 0.5);
    int int_p1y = (int)(p1.y + 0.5);
    int int_p2x = (int)(p2.x + 0.5);
    int int_p2y = (int)(p2.y + 0.5);

    for(int i = int_p1x, j = int_p1y; i != int_p2x && j != int_p2y && i < x && j < y; i++, j++){
            brd[j][i] = ch;
    }
}

void Board::print_board(){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout << brd[j][i];
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    Board ploca(20, 20);
    ploca.print_board();

    Point a = {1, 18};
    ploca.draw_char(a, 'x');
    ploca.print_board();

    Point b = {1, 5};
    ploca.draw_up_line(b, 'y');
    ploca.print_board();

    Point x = {1, 1};
    Point y = {15, 17};
    ploca.draw_line(x, y, 'z');
    ploca.print_board();
}