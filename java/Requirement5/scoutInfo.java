import java.util.*;
public class Main
{
    public static void canJoinAsScout (String name, int age)
    {   
        // Requirement5
        // If the kid is younger than 10, tell them they are a little young to join scouts BSA, try cub scouts.
        // If the kid is older than 18, tell them they are a little old to be a scout, they can volunteer as an adult leader.
        // If the kid is 10-18, welcome them to your troop
    }   
    
    public static void main(String[] args) 
    {   
        Scanner myObj = new Scanner(System.in);
    
        System.out.println("Enter name, age :");
        String name = myObj.nextLine();
        int age = myObj.nextInt();
    
        // Output input by user
        System.out.println("Name " + name);
        System.out.println("Age : " + age + "\n\n");

        canJoinAsScout (name, age);
    }   
}
