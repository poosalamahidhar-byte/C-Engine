/*
    Name Of The Program:Subjects-marks-calculator-using-array
    Author Of The Program:mahidhar
    Purpose Of The Program:To calculate the total (sum) and average of marks entered by the user for a given number of subjects.
    Date On Which The Program Is Written: 21-12-2025
    Description Of The Program (In My Own Words):This program takes the number of subjects and their marks as input from the user, stores them in an array, calculates the total marks, and then computes and displays the average marks.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:Enter Number Of subjects:4
                      Enter #1th number subject Marks : 65
                      Enter #2th number subject Marks :45
                      Enter #3th number subject Marks :76
                      Enter #4th number subject Marks :47
              Expected Output:  sum of 4 subject Marks:233
                           Average marks of 4 subjects:58
                 
        Case 2:
              Expected Input: Enter Number Of subjects:5
                      Enter #1th number subject Marks : 65
                      Enter #2th number subject Marks :55
                      Enter #3th number subject Marks :45
                      Enter #4th number subject Marks :35
                      Enter #5th number subject Marks : 25
                      
              Expected Output:sum of 5 subject Marks:225
                         Average marks of 5 subjects:45
        Case 3:
              Expected Input:Enter Number Of subjects:3
                      Enter #1th number subject Marks : 97
                      Enter #2th number subject Marks : 95
                      Enter #3th number subject Marks : 93
              Expected Output:sum of 3 subject Marks  : 285
                         Average marks of 3 subjects  : 95
        
    Conclusion:This program takes subject marks from the user, stores them in an array, and efficiently calculates and displays the total and average marks using a loop.
*/
#include<stdio.h>
int main(){
    int size , sum=0;
    printf("\nEnter Number Of Subjects : ");
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        printf("\nEnter #%dTh subject marks : ",1+i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("\nSum Of %d Subjects Marks = %d\n",size,sum);
    printf("\nAverage Marks Of %d Subjects = %d\n",size,sum/size);

}