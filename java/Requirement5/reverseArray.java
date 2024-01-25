import java.util.*;

public class Main
{
    public static void reverseArray (int[] array)
    {
        // Length of the array
        int n = array.length;
 
        // Swapping the first half elements with last half elements
        for (int i = 0; i < n / 2; i++) 
        {
            int temp     = array[i];
            array[i]     = array[n-i-1];
            array[n-i-1] = temp;
        }
    }    
    
    // Requirement5
    // Add all the elements in the array and print the average
    // average = sum / count	

    public static void processArray ()
    {
        Scanner myObj = new Scanner(System.in);
        int[] array = new int[6];  
        System.out.println("Enter 6 numbers to sort :");
        for(int i=0; i<6; i++)  
        {  
            array[i]=myObj.nextInt();  
        }
 
        // Sorting the array in ascending order
        Arrays.sort(array);
 
        // Reversing the array
        reverseArray (array);
 
        // Printing the elements
        System.out.println(Arrays.toString(array));
    }         
    
	public static void main(String[] args) 
	{
        processArray ();
    }
}

