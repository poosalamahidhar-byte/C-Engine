/*
    Name Of The Program: Sum of Even Number Between Limits
    Author Of The Program:mahidhar
    Purpose Of The Program:To find the sum of even numbers between two given limits.
    Date On Which The Program Is Written:03-03-2026
    Description Of The Program (In My Own Words):This program takes a lower and upper limit as input and calculates the sum of all even numbers within that range using a loop.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:
              Enter the lower limit : 3
              Enter the upper limit : 6

              Expected Output:
              The sum of even integers between the entered lowerlimit and upperlimit is : 10

        Case 2:
              Expected Input:
              Enter the lower limit : 10
              Enter the upper limit : 20


              Expected Output:
              The sum of even integers between the entered lowerlimit and upperlimit is : 90

        Case 3:
              Expected Input:
              Enter the lower limit : 1
              Enter the upper limit : 10


              Expected Output:
              The sum of even integers between the entered lowerlimit and upperlimit is : 30

    Conclusion:The program efficiently calculates and displays the sum of even numbers between the given limits.
*/




#include<stdio.h>
int main()
   {
     int n1,n2,sum=0;
     printf("Enter the lower limit : ");
     scanf("%d",&n1);
     printf("Enter the upper limit : ");
     scanf("%d",&n2);
     if(n1 % 2 != 0)
     {
      n1 = n1 + 1;
     }
     while(n1<=n2)
     {
      sum = sum + n1;
      n1 = n1 + 2;
     }
     printf("\nThe sum of even integers between the entered lowerlimit and upperlimit is : %d",sum);
     return 0;
   }