/*
    Name Of The Program: Finding Binary equlivalent numbers of numbers between 0 to 255.
    Author Of The Program:mahidhar
    Purpose Of The Program:To Find Binary number of a given number instantly without complicated calculations.
    Date On Which The Program Is Written: 25-01-2026
    Description Of The Program (In My Own Words): This C program reads an integer between 0 and 255 from the user, checks whether the input is valid, and then converts the number into its 8-bit binary equivalent using bitwise right shift and AND operations.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:
              Enter any number between 0 to 255 : 10

              Expected Output:
              Binary equlivalent = 00001010
        Case 2:
              Expected Input:
              Enter any number between 0 to 255 : 12
              

              Expected Output:
              Binary equlivalent = 00001100
              
        Case 3:
              Expected Input:
             Enter any number between 0 to 255 : 254
             
              

              Expected Output:
              Binary equlivalent = 11111110
              
    Conclusion: The program successfully converts a valid decimal number (0–255) into its 8-bit binary representation using bitwise operations, ensuring accurate and efficient conversion.
*/

#include<stdio.h>
int main()
    { 
     int n,i;
     printf("Enter  Any number between 0 to 255 : ");
     scanf("%d",&n);
     
     if(n<0 || 255<n)
     { 
      printf("Invalid number!please enter the number between 0 to 255");
     }
     
     printf("Binary equlivalent = ");
     
     for(i = 7 ; i>=0 ; i--)
     {
      printf("%d",(n>>i)&1);
     }
     return 0;
    }