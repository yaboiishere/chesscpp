#include <figures.h>
Figure Figure::operator=(Figure *a){
    return *a;
}
void Figure::move(){};
Figure::Figure(){};
char Figure::display(){/*to be implemented*/return 'f';};
bool Figure::exist(){
    return 1;
}
bool None::exist() {
    return 0;
}
Pawn::Pawn(bool c){
    color = c;
    if(c){
        str = 10;
    }else{
        str = -10;
    }
}
void Pawn::move(){
    if(color){

    }
}
char Pawn::display(){
    if(color)
    return 'p';
    else
    return 'P';
}
