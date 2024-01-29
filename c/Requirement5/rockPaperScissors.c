// C program for the above approach
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
/* Return value for Function rockPaperScissors(): 
    -1 : Game Draw
     0 : Computer Won
     1 : User Won
*/
int rockPaperScissors(char userChoice, char computerChoice)
{
    // If both the user and computer has choose the same thing
    if (userChoice == computerChoice)
        return -1;
 
    if (userChoice == 'r')         // userChoice is Rock
    {
        if (computerChoice == 'p') // computerChoice is Paper
            return 0;              // computer Won
        else
            return 1; 
    }
    else if (userChoice == 'p')    // userChoice is Paper
    {
        if (computerChoice == 'r') // computerChoice is Rock
            return 1;              // user Won
        else
            return 0;
    }
    else                           // userChoice is Scissor
    {
        if (computerChoice == 'r') // computerChoice is Rock
            return 0;              // computer won
        else
            return 1;
    }
    return 1;
}

char *choiceString (char choice)
{
    if (choice == 'r')  
        return "Rock";
    else if (choice == 'p')
        return "Paper";
    else
        return "Scissor";
}

// Driver Code
int main()
{
    // Stores the random number
    int n;
 
    char userChoice, computerChoice, result;
 
    // Chooses the random number every time
    srand(time(NULL));
 
    // Generate a random number between 0-2
    n = rand() % 3;
 
    if (n == 0)
        computerChoice = 'r'; // r is denoting Rock
    else if (n == 1)
        computerChoice = 'p'; // p is denoting Paper
    else 
        computerChoice = 's'; // s is denoting Scissor
 
    printf("\nEnter r for Rock, p for PAPER and s for SCISSOR\n");
    scanf("%c", &userChoice);
 
    // Requirement5 - check for incorrect input
    
    result = rockPaperScissors(userChoice, computerChoice);
 
    if (result == -1)
        printf("\nGame Draw!\n");
    else if (result == 1)
        printf("\nYou Wow!\n");
    else
        printf("\nOh! You lost!\n");

    // Requirement5 -  print the actual choice string (Rock / Paper / Scissors)
    printf("\nYou choose : %s, and Computer choose : %s\n",choiceString(userChoice), choiceString(computerChoice));
 
    return 0;
}
