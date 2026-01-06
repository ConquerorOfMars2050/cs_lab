#include <stdio.h>
 
char array[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice1 = 0;
int choice2 = 0;
int stop = 0;
 
 
int checkForWin();
void displayBoard();
 
 
int checkForWin()
{
 
    if(array[0] == 'X' && array[4] == 'X' && array[8] == 'X')
    {
        printf("The game is over\n");
        printf("Player 1 has won!\n");
        stop = 1;
    }
 
    if(array[0] == 'O' && array[4] == 'O' && array[8] == 'O')
    {
        printf("The game is over\n");
        printf("Player 2 has won!\n");
        stop = 1;
    }
 
    if(array[2] == 'X' && array[4] == 'X' && array[6] == 'X')
    {
        printf("The game is over\n");
        printf("Player 1 has won!\n");
        stop = 1;
    }
    
    if(array[2] == 'O' && array[4] == 'O' && array[6] == 'O')
    {
        printf("The game is over\n");
        printf("Player 2 has won!\n");
        stop = 1;
    }
    
    if(array[1] == 'X' && array[4] == 'X' && array[7] == 'X')
    {
        printf("The game is over\n");
        printf("Player 1 has won!\n");
        stop = 1;
    }
 
    if(array[1] == 'O' && array[4] == 'O' && array[7] == 'O')
    {
        printf("The game is over\n");
        printf("Player 2 has won!\n");
        stop = 1;
    }
 
    if(array[3] == 'X' && array[4] == 'X' && array[5] == 'X')
    {
        printf("The game is over\n");
        printf("Player 1 has won!\n");
        stop = 1;
    }
 
    if(array[3] == 'O' && array[4] == 'O' && array[5] == 'O')
    {
        printf("The game is over\n");
        printf("Player 2 has won!\n");
        stop = 1;
    }
        
    if(array[0] == 'X' && array[1] == 'X' && array[2] == 'X')
    {
        printf("The game is over\n");
        printf("Player 1 has won!\n");
        stop = 1;
    }
 
    if(array[0] == 'O' && array[1] == 'O' && array[2] == 'O')
    {
        printf("The game is over\n");
        printf("Player 2 has won!\n");
        stop = 1;
    }
 
    if(array[2] == 'X' && array[5] == 'X' && array[8] == 'X')
    {
        printf("The game is over\n");
        printf("Player 1 has won!\n");
        stop = 1;
    }
 
    if(array[2] == 'O' && array[5] == 'O' && array[8] == 'O')
    {
        printf("The game is over\n");
        printf("Player 2 has won!\n");
        stop = 1;
    }
 
    if(array[6] == 'X' && array[7] == 'X' && array[8] == 'X')
    {
        printf("The game is over\n");
        printf("Player 1 has won!\n");
        stop = 1;
    }
 
    if(array[6] == 'O' && array[7] == 'O' && array[8] == 'O')
    {
        printf("The game is over\n");
        printf("Player 2 has won!\n");
        stop = 1;
    }
 
    if(array[0] == 'X' && array[3] == 'X' && array[6] == 'X')
    {
        printf("The game is over\n");
        printf("Player 1 has won!\n");
        stop = 1;
    }
 
    if(array[0] == 'O' && array[3] == 'O' && array[6] == 'O')
    {
        printf("The game is over\n");
        printf("Player 2 has won!\n");
        stop = 1;
    }
 
    return stop;
}
 
void displayBoard()
{
    printf("\tTic Tac Toe\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n");
 
    printf(" %c  |  %c  |  %c  \n", array[0], array[1], array[2]);
    printf("    |     |     \n");
    printf("_________________\n\n");
 
    printf(" %c  |  %c  |  %c  \n", array[3], array[4], array[5]);
    printf("    |     |     \n");
    printf("_________________\n\n");
 
    printf(" %c  |  %c  |  %c  \n", array[6], array[7], array[8]);
    printf("    |     |     \n");
 
}
 
int main()
{
    displayBoard();
    
    while(checkForWin() != 1)
    {
        go_there:
        printf("Player 1, enter a number: ");
        scanf("%d", &choice1);
 
        if(choice1 < 1 || choice1 > 9)
        {
            printf("Invalid input!\n");
            goto go_there;
        }
 
        for(int i = 1; i <= 9; i++)
        {
            while(choice1 == i)
            {
                array[i-1] = 'X';
                displayBoard();
                break;
            }
        }
 
        if(checkForWin() == 1)
        {
            break;
        }
 
        go_here:
        printf("Player 2, enter a number: ");
        scanf("%d", &choice2);
 
        if(choice2 < 1 || choice2 > 9)
        {
            printf("Invalid input!\n");
            goto go_here;
        }
 
        for(int j = 1; j <= 9; j++)
        {
            while(choice2 == j)
            {
                array[j-1] = 'O';
                displayBoard();
                break;
            }
        }
 
        if(checkForWin() == 1)
        {
            break;
        }
 
     
 
    }
 
   return 0;
}
