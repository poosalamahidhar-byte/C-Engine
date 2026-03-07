/*
    Name Of The Program: Array Element Deletion Program
    Author Of The Program:mahidhar
    Purpose Of The Program:To demonstrate how to delete an element from an array and display the remaining elements.
    Date On Which The Program Is Written:07-03-2026
    Description Of The Program (In My Own Words):This program initializes an array with four elements. It uses a loop to print only the first three elements of the array, which simulates the deletion of the last element. The for loop controls how many elements are displayed.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Output:10 20 30
    Conclusion:The program shows a simple method to represent deletion in an array by limiting the number of elements printed using a loop.
*/



#include<stdio.h>
int main()
   {
    int arr[4] = {10,20,30,40};
    int n = 3;
    for(int i = 0; i<n ;i++)
    {
     printf("%d ",arr[i]);
    }
     return 0;
   }
    