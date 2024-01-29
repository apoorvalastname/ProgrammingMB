#include <stdio.h>

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
	
	printf ("Total : %d, Average : %0.2f\n", total, average);

	// -------------------------------------

	char name[30];
	int age;

	// INPUT / OUTPUT
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

	return 0;
}


