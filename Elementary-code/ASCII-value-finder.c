/*
    Name Of The Program: ASCII Value Finder.
    Author Of The Program: mahidhar
    Purpose Of The Program: To Findout the ASCII value of any entered charcter.
    Date On Which The Program Is Written: 28-02-2026
    Description Of The Program (In My Own Words): This program reads a character from the user and displays its corresponding ASCII value using the C programming language.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:
              Enter any charcter : A

              Expected Output:
              ASCII value of A = 65
        Case 2:
              Expected Input:
              Enter any charcter : @

              Expected Output:
              ASCII value of @ = 64
        Case 3:
              Expected Input:
              Enter any charcter : 2

              Expected Output:
              ASCII value of 2 = 50
    Conclusion: Thus, the program successfully prints the ASCII value of the given character.
*/


#include<stdio.h>
int main()
   {
    char ch;
    printf("Enter any charcter : ");
    scanf("%c",&ch);
    printf("\nASCII value of %c = %d",ch,ch);
   }