#include <iostream>
#include <string>
#include "includes/tictac.h"
using namespace std;


int main(){
    bool decided=false; //will turn true when a player wins
    bool player=true;   //will be true for player one and false for player two
    int turns=9;        //Game will end in a tie if this is 0
    char **board = makeBoard(); //This pointer to char pointers is what the game is played on.
    while(turns!=0){
        makeChoice(board,player);
        decided=victor(board);
        system("clear");
        if(decided==true){
            if(player){
                printBoard(board);
                cout<<"Player 1 won!"<<endl;
            }else{
                printBoard(board);
                cout<<"Player 2 won!"<<endl;
            }
            return 0;
        }
        player=!player; //I thought this was cool
        turns--;
    }
    system("clear");
    printBoard(board);
    cout<<"draw"<<endl;
    return 0;
}
