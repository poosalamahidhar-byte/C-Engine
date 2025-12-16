/*
    Name Of The Program:program-to-print-multiplication -table
    Author Of The Program:mahidhar
    Purpose Of The Program:The purpose of this program is to generate and display the multiplication table of a given number up to a user-specified number of rows using a for loop in C.

    Date On Which The Program Is Written: 13-10-2025
    Description Of The Program (In My Own Words):This program prints the multiplication table of a given number up to the specified number of rows.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input: 5 table

              Expected Output: 5×1=5
                               5×2=10
        Case 2:
              Expected Input: 7 table

              Expected Output: 7×1=7
                                7×2=14
        Case 3:
              Expected Input: 9 table

              Expected Output: 9×1=9 
                                9×2=18
    Conclusion:
*/
#include <stdio.h> 
 
int main() { 
 int number, rows; 
 
 // Input the number and number of rows 
 printf("Enter the number: "); 
 scanf("%d", &number); 
 
 printf("Enter the number of rows: "); 
 scanf("%d", &rows); 
 
 // Print the multiplication table 
 for (int i = 1; i <= rows; i++) { 
 printf("%d * %d = %d\n", number, i, number * i); 
 } 
 
 return 0; 
} 
