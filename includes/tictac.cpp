#include <iostream>
#include <string>
#include "tictac.h"
using namespace std; //I don't like having stds all over my code so...

char** makeBoard(){
	char nums='0'; //start of ascii nums
	char **board= new char*[SIZE]; //Makes an array of 3 char pointers
	for(int i=0;i<SIZE;i++){
        board[i]=new char[SIZE]; //Makes an array of 3 chars
		for(int k=0;k<SIZE;k++){
			board[i][k]=nums; //puts in ascii nums into board
			nums++; //increases the nums by one
		}
	}
    return board; //returns 2D array with numbers in it
}

void printBoard(char** board){
    for(int i=0;i<SIZE;i++){
        for(int k=0;k<SIZE;k++){
            if(k<2){
                cout<<board[k][i]<<'|'; // prints value in board with a | following it
            }else{
                cout<<board[k][i]<<endl; // prints the value of a board
            }
        }
        if(i<2){
            cout<<"-+-+-"<<endl; //prints -+-+-
        }
    }
}

void makeChoice(char** board,bool player){
    char insert; //will either by X or O
    string request; //will either tell player 1 or 2 to insert number
    char n; //will store the first character of the user input
    if(player==true){
        insert='X';
        request="player 1 insert number: ";
    }else{
        insert='O';
        request="player 2 insert number: ";
    }
    bool correct=false;
    while(correct!=true){
        system("clear");
        printBoard(board);
        cout<<request;
        n=getchar();
        cout<<endl;
        switch(n){                      //I know it's really ugly :(
            case '0':                   //But it works >:P
                if(board[0][0]=='0'){
                    board[0][0]=insert;
                    correct=true;
                }
            break;
            case '1':
                if(board[0][1]=='1'){
                    board[0][1]=insert;
                    correct=true;
                }
            break;
            case '2':
                if(board[0][2]=='2'){
                    board[0][2]=insert;
                    correct=true;
                }
            break;
            case '3':
                if(board[1][0]=='3'){
                    board[1][0]=insert;
                    correct=true;
                }
            break;
            case '4':
                if(board[1][1]=='4'){
                    board[1][1]=insert;
                    correct=true;
                }
            break;
            case '5':
                if(board[1][2]=='5'){
                    board[1][2]=insert;
                    correct=true;
                }
            break;
            case '6':
                if(board[2][0]=='6'){
                    board[2][0]=insert;
                    correct=true;
                }
            break;
            case '7':
                if(board[2][1]=='7'){
                    board[2][1]=insert;
                    correct=true;
                }
            break;
            case '8':
                if(board[2][2]=='8'){
                    board[2][2]=insert;
                    correct=true;
                }
            break;
            default:
            break;
        }
    }
}

bool victor(char **board){
    int expected1='X'+'X'+'X'; //264 is the value of 3 X added together
    int expected2='O'+'O'+'O'; //237 is the value of 3 O added together
    for(int i=0;i<SIZE;i++){
        int check=board[i][0]+board[i][1]+board[i][2];//checks verticals
        int check2=board[0][i]+board[1][i]+board[2][i];//checks horizontals
        if(check==expected1||check==expected2||check2==expected1||check2==expected2){ //These if statments are gross and long... Thats why I love them!
            return true;
        }
    }
    int check3=board[0][0]+board[1][1]+board[2][2];//Both check3 and check4 check diagonals
    int check4=board[2][0]+board[1][1]+board[0][2];
    if(check3==expected1||check3==expected2||check4==expected1||check4==expected2){  //Honestly they are kinda goofy
        return true;
    }
    return false;
}
