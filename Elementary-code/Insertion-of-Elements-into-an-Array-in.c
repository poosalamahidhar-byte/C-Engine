/*
    Name Of The Program: Insertion of Elements into an Array in C.
    Author Of The Program:mahidhar
    Purpose Of The Program:To store integer values in an array and display the elements using a loop.
    Date On Which The Program Is Written:06-03-2026
    Description Of The Program (In My Own Words):This program declares an integer array of size 4 and initializes some values. Another value is assigned later to the array. A for loop is used to access and print each element of the array.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Output:
              7 13 5 10
    Conclusion:Thus, the program successfully demonstrates how to store and display elements of an array in C using a loop.
*/


#include<stdio.h>
int main()
   {
    int arr[4] = {7,13,5};
    arr[3] = 10;
    for(int i = 0; i<4 ;i++)
    {
     printf("%d ",arr[i]);
    }
     return 0;
   }
