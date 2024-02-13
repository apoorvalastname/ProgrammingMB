import java.util.*;  

public class Main
{
    static int updateSubjects (HashMap<String, Integer> subjectScores)
    {
        Scanner input = new Scanner(System.in);
        String moreSubjects = "y";
        while (moreSubjects.charAt(0) == 'y' || moreSubjects.charAt(0) == 'Y') 
        {
            System.out.print("Add a new subject : ");
            String subject = input.nextLine();
            System.out.print("Add student's score in " + subject + " : ");
            int score = input.nextInt();
            subjectScores.put(subject, score);
            System.out.print("More subjects ? (y/n) ");
            input.nextLine();
            moreSubjects = input.nextLine();
        }
        return subjectScores.size();   
    }
    
	public static void main(String[] args) 
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
	    
		System.out.println("Total : " + total + ", Average : " + average);

		// -------------------------------------
		// INPUT / OUTPUT
		String name;
		int age;

		Scanner s = new Scanner(System.in);		
		System.out.print ("Enter your name : ");
		name = s.nextLine();

		System.out.print ("Enter your age : ");
		age = s.nextInt();

		// CONDITIONAL STATEMENTS : IF / ELSE
		if (age < 10)
		    System.out.println ("Too young for Scouts BSA");
		else if (age > 18)
			System.out.println ("Too old for Scouts BSA");
		else
			System.out.println ("Welcome to Scouts BSA");		

		// -------------------------------------
		// COLLECTIONS AND LOOPS
		// Vectors - ArrayLists
		ArrayList<String> subjects = new ArrayList<String>() 
										{{	add("Math"); 
											add("Science"); 
											add("LanguageArts"); 
											add("Geography");
										}};
		subjects.add("History");
		
		System.out.println(subjects);
		
		// For Loop
		System.out.println("ArrayList For loop 1 : ");
		for (String subject : subjects)
		    System.out.println(subject);
		    
		System.out.println("ArrayList For loop 2 : ");
		for (int i=0; i<subjects.size(); i++)
		    System.out.println(subjects.get(i));

		// Dictionary - HashMap
		HashMap<String, Integer> subjectScores = new HashMap<String, Integer>()
		                                        {{  put("Math", 90);
		                                            put("Science", 85);
		                                            put("LanguageArts", 80);
		                                            put("Geography", 95);
		                                        }};
		subjectScores.put("History", 92);
		
		System.out.println(subjectScores);
		for (String subject : subjectScores.keySet())
		    System.out.println(subject + " : " + subjectScores.get(subject));

		// While loop
		Iterator<String> it = subjects.iterator();
        while(it.hasNext()) 
            System.out.println(it.next());

        Iterator score = subjectScores.entrySet().iterator();
        while (score.hasNext())
            System.out.println(score.next());

		// -------------------------------------
		// FUNCTIONS / METHODS
        int totalSubjects = updateSubjects (subjectScores);
        System.out.println ("Total number of Subjects is  : " + totalSubjects);
		for (String subject : subjectScores.keySet())
		    System.out.println(subject + " : " + subjectScores.get(subject));
		
	}
}
