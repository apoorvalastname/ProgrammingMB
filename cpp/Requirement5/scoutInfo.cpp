#include <iostream>
#include <limits.h>

class ScoutRank
{
    private :
        std::string processRankString (std::string rankString)
        {
            std::string rankstr;
            for (auto c : rankString)
                if (c != ' ')
                    rankstr += std::tolower(c);
            return rankstr;
        }
        enum scoutRankEnum
        {
            NoRank,
            Scout,
            TenderFoot,
            SecondClass,
            FirstClass,
            Star,
            Life,
            Eagle,
            AgedOut
        };
        
    public :

        scoutRankEnum rank;
        std::string rankInString;
        
        
        void updateRank (std::string &rankString)
        {
            rankInString = processRankString (rankString);
            if (rankInString == "norank")
            {
                rank = NoRank;
                rankInString = "No Rank!";
            }
            else if (rankInString == "scout")
            {
                rank = Scout;
                rankInString = "Scout";
            }
            else if (rankInString == "tenderfoot")
            {
                rank = TenderFoot;
                rankInString = "TenderFoot";
            }
            else if (rankInString == "secondclass")
            {
                rank = SecondClass;
                rankInString = "Second Class";
            }
            else if (rankInString == "firstclass")
            {
                rank = FirstClass;
                rankInString = "First Class";
            }
            else if (rankInString == "star")
            {
                rank = Star;
                rankInString = "Star";
            }
            else if (rankInString == "life")
            {
                rank = Life;
                rankInString = "Life";
            }
            else if (rankInString == "eagle")
            {
                rank = Eagle;
                rankInString = "Eagle";
            }
            else if (rankInString == "agedout")
            {
                rank = AgedOut;
                rankInString = "Aged Out!";
            }
            else 
            {
                rank = NoRank;
                rankInString = "No Rank!";
            }
        }
};

class Scout
{
    private :
        
        std::string  patrol, address, phoneNumber, emailid;
        
    public :
    
        std::string  name;
        ScoutRank rank;
        int  age, campingNights;
        bool swimTested;
        
        void getScoutInfo ()
        {
            std::string rankString;
            
            std::cout << "Enter scout name : " ;
            std::getline (std::cin, name);
            std::cout << "Enter scout rank : " ;
            std::getline (std::cin, rankString);   
            std::cout << "Enter scout age : " ;
            std::cin >> age;
            std::cout << "Enter number of camping nights : " ;
            std::cin >> campingNights; 
            std::cout << "Is " + name + " swim tested or not ? (enter 0/1) " ;
            std::cin >> swimTested;   
            std::cout << std::endl;
            rank.updateRank (rankString);
        }
        void printScoutInfo ()
        {
            std::cout << std::endl << " Scout Name : " << name << std::endl ;
            std::cout << " Scout Age : " << age << std::endl;
            std::cout << " Scout Rank : " << rank.rankInString << std::endl ;
            std::cout << " Scout Camping Nights  : " << campingNights << std::endl;
            std::cout << " Scout Swim tested  : " << (swimTested ? "Yes" : "No") << std::endl << std::endl;
        }
};

// Requirement5
// Define a class called SummerCamp, and update Scout class' attributes with SummerCamp related data
// Eg. submittedMedicalForms, amountPaidForCamp, etc.
// Based on if they submitted medicalForms or concent forms or paid the fees or finished prereqs,
// decide if the Scout is ready to attend the summer camp or not.

class MeritBadge
{
    public :
        std::string  name, description;
        ScoutRank minRank;
        int minAge, minCampingNights;
        bool swimTestingNeeded;
        
        void getMeritBadgeInfo ()
        {
            std::string minRankStr;
            
            std::cin.ignore(INT_MAX, '\n');
            std::cout << std::endl << "Enter Merit Badge name : " ;
            std::getline (std::cin, name);
            std::cout << "Minimum scout Rank to take this Merit Badge (Enter 'norank' if no min) ? " ;
            std::getline (std::cin, minRankStr);   
            std::cout << "Minimum scout Age to take this Merit Badge : " ;
            std::cin >> minAge;
            std::cout << "Minimum Camping Nights to take this Merit Badge :" ;
            std::cin >> minCampingNights; 
            std::cout << "Swim testing required ? (enter 0/1) " ;
            std::cin >> swimTestingNeeded;   
            minRank.updateRank (minRankStr);            
        }

        void printMeritBadgeInfo ()
        {
            std::cout << std::endl << " Merit Badge Name : " + name << std::endl;
            std::cout << " Min Scout Rank : " + minRank.rankInString << std::endl;
            std::cout << " Min Scout Age : " << minAge << std::endl;
            std::cout << " Min Camping Nights : " << minCampingNights << std::endl;
            std::cout << " Swim Testing : "<< (swimTestingNeeded ? "Yes":"No") << std::endl << std::endl;
        }
};

bool canScoutTakeMB (Scout &s, MeritBadge &mb)
{
    if (mb.minCampingNights > s.campingNights)
        return false;
    if (mb.minRank.rank > s.rank.rank)
        return false;
    if (mb.swimTestingNeeded && !s.swimTested)
        return false;
    return true;
}

int main()
{
    Scout s1;
    s1.getScoutInfo();
    
    MeritBadge mb1;
    mb1.getMeritBadgeInfo();
    
	// Requirement5
	// Create object for SummerCamp class

    s1.printScoutInfo();
    mb1.printMeritBadgeInfo();
    
    bool isTrue = canScoutTakeMB (s1, mb1);
    
    if (isTrue)
    {
        std::cout <<std::endl <<  s1.name <<" can take " << mb1.name <<" Merit Badge " << std::endl;
    }
    else
    {
        std::cout <<std::endl <<  s1.name <<" can NOT take " << mb1.name <<" Merit Badge " << std::endl;
    }
    return 0;
}
