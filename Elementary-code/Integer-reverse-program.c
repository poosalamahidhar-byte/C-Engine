/*
    Name Of The Program:Integer-reverse-program
    Author Of The Program:mahidhar
    Purpose Of The Program:To reverse a given integer number.
    Date On Which The Program Is Written: 13-12-2025
    Description Of The Program (In My Own Words):This program reads an integer from the user and uses a while loop to reverse its digits and display the reversed number.
    Expected Input And Expected Outputs:
        Case 1:
              Expected Input:125

              Expected Output:521
        Case 2:
              Expected Input:121

              Expected Output:121
        Case 3:
              Expected Input:678

              Expected Output:876
    Conclusion:
*/
#include <stdio.h>

int main() {
    int n, rev = 0;
    scanf("%d", &n);

    while(n != 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    printf("Reverse = %d", rev);
    return 0;
}
