/*
    Name Of The Program: Matrix-sum
    Author Of The Program:mahidhar
    Purpose Of The Program:This program calculates the sum of two matrices by adding their corresponding elements.
    Date On Which The Program Is Written:24-12-25
    Description Of The Program (In My Own Words):This C program performs matrix addition by taking two user-defined matrices and calculating their sum element-wise.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input: 
              Enter the number of rows: 2
Enter the number of columns: 2
Enter elements of matA:
matA[0][0] Element: 2
matA[0][1] Element: 2
matA[1][0] Element: 2
matA[1][1] Element: 2

Your Matrix:
2 2
2 2
Enter elementsof matB :
 matB[0] [0] Element2
matB[0] [1] Element2
matB[1] [0] Element2
matB[1] [1] Element2

Your Matrix:
2 2
2 2

              Expected Output: 
        Sum of two two matrices is :


               4      4
               4       4
        case 2:
              Expected Input:
             Enter the number of rows: 3
Enter the number of columns: 3
Enter elements of matA:
matA[0][0] Element: 2
matA[0][1] Element: 2
matA[0][2] Element: 2
matA[1][0] Element: 2
matA[1][1] Element: 2
matA[1][2] Element: 2
matA[2][0] Element: 2
matA[2][1] Element: 2
matA[2][2] Element: 2

Your Matrix:
2 2 2
2 2 2
2 2 2
Enter elementsof matB :
 matB[0] [0] Element2
matB[0] [1] Element2
matB[0] [2] Element2
matB[1] [0] Element2
matB[1] [1] Element2
matB[1] [2] Element2
matB[2] [0] Element2
matB[2] [1] Element2
matB[2] [2] Element2

Your Matrix:
2 2 2
2 2 2
2 2 2
Sum of two two matrices is :


 4      4       4
4       4       4
4       4       4



              Expected Output:
              
        Sum of two two matrices is :


 4      4       4
4       4       4
4       4       4

    Conclusion:
   This program demonstrates the practical application of multi-dimensional arrays and nested for loops in C. By iterating through corresponding indices i and j, it effectively performs the operation sum[i][j] = matA[i][j] + matB[i][j]. This logic serves as a foundational building block for more complex matrix operations like subtraction, transposition, or multiplication.
*/
#include <stdio.h>

int main() {
    int rows, columns, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    
    int matA[rows][columns], matB[rows][columns], sum[rows][columns];

    printf("Enter elements of matA:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < columns; j++) 
        {
            printf("matA[%d][%d] Element: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    
    printf("\nYour Matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++) 
        {
            printf("%d ", matA[i][j]);
        }
            printf("\n");
    }

    
     printf("Enter elementsof matB : \n ");
     for(i=0;i<rows;i++)
     {
        for(j=0;j<columns;j++)
          {
            printf("matB[%d] [%d] Element",i,j);
            scanf("%d",&matB[i][j]);
     }
          }
    
        printf("\nYour Matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++) 
        {
            printf("%d ", matB[i][j]);
        }
            printf("\n");
    }
    
    
    printf("Sum of two two matrices is : \n\n\n ");
     for(i=0;i<rows;i++)
       {
         for(j=0;j<columns;j++)
     {
      sum[i][j]=matA[i][j]+matB[i][j];
      printf("%d\t",sum[i][j]);
     }
     printf("\n");
     }
     }