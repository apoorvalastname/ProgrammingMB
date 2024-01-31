#include <stdio.h>
#include <string.h>

float getSubjectsAverage (int *score, int n)
{
    int total = 0;
    for (int i=0; i<n; i++)
    {
        total += score[i];
    }
    float average = (float)total/n;
    return average;
}

int main()
{
    // DATATYPES
    int total;
    float avg;

    int math = 90;
    int science = 85;
    int languageArts = 80;
    int geography = 95;

    // OPERATORS
    total = math + science + languageArts + geography;
    avg =  (float) total / 4;
    printf ("Average : %0.2f\n", avg);

    // -------------------------------------
    // INPUT / OUTPUT
    char name[30];
    int age;

    printf ("Enter your name : ");
    scanf ("%s", name);

    printf ("Enter your age : ");
    scanf ("%d", &age);

    // CONDITIONAL STATEMENTS : IF / ELSE
    if (age < 10)
        printf ("Too young for Scouts BSA\n");
    else if (age > 18)
        printf ("Too old for Scouts BSA\n");
    else
        printf ("Welcome to Scouts BSA\n");

    // -------------------------------------
    // LOOPS
    // For Loop
    int score[10] = {100,69,80,90,75,66,70,84,98,87};
    for (int i=0; i<10; i++)
        printf ("%d ", score[i]);
    // While loop
    char word[30] = {};
    while (strcmp(word, "stop"))
    {
        printf ("\nEnter a word : ");
        scanf("%s",word);
    }

    // -------------------------------------
    // FUNCTIONS / METHODS
    float average = getSubjectsAverage (score, 10);
    printf ("Average score of student : %0.2f \n", average);

    return 0;
}
        
