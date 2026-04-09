/*
* File Owner: Rahul Krishna
* PRN: 1262250870
* Batch: I2
* Description: This program checks if a given three-digit number is an Armstrong number or not. An Armstrong number is a number that is equal to the sum of the cubes of its digits.
*/


//Library Included:
#include <stdio.h>

//Main:
int main()
{
    int num, original, digit;
    int sum = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}