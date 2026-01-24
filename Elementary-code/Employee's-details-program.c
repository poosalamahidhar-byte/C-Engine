/*
    Name Of The Program: Employee details program
    Author Of The Program: mahidhar
    Purpose Of The Program: To store and display employee ID and salary details using structures in C.
    Date On Which The Program Is Written: 20 - 01- 2026
    Description Of The Program (In My Own Words):  This program uses a structure to store employee ID and salary, accepts details for multiple employees, and displays the entered information.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:
              Enter the number of employees : 2

              Enter the details of the employee-1
              Enter the name : mahesh
              Enter the ID :45238
              Salary : 500000

              Enter the details of the employee-2
              Enter the name : rakesh
              Enter the ID :76543
              Salary : 70000

              Expected Output:
              ---Details of employees---
              Employee-1 Name : mahesh
              Employee ID : 45238
              salary : 500000.00
              Employee-2 Name : rakesh
              Employee ID : 76543
              salary : 70000.00
        
    Conclusion: Thus, the program successfully stores and displays employee salary details using structures in C.
*/



#include<stdio.h>
struct employee
{
  int ID;
  float salary;
  char Name[50];
};
  int main()
  {
    struct employee emp[100];
    int n,i;
    printf("Enter the number of employees : ");
    scanf("%d",&n);
     if ( n>100 || n<=0)
     {
       printf("Invalid number of employees!max(100)");
     }
     
     for (i = 0; i<n;i++)
     {
       printf("\nEnter the details of the employee-%d\n",i+1);
       printf("Enter the name : ");
       scanf("%s",&emp[i].Name);
       printf("Enter the ID :");
       scanf("%d",&emp[i].ID);
       printf("Salary : ");
       scanf("%f",&emp[i].salary);
     }
       
       printf("\n---Details of employees---\n");
       for(i=0;i<n;i++)
       {
       printf("Employee-%d Name : %s\n",i+1,emp[i].Name);
       printf("Employee ID : %d \n",emp[i].ID);
       printf("salary : %.2f\n",emp[i].salary);
       }
}