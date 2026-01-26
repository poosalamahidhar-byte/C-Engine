/*
    Name Of The Program:pointer to array program
    Author Of The Program:mahidhar
    Purpose Of The Program: To read elements into an array using a pointer and display them using array indexing.
    Date On Which The Program Is Written: 26 - 01 - 2026
    Description Of The Program (In My Own Words): This C program demonstrates how pointers can be used to access array elements.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:
              Enter the number of elements : 6

              Enter the 6 elements : 1
              2
              3
              4
              5
              6


              Expected Output:
              The array elements are :
              1

              2

              3

              4

              5

6
        Case 2:
              Expected Input:
              Enter the number of elements : 2

              Enter the 2 elements : 60
              90
              Expected Output:
              The array elements are :
              60

              90
        Case 3:
              Expected Input:
              Enter the number of elements : 10

              Enter the 10 elements : 20
              50
              70
              90
              100
              1000
              500
              2
              7
              8
              Expected Output:
              The array elements are :
              20

              50

              70

              90

              100

              1000

              500

              2

              7

              8
    Conclusion:
    Thus, the program successfully demonstrates the use of pointers with arrays in C.
*/


#include<stdio.h>
int main()
   {
    int a[100],n,i;
    int *ptr;
    ptr = a;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    
    printf("\nEnter the %d elements : ",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",(ptr+i));
    }
    printf("The array elements are : ");
    for (i=0;i<n;i++)
    {
    printf("\n%d\n",a[i]);
    }
    return 0;
   }      