#include <iostream>
#include <vector>

// Requirement5 - Ask the user how many video games they want to Enter
// Update the function to read that many videogames and favorite characters
// Return the number of videogames the user entered.

int inputVideoGames ()
{
    std::string name;
    std::vector<std::string> videogame, favorite;
    char userchoice = 'y';
    int count = 0;
  
    std::cout << "Enter your name : ";
    std::cin >> name;
  
    while (userchoice == 'y')
    {
        std::string tmpvideogame, tmpfavorite;
        count++;
        std::cout << "Enter a video game you like : ";
        std::cin >> tmpvideogame;
        videogame.push_back (tmpvideogame);
        std::cout << "Enter your favorite character in " + tmpvideogame + " : ";
        std::cin >> tmpfavorite;
        favorite.push_back(tmpfavorite);
        std::cout << "Do you want to add more games??? " ;
        std::cin >> userchoice ;
    } 
    
    for (int i=0; i<count; i++)
        std::cout << "   " << name << " likes the character " << favorite[i] << " in " <<
	videogame[i] << std::endl;
    return count;
}

int main ()
{
  int count = inputVideoGames ();
  std::cout << "   Video game count : " << count << std::endl;
  return 0;
}

