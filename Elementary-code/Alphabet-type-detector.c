/*
    Name Of The Program:Alphabet type detector
    Author Of The Program:mahidhar
    Purpose Of The Program: To check whether the entered character is an alphabet and determine if it is a vowel or a consonant.
    Date On Which The Program Is Written: 02-03-2026
    Description Of The Program (In My Own Words):This program reads a character from the user and checks whether it is an alphabet. If it is an alphabet, it determines whether it is a vowel or a consonant using conditional statements and a switch case.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:
              Enter any character : 9


              Expected Output:
              9 is not an alphabet
        Case 2:
              Expected Input:
              Enter any character : A


              Expected Output:
              A is an alphabet and a vowel
        Case 3:
              Expected Input:
              Enter any character : r


              Expected Output:
              r is an alphabet and a consonant
    Conclusion:
    This program successfully identifies whether the given character is an alphabet and determines if it is a vowel or a consonant based on the input
*/




#include<stdio.h>
int main()
  {
   char ch;
   printf("Enter any character : ");
   scanf("%c",&ch);
   if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
   {
    switch(ch)
    {
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     printf("%c is an alphabet and a vowel\n\n",ch);
     break;
     default:
     printf("%c is an alphabet and a consonant\n\n",ch);
    }
   }
   else
   {
    printf("%c is not an alphabet\n",ch);
   }
  }