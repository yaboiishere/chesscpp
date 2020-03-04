#ifndef _board_h_included_
#define _board_h_included_
#include "figures.h"
class Square {
 public:
  bool color;
  int pos[2];
  Figure *f;
  Square();
  Square(bool);
  Square operator=(Square *);
  char display();
};
class Board{
public:
    Square bd[8][8];
    Board();
    void display();
};

#endif
