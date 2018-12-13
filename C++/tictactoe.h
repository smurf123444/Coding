#ifndef tictactoe

    int const SIZE = 4;
	char matrix[SIZE][SIZE]{ { ' ' ,'A','B','C' },{ '1',' ' },{ '2',' ' },{ '3',' ' } };

	int i, j, k;
	char ch; //A,B or C
	int n; // 1,2 or 3
	bool win = false, isX = true;

    void printMatrix(char matrix[SIZE][SIZE]) {

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl << std::endl;
	}
}

    int checkWinMatrix(char matrix[SIZE][SIZE]) {

        bool win = false;

	for (int i = 1; i <= SIZE; i++) {
		for (int j = 1; j <= 1; j++) {
			 //checks here
            if ((matrix[3][1] == 'X' && matrix[3][2] == 'X' && matrix[3][3] == 'X') ||
                (matrix[2][1] == 'X' && matrix[2][2] == 'X' && matrix[2][3] == 'X') ||
                (matrix[1][3] == 'X' && matrix[2][2] == 'X' && matrix[3][1] == 'X') ||
                (matrix[1][1] == 'X' && matrix[1][2] == 'X' && matrix[1][3] == 'X') ||
                (matrix[1][1] == 'X' && matrix[2][2] == 'X' && matrix[3][3] == 'X') ||
                (matrix[1][1] == 'X' && matrix[2][1] == 'X' && matrix[3][1] == 'X') ||
                (matrix[1][2] == 'X' && matrix[2][2] == 'X' && matrix[3][2] == 'X') ||
                (matrix[1][3] == 'X' && matrix[2][3] == 'X' && matrix[3][3] == 'X'))
             {
                std::cout << "X wins" << std::endl;
                win = true;
             }

             if ((matrix[1][3] == 'O' && matrix[2][2] == 'O' && matrix[3][1] == 'O') ||
                 (matrix[1][1] == 'O' && matrix[2][2] == 'O' && matrix[3][3] == 'O') ||
                 (matrix[1][1] == 'O' && matrix[1][2] == 'O' && matrix[1][3] == 'O') ||
                 (matrix[2][1] == 'O' && matrix[2][2] == 'O' && matrix[2][3] == 'O') ||
                 (matrix[3][1] == 'O' && matrix[3][2] == 'O' && matrix[3][3] == 'O') ||
                 (matrix[1][1] == 'O' && matrix[2][1] == 'O' && matrix[3][1] == 'O') ||
                 (matrix[1][2] == 'O' && matrix[2][2] == 'O' && matrix[3][2] == 'O') ||
                 (matrix[1][3] == 'O' && matrix[2][3] == 'O' && matrix[3][3] == 'O'))
		        {
                    std::cout << "O wins" << std::endl;
                    win = true;
                }
        
	}
    return (win);
}
}

void playersTurns()
{


for (k = 1; k <= 9 && !win; k++) {   //before max amount of turns & not win  
                                    /* Player selection */      //player x                   
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
    }   break;
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
    }   break;
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
    }   break;
             
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
#else
/* code to include if the token is defined */
#endif

