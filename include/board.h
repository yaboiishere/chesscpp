#include "figures.cpp"
class Square {
 public:
  bool color;
  int pos[2];
  Figure *f;
  Square();
  Square(bool, int[2]);
  Square operator=(Square *);
  char display();
};
class Board{
public:
    Square bd[8][8];
    Board();
    void display();
};


