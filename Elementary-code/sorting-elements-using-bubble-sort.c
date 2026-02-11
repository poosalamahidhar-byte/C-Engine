/*
    Name Of The Program: Sorting elemnts using bubble sort method
    Author Of The Program: mahidhar
    Purpose Of The Program: To sort elemnts in ascending order
    Date On Which The Program Is Written: 11-02-2026
    Description Of The Program (In My Own Words): This C program sorts an array of integers in ascending order using the Bubble Sort algorithm.
    Expected Output:

              Expected Output: 
              Sorted array:
              1 2 3 4 5 6 8 9
    Conclusion: This program successfully sorts the given array in ascending order using the Bubble Sort algorithm. It repeatedly compares and swaps adjacent elements until the array is arranged in proper order.
*/


#include <stdio.h>

int main()
{
    int a[] = {6, 2, 4, 9, 1, 8, 5, 3};
    int n = 8, i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}