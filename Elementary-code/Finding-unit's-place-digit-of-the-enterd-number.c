/*
    Name Of The Program:Finding one's place digit of the given number.
   
    Author Of The Program:mahidhar
    
    Purpose Of The Program:The purpose of the program is to find the one's place of the digit very easily.
    

    Date On Which The Program Is Written:25-02-2026
    

    Description Of The Program (In My Own Words): 
    This C program takes an integer input from the user and finds the one’s place digit by using the modulus operator (% 10).
    It then prints the extracted digit.
   
    Expected Input And Expected Outputs:

        Case 1:
              Expected Input:Enter any number = 15648448
              Expected Output:
              The one's place digit of the 15648448 is : 8
        Case 2:
              Expected Input:
              Enter any number = 2026
              

              Expected Output:
              The one's place digit of the 2026 is : 6
              
 Conclusion: We can find the one's place digit of the given number very easily whether the given is too long!!

*/





#include<stdio.h>
int main()
{
	int number,ones;
	printf("Enter any number = ");
	scanf("%d",&number);
	ones = number % 10;
	printf("The one's place digit of the %d is : %d",number,ones );
	
}