#include <iostream>
#include "../include/figures.h"
#include "../include/board.h"

using namespace std;
// Figure initBoard(Figure[8][8]);
int main() {
    Board *B = new Board();
    B->display();
    cout<<"kk";
    return 0;
}


// void initBoard(Figure *B[8][8]){
//     for(int i=0;i<8;i++){
//         for(int j=0;j<8;j++){
//             if(i==0){
//                 switch (j){
//                     case 0:
//                         break;
//                     case 1:
//                         break;
//                     case 2:
//                         break;
//                     case 3:
//                         break;
//                     case 4:
//                         break;
//                     case 5:
//                         break;
//                     case 6:
//                         break;
//                     case 7:
//                         break;
//                     }
//                 continue;
//             };
//             if(i==7){
//                 switch (j){
//                     case 0:
//                         break;
//                     case 1:
//                         break;
//                     case 2:
//                         break;
//                     case 3:
//                         break;
//                     case 4:
//                         break;
//                     case 5:
//                         break;
//                     case 6:
//                         break;
//                     case 7:
//                         break;
//                     }
//                 continue;
//             };
//             if(i==1){
//                 int pos[2] = {i,j};
//                 Figure *f = new Pawn(1);
//                 B[i][j] = f;
//                 continue;
//             }
//             if (i == 6) {
//                 int pos[2] = {i, j};
//                 Figure *f = new Pawn(0);
//                 B[i][j] = f;
//                 continue;
//             }
//         }

//     }
// }