#include <iostream>
#include <vector>
#include <unordered_map>

int updateSubjects (std::unordered_map<std::string, int> &subjectScores)
{
    char moreSubjects = 'y';
    while (moreSubjects == 'y' || moreSubjects == 'Y') 
    {
        std::string subject;
        int score;
        std::cout << "Add a new subject : ";
        std::cin >> subject;
        std::cout << "Add student's score in " + subject + " : ";
        std::cin >> score;
        subjectScores[subject] = score;
        std::cout << "More subjects ? (y/n) ";
        std::cin >> moreSubjects;
    }
    return subjectScores.size();   
}

int main()
{
    // DATATYPES
    int total;
    float average;

    int math = 90; 
    int science = 85; 
    int languageArts = 80; 
    int geography = 95; 

	// OPERATORS (+, -, *, /, %, &&, ||, !)  
    total = math + science + languageArts + geography; 
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

    // -------------------------------------
	// COLLECTIONS AND LOOPS
	// vector
    std::vector<std::string> subjects = {"Math", "Science", "LanguageArts", "Geography"};
    subjects.push_back ("History");
    
	// For Loop
    std::cout << "Vector For loop 1 : " << std::endl;
    for (int i=0; i<subjects.size(); i++)
    {
        std::cout << "\t" + subjects[i] << std::endl;
    }
    
    std::cout << "Vector For loop 2 : " << std::endl;
    for (auto &subject : subjects)
    {
        std::cout << "\t" + subject << std::endl;
    }
    
    std::cout << "Vector For loop 3 : " << std::endl;
    for (auto it=subjects.begin(); it != subjects.end(); it++)
    {
        std::cout << "\t" + *it << std::endl;
    }    

	// Dictionary - UnorderedMap
    std::unordered_map<std::string, int> subjectScores = {{"Math", 90},
                                                          {"Science", 85},
                                                          {"LanguageArts", 80},
                                                          {"Geography", 95}};
    subjectScores.insert ({"History", 92});
    
    std::cout << "Dictionary For loop 1 : " << std::endl;
    for (auto &subject : subjectScores)
    {
        std::cout << "\t" + subject.first << " : " << subject.second << std::endl;
    }
    
    std::cout << "Dictionary For loop 2 : " << std::endl;
    for (auto it=subjectScores.begin(); it != subjectScores.end(); it++)
    {
        std::cout << "\t" + it->first << " : " << it->second << std::endl;
    }    
	
	// While loop
	std::string word = "go";    
	while (word != "stop")
	{
		std::cout << "Enter word : ";
		std::cin >> word;
	}

	// -------------------------------------	
	// FUNCTIONS / METHODS
    int totalSubjects = updateSubjects (subjectScores);
    std::cout << "Total number of Subjects is  : " << totalSubjects << std::endl;
    for (auto subject : subjectScores)
        std::cout << subject.first << " : " << subject.second << std::endl;

    return 0;
}
