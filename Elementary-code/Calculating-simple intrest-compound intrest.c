/*
    Name Of The Program:Calculating-simple intrest-compound intrest
    Author Of The Program:mahidhar
    Purpose Of The Program:This C program calculates and displays the Simple Interest and Compound Interest for a given principal amount, annual interest rate, and time period entered by the user.
    Date On Which The Program Is Written: 26-12-2025
    Description Of The Program (In My Own Words):The program takes the principal amount, annual interest rate, and time in years as input from the user, then computes and prints the corresponding simple interest and compound interest using standard mathematical formulas.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input: 
              Enter principle amount = 2000
              Enter annual rate = 20
              Enter Time in years = 1

              Expected Output:
             Simple Interest = 400.00
             Compound Interest = 2400.00
        Case 2:
              Expected Input:
             Enter principle amount: 50000
             Enter annual rate: 500
             Enter time in years: 2

              Expected Output:
             Simple Interest = 500000.00
             Compound Interest = 1800000.00
    Conclusion:The program successfully demonstrates how to calculate simple and compound interest in C by using user input, arithmetic operations, and the pow() function for accurate financial calculations.
*/
#include<stdio.h>
#include <math.h>

int main()
          {
            float rate, principle, time;
            float simple_interest, compound_interest;

             printf("Enter principle amount: ");
             scanf("%f", &principle);

             printf("Enter annual rate: ");
             scanf("%f", &rate);

             printf("Enter time in years: ");
             scanf("%f", &time);

             simple_interest = (principle * rate * time) / 100;
             compound_interest = principle * pow((1 + rate / 100), time);

             printf("Simple Interest = %.2f\n", simple_interest);
             printf("Compound Interest = %.2f\n", compound_interest);

             return 0;
}