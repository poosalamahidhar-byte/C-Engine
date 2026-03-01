/*
    Name Of The Program: Decimal to Octal and Hex Converter
    Author Of The Program:mahidhar
    Purpose Of The Program: To convert a given decimal integer into its equivalent octal and hexadecimal numbers using C.
    Date On Which The Program Is Written: 01-03-2026
    Description Of The Program (In My Own Words): This program reads a decimal integer from the user and displays its equivalent octal and hexadecimal values using format specifiers in C.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:
              Enter any decimal integer : 1358

              Expected Output:
              The equivalent Octal number is  : 2516
              
              The equivalent Hexadecimal number is : 54e

        Case 2:
              Expected Input:
              Enter any decimal integer : 777

              Expected Output:
              The equivalent Octal number is  : 1411

              The equivalent Hexadecimal number is : 309
    Conclusion: Thus, the program successfully converts a decimal integer into its equivalent octal and hexadecimal numbers using C format specifiers.
*/




#include<stdio.h>
int main()
   {
    int n;
    printf("Enter any decimal integer : ");
    scanf("%d",&n);
    printf("\n\nThe equivalent Octal number is  : %o\n",n);
    printf("\n\nThe equivalent Hexadecimal number is : %x\n",n);
   }