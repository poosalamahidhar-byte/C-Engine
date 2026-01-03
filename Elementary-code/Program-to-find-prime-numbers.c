/*
    Name Of The Program:Program to Find Prime Numbers
    Author Of The Program: mahidhar
    Purpose Of The Program:The purpose of this program is to check whether a given number is a prime number or not by testing its divisibility.
    Date On Which The Program Is Written: 03-01-2026
    Description Of The Program (In My Own Words): This program takes an integer input from the user and checks if it is divisible by any number other than 1 and itself. If it is divisible, the number is not prime; otherwise, it is declared as a prime number.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:
              Enter a number: 4

              Expected Output:
              Entered number is not a prime number
        Case 2:
              Expected Input:
              Enter a number: 29

              Expected Output:
              Enterd number is a prime number
        Case 3:
              Expected Input:
              Enter a number: 97

              Expected Output:
              Enterd number is a prime number
    Conclusion:
    Thus, the program successfully determines whether the entered number is a prime number or not using a simple logical approach.
*/



#include <stdio.h>

int main()
{
    int num, i, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1)
    {
    printf("Enterd number is not a prime number");
    return 0;
    }
    for ( i =2;i<num;i++)
    {
    if (num%i==0)
    {
    n=1;
    break;
    }
    }
    if(n==1)
    {
    printf("Entered number is not a prime number");
    }
    else if (n==0)
    {
    printf("Enterd number is a prime number");
    }
    else 
    {
    printf("Enter invalid input");
    }
} 