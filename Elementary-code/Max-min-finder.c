/*
    Name Of The Program: max-min-finder
    Author Of The Program:mahidhar
    Purpose Of The Program:The purpose of this program is to accept a user-defined number of integers and determine the maximum and minimum values among them using a loop and conditional statements.
    Date On Which The Program Is Written: 19-12-2025
    Description Of The Program (In My Own Words):This program asks the user to enter how many numbers they want to input, reads those numbers one by one, and compares them to find and display the largest and smallest values.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:4
                  Enter #1 Number : 3
                  Enter #2 Number : 55
                  Enter #3 Number : 2
                  Enter #4 Number : 44
              Expected Output:
                   Max_val = 55
                   Min_val = 2
        Case 2:
              Expected Input:5
                  Enter #1 Number : 3
                  Enter #2 Number : 55
                  Enter #3 Number : 2
                  Enter #4 Number : 44
                  Enter #3 Number : 57
                  Enter #4 Number : 77
                  Enter #5 number : 90
              

              Expected Output:    
                    max_val = 10
                    min_val = 90
        Case 3:
              Expected Input:2
                  Enter #1 Number : 7
                  Enter #2 Number : 777
                  

              Expected Output:
                  max_val = 777
                  min_val = 7
    Conclusion:The program successfully identifies the maximum and minimum values from user-entered numbers, demonstrating the effective use of loops, conditional statements, and user input handling in C.
*/
#include<stdio.h>
int main(void)
{
int i, n , num , max_val , min_val;
printf("Enter Number Of Integers You Want To Give : ");
scanf("%d", &n);

for( i=1 ; i<=n ; i++){
    printf("Enter #%d Number : ", i);
    scanf("%d",&num);
    if(i==1){
        max_val = min_val = num;
    }else if(num>max_val){
        max_val=num;
    }else if(num<min_val){
        min_val=num;
    }
  }    
  
  printf("Max_val = %d\n",max_val);
  printf("Min_val = %d\n",min_val);
}  