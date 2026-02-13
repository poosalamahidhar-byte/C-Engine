/*
    Name Of The Program: Real and Imaginary Roots Finder
    Author Of The Program:mahidhar
    Purpose Of The Program: To write a C program to find the roots of a quadratic equation of the form
    Date On Which The Program Is Written: 13-02-2026
    Description Of The Program (In My Own Words): This program calculates the roots of a quadratic equation .
It first finds the discriminant .
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:
             Enter the value a,b,c :
             1
             -3
             2

             Expected Output:
             root1=2.000000,root2=1.000000
        Case 2:
              Expected Input:
              Enter the value a,b,c :
              1
              2
              5

              Expected Output:
              roots are imaginary
    Conclusion:
    Thus, the C program successfully calculates the roots of a quadratic equation using the discriminant and determines whether the roots are real or imaginary.
*/




#include<stdio.h>
#include<math.h>
int main()
   { 
    float a,b,c,d,root1,root2;
    printf("Enter the value a,b,c : \n");
    scanf("%f%f%f",&a,&b,&c);
    d = (b*b)-(4*a*c);
    if(d>=0)
    {
     root1 = (-b+sqrt(d))/(2*a);
     root2 = (-b-sqrt(d))/(2*a);
     printf("root1=%f,root2=%f",root1,root2);
    }
    else
    {
     printf("roots are imaginary");
    }
    return 0;
   }