/*
    Name Of The Program     : compute_sum_two_numbers
    Author Of The Program   : Mahidhar
    Purpose Of The Program  : To compute the sum of two given integers.
    Date Written            : 12-10-2025

    Description Of The Program (In My Own Words):
        This program prompts the user to enter two integer values.
        After receiving the inputs, it performs an arithmetic addition
        and displays the sum of the entered numbers. The program demonstrates
        basic input handling, processing, and output formatting in C.

    Expected Input And Expected Outputs:
        Case 1:
            Expected Input  : 2 4
            Expected Output : 6

        Case 2:
            Expected Input  : 553 7882
            Expected Output : 8435

        Case 3:
            Expected Input  : 7373 -2626
            Expected Output : 4747

    Conclusion:
        This program successfully reads two integers from the user,
        computes their sum, and displays the result. It helps beginners
        understand basic input/output operations and arithmetic processing in C.
*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("\nEnter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nSum of %d and %d = %d\n", a, b, a + b);

    return 0;
}
