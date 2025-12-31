/*
    Name Of The Program : Print_Array_In_Reverse.c
    Purpose Of The Program:To read elements of an array from the user and display the array elements in reverse order.
    Date On Which The Program Is Written: 31-12-2025
    Description Of The Program (In My Own Words): This program takes the size of an array as input, accepts the array elements from the user, and then prints the elements in reverse order using a loop.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input: 
             Enter the size of array : 4


             Enter the #0 elements : 3
             Enter the #1 elements : 2
             Enter the #2 elements : 1
             Enter the #3 elements : 0

             Expected Output: 
             Reversed elements are :

                   0
                   1
                   2
                   3
              
        Case 2:
              Expected Input:
              Enter the size of array : 5


              Enter the #0 elements : 4
              Enter the #1 elements : 3
              Enter the #2 elements : 2
              Enter the #3 elements : 1
              Enter the #4 elements : 0
              
              Expected Output:
             Reversed elements are :

                     0
                     1
                     2
                     3
                     4
        
    Conclusion: The program  successfully demonstrates how to store array elements and reverse their order using loops in C, helping to understand array traversal and indexing.
    
*/
#include<stdio.h>

int main()
         {
          int size;
          printf("Enter the size of array : ");
          scanf("%d",&size);
          printf("\n\n");
          int arr[size];
         for(int i=0;i<size;i++){
             printf("Enter the #%d elements : ",i);
             scanf("%d",&arr[i]);
         }
         for(int i=size-1;i>=0;i--){
            if(i == size-1){
                printf("\nReversed elements are : \n\n");
                printf("%d\n",arr[i]);
            }else{ 
                printf("%d\n",arr[i]);
            }
         }   
         return 0;
        }