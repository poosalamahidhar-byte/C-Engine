/*
    Name Of The Program:Checking whether entered number is divisible by 13 or not
    Author Of The Program:Mahidhar 
    Purpose Of The Program:To check whether a given integer is divisible by 13 or not divisible by 13.
    Date On Which The Program Is written:13-10-2025
    Description Of The Program (In My Own Words):
    Expected Input And Expected OutputsThis program asks the user to enter an integer number.
After the user enters the number, the program checks whether the number is divisible by 13 or not.

To do this, it uses the modulus operator (%) which gives the remainder when the number is divided by 13.

If the remainder is 0, it means the number is exactly divisible by 13.

Otherwise, it is not divisible by 13.


Finally, the program prints a message telling the user whether the entered number is divisible by 13 or not.
        Case 1:
              Expected Input:26

              Expected Output:entered number is divisible by 13
        Case 2:
              Expected Input:117

              Expected Output:entered number is divisible by 13
        Case 3:
              Expected Input:69

              Expected Output:entered number is not divisible by 13
    Conclusion:
*/
#include<stdio.h>
int main()
{
int a;
printf("enter number the number :");
scanf("%d",&a);
if(a%13==0){
printf("entered number is divisible by 13");
}
else{
printf("entered number is not divisible by 13");
}
}
