#include <iostream>

int main()
{
    // DATATYPES
    int total;
    float average;

    int math = 90; 
    int science = 85; 
    int languageArts = 80; 
    int pe = 95; 

	// OPERATORS
    total = math + science + languageArts + pe; 
    average =  (float) total / 4;   
    
    std::cout << "Total : "<< total << ", Average : " << average << std::endl;

    // -------------------------------------

    // INPUT / OUTPUT
    std::string name;
    int age;
    std::cout << "Enter your name : ";
    std::cin >> name;

    std::cout << "Enter your age : ";
    std::cin >> age;

	// CONDITIONAL STATEMENTS : IF / ELSE
    if (age < 10)
        std::cout << "Too young for Scouts BSA" << std::endl;
    else if (age > 18)
        std::cout << "Too old for Scouts BSA" << std::endl;
    else
        std::cout << "Welcome to Scouts BSA" << std::endl;

    return 0;
}
