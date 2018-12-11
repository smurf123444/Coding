//tic tac toe game
#include <iostream>
#include "tictactoe.h"
void playersTurns()
{


for (k = 1; k <= 9 && !win; k++)    //before max amount of turns & not win 
    
    {
                                    /* Player selection */

                                    //player x
                    
if (isX == true) {
			std::cout << "Player number 1 (X): " << std::endl;
			std::cout << "Please enter cell input (for example A2): ";
			std::cin >> ch >> n;
			std::cout << std::endl;

            switch(ch){
                    case 'A':
                    {
                        switch(n)
                            {
                            case 1:
                                matrix[1][1] = 'X';
                                break;
                            case 2:
                                matrix[2][1] = 'X';
                                break;
                            case 3:
                                matrix[3][1] = 'X';
                                break;
                            }
                    } break;
                   case 'B':
                    {
                        switch(n)
                            {
                            case 1:
                                matrix[1][2] = 'X';
                                break;
                            case 2:
                                matrix[2][2] = 'X';
                                break;
                            case 3:
                                matrix[3][2] = 'X';
                                break;
                            }
                    } break;
                    case 'C':
                    {
                        switch(n)
                            {
                            case 1:
                                matrix[1][3] = 'X';
                                break;
                            case 2:
                                matrix[2][3] = 'X';
                                break;
                            case 3:
                                matrix[3][3] = 'X';
                                break;
                            }
                    } break;
                
                    default:
                        std::cout <<"no input detected"<< std::endl;
                        break;
                }; 
                printMatrix(matrix);
		}

                                            //playyer y
if (isX == false) {
            win = checkWinMatrix(matrix);
			std::cout << "Player number 2 (O): " << std::endl;
			std::cout << "Please enter cell input (for example A2): ";
			std::cin >> ch >> n;
			std::cout << std::endl;

                    switch(ch){
                    case 'A':
                    {
                        switch(n)
                            {
                            case 1:
                                matrix[1][1] = 'O';
                                break;
                            case 2:
                                matrix[2][1] = 'O';
                                break;
                            case 3:
                                matrix[3][1] = 'O';
                                break;
                            }
                    } break;
                   case 'B':
                    {
                        switch(n)
                            {
                            case 1:
                                matrix[1][2] = 'O';
                                break;
                            case 2:
                                matrix[2][2] = 'O';
                                break;
                            case 3:
                                matrix[3][2] = 'O';
                                break;
                            }
                    } break;
                    case 'C':
                    {
                        switch(n)
                            {
                            case 1:
                                matrix[1][3] = 'O';
                                break;
                            case 2:
                                matrix[2][3] = 'O';
                                break;
                            case 3:
                                matrix[3][3] = 'O';
                                break;
                            }
                    } break;
                
                    default:
                        std::cout <<"no input detected"<< std::endl;
                        break;
                }; 
            	printMatrix(matrix);
		}
		isX = !isX;
        win = checkWinMatrix(matrix);
	}
}
int main() {

                                        // vars inside tictactoe.h

	printMatrix(matrix);                //printing the matrix

    playersTurns();
       
	if (win == false) {   //desplaying game status for a draw
		std::cout << "it's a tie" << std::endl;
	}
    
}


/*

			if (ch == 'A' && n == 1) {
				matrix[1][1] = 'O';
			}
			if (ch == 'A' && n == 2) {
				matrix[2][1] = 'O';
			}
			if (ch == 'A' && n == 3) {
				matrix[3][1] = 'O';
			}
			if (ch == 'B' && n == 1) {
				matrix[1][2] = 'O';
			}
			if (ch == 'B' && n == 2) {
				matrix[2][2] = 'O';
			}
			if (ch == 'B' && n == 3) {
				matrix[3][2] = 'O';
			}
			if (ch == 'C' && n == 1) {
				matrix[1][3] = 'O';
			}
			if (ch == 'C' && n == 2) {
				matrix[2][3] = 'O';
			}
			if (ch == 'C' && n == 3) {
				matrix[3][3] = 'O';
			}
            
 */




/*

		if (matrix[1][3] == 'X' && matrix[2][2] == 'X' && matrix[3][1] == 'X') {
			std::cout << " X wins!" << std::endl;
			win = true;
			}
		else if (matrix[1][3] == 'O' && matrix[2][2] == 'O' && matrix[3][1] == 'O') {
			std::cout << " O wins!" << std::endl;
			win = true;
			break;
		}

		if (matrix[1][1] == 'X' && matrix[2][2] == 'X' && matrix[3][3] == 'X') {
			std::cout << " X wins!" << std::endl;
			win = true;
			break;
		}
		else if (matrix[1][1] == 'O' && matrix[2][2] == 'O' && matrix[3][3] == 'O') {
			std::cout << " O wins!" << std::endl;
			win = true;
			break;
		}
		if (matrix[1][1] == 'X' && matrix[1][2] == 'X' && matrix[1][3] == 'X') {
			std::cout << " X wins!" << std::endl;
			win = true;
			break;
		}
		else if (matrix[1][1] == 'O' && matrix[1][2] == 'O' && matrix[1][3] == 'O') {
			std::cout << " O wins!" << std::endl;
			win = true;
			break;
		}
		if (matrix[2][1] == 'X' && matrix[2][2] == 'X' && matrix[2][3] == 'X') {
			cout << " X wins!" << endl;
			win = true;
			break;
		}
		else if (matrix[2][1] == 'O' && matrix[2][2] == 'O' && matrix[2][3] == 'O') {
			cout << " O wins!" << endl;
			win = true;
			break;
		}
		if (matrix[3][1] == 'X' && matrix[3][2] == 'X' && matrix[3][3] == 'X') {
			cout << " X wins!" << endl;
			win = true;
			break;
		}
		else if (matrix[3][1] == 'O' && matrix[3][2] == 'O' && matrix[3][3] == 'O') {
			cout << " O wins!" << endl;
			win = true;
			break;
		}
		if (matrix[1][1] == 'X' && matrix[2][1] == 'X' && matrix[3][1] == 'X') {
			cout << " X wins!" << endl;
			win = true;
			break;
		}
		else if (matrix[1][1] == 'O' && matrix[2][1] == 'O' && matrix[3][1] == 'O') {
			cout << " O wins!" << endl;
			win = true;
			break;
		}
		if (matrix[1][2] == 'X' && matrix[2][2] == 'X' && matrix[3][2] == 'X') { //
			cout << " X wins!" << endl;
			win = true;
			break;
		}
		else if (matrix[1][2] == 'O' && matrix[2][2] == 'O' && matrix[3][2] == 'O') {
			cout << " O wins!" << endl;
			win = true;
			break;
		}
		if (matrix[1][3] == 'X' && matrix[2][3] == 'X' && matrix[3][3] == 'X') {
			cout << " X wins!" << endl;
			win = true;
			break;
		}
		else if (matrix[1][3] == 'O' && matrix[2][3] == 'O' && matrix[3][3] == 'O') {
			cout << " X wins!" << endl;
			win = true;
			break;
		}
        */

