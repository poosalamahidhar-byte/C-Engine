/*
    Name Of The Program:Time-format-converter
    Author Of The Program:Mahidhar
    Purpose Of The Program:To calculate the product of two numbers and convert it into a valid 12-hour clock time, or display “invalid time” if it’s not valid.
    Date On Which The Program Is Written:18-11-2025
    Description Of The Program (In My Own Words):
    Expected Input And Expected Outputs:This program reads two integer values, multiplies them, and treats the result as an hour value. It then checks whether the hour is valid and converts it into a 12-hour clock format. If the calculated hour is outside the valid range (1–24), the program displays “invalid time.”


        Case 1:
              Expected Input:13

              Expected Output:1
        Case 2:
              Expected Input:15

              Expected Output:3
        Case 3:
              Expected Input:4

              Expected Output:4
    Conclusion:
*/
#include<stdio.h>

int main()
{
int x;
scanf("%d",&x);
int y;
scanf("%d",&y);
int time=x*y;
if(time>=1&&time<=12)
printf("%d",time);
else if(time>=13&&time<=24)
{
time=time-12;
printf("%d",time);
}
else if (time<=0||time>=25)
printf("invalid time");
}
