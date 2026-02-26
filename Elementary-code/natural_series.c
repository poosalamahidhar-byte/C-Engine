/*
    Name Of The Program: natural_series
    Author Of The Program:mahidhar
    Purpose Of The Program: This program calculates the sum and sum of squares of the first n natural numbers using mathematical formulas.
    Date On Which The Program Is Written: 26-02-2026
    Description Of The Program (In My Own Words): This program takes a number n as input and calculates the sum of the first n natural numbers and the sum of their squares using formula-based calculations.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:
              Enter the  number of natural numbers : 7

              Expected Output:
              Sum of 7 natural numbers : 28

              Sum of square of 7 natural numbers : 140
        Case 2:
              Expected Input:
              Enter the  number of natural numbers : 10
              
              Expected Output:
              Sum of 10 natural numbers : 55

              Sum of square of 10 natural numbers : 385
    Conclusion: The program successfully computes the sum and sum of squares of the first n natural numbers efficiently using mathematical formulas.
*/


#include<stdio.h>
int main()
{
 int n;
 long long int sum;
 long long int sum_square;
 printf("Enter the  number of natural numbers : ");
 scanf("%d",&n);
 sum = (long long)n*(n+1)/2;
 sum_square = (long long)n*(n+1)*(2*n+1)/6;
 printf("\n\nSum of %d natural numbers : %lld\n\n",n,sum);
 printf("Sum of square of %d natural numbers : %lld\n",n,sum_square);
}