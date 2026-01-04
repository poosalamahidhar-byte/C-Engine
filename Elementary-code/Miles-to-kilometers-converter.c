/*
    Name Of The Program: miles to kilometers converter
    Author Of The Program: mahidhar
    Purpose Of The Program: To convert a given distance from miles into kilometers using a simple C program.
    Date On Which The Program Is Written: 04-01-2026
    Description Of The program (In My Own Words): This program accepts distance in miles from the user, converts it into kilometers using the standard conversion factor, and displays the result.
    Expected Input And Expected Outputs: 
        Case 1:
              Expected Input:
              Enter the distance in miles = 600

              Expected Output:
              Distance in kilometers = 965.40
        Case 2:
              Expected Input:
              Enter the distance in miles = 1

              Expected Output:
              Distance in kilometers = 1.61
        Case 3:
              Expected Input:
             Enter the distance in miles = 9876

              Expected Output:
              Distance in kilometers = 15890.48
    Conclusion:
   Thus, the program successfully converts distance from miles to kilometers and displays the correct output.
*/




#include<stdio.h>
int main()
          {
          float miles,kilometers;
          printf("Enter the distance in miles = ");
          scanf("%f",&miles);
          
          kilometers = miles * 1.609 ;
          printf("Distance in kilometers = %.2f\n",kilometers);
          }
          