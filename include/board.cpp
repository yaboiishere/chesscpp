#include"board.h"
#include<iostream>
using namespace std;
Board::Board(){
    bool currentColor = 1;
    for(int i = 0;i<8;i++){
        for (int j=0;j<8;j++){
            bd[i][j] = new Square(currentColor);
            if(j==1)currentColor=!currentColor;// yes this is supposed to be here
            currentColor = !currentColor;
        }
        
    }
}
void Board::display(){
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            cout<<bd[i][j].display();
        }
        cout<<"\n";
    }
}
Square::Square(){};
Square::Square(bool c){
    color = c;
}
Square Square::operator=(Square *a) {
    Square c;
    c.color = a->color;
    c.f = a->f;
    return c;
}
char Square::display(){
    if(f->exist()){
        return 'f';
    }else{
        if(color){
            return 'b';
        }else{
            return 'w';
        }
    }
}