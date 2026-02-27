/*
    Name Of The Program: Uppercase to Lowercase Converter.
    Author Of The Program: mahidhar
    Purpose Of The Program: To convert an uppercase character entered by the user into its lowercase equivalent using ASCII value manipulation in C.
    Date On Which The Program Is Written: 27-02-2026
    Description Of The Program (In My Own Words): This program takes an uppercase character as input from the user and converts it into its lowercase character by adding 32 to its ASCII value, then displays the result.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:
              Enter any uppercase character : Z



              Expected Output:
              Lowercase character of entered uppercase character : z
        Case 2:
              Expected Input: 
              Enter any uppercase character : F


              Expected Output:
              Lowercase character of entered uppercase character : f
    Conclusion:
    This program successfully converts an uppercase character to lowercase using ASCII value logic in C.
*/




#include<stdio.h>
int main()
   {
    char ch;
    printf("Enter any uppercase character : ");
    scanf("%c",&ch);
    ch = ch + 32;
    printf("\nLowercase character of entered uppercase character : %c",ch);
   }
    