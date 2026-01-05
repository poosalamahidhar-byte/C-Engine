/*
    Name Of The Program: Converting temperature from fahrenheit to celsius 
    Author Of The Program: mahidhar
    Purpose Of The Program: To easily convert temperature from fahrenheit to celsius 
    Date On Which The Program Is Written: 05-01-2025
    Description Of The Program (In My Own Words):
   This program reads a temperature in Fahrenheit from the user, converts it into Celsius using the standard conversion formula, and displays the result.
    
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:
              Enter the temperature in fahrenheit : 30

              Expected Output:
              Temperature in celsius : -1.111111
        Case 2:
              Expected Input:
              Enter the temperature in fahrenheit : 72

              Expected Output:
              Temperature in celsius : 22.222221
        Case 3:
              Expected Input:
              Enter the temperature in fahrenheit : 32

              Expected Output:
              Temperature in celsius : 0.000000
    Conclusion: 
    To conclude that this program helps to convert temperature from fahrenheit to celsius very easily with out heavy calculations and as well as it saves our valuable time.
*/




#include<stdio.h>
int main()
          {
          float fahrenheit, celsius;
          printf("Enter the temperature in fahrenheit : ");
          scanf("%f",&fahrenheit);
          
          celsius = (5.0/9.0)*(fahrenheit-32); 
          
          printf("Temperature in celsius : %f\n",celsius);
          }