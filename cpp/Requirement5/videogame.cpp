#include <iostream>
#include <vector>

// Requirement5 - Ask the user how many video games they want to Enter
// Update the function to read that many videogames and favorite characters
// Return the number of videogames the user entered.
//          OR
// Update the function to ask the user everytime if he wants to add another 
// videogame or not. If the user says 'y', ask him to enter another videogame
// and favorite character. If the user says anything other than 'y', return 
// from the function.
int inputVideoGames ()
{
    std::string name, videogame, favorite; 
    std::cout << "Enter your name : ";
    std::cin >> name;    
    std::cout << "Enter a video game you like : ";
    std::cin >> videogame;
    std::cout << "Enter your favorite character in " + videogame + " : ";
    std::cin >> favorite;
        
    std::cout << "   " << name << " likes the character " << favorite << " in " << videogame << std::endl;
    return 1;   
}

int main()
{
    int count = inputVideoGames ();
    std::cout << "   Video game count : " << count << std::endl;
    return 0;
}
