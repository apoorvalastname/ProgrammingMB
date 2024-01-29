import java.util.Scanner;  

public class Main
{
	public static void main(String[] args) 
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
	    
		System.out.println("Total : " + total + ", Average : " + average);

		// -------------------------------------
			
		// INPUT / OUTPUT
		String name;
		int age;

		Scanner s = new Scanner(System.in);		
		System.out.println ("Enter your name : ");
		name = s.nextLine();

		System.out.println ("Enter your age : ");
		age = s.nextInt();

		// CONDITIONAL STATEMENTS : IF / ELSE
		if (age < 10)
		    System.out.println ("Too young for Scouts BSA");
		else if (age > 18)
			System.out.println ("Too old for Scouts BSA");
		else
			System.out.println ("Welcome to Scouts BSA");		
	}
}
