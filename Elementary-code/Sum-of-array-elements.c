/*
    Name Of The Program:sum-of-array-elements
    Author Of The Program:mahidhar
    Purpose Of The Program:To calculate and display the sum of elements in an array.
    Date On Which The Program Is Written: 16-12-25
    Description Of The Program (In My Own Words):This program reads a set of integers into an array and calculates the sum of all the elements in the array, then displays the total sum.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input: size of an array=5
              1
              2
              3
              4
              5
              Expected Output:15
        Case 2:
              Expected Input:
              size of an array=3
              1
              2
              3
              Expected Output:6
        Case 3:
              Expected Input:size of an array=1
              1

              Expected Output:1
    Conclusion:The program successfully calculates and displays the sum of all elements in the given array based on the user’s input.
*/
 
 
 
 
 
 
 #include<stdio.h>
int main()
{
int size;
printf("enter the size of the array :");
scanf("%d",&size);
int arr [size];


for(int i=0;i<size;i++)
{
scanf("%d", &arr[i]);
}


int sum=0;

for (int i=0;i<size;i++)
{
sum=sum+arr[i];
}


printf("%d",sum);
}