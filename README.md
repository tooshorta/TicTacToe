# TicTacToe
This is a repository for my tic tac toe project in C++
I made this project to help me learn some c++ syntax. This code is kinda ugly, but it's mine. You can do whatever you want with this code.
It's nothing special. Just tic tac toe.
I made four functions in this project. I will list them out so you can see what they are, what they take, and what they do.

The first function is makeBoard. It takes no params. It makes a 3X3 array to play tic tac toe in. It returns a char** of the board.

The second function is printBoard.It takes a char**. It prints the char** in the format of a tic tac toe board. This function does not
return anything.

The third function is makeChoice. It takes a char** and a bool. It uses the bool to determin whos turn it is. It will then prompt the player to
pick a spot on the board. It will then put a X or O in that spot depending on whos turn it is. This function does not return anything.

The final function is victor. It takes a char**. It will use the char** to get access to the values in the board. It will then check 8
specific patterns in the board to see if someone has won. It will return true if someone has won else it will return false.
