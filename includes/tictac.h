const int SIZE=3; //This is the size of the board

//makeBoard takes no params
//It makes a 3X3 array to play tic tac toe in
//It returns a char** of the board
//
char** makeBoard();

//printBoard takes a char**
//It prints the char** in the format of a tic tac toe board
//This function does not return anything
//
void printBoard(char** board);

//makeChoice takes a char** and a bool
//It uses the bool to determin whos turn it is
//It will then prompt the player to pick a spot on the board
//It will then put a X or O in that spot depending on whos turn it was
//This function does not return anything
//
void makeChoice(char** board,bool player);

//victor takes a char**
//It will use the char** to get access to the values in the board
//It will then check 8 specific patterns in the board to see if someone has won
//returns true if somone has won
//
bool victor(char **board);
