#include<board.h>
#include<iostream>
using namespace std;
Board::Board(){
    bool currentColor = 1;
    for(int i = 0;i<8;i++){
        for (int j=0;j<8;){
            int pos[2] = {i,j};
            bd[i][j] = new Square(currentColor,pos);
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
Square::Square(bool c, int p[2]){
    color = c;
    pos[0]=p[0];
    pos[1]=p[1];
}
Square Square::operator=(Square *a) {
    Square c;
    c.color = a->color;
    c.f = a->f;
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