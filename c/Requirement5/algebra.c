#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*  Ask user to input 2 points (x1, y1) and (x2, y2)
    Find and Print the length of the line (sqrt ((x2-x1)2 + (y2-y1)2))
    Find and Print if the line is parallel to x-axis or y-axis.
    Print the equation of the line. (y = mx + c)
*/

int getXdiff (int x1, int y1, int x2, int y2)
{
    int xdiff = x2-x1;
    return xdiff;
}

int getYdiff (int x1, int y1, int x2, int y2)
{
    int ydiff = y2-y1;
    return ydiff;
}

double getLineLength (int x1, int y1, int x2, int y2)
{
    int xdiff = getXdiff (x1, y1, x2, y2);
    int ydiff = getYdiff (x1, y1, x2, y2);
    double length = sqrt (xdiff * xdiff + ydiff * ydiff);
    return length;
}

bool isLineParallelTo_X_Axis (int x1, int y1, int x2, int y2)
{
    if (y2 == y1)
        return true;
    return false;
}

bool isLineParallelTo_Y_Axis (int x1, int y1, int x2, int y2)
{
    if (x2 == x1)
        return true;
    return false;
}

// Equation of line is y = mx + c
// m = (y2-y1) / (x2-x1)
void lineEquation (int x1, int y1, int x2, int y2)
{
    double m = (double) getYdiff(x1, y1, x2, y2) / getXdiff(x1, y1, x2, y2);
    double c = y1 - m*x1;
    printf ("Equation of the line is : y = %0.2fx + %0.2f \n", m, c);
}

// Requirement5
// Find the y intercept (y intercept is c)
// Find the x intercept (x intercept is -c/m)
// From the above function lineEquation(), separate out m and c into separate functions
// Use these new functions to write xIntercept() and yIntercept() functions

int main()
{
    int x1, y1, x2, y2;
    printf ("Enter the first point x, y (separated by comma) " );
    scanf ("%d,%d", &x1, &y1);
    printf ("Enter the second point x, y (separated by comma) " );
    scanf ("%d,%d", &x2, &y2);
    
    double lineLength = getLineLength (x1, y1, x2, y2);
    printf ("Length of the line is : %0.2f units\n", lineLength);
    
    if (isLineParallelTo_X_Axis(x1, y1, x2, y2))
    {
        printf ("Line is Parallel to x-axis!\n");
        printf ("Equation of the line is : y = %d \n", y1);
    }
    else if (isLineParallelTo_Y_Axis(x1, y1, x2, y2))
    {
        printf ("Line is Parallel to y-axis!\n");
        printf ("Equation of the line is : x = %d \n", x1);
    }
    else
    {
        printf ("Line is Not Parallel to x or y axis! \n");
        lineEquation (x1, y1, x2, y2);
        // Requirement5
        // xIntercept (x1, y1, x2, y2);
        // yIntercept (x1, y1, x2, y2);
    }
    return 0;
}
