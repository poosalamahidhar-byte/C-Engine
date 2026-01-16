/*
    Name Of The Program: Finding factorial of a given number
    Author Of The Program: mahidahr
    Purpose Of The Program: To Find a factorial of a given number very easily without complicated calculations and to save our precious time.
    
    Date On Which The Program Is Written: 16-01-2026
    Description Of The Program (In My Own Words): 
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input: 
              Enter a number : 4 

              Expected Output:
              factorial = 24
        Case 2:
              Expected Input:
              Enter a number = 3

              Expected Output:
              factorial = 6
        Case 3:
              Expected Input:
              Enter a number = 20

              Expected Output:
             Factorial = 2432902008176640000
    Conclusion: This program gives factorial of a given number with out hard calculations .
    [Note : This code works up to 20 factorial only!!]
*/


#include <stdio.h>

long long int fact(long long int n)
{
    long long int f = 1, i;
    for(i = 1; i <= n; i++)
    f = f * i;
    return f;
}

int main()
{
    long long int n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    printf("Factorial = %lld", fact(n));
    return 0;
}